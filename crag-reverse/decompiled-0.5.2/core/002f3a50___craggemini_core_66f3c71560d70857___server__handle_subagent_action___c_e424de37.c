// 002f3a50 <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_subagent_action::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_subagent_action::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x100);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x108);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(longlong *)(param_1 + 0x108) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if ((*(longlong *)(param_1 + 0x120) != -1) && (*(longlong *)(param_1 + 0x120) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      *(undefined1 *)(param_1 + 0x101) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x101) = 0;
  return;
}


