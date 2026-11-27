// 0006dc00 __rust_realloc

/* WARNING: Removing unreachable block (ram,0x0008ea38) */
/* WARNING: Removing unreachable block (ram,0x0008ea3b) */
/* WARNING: Removing unreachable block (ram,0x0008ea3f) */
/* __rustc[100742bb89c490cb]::__rust_realloc */

undefined8 __rustcall
__rustc[100742bb89c490cb]::__rust_realloc
          (undefined8 param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (param_3 < 0x11 && param_3 <= param_4) {
    uVar1 = (*(code *)PTR_realloc_000c4298)();
    return uVar1;
  }
  (*(code *)PTR_posix_memalign_000c4288)(param_3 <= param_4,param_4);
  return 0;
}


