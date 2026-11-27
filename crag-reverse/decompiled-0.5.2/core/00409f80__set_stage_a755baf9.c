// 00409f80 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::set_stage(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(code *)PTR_enter_007998a8)();
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>>>
            ((undefined4 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 0x28) = param_2[4];
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  (*(code *)PTR_drop_007998b0)();
  return;
}


