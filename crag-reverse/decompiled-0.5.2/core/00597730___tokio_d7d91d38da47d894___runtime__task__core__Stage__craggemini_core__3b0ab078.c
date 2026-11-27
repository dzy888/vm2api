// 00597730 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00597776 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::guard::GuardHandle
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>>
          (int *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  
  if (*param_1 == 0) {
    bVar1 = *(byte *)(param_1 + 0x2c);
    if (1 < bVar1 - 4) {
      if (bVar1 == 3) {
        if (*(longlong *)(param_1 + 0x2e) != 2) {
          if (*(longlong *)(param_1 + 0x2e) == 0) {
            plVar4 = *(longlong **)(param_1 + 0x30);
            LOCK();
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar4 = *(longlong **)(param_1 + 0x30);
            LOCK();
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x32);
        }
      }
      else if (bVar1 != 0) {
        return;
      }
    }
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 2);
    return;
  }
  if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) && (*(longlong *)(param_1 + 4) != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    pcVar3 = (code *)*puVar2;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)();
    }
    if (puVar2[1] != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


