// 0049a3f0 <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerStats>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerStats>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerStats>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities>(param_1 + 0x40);
  return;
}


