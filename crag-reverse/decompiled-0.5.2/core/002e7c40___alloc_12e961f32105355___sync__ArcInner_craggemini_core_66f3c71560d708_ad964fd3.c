// 002e7c40 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  
  <craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::stop((longlong *)(param_1 + 0x10))
  ;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x40);
  (*(code *)PTR_drop_007990c8)();
  plVar1 = *(longlong **)(param_1 + 0xe0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d0)();
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990d8)();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    cVar2 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar2 != '\0') {
      (*(code *)PTR_drop_join_handle_slow_00799088)();
    }
  }
  plVar1 = *(longlong **)(param_1 + 0xf0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0xf0);
  }
  plVar1 = *(longlong **)(param_1 + 0xf8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0xf8);
  }
  plVar1 = *(longlong **)(param_1 + 0x100);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x100);
  }
  plVar1 = *(longlong **)(param_1 + 0x108);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x108);
    return;
  }
  return;
}


