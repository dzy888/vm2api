// 00585260 drop_slow

/* WARNING: Switch with 1 destination removed at 0x005853bc */
/* WARNING: Type propagation algorithm not settling */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>::
drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  lVar2 = *param_1;
  <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop((longlong *)(lVar2 + 0x10));
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::ParsedProxy>
            (lVar2 + 0x40);
  (*(code *)PTR_drop_007990c8)();
  plVar3 = *(longlong **)(lVar2 + 0xe0);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  plVar3 = *(longlong **)(lVar2 + 0xe8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  if ((*(longlong *)(lVar2 + 0x118) != 0) &&
     (cVar4 = (*(code *)PTR_drop_join_handle_fast_00799080)(), cVar4 != '\0')) {
    (*(code *)PTR_drop_join_handle_slow_00799088)();
  }
  plVar3 = *(longlong **)(lVar2 + 0xf0);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(lVar2 + 0xf0);
    plVar3 = *(longlong **)(lVar2 + 0xf8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  else {
    plVar3 = *(longlong **)(lVar2 + 0xf8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  if (lVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(lVar2 + 0xf8);
    plVar3 = *(longlong **)(lVar2 + 0x100);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  else {
    plVar3 = *(longlong **)(lVar2 + 0x100);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  if (lVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(lVar2 + 0x100);
    plVar3 = *(longlong **)(lVar2 + 0x108);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  else {
    plVar3 = *(longlong **)(lVar2 + 0x108);
    LOCK();
    *plVar3 = *plVar3 + -1;
    lVar1 = *plVar3;
    UNLOCK();
  }
  if (lVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(lVar2 + 0x108);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar3 = (longlong *)(lVar2 + 8);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


