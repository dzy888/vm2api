// 002f1890 <craggemini_core[66f3c71560d70857]::server::cancel_with_target::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002f193e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::cancel_with_target::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::cancel_with_target::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0x4c9) == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    if ((*(longlong *)(param_1 + 0xf0) != -1) && (*(longlong *)(param_1 + 0xf0) != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x4c9) == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x238);
    if ((*(longlong *)(param_1 + 0x220) != -1) && (*(longlong *)(param_1 + 0x220) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x4cb) = 0;
    if ((*(longlong *)(param_1 + 0x208) != -1) && (*(longlong *)(param_1 + 0x208) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined2 *)(param_1 + 0x4cc) = 0;
  }
  return;
}


