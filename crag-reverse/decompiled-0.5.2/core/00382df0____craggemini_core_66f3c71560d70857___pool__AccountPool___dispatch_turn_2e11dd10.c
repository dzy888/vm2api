// 00382df0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 auStack_31a0 [2];
  undefined8 uStack_3198;
  undefined8 uStack_3190;
  undefined8 uStack_3188;
  undefined8 uStack_3010;
  undefined8 uStack_2010;
  undefined4 auStack_18d8 [562];
  undefined8 uStack_1010;
  
  uStack_1010 = 0;
  uStack_2010 = 0;
  uStack_3010 = 0;
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::_closure_0_::_closure_14_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    auStack_18d8[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_18d8);
    uStack_3198 = *(undefined8 *)(param_1 + 0x28);
    uStack_3190 = 0;
    auStack_31a0[0] = 1;
    uStack_3188 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_31a0);
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::dispatch_turn_acp::{closure#0}::{closure#14},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::complete(param_1);
  }
  return;
}


