// 003a2720 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>

/* WARNING: Switch with 1 destination removed at 0x003a27fc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((char)param_1[0x29] == '\0') {
    uVar1 = *param_1;
    uVar3 = uVar1 ^ 0x8000000000000000;
    uVar2 = 2;
    if (uVar3 < 5) {
      uVar2 = uVar3;
    }
    if (uVar2 != 2) {
      if (uVar2 != 1) {
        return;
      }
      uVar1 = param_1[1];
    }
  }
  else {
    if ((char)param_1[0x29] != '\x03') {
      return;
    }
    if (param_1[0x23] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    uVar1 = param_1[0x12];
    uVar3 = uVar1 ^ 0x8000000000000000;
    uVar2 = 2;
    if (uVar3 < 5) {
      uVar2 = uVar3;
    }
    if (uVar2 != 2) {
      if (uVar2 != 1) {
        return;
      }
      uVar1 = param_1[0x13];
    }
  }
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    (*(code *)PTR_free_0079adc8)(uVar3,1);
    return;
  }
  return;
}


