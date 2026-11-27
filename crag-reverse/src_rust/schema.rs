//! Reconstructed `craggemini_core::schema` — tool JSON-schema projection.
//! Addresses: `sanitize_tool_name` 0x354e00, `strip_mcp_prefix`, `merge_schema_object`,
//! `ensure_required_properties`, `combine_ref_siblings`, `project_tool_schema`.
#![allow(dead_code, unused)]

use serde_json::{json, Map, Value};

pub const MAX_TOOL_NAME: usize = 55;
pub const MCP_PREFIX: &str = "mcp__";

/// `schema::sanitize_tool_name` @ 0x354e00: `[A-Za-z0-9_-]`, max 55 chars.
pub fn sanitize_tool_name(name: &str) -> String {
    let mut out: String = name
        .chars()
        .map(|c| {
            if c.is_ascii_alphanumeric() || c == '_' || c == '-' {
                c
            } else {
                '_'
            }
        })
        .collect();
    if out.is_empty() {
        out.push_str("tool");
    }
    out.truncate(MAX_TOOL_NAME);
    out
}

/// `schema::strip_mcp_prefix`.
pub fn strip_mcp_prefix(name: &str) -> &str {
    name.strip_prefix(MCP_PREFIX).unwrap_or(name)
}

fn merge(a: &mut Value, b: Value) {
    match (a, b) {
        (Value::Object(da), Value::Object(db)) => {
            for (k, v) in db {
                match da.get_mut(&k) {
                    Some(existing) => merge(existing, v),
                    None => {
                        da.insert(k, v);
                    }
                }
            }
        }
        (slot, other) => *slot = other,
    }
}

/// `schema::merge_schema_object`.
pub fn merge_schema_object(base: &Value, patch: Value) -> Value {
    let mut out = base.clone();
    merge(&mut out, patch);
    out
}

/// `schema::ensure_required_properties`: every property named in `required` must exist.
pub fn ensure_required_properties(schema: &mut Value) {
    let Some(obj) = schema.as_object_mut() else {
        return;
    };
    let required = obj
        .get("required")
        .and_then(Value::as_array)
        .cloned()
        .unwrap_or_default();
    let props = obj.entry("properties").or_insert_with(|| json!({}));
    if let Some(map) = props.as_object_mut() {
        for name in required {
            if let Some(name) = name.as_str() {
                map.entry(name.to_string())
                    .or_insert_with(|| json!({"type": "string"}));
            }
        }
    }
}

/// `schema::combine_ref_siblings`: JSON-Schema `$ref` siblings become `allOf`.
pub fn combine_ref_siblings(schema: Value) -> Value {
    let Some(obj) = schema.as_object() else {
        return schema;
    };
    if !obj.contains_key("$ref") || obj.len() <= 1 {
        return schema;
    }
    json!({ "allOf": [ { "$ref": obj["$ref"] }, Value::Object(obj.clone().into_iter().filter(|(k, _)| k != "$ref").collect::<Map<_, _>>()) ] })
}

/// `schema::project_tool_schema`: sanitize name, strip MCP prefix, normalize properties.
pub fn project_tool_schema(name: &str, schema: &Value) -> (String, Value) {
    let mut out = combine_ref_siblings(schema.clone());
    ensure_required_properties(&mut out);
    (sanitize_tool_name(strip_mcp_prefix(name)), out)
}

/// 0.5.0 `schema::ToolNameCache` — bounded, insertion-ordered name cache used to
/// resolve sanitized tool names back to their original form.
#[derive(Default)]
pub struct ToolNameCache {
    pub map: std::collections::HashMap<String, String>,
    pub order: std::collections::VecDeque<String>,
    pub cap: usize,
}

impl ToolNameCache {
    pub fn new(cap: usize) -> Self {
        Self {
            map: Default::default(),
            order: Default::default(),
            cap: cap.max(1),
        }
    }

    pub fn insert_locked(&mut self, sanitized: String, original: String) {
        if self.map.insert(sanitized.clone(), original).is_some() {
            self.order.retain(|k| k != &sanitized);
        }
        self.order.push_back(sanitized);
        while self.order.len() > self.cap {
            if let Some(old) = self.order.pop_front() {
                self.map.remove(&old);
            }
        }
    }

    pub fn resolve_at(&mut self, sanitized: &str) -> Option<String> {
        self.map.get(sanitized).cloned()
    }

    pub fn truncate(&mut self, keep: usize) {
        while self.order.len() > keep {
            if let Some(old) = self.order.pop_front() {
                self.map.remove(&old);
            }
        }
    }
}
