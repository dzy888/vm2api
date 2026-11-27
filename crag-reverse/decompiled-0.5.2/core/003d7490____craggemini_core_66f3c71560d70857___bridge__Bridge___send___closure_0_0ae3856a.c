// 003d7490 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003d7523 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if ((char)param_1[0x29] == '\x03') {
    if (param_1[0x23] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    param_1 = param_1 + 0x12;
  }
  else if ((char)param_1[0x29] != '\0') {
    return;
  }
  uVar2 = *param_1 ^ 0x8000000000000000;
  uVar1 = 2;
  if (uVar2 < 5) {
    uVar1 = uVar2;
  }
  if (uVar1 == 1) {
    if (0 < (longlong)param_1[1]) goto LAB_003d7519;
  }
  else if ((uVar1 == 2) && (uVar2 = *param_1 - 1, uVar2 < 0xfffffffffffffffd)) {
LAB_003d7519:
    (*(code *)PTR_free_0079adc8)(uVar2,1);
    return;
  }
  return;
}


