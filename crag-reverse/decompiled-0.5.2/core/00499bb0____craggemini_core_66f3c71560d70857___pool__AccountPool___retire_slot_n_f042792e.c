// 00499bb0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  
  if (*(char *)(param_1 + 0x2838) == '\0') {
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2838) != '\x03') {
    return;
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
  }
  else {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar2 + 0x40) =
         *(longlong *)(piVar2 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar2 + 0x40) == 0);
    if (cVar5 == '\0') goto LAB_00499c33;
    uVar3 = *(ulonglong *)puVar4;
  }
  if ((uVar3 & 0x7fffffffffffffff) != 0) {
    cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar5 == '\0') {
      *(undefined1 *)(piVar2 + 1) = 1;
    }
  }
LAB_00499c33:
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x2839) = 0;
  return;
}


