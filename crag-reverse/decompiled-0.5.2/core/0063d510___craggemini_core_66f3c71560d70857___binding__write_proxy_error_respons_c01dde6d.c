// 0063d510 <craggemini_core[66f3c71560d70857]::binding::write_proxy_error_response::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063d54e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::write_proxy_error_response::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::write_proxy_error_response::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x90) == '\x03') {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


