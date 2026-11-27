// 006dcfd0 try_read_output

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output
   <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::maybe_move_runtime::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::worker::Launch>::launch::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
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
    iVar4 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iVar4 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (iVar4,&anon_ed7a93e299c08851dbd4cf71f9567ab8_2_llvm_1953046205626171361);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
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


