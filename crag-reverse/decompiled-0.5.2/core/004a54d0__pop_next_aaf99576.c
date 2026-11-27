// 004a54d0 pop_next

/* <<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,
   <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>>::pop_next */

bool __rustcall
<<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>>
::pop_next(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *local_20;
  undefined8 local_18;
  
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 8);
    param_1[1] = lVar2;
    if (lVar2 == 0) {
      *param_1 = 0;
    }
    else {
      *(undefined8 *)(lVar2 + 0x10) = 0;
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    local_20 = (longlong *)(lVar1 + -0x10);
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    (*(code *)PTR_remote_abort_00799330)();
    cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar3 != '\0') {
      (*(code *)PTR_drop_join_handle_slow_00799088)();
    }
    LOCK();
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (*local_20 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
      ::drop_slow(&local_20);
    }
  }
  return lVar1 != 0;
}


