# Architecture highlights (from symbols + strings)

`craggemini` is a native Rust (tokio + axum + hyper) multi-protocol gateway that drives the
Google `agy` CLI through a PTY and an `LD_PRELOAD` bridge, with a shared-memory ring fast path.

- HTTP/routes: `server::serve_http`, `server::handle`, `/v1/messages`, `/v1/responses`,
  `/v1/chat/completions`, `/v1/images/{generations,edits}`, `/v1/models`, `/v1beta/*` (Gemini),
  `/internal/v1/messages`, `/internal/v1/conversations/resume`, `/internal/mcp/*`, `/healthz`.
- Turn pipeline: `server::dispatch_turn` → `execute_envelope`/`execute_native_body` →
  `server::run_native` → `bridge::run_loop` → `bridge::execute` → agy PTY.
- Pooling: `pool::AgySlot::spawn`, `take_matching_idle`, `pump_account_queue`,
  `stage_slot_agy_home`, prewarm/idle TTL, per-account concurrency.
- IPC: `shm` ring (`crc32c_sse42`, eventfd wakeups), `RingRespMeta`, `require_shm`,
  `memfd_scm_rights_v1`.
- Protocol conversion: `multiprotocol::{render_anthropic_json, render_openai_chat_json,
  render_openai_responses_json, render_gemini_json, sse_with_protocol}`, `tools::filter_sse_for_client`,
  `tools::aggregate_sse_to_json`.
- Native tools: web search, image generation, inline media (`tools::parse_native_*`),
  MCP tool schemas (`schema::*`), subagent synthesis (`subagents::*`).
- MCP: `mcp_stdio` JSON-RPC stdio bridge, `mcp::McpCoordinator`, `X-Craggemini-Slot-Id`,
  `/internal/mcp/{call,cancel,events,listed,tools}`.
- Process isolation: `guard::open_pty`, `guard::child_pre_exec_attach`, `guard_exec::*`,
  `binding::*` SOCKS5/HTTP CONNECT + live proxy calibration.
- License: `license::LicenseGate`, `authenticated_claims`, `verify_signature`,
  `unwrap_device_key`, host roster (`CRAGH2`/`CRAGS1`), pack integrity (`license::files`).
- OAuth: `oauth::start_oauth`, `prepare_agy_oauth_home`, token inspection.
- Resume: `resume::{build_delta, chain_digests, extract_assistant_from_sse}` with
  `ConversationRecord`/`PersistedSessions`.

`kernel.json` config (`Config`, 37 fields) includes `first_byte_timeout_ms`, `idle_timeout_ms`,
`max_queue`, `shm_request_bytes`, `shm_response_bytes`, `require_shm`,
`circuit_failure_threshold`, `circuit_open_ms`, `max_concurrency`, `sticky_*`, `license_dir`.
