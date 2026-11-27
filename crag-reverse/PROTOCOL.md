# Internal protocol (reconstructed)

## Envelope (`protocol::Envelope`, 9 fields)

Fields visible around the serde block: `request_id`, `body`, `headers`, `stream`,
`delivery_mode`, `preserve_cache_breakpoints`, `cache_ttl`, `gateway_policy`, `request_context`.

## Gateway policy (`protocol::GatewayPolicy`, 3 fields)

`queue_wait_ms`, `first_byte_timeout_ms`, `stream_idle_timeout_ms`.
The public control plane may also send `native_handoff_v1: true` when the health
capability set allows it.

## Shared memory fast path

- `shm::ShmRingOwner` / `ShmOwner` / `Mapping` / `RingFrame`, `RingRespMeta(4)`.
- `memfd_scm_rights_v1`: ring fd passed over SCM_RIGHTS; `eventfd_wakeup_v1` for wakeups.
- CRC32C over ring parts (`shm::crc32c_sse42`, `crc32c_parts`); `require_shm` rejects fallback.
- `RingSubmitMeta` carries `seq`, `session_id`, `request_id`, `session`.

## Captured wire details

See `NATIVE-PROTOCOL-CAPTURED.md` for the verified handshake lines, SCM_RIGHTS fd order,
ring header/frame layout, CRC32C coverage, Submit payload (`u32 meta_len | meta | prompt | NUL`)
and the `CRAGGEMINI_VERIFIED_EXE_META` stamp format.

## Bridge events (`protocol::FromBridge` / `ToBridge`)

Observed tags: `provider_start`, `provider_sse`, `provider_sse_shm`, `provider_end`,
`provider_status`, `native_tool_payload`, `native_tool_inline`, `native_failed`,
`subagent_start`, `subagent_sse`, `subagent_end`, `control_result`, `stream_start`,
`delta`, `stream_end`, `stream_failed`, `upstream_http`, `mcp_tool_call`.

SSE event names mirrored to clients: `content_block_start`, `content_block_delta`,
`content_block_stop`, `response.output_item.added`, `response.function_call_arguments.delta`,
`response.output_text.delta`, `response.reasoning_summary_text.delta`,
`response.reasoning_summary_part.added/done`, `response.content_part.added/done`,
`response.completed`, `thinking_delta`, `signature_delta`, `text_delta`,
`reasoning_content`, `reasoning`.

## Capabilities advertised

`native_tui`, `streaming`, `cancel_v1`, `gateway_policy_v1`, `provider_status_v1`,
`per_instance_license`, `encrypted_payload`, `crag_subscription_v2`, `shm_dispatch_v1`,
`shm_ring_v2`, `memfd_scm_rights_v1`, `eventfd_wakeup_v1`, `native_tools_web_v1`,
`native_tools_image_v1`, `native_subagents_v1`, `live_control_v1`, `mcp_bridge_v1`,
`conversation_resume_v1`, `non_streaming_json_v1`, `system_prompt_hook_v1`,
`pool_policy_v1`, `account_session_isolation_v1`, `thinking_control_v1`,
`multiprotocol_v1`, `error_body_hook_v1`, `per_account_license_v1`, `tool_filter_hook_v1`.

Internal: `agy_tui_bridge_v1/v2/v3`, `multi_attempt_v1`, `graceful_cancel_v1`,
`quota_v1`, `guard_v1`, `patch_v1`, `parse_file_v5`, `parse_directory_v5`.

## Failure / control codes (rodata)

`license_required`, `license_expired`, `license_not_yet_valid`, `license_invalid`,
`license_binding_mismatch`, `license_payload_key_mismatch`, `license_unconfigured`,
`unsupported_turn`, `invalid_envelope`, `duplicate_env_id`, `invalid_idle_ttl`,
`queue_timeout_ms`, `oauth_pty_failed`, `slot_guard_error`, `native_tool_payload`,
`exhausted`, `cancelled`, `stream_failed`, `native_failed`.

## MCP

JSON-RPC over stdio with `Content-Length` framing (`mcp_stdio::parse_content_length`),
bridged to `/internal/mcp/tools?defer_ack=1`, `/internal/mcp/listed`,
`/internal/mcp/call`, `/internal/mcp/cancel`, `/internal/mcp/events?since=`
with `X-Craggemini-Slot-Id`. Tool schemas are projected by `schema::*`
(MCP prefix stripped, required properties ensured, names sanitized).

## FromBridge variants (serde metadata)

`Accepted(2)`, `ControlResult(5)`, `Failed(1)`, `Idle(2)`, `NativeToolInline(3)`,
`NativeToolShm(6)`, `ProviderEnd(3)`, `ProviderSse(3)`, `ProviderSseShm(6)`,
`ProviderStart(6)`, `Ready(5)`, `SubagentEnd(4)`, `SubagentEvent(7)`,
`SubagentSse(4)`, `SubagentStart(5)`.

`SystemPromptMode` variants: `zero`, `append`, `replace`, `official`, `official_full`, `0`.
