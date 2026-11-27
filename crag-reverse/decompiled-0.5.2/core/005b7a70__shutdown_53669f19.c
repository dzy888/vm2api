// 005b7a70 shutdown

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::shutdown */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::shutdown(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 extraout_RDX;
  undefined8 uVar3;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar2 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar2 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                (param_1);
      return;
    }
  }
  else {
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
              ((undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x58) = local_28;
    *(undefined4 *)(param_1 + 0x5c) = uStack_24;
    *(undefined4 *)(param_1 + 0x60) = uStack_20;
    *(undefined4 *)(param_1 + 100) = uStack_1c;
    *(undefined4 *)(param_1 + 0x48) = local_38;
    *(undefined4 *)(param_1 + 0x4c) = uStack_34;
    *(undefined4 *)(param_1 + 0x50) = uStack_30;
    *(undefined4 *)(param_1 + 0x54) = uStack_2c;
    *(undefined4 *)(param_1 + 0x38) = 2;
    *(undefined4 *)(param_1 + 0x3c) = uStack_44;
    *(undefined4 *)(param_1 + 0x40) = uStack_40;
    *(undefined4 *)(param_1 + 0x44) = uStack_3c;
    uVar3 = extraout_RDX;
    (*(code *)PTR_drop_007998b0)();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
              ((undefined4 *)(param_1 + 0x38));
    uStack_70 = (undefined4)uVar1;
    uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_60 = (undefined4)uVar3;
    uStack_5c = (undefined4)((ulonglong)uVar3 >> 0x20);
    *(undefined4 *)(param_1 + 0x58) = local_58;
    *(undefined4 *)(param_1 + 0x5c) = uStack_54;
    *(undefined4 *)(param_1 + 0x60) = uStack_50;
    *(undefined4 *)(param_1 + 100) = uStack_4c;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = uStack_60;
    *(undefined4 *)(param_1 + 0x54) = uStack_5c;
    *(undefined4 *)(param_1 + 0x38) = 1;
    *(undefined4 *)(param_1 + 0x3c) = uStack_74;
    *(undefined4 *)(param_1 + 0x40) = uStack_70;
    *(undefined4 *)(param_1 + 0x44) = uStack_6c;
    (*(code *)PTR_drop_007998b0)();
    complete(param_1);
  }
  return;
}


