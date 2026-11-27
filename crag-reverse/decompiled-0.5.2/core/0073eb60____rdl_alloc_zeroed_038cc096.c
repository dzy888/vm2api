// 0073eb60 __rdl_alloc_zeroed

/* WARNING: Removing unreachable block (ram,0x0073ebd2) */
/* __rustc[100742bb89c490cb]::__rdl_alloc_zeroed */

undefined8 __rustcall
__rustc[100742bb89c490cb]::__rdl_alloc_zeroed(ulonglong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if (param_2 < 0x11 && param_2 <= param_1) {
    uVar1 = (*(code *)PTR_calloc_0079add8)();
    return uVar1;
  }
  (*(code *)PTR_posix_memalign_0079adc0)(param_2 <= param_1,param_1);
  return 0;
}


