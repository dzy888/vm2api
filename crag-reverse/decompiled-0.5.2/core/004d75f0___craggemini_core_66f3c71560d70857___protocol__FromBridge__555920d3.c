// 004d75f0 <craggemini_core[66f3c71560d70857]::protocol::FromBridge>

/* WARNING: Switch with 1 destination removed at 0x004d7a39 */
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
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
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
    uVar4 = param_1[7];
joined_r0x004d7725:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_004d7880;
  case 1:
  case 0xb:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
    }
    if (param_1[4] == 0xffffffffffffffff) {
      return;
    }
    if (param_1[4] == 0) {
      return;
    }
    goto LAB_004d7a2b;
  case 2:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
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
    if (param_1[0x12] == 0xfffffffffffffffe) {
      return;
    }
    <craggemini_core[66f3c71560d70857]::protocol::CapturedHeaders>(param_1 + 0x12);
    return;
  case 3:
  case 4:
  case 5:
  case 6:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[7];
    goto joined_r0x004d796e;
  case 7:
    uVar4 = param_1[1];
joined_r0x004d76d5:
    if (uVar4 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    goto LAB_004d7a1e;
  case 8:
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
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
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
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
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
    }
    uVar4 = param_1[7];
    if (uVar4 != 0xffffffffffffffff) goto joined_r0x004d76d5;
LAB_004d7a1e:
    uVar4 = param_1[4];
    goto joined_r0x004d796e;
  case 0xc:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_004d7630::switchdataD_00197444,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[7];
    if (uVar4 != 0xffffffffffffffff) goto joined_r0x004d7725;
LAB_004d7880:
    uVar4 = param_1[10];
    break;
  case 0xd:
    uVar4 = param_1[5];
    goto joined_r0x004d796e;
  default:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar4 ^ 0x8000000000000000,1);
    }
    if ((param_1[4] != 0xffffffffffffffff) && (param_1[4] != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    uVar4 = param_1[7];
  }
  if (uVar4 != 0xffffffffffffffff) {
joined_r0x004d796e:
    if (uVar4 != 0) {
LAB_004d7a2b:
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


