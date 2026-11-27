// 0040af80 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::poll
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::poll
    */

undefined4 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::poll(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
    (*(code *)PTR_memcpy_00799008)(param_4,0x30d8);
    (*(code *)PTR_drop_007998b0)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  (*(code *)PTR_enter_007998a8)();
  uVar1 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::_closure_0_
                    (param_1 + 0x18,param_2);
  (*(code *)PTR_drop_007998b0)();
  if ((char)uVar1 == '\0') {
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_>>
              (param_1 + 0x10);
    (*(code *)PTR_memcpy_00799008)(param_4,0x30d8);
    (*(code *)PTR_drop_007998b0)();
  }
  return uVar1;
}


