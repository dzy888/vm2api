// 00409dc0 poll

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll
   <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::poll(undefined4 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 extraout_var;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  
  if (*(int *)(param_3 + 0x18) == 0) {
    uVar5 = (*(code *)PTR_enter_007998a8)();
    lVar1 = *(longlong *)(param_3 + 0x20);
    *(undefined8 *)(param_3 + 0x20) = 0xffffffffffffffff;
    if (lVar1 != -1) {
      lVar4 = *(longlong *)(param_3 + 0x28);
      uVar2 = *(undefined8 *)(param_3 + 0x30);
      uVar5 = (*(code *)PTR_stop_007998b8)();
      uVar5 = (*(code *)PTR_inner_007998c0)(uVar5,uVar2);
      if (lVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
        lVar4 = lVar1;
      }
      (*(code *)PTR_drop_007998b0)();
      if (local_40 != -2) {
        (*(code *)PTR_enter_007998a8)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::read_to_string::read_to_string<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>>>
                  ((undefined4 *)(param_3 + 0x18),lVar4);
        *(undefined8 *)(param_3 + 0x38) = local_48;
        *(undefined4 *)(param_3 + 0x28) = local_58;
        *(undefined4 *)(param_3 + 0x2c) = uStack_54;
        *(undefined4 *)(param_3 + 0x30) = uStack_50;
        *(undefined4 *)(param_3 + 0x34) = uStack_4c;
        *(undefined4 *)(param_3 + 0x18) = 2;
        *(undefined4 *)(param_3 + 0x1c) = extraout_var;
        *(undefined4 *)(param_3 + 0x20) = uStack_60;
        *(undefined4 *)(param_3 + 0x24) = uStack_5c;
        (*(code *)PTR_drop_007998b0)();
      }
      param_2[2] = local_30;
      *param_2 = local_40;
      param_2[1] = lStack_38;
      return param_2;
    }
  }
  else {
    uVar5 = (*(code *)PTR_panic_fmt_007991a8)
                      (param_1,&anon_759b25d0f49402244ed1d2ce4dc43d04_177_llvm_4022685846690702743);
  }
  (*(code *)PTR_expect_failed_00799440)
            (uVar5,&anon_0acbc551f34e4a0bfb9a607189131925_36_llvm_9953415283177307294);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


