// 003dc410 <craggemini_core[66f3c71560d70857]::guard::pty_read::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::guard::pty_read::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::guard::pty_read::_closure_0_>(longlong param_1)

{
  if ((((*(char *)(param_1 + 0xd0) == '\x03') && (*(char *)(param_1 + 200) == '\x03')) &&
      (*(char *)(param_1 + 0xc0) == '\x03')) &&
     ((*(char *)(param_1 + 0xb8) == '\x03' && (*(char *)(param_1 + 0xb0) == '\x03')))) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x003dc468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x88) + 0x18))();
      return;
    }
  }
  return;
}


