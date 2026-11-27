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
