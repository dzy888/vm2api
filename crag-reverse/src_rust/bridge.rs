//! Reconstructed `craggemini_core::bridge` — turn submission and SSE delivery to `agy`.
//! Addresses: `Bridge::new` 0x2d5c30, `deliver_sse_frame` 0x1b72f0,
//! `build_bridge_tool_filter` 0x2e8830, `run_loop` closure 0x17ea40.
#![allow(dead_code, unused)]

use std::collections::VecDeque;
use std::sync::Arc;

use serde_json::Value;

use crate::protocol::{ring_decode, Envelope, Failure, FromBridge, RingSubmitMeta};
use crate::shm::{RingFrame, ShmRingOwner};

pub const READ_BUFFER: usize = 0x2000;

/// `bridge::VerifiedExeKey` — file identity used to re-validate a copied worker.
pub struct VerifiedExeKey {
    pub dev: u64,
    pub ino: u64,
    pub size: u64,
    pub ctime_sec: i64,
    pub ctime_nsec: u32,
    pub mtime_sec: i64,
    pub mtime_nsec: u32,
}

impl VerifiedExeKey {
    /// `bridge::VerifiedExeKey::from_meta` 0x2d2160.
    pub fn from_meta(meta: &str) -> Option<Self> {
        let mut it = meta.split(':');
        Some(Self {
            dev: it.next()?.parse().ok()?,
            ino: it.next()?.parse().ok()?,
            size: it.next()?.parse().ok()?,
            ctime_sec: it.next()?.parse().ok()?,
            ctime_nsec: it.next()?.parse().ok()?,
            mtime_sec: it.next()?.parse().ok()?,
            mtime_nsec: it.next()?.parse().ok()?,
        })
    }

    /// `bridge::exe_meta_stamp` 0x2e7600.
    pub fn stamp(&self) -> String {
        format!(
            "{}:{}:{}:{}:{}:{}:{}",
            self.dev,
            self.ino,
            self.size,
            self.ctime_sec,
            self.ctime_nsec,
            self.mtime_sec,
            self.mtime_nsec
        )
    }

    pub fn from_path(path: &std::path::Path) -> std::io::Result<Self> {
        use std::os::unix::fs::MetadataExt;
        let m = std::fs::metadata(path)?;
        Ok(Self {
            dev: m.dev(),
            ino: m.ino(),
            size: m.size(),
            ctime_sec: m.ctime(),
            ctime_nsec: m.ctime_nsec() as u32,
            mtime_sec: m.mtime(),
            mtime_nsec: m.mtime_nsec() as u32,
        })
    }
}

/// `bridge::verify_agy` 0x2f0470: SHA-256 of the executable against `agy_sha256`.
pub fn verify_agy_sha256(path: &std::path::Path, expected: &str) -> std::io::Result<bool> {
    use sha2::{Digest, Sha256};
    let mut f = std::fs::File::open(path)?;
    let mut h = Sha256::new();
    std::io::copy(&mut f, &mut h)?;
    Ok(crate::license::hex(&h.finalize()) == expected)
}

pub struct Bridge {
    pub config: Arc<crate::Config>,
    pub native: Option<Arc<tokio::sync::Mutex<tokio::io::BufReader<tokio::net::UnixStream>>>>,
    pub ring: Option<Arc<ShmRingOwner>>,
    pub buffer: VecDeque<u8>,
    pub tools: Vec<crate::tools::ClientTool>,
    pub supports_live_control: bool,
    pub supports_graceful_cancel: bool,
    pub verified_exe: Option<([u8; 32], std::time::SystemTime)>,
}

impl Bridge {
    /// `Bridge::new` @ 0x2d5c30 (0x2000 zeroed read buffer, capability flags).
    pub fn new(config: &crate::Config) -> std::io::Result<Self> {
        Ok(Self {
            config: Arc::new(config.clone()),
            native: None,
            ring: None,
            buffer: VecDeque::with_capacity(READ_BUFFER),
            tools: Vec::new(),
            supports_live_control: true,
            supports_graceful_cancel: true,
            verified_exe: None,
        })
    }

    pub fn uses_shm(&self) -> bool {
        self.ring.is_some()
    }

    /// `bridge::Bridge::new` counterpart for an accepted native socket.
    pub fn from_stream(
        stream: tokio::net::UnixStream,
        config: &crate::Config,
    ) -> std::io::Result<Self> {
        let mut bridge = Self::new(config)?;
        bridge.native = Some(Arc::new(tokio::sync::Mutex::new(
            tokio::io::BufReader::new(stream),
        )));
        Ok(bridge)
    }

    async fn write_native(&self, value: &Value) -> Result<(), Failure> {
        use tokio::io::AsyncWriteExt;
        let Some(native) = &self.native else {
            return Err(Failure::new(503, "native_unavailable", "no native socket"));
        };
        let mut stream = native.lock().await;
        let mut line = serde_json::to_vec(value)
            .map_err(|e| Failure::new(400, "invalid_envelope", &e.to_string()))?;
        line.push(b'\n');
        stream
            .get_mut()
            .write_all(&line)
            .await
            .map_err(|e| Failure::new(502, "native_failed", &e.to_string()))
    }

    async fn read_native(&self) -> Result<Value, Failure> {
        use tokio::io::AsyncBufReadExt;
        let Some(native) = &self.native else {
            return Err(Failure::new(503, "native_unavailable", "no native socket"));
        };
        let mut stream = native.lock().await;
        let mut line = String::new();
        let n = stream
            .read_line(&mut line)
            .await
            .map_err(|e| Failure::new(502, "native_failed", &e.to_string()))?;
        if n == 0 {
            return Err(Failure::new(502, "native_failed", "native socket closed"));
        }
        serde_json::from_str(&line).map_err(|e| Failure::new(502, "provider_sse", &e.to_string()))
    }

    /// `Bridge::drain_ring_into_buffer` @ 0x2d4920.
    pub fn drain_ring_into_buffer(&mut self, max: usize) -> std::io::Result<Vec<RingFrame>> {
        let Some(ring) = &self.ring else {
            return Ok(Vec::new());
        };
        let frames = ring.drain_responses(max)?;
        for f in &frames {
            self.buffer.extend(&f.payload);
        }
        Ok(frames)
    }

    /// `Bridge::attach_session` (inlined around 0x2f0470): write a session frame and
    /// notify the peer over the ring.
    pub fn attach_session(&self, session: &str) -> std::io::Result<()> {
        let Some(ring) = &self.ring else {
            return Ok(());
        };
        ring.push_request(0, 0x1, session.as_bytes())
    }

    /// `bridge::execute` 0x2f4eb0 family: submit a turn, then run the provider loop.
    pub async fn execute(
        &self,
        envelope: Envelope,
    ) -> Result<crate::server::JsonTurnResult, Failure> {
        let meta = self.meta_for(&envelope, false);
        let prompt = crate::protocol::prompt_from_body(&envelope.body);
        if self.native.is_some() {
            let request = serde_json::to_value(crate::protocol::ToBridge::Submit(envelope.clone()))
                .map_err(|e| Failure::new(400, "invalid_envelope", &e.to_string()))?;
            self.write_native(&request).await?;
        } else if let Some(ring) = &self.ring {
            let packed = crate::protocol::pack_ring_envelope(&meta, &prompt);
            ring.push_request(0, 1, &packed)
                .map_err(|e| Failure::new(503, "native_unavailable", &e.to_string()))?;
        } else {
            return Err(Failure::new(
                503,
                "native_unavailable",
                "no native socket or ring",
            ));
        }
        let first_byte = std::time::Duration::from_millis(self.config.first_byte_timeout_ms.max(1));
        let idle = std::time::Duration::from_millis(self.config.idle_timeout_ms.max(1));
        self.run_loop(first_byte, idle).await
    }

    /// `bridge::deliver_sse_frame` / `sse_with_protocol`: stream frames to the client.
    pub async fn submit_stream(
        &self,
        envelope: Envelope,
    ) -> Result<crate::server::Delivery, Failure> {
        let ring = self.ring.clone();
        let meta = self.meta_for(&envelope, true);
        let prompt = crate::protocol::prompt_from_body(&envelope.body);
        if self.native.is_some() {
            let request = serde_json::to_value(crate::protocol::ToBridge::Submit(envelope.clone()))
                .map_err(|e| Failure::new(400, "invalid_envelope", &e.to_string()))?;
            self.write_native(&request).await?;
        } else if let Some(ring) = &ring {
            let packed = crate::protocol::pack_ring_envelope(&meta, &prompt);
            ring.push_request(0, 1, &packed)
                .map_err(|e| Failure::new(503, "native_unavailable", &e.to_string()))?;
        } else {
            return Err(Failure::new(
                503,
                "native_unavailable",
                "no native socket or ring",
            ));
        }
        let (tx, rx) = tokio::sync::mpsc::channel(64);
        let first = std::time::Duration::from_millis(self.config.first_byte_timeout_ms.max(1));
        let idle = std::time::Duration::from_millis(self.config.idle_timeout_ms.max(1));
        tokio::spawn(stream_task(self.native.clone(), ring, tx, first, idle));
        Ok(crate::server::Delivery::Stream(rx))
    }

    fn meta_for(&self, envelope: &Envelope, _stream: bool) -> RingSubmitMeta {
        RingSubmitMeta {
            request_id: envelope.request_id.clone(),
            allow_multi_attempt: self.supports_live_control,
            allow_subagents: !self.tools.is_empty(),
            system_prompt_mode: envelope
                .headers
                .get("x-craggemini-system-prompt-mode")
                .and_then(|m| serde_json::from_value(Value::String(m.clone())).ok())
                .unwrap_or_default(),
            thinking_level: envelope
                .request_context
                .as_ref()
                .and_then(|v| v.get("thinking_level"))
                .and_then(Value::as_u64)
                .unwrap_or(2) as u8,
            include_thoughts: true,
            system_prompt: envelope
                .request_context
                .as_ref()
                .and_then(|v| v.get("system_prompt"))
                .and_then(Value::as_str)
                .map(str::to_string),
            tool_filter: crate::protocol::ToolFilter::default(),
            expected_native_conversation_id: envelope
                .request_context
                .as_ref()
                .and_then(|v| v.get("native_conversation_id"))
                .and_then(Value::as_str)
                .map(str::to_string),
        }
    }

    /// `bridge::execute_continuation` closure 0x1b7ef0: same request, but bound to a
    /// native conversation id so the kernel continues the existing turn.
    pub async fn execute_continuation(
        &self,
        mut envelope: Envelope,
        native_conversation_id: &str,
    ) -> Result<crate::server::JsonTurnResult, Failure> {
        if envelope.request_context.is_none() {
            envelope.request_context = Some(serde_json::json!({}));
        }
        if let Some(ctx) = envelope.request_context.as_mut() {
            ctx["native_conversation_id"] = Value::String(native_conversation_id.to_string());
        }
        self.execute(envelope).await
    }

    /// `bridge::run_loop` closure 0x1bba80: consume `FromBridge` frames until
    /// `ProviderEnd`, a terminal `Failed`, or the first-byte/idle timeout.
    pub async fn run_loop(
        &self,
        first_byte: std::time::Duration,
        idle: std::time::Duration,
    ) -> Result<crate::server::JsonTurnResult, Failure> {
        let mut deadline = first_byte;
        let mut text = String::new();
        let mut usage = None;
        let mut stop = None;
        loop {
            let frame = tokio::time::timeout(deadline, self.next_frame())
                .await
                .map_err(|_| Failure::new(504, "native_unavailable", "provider timeout"))??;
            deadline = idle;
            match frame {
                FromBridge::Accepted { .. }
                | FromBridge::Ready { .. }
                | FromBridge::Idle { .. }
                | FromBridge::ProviderSseShm { .. }
                | FromBridge::NativeToolShm { .. }
                | FromBridge::ProviderStart { .. } => {}
                FromBridge::ProviderSse { payload, .. } => {
                    if let Some(t) = payload.pointer("/delta/text").and_then(Value::as_str) {
                        text.push_str(t);
                    }
                    if let Some(u) = payload.get("usage").cloned() {
                        usage = Some(u);
                    }
                    if let Some(s) = payload.get("stop_reason").and_then(Value::as_str) {
                        stop = Some(s.to_string());
                    }
                }
                FromBridge::ProviderEnd { status, .. } => {
                    return Ok(crate::server::JsonTurnResult {
                        status,
                        body: serde_json::json!({ "text": text, "stop_reason": stop }),
                        usage,
                    });
                }
                FromBridge::NativeToolInline { payload, .. } => {
                    if let Some(t) = payload.get("text").and_then(Value::as_str) {
                        text.push_str(t);
                    }
                }
                FromBridge::ControlResult { .. } => {}
                FromBridge::SubagentStart { .. }
                | FromBridge::SubagentSse { .. }
                | FromBridge::SubagentEvent { .. }
                | FromBridge::SubagentEnd { .. } => {}
                FromBridge::Failed { error } => {
                    let msg = error
                        .get("message")
                        .and_then(Value::as_str)
                        .unwrap_or("native failed");
                    return Err(Failure::new(502, "native_failed", msg));
                }
            }
        }
    }

    async fn next_frame(&self) -> Result<FromBridge, Failure> {
        if let Some(native) = &self.native {
            use tokio::io::AsyncBufReadExt;
            let mut stream = native.lock().await;
            let mut line = String::new();
            let n = stream
                .read_line(&mut line)
                .await
                .map_err(|e| Failure::new(502, "native_failed", &e.to_string()))?;
            if n == 0 {
                return Err(Failure::new(502, "native_failed", "native socket closed"));
            }
            return serde_json::from_str(&line)
                .map_err(|e| Failure::new(502, "provider_sse", &e.to_string()));
        }
        let Some(ring) = &self.ring else {
            return Err(Failure::new(503, "native_unavailable", "no shared ring"));
        };
        let frames = ring
            .drain_responses(1)
            .map_err(|e| Failure::new(502, "provider_sse", &e.to_string()))?;
        let Some(frame) = frames.first() else {
            return Err(Failure::new(502, "provider_sse", "empty ring frame"));
        };
        Self::decode_frame(frame)
    }

    /// `bridge::run_loop` closure 0x1bba80 / 0x19dd90: decode a frame into `FromBridge`.
    pub fn decode_frame(frame: &RingFrame) -> Result<FromBridge, Failure> {
        ring_decode(&frame.payload).map_err(|e| Failure::new(502, "provider_sse", &e))
    }

    /// `bridge::deliver_sse_frame` 0x1b72f0: the event selector is a jump table on
    /// the frame flag byte; each arm maps to one public SSE name.
    pub fn sse_event_name(flag: u8) -> &'static str {
        match flag {
            0 => "content_block_start",
            1 => "content_block_delta",
            2 => "content_block_stop",
            3 => "response.output_item.added",
            4 => "response.function_call_arguments.delta",
            5 => "response.function_call_arguments.done",
            6 => "response.output_item.done",
            7 => "response.content_part.added",
            8 => "response.output_text.delta",
            9 => "response.content_part.done",
            10 => "response.reasoning_summary_part.added",
            11 => "response.reasoning_summary_text.delta",
            12 => "response.reasoning_summary_part.done",
            13 => "response.completed",
            _ => "message",
        }
    }

    /// `bridge::build_bridge_tool_filter` 0x2e8830: pick a tool by exact name from the
    /// three name fields per tool, gated by the request's filter flags.
    pub fn build_tool_filter(&self, name: &str, allow: bool) -> crate::protocol::BridgeToolFilter {
        let tool = self
            .tools
            .iter()
            .find(|t| t.name == name || t.mcp_name == name || t.public_name == name);
        crate::protocol::BridgeToolFilter {
            tool: tool.cloned(),
            allow,
            live_control: self.supports_live_control,
            graceful_cancel: self.supports_graceful_cancel,
        }
    }

    /// `bridge::handle_native_tool_payload` closure 0x1b89e0: stage a native tool
    /// payload (web/image) and synthesize provider-side SSE frames.
    pub fn handle_native_tool_payload(&mut self, payload: Vec<u8>) -> Vec<String> {
        let value: Value = serde_json::from_slice(&payload).unwrap_or(Value::Null);
        let kind = value
            .get("kind")
            .and_then(Value::as_str)
            .unwrap_or("payload");
        let frame = match kind {
            "web_search" => serde_json::json!({
                "type": "content_block_start",
                "content_block": {"type": "server_tool_use", "name": "web_search", "input": value.get("query")},
            }),
            "image" => serde_json::json!({
                "type": "content_block_start",
                "content_block": {"type": "image", "source": value.get("source")},
            }),
            other => {
                serde_json::json!({"type": "content_block_delta", "delta": {"type": other, "payload": value}})
            }
        };
        let text = format!("event: native_tool_payload\ndata: {}\n\n", frame);
        self.buffer.extend(text.as_bytes());
        vec![text]
    }
}

async fn stream_task(
    native: Option<
        std::sync::Arc<tokio::sync::Mutex<tokio::io::BufReader<tokio::net::UnixStream>>>,
    >,
    ring: Option<std::sync::Arc<ShmRingOwner>>,
    tx: tokio::sync::mpsc::Sender<Result<bytes::Bytes, Failure>>,
    first_byte: std::time::Duration,
    idle: std::time::Duration,
) {
    let mut deadline = first_byte;
    loop {
        let next = async {
            if let Some(native) = &native {
                use tokio::io::AsyncBufReadExt;
                let mut stream = native.lock().await;
                let mut line = String::new();
                if stream
                    .read_line(&mut line)
                    .await
                    .map_err(|e| Failure::new(502, "native_failed", &e.to_string()))?
                    == 0
                {
                    return Err(Failure::new(502, "native_failed", "native socket closed"));
                }
                serde_json::from_str::<FromBridge>(&line)
                    .map_err(|e| Failure::new(502, "provider_sse", &e.to_string()))
            } else if let Some(ring) = &ring {
                next_frame_static(ring).await
            } else {
                Err(Failure::new(
                    503,
                    "native_unavailable",
                    "no native socket or ring",
                ))
            }
        };
        let frame = match tokio::time::timeout(deadline, next).await {
            Ok(Ok(f)) => f,
            Ok(Err(e)) => {
                let _ = tx
                    .send(Ok(bytes::Bytes::from(format!(
                        "event: error\ndata: {}\n\n",
                        e.message
                    ))))
                    .await;
                return;
            }
            Err(_) => {
                let _ = tx
                    .send(Ok(bytes::Bytes::from(
                        "event: error\ndata: provider timeout\n\n",
                    )))
                    .await;
                return;
            }
        };
        deadline = idle;
        let out = match frame {
            FromBridge::ProviderSse { payload, .. } => {
                format!(
                    "event: {}\ndata: {}\n\n",
                    payload
                        .get("type")
                        .and_then(Value::as_str)
                        .unwrap_or("delta"),
                    payload
                )
            }
            FromBridge::NativeToolInline { payload, .. } => {
                format!("event: native_tool_payload\ndata: {payload}\n\n")
            }
            FromBridge::ProviderEnd { status, .. } => {
                let _ = tx
                    .send(Ok(bytes::Bytes::from(format!(
                        "event: provider_end\ndata: {{\"status\":{status}}}\n\n"
                    ))))
                    .await;
                return;
            }
            FromBridge::Failed { error } => {
                let _ = tx
                    .send(Ok(bytes::Bytes::from(format!(
                        "event: error\ndata: {error}\n\n"
                    ))))
                    .await;
                return;
            }
            FromBridge::Idle { .. } => return,
            _ => continue,
        };
        if tx.send(Ok(bytes::Bytes::from(out))).await.is_err() {
            return;
        }
    }
}

async fn next_frame_static(ring: &ShmRingOwner) -> Result<FromBridge, Failure> {
    let frames = ring
        .drain_responses(1)
        .map_err(|e| Failure::new(502, "provider_sse", &e.to_string()))?;
    let Some(frame) = frames.first() else {
        return Err(Failure::new(502, "provider_sse", "empty ring frame"));
    };
    Bridge::decode_frame(frame)
}

// ---------------------------------------------------------------------------
// 0.5.0 native prompt pipeline: slice-retained prompt arena, system prompt
// composition and per-model tool filtering.
// ---------------------------------------------------------------------------

/// `agy_bridge`-side `PromptArena` counterpart: keeps prompt fragments alive for
/// a whole turn instead of copying them into every frame.
#[derive(Default)]
pub struct PromptArena {
    chunks: Vec<Vec<u8>>,
}

impl PromptArena {
    /// `PromptArena::alloc`.
    pub fn alloc(&mut self, bytes: &[u8]) -> usize {
        let id = self.chunks.len();
        self.chunks.push(bytes.to_vec());
        id
    }

    /// `PromptArena::finish_turn`.
    pub fn finish_turn(&mut self) -> Vec<Vec<u8>> {
        std::mem::take(&mut self.chunks)
    }

    pub fn get(&self, id: usize) -> Option<&[u8]> {
        self.chunks.get(id).map(Vec::as_slice)
    }
}

/// `bridge::compose_system_prompt`: prepend / append an explicit system prompt
/// according to the mode; `zero` drops the official prompt entirely.
pub fn compose_system_prompt(
    mode: crate::protocol::SystemPromptMode,
    official: &str,
    extra: Option<&str>,
) -> String {
    use crate::protocol::SystemPromptMode::*;
    match mode {
        Zero => extra.unwrap_or_default().to_string(),
        Append => match extra {
            Some(e) => format!("{official}\n\n{e}"),
            None => official.to_string(),
        },
        Replace => extra.unwrap_or_default().to_string(),
        Official => official.to_string(),
        OfficialFull => match extra {
            Some(e) => format!("{e}\n\n{official}"),
            None => official.to_string(),
        },
    }
}

/// `bridge::filter_model_request_tools`: drop tools the model request forbids and
/// optionally pin a single forced MCP tool.
pub fn filter_model_request_tools(
    tools: &[crate::tools::ClientTool],
    filter: &crate::protocol::ToolFilter,
) -> Vec<crate::tools::ClientTool> {
    let mut out: Vec<_> = tools
        .iter()
        .filter(|t| {
            let n = t.name.as_str();
            if n.starts_with("read_file") || n.starts_with("read_url_content") {
                filter.allow_read_file
            } else if n.contains("web_fetch") {
                filter.allow_web_fetch
            } else if n.contains("generate_image") || n.contains("image_gen") {
                filter.allow_image_gen
            } else if n.starts_with("subagent") {
                filter.allow_subagents
            } else if !t.mcp_name.is_empty() || n.starts_with("mcp_") {
                filter.allow_client_mcp
            } else {
                true
            }
        })
        .cloned()
        .collect();
    if let Some(forced) = &filter.forced_mcp_tool {
        out.retain(|t| &t.name == forced);
    }
    out
}
