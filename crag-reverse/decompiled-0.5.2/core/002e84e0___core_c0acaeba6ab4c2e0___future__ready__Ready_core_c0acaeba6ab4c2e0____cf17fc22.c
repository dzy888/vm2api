// 002e84e0 <core[c0acaeba6ab4c2e0]::future::ready::Ready<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::future::ready::Ready<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,
   core[c0acaeba6ab4c2e0]::io::error::Error>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::future::ready::Ready<core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::IntoIter<core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr>,core[c0acaeba6ab4c2e0]::io::error::Error>>>
          (short param_1,uint param_2)

{
  if (param_1 == -1) {
    if ((1 < (param_2 & 3) - 2) && ((param_2 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
      return;
    }
  }
  return;
}


