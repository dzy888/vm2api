// 0063cbb0 <craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x0063cbdc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x464) == '\x03') {
    <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 6);
    lVar1 = param_1[3];
  }
  else {
    if (*(char *)((longlong)param_1 + 0x464) != '\0') {
      return;
    }
    lVar1 = *param_1;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


