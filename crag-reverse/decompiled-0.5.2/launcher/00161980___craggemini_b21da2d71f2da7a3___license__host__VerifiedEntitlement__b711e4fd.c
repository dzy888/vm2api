// 00161980 <craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>

/* WARNING: Switch with 1 destination removed at 0x00161aa7 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar2 = 1;
  }
  else if ((int)*param_1 == 1) {
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    puVar1 = PTR___rust_dealloc_00219c40;
    lVar4 = param_1[9];
    if (lVar4 != 0) {
      lVar3 = param_1[8] + 8;
      do {
        if (*(longlong *)(lVar3 + -8) != 0) {
          (*(code *)puVar1)(param_4,1);
        }
        lVar3 = lVar3 + 0x20;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar2 = 8;
  }
  else {
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar2 = 8;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,uVar2);
  return;
}


