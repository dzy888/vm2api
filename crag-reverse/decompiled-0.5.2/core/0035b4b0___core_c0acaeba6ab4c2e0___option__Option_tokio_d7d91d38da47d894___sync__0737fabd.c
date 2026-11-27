// 0035b4b0 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop();
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(param_1);
      return;
    }
  }
  return;
}


