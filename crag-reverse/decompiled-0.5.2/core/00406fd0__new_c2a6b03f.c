// 00406fd0 new

/* <tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::new
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Cell<<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::spawn::{closure#0}::{closure#10},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::new(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  
  plVar1 = *(longlong **)(param_2 + 0x310);
  uVar5 = 0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) goto LAB_00407109;
    uVar5 = *(undefined4 *)(param_2 + 0x310);
  }
  puVar3 = PTR_memcpy_00799008;
  uVar5 = (*(code *)PTR_memcpy_00799008)(uVar5,0xf0);
  (*(code *)puVar3)(uVar5,0xf4);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar4 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar4 != 0) {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x180);
    return lVar4;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_00407109:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


