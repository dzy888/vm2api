// 00382d80 <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::
<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 auStack_160 [2];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 auStack_b8 [42];
  
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::_closure_0_::_closure_8_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    auStack_b8[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_b8);
    uStack_158 = *(undefined8 *)(param_1 + 0x28);
    uStack_150 = 0;
    auStack_160[0] = 1;
    uStack_148 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_160);
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#8},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
    ::complete(param_1);
  }
  return;
}


