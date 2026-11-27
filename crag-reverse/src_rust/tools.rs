//! Reconstructed `craggemini_core::tools` — native web/image tools and SSE filtering.
//! Addresses: `filter_sse_for_client` 0x15f2d0, `aggregate_sse_to_json` 0x2d85a0,
//! `nearest_aspect_ratio`, `map_image_size`, `parse_tool_choice`, `parse_native_*`.
#![allow(dead_code, unused)]

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ClientTool {
    pub name: String,
    #[serde(default)]
    pub mcp_name: String,
    #[serde(default)]
    pub public_name: String,
    #[serde(default)]
    pub schema: Value,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ToolChoice {
    #[serde(rename = "type")]
    pub kind: String,
    #[serde(default)]
    pub name: Option<String>,
    #[serde(default)]
    pub disable_parallel: bool,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct WebSearchConfig {
    #[serde(default)]
    pub allowed_domains: Vec<String>,
    #[serde(default)]
    pub blocked_domains: Vec<String>,
    #[serde(default)]
    pub search_context_size: Option<String>,
    #[serde(default)]
    pub user_location: Option<Value>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct WebFetchConfig {
    #[serde(default)]
    pub allowed_domains: Vec<String>,
    #[serde(default)]
    pub blocked_domains: Vec<String>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct ImageGenConfig {
    #[serde(default)]
    pub size: Option<String>,
    #[serde(default)]
    pub aspect_ratio: Option<String>,
    #[serde(default)]
    pub n: Option<u32>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct InlineMedia {
    #[serde(rename = "mimeType", default)]
    pub mime_type: String,
    #[serde(default)]
    pub data: String,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct GeneratedImage {
    #[serde(default)]
    pub b64: String,
    #[serde(default)]
    pub mime_type: String,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct NativeToolRequest {
    #[serde(default)]
    pub kind: String,
    #[serde(default)]
    pub payload: Value,
}

/// `tools::parse_tool_choice`.
pub fn parse_tool_choice(value: Option<&Value>) -> Result<ToolChoice, String> {
    let Some(value) = value else {
        return Ok(ToolChoice {
            kind: "auto".into(),
            name: None,
            disable_parallel: false,
        });
    };
    let kind = value.get("type").and_then(Value::as_str).unwrap_or("auto");
    let name = value
        .get("name")
        .and_then(Value::as_str)
        .map(str::to_string);
    if kind == "tool" && name.is_none() {
        return Err("tool_choice.type=tool requires name".into());
    }
    Ok(ToolChoice {
        kind: kind.into(),
        name,
        disable_parallel: value
            .get("disable_parallel_tool_use")
            .and_then(Value::as_bool)
            .unwrap_or(false),
    })
}

/// `tools::parse_tools_and_config`: separates client tools from native tool configs.
pub fn parse_tools_and_config(
    body: &Value,
) -> Result<
    (
        Vec<ClientTool>,
        Option<WebSearchConfig>,
        Option<WebFetchConfig>,
        Option<ImageGenConfig>,
    ),
    String,
> {
    let mut tools = Vec::new();
    let (mut web, mut fetch, mut image) = (None, None, None);
    for tool in body
        .get("tools")
        .and_then(Value::as_array)
        .cloned()
        .unwrap_or_default()
    {
        let kind = tool.get("type").and_then(Value::as_str).unwrap_or("custom");
        match kind {
            "web_search_20250305" | "web_search" => {
                web = Some(serde_json::from_value(tool.clone()).unwrap_or_default());
            }
            "web_fetch" => fetch = Some(serde_json::from_value(tool.clone()).unwrap_or_default()),
            "image_generation" => {
                image = Some(serde_json::from_value(tool.clone()).unwrap_or_default())
            }
            _ => {
                let name = tool
                    .get("name")
                    .and_then(Value::as_str)
                    .ok_or("tool missing name")?;
                tools.push(ClientTool {
                    name: name.into(),
                    mcp_name: tool
                        .get("mcp_name")
                        .and_then(Value::as_str)
                        .unwrap_or_default()
                        .into(),
                    public_name: name.into(),
                    schema: tool.get("input_schema").cloned().unwrap_or(Value::Null),
                });
            }
        }
    }
    Ok((tools, web, fetch, image))
}

/// `tools::resolve_client_mcp_call_name`: map an MCP tool name back to the client name.
pub fn resolve_client_mcp_call_name<'a>(
    tools: &'a [ClientTool],
    mcp_name: &str,
) -> Option<&'a str> {
    tools
        .iter()
        .find(|t| t.mcp_name == mcp_name)
        .map(|t| t.name.as_str())
}

pub fn push_client_tool(tools: &mut Vec<ClientTool>, tool: ClientTool) {
    tools.push(tool);
}

/// `tools::sanitize_prompt_line`.
pub fn sanitize_prompt_line(line: &str) -> String {
    line.chars()
        .filter(|c| !c.is_control() || *c == '\n' || *c == '\t')
        .collect()
}

/// `tools::sanitize_system_prompt`.
pub fn sanitize_system_prompt(prompt: &str, max: usize) -> String {
    let mut out = String::with_capacity(prompt.len().min(max));
    for c in prompt.chars() {
        if out.len() + c.len_utf8() > max {
            break;
        }
        out.push(c);
    }
    out
}

/// `tools::filter_sse_for_client`: keep only events the public protocol understands.
pub fn filter_sse_for_client(event: &str, data: &Value) -> Option<Value> {
    let kind = data.get("type").and_then(Value::as_str).unwrap_or(event);
    let keep = matches!(
        kind,
        "content_block_start"
            | "content_block_delta"
            | "content_block_stop"
            | "message_start"
            | "message_delta"
            | "message_stop"
            | "response.output_item.added"
            | "response.output_item.done"
            | "response.function_call_arguments.delta"
            | "response.function_call_arguments.done"
            | "response.output_text.delta"
            | "response.reasoning_summary_text.delta"
            | "response.completed"
            | "response.content_part.added"
            | "response.content_part.done"
            | "response.reasoning_summary_part.added"
            | "response.reasoning_summary_part.done"
    );
    keep.then(|| data.clone())
}

/// `tools::aggregate_sse_to_json`: fold a collected stream into one provider result.
pub fn aggregate_sse_to_json(frames: &[Value]) -> Value {
    let mut text = String::new();
    let mut thinking = String::new();
    let mut stop = None;
    for f in frames {
        match f.get("type").and_then(Value::as_str) {
            Some("content_block_delta") => {
                if let Some(t) = f.pointer("/delta/text").and_then(Value::as_str) {
                    text.push_str(t);
                }
                if let Some(t) = f.pointer("/delta/thinking").and_then(Value::as_str) {
                    thinking.push_str(t);
                }
            }
            Some("message_delta") => {
                stop = f
                    .pointer("/delta/stop_reason")
                    .and_then(Value::as_str)
                    .map(str::to_string)
            }
            _ => {}
        }
    }
    json!({"text": text, "thinking": thinking, "stop_reason": stop})
}

/// `tools::nearest_aspect_ratio`: choose the closest supported ratio for a size.
pub fn nearest_aspect_ratio(width: u32, height: u32) -> &'static str {
    let target = width as f64 / height.max(1) as f64;
    const RATIOS: &[(&str, f64)] = &[
        ("1:1", 1.0),
        ("2:3", 2.0 / 3.0),
        ("3:2", 1.5),
        ("3:4", 0.75),
        ("4:3", 4.0 / 3.0),
        ("9:16", 9.0 / 16.0),
        ("16:9", 16.0 / 9.0),
        ("21:9", 21.0 / 9.0),
    ];
    RATIOS
        .iter()
        .min_by(|a, b| {
            (a.1 - target)
                .abs()
                .partial_cmp(&(b.1 - target).abs())
                .unwrap()
        })
        .map(|r| r.0)
        .unwrap_or("1:1")
}

/// `tools::map_image_size`: clamp a requested size to the supported buckets.
pub fn map_image_size(size: &str) -> (u32, u32) {
    match size {
        "256x256" => (256, 256),
        "512x512" => (512, 512),
        "1024x1024" => (1024, 1024),
        "1024x1536" => (1024, 1536),
        "1536x1024" => (1536, 1024),
        "1792x1024" => (1792, 1024),
        "1024x1792" => (1024, 1792),
        _ => (1024, 1024),
    }
}

/// `tools::parse_image_endpoint_body`.
pub fn parse_image_endpoint_body(body: &Value) -> Result<(String, u32, ImageGenConfig), String> {
    let prompt = body
        .get("prompt")
        .and_then(Value::as_str)
        .ok_or("prompt required")?;
    let n = body.get("n").and_then(Value::as_u64).unwrap_or(1) as u32;
    let cfg = serde_json::from_value(body.clone()).unwrap_or_default();
    Ok((prompt.into(), n.clamp(1, 10), cfg))
}

/// `tools::parse_inline_image_value`: `data:image/...;base64,...`.
pub fn parse_inline_image_value(value: &str) -> Option<InlineMedia> {
    let rest = value.strip_prefix("data:")?;
    let (mime, data) = rest.split_once(";base64,")?;
    Some(InlineMedia {
        mime_type: mime.into(),
        data: data.into(),
    })
}

/// `tools::parse_native_web_search_ccpa`.
pub fn parse_native_web_search_ccpa(value: &Value) -> Option<WebSearchConfig> {
    serde_json::from_value(value.clone()).ok()
}

/// `tools::parse_native_image_gen_ccpa`.
pub fn parse_native_image_gen_ccpa(value: &Value) -> Option<GeneratedImage> {
    let b64 = value
        .get("b64_json")
        .or_else(|| value.get("image"))?
        .as_str()?;
    Some(GeneratedImage {
        b64: b64.into(),
        mime_type: value
            .get("mime_type")
            .and_then(Value::as_str)
            .unwrap_or("image/png")
            .into(),
    })
}
