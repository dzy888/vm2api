// 0070f940 new

/* <mio[4b4dae02747c797f]::sys::unix::waker::Waker>::new */

undefined4 * __rustcall
<mio[4b4dae02747c797f]::sys::unix::waker::Waker>::new
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  undefined8 local_28;
  
  iVar1 = (*(code *)PTR_eventfd_0079a248)();
  if (iVar1 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    local_2c = 0x80002001;
    local_28 = param_3;
    iVar2 = (*(code *)PTR_epoll_ctl_0079aaa8)(&local_2c,iVar1);
    if (iVar2 < 0) {
      piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar1 = *piVar3;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
      *param_1 = 1;
      (*(code *)PTR_close_00799030)();
    }
    else {
      param_1[1] = iVar1;
      *param_1 = 0;
    }
  }
  return param_1;
}


