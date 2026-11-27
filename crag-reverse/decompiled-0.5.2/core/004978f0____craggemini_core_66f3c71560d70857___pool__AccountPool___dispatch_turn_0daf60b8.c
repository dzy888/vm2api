// 004978f0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>

/* WARNING: Switch with 1 destination removed at 0x00497ab7 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_13_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  if (*(char *)(param_1 + 0x43a8) == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x170);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x170);
    }
    plVar2 = *(longlong **)(param_1 + 0x178);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    (*(code *)PTR_drop_007990c8)();
    goto LAB_00497aa2;
  }
  if (*(char *)(param_1 + 0x43a8) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x43a0) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x12f0);
    if (cVar1 == '\x05') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
                (param_1 + 0x1b60);
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x1b40);
LAB_004979bd:
      if (*(char *)(param_1 + 0x12f1) != '\0') {
        lVar4 = *(longlong *)(param_1 + 0x12e0);
        for (lVar5 = *(longlong *)(param_1 + 0x12e8) + 1; lVar5 != 1; lVar5 = lVar5 + -1) {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar4);
          lVar4 = lVar4 + 0x848;
        }
        if (*(longlong *)(param_1 + 0x12d8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
      }
      *(undefined2 *)(param_1 + 0x12f1) = 0;
      *(undefined1 *)(param_1 + 0x12f3) = 0;
    }
    else {
      if (cVar1 == '\x04') {
        <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_now::_closure_0_>
                  (param_1 + 0x12f8);
        goto LAB_004979bd;
      }
      if (cVar1 != '\x03') goto LAB_00497a58;
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn::_closure_0_>(param_1 + 0x12f8);
    }
    LOCK();
    **(longlong **)(param_1 + 0x240) = **(longlong **)(param_1 + 0x240) + -1;
    UNLOCK();
    if (*(longlong *)(param_1 + 0x210) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
  }
LAB_00497a58:
  plVar2 = *(longlong **)(param_1 + 0x170);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
    drop_slow(param_1 + 0x170);
  }
  plVar2 = *(longlong **)(param_1 + 0x178);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
    drop_slow(param_1 + 0x178);
  }
  <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
  (*(code *)PTR_drop_007990c8)();
LAB_00497aa2:
  plVar2 = *(longlong **)(param_1 + 0x180);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x180);
  plVar2 = *(longlong **)(lVar4 + 0x30);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar3 = PTR_drop_slow_007990d0;
  if (*(longlong *)(lVar4 + 0x28) != 0) {
    puVar6 = *(undefined8 **)(lVar4 + 0x20);
    lVar5 = 1 - *(longlong *)(lVar4 + 0x28);
    do {
      plVar2 = (longlong *)*puVar6;
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)puVar3)();
      }
      puVar6 = puVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(lVar4 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
  }
  if (lVar4 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar4 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


