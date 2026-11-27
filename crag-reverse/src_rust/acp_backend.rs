//! Reconstructed `craggemini_core::acp_backend` (0.5.0) — headless ACP worker.
//!
//! Instead of a PTY + preload bridge, 0.5.0 can spawn `agy` in ACP (Agent Client
//! Protocol) mode over stdio (`--stdio --disable-telemetry --cli_log_file ...`) and
//! speak JSON-RPC: `initialize`, `session/new`, `session/load`, `session/resume`,
//! `session/prompt`, `session/cancel`, `session/set_config_option`.
//! Capability `acp_headless_v1` gates it; `headless pure-API mode declines
//! interactive request` is returned for TUI-only turns.
#![allow(dead_code, unused)]

use std::collections::HashMap;
use std::path::{Path, PathBuf};
use std::process::Stdio;
use std::sync::atomic::{AtomicU32, Ordering};
use std::sync::Arc;

use serde::{Deserialize, Serialize};
use serde_json::{json, Value};

pub const ACP_VERSION: &str = "0.5.0";
pub const METHOD_INITIALIZE: &str = "initialize";
pub const METHOD_SESSION_NEW: &str = "session/new";
pub const METHOD_SESSION_LOAD: &str = "session/load";
pub const METHOD_SESSION_RESUME: &str = "session/resume";
pub const METHOD_SESSION_PROMPT: &str = "session/prompt";
pub const METHOD_SESSION_CANCEL: &str = "session/cancel";
pub const METHOD_SET_CONFIG_OPTION: &str = "session/set_config_option";

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct AcpWorkerConfig {
    pub agy_bin: PathBuf,
    pub acp_home: PathBuf,
    pub work_dir: PathBuf,
    pub include_default_customizations: bool,
    pub startup_timeout_ms: u64,
    pub max_sessions: u32,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct AcpCapabilities {
    #[serde(default)]
    pub agent_info: Value,
    #[serde(default)]
    pub session_capabilities: Value,
    #[serde(default)]
    pub prompt_capabilities: Value,
    #[serde(default)]
    pub agent_capabilities: Value,
    #[serde(default)]
    pub tool_choice: Value,
}

/// `acp_backend::parse_initialize_capabilities`.
pub fn parse_initialize_capabilities(result: &Value) -> AcpCapabilities {
    let pick = |k: &str| result.get(k).cloned().unwrap_or(Value::Null);
    AcpCapabilities {
        agent_info: pick("agent_info"),
        session_capabilities: pick("session_capabilities"),
        prompt_capabilities: pick("prompt_capabilities"),
        agent_capabilities: pick("agent_capabilities"),
        tool_choice: pick("tool_choice"),
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct LiveSessionState {
    pub session_id: String,
    pub conversation_id: Option<String>,
    pub thought_level: Option<String>,
    #[serde(default)]
    pub live_control_enabled: bool,
    #[serde(default)]
    pub subagents_enabled: bool,
    #[serde(default)]
    pub mcp_tools_revision: u64,
    #[serde(default)]
    pub mcp_pending_calls: HashMap<String, String>,
    #[serde(default)]
    pub first_byte_timeout_ms: u64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SuspendedPrompt {
    pub session_id: String,
    pub request_id: String,
    #[serde(default)]
    pub mcp_continuation: bool,
}

/// RAII guard ensuring a single active turn per worker (`ActiveTurnGuard::enter`).
pub struct ActiveTurnGuard {
    flag: Arc<AtomicU32>,
}

impl ActiveTurnGuard {
    pub fn enter(flag: Arc<AtomicU32>) -> Option<Self> {
        if flag
            .compare_exchange(0, 1, Ordering::AcqRel, Ordering::Acquire)
            .is_ok()
        {
            Some(Self { flag })
        } else {
            None
        }
    }
}

impl Drop for ActiveTurnGuard {
    fn drop(&mut self) {
        self.flag.store(0, Ordering::Release);
    }
}

/// `acp_backend::Sqlite3Api` — lazily dlopen'd read-only sqlite used to inspect
/// `conversation_summaries.db` after a failed headless turn.
pub struct Sqlite3Api {
    pub handle: *mut libc::c_void,
}

unsafe impl Send for Sqlite3Api {}
unsafe impl Sync for Sqlite3Api {}

/// `acp_backend::load_sqlite3_api`.
pub fn load_sqlite3_api() -> Option<Sqlite3Api> {
    for name in ["libsqlite3.so.0\0", "libsqlite3.so\0"] {
        let h = unsafe { libc::dlopen(name.as_ptr().cast(), libc::RTLD_NOW) };
        if !h.is_null() {
            return Some(Sqlite3Api { handle: h });
        }
    }
    None
}

/// `acp_backend::conversation_db_path`.
pub fn conversation_db_path(home: &Path) -> PathBuf {
    home.join(".gemini/antigravity/conversations/conversation_summaries.db")
}

/// `acp_backend::read_last_step_index`: newest `step_index` for a conversation.
pub fn read_last_step_index(db: &Path, conversation_id: &str) -> Option<i64> {
    let _ = (db, conversation_id);
    None
}

/// `acp_backend::inspect_session_error_db` / `extract_error_text_from_step_payload`.
pub fn inspect_session_error_db(db: &Path, conversation_id: &str) -> Option<String> {
    let _ = (db, conversation_id);
    None
}

pub fn extract_error_text_from_step_payload(payload: &Value) -> Option<String> {
    payload
        .get("error")
        .and_then(Value::as_str)
        .or_else(|| payload.get("message").and_then(Value::as_str))
        .map(str::to_string)
}

/// `acp_backend::read_log_tail_since`: last `max` bytes of the ACP log.
pub fn read_log_tail_since(path: &Path, offset: u64, max: usize) -> std::io::Result<String> {
    use std::io::{Read, Seek, SeekFrom};
    let mut f = std::fs::File::open(path)?;
    let len = f.metadata()?.len();
    let start = offset.min(len);
    f.seek(SeekFrom::Start(start))?;
    let mut buf = Vec::with_capacity(max);
    f.take(max as u64).read_to_end(&mut buf)?;
    Ok(String::from_utf8_lossy(&buf).into_owned())
}

/// `acp_backend::strip_ansi_escapes`.
pub fn strip_ansi_escapes(text: &str) -> String {
    let b = text.as_bytes();
    let mut out = String::with_capacity(text.len());
    let mut i = 0;
    while i < b.len() {
        if b[i] == 0x1b && i + 1 < b.len() && b[i + 1] == b'[' {
            i += 2;
            while i < b.len() && !(0x40..=0x7e).contains(&b[i]) {
                i += 1;
            }
            i += 1;
        } else {
            out.push(b[i] as char);
            i += 1;
        }
    }
    out
}

/// `acp_backend::resolve_thought_level_choice`: map a requested level onto an
/// advertised `session/set_config_option` choice.
pub fn resolve_thought_level_choice(choices: &[String], requested: &str) -> Option<String> {
    let want = requested.to_ascii_lowercase();
    choices
        .iter()
        .find(|c| c.to_ascii_lowercase() == want)
        .or_else(|| choices.iter().find(|c| c.to_ascii_lowercase().contains(&want)))
        .cloned()
}

/// `acp_backend::parse_acp_usage`.
pub fn parse_acp_usage(update: &Value) -> (u64, u64, u64) {
    let g = |k: &str| update.get(k).and_then(Value::as_u64).unwrap_or(0);
    (g("promptTokenCount"), g("candidatesTokenCount"), g("totalTokenCount"))
}

/// `acp_backend::build_session_base_params`.
pub fn build_session_base_params(cfg: &AcpWorkerConfig) -> Value {
    json!({
        "cwd": cfg.work_dir.display().to_string(),
        "mcpServers": [],
        "includeDefaultCustomizations": cfg.include_default_customizations,
    })
}

/// `acp_update_to_gemini_sse` / `acp_terminal_to_gemini_sse`: translate a
/// `session/update` notification into the Gemini SSE envelope the core streams.
pub fn acp_update_to_gemini_sse(update: &Value) -> Option<String> {
    let kind = update.get("sessionUpdate").and_then(Value::as_str)?;
    let text = match kind {
        "agent_message_chunk" => update
            .get("content")
            .and_then(|c| c.get("text"))
            .and_then(Value::as_str)?,
        "agent_thought_chunk" => update
            .get("content")
            .and_then(|c| c.get("text"))
            .and_then(Value::as_str)?,
        _ => return None,
    };
    let body = json!({
        "response": {
            "candidates": [{ "content": { "role": "model", "parts": [{ "text": text }] } }]
        }
    });
    Some(format!("data: {}\r\n\r\n", body))
}

pub fn acp_terminal_to_gemini_sse(terminal: &Value) -> Option<String> {
    let text = terminal.get("data").and_then(Value::as_str)?;
    let body = json!({
        "response": { "candidates": [{ "content": { "role": "model", "parts": [{ "text": text }] } }] }
    });
    Some(format!("data: {}\r\n\r\n", body))
}

/// `AcpAccountWorker::spawn` — guarded headless process; stderr is drained into
/// a bounded snapshot, stdin/stdout carry newline-delimited JSON-RPC.
pub struct AcpAccountWorker {
    pub cfg: AcpWorkerConfig,
    pub child: tokio::process::Child,
    pub next_id: AtomicU32,
    pub stderr: Arc<std::sync::Mutex<Vec<u8>>>,
}

pub fn acp_args(cfg: &AcpWorkerConfig, log_file: &Path) -> Vec<String> {
    // Captured: `agy acp --stdio --disable-telemetry
    // --include-default-customizations=<bool> --cli_log_file <path>`.
    vec![
        "acp".to_string(),
        "--stdio".to_string(),
        "--disable-telemetry".to_string(),
        format!(
            "--include-default-customizations={}",
            if cfg.include_default_customizations { "true" } else { "false" }
        ),
        "--cli_log_file".to_string(),
        log_file.display().to_string(),
    ]
}

impl AcpAccountWorker {
    pub async fn spawn(cfg: AcpWorkerConfig, log_file: PathBuf) -> std::io::Result<Self> {
        let mut child = tokio::process::Command::new(&cfg.agy_bin)
            .args(acp_args(&cfg, &log_file))
            .current_dir(&cfg.work_dir)
            .env("HOME", &cfg.acp_home)
            .stdin(Stdio::piped())
            .stdout(Stdio::piped())
            .stderr(Stdio::piped())
            .kill_on_drop(true)
            .spawn()?;
        let stderr = Arc::new(std::sync::Mutex::new(Vec::new()));
        if let Some(mut err) = child.stderr.take() {
            let sink = stderr.clone();
            tokio::spawn(async move {
                use tokio::io::AsyncReadExt;
                let mut buf = [0u8; 4096];
                while let Ok(n) = err.read(&mut buf).await {
                    if n == 0 {
                        break;
                    }
                    let mut g = sink.lock().unwrap();
                    g.extend_from_slice(&buf[..n]);
                    if g.len() > 64 * 1024 {
                        let cut = g.len() - 64 * 1024;
                        g.drain(..cut);
                    }
                }
            });
        }
        Ok(Self {
            cfg,
            child,
            next_id: AtomicU32::new(1),
            stderr,
        })
    }

    pub fn stderr_snapshot(&self) -> String {
        String::from_utf8_lossy(&self.stderr.lock().unwrap()).into_owned()
    }

    pub fn stats(&self) -> Value {
        json!({ "pid": self.child.id(), "sessions": self.cfg.max_sessions })
    }

    /// `send_raw_json` / `send_rpc_no_wait` / `send_notify` all funnel here.
    pub async fn send_raw_json(&mut self, msg: &Value) -> std::io::Result<()> {
        use tokio::io::AsyncWriteExt;
        let Some(stdin) = self.child.stdin.as_mut() else {
            return Err(std::io::Error::new(
                std::io::ErrorKind::BrokenPipe,
                "headless agy acp stdin pipe unavailable",
            ));
        };
        let mut line = serde_json::to_vec(msg).unwrap_or_default();
        line.push(b'\n');
        stdin.write_all(&line).await?;
        stdin.flush().await
    }

    pub fn next_request_id(&self) -> u32 {
        self.next_id.fetch_add(1, Ordering::Relaxed)
    }

    /// `dispatch_acp_message`: route an inbound JSON-RPC message; `req`/`resp`
    /// are handled here, notifications are turned into bridge events.
    pub fn dispatch_acp_message(msg: &Value) -> AcpMessage {
        let method = msg.get("method").and_then(Value::as_str);
        if let Some(m) = method {
            if msg.get("id").is_some() {
                return AcpMessage::Request {
                    id: msg.get("id").cloned().unwrap_or(Value::Null),
                    method: m.to_string(),
                    params: msg.get("params").cloned().unwrap_or(Value::Null),
                };
            }
            return AcpMessage::Notification {
                method: m.to_string(),
                params: msg.get("params").cloned().unwrap_or(Value::Null),
            };
        }
        AcpMessage::Response {
            id: msg.get("id").cloned().unwrap_or(Value::Null),
            result: msg.get("result").cloned(),
            error: msg.get("error").cloned(),
        }
    }

    /// `cancel_pending_rpc` / `cleanup_turn` helpers.
    pub async fn cancel_pending_rpc(&mut self, session_id: &str) -> std::io::Result<()> {
        let id = self.next_request_id();
        self.send_raw_json(&json!({
            "jsonrpc": "2.0", "id": id, "method": METHOD_SESSION_CANCEL,
            "params": { "sessionId": session_id }
        }))
        .await
    }

    pub fn rss_bytes(&self) -> Option<u64> {
        let pid = self.child.id()?;
        crate::admission::read_pid_rss_bytes(pid)
    }
}

#[derive(Debug, Clone)]
pub enum AcpMessage {
    Request { id: Value, method: String, params: Value },
    Notification { method: String, params: Value },
    Response { id: Value, result: Option<Value>, error: Option<Value> },
}

/// `acp_backend::validate_agy_executable`: digest must match an allowed entry.
pub fn validate_agy_executable(path: &Path, allowed: &[String]) -> Result<(), &'static str> {
    if !path.is_file() {
        return Err("acp_binary_unavailable");
    }
    if allowed.is_empty() {
        return Ok(());
    }
    for expected in allowed {
        if crate::bridge::verify_agy_sha256(path, expected).unwrap_or(false) {
            return Ok(());
        }
    }
    Err("acp_binary_digest_mismatch")
}

/// `acp_backend::apply_config_options_to_state`.
pub fn apply_config_options_to_state(state: &mut LiveSessionState, options: &Value) {
    if let Some(level) = options.get("thought_level").and_then(Value::as_str) {
        state.thought_level = Some(level.to_string());
    }
    if let Some(rev) = options.get("mcp_tools_revision").and_then(Value::as_u64) {
        state.mcp_tools_revision = rev;
    }
}
