// 00365e10 <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0x350)) {
  case 0:
    goto switchD_00365e32_caseD_0;
  default:
    return;
  case 3:
    if (*(longlong *)(param_1 + 0x358) != 2) {
      if (*(longlong *)(param_1 + 0x358) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x360);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x360);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x368);
    }
  case 4:
  case 5:
    <tokio[d7d91d38da47d894]::process::Child>(param_1 + 0x2a8);
    break;
  case 6:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
              (param_1 + 0x360);
    *(undefined1 *)(param_1 + 0x351) = 0;
  }
  param_1 = param_1 + 0x100;
switchD_00365e32_caseD_0:
  <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1);
  return;
}


