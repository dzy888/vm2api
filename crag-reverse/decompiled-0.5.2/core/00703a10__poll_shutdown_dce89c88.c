// 00703a10 poll_shutdown

/* <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream as
   tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>::poll_shutdown */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream_as_tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>
::poll_shutdown(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  
  uVar2 = <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::shutdown_std(param_1,1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  return auVar1 << 0x40;
}


