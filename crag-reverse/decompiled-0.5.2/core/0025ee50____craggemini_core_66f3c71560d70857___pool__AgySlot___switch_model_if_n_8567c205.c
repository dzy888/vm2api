// 0025ee50 <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::switch_model_if_needed::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0025ee82 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::switch_model_if_needed::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::switch_model_if_needed::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(char *)(param_1 + 0x390) == '\x03') &&
     (<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
                (param_1 + 0x48), *(longlong *)(param_1 + 0x30) != 0)) {
    (*(code *)PTR_free_0079adc8)(param_4,1);
    return;
  }
  return;
}


