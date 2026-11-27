// 00256970 <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   &craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>>
          (longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)((longlong)param_1 + 0x609) != '\x03') goto LAB_00256be6;
  switch(*(undefined1 *)((longlong)param_1 + 0x177)) {
  case 3:
    goto switchD_002569a9_caseD_3;
  case 4:
    if (*(char *)((longlong)param_1 + 0x5dc) == '\x03') {
      lVar6 = 400;
      <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 0x35);
    }
    else {
      lVar6 = 0x178;
      if (*(char *)((longlong)param_1 + 0x5dc) != '\0') break;
    }
    uVar1 = *(ulonglong *)((longlong)param_1 + lVar6);
joined_r0x00256ab5:
    if (uVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
  case 8:
    if ((char)param_1[0x58] == '\x03') {
      if (param_1[0x52] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_002569a9::switchdataD_00182180,1);
      }
      puVar5 = (ulonglong *)(param_1 + 0x41);
    }
    else {
      if ((char)param_1[0x58] != '\0') break;
      puVar5 = (ulonglong *)(param_1 + 0x2f);
    }
    uVar1 = *puVar5;
    uVar4 = 2;
    if ((uVar1 ^ 0x8000000000000000) < 5) {
      uVar4 = uVar1 ^ 0x8000000000000000;
    }
    if (uVar4 == 1) {
      uVar1 = puVar5[1];
    }
    else if (uVar4 != 2) break;
    if (uVar1 < 0xfffffffffffffffe) goto joined_r0x00256ab5;
    break;
  case 6:
    break;
  case 7:
    if (((((char)param_1[0x41] == '\x03') && ((char)param_1[0x40] == '\x03')) &&
        ((char)param_1[0x3f] == '\x03')) && ((char)param_1[0x3e] == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (param_1[0x39] != 0) {
        (**(code **)(param_1[0x39] + 0x18))();
      }
    }
    break;
  default:
switchD_002569a9_default:
    *(undefined1 *)(param_1 + 0xc1) = 0;
LAB_00256be6:
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
  if (((*(char *)((longlong)param_1 + 0x174) != '\0') && (param_1[0x28] != -1)) &&
     (param_1[0x28] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (*(char *)((longlong)param_1 + 0x175) != '\0') {
    lVar6 = param_1[0x27];
    if (lVar6 != 0) {
      lVar7 = param_1[0x26] + 8;
      do {
        if (*(longlong *)(lVar7 + -8) != 0) {
          (*(code *)puVar3)();
        }
        lVar7 = lVar7 + 0x18;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (param_1[0x25] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x175) = 0;
  if (param_1[0x22] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (param_1[0x1f] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_002569a9_caseD_3:
  *(undefined1 *)((longlong)param_1 + 0x176) = 0;
  goto switchD_002569a9_default;
}


