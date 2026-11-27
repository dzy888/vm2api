// 00571840 <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x8a) == '\x03') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x118);
    if (*(longlong *)(param_1 + 0xa8) != 2) {
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0xb0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0xb0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xb8);
    }
  }
  else {
    if (*(char *)(param_1 + 0x8a) != '\x04') {
      return;
    }
    <craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_>(param_1 + 0xa8);
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  *(undefined1 *)(param_1 + 0x89) = 0;
  return;
}


