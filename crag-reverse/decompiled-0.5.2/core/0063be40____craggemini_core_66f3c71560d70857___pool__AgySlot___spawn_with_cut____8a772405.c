// 0063be40 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_>
          (longlong param_1)

{
  if (*(char *)(param_1 + 0x39) == '\x03') {
    if ((((*(char *)(param_1 + 0xf0) == '\x03') && (*(char *)(param_1 + 0x78) == '\x03')) &&
        (*(char *)(param_1 + 0xe8) == '\x03')) && (*(char *)(param_1 + 0xe0) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0xb8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0063beb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)(param_1 + 0xb8) + 0x18))();
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x39) == '\x04') {
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_>::_closure_0_>
              (param_1 + 0x198);
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}


