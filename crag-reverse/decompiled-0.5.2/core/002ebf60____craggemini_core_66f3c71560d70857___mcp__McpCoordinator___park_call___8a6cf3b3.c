// 002ebf60 <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::park_call::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002ec046 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::park_call::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::park_call::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = (char)param_1[0x14];
  if (cVar2 == '\0') {
    <serde_json[dc3825464c436029]::value::Value>(param_1 + 3);
    if ((*param_1 != -1) && (*param_1 != 0)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else {
    if (cVar2 == '\x03') {
      if ((char)param_1[0x42] == '\x03') {
        if ((char)param_1[0x41] == '\x03') {
          <<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::reserve_inner::_closure_0_>
                    (param_1 + 0x33);
        }
        if (param_1[0x24] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (param_1[0x27] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (param_1[0x2a] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x2d);
        *(undefined1 *)((longlong)param_1 + 0x211) = 0;
      }
      else if ((char)param_1[0x42] == '\0') {
        if (param_1[0x16] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (param_1[0x19] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (param_1[0x1c] != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x1f);
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
                (param_1 + 0x15);
    }
    *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
    plVar1 = param_1 + 0x13;
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(plVar1);
    plVar3 = (longlong *)*plVar1;
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(plVar1);
    }
    if (*(char *)((longlong)param_1 + 0xa4) != '\0') {
      plVar1 = param_1 + 0x15;
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(plVar1);
      plVar3 = (longlong *)*plVar1;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
          ::drop_slow(plVar1);
        }
      }
    }
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
    if (param_1[0x10] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined2 *)((longlong)param_1 + 0xa2) = 0;
    *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  }
  return;
}


