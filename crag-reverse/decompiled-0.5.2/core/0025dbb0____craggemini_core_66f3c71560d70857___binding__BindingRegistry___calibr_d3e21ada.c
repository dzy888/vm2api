// 0025dbb0 <<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::calibrate::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::calibrate::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::BindingRegistry>::calibrate::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x13b8) == '\x03') {
    <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
              (param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>>
      ::drop_slow(param_1 + 0x30);
      return;
    }
  }
  return;
}


