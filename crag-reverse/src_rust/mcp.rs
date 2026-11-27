//! Reconstructed `craggemini_core::mcp` — MCP coordinator, parked calls, event stream.
//! Addresses: `handle_mcp_call` 0x1110e0, `handle_mcp_cancel` 0x1115f0,
//! `write_slot_mcp_config_files`, `McpToolResult::text` 0x2abbe0.
#![allow(dead_code, unused)]

use std::collections::HashMap;
use std::path::Path;
use std::sync::{Arc, OnceLock};
use std::time::{Duration, SystemTime, UNIX_EPOCH};

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use tokio::sync::{broadcast, oneshot, Mutex};

pub static MCP_CONFIG_LOCK: OnceLock<std::sync::Mutex<()>> = OnceLock::new();
pub const EVENT_CHANNEL: usize = 64;

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct McpToolSpec {
    pub name: String,
    #[serde(default)]
    pub description: String,
    #[serde(default)]
    pub input_schema: Value,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct McpIncomingCall {
    pub id: Value,
    pub name: String,
    #[serde(default)]
    pub arguments: Value,
    #[serde(default)]
    pub slot_id: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct McpToolResult {
    #[serde(default)]
    pub content: Vec<Value>,
    #[serde(default)]
    pub is_error: bool,
}

impl McpToolResult {
    /// `McpToolResult::text` @ 0x2abbe0.
    pub fn text(value: &str) -> Self {
        Self {
            content: vec![json!({"type": "text", "text": value})],
            is_error: false,
        }
    }
    pub fn error(value: &str) -> Self {
        Self {
            content: vec![json!({"type": "text", "text": value})],
            is_error: true,
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct PendingToolCallSummary {
    pub tool_use_id: String,
    pub name: String,
    pub hash: String,
}

pub struct ParkedCall {
    pub call: McpIncomingCall,
    pub created_at: i64,
    pub tx: Option<oneshot::Sender<McpToolResult>>,
}

#[derive(Default)]
pub struct McpState {
    pub tools_revision: u64,
    pub tools: HashMap<String, McpToolSpec>,
    pub pending_calls: HashMap<String, PendingToolCallSummary>,
    pub parked: HashMap<String, ParkedCall>,
}

/// Waits for a client to claim a parked MCP call (`/internal/mcp/listed` or
/// `/internal/mcp/call`), or for the call timeout. Every state change is also
/// broadcast as an SSE event for `/internal/mcp/events`.
pub struct McpCoordinator {
    pub state: Arc<Mutex<McpState>>,
    pub events: broadcast::Sender<String>,
}

impl Default for McpCoordinator {
    fn default() -> Self {
        let (events, _) = broadcast::channel(EVENT_CHANNEL);
        Self {
            state: Arc::new(Mutex::new(McpState::default())),
            events,
        }
    }
}

impl McpCoordinator {
    pub fn new() -> Self {
        Self::default()
    }

    fn emit(&self, event: &str, data: Value) {
        let _ = self
            .events
            .send(format!("event: {event}\ndata: {data}\n\n"));
    }

    /// `server::handle_mcp_call` 0x1110e0: park and return the completion receiver.
    pub async fn park(
        &self,
        call: McpIncomingCall,
    ) -> Result<oneshot::Receiver<McpToolResult>, String> {
        if call.slot_id.is_empty() {
            return Err("missing slot id".into());
        }
        if !crate::protocol::valid_id(&call.name) {
            return Err("invalid tool name".into());
        }
        let now = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .map(|d| d.as_secs() as i64)
            .unwrap_or(0);
        let (tx, rx) = oneshot::channel();
        let id = call.id.to_string();
        self.state.lock().await.parked.insert(
            id.clone(),
            ParkedCall {
                call: call.clone(),
                created_at: now,
                tx: Some(tx),
            },
        );
        self.emit(
            "mcp_tool_call",
            json!({"id": call.id, "name": call.name, "arguments": call.arguments}),
        );
        Ok(rx)
    }

    /// Resolve a parked call with a tool result.
    pub async fn resolve(&self, id: &str, result: McpToolResult) -> bool {
        let parked = self.state.lock().await.parked.remove(id);
        let Some(mut parked) = parked else {
            return false;
        };
        if let Some(tx) = parked.tx.take() {
            let _ = tx.send(result.clone());
        }
        self.emit("mcp_result", json!({"id": id, "result": result}));
        true
    }

    /// `server::handle_mcp_cancel` 0x1115f0.
    pub async fn cancel(&self, id: &str) -> bool {
        let parked = self.state.lock().await.parked.remove(id);
        let Some(mut parked) = parked else {
            return false;
        };
        if let Some(tx) = parked.tx.take() {
            let _ = tx.send(McpToolResult::error("cancelled"));
        }
        self.emit("mcp_cancel", json!({"id": id}));
        true
    }

    /// `server::handle_mcp_listed`: replace the visible tool revision.
    pub async fn listed(&self, tools: Vec<McpToolSpec>) -> u64 {
        let mut state = self.state.lock().await;
        state.tools_revision = state.tools_revision.wrapping_add(1);
        state.tools = tools.iter().map(|t| (t.name.clone(), t.clone())).collect();
        let revision = state.tools_revision;
        drop(state);
        self.emit(
            "tools_list_changed",
            json!({"revision": revision, "tools": tools}),
        );
        revision
    }

    pub async fn tools(&self) -> (u64, Vec<McpToolSpec>) {
        let state = self.state.lock().await;
        (
            state.tools_revision,
            state.tools.values().cloned().collect(),
        )
    }

    pub fn subscribe(&self) -> broadcast::Receiver<String> {
        self.events.subscribe()
    }

    /// Drop calls older than the tool timeout.
    pub async fn expire(&self, timeout: Duration) {
        let now = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .map(|d| d.as_secs() as i64)
            .unwrap_or(0);
        let cutoff = now - timeout.as_secs() as i64;
        let mut state = self.state.lock().await;
        let expired: Vec<String> = state
            .parked
            .iter()
            .filter(|(_, p)| p.created_at < cutoff)
            .map(|(id, _)| id.clone())
            .collect();
        for id in expired {
            if let Some(mut p) = state.parked.remove(&id) {
                if let Some(tx) = p.tx.take() {
                    let _ = tx.send(McpToolResult::error("mcp tool timeout"));
                }
            }
        }
    }
}

/// `mcp::write_slot_mcp_config_files`: atomically write `mcp-bridge.json` and the
/// Claude `mcp_config.json` under the global config lock.
pub fn write_slot_mcp_config_files(
    slot_dir: &Path,
    bridge: &Value,
    claude_config: &Value,
) -> std::io::Result<()> {
    let _guard = MCP_CONFIG_LOCK
        .get_or_init(|| std::sync::Mutex::new(()))
        .lock()
        .unwrap();
    write_atomic(&slot_dir.join("mcp-bridge.json"), bridge)?;
    write_atomic(&slot_dir.join("mcp_config.json"), claude_config)
}

fn write_atomic(path: &Path, value: &Value) -> std::io::Result<()> {
    let tmp = path.with_extension(format!("tmp-{}", std::process::id()));
    std::fs::write(&tmp, serde_json::to_vec(value)?)?;
    std::fs::rename(tmp, path)
}

pub mod stdio {
    //! `craggemini_core::mcp_stdio` — JSON-RPC over stdio.

    use serde_json::{json, Value};
    use std::io::{BufRead, Read, Write};

    pub const DEFAULT_SERVER_NAME: &str = "craggemini-mcp";
    pub const MAX_MESSAGE: usize = 8 * 1024 * 1024;

    /// `mcp_stdio::parse_content_length`.
    pub fn parse_content_length(header: &str) -> Option<usize> {
        for line in header.lines() {
            if let Some(value) = line.strip_prefix("Content-Length:") {
                return value.trim().parse().ok().filter(|n| *n <= MAX_MESSAGE);
            }
        }
        None
    }

    pub fn default_server_name() -> &'static str {
        DEFAULT_SERVER_NAME
    }

    #[derive(Debug)]
    pub enum RpcMessage {
        List {
            id: Value,
        },
        Call {
            id: Value,
            name: String,
            arguments: Value,
        },
        Cancel {
            id: Value,
        },
        Ready,
    }

    pub fn decode(value: &Value) -> Option<RpcMessage> {
        match value.get("method")?.as_str()? {
            "tools/list" => Some(RpcMessage::List {
                id: value.get("id")?.clone(),
            }),
            "tools/call" => Some(RpcMessage::Call {
                id: value.get("id")?.clone(),
                name: value.pointer("/params/name")?.as_str()?.to_string(),
                arguments: value
                    .pointer("/params/arguments")
                    .cloned()
                    .unwrap_or(Value::Null),
            }),
            "notifications/cancelled" => Some(RpcMessage::Cancel {
                id: value.get("id")?.clone(),
            }),
            "notifications/tools/list_changed" => Some(RpcMessage::Ready),
            _ => None,
        }
    }

    /// `mcp_stdio::unix_http_json_sync`: POST JSON to the kernel control socket.
    pub fn unix_http_json_sync(
        socket: &std::path::Path,
        path: &str,
        body: &Value,
    ) -> std::io::Result<Value> {
        use std::os::unix::net::UnixStream;
        let payload = serde_json::to_vec(body)?;
        let mut stream = UnixStream::connect(socket)?;
        write!(
            stream,
            "POST /{path} HTTP/1.1\r\nHost: localhost\r\nContent-Type: application/json\r\nContent-Length: {}\r\n\r\n",
            payload.len()
        )?;
        stream.write_all(&payload)?;
        let mut reader = std::io::BufReader::new(stream);
        let mut status = String::new();
        reader.read_line(&mut status)?;
        loop {
            let mut line = String::new();
            reader.read_line(&mut line)?;
            if line == "\r\n" || line.is_empty() {
                break;
            }
        }
        let mut body = Vec::new();
        reader.read_to_end(&mut body)?;
        serde_json::from_slice(&body)
            .map_err(|e| std::io::Error::new(std::io::ErrorKind::InvalidData, e))
    }

    /// `mcp_stdio::run_internal_mcp_stdio`: Content-Length framed request loop.
    pub fn run_internal_mcp_stdio(socket: &std::path::Path) {
        let stdin = std::io::stdin();
        let mut reader = std::io::BufReader::new(stdin.lock());
        loop {
            let mut content_length = None;
            loop {
                let mut line = String::new();
                if reader.read_line(&mut line).unwrap_or(0) == 0 {
                    return;
                }
                let trimmed = line.trim_end();
                if trimmed.is_empty() {
                    break;
                }
                if let Some(n) = parse_content_length(trimmed) {
                    content_length = Some(n);
                }
            }
            let Some(len) = content_length else { continue };
            let mut buf = vec![0u8; len];
            if reader.read_exact(&mut buf).is_err() {
                return;
            }
            let Ok(value) = serde_json::from_slice::<Value>(&buf) else {
                continue;
            };
            let Some(message) = decode(&value) else {
                continue;
            };
            let response = match message {
                RpcMessage::List { id } => {
                    unix_http_json_sync(socket, "internal/mcp/tools", &json!({}))
                        .unwrap_or_else(|e| json!({"error": e.to_string()}))
                }
                RpcMessage::Call {
                    id,
                    name,
                    arguments,
                } => unix_http_json_sync(
                    socket,
                    "internal/mcp/call",
                    &json!({"id": id, "name": name, "arguments": arguments}),
                )
                .unwrap_or_else(|e| json!({"error": e.to_string()})),
                RpcMessage::Cancel { id } => {
                    unix_http_json_sync(socket, "internal/mcp/cancel", &json!({"id": id}))
                        .unwrap_or_else(|e| json!({"error": e.to_string()}))
                }
                RpcMessage::Ready => continue,
            };
            let out = serde_json::to_vec(&response).unwrap_or_default();
            let mut stdout = std::io::stdout();
            let _ = write!(stdout, "Content-Length: {}\r\n\r\n", out.len());
            let _ = stdout.write_all(&out);
            let _ = stdout.flush();
        }
    }
}
