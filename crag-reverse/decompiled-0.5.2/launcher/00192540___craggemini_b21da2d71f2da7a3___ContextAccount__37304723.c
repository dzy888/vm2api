// 00192540 <craggemini[b21da2d71f2da7a3]::ContextAccount>

/* WARNING: Switch with 1 destination removed at 0x00192598 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::ContextAccount> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::ContextAccount>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*param_1 != -1) && (*param_1 != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[3] != -1) && (param_1[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[6] == -1) || (param_1[6] == 0)) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


