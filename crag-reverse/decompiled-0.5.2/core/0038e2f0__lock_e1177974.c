// 0038e2f0 lock

/* <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::registration_set::Synced>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SessionStore>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::ContinuationReceiptStore>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::set::HashSet<craggemini_core[66f3c71560d70857]::bridge::VerifiedExeKey>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AcpPoolState>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountScoringState>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::AccountPoolState>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::time::Instant>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::StickyIndex>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::oauth::StoredAttempt>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::mcp::McpState>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::vec::Vec<u8>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<alloc[12e961f32105355]::string::String>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::license::CachedGrant>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::util::idle_notified_set::ListsInner<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,
   (std[6c98fd8553dbae28]::time::Instant, u32)>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<u64,
   tokio[d7d91d38da47d894]::sync::oneshot::Sender<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>>>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::time::Instant>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::acp_backend::StderrRing>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PtyDiagRing>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::PoolSchedulingPolicy>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::schema::ToolNameCacheInner>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::server::Registry>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::admission::OrphanReaper>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::admission::MemoryAdmission>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>::lock
   <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>>::lock
    */

ulonglong * __rustcall
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::runtime::io::registration_set::Synced>>
::lock(ulonglong *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  
  LOCK();
  iVar1 = *param_2;
  if (iVar1 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar2 = bVar2 ^ 1;
  }
  iVar1 = param_2[1];
  param_1[1] = (ulonglong)param_2;
  *(byte *)(param_1 + 2) = bVar2;
  *param_1 = (ulonglong)((char)iVar1 != '\0');
  return param_1;
}


