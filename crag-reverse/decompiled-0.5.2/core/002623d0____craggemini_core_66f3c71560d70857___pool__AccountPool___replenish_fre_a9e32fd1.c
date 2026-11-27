// 002623d0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_fresh_for_model::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = *(char *)(param_1 + 0x110b);
  if (cVar5 == '\x03') {
    if (*(char *)(param_1 + 0x2298) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0x1138);
    }
    goto LAB_002625ef;
  }
  if (cVar5 == '\x04') {
    if (*(char *)(param_1 + 0x3948) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x21b0);
      piVar2 = *(int **)(param_1 + 0x21a8);
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
joined_r0x0026264c:
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
          goto joined_r0x0026264c;
        }
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x3949) = 0;
    }
    else if (*(char *)(param_1 + 0x3948) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1110);
    }
  }
  else {
    if (cVar5 != '\x05') {
      return;
    }
    if (*(char *)(param_1 + 0x41b0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x2a18);
      piVar2 = *(int **)(param_1 + 0x2a10);
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
joined_r0x002626b5:
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
          goto joined_r0x002626b5;
        }
      }
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x41b1) = 0;
    }
    else if (*(char *)(param_1 + 0x41b0) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1978);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1958);
  }
  if (*(char *)(param_1 + 0x1108) != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x10d0);
    for (lVar7 = *(longlong *)(param_1 + 0x10d8) + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar6);
      lVar6 = lVar6 + 0x848;
    }
    if (*(longlong *)(param_1 + 0x10c8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined2 *)(param_1 + 0x1108) = 0;
  *(undefined1 *)(param_1 + 0x110a) = 0;
LAB_002625ef:
  LOCK();
  **(longlong **)(param_1 + 0x30) = **(longlong **)(param_1 + 0x30) + -1;
  UNLOCK();
  return;
}


