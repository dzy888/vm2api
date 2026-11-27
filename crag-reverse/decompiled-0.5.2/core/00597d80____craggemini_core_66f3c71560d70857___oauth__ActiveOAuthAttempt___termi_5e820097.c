// 00597d80 <<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>::terminate::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x4e0);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x9d0) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::guard::GuardHandle>::shutdown_with_stderr::_closure_0_>
                (param_1 + 0x5e8);
    }
    else if (*(char *)(param_1 + 0x9d0) == '\0') {
      <craggemini_core[66f3c71560d70857]::guard::GuardHandle>(param_1 + 0x4e8);
    }
    *(undefined1 *)(param_1 + 0x4e1) = 0;
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00597e27;
    }
    if (*(longlong *)(param_1 + 0x4e8) != 2) {
      if (*(longlong *)(param_1 + 0x4e8) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x4f0);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x4f0);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x4f8);
    }
  }
  param_1 = param_1 + 0x270;
LAB_00597e27:
  <craggemini_core[66f3c71560d70857]::oauth::ActiveOAuthAttempt>(param_1);
  return;
}


