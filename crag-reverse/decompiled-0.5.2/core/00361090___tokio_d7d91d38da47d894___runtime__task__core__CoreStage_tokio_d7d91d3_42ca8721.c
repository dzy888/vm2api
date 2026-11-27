// 00361090 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x003610ae */
/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 == 1) {
    <core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>,tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 2);
    return;
  }
  if ((*param_1 == 0) && (plVar1 = *(longlong **)(param_1 + 2), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(longlong *)(param_1 + 2);
      (*(code *)PTR_close_00799030)();
      if (lVar2 != -1) {
        LOCK();
        plVar1 = (longlong *)(lVar2 + 8);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  return;
}


