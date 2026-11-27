// 0008f350 set_write_timeout

/* <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::set_write_timeout
   <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::set_write_timeout
   <std[6c98fd8553dbae28]::net::tcp::TcpStream>::set_write_timeout
   <std[6c98fd8553dbae28]::net::udp::UdpSocket>::set_write_timeout */

undefined ** __rustcall
<std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::set_write_timeout
          (undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  longlong local_20;
  ulonglong local_18;
  
  if (param_3 == 0xffffffff) {
    uVar1 = 0;
    param_2 = 0;
  }
  else {
    if (param_2 == 0) {
      if (param_3 == 0) {
        return &PTR_DAT_000c1940;
      }
    }
    else if (param_2 < 0) {
      param_2 = 0x7fffffffffffffff;
      uVar1 = param_3 / 1000;
      goto LAB_0008f3a6;
    }
    uVar1 = 1;
    if (999 < param_3) {
      uVar1 = param_3 / 1000;
    }
    if (param_2 != 0) {
      uVar1 = param_3 / 1000;
    }
  }
LAB_0008f3a6:
  local_18 = (ulonglong)uVar1;
  local_20 = param_2;
  iVar2 = (*(code *)PTR_setsockopt_000c42b0)(&local_20,0x15,0x10);
  if (iVar2 != -1) {
    return (undefined **)0x0;
  }
  piVar3 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
  iVar2 = *piVar3;
  if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
    (*(code *)PTR_set_functions_inner_000c3d08)();
  }
  return (undefined **)((longlong)iVar2 << 0x20 | 2);
}


