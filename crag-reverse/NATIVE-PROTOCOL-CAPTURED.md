# Native TUI bridge protocol — live capture (0.4.13)

Captured on the real package with a real Google refresh token, `require_shm: true`,
via a gdb breakpoint on `ShmRingOwner::push_request` / `drain_responses` so the memfd
could be dumped between the producer write and the consumer drain.

## 1. Socket handshake (JSON lines over `native.sock`)

The **agy side connects** to the per-slot unix socket the core bound and sends:

```json
{"capabilities":["shm_v1","shm_ring_v2","memfd_scm_rights_v1","eventfd_wakeup_v1","multi_attempt_v1","native_tools_v1","native_subagents_v1","graceful_cancel_v1","resume_v1","system_prompt_hook_v1","thinking_control_v1","tool_filter_hook_v1"],"pid":3313506,"protocol":"agy_tui_bridge_v3","session_id":"sess-...","type":"ready"}
```

The core replies:

```json
{"type":"attached","protocol":"agy_tui_bridge_v3","session_id":"sess-...","shm_mode":"memfd_ring_v2"}
```

Then the core sends **one byte `0xA6` via `sendmsg`** with SCM_RIGHTS carrying exactly
three fds, in this order:

1. `memfd:craggemini_ring` — the shared ring mapping
2. request eventfd (core → agy wakeup)
3. response eventfd (agy → core wakeup)

`0xA6` is the in-band `SubmitShm` command byte; the Submit payload itself is in the ring.

Cancel is a plain line: `{"type":"cancel","request_id":"<id>"}`.

## 2. Ring memory layout

One memfd; `total = 0x1000 + request_cap + response_cap`, caps are powers of two.

```
0x0000  ring prefix
          0x000  request ring header (0x180)
          0x040  head u64 (producer cursor)
          0x080  tail u64 (consumer cursor)
          0x140  pushed u64 (frame counter)
          0x150  bytes u64
          0x160  overflow u64
          +0x0000 "AGYSHM02", +0x0008 u32 version=2,
          +0x0010 u32 prefix=0x1000, +0x0018 u32 request_cap, +0x001C u32 response_cap
          response header sits at +request_cap
0x1000  request ring data (cap bytes, cursor-masked)
0x1000+request_cap  response ring data
```

## 3. Frame format (both directions)

```text
u16 magic = 0xA602 (LE bytes 02 A6)
u16 kind
u32 seq
u32 reserved
u32 reserved
u32 payload_len
u32 crc32c
payload[payload_len]
zero padding to 8 bytes
```

`crc32c = CRC32C(header[0..20] || payload)` (Castagnoli, init/xor 0xFFFFFFFF).
Frame length including header+padding is rounded to 8; the producer advances `head` by
that, bumps `pushed`/`bytes`, then `write(eventfd, 1u64)`.

Request `kind` observed: `1` (`Submit`).
Response `kind` is a *class*, not the event tag: `0x0A` = raw SSE text frame,
`0x0F` = JSON control/status frame. The event name lives in the payload `type` field.
Observed `type` values: `accepted`, `provider_start`, `provider_sse`, `provider_end`,
`idle`. Both classes share the same header and CRC.

### Exact event shapes (0.5.2, captured from a live turn)

```json
{"native_conversation_id":"a4ad2d8e-…","request_id":"dbg0001","type":"accepted"}
{"attempt_id":"main","content_type":"text/event-stream","headers":{"content_type":"text/event-stream"},"request_id":"dbg0001","status":200,"type":"provider_start"}
{"attempt_id":"main","complete":true,"request_id":"dbg0001","type":"provider_end"}
```

A **clean** `provider_end` carries no `status` (and no `retry_after`); success is
implied by `complete:true`. Only the failure path adds `status`/`reason`/`detail`/
`retry_after`. A deserializer that requires `status` on every `provider_end` drops the
terminal frame and surfaces `missing field 'status'` after the model already answered.

`provider_sse` payloads on the wire are provider SSE text (`data: {"response":{…}}`),
with the answer under `response.candidates[].content.parts[].text`.

## 4. Submit payload

```text
u32 meta_len
meta JSON (exactly meta_len bytes)
prompt text (raw UTF-8)
NUL
```

`payload_len = 4 + meta_len + prompt_len + 1`.

Captured meta JSON (field order is stable):

```json
{"request_id":"r9","allow_multi_attempt":false,"allow_subagents":false,"system_prompt_mode":"official_full","thinking_level":2,"include_thoughts":true,"tool_filter":{"allow_client_mcp":false,"allow_read_file":false,"allow_web_search":false,"allow_web_fetch":false,"allow_image_gen":false,"allow_subagents":false}}
```

`expected_native_conversation_id` appears only when continuing a native conversation.
The prompt is the flattened body text, not the request JSON.

## 5. Response payload

Provider start: `{"attempt_id":"main","content_type":"text/event-stream","request_id":"resp1","status":200,"type":"provider_start"}`

Provider SSE: `{"attempt_id":"main","request_id":"resp1","...","data":"data: {...}\\r\\n\\r\\n"}` —
the `data` field carries the upstream SSE text verbatim; the core parses it in `run_loop`.

## 6. `CRAGGEMINI_VERIFIED_EXE_META`

`dev:ino:size:ctime_sec:ctime_nsec:mtime_sec:mtime_nsec`, produced by
`bridge::exe_meta_stamp` after digest verification and passed to the preload bridge.
The bridge re-stats `/proc/self/exe`; equal means "trusted, skip re-hash", different
falls back to SHA-256 against the embedded `agy` digest, and failure prints
`agy bridge: unsupported agy executable digest` then `_exit(78)`.
Because the check runs in every preloaded process, a shell wrapper as `agy_bin`
always dies (its `/proc/self/exe` is `/bin/sh`); point `agy_bin` at the real binary.

## 7. Gate condition

The bridge connects only after the agy TUI arms it (`dispatch(id=1)` sets `RUNTIME+0x3bc`).
A valid, unexpired token in `$HOME/.gemini/antigravity-cli/antigravity-oauth-token`
(`{"token":{"access_token","token_type","refresh_token","expiry"}}`) is required;
a placeholder string leaves agy on the sign-in screen and the core times out with
`native TUI initialization timed out` / `slot_handshake_failed`.
