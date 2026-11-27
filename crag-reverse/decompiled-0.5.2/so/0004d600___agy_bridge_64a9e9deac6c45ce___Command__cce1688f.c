// 0004d600 <agy_bridge[64a9e9deac6c45ce]::Command>

/* WARNING: Switch with 1 destination removed at 0x0004d796 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Command> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Command>(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = 2;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x8000000000000000;
  }
  switch(uVar2) {
  case 0:
  case 3:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(&switchD_0004d638::switchdataD_0000c90c,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    uVar1 = param_1[10];
    if (uVar1 == 0xffffffffffffffff) {
      return;
    }
    goto joined_r0x0004d77b;
  case 1:
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(&switchD_0004d638::switchdataD_0000c90c,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    if ((param_1[7] != 0xffffffffffffffff) && (param_1[7] != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    uVar1 = param_1[10];
    break;
  case 2:
    if (uVar1 != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)(&switchD_0004d638::switchdataD_0000c90c,1);
    }
    if (param_1[3] != 0) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    if ((param_1[6] != 0xffffffffffffffff) && (param_1[6] != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    if ((param_1[9] != 0xffffffffffffffff) && (param_1[9] != 0)) {
      (*(code *)PTR___rust_dealloc_000c3aa0)();
    }
    uVar1 = param_1[0xc];
    break;
  default:
    uVar1 = param_1[1];
    goto joined_r0x0004d77b;
  }
  if (0xfffffffffffffffd < uVar1) {
    return;
  }
joined_r0x0004d77b:
  if (uVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_000c4290)();
  return;
}


