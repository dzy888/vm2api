// 000621f0 create_eventfd

/* agy_bridge[64a9e9deac6c45ce]::shm::create_eventfd */

undefined4 * __rustcall agy_bridge[64a9e9deac6c45ce]::shm::create_eventfd(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = (*(code *)PTR_eventfd_000c3db8)();
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 !=
        &anon_babcb22509c8a1a9c6820558c700cea8_11_llvm_16528485329418314689) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    uVar3 = 1;
  }
  else {
    param_1[1] = iVar1;
  }
  *param_1 = uVar3;
  return param_1;
}


