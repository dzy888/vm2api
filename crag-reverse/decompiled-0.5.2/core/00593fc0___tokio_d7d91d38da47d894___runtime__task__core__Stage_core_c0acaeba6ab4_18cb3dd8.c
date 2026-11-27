// 00593fc0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>>

/* WARNING: Switch with 1 destination removed at 0x0059426a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#7}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_7_>>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*param_1 != 0) {
    if (((*param_1 != 1) || (*(longlong *)(param_1 + 2) == 0)) || (*(longlong *)(param_1 + 4) == 0))
    {
      return;
    }
    puVar2 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)();
    }
    if (puVar2[1] == 0) {
      return;
    }
    uVar5 = puVar2[2];
    goto LAB_0059425e;
  }
  lVar3 = *(longlong *)(param_1 + 2);
  if (*(char *)(lVar3 + 0x4358) == '\0') {
    plVar4 = *(longlong **)(lVar3 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar3 + 0x188);
    }
    plVar4 = *(longlong **)(lVar3 + 400);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar3 + 400);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar3);
    if (*(longlong *)(lVar3 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    (*(code *)PTR_drop_007990c8)();
LAB_00594242:
    plVar4 = *(longlong **)(lVar3 + 0x198);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  else if (*(char *)(lVar3 + 0x4358) == '\x03') {
    cVar1 = *(char *)(lVar3 + 0x12ab);
    if (cVar1 == '\x05') {
      if (*(char *)(lVar3 + 0x4350) == '\x03') {
        <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                  (lVar3 + 0x2bb8);
        <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(lVar3 + 0x2bb0);
        *(undefined1 *)(lVar3 + 0x4351) = 0;
      }
      else if (*(char *)(lVar3 + 0x4350) == '\0') {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar3 + 0x1b18);
      }
      <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(lVar3 + 0x1af8);
LAB_0059415e:
      if (*(char *)(lVar3 + 0x12a8) != '\0') {
        lVar6 = *(longlong *)(lVar3 + 0x1270);
        for (lVar7 = *(longlong *)(lVar3 + 0x1278) + 1; lVar7 != 1; lVar7 = lVar7 + -1) {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar6);
          lVar6 = lVar6 + 0x848;
        }
        if (*(longlong *)(lVar3 + 0x1268) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
        }
      }
      *(undefined2 *)(lVar3 + 0x12a8) = 0;
      *(undefined1 *)(lVar3 + 0x12aa) = 0;
LAB_005941cf:
      LOCK();
      **(longlong **)(lVar3 + 0x1d0) = **(longlong **)(lVar3 + 0x1d0) + -1;
      UNLOCK();
    }
    else {
      if (cVar1 == '\x04') {
        if (*(char *)(lVar3 + 0x3ae8) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                    (lVar3 + 0x2350);
          <craggemini_core[66f3c71560d70857]::pool::LeavingGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
          ::drop(lVar3 + 0x2348);
          *(undefined1 *)(lVar3 + 0x3ae9) = 0;
        }
        else if (*(char *)(lVar3 + 0x3ae8) == '\0') {
          <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar3 + 0x12b0);
        }
        goto LAB_0059415e;
      }
      if (cVar1 == '\x03') {
        if (*(char *)(lVar3 + 0x2438) == '\x03') {
          <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                    (lVar3 + 0x12d8);
        }
        goto LAB_005941cf;
      }
    }
    plVar4 = *(longlong **)(lVar3 + 0x188);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar3 + 0x188);
    }
    plVar4 = *(longlong **)(lVar3 + 400);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar3 + 400);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar3);
    if (*(longlong *)(lVar3 + 0x170) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    (*(code *)PTR_drop_007990c8)();
    goto LAB_00594242;
  }
  uVar5 = 8;
LAB_0059425e:
  (*(code *)PTR_free_0079adc8)(param_4,uVar5);
  return;
}


