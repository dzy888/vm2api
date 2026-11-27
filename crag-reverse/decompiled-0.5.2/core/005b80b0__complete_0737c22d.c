// 005b80b0 complete

/* <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::complete */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::complete(longlong param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 local_d0 [46];
  
  bVar1 = (*(code *)PTR_transition_to_complete_00799fe0)();
  if ((bVar1 & 8) == 0) {
    local_d0[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 0x20,local_d0);
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
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1,1);
  }
  return;
}


