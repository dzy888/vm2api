// 005850a0 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00585146 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>::
drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(lVar1 + 0xe8);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::ParsedProxy>
            (lVar1 + 0x288);
  if (*(longlong *)(lVar1 + 0x308) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(lVar1 + 0x10);
  plVar2 = *(longlong **)(lVar1 + 800);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(lVar1 + 800);
    }
  }
  plVar2 = *(longlong **)(lVar1 + 0x328);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::license::LicenseGate>>::
      drop_slow(lVar1 + 0x328);
    }
  }
  if (lVar1 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar1 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


