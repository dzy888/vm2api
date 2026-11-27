// 004118e0 <craggemini_core[66f3c71560d70857]::protocol::FromBridge>

/* WARNING: Switch with 1 destination removed at 0x00411def */
/* WARNING: Type propagation algorithm not settling */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::FromBridge>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::protocol::FromBridge>
          (ulonglong *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = *param_1;
  uVar2 = 2;
  if ((longlong)uVar4 < 0) {
    uVar2 = uVar4 ^ 0x8000000000000000;
  }
  switch(uVar2) {
  case 0:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    puVar1 = PTR___rust_dealloc_00798fc8;
    uVar4 = param_1[9];
    if (uVar4 != 0) {
      lVar3 = param_1[8] + 8;
      do {
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar1)();
        }
        lVar3 = lVar3 + 0x18;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    if (param_1[7] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[10];
    break;
  case 1:
  case 0xb:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    uVar4 = param_1[4];
    break;
  case 2:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[6] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[9] != 0xffffffffffffffff) && (param_1[9] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0xc] != 0xffffffffffffffff) && (param_1[0xc] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0xf] != 0xffffffffffffffff) && (param_1[0xf] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[0x12];
    if (uVar4 == 0xfffffffffffffffe) {
      return;
    }
    if ((uVar4 != 0xffffffffffffffff) && (uVar4 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0x15] != 0xffffffffffffffff) && (param_1[0x15] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0x18] != 0xffffffffffffffff) && (param_1[0x18] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0x1b] != 0xffffffffffffffff) && (param_1[0x1b] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0x1e] != 0xffffffffffffffff) && (param_1[0x1e] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[0x21];
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[7];
    goto joined_r0x00411d26;
  case 7:
    uVar4 = param_1[1];
joined_r0x004119c6:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_00411dcf;
  case 8:
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[10] != 0xffffffffffffffff) && (param_1[10] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[0xd] != 0xffffffffffffffff) && (param_1[0xd] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[0x10];
    break;
  case 9:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[10] != 0xffffffffffffffff) && (param_1[10] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[0xd];
    break;
  case 10:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    uVar4 = param_1[7];
    if (uVar4 != 0xffffffffffffffff) goto joined_r0x004119c6;
LAB_00411dcf:
    uVar4 = param_1[4];
    goto joined_r0x00411d26;
  case 0xc:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00411920::switchdataD_00193d4c,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[10];
    break;
  case 0xd:
    uVar4 = param_1[5];
joined_r0x00411d26:
    if (uVar4 == 0) {
      return;
    }
    goto LAB_00411ddd;
  default:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar4 ^ 0x8000000000000000,1);
    }
    if ((param_1[4] != 0xffffffffffffffff) && (param_1[4] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[7];
  }
  if (0xfffffffffffffffd < uVar4 - 1) {
    return;
  }
LAB_00411ddd:
  (*(code *)PTR_free_0079adc8)();
  return;
}


