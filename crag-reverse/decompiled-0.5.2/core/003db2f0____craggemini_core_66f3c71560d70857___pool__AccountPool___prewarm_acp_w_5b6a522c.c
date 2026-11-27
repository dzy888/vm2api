// 003db2f0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x006fd7b0) */
/* WARNING: Switch with 1 destination removed at 0x003db52f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
          (undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  
  switch(*(undefined1 *)((longlong)param_1 + 0x13c)) {
  case 3:
    if (*(char *)(param_1 + 0x36) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x35) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x2c) != '\x04') {
      return;
    }
    (*(code *)PTR_drop_00799100)();
    if (param_1[0x2e] == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x003db358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[0x2e] + 0x18))();
    return;
  case 4:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
              (param_1 + 0x28);
    goto LAB_003db51c;
  case 5:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x31);
    if (param_1[0x2e] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x29);
    *(undefined1 *)((longlong)param_1 + 0x135) = 0;
    plVar2 = (longlong *)param_1[0x28];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x28);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x35) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0x36);
    }
    else if (*(char *)(param_1 + 0x35) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (param_1 + 0x38);
    }
    if (param_1[0x2c] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (0 < (longlong)param_1[0x29]) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)((longlong)param_1 + 0x134) = 0;
    plVar2 = (longlong *)param_1[0x28];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x28);
    }
    break;
  default:
    return;
  }
  if (param_1[1] != -2) {
    if (*(char *)((longlong)param_1 + 0x133) != '\0') {
      plVar2 = (longlong *)*param_1;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1);
      }
    }
    if ((*(char *)((longlong)param_1 + 0x132) != '\0') && (0 < (longlong)param_1[1])) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x132) = 0;
  *(undefined2 *)((longlong)param_1 + 0x136) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  if ((*(char *)(param_1 + 0x26) != '\0') && (param_1[0x16] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined2 *)((longlong)param_1 + 0x139) = 0;
  if (*(char *)((longlong)param_1 + 0x131) != '\0') {
    plVar2 = (longlong *)param_1[0x15];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x15);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x131) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13b) = 0;
LAB_003db51c:
  piVar3 = (int *)param_1[0x13];
  LOCK();
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    *piVar3 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
  }
  <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
            (piVar3,1,piVar3,bVar4);
  return;
}


