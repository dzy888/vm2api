// 0008f200 set_nonblocking

/* <std[6c98fd8553dbae28]::os::unix::net::listener::UnixListener>::set_nonblocking
   <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::set_nonblocking
   <std[6c98fd8553dbae28]::net::tcp::TcpStream>::set_nonblocking
   <std[6c98fd8553dbae28]::net::udp::UdpSocket>::set_nonblocking
   <std[6c98fd8553dbae28]::net::tcp::TcpListener>::set_nonblocking
   <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::set_nonblocking */

ulonglong __rustcall
<std[6c98fd8553dbae28]::os::unix::net::listener::UnixListener>::set_nonblocking(void)

{
  int iVar1;
  int *piVar2;
  undefined8 in_RCX;
  ulonglong uVar3;
  undefined1 local_14 [4];
  
  uVar3 = 0;
  iVar1 = (*(code *)PTR_ioctl_000c42c0)(in_RCX,local_14);
  if (iVar1 == -1) {
    piVar2 = (int *)(*(code *)PTR___errno_location_000c3cf0)();
    iVar1 = *piVar2;
    if (*(undefined ***)PTR_OS_FUNCTIONS_000c3cf8 != &PTR_call_once_000c1600) {
      (*(code *)PTR_set_functions_inner_000c3d08)();
    }
    uVar3 = (longlong)iVar1 << 0x20 | 2;
  }
  return uVar3;
}


