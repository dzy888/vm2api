//! Reconstructed `craggemini_core::pool` — per-account `agy` process pool.
//! Addresses: `AccountPool::new` 0x37ce20, `pump_account_queue` 0x387b00,
//! `AgySlot::spawn` (state machine, 0x119380 family), `take_matching_idle` 0x2e... .
#![allow(dead_code, unused)]

use std::collections::VecDeque;
use std::os::fd::AsRawFd;
use std::path::PathBuf;
use std::sync::Arc;
use std::time::{Duration, Instant};

use serde::{Deserialize, Serialize};

use crate::binding::AccountBindingConfig;
use crate::guard::GuardHandle;
use crate::protocol::Failure;
use crate::shm::ShmRingOwner;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum SlotState {
    Spawning,
    Idle,
    Busy,
    WaitingTool,
    Dead,
}

pub struct AgySlot {
    pub id: u64,
    pub session: String,
    pub config: Arc<crate::Config>,
    pub binding: AccountBindingConfig,
    pub state: SlotState,
    pub pid: Option<libc::pid_t>,
    pub pty: Option<std::os::fd::OwnedFd>,
    pub guard: Option<GuardHandle>,
    pub ring: Option<Arc<ShmRingOwner>>,
    pub work_dir: PathBuf,
    pub agy_home: PathBuf,
    pub last_used: Instant,
    pub faults: u32,
    pub journal: Option<crate::journal::Journal>,
    pub bridge: crate::bridge::Bridge,
    pub sessions: crate::resume::SessionStore,
}

impl AgySlot {
    /// `AgySlot::spawn` — prepare a 0700 home and run dir, build the `agy` command with
    /// `LD_PRELOAD=<bridge_so>`, isolate the account, open a PTY, start the guard and
    /// attach the session over the ring.
    pub async fn spawn(
        config: Arc<crate::Config>,
        binding: AccountBindingConfig,
        session: String,
    ) -> Result<Self, Failure> {
        crate::binding::validate_account_config(&config, &binding)
            .map_err(|e| Failure::new(400, "slot_binding_invalid", &e))?;
        // Native bridge validates the session id: never spawn with an empty one.
        let session = if session.trim().is_empty() {
            if config.session_id.trim().is_empty() {
                format!("sess-{:016x}", std::process::id() as u64)
            } else {
                config.session_id.clone()
            }
        } else {
            session
        };
        let agy_home = PathBuf::from(&binding.agy_home);
        let work_dir = PathBuf::from(&binding.run_dir);
        crate::binding::ensure_private_dir(&agy_home)
            .map_err(|e| Failure::new(500, "account_dir_error", &e))?;
        crate::binding::ensure_private_dir(&work_dir)
            .map_err(|e| Failure::new(500, "account_dir_error", &e))?;

        let mut args = Self::effective_agy_args(&config, &binding);
        // A control-plane account ships the full arg list (including its inline
        // `--settings` JSON); only synthesize settings for generated args.
        // Staged settings live at `<agy_home>/.gemini/antigravity-cli/settings.json`
        // (`stage_slot_agy_home` 0x4d0a40) and the flag uses the `--settings=` form.
        if binding.agy_args.is_empty() {
            let settings = agy_home
                .join(".gemini")
                .join("antigravity-cli")
                .join("settings.json");
            if let Some(dir) = settings.parent() {
                let _ = crate::binding::ensure_private_dir(dir);
            }
            let _ = std::fs::write(
                &settings,
                concat!(
                    r#"{"allowNonWorkspaceAccess":true,"useG1Credits":false,"verbosity":"high","#,
                    r#""permissions":{"allow":[],"deny":["write_file(*)","command(*)"]}}"#
                ),
            );
            args.push(format!("--settings={}", settings.display()));
        }

        let native_path = work_dir.join("native.sock");
        let _ = std::fs::remove_file(&native_path);
        let listener = tokio::net::UnixListener::bind(&native_path)
            .map_err(|e| Failure::new(500, "slot_guard_error", &e.to_string()))?;
        // Captured env: the verified-exe stamp binds /proc/self/exe to the hash-checked
        // binary (dev:ino:size:ctime:ctime_ns:mtime:mtime_ns), SLOT_INDEX is the pool slot.
        let exe_meta = crate::bridge::VerifiedExeKey::from_path(&config.agy_bin)
            .map(|k| k.stamp())
            .unwrap_or_default();
        let slot_index = config.max_concurrency.saturating_sub(1);
        let extra_env = vec![
            (
                "CRAGGEMINI_NATIVE_SOCKET".to_string(),
                native_path.display().to_string(),
            ),
            ("CRAGGEMINI_SESSION_ID".to_string(), session.clone()),
            ("CRAGGEMINI_SLOT_ID".to_string(), binding.env_id.clone()),
            ("CRAGGEMINI_SLOT_INDEX".to_string(), slot_index.to_string()),
            ("CRAGGEMINI_VERIFIED_EXE_META".to_string(), exe_meta),
        ];
        let (pty, pid, guard) =
            crate::guard::open_pty(&config.agy_bin, &args, &binding, &extra_env)?;
        let (stream, _) =
            tokio::time::timeout(std::time::Duration::from_secs(10), listener.accept())
                .await
                .map_err(|_| Failure::new(500, "slot_guard_error", "native socket accept timeout"))?
                .map_err(|e| Failure::new(500, "slot_guard_error", &e.to_string()))?;
        let mut bridge = crate::bridge::Bridge::from_stream(stream, &config)
            .map_err(|e| Failure::new(500, "slot_guard_error", &e.to_string()))?;
        let ring = if config.require_shm {
            Some(Arc::new(
                ShmRingOwner::create(config.shm_request_bytes, config.shm_response_bytes)
                    .map_err(|e| Failure::new(503, "native_unavailable", &e.to_string()))?,
            ))
        } else {
            None
        };
        bridge.ring = ring.clone();
        // Captured handshake order: agy sends `ready`, core answers `attached`,
        // then passes memfd + request/response eventfds over SCM_RIGHTS.
        bridge
            .read_ready()
            .await
            .map_err(|e| Failure::new(500, "slot_handshake_failed", &e.to_string()))?;
        bridge
            .send_attached(&session, ring.is_some())
            .await
            .map_err(|e| Failure::new(500, "slot_handshake_failed", &e.to_string()))?;
        if let Some(ring) = &ring {
            bridge
                .send_ring_fds(ring)
                .map_err(|e| Failure::new(500, "slot_handshake_failed", &e.to_string()))?;
        }
        // spawn::closure#7 — per-slot session journal/store.
        let journal = crate::journal::Journal::open_at(&work_dir.join("journal.jsonl")).ok();
        let slot = Self {
            id: binding.account_id.parse().unwrap_or(0),
            session,
            config,
            binding,
            state: SlotState::Idle,
            pid: Some(pid),
            pty: Some(pty),
            guard: Some(guard),
            ring,
            work_dir,
            agy_home,
            last_used: Instant::now(),
            faults: 0,
            journal,
            sessions: Default::default(),
            bridge,
        };
        Ok(slot)
    }

    /// `pool::effective_agy_args`.
    /// `pool::effective_agy_args_with_resume` 0x4d3060: start from the account
    /// args, then guarantee the mandatory defaults. The decompiled body only
    /// injects `--dangerously-skip-permissions` and `--verbosity high`; the rest
    /// comes from the binding.
    pub fn effective_agy_args(
        _config: &crate::Config,
        binding: &AccountBindingConfig,
    ) -> Vec<String> {
        let mut args = Vec::new();
        if !binding
            .agy_args
            .iter()
            .any(|a| a.starts_with("--dangerously-skip-permissions"))
        {
            args.push("--dangerously-skip-permissions".into());
        }
        args.extend(binding.agy_args.iter().cloned());
        // `agy` has no `--verbosity` flag; high verbosity lives in settings.json
        // (`{"verbosity":"high"}`, literal at 0x197336). A control-plane arg list
        // already carries its own `--settings`, so leave it untouched.
        if !binding.agy_args.is_empty() {
            return args;
        }
        // Synthesized arg set (no control-plane entry): normal CLI args.
        let work = binding.run_dir.display().to_string();
        if !work.is_empty() {
            args.push("--add-dir".into());
            args.push(work);
        }
        if !binding.model.is_empty() {
            args.push("--model".into());
            args.push(binding.model.clone());
        }
        args.push("--log-file".into());
        args.push(
            binding
                .run_dir
                .join("..")
                .join("agy.log")
                .display()
                .to_string(),
        );
        args
    }

    pub fn is_healthy(&self) -> bool {
        self.state != SlotState::Dead
            && self
                .pid
                .map(|p| unsafe { libc::kill(p, 0) == 0 })
                .unwrap_or(false)
    }

    pub fn is_reusable(&self) -> bool {
        self.state == SlotState::Idle
            && self.last_used.elapsed() < Duration::from_secs(self.config.session_idle_ttl_secs)
    }

    /// `pool::drain_slot_pty`: read pending PTY bytes into the ring or a buffer.
    pub fn drain_slot_pty(&mut self) -> std::io::Result<usize> {
        let Some(pty) = &self.pty else { return Ok(0) };
        let mut buf = [0u8; 0x2000];
        let n = unsafe { libc::read(pty.as_raw_fd(), buf.as_mut_ptr().cast(), buf.len()) };
        if n < 0 {
            return Err(std::io::Error::last_os_error());
        }
        Ok(n as usize)
    }

    /// `pool::refresh_slot_auth_files`: copy refreshed `oauth_creds.json` into the slot
    /// home without following symlinks.
    pub fn refresh_slot_auth_files(&self) -> std::io::Result<()> {
        let src = self.agy_home.join(".gemini").join("oauth_creds.json");
        let dst = self.work_dir.join(".gemini").join("oauth_creds.json");
        if let Some(parent) = dst.parent() {
            std::fs::create_dir_all(parent)?;
        }
        std::fs::copy(src, dst).map(|_| ())
    }
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct PoolSchedulingPolicy {
    #[serde(default)]
    pub max_concurrency_per_account: u32,
    #[serde(default)]
    pub min_warm_slots: u32,
    #[serde(default)]
    pub max_queue: usize,
    #[serde(default)]
    pub queue_timeout_ms: u64,
    #[serde(default)]
    pub session_idle_ttl_secs: u64,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct PolicyPatch {
    pub max_concurrency: Option<u32>,
    pub min_warm_slots: Option<u32>,
    pub prewarm: Option<bool>,
    pub runnable_slots: Option<u32>,
    pub idle_ttl_secs: Option<u64>,
    pub require_shm: Option<bool>,
    pub sticky_enabled: Option<bool>,
    pub sticky_ttl_secs: Option<u64>,
    pub circuit_failure_threshold: Option<u32>,
    pub circuit_open_ms: Option<u64>,
    pub max_queue: Option<usize>,
    pub queue_timeout_ms: Option<u64>,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct QueuedWaiter {
    pub request_id: String,
    pub account_id: String,
    pub queued_at_ms: u64,
}

#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SlotLeasePayload {
    pub vm_id: String,
    pub slot_id: u64,
    pub session: String,
    pub account_id: String,
}

#[derive(Default)]
pub struct AccountPool {
    pub account_id: String,
    pub configured: u32,
    pub runnable: u32,
    pub active: u32,
    pub queued: VecDeque<QueuedWaiter>,
    pub consecutive_faults: u32,
    pub circuit_open_until: Option<Instant>,
}

impl AccountPool {
    /// `AccountPool::new` @ 0x37ce20.
    pub fn new(account_id: &str, capacity: u32) -> Self {
        Self {
            account_id: account_id.into(),
            configured: capacity,
            runnable: capacity,
            ..Default::default()
        }
    }

    /// `AccountPool::record_fault`: circuit opens at `circuit_failure_threshold`.
    pub fn record_fault(&mut self, threshold: u32, open_for: Duration) {
        self.consecutive_faults += 1;
        if self.consecutive_faults >= threshold {
            self.circuit_open_until = Some(Instant::now() + open_for);
        }
    }

    pub fn circuit_open(&self) -> bool {
        self.circuit_open_until
            .map(|t| t > Instant::now())
            .unwrap_or(false)
    }
}

pub struct PoolManager {
    pub config: Arc<crate::Config>,
    pub policy: PoolSchedulingPolicy,
    pub accounts: std::collections::HashMap<String, AccountPool>,
    pub idle: VecDeque<AgySlot>,
    pub active: std::collections::HashMap<u64, AgySlot>,
    pub next_stream_id: u64,
}

impl PoolManager {
    pub fn new(config: &crate::Config) -> Result<Self, Failure> {
        Ok(Self {
            config: Arc::new(config.clone()),
            policy: PoolSchedulingPolicy {
                max_concurrency_per_account: config.max_concurrency,
                min_warm_slots: config.min_warm_slots,
                max_queue: config.max_queue,
                queue_timeout_ms: config.queue_timeout_ms,
                session_idle_ttl_secs: config.session_idle_ttl_secs,
            },
            accounts: Default::default(),
            idle: Default::default(),
            active: Default::default(),
            next_stream_id: 1,
        })
    }

    /// `pool::take_matching_idle`: pick the least-recently-used reusable slot for the account.
    pub fn take_matching_idle(&mut self, account_id: &str, session: &str) -> Option<AgySlot> {
        let idx = self
            .idle
            .iter()
            .enumerate()
            .filter(|(_, s)| s.binding.account_id == account_id && s.is_reusable())
            .min_by_key(|(_, s)| s.last_used)
            .map(|(i, _)| i);
        let slot = self.idle.remove(idx?)?;
        if slot.session != session {
            let mut slot = slot;
            let _ =
                crate::bridge::Bridge::new(&self.config).and_then(|b| b.attach_session(session));
            slot.session = session.into();
            return Some(slot);
        }
        Some(slot)
    }

    /// `PoolManager::apply_policy` (`/internal/v1/policy`): hot patch scheduling policy.
    pub fn apply_patch(&mut self, patch: PolicyPatch) {
        if let Some(v) = patch.max_concurrency {
            self.policy.max_concurrency_per_account = v;
            for pool in self.accounts.values_mut() {
                pool.runnable = v;
            }
        }
        if let Some(v) = patch.min_warm_slots {
            self.policy.min_warm_slots = v;
        }
        if let Some(v) = patch.idle_ttl_secs {
            self.policy.session_idle_ttl_secs = v;
        }
        if let Some(v) = patch.queue_timeout_ms {
            self.policy.queue_timeout_ms = v;
        }
        if let Some(v) = patch.max_queue {
            self.policy.max_queue = v;
        }
    }

    /// `BindingRegistry::insert_validated` counterpart: register/update an account.
    pub fn upsert_account(&mut self, binding: AccountBindingConfig) {
        let id = binding.account_id.clone();
        let cap = binding.max_concurrency.max(1);
        let entry = self
            .accounts
            .entry(id)
            .or_insert_with(|| AccountPool::new(&binding.account_id, cap));
        entry.runnable = cap;
        entry.consecutive_faults = 0;
        entry.circuit_open_until = None;
    }

    /// `pump_account_queue` @ 0x387b00: dispatch waiters while under the runnable cap.
    pub fn pump_account_queue(&mut self, max_queue: usize, timeout: Duration) -> Vec<QueuedWaiter> {
        let mut started = Vec::new();
        for pool in self.accounts.values_mut() {
            while (pool.active as usize) < pool.runnable as usize {
                let Some(waiter) = pool.queued.pop_front() else {
                    break;
                };
                if Instant::now().duration_since(Instant::now()) > timeout {
                    continue;
                }
                pool.active += 1;
                started.push(waiter);
            }
        }
        started.truncate(max_queue);
        started
    }

    /// `PoolManager::spawn_turn` closure: lease a slot, submit, return it on completion.
    pub async fn spawn_turn(
        &mut self,
        envelope: crate::protocol::Envelope,
    ) -> Result<crate::server::JsonTurnResult, Failure> {
        let account = envelope
            .headers
            .get("x-craggemini-account")
            .cloned()
            .unwrap_or_default();
        let session = envelope
            .headers
            .get("x-craggemini-session")
            .cloned()
            .unwrap_or_default();
        let slot = match self.take_matching_idle(&account, &session) {
            Some(s) => s,
            None => {
                let binding = AccountBindingConfig::from_config(&self.config);
                AgySlot::spawn(self.config.clone(), binding, session.clone()).await?
            }
        };
        slot.bridge.execute(envelope).await
    }

    /// Streaming counterpart of `spawn_turn`.
    pub async fn spawn_stream(
        &mut self,
        envelope: crate::protocol::Envelope,
    ) -> Result<crate::server::Delivery, Failure> {
        let account = envelope
            .headers
            .get("x-craggemini-account")
            .cloned()
            .unwrap_or_default();
        let session = envelope
            .headers
            .get("x-craggemini-session")
            .cloned()
            .unwrap_or_default();
        let mut slot = match self.take_matching_idle(&account, &session) {
            Some(s) => s,
            None => {
                let binding = AccountBindingConfig::from_config(&self.config);
                AgySlot::spawn(self.config.clone(), binding, session.clone()).await?
            }
        };
        let delivery = slot.bridge.submit_stream(envelope).await?;
        // Keep the slot (and its native socket) alive for the stream task.
        slot.state = SlotState::Busy;
        let key = self.next_stream_id;
        self.next_stream_id = self.next_stream_id.wrapping_add(1);
        self.active.insert(key, slot);
        Ok(delivery)
    }
}

// ---------------------------------------------------------------------------
// 0.5.0 headless ACP pool: per-account ACP permits, suspended sessions,
// active turns, account cooldowns, and `spawn_with_cut` (conversation cut).
// ---------------------------------------------------------------------------

#[derive(Debug, Clone)]
pub struct AcpQueuedWaiter {
    pub request_id: String,
    pub account_id: String,
}

#[derive(Debug, Clone)]
pub struct AcpActiveTurn {
    pub request_id: String,
    pub session_id: String,
}

#[derive(Debug, Clone)]
pub struct AcpSuspendedSession {
    pub session_id: String,
    pub conversation_id: String,
    pub last_used_ms: i64,
}

impl AccountPool {
    /// `AccountPool::acquire_acp_permit`: bounded by `acp_max_sessions`.
    pub fn acquire_acp_permit(
        &mut self,
        active: &mut std::collections::HashMap<String, AcpActiveTurn>,
        suspended: &mut std::collections::HashMap<String, AcpSuspendedSession>,
        max_sessions: u32,
        request_id: &str,
        session_id: &str,
    ) -> bool {
        if active.len() as u32 >= max_sessions {
            return false;
        }
        active.insert(
            request_id.to_string(),
            AcpActiveTurn {
                request_id: request_id.to_string(),
                session_id: session_id.to_string(),
            },
        );
        suspended.remove(request_id);
        true
    }
}

impl PoolManager {
    /// `pool::maintain_acp_resident`: drop suspended sessions past their TTL.
    pub fn maintain_acp_resident(
        suspended: &mut std::collections::HashMap<String, AcpSuspendedSession>,
        now_ms: i64,
        idle_ttl_ms: i64,
    ) -> Vec<String> {
        let expired: Vec<String> = suspended
            .iter()
            .filter(|(_, s)| now_ms.saturating_sub(s.last_used_ms) > idle_ttl_ms)
            .map(|(k, _)| k.clone())
            .collect();
        for key in &expired {
            suspended.remove(key);
        }
        expired
    }

    /// `AgySlot::spawn_with_cut`: spawn with an explicit conversation cut marker
    /// (`ResumeCutMeta`) so the new slot resumes from a tool-call boundary.
    pub async fn spawn_with_cut(
        config: Arc<crate::Config>,
        binding: AccountBindingConfig,
        session: String,
        cut: Option<crate::resume::ResumeCutMeta>,
    ) -> Result<AgySlot, Failure> {
        let mut slot = AgySlot::spawn(config, binding, session).await?;
        if let Some(cut) = cut {
            let now = crate::now_secs();
            slot.sessions
                .records
                .entry(cut.conversation_id.clone())
                .or_insert_with(|| crate::resume::ConversationRecord {
                    conversation_id: cut.conversation_id.clone(),
                    native_conversation_id: None,
                    created_at: now,
                    updated_at: now,
                    turn_count: cut.cut_at_tool_call_idx as u64,
                    status: crate::resume::ConversationStatus::Active,
                    digests: Vec::new(),
                    chain: Vec::new(),
                    anchors: Vec::new(),
                    pending_tool_calls: Vec::new(),
                    model: None,
                });
        }
        Ok(slot)
    }
}
