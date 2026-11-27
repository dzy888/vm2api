// 002f28b0 <craggemini_core[66f3c71560d70857]::server::handle_live_control::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_live_control::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_live_control::_closure_0_>(longlong param_1)

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
    *(undefined4 *)(param_1 + 0x102) = 0;
    return;
  }
  if (cVar1 == '\x04') {
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 400) != 0) {
      (**(code **)(*(longlong *)(param_1 + 400) + 0x18))();
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,craggemini_core[66f3c71560d70857]::protocol::Failure>>>>
              (param_1 + 0x1b0);
    *(undefined1 *)(param_1 + 0x101) = 0;
    *(undefined2 *)(param_1 + 0x106) = 0;
    *(undefined4 *)(param_1 + 0x102) = 0;
  }
  return;
}


