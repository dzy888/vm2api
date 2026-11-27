// 0063b220 <<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,
   core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),
   <tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::async_io<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1)

{
  if (((*(char *)(param_1 + 0x30) == '\x03') && (*(char *)(param_1 + 0xa0) == '\x03')) &&
     (*(char *)(param_1 + 0x98) == '\x03')) {
    (*(code *)PTR_drop_007990e0)();
    if (*(longlong *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0063b25d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))();
      return;
    }
  }
  return;
}


