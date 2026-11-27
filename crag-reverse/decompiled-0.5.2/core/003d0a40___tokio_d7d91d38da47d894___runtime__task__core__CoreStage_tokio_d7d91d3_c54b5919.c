// 003d0a40 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x003d0a5d */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<tokio[d7d91d38da47d894]::fs::metadata::metadata<&std[6c98fd8553dbae28]::path::PathBuf>::_closure_0_::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 == 1) {
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 2);
    return;
  }
  if ((*param_1 == 0) && (0 < *(longlong *)(param_1 + 2))) {
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  return;
}


