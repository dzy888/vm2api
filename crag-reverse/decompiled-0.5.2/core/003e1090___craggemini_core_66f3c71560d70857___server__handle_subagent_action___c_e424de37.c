// 003e1090 <craggemini_core[66f3c71560d70857]::server::handle_subagent_action::{closure#0}>

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
    if (*(char *)(param_1 + 0x390) == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x238) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x238) + 0x18))();
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<axum[743f01f147681d98]::body::to_bytes::_closure_0_>>
                (param_1 + 600);
      (*(code *)PTR_drop_007994f0)();
      *(undefined1 *)(param_1 + 0x392) = 0;
      *(undefined1 *)(param_1 + 0x101) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x390) == '\0') {
      <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>
                (param_1 + 0x108);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (*(longlong *)(param_1 + 0x108) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x120)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
  }
  *(undefined1 *)(param_1 + 0x101) = 0;
  return;
}


