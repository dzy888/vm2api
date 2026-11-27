// 0055ad00 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0055add3 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  if (*(char *)(param_1 + 0x18c8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x180);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x180);
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x188);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x10);
    (*(code *)PTR_drop_007990c8)();
  }
  else {
    if (*(char *)(param_1 + 0x18c8) != '\x03') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::prewarm_acp_worker_if_needed::_closure_0_>
              (param_1 + 0x1a0);
    plVar1 = *(longlong **)(param_1 + 0x180);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x180);
    }
    plVar1 = *(longlong **)(param_1 + 0x188);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x188);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(param_1 + 0x10);
    (*(code *)PTR_drop_007990c8)();
  }
  plVar1 = *(longlong **)(param_1 + 400);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 400);
  plVar1 = *(longlong **)(lVar2 + 0x30);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  puVar3 = PTR_drop_slow_007990d0;
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x20);
    lVar5 = 1 - *(longlong *)(lVar2 + 0x28);
    do {
      plVar1 = (longlong *)*puVar4;
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)puVar3)();
      }
      puVar4 = puVar4 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 1);
  }
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


