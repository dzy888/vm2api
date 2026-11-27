// 0025aaf0 <tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0},std[6c98fd8553dbae28]::fs::Metadata>::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025ab13 */
/* WARNING: Switch with 1 destination removed at 0x0025ab23 */
/* WARNING: Switch with 1 destination removed at 0x006efea8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0},
   std[6c98fd8553dbae28]::fs::Metadata>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::fs::asyncify<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::_closure_0_::_closure_0_,std[6c98fd8553dbae28]::fs::Metadata>::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((char)param_1[2] == '\0') {
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar1 = *param_1;
      (*(code *)PTR_close_00799030)();
      if (lVar1 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar1 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_free_0079adc8)(param_4,8);
          return;
        }
      }
      return;
    }
  }
  else if ((char)param_1[2] == '\x03') {
    lVar1 = param_1[1];
    cVar3 = (*(code *)PTR_drop_join_handle_fast_00799080)();
    if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00701744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x10) + 0x20))();
      return;
    }
  }
  return;
}


