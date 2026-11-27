// 003d3020 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::build_acp_failure::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003d307f */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::build_acp_failure::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::build_acp_failure::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 0xd0) == '\x03') {
    if (0 < *(longlong *)(param_1 + 0xa8)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x90)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (0 < *(longlong *)(param_1 + 0x78)) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


