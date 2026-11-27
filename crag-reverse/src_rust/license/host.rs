//! Reconstructed `craggemini_core::license::host` — host entitlement and roster.
//! Addresses: `allows_permit` 0x33ea80, entitlement deserializers 0x1f70f0..0x1fda50.
#![allow(dead_code, unused)]

use serde::{Deserialize, Deserializer, Serialize, Serializer};

use super::{GrantMetadata, LicenseError};

/// `host::SlotLimit` — `"unlimited"` or a positive 32-bit integer.
#[derive(Debug, Clone, Copy)]
pub enum SlotLimit {
    Unlimited,
    Limited(u32),
}

impl SlotLimit {
    pub fn allows(self, seat: u32) -> bool {
        match self {
            SlotLimit::Unlimited => true,
            SlotLimit::Limited(limit) => seat != 0 && seat <= limit,
        }
    }
}

impl Serialize for SlotLimit {
    fn serialize<S: Serializer>(&self, s: S) -> Result<S::Ok, S::Error> {
        match self {
            SlotLimit::Unlimited => s.serialize_str("unlimited"),
            SlotLimit::Limited(n) => s.serialize_u32(*n),
        }
    }
}

impl<'de> Deserialize<'de> for SlotLimit {
    fn deserialize<D: Deserializer<'de>>(d: D) -> Result<Self, D::Error> {
        #[derive(Deserialize)]
        #[serde(untagged)]
        enum Raw {
            Text(String),
            Number(u32),
        }
        match Raw::deserialize(d)? {
            Raw::Text(t) if t == "unlimited" => Ok(SlotLimit::Unlimited),
            Raw::Text(_) => Err(serde::de::Error::custom("invalid slot limit")),
            Raw::Number(n) if n > 0 => Ok(SlotLimit::Limited(n)),
            Raw::Number(_) => Err(serde::de::Error::custom("invalid slot limit")),
        }
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct RosterEntry {
    #[serde(default)]
    pub seat: u32,
    /// SHA-256 of the exact permit token, hex (64 chars).
    pub permit_sha256: String,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct HostGrant {
    pub not_before: i64,
    pub not_after: i64,
    #[serde(default)]
    pub slots: u32,
}

/// Version-1 entitlement (pre-roster).
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Entitlement {
    pub version: u8,
    pub product: String,
    pub host_id: String,
    pub issued_at: i64,
    pub expires_at: i64,
    pub slot_limit: SlotLimit,
    #[serde(default)]
    pub roster: Vec<RosterEntry>,
}

/// Version-2 host roster (`CRAGH2`).
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct RosterEntitlement {
    pub version: u8,
    pub product: String,
    pub host_id: String,
    pub revision: u64,
    pub issued_at: i64,
    pub expires_at: i64,
    pub slot_limit: SlotLimit,
    #[serde(default)]
    pub roster: Vec<RosterEntry>,
    /// Metadata for per-grant windows (`GrantMetadata::check_at`).
    #[serde(default)]
    pub grants: Vec<GrantMetadata>,
}

impl RosterEntitlement {
    /// `RosterEntitlement::allows_permit` @ 0x33ea80.
    ///
    /// A permit is accepted only if its seat is inside `slot_limit` and an entry with the
    /// same seat and exact `permit_sha256` exists in the roster.
    pub fn allows_permit(&self, seat: u32, permit_sha256: &[u8; 32]) -> bool {
        if seat == 0 || !self.slot_limit.allows(seat) {
            return false;
        }
        self.roster.iter().any(|entry| {
            entry.seat == seat && hex_eq(entry.permit_sha256.as_bytes(), permit_sha256)
        })
    }

    pub fn grant_metadata(&self) -> Option<&GrantMetadata> {
        self.grants.first()
    }
}

fn hex_eq(hex_text: &[u8], raw: &[u8; 32]) -> bool {
    if hex_text.len() != 64 {
        return false;
    }
    let mut expect = [0u8; 64];
    const HEX: &[u8; 16] = b"0123456789abcdef";
    for (i, b) in raw.iter().enumerate() {
        expect[i * 2] = HEX[(b >> 4) as usize];
        expect[i * 2 + 1] = HEX[(b & 0xf) as usize];
    }
    // Constant-time compare is used in the binary; this is equivalent for public hashes.
    hex_text.eq_ignore_ascii_case(&expect)
}

/// Version-3 entitlement with per-grant windows.
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct GrantedEntitlement {
    pub version: u8,
    pub product: String,
    pub host_id: String,
    pub slots: u32,
    #[serde(default)]
    pub grants: Vec<GrantMetadata>,
}

/// Internal, verified view carrying the entitlement plus the matched permit.
#[derive(Debug, Clone)]
pub struct VerifiedEntitlement {
    pub claims: RosterEntitlement,
    pub permit_sha256: [u8; 32],
}

/// A slot permit (`CRAGS1`).
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SlotPermit {
    pub version: u8,
    pub product: String,
    pub host_id: String,
    pub seat: u32,
    pub vm_id: String,
    pub machine_id_hash: String,
    pub device_public_key: String,
    pub payload_key_id: String,
    pub wrapped_key: super::WrappedKey,
}

impl SlotPermit {
    pub fn verify_against(
        &self,
        entitlement: &RosterEntitlement,
        permit_sha256: &[u8; 32],
    ) -> Result<(), LicenseError> {
        if self.product != super::PRODUCT || self.host_id != entitlement.host_id {
            return Err(LicenseError::BindingMismatch);
        }
        if !entitlement.allows_permit(self.seat, permit_sha256) {
            return Err(LicenseError::BindingMismatch);
        }
        Ok(())
    }
}
