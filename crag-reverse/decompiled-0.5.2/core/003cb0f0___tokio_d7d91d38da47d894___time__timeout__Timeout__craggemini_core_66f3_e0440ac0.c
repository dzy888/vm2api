// 003cb0f0 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if ((char)param_1[0x37] == '\x03') {
    if (param_1[0x31] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    puVar2 = (ulonglong *)(param_1 + 0x20);
  }
  else {
    if ((char)param_1[0x37] != '\0') goto LAB_003cb18d;
    puVar2 = (ulonglong *)(param_1 + 0xe);
  }
  uVar5 = *puVar2 ^ 0x8000000000000000;
  uVar3 = 2;
  if (uVar5 < 5) {
    uVar3 = uVar5;
  }
  if (uVar3 == 1) {
    uVar4 = 0x10;
    if ((longlong)puVar2[1] < 1) goto LAB_003cb18d;
  }
  else if ((uVar3 != 2) || (uVar4 = 8, 0xfffffffffffffffc < *puVar2 - 1)) goto LAB_003cb18d;
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
LAB_003cb18d:
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = (longlong *)param_1[1];
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


