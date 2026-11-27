# CRAGGemini 0.5.2 — upstream delta analysis

Source: `dofastted/vm2api` release `payload-2026.11.27-gemini-0.5.2`
(commit 6158144d, 2026-11-27), following 0.5.1 (a1ebf110).

| asset | 0.5.0 | 0.5.2 |
|---|---|---|
| software_version | 0.5.0 | 0.5.2 |
| payload size | 8,919,252 | 8,909,052 |
| payload plaintext sha256 | c04fdcea…b3fc1 | a06aa75c…8d09 |
| agy expected sha256 | 39816d…1ce43 | bca88d…26157 (**patched**) |

Encryption unchanged; the existing payload key decrypts 0.5.2.

## What changed

### 1. agy eligibility patch (repo-side, `scripts/gemini_agy_patch.py`)
Patches the 4-byte `hasValidAuth` branch in `handleAuthResult` (x64/arm64) via
signature matching with pre/post hash checks and rollback, and teaches
install/maintenance to require/apply it. The manifest now pins the **patched**
agy digest.

### 2. In-core OAuth manager (`craggemini_core::oauth`)
New module replacing the old PTY-only flow:

- `OAuthManager::{start_oauth, complete_oauth, cancel_account, reap_expired,
  shutdown_all, status}`; `ActiveOAuthAttempt`, `StoredAttempt`, `TokenMetadata`,
  `OAuthStartResult`, `OAuthCompleteResult`, `OAuthCompleteRequest`
- `validate_official_auth_url`, `inspect_token_file(s)`,
  `prepare_agy_oauth_home`, `build_oauth_failure`,
  `classify_oauth_pty_reason`, `clean_pty_tail`, `detect_oauth_exchange_error`
- new errors: `oauth_challenge_failed`, `oauth_attempt_expired`,
  `oauth_state_mismatch`, `oauth_exchange_failed`, `oauth_exchange_timeout`,
  `invalid_oauth_code`, `authorization code contains invalid characters`
- `/v1/accounts` and `/internal/v1/accounts` OAuth routes now go through it

### 3. Proxy hardening (`binding`)
Manual HTTP CONNECT and SOCKS5 error taxonomy:
`HTTP proxy closed connection during CONNECT`, `CONNECT response header too large`,
`SOCKS5 credentials exceed 255 bytes`, `rejected authentication greeting`,
`username/password authentication failed`, `target domain invalid length`,
`rejected no-auth greeting`, `unknown address type`, `CONNECT failed with reply code 0x…`;
`LocalProxyBridge::stop`, `NO_PROXY` handling.

### 4. Multiprotocol rendering
`render_anthropic_json`, `render_gemini_json`, `render_openai_chat_json`,
`render_openai_responses_json`, `collect_sse_frames`, `parse_gemini_content`,
`protocol::build_failure_from_error_json`, `Failure::ensure_upstream_mut`.

### 5. Misc
`resume::ContinuationReceiptStore::persist`, `StickyIndex::bind_conversation_at`,
`build_delta`, `write_canonical_json`; `CooldownRegistry::flush_at`;
`AccountPool::slots_snapshot_with_limit`; `VERIFIED_EXE_CACHE`;
`global_tool_name_cache::CACHE`.

## Reconstruction status
`src_rust/oauth.rs` added (manager, state machine, token inspection, URL/PTY
classifiers); `cargo check` clean. Self-kernel install now applies the agy patch
before payload verification. Binaries, hashes, symbol/string deltas are in this
directory.
