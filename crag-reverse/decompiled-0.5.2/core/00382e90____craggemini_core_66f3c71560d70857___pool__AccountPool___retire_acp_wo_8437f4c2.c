// 00382e90 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 auStack_1050 [2];
  undefined8 uStack_1048;
  undefined8 uStack_1040;
  undefined8 uStack_1038;
  undefined8 uStack_1010;
  undefined4 auStack_830 [520];
  
  uStack_1010 = 0;
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    auStack_830[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_830);
    uStack_1048 = *(undefined8 *)(param_1 + 0x28);
    uStack_1040 = 0;
    auStack_1050[0] = 1;
    uStack_1038 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_1050);
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_acp_worker_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::complete(param_1);
  }
  return;
}


