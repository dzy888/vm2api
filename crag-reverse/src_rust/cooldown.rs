//! Reconstructed `craggemini_core::pool` cooldown registry (0.5.0).
//!
//! Account/model-family cooldowns persisted to `cooldowns.v1.json`:
//! `CooldownKind` classifies the upstream failure, entries carry an epoch
//! deadline plus diagnostics, and `CooldownRegistry` prunes expired entries and
//! clears all entries for one account.
#![allow(dead_code, unused)]

use std::collections::HashMap;
use std::path::{Path, PathBuf};

use serde::{Deserialize, Serialize};

use crate::resume::ModelFamily;

#[derive(Debug, Clone, Copy, PartialEq, Eq, Serialize, Deserialize)]
#[serde(rename_all = "snake_case")]
pub enum CooldownKind {
    ModelCapacityExhausted,
    QuotaExhausted,
    ValidationRequired,
    AuthPermanent,
    RateLimitedGeneric,
}

impl CooldownKind {
    /// `auth_permanent` never clears by timer, only by re-auth.
    pub fn is_permanent(self) -> bool {
        matches!(self, CooldownKind::AuthPermanent)
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct FamilyCooldownEntry {
    pub kind: CooldownKind,
    pub until_epoch_ms: i64,
    #[serde(default)]
    pub consecutive: u32,
    #[serde(default)]
    pub last_updated_ms: i64,
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub validation_url: Option<String>,
    #[serde(default, skip_serializing_if = "Option::is_none")]
    pub auth_permanent_error: Option<String>,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct AccountCooldownRecord {
    #[serde(default)]
    pub families: HashMap<ModelFamily, FamilyCooldownEntry>,
    #[serde(default)]
    pub version: u32,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct CooldownFileV1 {
    #[serde(default)]
    pub accounts: HashMap<String, AccountCooldownRecord>,
    #[serde(default = "one")]
    pub version: u32,
}

fn one() -> u32 {
    1
}

pub struct CooldownRegistry {
    pub path: PathBuf,
    pub accounts: HashMap<String, AccountCooldownRecord>,
}

impl CooldownRegistry {
    pub fn open(path: PathBuf) -> Self {
        let accounts = std::fs::read(path.as_path())
            .ok()
            .and_then(|b| serde_json::from_slice::<CooldownFileV1>(&b).ok())
            .map(|f| f.accounts)
            .unwrap_or_default();
        Self { path, accounts }
    }

    pub fn save(&self) -> std::io::Result<()> {
        let doc = CooldownFileV1 {
            accounts: self.accounts.clone(),
            version: 1,
        };
        let bytes = serde_json::to_vec(&doc).unwrap_or_default();
        let tmp = self.path.with_extension("json.tmp");
        std::fs::write(&tmp, &bytes)?;
        std::fs::rename(&tmp, &self.path)
    }

    pub fn record(&mut self, account: &str, family: ModelFamily, entry: FamilyCooldownEntry) {
        self.accounts
            .entry(account.to_string())
            .or_default()
            .families
            .insert(family, entry);
    }

    /// `CooldownRegistry::prune_expired`.
    pub fn prune_expired(&mut self, now_ms: i64) {
        for record in self.accounts.values_mut() {
            record
                .families
                .retain(|_, e| e.kind.is_permanent() || e.until_epoch_ms > now_ms);
        }
        self.accounts.retain(|_, r| !r.families.is_empty());
    }

    /// `CooldownRegistry::clear_account_all`.
    pub fn clear_account_all(&mut self, account: &str) {
        self.accounts.remove(account);
    }

    /// Whether the family is currently cooling down for this account.
    pub fn blocked(&self, account: &str, family: ModelFamily, now_ms: i64) -> bool {
        self.accounts
            .get(account)
            .and_then(|r| r.families.get(&family))
            .map(|e| e.kind.is_permanent() || e.until_epoch_ms > now_ms)
            .unwrap_or(false)
    }

    pub fn file_name() -> &'static str {
        "cooldowns.v1.json"
    }

    pub fn path_in(dir: &Path) -> PathBuf {
        dir.join(Self::file_name())
    }
}
