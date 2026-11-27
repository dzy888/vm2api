// 0025b170 <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::sync_tools_and_wait_result::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x68) == '\x03') {
    if (*(char *)(param_1 + 0x180) == '\x03') {
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::notify::Notified>>
                (param_1 + 0xd0);
      *(undefined1 *)(param_1 + 0x181) = 0;
    }
  }
  else if (*(char *)(param_1 + 0x68) == '\x04') {
    if (*(char *)(param_1 + 0x70) == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x78);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x78);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x80);
    return;
  }
  return;
}


