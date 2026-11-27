// 0025ab30 <craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>

/* WARNING: Switch with 1 destination removed at 0x0025abc1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::run::_closure_0_::_closure_1_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  if (*(char *)(param_1 + 0x81) == '\0') {
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  else {
    if (*(char *)(param_1 + 0x81) != '\x03') {
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  if (puVar1[1] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  if ((code *)*puVar1 != (code *)0x0) {
    (*(code *)*puVar1)();
  }
  if (puVar1[1] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
  return;
}


