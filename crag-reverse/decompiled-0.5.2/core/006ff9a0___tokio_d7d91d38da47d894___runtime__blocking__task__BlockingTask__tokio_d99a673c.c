// 006ff9a0 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::try_read_output::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (longlong param_1,int *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  
  cVar10 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar10 != '\0') {
    iVar3 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iVar3 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (iVar3,&anon_ed7a93e299c08851dbd4cf71f9567ab8_2_llvm_1953046205626171361);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    uVar9 = *(undefined8 *)(param_1 + 0x68);
    if (*param_2 != -2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
                (param_2,param_1 + 0x78);
    }
    *(undefined8 *)(param_2 + 0xc) = uVar1;
    *(undefined8 *)(param_2 + 8) = uVar8;
    *(undefined8 *)(param_2 + 10) = uVar9;
    *(undefined8 *)(param_2 + 4) = uVar6;
    *(undefined8 *)(param_2 + 6) = uVar7;
    *(undefined8 *)param_2 = uVar4;
    *(undefined8 *)(param_2 + 2) = uVar5;
  }
  return;
}


