// 005c1f40 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::guard::GuardHandle
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::complete
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::complete(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 local_160 [82];
  
  bVar2 = (*(code *)PTR_transition_to_complete_00799fe0)();
  if ((bVar2 & 8) == 0) {
    local_160[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_160);
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
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
              (param_1,2 - (ulonglong)(lVar1 == 0));
  }
  return;
}


