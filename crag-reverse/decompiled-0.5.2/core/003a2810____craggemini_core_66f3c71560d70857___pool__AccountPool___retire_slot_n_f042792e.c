// 003a2810 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x2838) == '\0') {
    <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x2838) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x2140)) {
  case 0:
    lVar7 = param_1 + 0x10a0;
    goto LAB_003a295d;
  default:
    goto switchD_003a284e_caseD_1;
  case 3:
    if (*(longlong *)(param_1 + 0x2148) != 2) {
      if (*(longlong *)(param_1 + 0x2148) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x2150);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x2150);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x2158);
    }
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x2148) != 2) {
      if (*(longlong *)(param_1 + 0x2148) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x2150);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x2150);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x2158);
    }
    break;
  case 5:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x2150);
    *(undefined1 *)(param_1 + 0x2142) = 0;
    break;
  case 6:
    if (*(char *)(param_1 + 0x2630) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x2248);
    }
    else if (*(char *)(param_1 + 0x2630) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x2148);
    }
    *(undefined1 *)(param_1 + 0x2141) = 0;
  }
  lVar7 = param_1 + 0x18f0;
LAB_003a295d:
  <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar7);
switchD_003a284e_caseD_1:
  piVar3 = *(int **)(param_1 + 0x1098);
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
    if (cVar6 == '\0') goto LAB_003a29ba;
    uVar4 = *(ulonglong *)puVar5;
  }
  if ((uVar4 & 0x7fffffffffffffff) != 0) {
    cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    if (cVar6 == '\0') {
      *(undefined1 *)(piVar3 + 1) = 1;
    }
  }
LAB_003a29ba:
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *(undefined1 *)(param_1 + 0x2839) = 0;
  return;
}


