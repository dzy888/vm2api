// 005c1650 drop_join_handle_slow

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::drop_join_handle_slow
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::drop_join_handle_slow(longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 local_270 [148];
  
  uVar2 = (*(code *)PTR_transition_to_join_handle_dropped_00799fb8)();
  if ((param_3 & 1) != 0) {
    local_270[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_270);
  }
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR_set_waker_00799fc0)();
  }
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<craggemini_core[66f3c71560d70857]::guard::spawn_stderr_drainer::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
              (param_1);
  }
  return;
}


