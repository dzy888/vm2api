// 002f17f0 <craggemini_core[66f3c71560d70857]::server::handle_mcp_cancel::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_mcp_cancel::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_mcp_cancel::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x490) == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x200);
    plVar1 = *(longlong **)(param_1 + 0x1f8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x1f8);
    }
    *(undefined1 *)(param_1 + 0x491) = 0;
  }
  return;
}


