// 00711040 register

/* <mio[4b4dae02747c797f]::net::uds::datagram::UnixDatagram as
   mio[4b4dae02747c797f]::event::source::Source>::register
   <mio[4b4dae02747c797f]::net::udp::UdpSocket as
   mio[4b4dae02747c797f]::event::source::Source>::register
   <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream as
   mio[4b4dae02747c797f]::event::source::Source>::register
   <mio[4b4dae02747c797f]::net::tcp::listener::TcpListener as
   mio[4b4dae02747c797f]::event::source::Source>::register
   <mio[4b4dae02747c797f]::net::uds::stream::UnixStream as
   mio[4b4dae02747c797f]::event::source::Source>::register */

ulonglong __rustcall
<mio[4b4dae02747c797f]::net::uds::datagram::UnixDatagram_as_mio[4b4dae02747c797f]::event::source::Source>
::register(undefined4 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  int *piVar2;
  uint local_14;
  undefined8 local_10;
  
  iVar1 = -0x7fffdfff;
  if ((param_4 & 1) == 0) {
    iVar1 = -0x80000000;
  }
  local_14 = (uint)(param_4 >> 3 & 2) | iVar1 + (uint)(param_4 & 2) * 2;
  local_10 = param_3;
  iVar1 = (*(code *)PTR_epoll_ctl_0079aaa8)(&local_14,*param_1);
  if (-1 < iVar1) {
    return 0;
  }
  piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
      &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


