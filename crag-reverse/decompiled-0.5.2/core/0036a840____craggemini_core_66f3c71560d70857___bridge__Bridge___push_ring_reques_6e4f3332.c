// 0036a840 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x90) == '\x03') {
    if ((((*(char *)(param_1 + 0x1a8) == '\x03') && (*(char *)(param_1 + 0x1a0) == '\x03')) &&
        (*(char *)(param_1 + 0x198) == '\x03')) && (*(char *)(param_1 + 400) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x168) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x168) + 0x18))();
      }
    }
    if (*(longlong *)(param_1 + 0xa0) != 2) {
      if (*(longlong *)(param_1 + 0xa0) == 0) {
        plVar1 = *(longlong **)(param_1 + 0xa8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0xa8);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0xb0);
    }
    LOCK();
    *(undefined4 *)(**(longlong **)(param_1 + 0x98) + 0x180) = 0;
    UNLOCK();
  }
  else if (*(char *)(param_1 + 0x90) == '\x04') {
    if (*(char *)(param_1 + 0x98) == '\0') {
      plVar1 = *(longlong **)(param_1 + 0xa0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0xa0);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0xa8);
    return;
  }
  return;
}


