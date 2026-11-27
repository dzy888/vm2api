// 002f0560 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::calibrate_account::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::calibrate_account::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::calibrate_account::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x03') {
    if (*(char *)(param_1 + 0x13f0) == '\x03') {
      <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
                (param_1 + 0x70);
      plVar1 = *(longlong **)(param_1 + 0x68);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
        ::drop_slow(param_1 + 0x68);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x30) == '\x04') {
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::recycle_stale_proxy_slots::_closure_0_>
              (param_1 + 0x120);
    plVar1 = *(longlong **)(param_1 + 0x118);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>>::
      drop_slow(param_1 + 0x118);
    }
    <craggemini_core[66f3c71560d70857]::binding::CalibrationProof>(param_1 + 0x38);
    return;
  }
  return;
}


