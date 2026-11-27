// 0036f320 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0036f565 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = *(char *)(param_1 + 0x1148);
  if (cVar5 == '\x03') {
    if (*(char *)(param_1 + 0x22d8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x1178);
    }
    goto LAB_0036f53f;
  }
  if (cVar5 == '\x04') {
    if (*(char *)(param_1 + 0x3988) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x21f0);
      piVar2 = *(int **)(param_1 + 0x21e8);
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
joined_r0x0036f5c0:
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
          goto joined_r0x0036f5c0;
        }
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x3989) = 0;
    }
    else if (*(char *)(param_1 + 0x3988) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1150);
    }
  }
  else {
    if (cVar5 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x41f0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x2a58);
      piVar2 = *(int **)(param_1 + 0x2a50);
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
joined_r0x0036f629:
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
          goto joined_r0x0036f629;
        }
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x41f1) = 0;
    }
    else if (*(char *)(param_1 + 0x41f0) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x19b8);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1998);
  }
  if (*(char *)(param_1 + 0x1149) != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x1138);
    for (lVar7 = *(longlong *)(param_1 + 0x1140) + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar6);
      lVar6 = lVar6 + 0x848;
    }
    if (*(longlong *)(param_1 + 0x1130) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)(param_1 + 0x1149) = 0;
  *(undefined1 *)(param_1 + 0x114b) = 0;
LAB_0036f53f:
  LOCK();
  **(longlong **)(param_1 + 0x98) = **(longlong **)(param_1 + 0x98) + -1;
  UNLOCK();
  if (*(longlong *)(param_1 + 0x68) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


