// 005b7320 drop_join_handle_slow

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::drop_join_handle_slow
    */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::drop_join_handle_slow(longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar2 = (*(code *)PTR_transition_to_join_handle_dropped_00799fb8)();
  if ((param_3 & 1) != 0) {
    (*(code *)PTR_enter_007998a8)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>>>
              ((undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x58) = local_30;
    *(undefined4 *)(param_1 + 0x5c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x60) = uStack_28;
    *(undefined4 *)(param_1 + 100) = uStack_24;
    *(undefined4 *)(param_1 + 0x48) = local_40;
    *(undefined4 *)(param_1 + 0x4c) = uStack_3c;
    *(undefined4 *)(param_1 + 0x50) = uStack_38;
    *(undefined4 *)(param_1 + 0x54) = uStack_34;
    *(undefined4 *)(param_1 + 0x38) = 2;
    *(undefined4 *)(param_1 + 0x3c) = uStack_4c;
    *(undefined4 *)(param_1 + 0x40) = uStack_48;
    *(undefined4 *)(param_1 + 0x44) = uStack_44;
    (*(code *)PTR_drop_007998b0)();
  }
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR_set_waker_00799fc0)();
  }
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1);
  }
  return;
}


