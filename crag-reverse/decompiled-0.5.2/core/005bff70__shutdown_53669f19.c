// 005bff70 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::shutdown
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::shutdown(longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 local_1050 [2];
  undefined8 local_1048;
  undefined8 local_1040;
  undefined8 local_1038;
  undefined8 local_1010;
  undefined4 local_830 [520];
  
  local_1010 = 0;
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    local_830[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_830);
    local_1048 = *(undefined8 *)(param_1 + 0x28);
    local_1040 = 0;
    local_1050[0] = 1;
    local_1038 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_1050);
    complete(param_1);
  }
  return;
}


