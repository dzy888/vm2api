// 005b58d0 try_read_output

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output
   <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::try_read_output */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::try_read_output(longlong param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = (*(code *)PTR_can_read_output_00799fb0)();
  if (cVar7 != '\0') {
    iVar2 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = 2;
    if (iVar2 != 1) {
      (*(code *)PTR_panic_fmt_007991a8)
                (iVar2,&anon_0acbc551f34e4a0bfb9a607189131925_30_llvm_9953415283177307294);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    if (*param_2 != 2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
                (param_2,param_1 + 0x60);
    }
    *(undefined8 *)(param_2 + 4) = uVar3;
    *(undefined8 *)(param_2 + 6) = uVar4;
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_2 + 2) = uVar6;
  }
  return;
}


