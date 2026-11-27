// 0040ab30 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::set_stage
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::set_stage
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#9},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::set_stage(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  (*(code *)PTR_enter_007998a8)();
  if (*(int *)(param_1 + 0x10) == 1) {
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      puVar1 = *(undefined8 **)(param_1 + 0x28);
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      if (puVar1[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
      }
    }
  }
  else if (*(int *)(param_1 + 0x10) == 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_9_>
              (param_1 + 0x18);
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0x1050);
  (*(code *)PTR_drop_007998b0)();
  return;
}


