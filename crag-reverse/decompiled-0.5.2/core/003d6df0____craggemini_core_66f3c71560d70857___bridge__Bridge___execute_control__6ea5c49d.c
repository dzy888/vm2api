// 003d6df0 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::execute_control::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  cVar1 = *(char *)(param_1 + 0x109);
  if (cVar1 == '\x03') {
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>>
              (param_1 + 0x128);
    if (*(longlong *)(param_1 + 0x110) != 0) goto LAB_003d6eda;
LAB_003d6ebd:
    cVar1 = *(char *)(param_1 + 0x108);
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_>>
                (param_1 + 0x110);
      goto LAB_003d6ebd;
    }
    if (*(char *)(param_1 + 600) == '\x03') {
      if (*(longlong *)(param_1 + 0x228) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
      puVar2 = (ulonglong *)(param_1 + 0x1a0);
    }
    else {
      if (*(char *)(param_1 + 600) != '\0') goto LAB_003d6ebd;
      puVar2 = (ulonglong *)(param_1 + 0x110);
    }
    uVar4 = *puVar2 ^ 0x8000000000000000;
    uVar3 = 2;
    if (uVar4 < 5) {
      uVar3 = uVar4;
    }
    if (uVar3 == 1) {
      if ((longlong)puVar2[1] < 1) goto LAB_003d6ebd;
    }
    else if ((uVar3 != 2) || (0xfffffffffffffffc < *puVar2 - 1)) goto LAB_003d6ebd;
LAB_003d6eda:
    (*(code *)PTR___rust_dealloc_00798fc8)();
    cVar1 = *(char *)(param_1 + 0x108);
  }
  if (cVar1 != '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x70) ^ 0x8000000000000000;
    uVar4 = 2;
    if (uVar3 < 5) {
      uVar4 = uVar3;
    }
    if (uVar4 == 1) {
      if (0 < *(longlong *)(param_1 + 0x78)) goto LAB_003d6f44;
    }
    else if ((uVar4 == 2) &&
            (uVar3 = *(ulonglong *)(param_1 + 0x70) - 1, uVar3 < 0xfffffffffffffffd)) {
LAB_003d6f44:
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,1);
      *(undefined1 *)(param_1 + 0x108) = 0;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}


