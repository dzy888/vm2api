// 00409a90 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::poll
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::poll
    */

undefined4 __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::poll(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_38 [4];
  
  if (*(int *)(param_1 + 0x10) != 0) {
    (*(code *)PTR_panic_fmt_007991a8)
              (param_4,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
    (*(code *)PTR_drop_007998b0)();
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  local_38[0] = (*(code *)PTR_enter_007998a8)();
  uVar1 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::
          _closure_3_(*(undefined8 *)(param_1 + 0x18),param_2);
  (*(code *)PTR_drop_007998b0)();
  if ((char)uVar1 == '\0') {
    local_38[0] = CONCAT44(local_38[0]._4_4_,2);
    set_stage(param_1,local_38);
  }
  return uVar1;
}


