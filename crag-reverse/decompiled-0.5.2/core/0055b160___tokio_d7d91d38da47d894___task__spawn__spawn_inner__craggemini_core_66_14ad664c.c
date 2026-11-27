// 0055b160 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  
  if (*(char *)(param_1 + 0x2000) != '\x03') {
    if (*(char *)(param_1 + 0x2000) != '\0') {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x858);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x858);
    }
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x10);
    return;
  }
  <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
            (param_1 + 0x868);
  piVar3 = *(int **)(param_1 + 0x860);
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
  }
  else {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar3 + 0x40) =
         *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
    if (cVar6 == '\0') goto LAB_0055b222;
    uVar4 = *(ulonglong *)puVar5;
  }
  if ((uVar4 & 0x7fffffffffffffff) != 0) {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar6 == '\0') {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
  }
LAB_0055b222:
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  plVar2 = *(longlong **)(param_1 + 0x858);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 0x858);
    return;
  }
  return;
}


