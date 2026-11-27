// 0035fc20 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>>

/* WARNING: Switch with 1 destination removed at 0x0035fd5c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_13_>>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) == 0) || (*(longlong *)(param_1 + 4) == 0)) {
      return;
    }
    puVar3 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)();
    }
    if (puVar3[1] == 0) {
      return;
    }
    uVar4 = puVar3[2];
    goto LAB_0035fd54;
  }
  if (*param_1 != 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  if (*(char *)(lVar1 + 0x43a8) == '\0') {
    plVar2 = *(longlong **)(lVar1 + 0x170);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar1 + 0x170);
    }
    plVar2 = *(longlong **)(lVar1 + 0x178);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar1);
    (*(code *)PTR_drop_007990c8)();
LAB_0035fd38:
    plVar2 = *(longlong **)(lVar1 + 0x180);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  else if (*(char *)(lVar1 + 0x43a8) == '\x03') {
    if (*(char *)(lVar1 + 0x43a0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
                (lVar1 + 0x1a8);
    }
    plVar2 = *(longlong **)(lVar1 + 0x170);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar1 + 0x170);
    }
    plVar2 = *(longlong **)(lVar1 + 0x178);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar1);
    (*(code *)PTR_drop_007990c8)();
    goto LAB_0035fd38;
  }
  uVar4 = 8;
LAB_0035fd54:
  (*(code *)PTR_free_0079adc8)(param_4,uVar4);
  return;
}


