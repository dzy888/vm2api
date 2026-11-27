// 0063c230 <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect_mio::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect_mio::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect_mio::_closure_0_>(longlong param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
    (*(code *)PTR_close_00799030)();
    return;
  }
  if (*(char *)(param_1 + 0x2c) != '\x03') {
    return;
  }
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1);
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  return;
}


