// 005b7910 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::complete */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::complete(longlong param_1)

{
  byte bVar1;
  char cVar2;
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
  
  bVar1 = (*(code *)PTR_transition_to_complete_00799fe0)();
  if ((bVar1 & 8) == 0) {
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
    (*(code *)PTR_drop_007998b0)();
  }
  else if ((bVar1 & 0x10) != 0) {
    (*(code *)PTR_wake_join_00799fe8)();
    bVar1 = (*(code *)PTR_unset_waker_after_complete_00799ff0)();
    if ((bVar1 & 8) == 0) {
      (*(code *)PTR_set_waker_00799fc0)();
    }
  }
  cVar2 = (*(code *)PTR_transition_to_terminal_0079a000)();
  if (cVar2 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::open_options::OpenOptions>::std_open::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1,1);
  }
  return;
}


