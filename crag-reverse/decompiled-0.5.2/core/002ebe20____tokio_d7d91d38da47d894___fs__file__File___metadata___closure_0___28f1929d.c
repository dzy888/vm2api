// 002ebe20 <<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x002ebe42 */
/* WARNING: Switch with 1 destination removed at 0x002ebe5d */
/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    if (*(char *)(param_1 + 0x18) == '\x03') {
      lVar2 = *(longlong *)(param_1 + 0x10);
      cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
      if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(lVar2 + 0x10) + 0x20))();
        return;
      }
    }
    else if (*(char *)(param_1 + 0x18) == '\0') {
      plVar1 = *(longlong **)(param_1 + 8);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(longlong *)(param_1 + 8);
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
  return;
}


