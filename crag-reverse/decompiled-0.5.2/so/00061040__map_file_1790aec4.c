// 00061040 map_file

/* <agy_bridge[64a9e9deac6c45ce]::shm::Mapping>::map_file */

undefined1  [16] __rustcall
<agy_bridge[64a9e9deac6c45ce]::shm::Mapping>::map_file(undefined4 param_1)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = 0;
  uVar2 = (*(code *)PTR_mmap_000c3d90)(1,3,param_1,0);
  if (uVar2 == 0) {
    uVar2 = (*(code *)PTR_<&str>_000c3b30)();
  }
  else {
    if (uVar2 != 0xffffffffffffffff) goto LAB_000610b6;
    piVar3 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
        &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar2 = (longlong)iVar1 << 0x20 | 2;
  }
  uVar4 = 1;
LAB_000610b6:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


