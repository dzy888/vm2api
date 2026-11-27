# License / integrity design (reconstructed)

## Trust anchors

- Publisher Ed25519 public key embedded in the package (`crag-license-public.pem`,
  `authorization.public_key_id = f9572077…`; the core embeds `d428d3e9…` as its own pin).
- Payload metadata is signed with domain `CRAG-PAYLOAD-V1\0`.
- Manifest hashes every member; `license::files::walk_directory` + `machine_fingerprint`
  re-walk the installed tree at admission.

## Accepted authorization scopes

- `host_subscription` (`CRAGS1` permit + `CRAGH2` host roster, seat + `permit_sha256`)
- `device` (`CRAGL1`)
- `kernel` / offline (`CRAGK1`, legacy `CRAGU1`)

## Checks in `license::authenticated_claims`

1. Parse/verify the permit signature against the pinned issuer.
2. `payload_key_id` must equal the installed manifest's `payload.key_id`.
3. `vm_id` must match the VM identity.
4. `machine_id_hash` must match `/etc/machine-id` (or the projected KVM identity).
5. `device_public_key` must match `device.json`.
6. `not_before <= now < expires_at` using the local UTC clock.
7. Host permits must be listed in the entitlement roster with the matching permit SHA;
   seat must be within `slot_limit`.
8. Device key is unwrapped with X25519 + HKDF-SHA256(`CRAG-LICENSE-KEYWRAP-V1\0`) +
   AES-256-GCM, and `sha256(payloadKey) == key_id` is re-checked.

## Payload decryption

`"CRAGV2E1" | nonce(12) | tag(16) | ciphertext`, AES-256-GCM with
AAD `CRAG-GEMINI-PAYLOAD-V1\0`; plaintext SHA-256 is verified against the manifest.
The launcher decrypts into a sealed memfd and execs it; the core repeats the license gate.

## Deliberate weaknesses

- Offline verification + local clock: a root user can freeze/roll back time.
- A single valid license yields the global 32-byte `payloadKey`; the same key is
  shared by every customer of that payload line, and the package itself is public.
- Symmetric row of trust: anyone with one permit can decrypt and keep every package
  whose `key_id` matches; rotation requires reissue (the vendor did rotate at 3.0.5).
- The bundled `unpack-note.md` is a prompt-injection-style notice, not a technical measure.

## Error enum (`license::LicenseError`)

`Context`, `ContextAccount`, `Expired`, `NotYetValid`, `Invalid`, `BindingMismatch`,
`PayloadKeyMismatch`, `Unconfigured`; public messages:
`license_required`, `license_expired`, `license_not_yet_valid`, `license_invalid`,
`license_binding_mismatch`, `license_payload_key_mismatch`, `license_unconfigured`.

## Verified call structure (decompiled)

`<LicenseGate>::check` → `license::authenticated_claims` → `verify_signature` /
`MachineIdentity::validate` / `Device::load` / `RosterEntitlement::allows_permit` /
`GrantMetadata::check_at` / `unwrap_device_key`.
`server::run_with_license` → `Runtime::check_license` on every admission;
`license::files::walk_directory` + `machine_fingerprint` re-hash the installed tree.
`HostStamp::read` handles the projected host stamp; `LicenseGate::construct` builds the
gate from `vm_id`, `license_dir`, `host_license_dir`.
