// 0063d1b0 <craggemini_core[66f3c71560d70857]::binding::http_connect::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::http_connect::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::http_connect::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x85);
  if (cVar1 == '\x03') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x88);
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      <craggemini_core[66f3c71560d70857]::binding::read_http_head::_closure_0_>(param_1 + 0x88);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
  return;
}


