// 00264670 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::reap_idle::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::reap_idle::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::reap_idle::_closure_0_>(longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  
  if (*(char *)(param_1 + 0x30e9) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2838) != '\x03') {
    if (*(char *)(param_1 + 0x2838) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1);
    }
    goto LAB_0026471f;
  }
  <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
            (param_1 + 0x10a0);
  piVar2 = *(int **)(param_1 + 0x1098);
  LOCK();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    uVar3 = *(ulonglong *)puVar4;
joined_r0x00264785:
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      if (cVar5 == '\0') {
        *(undefined1 *)(piVar2 + 1) = 1;
      }
    }
  }
  else {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    if (cVar5 != '\0') {
      uVar3 = *(ulonglong *)puVar4;
      goto joined_r0x00264785;
    }
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x2839) = 0;
LAB_0026471f:
  <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x2840);
  *(undefined1 *)(param_1 + 0x30e8) = 0;
  return;
}


