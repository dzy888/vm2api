// 006a4ce0 __rust_realloc

/* WARNING: Removing unreachable block (ram,0x0073eaa8) */
/* WARNING: Removing unreachable block (ram,0x0073eaab) */
/* WARNING: Removing unreachable block (ram,0x0073eaaf) */
/* __rustc[100742bb89c490cb]::__rust_realloc */

undefined8 __rustcall
__rustc[100742bb89c490cb]::__rust_realloc
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 0x11 && param_3 <= param_4) {
    uVar1 = (*(code *)PTR_realloc_0079add0)();
    return uVar1;
  }
  (*(code *)PTR_posix_memalign_0079adc0)(param_3 <= param_4,param_4);
  return 0;
}


