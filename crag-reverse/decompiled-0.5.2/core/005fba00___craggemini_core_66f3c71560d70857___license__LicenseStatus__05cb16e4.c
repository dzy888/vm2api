// 005fba00 <craggemini_core[66f3c71560d70857]::license::LicenseStatus>

/* WARNING: Switch with 1 destination removed at 0x005fba53 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::license::LicenseStatus>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::license::LicenseStatus>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x48) != -1) && (*(longlong *)(param_1 + 0x48) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if ((*(longlong *)(param_1 + 0x60) == -1) || (*(longlong *)(param_1 + 0x60) == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,1);
  return;
}


