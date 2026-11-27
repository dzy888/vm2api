// 003d78f0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_all_idle::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined *puVar5;
  char cVar6;
  
  if (*(char *)(param_1 + 0x3a) == '\x03') {
    if (*(char *)(param_1 + 0xa8) == '\x04') {
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0xb0);
    }
    else if (*(char *)(param_1 + 0xa8) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (param_1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (0 < *(longlong *)(param_1 + 0x48)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x39) = 0;
    plVar4 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x40);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x3a) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x30f8) != '\x03') {
    if (*(char *)(param_1 + 0x30f8) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x8c0);
    }
    goto LAB_003d79e1;
  }
  <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
            (param_1 + 0x1960);
  piVar2 = *(int **)(param_1 + 0x1958);
  LOCK();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    uVar3 = *(ulonglong *)puVar5;
joined_r0x003d7aab:
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar6 == '\0') {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
    }
  }
  else {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    if (cVar6 != '\0') {
      uVar3 = *(ulonglong *)puVar5;
      goto joined_r0x003d7aab;
    }
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x30f9) = 0;
LAB_003d79e1:
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x8a0);
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}


