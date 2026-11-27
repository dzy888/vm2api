// 00362470 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x0036251d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_>>
          (int *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int *piVar5;
  ulonglong uVar6;
  undefined *puVar7;
  char cVar8;
  
  if (*param_1 == 1) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 4) == 0) {
      return;
    }
    puVar3 = *(undefined8 **)(param_1 + 6);
    pcVar4 = (code *)*puVar3;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)();
    }
    if (puVar3[1] == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)();
    return;
  }
  if (*param_1 != 0) {
    return;
  }
  if ((char)param_1[0x7fe] != '\x03') {
    if ((char)param_1[0x7fe] != '\0') {
      return;
    }
    plVar2 = *(longlong **)(param_1 + 0x214);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x214);
    }
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 2);
    return;
  }
  <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
            (param_1 + 0x218);
  piVar5 = *(int **)(param_1 + 0x216);
  LOCK();
  iVar1 = *piVar5;
  if (iVar1 == 0) {
    *piVar5 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar7 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    *(ulonglong *)(piVar5 + 0x40) =
         *(longlong *)(piVar5 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar5 + 0x40) == 0);
    uVar6 = *(ulonglong *)puVar7;
  }
  else {
    cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    *(ulonglong *)(piVar5 + 0x40) =
         *(longlong *)(piVar5 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar5 + 0x40) == 0);
    if (cVar8 == '\0') goto LAB_00362593;
    uVar6 = *(ulonglong *)puVar7;
  }
  if ((uVar6 & 0x7fffffffffffffff) != 0) {
    cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar8 == '\0') {
      *(undefined1 *)(piVar5 + 1) = 1;
    }
  }
LAB_00362593:
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  plVar2 = *(longlong **)(param_1 + 0x214);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 0x214);
    return;
  }
  return;
}


