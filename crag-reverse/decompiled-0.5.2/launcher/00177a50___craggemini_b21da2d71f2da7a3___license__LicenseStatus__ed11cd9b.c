// 00177a50 <craggemini[b21da2d71f2da7a3]::license::LicenseStatus>

/* WARNING: Switch with 1 destination removed at 0x00177aa3 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::LicenseStatus> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::LicenseStatus>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x60) == -1) || (*(longlong *)(param_1 + 0x60) == 0)) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


