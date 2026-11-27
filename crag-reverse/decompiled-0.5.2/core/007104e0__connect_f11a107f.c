// 007104e0 connect

/* <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>::connect */

undefined4 * __rustcall
<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>::connect
          (undefined4 *param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = *param_2;
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
    if ((char)uVar1 == '\0') {
      uVar6 = 0;
      uVar7 = 0;
      uVar5 = 0x10;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 2);
      uVar7 = *(undefined4 *)(param_2 + 8);
      uVar5 = 0x1c;
    }
    iVar3 = (*(code *)PTR_connect_00799ac8)(uVar6,uVar5,param_5,param_6,uVar7);
    if (iVar3 < 0) {
      piVar4 = (int *)(*(code *)PTR___errno_location_007990a0)();
      iVar3 = *piVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_fd589e0c03f471486598030c1886da9b_0_llvm_2904766949904329266) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
      if (iVar3 != 0x73) {
        *(ulonglong *)(param_1 + 2) = (longlong)iVar3 << 0x20 | 2;
        *param_1 = 1;
        (*(code *)PTR_close_00799030)();
        return param_1;
      }
    }
    param_1[1] = iVar2;
    *param_1 = 0;
  }
  return param_1;
}


