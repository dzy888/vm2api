// 003c60d0 <core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>

/* WARNING: Switch with 1 destination removed at 0x003c61bb */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::{closure#0}::{closure#13}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_::_closure_13_>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x43a8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x170);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x170);
    }
    plVar1 = *(longlong **)(param_1 + 0x178);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    (*(code *)PTR_drop_007990c8)();
  }
  else {
    if (*(char *)(param_1 + 0x43a8) != '\x03') goto LAB_003c61a9;
    if (*(char *)(param_1 + 0x43a0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::replenish_min_warm_with_budget::_closure_0_>
                (param_1 + 0x1a8);
    }
    plVar1 = *(longlong **)(param_1 + 0x170);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x170);
    }
    plVar1 = *(longlong **)(param_1 + 0x178);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x178);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1);
    (*(code *)PTR_drop_007990c8)();
  }
  plVar1 = *(longlong **)(param_1 + 0x180);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
LAB_003c61a9:
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


