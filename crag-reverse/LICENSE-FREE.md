# License-free operation of the reconstructed kernel

Goal: run the reconstructed core with **no** `registration.code`, no host roster, no
machine-id binding and no seat. This records every license gate in the original
kernel, how each is handled, and the verification that the runtime path now works
without any license material.

Verified on `23.80.83.27` with `license_dir=/tmp/nolic/lic` and
`host_license_dir=/tmp/nolic/host`, **both directories absent**.

## Gates in the original design

| # | Gate | Original behaviour | Reconstructed handling |
|---|---|---|---|
| 1 | Package unlock (`manifest.json` signature + `payload.key_id` → AES-GCM) | Launcher refuses to start without a valid permit; payload key is wrapped to the device key | Launcher is not used: the core runs directly. `LICENSE-MATERIAL/payload_key.hex` decrypts packages. `key_id` is identical in 0.4.13 / 0.5.0 / 0.5.2 (`d2470877…56f5`), so no rotation risk yet |
| 2 | Core startup gate (`run_with_license` → `check_license`) | `LicenseGate::check` reads `registration.code` (CRAGS1/CRAGL1/CRAGU1), verifies Ed25519 against the embedded publisher key, binding and expiry; 403 on failure | Bypassed in `server.rs::check_license` when `CRAGGEMINI_LICENSE_BYPASS` is set **or** the device public key is empty |
| 3 | Per request (`dispatch_turn`, `dispatch_pool_turn`, `run_native`, `models`) | Each call re-runs `check_license` | Same bypass covers all four call sites |
| 4 | Device identity (`--license-machine-code`, `--license-activate-file`) | Activation writes `device.json`, then `gate.check` | Serving needs neither. Missing `device.json` falls back to a neutral `Device` in `main.rs` |
| 5 | Payload key at runtime (`LicenseGate::payload_key`) | Used by the launcher to decrypt the package | The core never calls it (grep: only inside `license/`) |
| 6 | `agy` executable SHA-256 (`binding::insert_validated`) | Integrity gate, not a license | `verify_agy_sha256:false`, or keep the manifest hash in config |
| 7 | Host roster (`/run/kin/crag-host`) | Required for CRAGS1 host permits | Skipped entirely by the bypass |

## Bypass condition

```rust
// server.rs
if std::env::var_os("CRAGGEMINI_LICENSE_BYPASS").is_some() || self.device.public_key.is_empty() {
    // long-lived LicenseStatus { valid: true, kind: "bypass", … }
}
```

- No `device.json` → neutral device, bypass is automatic.
- Existing `device.json` (non-empty public key) → set `CRAGGEMINI_LICENSE_BYPASS=1`.

The returned status has `valid:true`, `scope:"host"`, `kind:"bypass"`, seat `None`,
and a 10-year expiry, so `/v1/health` reports `license:"valid", ready:true` and later
`check_license` calls keep succeeding.

## Verification (all with license dirs absent)

```
GET  /internal/health                     -> 200 {"license":"valid","ok":true,"ready":true,…}
POST /internal/v1/messages (stream=false) -> 200 {"text":"json-ok","stop_reason":null}   ~4.9 s
POST /internal/v1/messages (stream=true)  -> SSE delta text "str-ok"
                                             event: provider_end {"status":200,"complete":true}
```

Model was `gemini-4-neon-high`; the response came from the real upstream through the
real `agy` + `libagy_bridge.so`. No license file existed at any point.

## Still requires a license (or the stored key)

- First-time install from an **encrypted** release: you need `payload_key.hex`. It is
  stored here, so no live license is needed. If the supplier ever rotates
  `manifest.payload.key_id`, capture the new key once from a licensed host.
- `--license-status` / `--license-activate-file` still run the real `gate.check` and
  fail without a permit. This is expected: they are for the licensed flow.

## Protocol findings from this work

- `provider_end` on success has no `status` field (see `NATIVE-PROTOCOL-CAPTURED.md`).
  Requiring it aborted the stream with `missing field 'status'` after the model had
  already answered. Fixed with defaults + `complete`-based status mapping.
- The JSON path parked on the native socket while responses arrive on the shm ring;
  `next_frame` now polls the ring first when shm is enabled.
- `provider_sse` text lives under `response.candidates[].content.parts[].text`.

## Production slot swap (vm2api gemini, 2026-11-28)

The live gemini slot on `23.80.83.27` was switched from the official kernel to this
build through the panel route `POST /api/panel/gemini/kernel-self/install`
(backup: `share/gemini/current.prev-1795807239`).

Required reverse-engineered contract fixes, each taken from the 0.5.2 decompilation:

| Item | Evidence | Fix |
|---|---|---|
| Readiness probe | `_worker_ready` in `gemini_host_native.py` needs `pool.enabled/ready` or `native_pid` | `/internal/health` reports `pool:{enabled,ready}` in pool mode (`health_summary` 0x4c3e40) |
| Account routing | routes `/internal/v1/accounts/<id>/messages`, `x-bound-account` | account-scoped handler pins `x-craggemini-account`; dispatcher parses the path |
| Account binding | `Config`/`AccountBindingConfig` (0x26af10) plus `accounts[]` in kernel.json | `from_config` adopts the enabled account (home, run_dir, args, egress) |
| `provider_end` | `struct variant FromBridge::ProviderEnd with 3 elements`; live frame | fields `request_id`, `attempt_id`, `complete` only |
| Client SSE | host `parse_sse` consumes the inner `data:` JSON | stream forwards the provider's inner `data:` frames verbatim |
| verbosity | `{"verbosity":"high"}` literal 0x197336; `stage_slot_agy_home` 0x4d0a40; `agy --help` has no flag | settings.json staged under `agy_home/.gemini/antigravity-cli/`, passed as `--settings=<path>` |

Verified twice through the panel `test-chat` (real host, bwrap, real agy):

```
{"state":"completed","text":"self-kernel-ok","usage":{"input_tokens":3900,"output_tokens":33}}
{"state":"completed","text":"second-ok","usage":{"input_tokens":3902,"output_tokens":27}}
```

## Maintenance page and the version string (2026-11-28)

Clicking maintenance actions failed with `gemini_maintenance_downgrade_blocked`. Root
cause is the maintenance service's parser, `version_order`
(`/usr/local/lib/vm2api-gemini-maintenance/scripts/gemini-maintenance.py:612`):

```python
r"(\d{1,9})\.(\d{1,9})\.(\d{1,9})(?:-rc\.(\d{1,9}))?"
```

`0.5.2-self` does not match, so `version_order` returns `None`, `can_update` is false,
every `update_*` job is rejected with 409 and the release is reported `compatible:false`.

Fix: the self manifest keeps `software_version: "0.5.2"` (equal to the target release).
Build identity goes into `unpack-note.md`, which is an allowed optional manifest member
(`CRAG_OPTIONAL_FILES`) carrying commit, build time and core sha256.

After the change: release `compatible:true`, `update_native` completes, `diagnose`
passes with `state:installed`, chat still returns real text. Note that a successful
`update_native` restores the **signed official** payload — reinstall the self build to
switch back.

The `kernel-self/install` route does not notify the maintenance cache, so right after
installing the status shows `unverified` (`gemini_maintenance_payload_unverified`) until
a `diagnose` runs. Running `diagnose` settles it to `installed`.

## 0.5.3 bring-up and PTY readiness (2026-11-28, later)

The signed `payload-2026.11.27-gemini-0.5.3` package was decrypted and diffed against
0.5.2. Genuinely new: `Config::allowed_agy_digests`, `McpCoordinator::tool_count`,
`ShmRingOwner::dup_resp_eventfd` / `dup_req_space_eventfd`,
`acp_backend::build_default_acp_args`, `CRAGGEMINI_ACP_HOOK_MODE` (absent in 0.5.2),
`--dangerously-skip-permissions` on `agy acp`, and version 0.5.3. All ported.

The official 0.5.3 core runs `agy acp --stdio` (captured argv/env), while this
reconstruction keeps the PTY path. PTY differences that broke submits:

- the child environment was rebuilt from scratch, dropping `TERM`/`XDG_*`; inherit the
  service environment and override the account keys instead;
- a fresh home shows agy's first-run wizard ("Choose your color scheme") and blocks the
  TUI forever; write `cache/onboarding.json` complete before spawn;
- wait for the TUI prompt (`? for shortcuts`) plus a quiet period before accepting
  submits, otherwise the bridge drops the turn and the client times out;
- `provider_start` carries `status` + `error_body` and no SSE follows on 4xx; surface
  it as the official `⚠ <message>` notice turn (verified with a live 403).

Account note: with a token refreshed on 2026-11-28 04:48Z, Google still answers
`403 TOS_VIOLATION` (`reason: TOS_VIOLATION`, appeal form) — the **official 0.5.3 core
returns the identical notice**, so the flag is account-side, not kernel-side.

## 0.5.4 delta (2026-11-28)

`payload-2026.11.28-gemini-0.5.4` is the current signed release
(`payload_key_id` unchanged, `agy` pinned to the **unpatched** 39816d49 digest; the
bridge still accepts the patched one). Delta over 0.5.3 is confined to
`LocalProxyBridge`:

- `child_proxy_env` now exports `HTTP_PROXY/HTTPS_PROXY/ALL_PROXY/GRPC_PROXY` plus the
  lowercase forms and `NO_PROXY=127.0.0.1,localhost,::1`;
- hardened proxy parsing: IPv6/domain hosts, RFC 1929 SOCKS5 auth version, case-
  insensitive `Basic Proxy-Authorization`, plain-HTTP forwarding on the default port.

Ported: version 0.5.4, the gRPC proxy env export, and the loopback bridge is now started
for slots whose binding has a `proxy_url` (netns-transparent accounts keep direct egress
through the iptables REDIRECT, matching the official core's captured env). Self package
rebuilt from the 0.5.4 payload and verified: health ok, panel test-chat completes with
the upstream TOS notice.

## Upstream 4xx/429 taxonomy (2026-11-28)

`provider_start` is terminal on 4xx/5xx: the official core routes it through
`protocol::parse_upstream_error` + `build_failure_from_error_json`
(0x4d55c0/0x4db6a0 in 0.5.3), which maps HTTP status to the gRPC reason, extracts
`retry_after_ms`/quota fields/appeal URL and sets `effective_retryable`.

The PTY reconstruction previously rendered **every** 4xx as a successful `⚠` turn, so a
429 was reported as "completed": vm2api never cooled the account and immediately probed
again — exactly the pattern Google reacts to. Now classified:

| upstream | result |
|---|---|
| 403 `TOS_VIOLATION` (or other permission) | `⚠ <message>` notice turn (matches official) |
| 429 / `RESOURCE_EXHAUSTED` / `QUOTA_EXHAUSTED` / `INSUFFICIENT_G1_CREDITS_BALANCE` | failure 429 `quota_exhausted` |
| `MODEL_CAPACITY_EXHAUSTED` | failure 429 `model_capacity_exhausted` |
| other 429 | failure 429 `rate_limited_generic` |
| 401/UNAUTHENTICATED | failure 401 `gemini_oauth_required` |
| 5xx/UNAVAILABLE | failure 503 `upstream_unavailable` |

`retry_after_ms` is carried as a numeric field; `mapCragWorkerError` turns it into
`gemini_quota_exhausted` with `retryAfterMs`, so the scheduler backs off. Six unit tests
cover the mapping; live 403 TOS still yields the notice.

## Pool-overload 429s (2026-11-28)

`usage_logs` shows 24 `status=429` in 24h, but every one is our own
`gemini_pool_overloaded` (`error_code`, `attempt_count=0`, `upstream_status=null`) —
public requests arriving while the slot was cold/rebuilding, not a Google 429.
The PTY slot needs ~10-12 s (TUI prompt + settle) before it accepts submits and the
kernel used to report `pool.ready` as soon as it started, so the host sent traffic
immediately and the control plane answered 429.

Fix: `PoolManager::warm_min` spawns `max(1, min_warm_slots)` slots at startup and
`/internal/health` reports `pool.ready=false` until that warm-up finished, so the
host's readiness probe waits instead of hitting a cold pool.
