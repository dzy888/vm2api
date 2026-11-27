# Key findings

## What the paid kernel actually is

`craggemini` is not a thin wrapper: it is a full native multi-protocol gateway that owns
account pooling, PTY/process isolation, SSE transcoding, shared-memory transport, MCP
bridging, OAuth handling, license enforcement and package integrity. The public Claude
equivalent is `crag-v2`; this is its Gemini sibling, product `craggemini`.

## Process / transport design

- `server::serve_http` (axum/hyper) → `server::handle` → `Runtime::admit` →
  `dispatch_turn` / `dispatch_pool_turn` / `run_native` → `bridge::run_loop`.
- `guard::open_pty` + `guard::child_pre_exec_attach` + `guard_exec` (PID-namespace,
  pidfd) launch the Google `agy` CLI under an `LD_PRELOAD` bridge.
- Fast path is a memfd shared ring: `shm::ShmRingOwner::{create_memfd,push_request,
  send_to_peer,drain_responses}`, CRC32C SSE4.2, eventfd wakeups, SCM_RIGHTS fd passing.
- `pool::AgySlot::{spawn,take_matching_idle}` keeps warm per-account slots; `PoolManager`
  and `PoolSchedulingPolicy` enforce concurrency, prewarm, idle TTL and circuit breakers.
- `binding` authenticates the per-account SOCKS5/HTTP CONNECT proxy and can start a local
  authenticated proxy bridge (`BindingRegistry`, `LocalProxyBridge`, `CalibrationProof`).

## Protocol surface

Anthropic Messages, OpenAI Chat Completions, OpenAI Responses, Gemini `:generateContent`
/ `:streamGenerateContent`, image generation/edit, model lists, conversation resume,
subagent actions, live control and an internal MCP bridge. Transcoding lives in
`multiprotocol`, `tools`, `subagents`, `schema`, `resume`; SSE is filtered per client.

## License gate

`LicenseGate::new(vm_id, license_dir, host_license_dir)`; `check()` runs
`authenticated_claims`, which validates issuer signature, `payload_key_id`, `vm_id`,
`machine_id_hash`, `device_public_key`, time window, host roster/seat and then unwraps the
payload key (`unwrap_device_key`). Package integrity is re-walked with
`files::walk_directory` / `machine_fingerprint`. `HostStamp::read` and
`GrantMetadata::check_at` cover the host entitlement path. Errors are terminal 403s
(`license_*`), not retryable upstream failures.

## Account / OAuth

`oauth` drives the `agy` OAuth URL, isolated HOME and token metadata;
`trusted token path is a regular file` and `credential health` guards are enforced.
Account config is validated by `binding::validate_account_config` (`agy_bin`/`bridge_so`
must be absolute, `proxy_sha256` must match, `session_idle_ttl_secs` 0 or 10..=86400).

## Noteworthy hardening

- `schema::sanitize_tool_name` / `strip_mcp_prefix` / `ensure_required_properties`.
- `tools::filter_sse_for_client` and `aggregate_sse_to_json` avoid leaking native frames.
- `guard_exec::kill_process_group` and pidfd reaping.
- `protocol::parse_google_quota_error`, `parse_retry_after_ms` for upstream backoff.
- `private_file` / `license::files` O_NOFOLLOW-style private-file discipline.

## Size

12,704 symbols, 1,449 project functions, 20 project source files, 6.55 MB stripped of DWARF
but with full symbol table. Largest modules by symbol count: `pool` (44 direct funcs),
`license` (41), `server` (25 + 417 closures/generics), `tools` (25).
