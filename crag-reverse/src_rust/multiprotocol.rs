//! Reconstructed `craggemini_core::multiprotocol` — protocol transcoding.
//! Addresses: `map_openai_finish_reason` 0x25d520, `update_usage` 0x2530d0,
//! `collect_sse_frames` 0x253bb0, `sse_with_protocol` 0x253650, render_*.
#![allow(dead_code, unused)]

use serde_json::{json, Value};

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OutputProtocol {
    Anthropic,
    OpenAiChat,
    OpenAiResponses,
    Gemini,
}

#[derive(Default, Debug, Clone, Copy)]
pub struct Usage {
    pub prompt_tokens: u64,
    pub output_tokens: u64,
    pub thinking_tokens: u64,
    pub cached_tokens: u64,
    pub tool_tokens: u64,
}

/// `multiprotocol::map_openai_finish_reason` @ 0x25d520.
pub fn map_openai_finish_reason(has_tool_calls: bool, finish_reason: Option<&str>) -> &'static str {
    if has_tool_calls {
        return "tool_calls";
    }
    match finish_reason.unwrap_or("STOP") {
        "MAX_TOKENS" => "length",
        "SAFETY"
        | "RECITATION"
        | "BLOCKLIST"
        | "PROHIBITED_CONTENT"
        | "SPII"
        | "MALFORMED_FUNCTION_CALL" => "content_filter",
        _ => "stop",
    }
}

/// `multiprotocol::update_usage` @ 0x2530d0: sums Gemini `usageMetadata` counters.
pub fn update_usage(usage: &mut Usage, raw: &Value) {
    let Some(map) = raw.as_object() else { return };
    let get = |k: &str| map.get(k).and_then(Value::as_u64).unwrap_or(0);
    usage.prompt_tokens = usage.prompt_tokens.saturating_add(get("promptTokenCount"));
    usage.output_tokens = usage
        .output_tokens
        .saturating_add(get("candidatesTokenCount"));
    usage.thinking_tokens = usage
        .thinking_tokens
        .saturating_add(get("thoughtsTokenCount"));
    usage.cached_tokens = usage
        .cached_tokens
        .saturating_add(get("cachedContentTokenCount"));
    usage.tool_tokens = usage
        .tool_tokens
        .saturating_add(get("toolUsePromptTokenCount"));
}

#[derive(Debug, Clone, Default)]
pub struct CollectedPart {
    pub text: String,
    pub thinking: String,
}

#[derive(Debug, Clone, Default)]
pub struct CollectedTurn {
    pub parts: Vec<CollectedPart>,
    pub finish_reason: Option<String>,
    pub usage: Usage,
}

/// `multiprotocol::collect_sse_frames` @ 0x253bb0: split `data:` frames and merge
/// candidate parts until the terminator.
pub fn collect_sse_frames(body: &str, mut on_frame: impl FnMut(&Value)) -> CollectedTurn {
    let mut turn = CollectedTurn::default();
    for line in body.lines() {
        let Some(data) = line.strip_prefix("data:") else {
            continue;
        };
        let data = data.trim();
        if data == "[DONE]" || data.is_empty() {
            continue;
        }
        let Ok(value) = serde_json::from_str::<Value>(data) else {
            continue;
        };
        on_frame(&value);
        if let Some(meta) = value.get("usageMetadata") {
            update_usage(&mut turn.usage, meta);
        }
        let candidate = value.pointer("/candidates/0");
        if let Some(parts) = candidate
            .and_then(|c| c.get("content"))
            .and_then(|c| c.get("parts"))
            .and_then(Value::as_array)
        {
            for part in parts {
                let mut collected = CollectedPart::default();
                if let Some(t) = part.get("text").and_then(Value::as_str) {
                    collected.text.push_str(t);
                }
                if part
                    .get("thought")
                    .and_then(Value::as_bool)
                    .unwrap_or(false)
                {
                    let t = part.get("text").and_then(Value::as_str).unwrap_or("");
                    collected.thinking.push_str(t);
                }
                turn.parts.push(collected);
            }
        }
        if let Some(reason) = candidate
            .and_then(|c| c.get("finishReason"))
            .and_then(Value::as_str)
        {
            turn.finish_reason = Some(reason.to_string());
        }
    }
    turn
}

/// `multiprotocol::render_anthropic_json`.
pub fn render_anthropic_json(turn: &CollectedTurn, model: &str) -> Value {
    let content: Vec<Value> = turn
        .parts
        .iter()
        .map(|p| {
            if !p.thinking.is_empty() {
                json!({"type":"thinking","thinking":p.thinking})
            } else {
                json!({"type":"text","text":p.text})
            }
        })
        .collect();
    json!({
        "id": format!("msg_{}", uuid::Uuid::new_v4().simple()),
        "type": "message",
        "role": "assistant",
        "model": model,
        "content": content,
        "stop_reason": match turn.finish_reason.as_deref() {
            Some("MAX_TOKENS") => "max_tokens",
            Some("SAFETY") => "end_turn",
            _ => "end_turn",
        },
        "usage": {
            "input_tokens": turn.usage.prompt_tokens,
            "output_tokens": turn.usage.output_tokens,
            "cache_read_input_tokens": turn.usage.cached_tokens,
        }
    })
}

/// `multiprotocol::render_openai_chat_json`.
pub fn render_openai_chat_json(turn: &CollectedTurn, model: &str) -> Value {
    let text: String = turn.parts.iter().map(|p| p.text.as_str()).collect();
    json!({
        "id": format!("chatcmpl-{}", uuid::Uuid::new_v4().simple()),
        "object": "chat.completion",
        "model": model,
        "choices": [{
            "index": 0,
            "message": {"role": "assistant", "content": text},
            "finish_reason": map_openai_finish_reason(false, turn.finish_reason.as_deref()),
        }],
        "usage": {
            "prompt_tokens": turn.usage.prompt_tokens,
            "completion_tokens": turn.usage.output_tokens,
            "total_tokens": turn.usage.prompt_tokens + turn.usage.output_tokens,
        }
    })
}

/// `multiprotocol::render_openai_responses_json`.
pub fn render_openai_responses_json(turn: &CollectedTurn, model: &str) -> Value {
    let text: String = turn.parts.iter().map(|p| p.text.as_str()).collect();
    json!({
        "id": format!("resp_{}", uuid::Uuid::new_v4().simple()),
        "object": "response",
        "model": model,
        "status": "completed",
        "output": [{"type":"message","role":"assistant","content":[{"type":"output_text","text":text}]}],
        "usage": {
            "input_tokens": turn.usage.prompt_tokens,
            "output_tokens": turn.usage.output_tokens,
            "total_tokens": turn.usage.prompt_tokens + turn.usage.output_tokens,
        }
    })
}

/// `multiprotocol::render_gemini_json`.
pub fn render_gemini_json(turn: &CollectedTurn) -> Value {
    let parts: Vec<Value> = turn.parts.iter().map(|p| json!({"text": p.text})).collect();
    json!({
        "candidates": [{"content": {"role": "model", "parts": parts}, "finishReason": turn.finish_reason.clone().unwrap_or_else(|| "STOP".into())}],
        "usageMetadata": {
            "promptTokenCount": turn.usage.prompt_tokens,
            "candidatesTokenCount": turn.usage.output_tokens,
            "thoughtsTokenCount": turn.usage.thinking_tokens,
            "cachedContentTokenCount": turn.usage.cached_tokens,
        }
    })
}

/// `multiprotocol::render_non_streaming_json`.
pub fn render_non_streaming_json(
    turn: &CollectedTurn,
    model: &str,
    protocol: OutputProtocol,
) -> Value {
    match protocol {
        OutputProtocol::Anthropic => render_anthropic_json(turn, model),
        OutputProtocol::OpenAiChat => render_openai_chat_json(turn, model),
        OutputProtocol::OpenAiResponses => render_openai_responses_json(turn, model),
        OutputProtocol::Gemini => render_gemini_json(turn),
    }
}

/// `multiprotocol::sse_with_protocol` 0x253650: wraps native frames in the target SSE.
pub fn sse_event(protocol: OutputProtocol, event: &str, data: &Value) -> String {
    match protocol {
        OutputProtocol::Anthropic
        | OutputProtocol::OpenAiChat
        | OutputProtocol::OpenAiResponses => {
            format!(
                "event: {event}\ndata: {}\n\n",
                serde_json::to_string(data).unwrap_or_default()
            )
        }
        OutputProtocol::Gemini => format!(
            "data: {}\n\n",
            serde_json::to_string(data).unwrap_or_default()
        ),
    }
}
