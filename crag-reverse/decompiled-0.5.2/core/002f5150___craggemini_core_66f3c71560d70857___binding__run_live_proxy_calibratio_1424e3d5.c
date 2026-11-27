// 002f5150 <craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::run_live_proxy_calibration::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x8a) == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>>
              (param_1 + 0xa8);
  }
  else {
    if (*(char *)(param_1 + 0x8a) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x137c) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_::_closure_0_>>
                (param_1 + 0xe0);
    }
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


