// 0040b2f0 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::poll
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::poll
    */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::poll(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_60 [10];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
    (*(code *)PTR_drop_007998b0)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_60[0] = (*(code *)PTR_enter_007998a8)();
  <craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::_closure_2_
            (param_1 + 0x18);
  (*(code *)PTR_drop_007998b0)();
  local_60[0] = CONCAT44(local_60[0]._4_4_,2);
  set_stage(param_1,local_60);
  return 0;
}


