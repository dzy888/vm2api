// 0059c5a0 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0xb1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>
              (param_1 + 0xd0);
    uVar1 = *(ulonglong *)(param_1 + 0xb8);
joined_r0x0059c5ef:
    if (uVar1 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else {
    if (*(char *)(param_1 + 0xb1) != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0x200) == '\x03') {
      if (*(longlong *)(param_1 + 0x1d0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x148);
LAB_0059c62e:
      uVar1 = *puVar2;
      uVar3 = 2;
      if ((uVar1 ^ 0x8000000000000000) < 5) {
        uVar3 = uVar1 ^ 0x8000000000000000;
      }
      if (uVar3 == 1) {
        uVar1 = puVar2[1];
      }
      else if (uVar3 != 2) goto LAB_0059c678;
      if (uVar1 < 0xfffffffffffffffe) goto joined_r0x0059c5ef;
    }
    else if (*(char *)(param_1 + 0x200) == '\0') {
      puVar2 = (ulonglong *)(param_1 + 0xb8);
      goto LAB_0059c62e;
    }
  }
LAB_0059c678:
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    uVar4 = uVar1 ^ 0x8000000000000000;
    uVar3 = 2;
    if (uVar4 < 5) {
      uVar3 = uVar4;
    }
    if (uVar3 == 1) {
      uVar1 = *(ulonglong *)(param_1 + 0x28);
    }
    else if (uVar3 != 2) goto LAB_0059c6dc;
    if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
    }
  }
LAB_0059c6dc:
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


