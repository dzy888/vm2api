// 0063bfc0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_::_closure_0_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x03') {
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0063bfeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
      return;
    }
  }
  return;
}


