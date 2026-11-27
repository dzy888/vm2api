// 003a2330 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send_cancel::_closure_0_>(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0xb1) == '\x03') {
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>
              (param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else {
    if (*(char *)(param_1 + 0xb1) != '\x04') {
      return;
    }
    <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_>(param_1 + 0xb8);
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x20);
    uVar3 = uVar1 ^ 0x8000000000000000;
    uVar2 = 2;
    if (uVar3 < 5) {
      uVar2 = uVar3;
    }
    if (uVar2 == 1) {
      uVar1 = *(ulonglong *)(param_1 + 0x28);
    }
    else if (uVar2 != 2) goto LAB_003a23e8;
    if ((uVar1 < 0xfffffffffffffffe) && (uVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
    }
  }
LAB_003a23e8:
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}


