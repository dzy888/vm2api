// 00595490 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>>>

/* WARNING: Switch with 1 destination removed at 0x0059561b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::_closure_0_>>>>
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
    goto LAB_00595613;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  if (*(char *)(lVar2 + 0x71d0) == '\0') {
    plVar3 = *(longlong **)(lVar2 + 0x538);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar2 + 0x538);
    }
    plVar3 = *(longlong **)(lVar2 + 0x540);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(lVar2 + 0x540);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar2);
    if (*(longlong *)(lVar2 + 0x520) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <craggemini_core[66f3c71560d70857]::server::Turn>(lVar2 + 0x170);
    plVar3 = *(longlong **)(lVar2 + 0x548);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>>>
      ::drop_slow(lVar2 + 0x548);
    }
    plVar3 = *(longlong **)(lVar2 + 0x550);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::resume::SignatureCache>>>
      ::drop_slow(lVar2 + 0x550);
    }
    (*(code *)PTR_drop_007990c8)();
LAB_005955f7:
    plVar3 = *(longlong **)(lVar2 + 0x558);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_drop_slow_007990d0)();
    }
  }
  else if (*(char *)(lVar2 + 0x71d0) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_with_context::_closure_0_>
              (lVar2 + 0x570);
    plVar3 = *(longlong **)(lVar2 + 0x538);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(lVar2 + 0x538);
    }
    <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>(lVar2);
    if (*(longlong *)(lVar2 + 0x520) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    (*(code *)PTR_drop_007990c8)();
    goto LAB_005955f7;
  }
  uVar4 = 8;
LAB_00595613:
  (*(code *)PTR_free_0079adc8)(param_4,uVar4);
  return;
}


