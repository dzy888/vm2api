// 003d6c60 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xb1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>
              (param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xb8) != 0) goto LAB_003d6d2f;
  }
  else {
    if (*(char *)(param_1 + 0xb1) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x200) == '\x03') {
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      puVar1 = (ulonglong *)(param_1 + 0x148);
    }
    else {
      if (*(char *)(param_1 + 0x200) != '\0') goto LAB_003d6d3a;
      puVar1 = (ulonglong *)(param_1 + 0xb8);
    }
    uVar3 = *puVar1 ^ 0x8000000000000000;
    uVar2 = 2;
    if (uVar3 < 5) {
      uVar2 = uVar3;
    }
    if (uVar2 == 1) {
      if (0 < (longlong)puVar1[1]) goto LAB_003d6d2f;
    }
    else if ((uVar2 == 2) && (*puVar1 - 1 < 0xfffffffffffffffd)) {
LAB_003d6d2f:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
LAB_003d6d3a:
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x20) ^ 0x8000000000000000;
    uVar3 = 2;
    if (uVar2 < 5) {
      uVar3 = uVar2;
    }
    if (uVar3 == 1) {
      if (*(longlong *)(param_1 + 0x28) < 1) goto LAB_003d6d9c;
    }
    else if ((uVar3 != 2) ||
            (uVar2 = *(ulonglong *)(param_1 + 0x20) - 1, 0xfffffffffffffffc < uVar2))
    goto LAB_003d6d9c;
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar2,1);
  }
LAB_003d6d9c:
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


