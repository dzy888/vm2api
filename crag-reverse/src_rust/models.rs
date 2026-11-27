//! Reconstructed `craggemini_core::models` — model alias, effort and thinking parsing.
//! Addresses: `parse_model_spec` 0x34d690, `normalize_effort_token` 0x34f640,
//! `normalize_known_base_alias` 0x34fb80, `resolve_model_and_thinking` 0x34ff70,
//! `strip_case_insensitive_suffix` 0x354870, `valid_requested_model_syntax` 0x354780.
#![allow(dead_code, unused)]

use serde::{Deserialize, Serialize};

pub const MAX_MODEL_LEN: usize = 128;

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ParsedModelSpec {
    pub base: String,
    pub effort: Option<String>,
    pub thinking: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ResolvedModelThinking {
    pub model: String,
    pub thinking_budget: Option<u32>,
}

/// `models::valid_requested_model_syntax` @ 0x354780: 1..=128 chars, starts alnum,
/// then only alnum and `-_.:/`.
pub fn valid_requested_model_syntax(value: &str) -> bool {
    let value = value.trim();
    let b = value.as_bytes();
    if b.is_empty() || b.len() > MAX_MODEL_LEN || !b[0].is_ascii_alphanumeric() {
        return false;
    }
    b.iter()
        .all(|c| c.is_ascii_alphanumeric() || matches!(c, b'-' | b'_' | b'.' | b':' | b'/'))
}

/// `models::strip_case_insensitive_suffix` @ 0x354870.
pub fn strip_case_insensitive_suffix<'a>(value: &'a str, suffix: &str) -> &'a str {
    if value.len() >= suffix.len()
        && value[value.len() - suffix.len()..].eq_ignore_ascii_case(suffix)
    {
        &value[..value.len() - suffix.len()]
    } else {
        value
    }
}

/// `models::normalize_effort_token` @ 0x34f640: accepts short forms, returns canonical
/// `low|medium|high|xhigh|max|none`.
pub fn normalize_effort_token(value: &str) -> Option<&'static str> {
    match value.trim().to_ascii_lowercase().as_str() {
        "l" | "lo" | "low" | "min" | "minimal" => Some("low"),
        "m" | "med" | "medium" => Some("medium"),
        "h" | "hi" | "high" => Some("high"),
        "x" | "xh" | "xhigh" | "extra" => Some("xhigh"),
        "max" | "maximum" => Some("max"),
        "n" | "none" | "off" => Some("none"),
        _ => None,
    }
}

/// `models::normalize_known_base_alias` @ 0x34fb80: known short aliases to full ids.
pub fn normalize_known_base_alias(value: &str) -> String {
    let v = value.trim().to_ascii_lowercase();
    let base = match v.as_str() {
        "flash" | "gemini-flash" => "gemini-2.5-flash",
        "pro" | "gemini-pro" => "gemini-3.1-pro-preview",
        "flash-lite" | "lite" => "gemini-2.5-flash-lite",
        "3-flash" => "gemini-3-flash-preview",
        _ => v.as_str(),
    };
    base.to_string()
}

/// `models::parse_model_spec` @ 0x34d690: strips `models/`, a trailing `:effort` or
/// `-effort`, and normalizes the base.
pub fn parse_model_spec(raw: &str) -> Option<ParsedModelSpec> {
    let mut value = raw.trim();
    for prefix in ["models/", "MODELS/"] {
        if let Some(rest) = value.strip_prefix(prefix) {
            value = rest;
            break;
        }
    }
    if !valid_requested_model_syntax(value) {
        return None;
    }
    let mut effort = None;
    let mut thinking = None;
    let mut base = value.to_string();
    for suffix in ["low", "medium", "high", "xhigh", "max", "none"] {
        for sep in [":", "-"] {
            let pattern = format!("{sep}{suffix}");
            if base.to_ascii_lowercase().ends_with(&pattern) {
                base.truncate(base.len() - pattern.len());
                effort = Some(suffix.to_string());
                break;
            }
        }
        if effort.is_some() {
            break;
        }
    }
    for suffix in [":thinking", "-thinking", ":nothinking", "-nothinking"] {
        if base.to_ascii_lowercase().ends_with(suffix) {
            base.truncate(base.len() - suffix.len());
            thinking = Some(suffix.trim_start_matches([':', '-']).to_string());
        }
    }
    if base.is_empty() {
        return None;
    }
    Some(ParsedModelSpec {
        base: normalize_known_base_alias(&base),
        effort,
        thinking,
    })
}

/// `models::resolve_model_and_thinking` @ 0x34ff70: applies request `thinking` budget
/// and the model's cap; a positive budget enables thinking.
pub fn resolve_model_and_thinking(
    spec: &ParsedModelSpec,
    requested_budget: Option<u32>,
    default_budget: u32,
    cap: u32,
) -> ResolvedModelThinking {
    let budget = match requested_budget {
        Some(0) => None,
        Some(n) => Some(n.min(cap)),
        None if spec.thinking.as_deref() == Some("thinking") => Some(default_budget.min(cap)),
        None => None,
    };
    ResolvedModelThinking {
        model: spec.base.clone(),
        thinking_budget: budget,
    }
}

/// `models::models_compatible_for_single_slot`: trims a catalog to one supported model.
pub fn models_compatible_for_single_slot(models: &[String], wanted: &str) -> Vec<String> {
    models
        .iter()
        .filter(|m| m.as_str() == wanted || m.starts_with(wanted))
        .cloned()
        .collect()
}

/// `models::gemini_models_list` / `openai_models_list`.
pub fn openai_models_list(models: &[String]) -> serde_json::Value {
    serde_json::json!({
        "object": "list",
        "data": models.iter().map(|m| serde_json::json!({"id": m, "object": "model", "owned_by": "google"})).collect::<Vec<_>>()
    })
}
