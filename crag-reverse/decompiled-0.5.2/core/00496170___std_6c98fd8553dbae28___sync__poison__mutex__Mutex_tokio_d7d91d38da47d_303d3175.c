// 00496170 <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>>
          (longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  ::
  <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
  ::drain::
  <<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>
            ();
  <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(puVar2);
  plVar1 = (longlong *)*puVar2;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::loom::std::mutex::Mutex<tokio[d7d91d38da47d894]::util::idle_notified_set::ListsInner<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
    ::drop_slow(puVar2);
    return;
  }
  return;
}


