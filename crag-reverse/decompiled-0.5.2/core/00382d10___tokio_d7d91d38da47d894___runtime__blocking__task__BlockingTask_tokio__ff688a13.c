// 00382d10 <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>

/* tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule> */

void __rustcall
tokio[d7d91d38da47d894]::runtime::task::raw::shutdown::
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>
          (longlong param_1)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined4 auStack_180 [2];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 auStack_c8 [46];
  
  cVar1 = (*(code *)PTR_transition_to_shutdown_0079a008)();
  if (cVar1 == '\0') {
    cVar1 = (*(code *)PTR_ref_dec_00799640)();
    if (cVar1 != '\0') {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::boxed::Box<tokio[d7d91d38da47d894]::runtime::task::core::Cell<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>>
                (param_1);
      return;
    }
  }
  else {
    auStack_c8[0] = 2;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 0x20,auStack_c8);
    uStack_170 = *(undefined8 *)(param_1 + 0x30);
    uStack_178 = 0xffffffffffffffff;
    uStack_168 = 0;
    auStack_180[0] = 1;
    uStack_160 = extraout_RDX;
    <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::set_stage(param_1 + 0x20,auStack_180);
    <tokio[d7d91d38da47d894]::runtime::task::harness::Harness<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
    ::complete(param_1);
  }
  return;
}


