// 002e9210 <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
          (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = param_1 + 0xe;
  <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(plVar2);
  plVar1 = (longlong *)*plVar2;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
      ::drop_slow(plVar2);
    }
  }
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


