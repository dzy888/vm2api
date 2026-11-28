//! Reconstructed `craggemini_core::protocol` — envelope, failures, ring frames.
//! Addresses: `error_json` 0x2c2fa0, `pack_ring_envelope` 0x2adc30,
//! `valid_id` 0x2c5e00, `valid_text` 0x2c34c0, `parse_retry_after_ms` 0x2c3db0.
#![allow(dead_code, unused)]

use std::time::Instant;

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};

pub const MAX_ID: usize = 64;

#[derive(Debug, Clone)]
pub struct Failure {
    pub status: u16,
    pub kind: String,
    pub message: String,
    pub meta: Option<Vec<(String, String)>>,
    pub started: Option<Instant>,
    pub upstream_status: Option<u16>,
}

impl std::fmt::Display for Failure {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        write!(f, "{}: {}", self.kind, self.message)
    }
}

impl std::error::Error for Failure {}

impl Failure {
    pub fn new(status: u16, kind: &str, message: &str) -> Self {
        Self {
            status,
            kind: kind.into(),
            message: message.into(),
            meta: None,
            started: Some(Instant::now()),
            upstream_status: None,
        }
    }

    /// `protocol::error_json` @ 0x2c2fa0.
    pub fn to_json(&self) -> Value {
        let mut obj = json!({ "error": self.message, "code": self.kind });
        if let Some(upstream) = self.upstream_status {
            obj["upstream_status"] = json!(upstream);
        }
        if let Some(meta) = &self.meta {
            for (k, v) in meta {
                obj[k] = json!(v);
            }
        }
        obj
    }

    pub fn into_response(self) -> axum::response::Response {
        crate::server::error_response(self)
    }
}

pub fn valid_id(value: &str) -> bool {
    let b = value.as_bytes();
    !b.is_empty()
        && b.len() <= MAX_ID
        && b[0].is_ascii_alphanumeric()
        && b.iter()
            .all(|c| c.is_ascii_alphanumeric() || matches!(c, b'_' | b'.' | b'-'))
}

pub fn valid_text(value: &str, max: usize) -> bool {
    !value.is_empty() && value.len() <= max && !value.chars().any(char::is_control)
}

/// `parse_retry_after_ms` @ 0x2c3db0: accepts seconds or an HTTP-date-ish integer.
pub fn parse_retry_after_ms(value: Option<&str>) -> Option<u64> {
    let text = value?.trim();
    let seconds: u64 = text.parse().ok()?;
    Some(seconds.saturating_mul(1000))
}

/// `parse_google_quota_error` @ 0x2c5430: extracts the quota code from a Google error.
pub fn parse_google_quota_error(body: &Value) -> Option<String> {
    let details = body.get("error")?.get("details")?.as_array()?;
    for item in details {
        for key in ["reason", "quotaId", "quotaMetric"] {
            if let Some(v) = item.get(key).and_then(Value::as_str) {
                return Some(v.to_string());
            }
        }
    }
    body.get("error")
        .and_then(|e| e.get("status"))
        .and_then(Value::as_str)
        .map(str::to_string)
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct GatewayPolicy {
    #[serde(default)]
    pub queue_wait_ms: u64,
    #[serde(default)]
    pub first_byte_timeout_ms: u64,
    #[serde(default)]
    pub stream_idle_timeout_ms: u64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Envelope {
    pub request_id: String,
    #[serde(default)]
    pub body: Value,
    #[serde(default)]
    pub headers: std::collections::BTreeMap<String, String>,
    #[serde(default)]
    pub stream: bool,
    #[serde(default)]
    pub delivery_mode: String,
    #[serde(default)]
    pub preserve_cache_breakpoints: bool,
    #[serde(default)]
    pub cache_ttl: Option<String>,
    #[serde(default)]
    pub gateway_policy: Option<GatewayPolicy>,
    #[serde(default)]
    pub request_context: Option<Value>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Cancel {
    pub request_id: String,
    #[serde(default)]
    pub target: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct RingRespMeta {
    #[serde(default)]
    pub status: u16,
    #[serde(default)]
    pub headers: std::collections::BTreeMap<String, String>,
    #[serde(default)]
    pub usage: Option<Value>,
    #[serde(default)]
    pub error: Option<Value>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct RingSubmitMeta {
    pub request_id: String,
    #[serde(default)]
    pub allow_multi_attempt: bool,
    #[serde(default)]
    pub allow_subagents: bool,
    #[serde(default)]
    pub system_prompt_mode: SystemPromptMode,
    #[serde(default)]
    pub thinking_level: u8,
    #[serde(default)]
    pub include_thoughts: bool,
    /// 0.5.0: composed system prompt travels in the meta (up to the ring budget).
    #[serde(default)]
    pub system_prompt: String,
    #[serde(default)]
    pub tool_filter: ToolFilter,
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub expected_native_conversation_id: Option<String>,
}

/// `tool_filter` object carried in every Submit meta (captured on the wire).
#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct ToolFilter {
    #[serde(default)]
    pub allow_client_mcp: bool,
    #[serde(default)]
    pub allow_read_file: bool,
    #[serde(default, skip_serializing)]
    pub allow_web_search: bool,
    #[serde(default)]
    pub allow_web_fetch: bool,
    #[serde(default)]
    pub allow_image_gen: bool,
    #[serde(default)]
    pub allow_subagents: bool,
    /// 0.5.0: pin every tool call to this MCP tool (headless ACP).
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub forced_mcp_tool: Option<String>,
}

#[derive(Debug, Clone, Copy, Serialize, Deserialize, Default)]
#[serde(rename_all = "snake_case")]
pub enum SystemPromptMode {
    Zero,
    Append,
    Replace,
    Official,
    #[default]
    OfficialFull,
}

/// Extract the prompt text the core appends after the meta JSON: Gemini
/// `contents[].parts[].text`, Anthropic `messages[].content`, or OpenAI
/// `messages[].content`. Multiple text parts are separated by a blank line.
pub fn prompt_from_body(body: &Value) -> Vec<u8> {
    let mut parts: Vec<String> = Vec::new();
    if let Some(items) = body.get("contents").and_then(Value::as_array) {
        for item in items {
            if let Some(ps) = item.get("parts").and_then(Value::as_array) {
                for part in ps {
                    if let Some(t) = part.get("text").and_then(Value::as_str) {
                        parts.push(t.to_string());
                    }
                }
            }
        }
    }
    if parts.is_empty() {
        if let Some(items) = body.get("messages").and_then(Value::as_array) {
            for item in items {
                match item.get("content") {
                    Some(Value::String(t)) => parts.push(t.clone()),
                    Some(Value::Array(blocks)) => {
                        for b in blocks {
                            if let Some(t) = b.get("text").and_then(Value::as_str) {
                                parts.push(t.to_string());
                            }
                        }
                    }
                    _ => {}
                }
            }
        }
    }
    parts.join("\n\n").into_bytes()
}

#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(tag = "type", rename_all = "snake_case")]
pub enum FromBridge {
    Accepted {
        request_id: String,
        #[serde(default)]
        seq: u64,
    },
    ControlResult {
        request_id: String,
        ok: bool,
        payload: Value,
        #[serde(default)]
        seq: u64,
        status: u16,
    },
    Failed {
        error: Value,
    },
    Idle {
        #[serde(default)]
        seq: u64,
        #[serde(default)]
        session: String,
    },
    NativeToolInline {
        request_id: String,
        payload: Value,
        #[serde(default)]
        seq: u64,
    },
    NativeToolShm {
        request_id: String,
        offset: u64,
        length: u64,
        #[serde(default)]
        seq: u64,
        sha256: String,
        shell: String,
    },
    ProviderEnd {
        // 3 fields, per `struct variant FromBridge::ProviderEnd with 3 elements`
        // and the captured frame {attempt_id, complete, request_id}.
        #[serde(default)]
        request_id: String,
        #[serde(default)]
        attempt_id: Option<String>,
        complete: bool,
    },
    ProviderSse {
        request_id: String,
        payload: Value,
        #[serde(default)]
        seq: u64,
    },
    ProviderSseShm {
        request_id: String,
        offset: u64,
        length: u64,
        #[serde(default)]
        seq: u64,
        sha256: String,
        session: String,
    },
    ProviderStart {
        #[serde(default)]
        request_id: String,
        #[serde(default)]
        model: String,
        #[serde(default)]
        session: String,
        #[serde(default)]
        seq: u64,
        #[serde(default)]
        upstream: String,
        #[serde(default)]
        attempt_id: Option<String>,
        #[serde(default)]
        content_type: Option<String>,
        /// Upstream HTTP status (`8 elements` per the 0.5.3 decompilation).
        #[serde(default)]
        status: u16,
        /// Raw provider error body; on 4xx/5xx no SSE follows, so this is the turn.
        #[serde(default)]
        error_body: Option<String>,
        subagent: Option<String>,
    },
    Ready {
        #[serde(default)]
        request_id: String,
        #[serde(default, alias = "session_id")]
        session: String,
        #[serde(default)]
        model: String,
        #[serde(default)]
        seq: u64,
        #[serde(default)]
        upstream: String,
    },
    SubagentEnd {
        request_id: String,
        subagent_id: String,
        status: u16,
        #[serde(default)]
        seq: u64,
    },
    SubagentEvent {
        request_id: String,
        subagent_id: String,
        event: String,
        #[serde(default)]
        seq: u64,
        status: String,
        retry_after: Option<String>,
        sha256: String,
    },
    SubagentSse {
        request_id: String,
        subagent_id: String,
        payload: Value,
        #[serde(default)]
        seq: u64,
    },
    SubagentStart {
        request_id: String,
        subagent_id: String,
        model: String,
        #[serde(default)]
        seq: u64,
        session: String,
    },
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub enum ToBridge {
    Submit(Envelope),
    Cancel(Cancel),
    McpToolCall(Value),
    Control(Value),
}

/// `protocol::pack_ring_envelope` @ 0x2adc30: compact JSON for the shared ring.
pub fn pack_ring_envelope(meta: &RingSubmitMeta, prompt: &[u8]) -> Vec<u8> {
    // Captured wire layout: u32 meta_len | meta JSON | prompt bytes | NUL.
    let m = serde_json::to_vec(meta).unwrap_or_default();
    let mut out = Vec::with_capacity(4 + m.len() + prompt.len() + 1);
    out.extend_from_slice(&(m.len() as u32).to_le_bytes());
    out.extend_from_slice(&m);
    out.extend_from_slice(prompt);
    // The trailing NUL observed on the wire is frame padding, not payload: the
    // bridge validates the prompt with `payload_len - 4 - meta_len`.
    out
}

#[derive(Debug, Clone)]
pub struct BridgeToolFilter {
    pub tool: Option<crate::tools::ClientTool>,
    pub allow: bool,
    pub live_control: bool,
    pub graceful_cancel: bool,
}

pub fn ring_decode(bytes: &[u8]) -> Result<FromBridge, String> {
    serde_json::from_slice(bytes).map_err(|e| e.to_string())
}
