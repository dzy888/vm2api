// 003aa350 <craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>

/* WARNING: Switch with 1 destination removed at 0x003aa533 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::resume::CanonicalMessage>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    lVar2 = param_1[7] + 0x50;
    do {
      if ((*(longlong *)(lVar2 + -0x20) != -1) && (*(longlong *)(lVar2 + -0x20) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -0x50) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + -0x38) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if ((*(longlong *)(lVar2 + -8) != -1) && (*(longlong *)(lVar2 + -8) != 0)) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x60;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  <[craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult]>(param_1[10],param_1[0xb]);
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[0xe];
  if (lVar3 != 0) {
    lVar2 = param_1[0xd] + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[0xc] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  puVar1 = PTR___rust_dealloc_00798fc8;
  lVar3 = param_1[0x11];
  if (lVar3 != 0) {
    lVar2 = param_1[0x10] + 8;
    do {
      if (*(longlong *)(lVar2 + -8) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      lVar2 = lVar2 + 0x18;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  if (param_1[0xf] == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


