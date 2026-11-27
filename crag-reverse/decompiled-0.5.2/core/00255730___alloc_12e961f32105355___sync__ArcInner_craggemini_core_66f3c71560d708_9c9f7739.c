// 00255730 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::server::Runtime>>

/* WARNING: Switch with 1 destination removed at 0x002557f0 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::server::Runtime>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::server::Runtime>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 unaff_R14;
  
  <craggemini_core[66f3c71560d70857]::Config>(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 0x2e0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>::
    drop_slow(param_1 + 0x2e0);
  }
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::server::Registry>>
            (param_1 + 800);
  <craggemini_core[66f3c71560d70857]::resume::SessionStore>(param_1 + 0x430);
  <std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>>
            (param_1 + 0x4e0);
  plVar1 = *(longlong **)(param_1 + 0x568);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::shm::ShmRingOwner>>::
      drop_slow(param_1 + 0x568);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x2e8);
  }
  plVar1 = *(longlong **)(param_1 + 0x2f0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::PoolManager>>::
    drop_slow(param_1 + 0x2f0);
  }
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0x2f8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x2f8);
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
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14);
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


