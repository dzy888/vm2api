// 00261ee0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x00261fde */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x15e6) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_>
              (param_1 + 0x10);
    *(undefined2 *)(param_1 + 0x15e2) = 0;
    *(undefined1 *)(param_1 + 0x15e4) = 0;
    if (*(longlong *)(param_1 + 0x1598) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x1570);
    *(undefined1 *)(param_1 + 0x15e5) = 0;
    plVar1 = *(longlong **)(param_1 + 0x1568);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
      drop_slow(param_1 + 0x1568);
    }
    *(undefined1 *)(param_1 + 0x15e0) = 0;
    if (*(longlong *)(param_1 + 0x1550) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    *(undefined1 *)(param_1 + 0x15e1) = 0;
    if (*(longlong *)(param_1 + 0x1538) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x1520) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x1508) != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


