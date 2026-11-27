// 006a4cc0 __rust_alloc

/* __rustc[100742bb89c490cb]::__rust_alloc */

undefined8 __rustcall __rustc[100742bb89c490cb]::__rust_alloc(ulonglong param_1,ulonglong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0x11 && param_2 <= param_1) {
    uVar2 = (*(code *)PTR_malloc_0079adb8)();
    return uVar2;
  }
  iVar1 = (*(code *)PTR_posix_memalign_0079adc0)(param_2 <= param_1,param_1);
  if (iVar1 == 0) {
    return 0;
  }
  return 0;
}


