// 007039a0 as_raw_fd

/* <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream as
   std[6c98fd8553dbae28]::os::fd::raw::AsRawFd>::as_raw_fd
   <tokio[d7d91d38da47d894]::net::unix::stream::UnixStream as
   std[6c98fd8553dbae28]::os::fd::raw::AsRawFd>::as_raw_fd */

void __rustcall
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream_as_std[6c98fd8553dbae28]::os::fd::raw::AsRawFd>
::as_raw_fd(longlong param_1)

{
  code *pcVar1;
  
  if (*(int *)(param_1 + 0x18) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


