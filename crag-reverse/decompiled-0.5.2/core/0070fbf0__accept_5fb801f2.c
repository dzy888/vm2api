// 0070fbf0 accept

/* mio[4b4dae02747c797f]::sys::unix::tcp::accept */

undefined4 * __rustcall
mio[4b4dae02747c797f]::sys::unix::tcp::accept(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 in_R10D;
  undefined8 in_R11;
  undefined4 local_94;
  short local_90;
  ushort local_8e;
  int local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  
  local_94 = 0x80;
  iVar5 = *param_2;
  iVar1 = (*(code *)PTR_accept4_0079aa40)(0x80800,&local_94);
  if (iVar1 < 0) {
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar5 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar5 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    if (local_90 == 10) {
      uVar3 = local_8e << 8 | local_8e >> 8;
      iVar4 = local_88 << 0x10;
      uVar6 = 1;
      in_R11 = local_84;
      iVar5 = local_8c;
    }
    else {
      if (local_90 != 2) {
        *(undefined8 *)(param_1 + 2) = 0x1400000003;
        *param_1 = 1;
        (*(code *)PTR_close_00799030)();
        return param_1;
      }
      local_88._2_2_ = local_8e << 8 | local_8e >> 8;
      uVar6 = 0;
      uVar3 = 2;
      iVar4 = local_8c;
      local_7c = in_R10D;
      local_78 = (int)&local_90;
    }
    param_1[1] = iVar1;
    *(undefined2 *)(param_1 + 2) = uVar6;
    *(int *)((longlong)param_1 + 10) = iVar4;
    *(ushort *)((longlong)param_1 + 0xe) = local_88._2_2_;
    *(undefined8 *)(param_1 + 4) = in_R11;
    param_1[6] = local_7c;
    param_1[7] = iVar5;
    param_1[8] = local_78;
    *(ushort *)(param_1 + 9) = uVar3;
    *param_1 = 0;
  }
  return param_1;
}


