// 0063bc50 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063bc7a */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)((longlong)param_1 + 0x491) == '\0') {
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  else if (*(char *)((longlong)param_1 + 0x491) == '\x03') {
    <craggemini_core[66f3c71560d70857]::bridge::verify_managed_agy::_closure_0_>(param_1 + 3);
    return;
  }
  return;
}


