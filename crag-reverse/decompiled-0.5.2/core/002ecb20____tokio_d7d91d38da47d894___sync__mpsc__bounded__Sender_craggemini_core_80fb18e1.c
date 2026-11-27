// 002ecb20 <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::reserve_inner::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::reserve_inner::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::reserve_inner::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x21) == '\x04') {
    (*(code *)PTR_drop_00799100)();
    if (*(longlong *)(param_1 + 0x38) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))();
    }
    cVar1 = (*(code *)PTR_is_closed_00799108)();
    if (cVar1 != '\0') {
      cVar1 = (*(code *)PTR_is_idle_00799110)();
      if (cVar1 != '\0') {
        (*(code *)PTR_wake_00799118)();
      }
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}


