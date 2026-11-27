// 005b86d0 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::complete
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::complete(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_15e0 [370];
  undefined8 local_1018;
  
  local_1018 = 0;
  bVar2 = (*(code *)PTR_transition_to_complete_00799fe0)();
  if ((bVar2 & 8) == 0) {
    local_15e0[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_15e0);
  }
  else if ((bVar2 & 0x10) != 0) {
    (*(code *)PTR_wake_join_00799fe8)();
    bVar2 = (*(code *)PTR_unset_waker_after_complete_00799ff0)();
    if ((bVar2 & 8) == 0) {
      (*(code *)PTR_set_waker_00799fc0)();
    }
  }
  lVar1 = (*(code *)PTR_release_00799ff8)();
  cVar3 = (*(code *)PTR_transition_to_terminal_0079a000)();
  if (cVar3 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
              (param_1,2 - (ulonglong)(lVar1 == 0));
  }
  return;
}


