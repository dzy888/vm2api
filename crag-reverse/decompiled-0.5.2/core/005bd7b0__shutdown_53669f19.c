// 005bd7b0 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::shutdown
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::shutdown(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_61c8 [2];
  undefined8 local_61c0;
  undefined8 local_61b8;
  undefined8 local_61b0;
  undefined8 local_6018;
  undefined8 local_5018;
  undefined8 local_4018;
  undefined4 local_30f0 [54];
  undefined8 local_3018;
  undefined8 local_2018;
  undefined8 local_1018;
  
  local_1018 = 0;
  local_2018 = 0;
  local_3018 = 0;
  local_4018 = 0;
  local_5018 = 0;
  local_6018 = 0;
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    local_30f0[0] = 2;
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
              (param_1 + 0x30);
    uVar2 = 0x30d8;
    (*(code *)PTR_memcpy_00799008)();
    (*(code *)PTR_drop_007998b0)();
    local_61c0 = *(undefined8 *)(param_1 + 0x28);
    local_61b8 = 0;
    local_61c8[0] = 1;
    local_61b0 = uVar2;
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
              (param_1 + 0x30,local_30f0);
    (*(code *)PTR_memcpy_00799008)(param_4,0x30d8);
    (*(code *)PTR_drop_007998b0)();
    complete(param_1,local_61c8);
  }
  return;
}


