//! Reconstructed `craggemini_core::credential`.
//! Addresses: `credential_health`, `decode`, `first_string`.
#![allow(dead_code, unused)]

use serde_json::Value;

#[derive(Debug, Clone, Default)]
pub struct AgyCredential {
    pub access_token: Option<String>,
    pub refresh_token: Option<String>,
    pub expires_at: Option<i64>,
}

/// `credential::decode`: accepts `access_token`/`refresh_token`/`expires_at` aliases.
pub fn decode(value: &Value) -> Option<AgyCredential> {
    let obj = value.as_object()?;
    Some(AgyCredential {
        access_token: first_string(obj, &["access_token", "accessToken"]),
        refresh_token: first_string(obj, &["refresh_token", "refreshToken"]),
        expires_at: ["expires_at", "expiresAt", "expiry"]
            .iter()
            .find_map(|k| obj.get(*k)?.as_i64()),
    })
}

/// `credential::first_string`.
pub fn first_string(obj: &serde_json::Map<String, Value>, keys: &[&str]) -> Option<String> {
    keys.iter()
        .find_map(|k| obj.get(*k)?.as_str().map(str::to_string))
}

/// `credential::credential_health`: fresh / refreshable / expired / missing.
pub fn credential_health(cred: &AgyCredential, now: i64) -> &'static str {
    match (&cred.access_token, &cred.refresh_token, cred.expires_at) {
        (_, Some(_), _) => "refreshable",
        (Some(_), None, Some(exp)) if exp > now + 60 => "fresh",
        (Some(_), None, _) => "expired",
        _ => "missing",
    }
}
