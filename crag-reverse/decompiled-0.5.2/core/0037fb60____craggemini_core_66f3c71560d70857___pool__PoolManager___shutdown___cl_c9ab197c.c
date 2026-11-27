// 0037fb60 <<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>

/* tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::{closure#0}::{closure#0},
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
    */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::
<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::shutdown::_closure_0_::_closure_0_,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>
          (longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  int iStack_3100;
  
  cVar6 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar6 != '\0') {
    uVar7 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x30d8);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iStack_3100 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (uVar7,&anon_0acbc551f34e4a0bfb9a607189131925_30_llvm_9953415283177307294);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar7 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (((*param_2 == '\0') && (*(longlong *)(param_2 + 8) != 0)) &&
       (*(longlong *)(param_2 + 0x10) != 0)) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      if ((code *)*puVar2 != (code *)0x0) {
        uVar7 = (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,puVar2[2]);
      }
    }
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(undefined8 *)(param_2 + 0x10) = uVar5;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  return;
}


