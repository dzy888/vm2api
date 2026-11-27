// 0040a110 set_stage

/* <tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,
   tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>::set_stage */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::task::core::Core<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>,tokio[d7d91d38da47d894]::runtime::blocking::schedule::BlockingSchedule>>
::set_stage(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_enter_007998a8)();
  if (*(int *)(param_1 + 0x18) == 1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 0x20);
  }
  else if ((*(int *)(param_1 + 0x18) == 0) && (0 < *(longlong *)(param_1 + 0x20))) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0xb8);
  (*(code *)PTR_drop_007998b0)();
  return;
}


