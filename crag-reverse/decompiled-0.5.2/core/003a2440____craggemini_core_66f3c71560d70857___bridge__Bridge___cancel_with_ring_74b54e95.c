// 003a2440 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::cancel_with_ring::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x340) == '\x03') {
    if (*(char *)(param_1 + 0xb8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>
                (param_1 + 0xc0);
    }
    if (*(longlong *)(param_1 + 0x28) != 2) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x30);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x30);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x38);
      return;
    }
  }
  return;
}


