// 005afb70 <tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>

/* tokio[d7d91d38da47d894]::util::wake::drop_arc_raw::<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
    */

longlong __rustcall
tokio[d7d91d38da47d894]::util::wake::drop_arc_raw::
<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
          (longlong param_1)

{
  longlong *plVar1;
  longlong local_8;
  
  local_8 = param_1 + -0x10;
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
    ::drop_slow(&local_8);
  }
  return local_8;
}


