// 0063b660 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   &craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<craggemini_core[66f3c71560d70857]::bridge::verify_agy::_closure_0_,&craggemini_core[66f3c71560d70857]::bridge::verify_agy>::_closure_0_>
          (longlong param_1)

{
  undefined *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  switch(*(undefined1 *)(param_1 + 0x107)) {
  case 3:
    goto switchD_0063b68c_caseD_3;
  case 4:
    if (*(char *)(param_1 + 0x56c) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_agy_inner::_closure_0_>(param_1 + 0x138);
      uVar4 = *(ulonglong *)(param_1 + 0x120);
    }
    else {
      if (*(char *)(param_1 + 0x56c) != '\0') break;
      uVar4 = *(ulonglong *)(param_1 + 0x108);
    }
LAB_0063b7ae:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 5:
  case 8:
    if (*(char *)(param_1 + 0x250) == '\x03') {
      if (*(longlong *)(param_1 + 0x220) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0063b68c::switchdataD_001a164c,1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x198);
    }
    else {
      if (*(char *)(param_1 + 0x250) != '\0') break;
      puVar2 = (ulonglong *)(param_1 + 0x108);
    }
    uVar4 = *puVar2;
    uVar3 = 2;
    if ((uVar4 ^ 0x8000000000000000) < 5) {
      uVar3 = uVar4 ^ 0x8000000000000000;
    }
    if (uVar3 == 1) {
      uVar4 = puVar2[1];
    }
    else if (uVar3 != 2) break;
    if (uVar4 < 0xfffffffffffffffe) goto LAB_0063b7ae;
    break;
  case 6:
    break;
  case 7:
    if ((((*(char *)(param_1 + 0x198) == '\x03') && (*(char *)(param_1 + 400) == '\x03')) &&
        (*(char *)(param_1 + 0x188) == '\x03')) && (*(char *)(param_1 + 0x180) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x158) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x158) + 0x18))();
      }
    }
    break;
  default:
    goto switchD_0063b68c_default;
  }
  if (((*(char *)(param_1 + 0x104) != '\0') && (*(longlong *)(param_1 + 0xd0) != -1)) &&
     (*(longlong *)(param_1 + 0xd0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x104) = 0;
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x105) != '\0') {
    lVar5 = *(longlong *)(param_1 + 200);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0xc0) + 8;
      do {
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar1)();
        }
        lVar6 = lVar6 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x105) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_0063b68c_caseD_3:
  *(undefined1 *)(param_1 + 0x106) = 0;
switchD_0063b68c_default:
  return;
}


