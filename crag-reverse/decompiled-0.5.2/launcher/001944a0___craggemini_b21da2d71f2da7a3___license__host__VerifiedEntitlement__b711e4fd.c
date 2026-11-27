// 001944a0 <craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>

/* WARNING: Switch with 1 destination removed at 0x001944e5 */
/* WARNING: Switch with 1 destination removed at 0x00194531 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini[b21da2d71f2da7a3]::license::host::VerifiedEntitlement>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[4] == 0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    if ((int)*param_1 == 1) {
      <craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>();
      return;
    }
    if (param_1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[4] != 0) {
      (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
    }
    if (param_1[7] == 0) {
      return;
    }
    uVar1 = 8;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,uVar1);
  return;
}


