// 00149370 <craggemini[b21da2d71f2da7a3]::license::Device>

/* WARNING: Switch with 1 destination removed at 0x001493fa */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini[b21da2d71f2da7a3]::license::Device>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)PTR_zeroize_00219c50)();
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[6] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[9] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (param_1[0xc] == 0) {
    return;
  }
  (*(code *)PTR_free_0021a8b8)(param_4,1);
  return;
}


