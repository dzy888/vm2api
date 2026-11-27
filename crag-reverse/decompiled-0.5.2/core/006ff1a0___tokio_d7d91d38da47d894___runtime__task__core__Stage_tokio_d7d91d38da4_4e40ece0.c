// 006ff1a0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>>>

/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* WARNING: Switch with 1 destination removed at 0x006ff202 */
/* WARNING: Switch with 1 destination removed at 0x006ff237 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::{closure#0}>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::Inner>::spawn_blocking_read::_closure_0_>>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 2) != -1) {
      if (*(longlong *)(param_1 + 2) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      plVar2 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        lVar1 = *(longlong *)(param_1 + 10);
        (*(code *)PTR_close_00799030)();
        if (lVar1 != -1) {
          LOCK();
          plVar2 = (longlong *)(lVar1 + 8);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            uVar4 = 8;
            goto __rustc_100742bb89c490cb____rust_dealloc;
          }
        }
        return;
      }
    }
  }
  else if (*param_1 == 1) {
    if (param_1[2] != -1) {
      <(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>
                (param_1 + 2);
      return;
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 8);
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      if (puVar3[1] != 0) {
        uVar4 = puVar3[2];
__rustc_100742bb89c490cb____rust_dealloc:
        (*(code *)PTR_free_0079adc8)(param_4,uVar4);
        return;
      }
    }
  }
  return;
}


