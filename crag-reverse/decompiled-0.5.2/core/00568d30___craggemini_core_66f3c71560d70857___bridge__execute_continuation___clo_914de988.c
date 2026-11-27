// 00568d30 <craggemini_core[66f3c71560d70857]::bridge::execute_continuation::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::execute_continuation::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::execute_continuation::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0xbe9) == '\0') {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    return;
  }
  if (*(char *)(param_1 + 0xbe9) == '\x03') {
    <craggemini_core[66f3c71560d70857]::bridge::run_loop::_closure_0_>(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x68) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x60);
    if (plVar1 != (longlong *)0x0) {
      <tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x60);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
        ::drop_slow(param_1 + 0x60);
      }
    }
    *(undefined1 *)(param_1 + 0xbe8) = 0;
  }
  return;
}


