// 00161850 <craggemini[b21da2d71f2da7a3]::license::host::SlotPermit>

/* WARNING: Switch with 1 destination removed at 0x0016196b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::host::SlotPermit>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::host::SlotPermit>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[0x15] != -1) && (param_1[0x15] != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[0x18] != -1) && (param_1[0x18] != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((param_1[0x1b] != -1) && (param_1[0x1b] != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[0xc] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[0xf] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[0x12] == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


