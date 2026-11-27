// 003c5a10 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>

/* WARNING: Switch with 1 destination removed at 0x003c5d4a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>>>
          (longlong param_1)

{
  int iVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(char *)(param_1 + 0x4358) == '\0') {
    plVar4 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x188);
    }
    plVar4 = *(longlong **)(param_1 + 400);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 400);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    (*(code *)PTR_drop_007990c8)();
  }
  else {
    if (*(char *)(param_1 + 0x4358) != '\x03') goto LAB_003c5d34;
    cVar6 = *(char *)(param_1 + 0x12ab);
    if (cVar6 == '\x05') {
      if (*(char *)(param_1 + 0x4350) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                  (param_1 + 0x2bb8);
        piVar2 = *(int **)(param_1 + 0x2bb0);
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
joined_r0x003c5e04:
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
            goto joined_r0x003c5e04;
          }
        }
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar1 == 2) {
          (*(code *)PTR_wake_00799010)();
        }
        *(undefined1 *)(param_1 + 0x4351) = 0;
      }
      else if (*(char *)(param_1 + 0x4350) == '\0') {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x1b18);
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x1af8);
LAB_003c5c46:
      if (*(char *)(param_1 + 0x12a8) != '\0') {
        lVar7 = *(longlong *)(param_1 + 0x1270);
        for (lVar8 = *(longlong *)(param_1 + 0x1278) + 1; lVar8 != 1; lVar8 = lVar8 + -1) {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar7);
          lVar7 = lVar7 + 0x848;
        }
        if (*(longlong *)(param_1 + 0x1268) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)();
        }
      }
      *(undefined2 *)(param_1 + 0x12a8) = 0;
      *(undefined1 *)(param_1 + 0x12aa) = 0;
LAB_003c5caf:
      LOCK();
      **(longlong **)(param_1 + 0x1d0) = **(longlong **)(param_1 + 0x1d0) + -1;
      UNLOCK();
    }
    else {
      if (cVar6 == '\x04') {
        if (*(char *)(param_1 + 0x3ae8) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (param_1 + 0x2350);
          piVar2 = *(int **)(param_1 + 0x2348);
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
joined_r0x003c5da9:
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
              goto joined_r0x003c5da9;
            }
          }
          LOCK();
          iVar1 = *piVar2;
          *piVar2 = 0;
          UNLOCK();
          if (iVar1 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          *(undefined1 *)(param_1 + 0x3ae9) = 0;
        }
        else if (*(char *)(param_1 + 0x3ae8) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x12b0);
        }
        goto LAB_003c5c46;
      }
      if (cVar6 == '\x03') {
        if (*(char *)(param_1 + 0x2438) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                    (param_1 + 0x12d8);
        }
        goto LAB_003c5caf;
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x188);
    }
    plVar4 = *(longlong **)(param_1 + 400);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 400);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    if (*(longlong *)(param_1 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    (*(code *)PTR_drop_007990c8)();
  }
  plVar4 = *(longlong **)(param_1 + 0x198);
  LOCK();
  *plVar4 = *plVar4 + -1;
  UNLOCK();
  if (*plVar4 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
LAB_003c5d34:
  (*(code *)PTR_free_0079adc8)();
  return;
}


