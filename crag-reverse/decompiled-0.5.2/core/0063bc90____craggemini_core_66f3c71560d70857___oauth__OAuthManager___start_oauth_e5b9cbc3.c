// 0063bc90 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_8_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x1018) == '\x03') {
    if (*(char *)(param_1 + 0x10f0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10e8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10e0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10d8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10d0) != '\x03') {
      return;
    }
    (*(code *)PTR_drop_007990e0)();
  }
  else {
    if (*(char *)(param_1 + 0x1018) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x10f0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10e8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10e0) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10d8) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x10d0) != '\x03') {
      return;
    }
    (*(code *)PTR_drop_007990e0)();
  }
  if (*(longlong *)(param_1 + 0x10a8) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0063bd47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x10a8) + 0x18))();
  return;
}


