// 0063ef00 <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0})>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,
   tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,
   tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::{closure#0})> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
  }
  if (*(char *)(param_1 + 0x150) == '\x03') {
    <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional_impl<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_>
              (param_1 + 0x58);
    return;
  }
  return;
}


