// 00264e80 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00265003 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::retry_uncalibrated_accounts::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x152) == '\x03') {
    if (*(char *)(param_1 + 0x1510) == '\x03') {
      <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                (param_1 + 400);
      plVar1 = *(longlong **)(param_1 + 0x188);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x188);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x152) != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
              (param_1 + 0x240);
    plVar1 = *(longlong **)(param_1 + 0x238);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x238);
    }
    <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x158);
    if (*(int *)(param_1 + 0x68) == 2) {
      if ((*(longlong *)(param_1 + 0x70) != -1) && (*(longlong *)(param_1 + 0x70) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((*(longlong *)(param_1 + 0x88) != -1) && (*(longlong *)(param_1 + 0x88) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::boxed::Box<craggemini_core[66f3c71560d70857]::protocol::UpstreamErrorDetail>>>
                (*(undefined8 *)(param_1 + 0xa0));
    }
  }
  *(undefined1 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  lVar4 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(param_1 + 0x151) = 0;
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (*(longlong *)(param_1 + 0x18) != lVar4) {
    uVar3 = (ulonglong)(*(longlong *)(param_1 + 0x18) - lVar4) / 0x18;
    lVar4 = lVar4 + 8;
    do {
      if (*(longlong *)(lVar4 + -8) != 0) {
        (*(code *)puVar2)();
      }
      lVar4 = lVar4 + 0x18;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


