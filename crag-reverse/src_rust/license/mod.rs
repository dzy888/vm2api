//! Reconstructed `craggemini_core::license` from Ghidra output.
//! Original crate: `craggemini_core`; package 0.4.13. Not original source text.
//!
//! Addresses refer to `decompiled/` and `SIGNATURES.tsv`.
#![allow(dead_code, unused)]

use std::fmt;
use std::path::{Path, PathBuf};
use std::time::{SystemTime, UNIX_EPOCH};

use aes_gcm::aead::{Aead, Payload};
use aes_gcm::{Aes256Gcm, KeyInit, Nonce};
use base64::engine::general_purpose::URL_SAFE_NO_PAD;
use base64::Engine;
use hkdf::Hkdf;
use serde::{Deserialize, Serialize};
use sha2::{Digest, Sha256};

pub mod files;
pub mod host;

use host::RosterEntitlement;

/// `CRAG-LICENSE-V1\0`
pub const LICENSE_DOMAIN: &[u8] = b"CRAG-LICENSE-V1\0";
/// `CRAGH2\0` host entitlement domain.
pub const HOST_DOMAIN: &[u8] = b"CRAGH2\0";
/// `CRAGS1\0` host slot-permit domain.
pub const PERMIT_DOMAIN: &[u8] = b"CRAGS1\0";
/// `CRAG-LICENSE-KEYWRAP-V1\0`
pub const KEYWRAP_DOMAIN: &[u8] = b"CRAG-LICENSE-KEYWRAP-V1\0";
pub const PRODUCT: &str = "craggemini";

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum Term {
    #[serde(rename = "1m")]
    OneMonth,
    #[serde(rename = "3m")]
    ThreeMonths,
    #[serde(rename = "6m")]
    SixMonths,
    #[serde(rename = "1y")]
    OneYear,
}

impl Term {
    pub fn months(self) -> u32 {
        match self {
            Term::OneMonth => 1,
            Term::ThreeMonths => 3,
            Term::SixMonths => 6,
            Term::OneYear => 12,
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct WrappedKey {
    pub ephemeral_public_key: String,
    pub nonce: String,
    pub ciphertext: String,
    pub tag: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Device {
    pub version: u8,
    pub product: String,
    pub vm_id: String,
    pub machine_id_hash: String,
    pub private_key: String,
    pub public_key: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Claims {
    pub version: u8,
    pub product: String,
    pub license_id: String,
    pub vm_id: String,
    pub machine_id_hash: String,
    pub device_public_key: String,
    pub issued_at: i64,
    pub not_before: i64,
    pub expires_at: i64,
    pub term: Term,
    pub payload_key_id: String,
    pub wrapped_key: WrappedKey,
}

#[derive(Debug, Clone)]
pub struct MachineIdentity {
    pub product: String,
    pub vm_id: String,
    pub machine_id_hash: String,
    pub device_public_key: String,
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum LicenseError {
    Context,
    ContextAccount,
    Expired,
    NotYetValid,
    Invalid,
    BindingMismatch,
    PayloadKeyMismatch,
    Unconfigured,
}

impl LicenseError {
    pub fn code(self) -> &'static str {
        match self {
            LicenseError::Expired => "license_expired",
            LicenseError::NotYetValid => "license_not_yet_valid",
            LicenseError::Invalid => "license_invalid",
            LicenseError::BindingMismatch => "license_binding_mismatch",
            LicenseError::PayloadKeyMismatch => "license_payload_key_mismatch",
            LicenseError::Unconfigured => "license_unconfigured",
            _ => "license_invalid",
        }
    }
    pub fn message(self) -> &'static str {
        match self {
            LicenseError::Expired => "The CRAGGemini license has expired. Renew the host subscription or license.",
            LicenseError::NotYetValid => "The CRAGGemini license is not valid yet. Check the UTC clock and start time.",
            LicenseError::Invalid => "The CRAGGemini license or encrypted package is invalid.",
            LicenseError::BindingMismatch => "This CRAGGemini permit belongs to a different instance, seat, or host.",
            LicenseError::PayloadKeyMismatch => "The CRAGGemini license payload key does not match the installed package.",
            LicenseError::Unconfigured => "CRAGGemini license trust is unconfigured. Install a build provisioned with the supplier public key.",
            _ => "A CRAG subscription permit or registration code is required for craggemini.",
        }
    }
}

impl fmt::Display for LicenseError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.write_str(self.message())
    }
}

pub fn hex(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for b in bytes {
        use std::fmt::Write;
        let _ = write!(out, "{b:02x}");
    }
    out
}

/// `license::decode<N>` @ 0x338230/0x3382b0/0x338380/0x338460.
pub fn decode<const N: usize>(value: &str) -> Result<[u8; N], LicenseError> {
    let bytes = URL_SAFE_NO_PAD
        .decode(value)
        .map_err(|_| LicenseError::Invalid)?;
    if bytes.len() != N {
        return Err(LicenseError::Invalid);
    }
    let mut out = [0u8; N];
    out.copy_from_slice(&bytes);
    Ok(out)
}

/// `license::decode_hash` @ 0x359020: 64 hex chars -> 32 bytes.
pub fn decode_hash(value: &str) -> Result<[u8; 32], LicenseError> {
    if value.len() != 64 || !value.bytes().all(|b| b.is_ascii_hexdigit()) {
        return Err(LicenseError::Invalid);
    }
    let mut out = [0u8; 32];
    for (i, chunk) in value.as_bytes().chunks(2).enumerate() {
        let s = std::str::from_utf8(chunk).map_err(|_| LicenseError::Invalid)?;
        out[i] = u8::from_str_radix(s, 16).map_err(|_| LicenseError::Invalid)?;
    }
    Ok(out)
}

/// `license::key_id` @ 0x35ca10: key id is SHA-256 of the 32-byte payload key.
pub fn key_id(payload_key: &[u8; 32]) -> [u8; 32] {
    Sha256::digest(payload_key).into()
}

/// `license::machine_hash` @ 0x3592a0: trim `/etc/machine-id`, SHA-256, hex.
pub fn machine_hash(machine_id: &str) -> String {
    hex(&Sha256::digest(machine_id.trim().as_bytes()))
}

/// `license::valid_vm_id` @ 0x359210.
pub fn valid_vm_id(s: &str) -> bool {
    let b = s.as_bytes();
    if b.is_empty() || b.len() > 0xff || b.contains(&0) {
        return false;
    }
    s.trim() == s
}

/// `license::wrap_aad` @ 0x35cb10.
pub fn wrap_aad(
    vm_id: &str,
    machine_id_hash: &str,
    device_public_key: &str,
    key_id_hex: &str,
) -> Vec<u8> {
    format!("{vm_id}\0{machine_id_hash}\0{device_public_key}\0{key_id_hex}").into_bytes()
}

/// `license::expires_at` @ 0x358e70: UTC calendar months, clamped to month end.
pub fn expires_at(issued_at: i64, term: Term) -> i64 {
    use chrono::{DateTime, Datelike, TimeZone, Timelike, Utc};
    let dt: DateTime<Utc> = Utc.timestamp_opt(issued_at, 0).single().unwrap();
    let day = dt.day();
    let mut year = dt.year();
    let mut month = dt.month() as i32 + term.months() as i32;
    while month > 12 {
        month -= 12;
        year += 1;
    }
    let last = {
        let (ny, nm) = if month == 12 {
            (year + 1, 1)
        } else {
            (year, month + 1)
        };
        Utc.with_ymd_and_hms(ny, nm as u32, 1, 0, 0, 0)
            .unwrap()
            .timestamp()
            - 86_400
    };
    let dim = Utc.timestamp_opt(last, 0).single().unwrap().day();
    Utc.with_ymd_and_hms(
        year,
        month as u32,
        day.min(dim),
        dt.hour(),
        dt.minute(),
        dt.second(),
    )
    .unwrap()
    .timestamp()
}

/// `license::verify_signature` @ 0x3593c0.
pub fn verify_signature(
    issuer: &ed25519_dalek::VerifyingKey,
    domain: &[u8],
    message: &[u8],
    signature: &[u8; 64],
) -> bool {
    use ed25519_dalek::{Signature, Verifier};
    let mut buf = domain.to_vec();
    buf.extend_from_slice(message);
    issuer
        .verify(&buf, &Signature::from_bytes(signature))
        .is_ok()
}

/// `license::unwrap_device_key` @ 0x35b660.
pub fn unwrap_device_key(
    device: &Device,
    wrapped: &WrappedKey,
    key_id_hex: &str,
) -> Result<[u8; 32], LicenseError> {
    let sk: [u8; 32] = decode(&device.private_key)?;
    let secret = x25519_dalek::StaticSecret::from(sk);
    let eph: [u8; 32] = decode(&wrapped.ephemeral_public_key)?;
    let shared = secret.diffie_hellman(&x25519_dalek::PublicKey::from(eph));
    let hk = Hkdf::<Sha256>::new(Some(&decode_hash(key_id_hex)?), shared.as_bytes());
    let mut key = [0u8; 32];
    hk.expand(KEYWRAP_DOMAIN, &mut key)
        .map_err(|_| LicenseError::Invalid)?;
    let nonce: [u8; 12] = decode(&wrapped.nonce)?;
    let tag: [u8; 16] = decode(&wrapped.tag)?;
    let ct: [u8; 32] = decode(&wrapped.ciphertext)?;
    let aad = wrap_aad(
        &device.vm_id,
        &device.machine_id_hash,
        &device.public_key,
        key_id_hex,
    );
    let cipher = Aes256Gcm::new_from_slice(&key).map_err(|_| LicenseError::Invalid)?;
    let mut body = ct.to_vec();
    body.extend_from_slice(&tag);
    let plain = cipher
        .decrypt(
            Nonce::from_slice(&nonce),
            Payload {
                msg: &body,
                aad: &aad,
            },
        )
        .map_err(|_| LicenseError::Invalid)?;
    if plain.len() != 32 || hex(&Sha256::digest(&plain)) != key_id_hex {
        return Err(LicenseError::Invalid);
    }
    let mut out = [0u8; 32];
    out.copy_from_slice(&plain);
    Ok(out)
}

/// `CRAGS1` host permit: the shape is `SlotPermit` and expiry comes from the
/// entitlement roster, not from the permit itself.
pub fn authenticated_host_permit(
    code: &str,
    issuer: &ed25519_dalek::VerifyingKey,
    identity: &MachineIdentity,
    device: &Device,
) -> Result<(host::SlotPermit, [u8; 32]), LicenseError> {
    let parts: Vec<&str> = code.trim().split('.').collect();
    if parts.len() != 3 || parts[0] != "CRAGS1" {
        return Err(LicenseError::Invalid);
    }
    let raw = URL_SAFE_NO_PAD
        .decode(parts[1])
        .map_err(|_| LicenseError::Invalid)?;
    let sig: [u8; 64] = decode(parts[2])?;
    if !verify_signature(issuer, PERMIT_DOMAIN, &raw, &sig) {
        return Err(LicenseError::Invalid);
    }
    let permit: host::SlotPermit =
        serde_json::from_slice(&raw).map_err(|_| LicenseError::Invalid)?;
    if permit.product != PRODUCT || permit.seat == 0 || !valid_vm_id(&permit.vm_id) {
        return Err(LicenseError::Invalid);
    }
    if permit.vm_id != identity.vm_id
        || permit.machine_id_hash != identity.machine_id_hash
        || permit.device_public_key != identity.device_public_key
    {
        return Err(LicenseError::BindingMismatch);
    }
    decode_hash(&permit.payload_key_id)?;
    let key = unwrap_device_key(device, &permit.wrapped_key, &permit.payload_key_id)?;
    Ok((permit, key))
}

/// `license::authenticated_claims` @ 0x35c250.
///
/// Parses `CRAGL1.<claims>.<sig>` / `CRAGU1.<claims>.<sig>.<bearer>`, verifies the
/// Ed25519 signature over `CRAG-LICENSE-V1\0`, then validates every binding.
pub fn authenticated_claims(
    code: &str,
    issuer: &ed25519_dalek::VerifyingKey,
    identity: &MachineIdentity,
    device: &Device,
    now: i64,
) -> Result<(Claims, Option<[u8; 32]>), LicenseError> {
    let parts: Vec<&str> = code.trim().split('.').collect();
    if parts.len() != 3 && parts.len() != 4 {
        return Err(LicenseError::Invalid);
    }
    let universal = match parts[0] {
        "CRAGL1" => false,
        "CRAGU1" => true,
        _ => return Err(LicenseError::Invalid),
    };
    if universal != (parts.len() == 4) {
        return Err(LicenseError::Invalid);
    }
    let raw = URL_SAFE_NO_PAD
        .decode(parts[1])
        .map_err(|_| LicenseError::Invalid)?;
    let sig: [u8; 64] = decode(parts[2])?;
    if !verify_signature(issuer, LICENSE_DOMAIN, &raw, &sig) {
        return Err(LicenseError::Invalid);
    }
    let claims: Claims = serde_json::from_slice(&raw).map_err(|_| LicenseError::Invalid)?;

    if claims.product != PRODUCT || !valid_vm_id(&claims.vm_id) {
        return Err(LicenseError::Invalid);
    }
    if !(claims.issued_at <= claims.not_before && claims.not_before < claims.expires_at) {
        return Err(LicenseError::Invalid);
    }
    if expires_at(claims.issued_at, claims.term) != claims.expires_at {
        return Err(LicenseError::Invalid);
    }
    identity.validate()?;
    if claims.vm_id != identity.vm_id
        || claims.machine_id_hash != identity.machine_id_hash
        || claims.device_public_key != identity.device_public_key
    {
        return Err(LicenseError::BindingMismatch);
    }
    // Structural checks before touching crypto material.
    let _machine = decode_hash(&claims.machine_id_hash)?;
    let _device_pub: [u8; 20] = decode(&claims.device_public_key)?;
    let _key_id = decode_hash(&claims.payload_key_id)?;

    if now < claims.not_before {
        return Err(LicenseError::NotYetValid);
    }
    if now >= claims.expires_at {
        return Err(LicenseError::Expired);
    }

    let payload_key = if universal {
        // `CRAGU1` carries a bearer that wraps the payload key directly.
        let bearer: [u8; 32] = decode(parts[3])?;
        let nonce: [u8; 12] = decode(&claims.wrapped_key.nonce)?;
        let tag: [u8; 16] = decode(&claims.wrapped_key.tag)?;
        let ct: [u8; 32] = decode(&claims.wrapped_key.ciphertext)?;
        let aad = format!(
            "CRAG-UNIVERSAL-WRAP-V1\0{}\0{}",
            claims.license_id, claims.payload_key_id
        );
        let cipher = Aes256Gcm::new_from_slice(&bearer).map_err(|_| LicenseError::Invalid)?;
        let mut body = ct.to_vec();
        body.extend_from_slice(&tag);
        let plain = cipher
            .decrypt(
                Nonce::from_slice(&nonce),
                Payload {
                    msg: &body,
                    aad: aad.as_bytes(),
                },
            )
            .map_err(|_| LicenseError::Invalid)?;
        let mut out = [0u8; 32];
        out.copy_from_slice(&plain);
        Some(out)
    } else {
        Some(unwrap_device_key(
            device,
            &claims.wrapped_key,
            &claims.payload_key_id,
        )?)
    };
    Ok((claims, payload_key))
}

impl MachineIdentity {
    /// `MachineIdentity::validate` @ 0x33e500.
    pub fn validate(&self) -> Result<(), LicenseError> {
        if self.product != PRODUCT || !valid_vm_id(&self.vm_id) {
            return Err(LicenseError::Invalid);
        }
        decode_hash(&self.machine_id_hash)?;
        let _dev: [u8; 20] = decode(&self.device_public_key)?;
        Ok(())
    }
}

#[derive(Debug, Clone, Serialize)]
pub struct LicenseStatus {
    pub valid: bool,
    pub status: String,
    pub binding: String,
    pub scope: String,
    pub vm_id: String,
    pub kind: String,
    pub seat: Option<u32>,
    pub license_id: String,
    pub term: Option<Term>,
    pub issued_at: i64,
    pub not_before: i64,
    pub expires_at: i64,
    pub payload_key_id: String,
}

/// `LicenseGate` — the private permit directory plus the shared host directory.
pub struct LicenseGate {
    pub vm_id: String,
    pub license_dir: PathBuf,
    pub host_license_dir: PathBuf,
    pub issuer: ed25519_dalek::VerifyingKey,
    pub cached: std::sync::Mutex<Option<CachedGrant>>,
}

#[derive(Clone)]
pub struct CachedGrant {
    pub claims: Claims,
    pub payload_key: [u8; 32],
}

impl LicenseGate {
    pub fn new(
        vm_id: &str,
        license_dir: PathBuf,
        host_license_dir: PathBuf,
        issuer: ed25519_dalek::VerifyingKey,
    ) -> Self {
        Self {
            vm_id: vm_id.into(),
            license_dir,
            host_license_dir,
            issuer,
            cached: Default::default(),
        }
    }

    pub fn for_account(
        vm_id: &str,
        license_dir: PathBuf,
        issuer: ed25519_dalek::VerifyingKey,
    ) -> Self {
        let host = default_host_license_dir();
        Self::new(vm_id, license_dir, host, issuer)
    }

    /// `LicenseGate::check` @ 0x33ee10.
    pub fn check(&self, device: &Device) -> Result<LicenseStatus, LicenseError> {
        let dir = files::PrivateDir::open(&self.license_dir).map_err(|e| {
            eprintln!("private dir open failed: {:?}", e);
            e
        })?;
        let code = dir.read("registration.code").map_err(|e| {
            eprintln!("read registration failed: {:?}", e);
            e
        })?;
        let identity = MachineIdentity {
            product: device.product.clone(),
            vm_id: device.vm_id.clone(),
            machine_id_hash: device.machine_id_hash.clone(),
            device_public_key: device.public_key.clone(),
        };
        let now = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .unwrap()
            .as_secs() as i64;

        let host = files::HostDir::open(&self.host_license_dir)
            .map_err(|e| eprintln!("host dir open failed: {:?}", e))
            .ok();
        let roster = host.as_ref().and_then(|h| h.roster().ok());
        let universal = code.starts_with("CRAGU1.");

        if code.starts_with("CRAGS1.") {
            let roster = roster.ok_or(LicenseError::Unconfigured)?;
            if roster.product != PRODUCT {
                return Err(LicenseError::Invalid);
            }
            if let Some(host) = &host {
                if let Ok(raw) = host.roster_json() {
                    let parts: Vec<&str> = raw.trim().split('.').collect();
                    if parts.len() == 3 {
                        if let Ok(sig) = decode::<64>(parts[2]) {
                            if let Ok(claims) = URL_SAFE_NO_PAD.decode(parts[1]) {
                                if !verify_signature(&self.issuer, HOST_DOMAIN, &claims, &sig) {
                                    return Err(LicenseError::Invalid);
                                }
                            }
                        }
                    }
                }
            }
            let (permit, payload) =
                authenticated_host_permit(&code, &self.issuer, &identity, device)?;
            let sha: [u8; 32] = Sha256::digest(code.as_bytes()).into();
            if !roster.allows_permit(permit.seat, &sha) {
                return Err(LicenseError::BindingMismatch);
            }
            if now < roster.issued_at {
                return Err(LicenseError::NotYetValid);
            }
            if now >= roster.expires_at {
                return Err(LicenseError::Expired);
            }
            *self.cached.lock().unwrap() = Some(CachedGrant {
                claims: claims_from_permit(&permit, &roster),
                payload_key: payload,
            });
            return Ok(LicenseStatus {
                valid: true,
                status: "valid".into(),
                binding: "host".into(),
                scope: "host".into(),
                vm_id: permit.vm_id.clone(),
                kind: "host_subscription".into(),
                seat: Some(permit.seat),
                license_id: format!("{}:{}", permit.host_id, permit.seat),
                term: None,
                issued_at: roster.issued_at,
                not_before: roster.issued_at,
                expires_at: roster.expires_at,
                payload_key_id: permit.payload_key_id.clone(),
            });
        }

        let (claims, payload) = authenticated_claims(&code, &self.issuer, &identity, device, now)?;

        if let Some(roster) = roster {
            if !universal
                && !roster.allows_permit(seat_of(&claims), &Sha256::digest(code.as_bytes()).into())
            {
                return Err(LicenseError::BindingMismatch);
            }
            if let Some(meta) = roster.grant_metadata() {
                meta.check_at(now)?;
            }
        }
        *self.cached.lock().unwrap() = payload.map(|key| CachedGrant {
            claims: claims.clone(),
            payload_key: key,
        });
        Ok(LicenseStatus {
            valid: true,
            status: "valid".into(),
            binding: if universal {
                "kernel".into()
            } else {
                "host".into()
            },
            scope: if universal {
                "kernel".into()
            } else {
                "host".into()
            },
            vm_id: claims.vm_id.clone(),
            kind: if universal {
                "offline".into()
            } else {
                "host_subscription".into()
            },
            seat: Some(seat_of(&claims)),
            license_id: claims.license_id.clone(),
            term: Some(claims.term),
            issued_at: claims.issued_at,
            not_before: claims.not_before,
            expires_at: claims.expires_at,
            payload_key_id: claims.payload_key_id.clone(),
        })
    }

    /// `LicenseGate::payload_key` @ 0x63530 (launcher equivalent): cached or re-check.
    pub fn payload_key(&self, device: &Device) -> Result<[u8; 32], LicenseError> {
        if let Some(c) = self.cached.lock().unwrap().as_ref() {
            return Ok(c.payload_key);
        }
        self.check(device)?;
        self.cached
            .lock()
            .unwrap()
            .as_ref()
            .map(|c| c.payload_key)
            .ok_or(LicenseError::Unconfigured)
    }
}

fn claims_from_permit(permit: &host::SlotPermit, roster: &host::RosterEntitlement) -> Claims {
    Claims {
        version: permit.version,
        product: permit.product.clone(),
        license_id: format!("{}:{}", permit.host_id, permit.seat),
        vm_id: permit.vm_id.clone(),
        machine_id_hash: permit.machine_id_hash.clone(),
        device_public_key: permit.device_public_key.clone(),
        issued_at: roster.issued_at,
        not_before: roster.issued_at,
        expires_at: roster.expires_at,
        term: Term::OneMonth,
        payload_key_id: permit.payload_key_id.clone(),
        wrapped_key: permit.wrapped_key.clone(),
    }
}

fn seat_of(_claims: &Claims) -> u32 {
    // `CRAGS1` permits carry `seat`; the shared `Claims` view keeps it in `license_id`
    // as `<host_id>:<seat>` and the host permit is parsed separately.
    1
}

pub fn default_license_dir() -> PathBuf {
    PathBuf::from("/run/kin/crag-license")
}
pub fn default_host_license_dir() -> PathBuf {
    PathBuf::from("/run/kin/crag-host")
}
pub fn default_vm_id() -> String {
    "craggemini".into()
}

#[derive(Debug, Clone)]
pub struct HostStamp {
    pub entitlement_fingerprint: [u8; 32],
    pub host_id_fingerprint: [u8; 32],
    pub credential_fingerprint: [u8; 32],
}

impl HostStamp {
    /// `HostStamp::read` @ 0x33ebf0: rejects while `sync-pending` exists, fingerprints
    /// `entitlement.code`, `host_id` and `credential`.
    pub fn read(dir: &files::HostDir) -> Result<Self, LicenseError> {
        if dir.exists("sync-pending") {
            return Err(LicenseError::Context);
        }
        Ok(Self {
            entitlement_fingerprint: dir.fingerprint("entitlement.code")?,
            host_id_fingerprint: dir.fingerprint("host_id")?,
            credential_fingerprint: dir.fingerprint("credential")?,
        })
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct GrantMetadata {
    pub version: u8,
    pub issued_at: i64,
    pub not_before: i64,
    pub expires_at: i64,
}

impl GrantMetadata {
    /// `GrantMetadata::check_at` @ 0x33eb10.
    pub fn check_at(&self, now: i64) -> Result<(), LicenseError> {
        if self.version != 1 {
            return Err(LicenseError::Invalid);
        }
        if now < self.not_before {
            return Err(LicenseError::NotYetValid);
        }
        if now >= self.expires_at {
            return Err(LicenseError::Expired);
        }
        Ok(())
    }
}

// Re-export the host roster view used above; `allows_permit` is at 0x33ea80.
pub use host::RosterEntitlement as Roster;
