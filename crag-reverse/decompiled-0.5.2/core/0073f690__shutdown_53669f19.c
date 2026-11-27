// 0073f690 shutdown

/* <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::shutdown
   <std[6c98fd8553dbae28]::net::tcp::TcpStream>::shutdown
   <std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream>::shutdown */

ulonglong __rustcall <std[6c98fd8553dbae28]::os::unix::net::datagram::UnixDatagram>::shutdown(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)PTR_shutdown_0079aa90)();
  if (iVar1 != -1) {
    return 0;
  }
  piVar2 = (int *)(*(code *)PTR___errno_location_007990a0)();
  iVar1 = *piVar2;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return (longlong)iVar1 << 0x20 | 2;
}


