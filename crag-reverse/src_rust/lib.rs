//! Reconstructed `craggemini_core` 0.5.2 (baseline 0.4.13 + upstream delta). Compiles only approximately; see `README.md`.
#![allow(dead_code, unused, non_snake_case)]

use std::path::PathBuf;

use serde::{Deserialize, Serialize};

pub mod acp_backend;
pub mod admission;
pub mod binding;
pub mod bridge;
pub mod cooldown;
pub mod credential;
pub mod date;
pub mod guard;
pub mod journal;
pub mod license;
pub mod mcp;
pub mod models;
pub mod multiprotocol;
pub mod oauth;
pub mod pool;
pub mod private_file;
pub mod protocol;
pub mod raw;
pub mod resume;
pub mod schema;
pub mod server;
pub mod shm;
pub mod subagents;
pub mod syscompat;
pub mod tools;

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct Config {
    #[serde(default)]
    pub run_dir: String,
    #[serde(default)]
    pub internal_token: String,
    #[serde(default)]
    pub external_api_token: Option<String>,
    #[serde(default)]
    pub session_id: String,
    #[serde(default)]
    pub model: String,
    #[serde(default)]
    pub agy_sha256: String,
    #[serde(default)]
    pub timeout_ms: u64,
    #[serde(default)]
    pub first_byte_timeout_ms: u64,
    #[serde(default)]
    pub idle_timeout_ms: u64,
    #[serde(default)]
    pub max_queue: usize,
    pub vm_id: String,
    pub license_dir: PathBuf,
    #[serde(default)]
    pub shm_request_bytes: usize,
    #[serde(default)]
    pub shm_response_bytes: usize,
    #[serde(default)]
    pub mcp_tool_timeout_ms: u64,
    #[serde(default)]
    pub mcp_config_path: Option<PathBuf>,
    #[serde(default)]
    pub resume_conversation_id: Option<String>,
    #[serde(default)]
    pub agy_bin: PathBuf,
    #[serde(default)]
    pub bridge_so: Option<PathBuf>,
    #[serde(default)]
    pub verify_agy_sha256: String,
    #[serde(default)]
    pub strict_unique_proxy: bool,
    #[serde(default)]
    pub require_proxy_calibration: bool,
    #[serde(default)]
    pub auto_calibrate_on_start: bool,
    #[serde(default = "default_concurrency")]
    pub max_concurrency: u32,
    #[serde(default = "default_idle_ttl")]
    pub session_idle_ttl_secs: u64,
    #[serde(default)]
    pub system_prompt_mode: protocol::SystemPromptMode,
    #[serde(default)]
    pub max_accounts: usize,
    #[serde(default)]
    pub sticky_enabled: bool,
    #[serde(default)]
    pub sticky_ttl_secs: u64,
    #[serde(default)]
    pub require_shm: bool,
    #[serde(default = "default_circuit")]
    pub circuit_failure_threshold: u32,
    #[serde(default = "default_circuit_ms")]
    pub circuit_open_ms: u64,
    #[serde(default)]
    pub queue_timeout_ms: u64,
    #[serde(default)]
    pub host_license_dir: Option<PathBuf>,
    #[serde(default)]
    pub prewarm: bool,
    #[serde(default)]
    pub min_warm_slots: u32,
    #[serde(default)]
    pub netns: String,
    // ---- 0.5.0 ---------------------------------------------------------
    /// Extra allowed agy digests (rotation while a release rolls out).
    #[serde(default)]
    pub allowed_agy_sha256s: Vec<String>,
    #[serde(default)]
    pub acp_include_default_customizations: bool,
    #[serde(default = "default_acp_startup")]
    pub acp_startup_timeout_ms: u64,
    #[serde(default = "default_acp_sessions")]
    pub acp_max_sessions_per_worker: u32,
    #[serde(default = "default_global_slots")]
    pub global_max_slots: u32,
    #[serde(default = "default_memory_limit")]
    pub memory_limit_bytes: u64,
    #[serde(default = "default_memory_reserve")]
    pub memory_reserve_bytes: u64,
    #[serde(default = "default_slot_estimate")]
    pub slot_memory_estimate_bytes: u64,
    #[serde(default = "default_slot_rss")]
    pub slot_rss_soft_limit_bytes: u64,
}

fn default_acp_startup() -> u64 {
    45_000
}
fn default_acp_sessions() -> u32 {
    8
}
fn default_global_slots() -> u32 {
    128
}
fn default_memory_limit() -> u64 {
    8 * 1024 * 1024 * 1024
}
fn default_memory_reserve() -> u64 {
    512 * 1024 * 1024
}
fn default_slot_estimate() -> u64 {
    512 * 1024 * 1024
}
fn default_slot_rss() -> u64 {
    1024 * 1024 * 1024
}

impl Config {
    /// `Config::memory_policy` (0.5.0): admission tunables in one place.
    pub fn memory_policy(&self) -> admission::MemoryAdmission {
        admission::MemoryAdmission {
            limit_bytes: self.memory_limit_bytes,
            reserve_bytes: self.memory_reserve_bytes,
            estimate_bytes: self.slot_memory_estimate_bytes,
        }
    }

    /// `Config::acp_mode` was removed in favour of per-account workers; a config
    /// is headless-capable when an ACP session limit is configured.
    pub fn acp_enabled(&self) -> bool {
        self.acp_max_sessions_per_worker > 0
    }
}

fn default_concurrency() -> u32 {
    20
}
fn default_idle_ttl() -> u64 {
    600
}
fn default_circuit() -> u32 {
    5
}
fn default_circuit_ms() -> u64 {
    30_000
}

impl Default for Config {
    fn default() -> Self {
        Self {
            run_dir: "/tmp/craggemini".into(),
            internal_token: String::new(),
            external_api_token: None,
            session_id: String::new(),
            model: String::new(),
            agy_sha256: String::new(),
            timeout_ms: 0,
            first_byte_timeout_ms: 600_000,
            idle_timeout_ms: 300_000,
            max_queue: 40,
            vm_id: String::new(),
            license_dir: PathBuf::from("/run/kin/crag-license"),
            shm_request_bytes: 0,
            shm_response_bytes: 0,
            mcp_tool_timeout_ms: 300_000,
            mcp_config_path: None,
            resume_conversation_id: None,
            agy_bin: PathBuf::new(),
            bridge_so: None,
            verify_agy_sha256: String::new(),
            strict_unique_proxy: false,
            require_proxy_calibration: false,
            auto_calibrate_on_start: false,
            max_concurrency: default_concurrency(),
            session_idle_ttl_secs: default_idle_ttl(),
            system_prompt_mode: protocol::SystemPromptMode::OfficialFull,
            max_accounts: 0,
            sticky_enabled: false,
            sticky_ttl_secs: 0,
            require_shm: false,
            circuit_failure_threshold: default_circuit(),
            circuit_open_ms: default_circuit_ms(),
            queue_timeout_ms: 30_000,
            host_license_dir: None,
            prewarm: false,
            min_warm_slots: 1,
            netns: String::new(),
            allowed_agy_sha256s: Vec::new(),
            acp_include_default_customizations: false,
            acp_startup_timeout_ms: default_acp_startup(),
            acp_max_sessions_per_worker: default_acp_sessions(),
            global_max_slots: default_global_slots(),
            memory_limit_bytes: default_memory_limit(),
            memory_reserve_bytes: default_memory_reserve(),
            slot_memory_estimate_bytes: default_slot_estimate(),
            slot_rss_soft_limit_bytes: default_slot_rss(),
        }
    }
}

pub fn now_secs() -> i64 {
    std::time::SystemTime::now()
        .duration_since(std::time::UNIX_EPOCH)
        .map(|d| d.as_secs() as i64)
        .unwrap_or(0)
}
