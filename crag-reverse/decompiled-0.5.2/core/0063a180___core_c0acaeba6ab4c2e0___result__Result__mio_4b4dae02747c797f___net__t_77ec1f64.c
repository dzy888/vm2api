// 0063a180 <core[c0acaeba6ab4c2e0]::result::Result<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,
   core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr), core[c0acaeba6ab4c2e0]::io::error::Error>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<(mio[4b4dae02747c797f]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),core[c0acaeba6ab4c2e0]::io::error::Error>>
          (char *param_1)

{
  if (*param_1 == '\0') {
    (*(code *)PTR_close_00799030)();
    return;
  }
  if ((1 < ((uint)*(ulonglong *)(param_1 + 8) & 3) - 2) && ((*(ulonglong *)(param_1 + 8) & 3) != 0))
  {
    (*(code *)PTR_drop_00799040)();
  }
  return;
}


