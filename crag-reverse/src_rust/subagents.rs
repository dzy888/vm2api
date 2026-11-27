//! Reconstructed `craggemini_core::subagents`.
//! Addresses: `parse_subagent_config`, `synthesize_subagent_sse`.
#![allow(dead_code, unused)]

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum SubagentStatus {
    Running,
    Completed,
    Failed,
    Cancelled,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CustomSubagentDef {
    pub name: String,
    #[serde(default)]
    pub description: String,
    #[serde(default)]
    pub model: Option<String>,
    #[serde(default)]
    pub prompt: String,
    #[serde(default)]
    pub tools: Vec<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SubagentConfig {
    #[serde(default)]
    pub enabled: bool,
    #[serde(default)]
    pub definitions: Vec<CustomSubagentDef>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SubagentRecord {
    pub id: String,
    pub parent_session: String,
    pub definition: String,
    pub status: SubagentStatus,
}

#[derive(Default)]
pub struct SubagentRegistry {
    pub records: tokio::sync::Mutex<std::collections::HashMap<String, SubagentRecord>>,
}

/// `subagents::parse_subagent_config`.
pub fn parse_subagent_config(value: &Value) -> Option<SubagentConfig> {
    serde_json::from_value(value.clone()).ok()
}

/// `subagents::synthesize_subagent_sse`: emits start → per-event → end frames.
pub fn synthesize_subagent_sse(id: &str, event: &str, text: &str) -> Vec<String> {
    vec![
        format!("event: subagent_start\ndata: {}\n\n", json!({"id": id})),
        format!(
            "event: subagent_event\ndata: {}\n\n",
            json!({"id": id, "kind": event, "text": text})
        ),
        format!("event: subagent_end\ndata: {}\n\n", json!({"id": id})),
    ]
}

