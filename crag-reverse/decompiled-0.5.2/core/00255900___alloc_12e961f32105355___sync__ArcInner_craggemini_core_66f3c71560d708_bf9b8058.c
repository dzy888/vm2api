// 00255900 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(param_1 + 0xe8);
  <craggemini_core[66f3c71560d70857]::binding::ParsedProxy>(param_1 + 0x288);
  if (*(longlong *)(param_1 + 0x308) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 800);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 800);
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x328);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>::
      drop_slow(param_1 + 0x328);
      return;
    }
  }
  return;
}


