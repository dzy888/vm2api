//! Reconstructed `craggemini_core::admission` (0.5.0) — memory admission control.
//!
//! Samples host and cgroup memory, enforces a per-slot RSS soft limit and the
//! global `memory_limit_bytes` / `memory_reserve_bytes` budget, and reaps orphan
//! slot directories, stale temp dirs and startup leftovers.
#![allow(dead_code, unused)]

use std::collections::{HashSet, VecDeque};
use std::path::{Path, PathBuf};

/// `admission::MemorySnapshot`.
#[derive(Debug, Clone, Copy, Default)]
pub struct MemorySnapshot {
    pub host_total: u64,
    pub host_available: u64,
    pub cgroup_current: u64,
    pub cgroup_max: u64,
}

/// `admission::parse_proc_kib_field`: read `Key: <n> kB` from a proc file.
pub fn parse_proc_kib_field(text: &str, key: &str) -> Option<u64> {
    for line in text.lines() {
        if let Some(rest) = line.strip_prefix(key) {
            let rest = rest.trim_start_matches(':').trim();
            let n: u64 = rest.split_whitespace().next()?.parse().ok()?;
            return Some(n.saturating_mul(1024));
        }
    }
    None
}

/// `admission::read_meminfo`.
pub fn read_meminfo() -> Option<(u64, u64)> {
    let text = std::fs::read_to_string("/proc/meminfo").ok()?;
    Some((
        parse_proc_kib_field(&text, "MemTotal")?,
        parse_proc_kib_field(&text, "MemAvailable")?,
    ))
}

/// `admission::read_cgroup_u64_file`.
pub fn read_cgroup_u64_file(path: &Path) -> Option<u64> {
    let text = std::fs::read_to_string(path).ok()?;
    let v = text.trim();
    if v == "max" {
        return Some(u64::MAX);
    }
    v.parse().ok()
}

/// `admission::read_cgroup_memory`.
pub fn read_cgroup_memory() -> Option<(u64, u64)> {
    let base = Path::new("/sys/fs/cgroup");
    let current = read_cgroup_u64_file(&base.join("memory.current"))?;
    let max = read_cgroup_u64_file(&base.join("memory.max")).unwrap_or(u64::MAX);
    Some((current, max))
}

/// `admission::read_pid_rss_bytes_at`.
pub fn read_pid_rss_bytes_at(pid: u32) -> Option<u64> {
    let text = std::fs::read_to_string(format!("/proc/{pid}/status")).ok()?;
    parse_proc_kib_field(&text, "VmRSS")
}

/// `admission::read_pid_rss_bytes` (alias).
pub fn read_pid_rss_bytes(pid: u32) -> Option<u64> {
    read_pid_rss_bytes_at(pid)
}

/// `admission::MemoryAdmission::sample`.
pub fn sample() -> MemorySnapshot {
    let (host_total, host_available) = read_meminfo().unwrap_or((0, 0));
    let (cgroup_current, cgroup_max) = read_cgroup_memory().unwrap_or((0, u64::MAX));
    MemorySnapshot {
        host_total,
        host_available,
        cgroup_current,
        cgroup_max,
    }
}

impl MemorySnapshot {
    /// `slot_rss_soft_limit_bytes`: share of the available budget per slot.
    pub fn slot_rss_soft_limit_bytes(&self, slots: u32) -> u64 {
        let slots = slots.max(1) as u64;
        let budget = self
            .cgroup_max
            .saturating_sub(self.cgroup_current)
            .min(self.host_available);
        (budget / slots).max(64 * 1024 * 1024)
    }
}

/// `admission::MemoryAdmission` — admit/reject a slot against the budget.
pub struct MemoryAdmission {
    pub limit_bytes: u64,
    pub reserve_bytes: u64,
    pub estimate_bytes: u64,
}

impl MemoryAdmission {
    pub fn admit(&self, snap: &MemorySnapshot, running_slots: u32) -> bool {
        let projected = snap
            .cgroup_current
            .saturating_add(self.estimate_bytes.saturating_mul(running_slots as u64 + 1));
        let limit = self.limit_bytes.min(snap.cgroup_max);
        projected.saturating_add(self.reserve_bytes) <= limit
    }
}

/// `admission::BoundedSeen` — insertion-ordered bounded set.
pub struct BoundedSeen {
    cap: usize,
    order: VecDeque<String>,
    set: HashSet<String>,
}

impl BoundedSeen {
    pub fn new(cap: usize) -> Self {
        Self {
            cap: cap.max(1),
            order: VecDeque::new(),
            set: HashSet::new(),
        }
    }

    pub fn contains(&self, key: &str) -> bool {
        self.set.contains(key)
    }

    pub fn insert(&mut self, key: String) -> bool {
        if !self.set.insert(key.clone()) {
            return false;
        }
        self.order.push_back(key);
        while self.order.len() > self.cap {
            if let Some(old) = self.order.pop_front() {
                self.set.remove(&old);
            }
        }
        true
    }
}

/// `admission::sweep_orphan_slot_dirs`: remove `slots/*` whose pid is gone and
/// whose age exceeds the grace period.
pub fn sweep_orphan_slot_dirs(slots_dir: &Path, min_age_secs: u64) -> usize {
    let mut removed = 0;
    let Ok(entries) = std::fs::read_dir(slots_dir) else {
        return 0;
    };
    for entry in entries.flatten() {
        let path = entry.path();
        let stale = entry
            .metadata()
            .ok()
            .and_then(|m| m.modified().ok())
            .and_then(|t| t.elapsed().ok())
            .map(|e| e.as_secs() >= min_age_secs)
            .unwrap_or(false);
        if stale && path.is_dir() {
            if let Ok(pid) = std::fs::read_to_string(path.join("pid")) {
                if let Ok(pid) = pid.trim().parse::<i32>() {
                    if unsafe { libc::kill(pid, 0) } == 0 {
                        continue;
                    }
                }
            }
            if std::fs::remove_dir_all(&path).is_ok() {
                removed += 1;
            }
        }
    }
    removed
}

/// `admission::sweep_stale_temp_dirs`.
pub fn sweep_stale_temp_dirs(root: &Path, prefix: &str, min_age_secs: u64) -> usize {
    let mut removed = 0;
    let Ok(entries) = std::fs::read_dir(root) else {
        return 0;
    };
    for entry in entries.flatten() {
        let name = entry.file_name().to_string_lossy().into_owned();
        if !name.starts_with(prefix) {
            continue;
        }
        let stale = entry
            .metadata()
            .ok()
            .and_then(|m| m.modified().ok())
            .and_then(|t| t.elapsed().ok())
            .map(|e| e.as_secs() >= min_age_secs)
            .unwrap_or(false);
        if stale && std::fs::remove_dir_all(entry.path()).is_ok() {
            removed += 1;
        }
    }
    removed
}

/// `admission::sweep_startup_orphans`.
pub fn sweep_startup_orphans(run_dir: &Path) -> usize {
    sweep_orphan_slot_dirs(&run_dir.join("acc/slots"), 0)
        + sweep_stale_temp_dirs(run_dir, ".tmp-", 0)
}

/// `admission::OrphanReaper::reap_once`.
pub struct OrphanReaper {
    pub run_dir: PathBuf,
    pub grace_secs: u64,
}

impl OrphanReaper {
    pub fn reap_once(&self) -> usize {
        sweep_orphan_slot_dirs(&self.run_dir.join("acc/slots"), self.grace_secs)
    }
}
