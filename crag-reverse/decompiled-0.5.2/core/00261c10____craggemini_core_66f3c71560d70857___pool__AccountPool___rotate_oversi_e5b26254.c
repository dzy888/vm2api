// 00261c10 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00261dc4 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::rotate_oversized_slots::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0xe1) == '\x03') {
    if (*(char *)(param_1 + 0x1270) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x110);
    }
    goto LAB_00261cff;
  }
  if (*(char *)(param_1 + 0xe1) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x3168) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
              (param_1 + 0x19d0);
    piVar2 = *(int **)(param_1 + 0x19c8);
    LOCK();
    iVar1 = *piVar2;
    if (iVar1 == 0) {
      *piVar2 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      *(ulonglong *)(piVar2 + 0x40) =
           *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
      uVar5 = *(ulonglong *)puVar3;
joined_r0x00261e21:
      if ((uVar5 & 0x7fffffffffffffff) != 0) {
        cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        if (cVar4 == '\0') {
          *(undefined1 *)(piVar2 + 1) = 1;
        }
      }
    }
    else {
      cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      *(ulonglong *)(piVar2 + 0x40) =
           *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
      if (cVar4 != '\0') {
        uVar5 = *(ulonglong *)puVar3;
        goto joined_r0x00261e21;
      }
    }
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    *(undefined1 *)(param_1 + 0x3169) = 0;
  }
  else if (*(char *)(param_1 + 0x3168) == '\0') {
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x930);
  }
  *(undefined1 *)(param_1 + 0xe0) = 0;
LAB_00261cff:
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar6 = *(longlong *)(param_1 + 8);
  uVar5 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar6) / 0x38;
  if (*(longlong *)(param_1 + 0x18) != lVar6) {
    lVar6 = lVar6 + 0x20;
    do {
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        (*(code *)puVar3)();
      }
      if (*(longlong *)(lVar6 + -8) != 0) {
        (*(code *)puVar3)();
      }
      lVar6 = lVar6 + 0x38;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


