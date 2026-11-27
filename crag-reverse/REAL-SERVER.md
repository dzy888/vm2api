# Real-server run log (23.80.83.27)

Goal: run the **real** `craggemini` 0.4.13 core with the real package + license and
capture the native-socket protocol.

## Achieved

- license gate: `valid:true`, hosting scope, seat 1 (with the env's machine-id bound)
- core starts, binds `kernel.sock`, serves health
- account spawn reaches `agy` + `LD_PRELOAD=libagy_bridge.so`, correct env:
  `CRAGGEMINI_NATIVE_SOCKET`, `CRAGGEMINI_SESSION_ID`, `CRAGGEMINI_SLOT_ID`,
  `CRAGGEMINI_SLOT_INDEX`, proxy fields, isolated HOME
- `agy` runs and logs its CLI server (`eligibility.log`)

## Resolved (2026-11-27)

The digest mismatches were config typos (`agy_sha256` had `c5ab` instead of `d5ab`)
plus a shell wrapper as `agy_bin`. With the real binary and correct hash the core
verifies, spawns, and the native bridge performs a full handshake.

The remaining gate is authentication: the bridge only connects once the agy TUI arms
it, which needs a parseable token in
`$HOME/.gemini/antigravity-cli/antigravity-oauth-token`
(`{"token":{access_token,token_type,refresh_token,expiry}}`). With a real refresh token
the whole path works end to end; a live capture returned `capture-ok` from
`gemini-4-hydrogen` (see `NATIVE-PROTOCOL-CAPTURED.md`).

The subscription proxy `74.1.98.184:5782` is currently unreachable, so the test run
uses a local SOCKS5 on loopback (`allow_loopback_proxy: true`, direct egress).

## Original blocker notes

`binding::insert_validated` returns `slot_exe_digest_mismatch`
("configured agy executable digest verification failed") for a manually assembled
sandbox, even with `/opt/agy` byte-identical to the manifest hash. With
`verify_agy_sha256:false` the slot spawns, but the preload bridge does not perform its
native handshake.

The check lives in `binding::insert_validated` (0x1a7af0), and `exe_meta_stamp`
(0x2e7600) formats 7 fields separated by `:`; `VerifiedExeKey::from_meta` (0x2d2160)
parses that stamp. The config `agy_sha256` is validated as a 64-hex SHA-256.

## Native protocol recovered from `libagy_bridge.so`

- handshake: `Command::Attached` (4 fields), errors `invalid native worker handshake`,
  `native worker handshake timed out`, `native worker disconnected during handshake`
- request frames: `Command::Submit` (7), `Command::SubmitShm` (13), `Command::Control` (4),
  `Command::Cancel` (1)
- `RingSubmitMeta` (9): `request_id`, `system_prompt_mode`, `system_prompt`,
  `thinking_level`, `tool_filter`, `allow_multi_attempt`, `expected_native_conversation_id`,
  plus frame `seq/offset/length/sha256`
- `VerifiedExeKey`/`CRAGGEMINI_VERIFIED_EXE_META` gates the bridge; `LD_PRELOAD` is
  `/opt/libagy_bridge.so`
- event tags include `provider_sse`, `provider_end`, `native_tool_inline`,
  `native_tool_shm`, `subagent_*`, `control_result`

## Reproduce

Mount machine-id, license (`/run/kin/crag-license`, `/accounts/<env>/crag-license`),
host entitlement (`/run/kin/crag-host`), and run dir; bind `/opt/agy` and
`/opt/libagy_bridge.so`; run as UID 29000 with the `gemini` config (see this document's
field list in git-less form: `kernel.json` keys are those in `CONFIG.md`).

Next step: supply the correct `CRAGGEMINI_VERIFIED_EXE_META` stamp (or run through the
host's `warm` path with a real Google OAuth profile) so the preload bridge connects.
