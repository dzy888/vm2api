// 00747070 try_clone

/* <std[6c98fd8553dbae28]::os::unix::net::listener::UnixListener>::try_clone
   <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::try_clone
   <std[6c98fd8553dbae28]::fs::File>::try_clone
   <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::try_clone */

undefined4 * __rustcall
<std[6c98fd8553dbae28]::os::unix::net::listener::UnixListener>::try_clone
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  iVar1 = (*(code *)PTR_fcntl_00799e68)(param_4,3);
  if (iVar1 == -1) {
    piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
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


