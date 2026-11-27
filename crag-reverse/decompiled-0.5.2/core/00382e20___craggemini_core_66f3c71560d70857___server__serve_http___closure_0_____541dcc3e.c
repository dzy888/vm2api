// 00382e20 <craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::
<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>
          (longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 auStack_680 [2];
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined4 auStack_348 [206];
  
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    auStack_348[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_348);
    uStack_678 = *(undefined8 *)(param_1 + 0x28);
    uStack_670 = 0;
    auStack_680[0] = 1;
    uStack_668 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,auStack_680);
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
    ::complete(param_1);
  }
  return;
}


