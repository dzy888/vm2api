// 005d23f0 remove_session_listener

/* WARNING: Switch with 1 destination removed at 0x005d246d */
/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::remove_session_listener */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::remove_session_listener
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *local_38;
  
  lVar3 = *(longlong *)(param_1 + 0x218);
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar8 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar8) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  if (cVar6 == '\0') {
    plVar7 = (longlong *)
             <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::UnboundedSender<serde_json[dc3825464c436029]::value::Value>,std[6c98fd8553dbae28]::hash::random::RandomState>>
             ::remove::<str>(lVar3 + 0x18,param_2,param_3);
    local_38 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(&local_38);
      LOCK();
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<serde_json[dc3825464c436029]::value::Value,tokio[d7d91d38da47d894]::sync::mpsc::unbounded::Semaphore>>>
        ::drop_slow(&local_38);
      }
    }
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


