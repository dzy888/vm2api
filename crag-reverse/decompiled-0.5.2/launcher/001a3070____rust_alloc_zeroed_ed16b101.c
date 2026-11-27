// 001a3070 __rust_alloc_zeroed

/* WARNING: Removing unreachable block (ram,0x001dbf92) */
/* __rustc[100742bb89c490cb]::__rust_alloc_zeroed */

undefined8 __rustcall
__rustc[100742bb89c490cb]::__rust_alloc_zeroed(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x11 && param_2 <= param_1) {
    uVar1 = (*(code *)PTR_calloc_0021a8c8)();
    return uVar1;
  }
  (*(code *)PTR_posix_memalign_0021a8b0)(param_2 <= param_1,param_1);
  return 0;
}


