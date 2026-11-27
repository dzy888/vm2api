// 002f12b0 <craggemini_core[66f3c71560d70857]::server::handle_mcp_call::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::server::handle_mcp_call::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::server::handle_mcp_call::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x200);
  if (cVar1 == '\0') {
    <http[56314f485c23ccf6]::request::Request<axum_core[61c49771464cda0a]::body::Body>>(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::server::read_request<craggemini_core[66f3c71560d70857]::server::ScaleRequest>::_closure_0_>
              (param_1 + 0x208);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::park_call::_closure_0_>
              (param_1 + 0x208);
    if (*(longlong *)(param_1 + 0x420) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
  }
  *(undefined2 *)(param_1 + 0x202) = 0;
  plVar2 = *(longlong **)(param_1 + 0x1f8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
    drop_slow(param_1 + 0x1f8);
  }
  *(undefined1 *)(param_1 + 0x201) = 0;
  return;
}


