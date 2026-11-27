// 0063c020 <craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::binding::socks5_connect::_closure_0_>(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x04') {
    <craggemini_core[66f3c71560d70857]::binding::http_connect::_closure_0_>(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x05') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x20);
    return;
  }
  return;
}


