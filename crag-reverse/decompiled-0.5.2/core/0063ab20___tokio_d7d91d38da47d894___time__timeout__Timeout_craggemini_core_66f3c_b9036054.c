// 0063ab20 <tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_::_closure_0_>>
          (longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (char)param_1[0x11];
  if (cVar1 == '\x05') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x12);
  }
  else if (cVar1 == '\x04') {
    <craggemini_core[66f3c71560d70857]::binding::http_connect::_closure_0_>(param_1 + 0x12);
  }
  else if (cVar1 == '\x03') {
    <craggemini_core[66f3c71560d70857]::binding::socks5_connect::_closure_0_>(param_1 + 0x12);
  }
  if (*param_1 == 2) {
    return;
  }
  if (*param_1 == 0) {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar2 = (longlong *)param_1[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 2);
  return;
}


