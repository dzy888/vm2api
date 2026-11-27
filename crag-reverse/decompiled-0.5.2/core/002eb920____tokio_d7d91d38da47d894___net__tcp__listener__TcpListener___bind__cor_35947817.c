// 002eb920 <<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::bind<(core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv4Addr,u16)>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::bind<(core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv4Addr,
   u16)>::{closure#0}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::bind<(core[c0acaeba6ab4c2e0]::net::ip_addr::Ipv4Addr,u16)>::_closure_0_>
          (short *param_1)

{
  if (((char)param_1[0x13] == '\x03') && (*param_1 == -1)) {
    if ((1 < ((uint)*(ulonglong *)(param_1 + 4) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 4) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
      return;
    }
  }
  return;
}


