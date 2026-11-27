// 00090e60 new

/* <std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::new */

undefined4 * __rustcall
<std[6c98fd8553dbae28]::sys::net::connection::socket::unix::Socket>::new
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = (*(code *)PTR_socket_000c42b8)(param_4,0);
  if (iVar1 == -1) {
    piVar2 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
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


