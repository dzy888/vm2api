// 0073f310 take_error

/* <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::take_error
   <std[6c98fd8553dbae28]::os::unix::net::listener::UnixListener>::take_error
   <std[6c98fd8553dbae28]::net::udp::UdpSocket>::take_error
   <std[6c98fd8553dbae28]::net::tcp::TcpStream>::take_error
   <std[6c98fd8553dbae28]::net::tcp::TcpListener>::take_error
   <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::take_error */

undefined1  [16] __rustcall
<std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::take_error(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int *piVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined8 local_18;
  
  local_18 = 4;
  iVar2 = (*(code *)PTR_getsockopt_0079a8e8)((longlong)&local_18 + 4,4,&local_18);
  if (iVar2 == -1) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar2 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    auVar6._8_8_ = (longlong)iVar2 << 0x20 | 2;
    auVar6._0_8_ = 1;
    return auVar6;
  }
  lVar4 = (longlong)local_18._4_4_;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    uVar5 = lVar4 << 0x20 | 2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  return auVar1 << 0x40;
}


