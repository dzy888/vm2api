// 00407c20 new

/* <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::new
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::cancel_request::{closure#2},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::new(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  
  plVar1 = *(longlong **)(param_2 + 0x310);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar3,1) != *plVar1 < 0) goto LAB_00407d81;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar3 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar3 != 0) {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x100);
    return lVar3;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00407d81:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


