//! Reconstructed `craggemini_core::resume` — canonical history, digest chain, delta.
//! Addresses: `build_delta` 0x333e70, `chain_digests` 0x334400,
//! `extract_assistant_from_sse` 0x334d70, `format_messages_for_delta`.
#![allow(dead_code, unused)]

use serde::{Deserialize, Serialize};
use serde_json::Value;
use sha2::{Digest, Sha256};

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum ConversationStatus {
    Active,
    Idle,
    Completed,
    Failed,
    Cancelled,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CanonicalToolCall {
    pub id: String,
    pub name: String,
    pub input: Value,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CanonicalToolResult {
    pub tool_use_id: String,
    pub content: Value,
    pub is_error: bool,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CanonicalMessage {
    pub role: String,
    pub text: Option<String>,
    #[serde(default)]
    pub tool_calls: Vec<CanonicalToolCall>,
    #[serde(default)]
    pub tool_results: Vec<CanonicalToolResult>,
    #[serde(default)]
    pub cache_breakpoint: bool,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ConversationRecord {
    pub conversation_id: String,
    pub native_conversation_id: Option<String>,
    pub created_at: i64,
    pub updated_at: i64,
    pub turn_count: u64,
    pub status: ConversationStatus,
    pub digests: Vec<[u8; 32]>,
    pub chain: Vec<[u8; 32]>,
    pub anchors: Vec<[u8; 32]>,
    pub pending_tool_calls: Vec<String>,
    pub model: Option<String>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PersistedSessions {
    pub version: u8,
    pub sessions: Vec<ConversationRecord>,
}

/// `resume::chain_digests` @ 0x334400: hash role + text + tool calls/results per message
/// and chain each digest into the previous one.
pub fn chain_digests(messages: &[CanonicalMessage]) -> Vec<[u8; 32]> {
    let mut prev = [0u8; 32];
    let mut out = Vec::with_capacity(messages.len());
    for m in messages {
        let mut h = Sha256::new();
        h.update(prev);
        h.update(m.role.as_bytes());
        h.update([0]);
        if let Some(text) = &m.text {
            h.update(text.as_bytes());
        }
        for c in &m.tool_calls {
            h.update(c.id.as_bytes());
            h.update([0]);
            h.update(c.name.as_bytes());
            h.update(serde_json::to_vec(&c.input).unwrap_or_default());
        }
        for r in &m.tool_results {
            h.update(r.tool_use_id.as_bytes());
            h.update(serde_json::to_vec(&r.content).unwrap_or_default());
            h.update([r.is_error as u8]);
        }
        prev = h.finalize().into();
        out.push(prev);
    }
    out
}

/// `resume::build_delta` @ 0x333e70: render canonical messages as `Role: text` turns,
/// truncating to the last message when `only_last` is set.
pub fn build_delta(messages: &[CanonicalMessage], suffix_len: usize, only_last: bool) -> String {
    let start = if only_last && messages.len() > 1 {
        messages.len() - 1
    } else {
        0
    };
    let mut out = String::new();
    for m in &messages[start..] {
        let role = match m.role.as_str() {
            "tool" => "Tool",
            "model" | "assistant" => "Assistant",
            _ => "User",
        };
        out.push_str(role);
        out.push_str(": ");
        if let Some(text) = &m.text {
            out.push_str(text.trim());
        }
        for c in &m.tool_calls {
            out.push_str(&format!("\n[{} {}]", c.name, c.id));
        }
        for r in &m.tool_results {
            out.push_str(&format!("\n[result {}]", r.tool_use_id));
        }
        out.push('\n');
    }
    if suffix_len > 0 && out.len() > suffix_len {
        let split = out.len() - suffix_len;
        out = out[split..].to_string();
    }
    out
}

/// `resume::format_messages_for_delta`: same renderer without truncation.
pub fn format_messages_for_delta(messages: &[CanonicalMessage]) -> String {
    build_delta(messages, 0, false)
}

/// `resume::extract_assistant_from_sse` @ 0x334d70: pull assistant text and tool calls.
pub fn extract_assistant_from_sse(frames: &[Value]) -> Option<CanonicalMessage> {
    let mut text = String::new();
    let mut calls = Vec::new();
    for f in frames {
        match f.get("type").and_then(Value::as_str) {
            Some("content_block_delta") => {
                if let Some(t) = f.pointer("/delta/text").and_then(Value::as_str) {
                    text.push_str(t);
                }
            }
            Some("content_block_start") => {
                if let Some(block) = f.get("content_block") {
                    if block.get("type").and_then(Value::as_str) == Some("tool_use") {
                        calls.push(CanonicalToolCall {
                            id: block
                                .get("id")
                                .and_then(Value::as_str)
                                .unwrap_or_default()
                                .into(),
                            name: block
                                .get("name")
                                .and_then(Value::as_str)
                                .unwrap_or_default()
                                .into(),
                            input: Value::Null,
                        });
                    }
                }
            }
            _ => {}
        }
    }
    if text.is_empty() && calls.is_empty() {
        return None;
    }
    Some(CanonicalMessage {
        role: "assistant".into(),
        text: (!text.is_empty()).then_some(text),
        tool_calls: calls,
        tool_results: Vec::new(),
        cache_breakpoint: false,
    })
}

#[derive(Default)]
pub struct SessionStore {
    pub records: std::collections::HashMap<String, ConversationRecord>,
}

impl SessionStore {
    pub fn get(&self, id: &str) -> Option<&ConversationRecord> {
        self.records.get(id)
    }

    pub fn upsert(&mut self, record: ConversationRecord) {
        self.records.insert(record.conversation_id.clone(), record);
    }

    pub fn remove(&mut self, id: &str) -> Option<ConversationRecord> {
        self.records.remove(id)
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, Serialize, Deserialize, Default)]
#[serde(rename_all = "snake_case")]
pub enum ModelFamily {
    Claude,
    Banana,
    #[default]
    Gemini,
    Other,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct ConversationRecordV2 {
    pub conversation_id: String,
    #[serde(default)]
    pub native_conversation_id: Option<String>,
    #[serde(default)]
    pub messages: Vec<CanonicalMessage>,
    #[serde(default)]
    pub tool_calls: Vec<CanonicalToolCall>,
    #[serde(default)]
    pub signature_fingerprint: Option<String>,
    #[serde(default)]
    pub updated_at_ms: i64,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "snake_case")]
pub enum ContinuationReceiptState {
    Pending,
    Settled,
    Interrupted,
    Failed,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct InterruptionMeta {
    pub reason: String,
    #[serde(default)]
    pub retryable: bool,
    #[serde(default)]
    pub received_at_ms: i64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ContinuationReceipt {
    pub request_id: String,
    pub conversation_id: String,
    pub state: ContinuationReceiptState,
    #[serde(default)]
    pub interruption: Option<InterruptionMeta>,
    #[serde(default)]
    pub settled_assistant_text: Option<String>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CachedThinkingMeta {
    pub thinking_level: String,
    #[serde(default)]
    pub budget_tokens: Option<u32>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct CachedSignatureEntry {
    pub fingerprint: String,
    #[serde(default)]
    pub signature: String,
    #[serde(default)]
    pub updated_at_ms: i64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct StickyConvBinding {
    pub conversation_id: String,
    pub account_id: String,
    pub expires_at_ms: i64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ResponseBinding {
    pub request_id: String,
    pub conversation_id: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct ResumeCutMeta {
    pub conversation_id: String,
    #[serde(default)]
    pub cut_at_tool_call_idx: usize,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PersistedReceipts {
    #[serde(default)]
    pub receipts: std::collections::HashMap<String, ContinuationReceipt>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PersistedSignatureCache {
    #[serde(default)]
    pub entries: std::collections::HashMap<String, CachedSignatureEntry>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PersistedStickyIndex {
    #[serde(default)]
    pub bindings: std::collections::HashMap<String, StickyConvBinding>,
}

/// `resume::SignatureCache` — bounded signature cache with pruning.
#[derive(Default)]
pub struct SignatureCache {
    pub entries: std::collections::HashMap<String, CachedSignatureEntry>,
}

impl SignatureCache {
    pub fn insert(&mut self, key: String, entry: CachedSignatureEntry) {
        self.entries.insert(key, entry);
    }

    /// `SignatureCache::prune_to_bounds`.
    pub fn prune_to_bounds(&mut self, max: usize) {
        if self.entries.len() <= max {
            return;
        }
        let mut keys: Vec<_> = self
            .entries
            .iter()
            .map(|(k, e)| (e.updated_at_ms, k.clone()))
            .collect();
        keys.sort_by_key(|(t, _)| *t);
        let excess = self.entries.len() - max;
        for (_, k) in keys.into_iter().take(excess) {
            self.entries.remove(&k);
        }
    }
}

/// `resume::StickyIndex` helpers.
pub struct StickyIndex {
    pub bindings: std::collections::HashMap<String, StickyConvBinding>,
}

impl StickyIndex {
    pub fn prune_expired_at(&mut self, now_ms: i64) {
        self.bindings.retain(|_, b| b.expires_at_ms > now_ms);
    }

    pub fn remove_account(&mut self, account_id: &str) {
        self.bindings.retain(|_, b| b.account_id != account_id);
    }
}
