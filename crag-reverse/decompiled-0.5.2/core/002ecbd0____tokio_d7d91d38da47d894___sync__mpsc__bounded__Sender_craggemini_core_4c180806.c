// 002ecbd0 <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::send::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::send::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::send::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((char)param_1[0x2c] == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 9);
    return;
  }
  if ((char)param_1[0x2c] == '\x03') {
    if ((char)param_1[0x2b] == '\x03') {
      <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::reserve_inner::_closure_0_>
                (param_1 + 0x1d);
    }
    if (param_1[0xe] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[0x11] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (param_1[0x14] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x17);
    *(undefined1 *)((longlong)param_1 + 0x161) = 0;
  }
  return;
}


