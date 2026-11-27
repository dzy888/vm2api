// 0025f1d0 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  cVar1 = *(char *)(param_1 + 0x109);
  if (cVar1 == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
              (param_1 + 0x128);
    uVar2 = *(ulonglong *)(param_1 + 0x110);
joined_r0x0025f235:
    if (uVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  else if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 600) == '\x03') {
      if (*(longlong *)(param_1 + 0x228) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      puVar3 = (ulonglong *)(param_1 + 0x1a0);
    }
    else {
      if (*(char *)(param_1 + 600) != '\0') goto LAB_0025f2be;
      puVar3 = (ulonglong *)(param_1 + 0x110);
    }
    uVar2 = *puVar3;
    uVar4 = 2;
    if ((uVar2 ^ 0x8000000000000000) < 5) {
      uVar4 = uVar2 ^ 0x8000000000000000;
    }
    if (uVar4 == 1) {
      uVar2 = puVar3[1];
    }
    else if (uVar4 != 2) goto LAB_0025f2be;
    if (uVar2 < 0xfffffffffffffffe) goto joined_r0x0025f235;
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
              (param_1 + 0x110);
  }
LAB_0025f2be:
  if (*(char *)(param_1 + 0x108) != '\0') {
    uVar2 = *(ulonglong *)(param_1 + 0x70);
    uVar5 = uVar2 ^ 0x8000000000000000;
    uVar4 = 2;
    if (uVar5 < 5) {
      uVar4 = uVar5;
    }
    if (uVar4 == 1) {
      uVar2 = *(ulonglong *)(param_1 + 0x78);
    }
    else if (uVar4 != 2) goto LAB_0025f331;
    if ((uVar2 < 0xfffffffffffffffe) && (uVar2 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      *(undefined1 *)(param_1 + 0x108) = 0;
      return;
    }
  }
LAB_0025f331:
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}


