// 005bc610 drop_join_handle_slow

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::drop_join_handle_slow
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>
::drop_join_handle_slow(longlong param_1,undefined4 *param_2,ulonglong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 local_30f8 [54];
  undefined8 local_3020;
  undefined8 local_2020;
  undefined8 local_1020;
  
  local_1020 = 0;
  local_2020 = 0;
  local_3020 = 0;
  uVar2 = (*(code *)PTR_transition_to_join_handle_dropped_00799fb8)();
  if ((param_3 & 1) != 0) {
    local_30f8[0] = 2;
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
              (param_1 + 0x30);
    param_2 = local_30f8;
    (*(code *)PTR_memcpy_00799008)(param_4,0x30d8);
    (*(code *)PTR_drop_007998b0)();
  }
  if ((uVar2 & 1) != 0) {
    param_2 = (undefined4 *)0x0;
    (*(code *)PTR_set_waker_00799fc0)();
  }
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>>
              (param_1,param_2);
  }
  return;
}


