// 005bf950 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::shutdown
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::shutdown(longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 local_4010;
  undefined8 local_4008;
  undefined8 local_4000;
  undefined8 local_3ff8;
  undefined8 local_3010;
  undefined8 local_2010 [512];
  undefined8 local_1010;
  
  local_1010 = 0;
  local_2010[0] = 0;
  local_3010 = 0;
  local_4010 = 0;
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>>
                (param_1);
      return;
    }
  }
  else {
    local_2010[0] = CONCAT44(local_2010[0]._4_4_,2);
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,local_2010);
    local_4008 = *(undefined8 *)(param_1 + 0x28);
    local_4000 = 0;
    local_4010 = CONCAT44(local_4010._4_4_,1);
    local_3ff8 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::retire_slot_bg::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
    ::set_stage(param_1 + 0x20,&local_4010);
    complete(param_1);
  }
  return;
}


