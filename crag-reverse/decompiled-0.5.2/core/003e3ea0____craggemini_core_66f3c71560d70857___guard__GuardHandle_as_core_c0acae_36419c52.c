// 003e3ea0 <<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::guard::GuardHandle
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::guard::GuardHandle_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>
          (longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  if (1 < bVar1 - 4) {
    if (bVar1 == 3) {
      if (*(longlong *)(param_1 + 0xb0) != 2) {
        if (*(longlong *)(param_1 + 0xb0) == 0) {
          plVar2 = *(longlong **)(param_1 + 0xb8);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0xb8);
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0xc0);
      }
    }
    else if (bVar1 != 0) {
      return;
    }
  }
  <tokio[d7d91d38da47d894]::process::Child>(param_1);
  return;
}


