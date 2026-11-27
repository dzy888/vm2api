// 0063b310 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}::{closure#0},
   <craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::{closure#0}::{closure#11}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::attach_session<<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_::_closure_0_,<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_::_closure_11_::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong *puVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar4 = &switchD_0063b33c::switchdataD_001a1634;
  switch(*(undefined1 *)(param_1 + 0x10f)) {
  case 3:
    goto switchD_0063b33c_caseD_3;
  case 4:
    if (*(char *)(param_1 + 0x5a1) == '\x03') {
      <craggemini_core[66f3c71560d70857]::bridge::verify_managed_agy::_closure_0_>(param_1 + 0x128);
    }
    else if (*(char *)(param_1 + 0x5a1) == '\0') {
      uVar1 = *(ulonglong *)(param_1 + 0x110);
      goto joined_r0x0063b45f;
    }
    break;
  case 5:
  case 8:
    if (*(char *)(param_1 + 600) == '\x03') {
      if (*(longlong *)(param_1 + 0x228) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0063b33c::switchdataD_001a1634,1);
      }
      puVar3 = (ulonglong *)(param_1 + 0x1a0);
    }
    else {
      if (*(char *)(param_1 + 600) != '\0') break;
      puVar3 = (ulonglong *)(param_1 + 0x110);
    }
    uVar1 = *puVar3;
    puVar4 = (uint *)0x2;
    if ((uint *)(uVar1 ^ 0x8000000000000000) < (uint *)0x5) {
      puVar4 = (uint *)(uVar1 ^ 0x8000000000000000);
    }
    if (puVar4 == (uint *)0x1) {
      uVar1 = puVar3[1];
    }
    else if (puVar4 != (uint *)0x2) break;
    if (uVar1 < 0xfffffffffffffffe) {
joined_r0x0063b45f:
      if (uVar1 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(puVar4,1);
      }
    }
    break;
  case 6:
    break;
  case 7:
    if ((((*(char *)(param_1 + 0x1a0) == '\x03') && (*(char *)(param_1 + 0x198) == '\x03')) &&
        (*(char *)(param_1 + 400) == '\x03')) && (*(char *)(param_1 + 0x188) == '\x03')) {
      (*(code *)PTR_drop_007990e0)();
      if (*(longlong *)(param_1 + 0x160) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x160) + 0x18))();
      }
    }
    break;
  default:
    goto switchD_0063b33c_default;
  }
  if (((*(char *)(param_1 + 0x10c) != '\0') && (*(longlong *)(param_1 + 0xe0) != -1)) &&
     (*(longlong *)(param_1 + 0xe0) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x10c) = 0;
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (*(char *)(param_1 + 0x10d) != '\0') {
    lVar5 = *(longlong *)(param_1 + 0xd8);
    if (lVar5 != 0) {
      lVar6 = *(longlong *)(param_1 + 0xd0) + 8;
      do {
        if (*(longlong *)(lVar6 + -8) != 0) {
          (*(code *)puVar2)();
        }
        lVar6 = lVar6 + 0x18;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x10d) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_0063b33c_caseD_3:
  *(undefined1 *)(param_1 + 0x10e) = 0;
switchD_0063b33c_default:
  return;
}


