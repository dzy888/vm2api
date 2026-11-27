// 0063bda0 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_::_closure_1_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x1031) == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::guard::pty_read::_closure_0_>>
              (param_1 + 0x1038);
  }
  else {
    if (*(char *)(param_1 + 0x1031) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x1038) == '\0') {
      plVar1 = *(longlong **)(param_1 + 0x1040);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799078)();
      }
    }
    else {
      plVar1 = *(longlong **)(param_1 + 0x1040);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_00799070)();
      }
    }
    <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
              (param_1 + 0x1048);
  }
  *(undefined1 *)(param_1 + 0x1030) = 0;
  return;
}


