// 00496660 <<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,core[c0acaeba6ab4c2e0]::mem::drop<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,
   core[c0acaeba6ab4c2e0]::mem::drop<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,core[c0acaeba6ab4c2e0]::mem::drop<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  longlong *local_38;
  
  puVar5 = PTR_drop_join_handle_slow_00799088;
  puVar4 = PTR_drop_join_handle_fast_00799080;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    lVar3 = *(longlong *)(lVar2 + 8);
    param_1[1] = lVar3;
    if (lVar3 == 0) {
      *param_1 = 0;
    }
    else {
      *(undefined8 *)(lVar3 + 0x10) = 0;
    }
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    plVar1 = (longlong *)(lVar2 + -0x10);
    local_38 = plVar1;
    cVar6 = (*(code *)puVar4)();
    if (cVar6 != '\0') {
      (*(code *)puVar5)();
    }
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
      ::drop_slow(&local_38);
    }
    lVar2 = param_1[1];
  }
  return;
}


