// 005afb90 <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>

/* tokio[d7d91d38da47d894]::util::wake::wake_arc_raw::<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
    */

void __rustcall
tokio[d7d91d38da47d894]::util::wake::wake_arc_raw::
<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
          (longlong param_1)

{
  longlong *plVar1;
  longlong *local_18;
  
  plVar1 = (longlong *)(param_1 + -0x10);
  local_18 = plVar1;
  <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_tokio[d7d91d38da47d894]::util::wake::Wake>
  ::wake_by_ref(&local_18);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
    ::drop_slow(&local_18);
  }
  return;
}


