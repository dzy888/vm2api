// 00556a10 <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::util::idle_notified_set::ListsInner<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
    ::drop_slow(param_1);
    return;
  }
  return;
}


