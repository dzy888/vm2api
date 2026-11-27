// 005b97b0 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::shutdown
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::shutdown(longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 local_350 [2];
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined4 local_1b0 [104];
  
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    local_1b0[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_1b0);
    local_348 = *(undefined8 *)(param_1 + 0x28);
    local_340 = 0;
    local_350[0] = 1;
    local_338 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_350);
    complete(param_1);
  }
  return;
}


