// 0070ff40 pair

/* mio[4b4dae02747c797f]::sys::unix::uds::stream::pair */

undefined4 * __rustcall mio[4b4dae02747c797f]::sys::unix::uds::stream::pair(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 local_20;
  
  local_20 = 0xffffffffffffffff;
  iVar2 = (*(code *)PTR_socketpair_0079aa50)(&local_20,0);
  if (iVar2 < 0) {
    piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
    uVar3 = 1;
LAB_0070ffbb:
    *param_1 = uVar3;
    return param_1;
  }
  if ((int)local_20 == -1) {
    (*(code *)PTR_expect_failed_00799440)();
  }
  else if (local_20._4_4_ != -1) {
    param_1[1] = (int)local_20;
    param_1[2] = local_20._4_4_;
    uVar3 = 0;
    goto LAB_0070ffbb;
  }
  (*(code *)PTR_expect_failed_00799440)();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


