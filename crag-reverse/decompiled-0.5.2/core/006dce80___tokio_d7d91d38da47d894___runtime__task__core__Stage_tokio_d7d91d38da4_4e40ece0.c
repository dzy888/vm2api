// 006dce80 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x006dcecc */
/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 2) != -1) {
      if (*(longlong *)(param_1 + 2) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      plVar1 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 10);
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
  }
  else if (*param_1 == 1) {
    <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>
              (param_1 + 2);
    return;
  }
  return;
}


