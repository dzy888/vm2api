// 001a3060 __rust_realloc

/* WARNING: Removing unreachable block (ram,0x001dbe68) */
/* WARNING: Removing unreachable block (ram,0x001dbe6b) */
/* WARNING: Removing unreachable block (ram,0x001dbe6f) */
/* __rustc[100742bb89c490cb]::__rust_realloc */

undefined8 __rustcall
__rustc[100742bb89c490cb]::__rust_realloc
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 0x11 && param_3 <= param_4) {
    uVar1 = (*(code *)PTR_realloc_0021a8c0)();
    return uVar1;
  }
  (*(code *)PTR_posix_memalign_0021a8b0)(param_3 <= param_4,param_4);
  return 0;
}


