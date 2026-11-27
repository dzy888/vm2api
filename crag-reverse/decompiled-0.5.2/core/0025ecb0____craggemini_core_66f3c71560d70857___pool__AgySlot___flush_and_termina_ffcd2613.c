// 0025ecb0 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x10a0)) {
  case 0:
    goto switchD_0025ecd2_caseD_0;
  default:
    return;
  case 3:
    if (*(longlong *)(param_1 + 0x10a8) != 2) {
      if (*(longlong *)(param_1 + 0x10a8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x10b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x10b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x10b8);
    }
    break;
  case 4:
    if (*(longlong *)(param_1 + 0x10a8) != 2) {
      if (*(longlong *)(param_1 + 0x10a8) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x10b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x10b0);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x10b8);
    }
    break;
  case 5:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x10b0);
    *(undefined1 *)(param_1 + 0x10a2) = 0;
    break;
  case 6:
    if (*(char *)(param_1 + 0x1590) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x11a8);
    }
    else if (*(char *)(param_1 + 0x1590) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x10a8);
    }
    *(undefined1 *)(param_1 + 0x10a1) = 0;
  }
  param_1 = param_1 + 0x850;
switchD_0025ecd2_caseD_0:
  <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1);
  return;
}


