// 00380210 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::drop_join_handle_slow::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 auStack_d8 [46];
  
  uVar2 = (*(code *)PTR_transition_to_join_handle_dropped_00799fb8)();
  if ((param_3 & 1) != 0) {
    auStack_d8[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 0x20,auStack_d8);
  }
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR_set_waker_00799fc0)();
  }
  cVar1 = (*(code *)PTR_ref_dec_00799640)();
  if (cVar1 != '\0') {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
              (param_1);
  }
  return;
}


