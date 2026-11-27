// 00710fe0 deregister

/* <mio[4b4dae02747c797f]::net::uds::datagram::UnixDatagram as
   mio[4b4dae02747c797f]::event::source::Source>::deregister
   <mio[4b4dae02747c797f]::net::tcp::stream::TcpStream as
   mio[4b4dae02747c797f]::event::source::Source>::deregister
   <mio[4b4dae02747c797f]::net::tcp::listener::TcpListener as
   mio[4b4dae02747c797f]::event::source::Source>::deregister
   <mio[4b4dae02747c797f]::net::uds::stream::UnixStream as
   mio[4b4dae02747c797f]::event::source::Source>::deregister
   <mio[4b4dae02747c797f]::net::udp::UdpSocket as
   mio[4b4dae02747c797f]::event::source::Source>::deregister */

ulonglong __rustcall
<mio[4b4dae02747c797f]::net::uds::datagram::UnixDatagram_as_mio[4b4dae02747c797f]::event::source::Source>
::deregister(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_epoll_ctl_0079aaa8)(0,*param_1);
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


