// 00594520 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>>

/* WARNING: Switch with 1 destination removed at 0x00594650 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_13_>>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0) {
    if (((*param_1 != 1) || (*(longlong *)(param_1 + 2) == 0)) || (*(longlong *)(param_1 + 4) == 0))
    {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] == 0) {
      return;
    }
    uVar4 = puVar1[2];
    goto LAB_00594648;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (*(char *)(lVar2 + 0x43a8) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x170);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar2 + 0x170);
    }
    plVar3 = *(longlong **)(lVar2 + 0x178);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar2 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar2);
    (*(code *)PTR_drop_007990c8)();
LAB_0059462c:
    plVar3 = *(longlong **)(lVar2 + 0x180);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  else if (*(char *)(lVar2 + 0x43a8) == '\x03') {
    if (*(char *)(lVar2 + 0x43a0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
                (lVar2 + 0x1a8);
    }
    plVar3 = *(longlong **)(lVar2 + 0x170);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar2 + 0x170);
    }
    plVar3 = *(longlong **)(lVar2 + 0x178);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar2 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar2);
    (*(code *)PTR_drop_007990c8)();
    goto LAB_0059462c;
  }
  uVar4 = 8;
LAB_00594648:
  (*(code *)PTR_free_0079adc8)(param_4,uVar4);
  return;
}


