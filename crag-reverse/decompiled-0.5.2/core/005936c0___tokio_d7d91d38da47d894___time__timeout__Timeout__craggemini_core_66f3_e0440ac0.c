// 005936c0 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  if ((char)param_1[0x37] == '\x03') {
    if (param_1[0x31] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar3 = (ulonglong *)(param_1 + 0x20);
  }
  else {
    if ((char)param_1[0x37] != '\0') goto LAB_0059375e;
    puVar3 = (ulonglong *)(param_1 + 0xe);
  }
  uVar1 = *puVar3;
  uVar4 = 2;
  if ((uVar1 ^ 0x8000000000000000) < 5) {
    uVar4 = uVar1 ^ 0x8000000000000000;
  }
  if (uVar4 == 1) {
    uVar1 = puVar3[1];
  }
  else if (uVar4 != 2) goto LAB_0059375e;
  if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
LAB_0059375e:
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


