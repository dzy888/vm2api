// 00261650 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::evict_oldest_idle::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  
  if (*(char *)(param_1 + 0x23) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x48);
    if ((*(longlong *)(param_1 + 0x30) != -1) && (*(longlong *)(param_1 + 0x30) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x22) = 0;
    plVar2 = *(longlong **)(param_1 + 0x28);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x28);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x23) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x30e8) != '\x03') {
    if (*(char *)(param_1 + 0x30e8) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x8b0);
    }
    goto LAB_00261757;
  }
  <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
            (param_1 + 0x1950);
  piVar3 = *(int **)(param_1 + 0x1948);
  LOCK();
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    *piVar3 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(piVar3 + 0x40) =
         *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
    uVar4 = *(ulonglong *)puVar5;
joined_r0x002617b7:
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar6 == '\0') {
        *(undefined1 *)(piVar3 + 1) = 1;
      }
    }
  }
  else {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar3 + 0x40) =
         *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
    if (cVar6 != '\0') {
      uVar4 = *(ulonglong *)puVar5;
      goto joined_r0x002617b7;
    }
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x30e9) = 0;
LAB_00261757:
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x890);
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}


