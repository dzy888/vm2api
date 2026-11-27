// 00764280 write

/* <&std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream as
   std[6c98fd8553dbae28]::io::Write>::write
   <&std[6c98fd8553dbae28]::net::tcp::TcpStream as std[6c98fd8553dbae28]::io::Write>::write */

bool __rustcall
<&std[6c98fd8553dbae28]::os::unix::net::stream::UnixStream_as_std[6c98fd8553dbae28]::io::Write>::
write(void)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_send_0079aa78)(0x4000);
  if ((lVar1 == -1) &&
     ((*(code *)PTR___errno_location_007990a0)(),
     *(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_00796438)) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
  return lVar1 == -1;
}


