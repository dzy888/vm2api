// 00653950 map_file

/* <craggemini_core[66f3c71560d70857]::shm::Mapping>::map_file */

undefined1  [16] __rustcall
<craggemini_core[66f3c71560d70857]::shm::Mapping>::map_file(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0;
  uVar2 = (*(code *)PTR_mmap_0079a250)(1,3,param_1,0);
  if (uVar2 == 0) {
    uVar2 = (*(code *)PTR_<&str>_007991e8)();
  }
  else {
    if (uVar2 != 0xffffffffffffffff) goto LAB_006539c6;
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_63b06cc94833867f683611f039574387_29_llvm_6903579140370050947) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar2 = (longlong)iVar1 << 0x20 | 2;
  }
  uVar4 = 1;
LAB_006539c6:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


