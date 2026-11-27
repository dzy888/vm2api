// 002f0930 <craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::submit_image::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x102);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x110);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <craggemini_core[66f3c71560d70857]::server::dispatch_json_turn::_closure_0_>(param_1 + 0x378);
    *(undefined2 *)(param_1 + 0x108) = 0;
    *(undefined2 *)(param_1 + 0x105) = 0;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x358);
  }
  *(undefined1 *)(param_1 + 0x107) = 0;
  return;
}


