// 00710270 new

/* <mio[4b4dae02747c797f]::poll::Poll>::new */

undefined4 * __rustcall <mio[4b4dae02747c797f]::poll::Poll>::new(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = (*(code *)PTR_epoll_create1_0079aab8)();
  if (iVar1 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    uVar2 = 1;
  }
  else {
    param_1[1] = iVar1;
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}


