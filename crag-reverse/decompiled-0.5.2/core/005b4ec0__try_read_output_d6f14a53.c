// 005b4ec0 try_read_output

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>::try_read_output
   <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,
   alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::current_thread::Handle>>>::try_read_output
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<core[c0acaeba6ab4c2e0]::pin::Pin<alloc[12e961f32105355]::boxed::Box<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::spawn_turn::{closure#0}>>,alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::handle::Handle>>>
::try_read_output(longlong param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  
  cVar7 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar7 != '\0') {
    iVar4 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 2;
    if (iVar4 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (iVar4,&anon_0acbc551f34e4a0bfb9a607189131925_30_llvm_9953415283177307294);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    uVar8 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    if (((*param_2 == '\0') && (*(longlong *)(param_2 + 8) != 0)) &&
       (*(longlong *)(param_2 + 0x10) != 0)) {
      puVar2 = *(undefined8 **)(param_2 + 0x18);
      if ((code *)*puVar2 != (code *)0x0) {
        uVar8 = (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,puVar2[2]);
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
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 0x18) = uVar1;
  }
  return;
}


