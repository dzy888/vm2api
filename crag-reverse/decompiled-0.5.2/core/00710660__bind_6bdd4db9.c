// 00710660 bind

/* <mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>::bind */

undefined4 * __rustcall
<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>::bind
          (undefined4 *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  ulonglong uVar10;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uVar9 = *param_2;
  iVar2 = (*(code *)PTR_socket_0079aa88)(param_4,0);
  if (iVar2 < 0) {
    piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar4;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar2 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    local_3c = 1;
    puVar7 = &local_3c;
    iVar3 = (*(code *)PTR_setsockopt_0079aa48)(puVar7,2,4);
    uVar6 = SUB84(puVar7,0);
    if (iVar3 < 0) {
      puVar5 = (uint *)(*(code *)PTR___errno_location_007990a0)();
      uVar10 = (ulonglong)*puVar5;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
    }
    else {
      if ((char)uVar9 == '\0') {
        uVar1 = param_2[3] << 8 | (ushort)param_2[3] >> 8;
        puVar7 = (undefined4 *)(param_2 + 1);
        local_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        uVar8 = 0x10;
        uVar9 = 2;
      }
      else {
        uVar1 = param_2[0xe] << 8 | (ushort)param_2[0xe] >> 8;
        local_34 = *(undefined4 *)(param_2 + 2);
        uStack_30 = *(undefined4 *)(param_2 + 4);
        uStack_2c = *(undefined4 *)(param_2 + 6);
        uStack_28 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined4 *)(param_2 + 0xc);
        puVar7 = (undefined4 *)(param_2 + 10);
        uVar8 = 0x1c;
        uVar9 = 10;
      }
      local_38 = *puVar7;
      local_3c = CONCAT22(uVar1,uVar9);
      local_24 = uVar6;
      iVar3 = (*(code *)PTR_bind_0079aa68)(local_34,uVar8);
      if (iVar3 < 0) {
        puVar5 = (uint *)(*(code *)PTR___errno_location_007990a0)();
        uVar10 = (ulonglong)*puVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
            &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
      }
      else {
        iVar3 = (*(code *)PTR_listen_0079aa80)();
        if (-1 < iVar3) {
          param_1[1] = iVar2;
          *param_1 = 0;
          return param_1;
        }
        puVar5 = (uint *)(*(code *)PTR___errno_location_007990a0)();
        uVar10 = (ulonglong)*puVar5;
        if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
            &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
          (*(code *)PTR_set_functions_inner_007990c0)();
        }
      }
    }
    *(ulonglong *)(param_1 + 2) = uVar10 << 0x20 | 2;
    *param_1 = 1;
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


