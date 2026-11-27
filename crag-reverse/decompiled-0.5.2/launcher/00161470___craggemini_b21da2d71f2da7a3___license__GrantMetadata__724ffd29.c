// 00161470 <craggemini[b21da2d71f2da7a3]::license::GrantMetadata>

/* WARNING: Switch with 1 destination removed at 0x001614c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::GrantMetadata> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::GrantMetadata>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x50) != -1) && (*(longlong *)(param_1 + 0x50) != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,8);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


