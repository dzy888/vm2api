// 0063d420 <craggemini_core[66f3c71560d70857]::binding::socks5_connect::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::socks5_connect::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::socks5_connect::_closure_0_>(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x94)) {
  case 3:
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x98);
    break;
  case 6:
  case 7:
    if (*(longlong *)(param_1 + 0x50) == 0) goto switchD_0063d444_caseD_4;
    goto LAB_0063d454;
  case 0xf:
    if (*(longlong *)(param_1 + 0x98) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_0063d444::switchdataD_001a1684,1);
    }
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (*(longlong *)(param_1 + 0x68) != 0) {
LAB_0063d454:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  case 4:
  case 5:
  case 8:
  case 9:
switchD_0063d444_caseD_4:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    break;
  default:
    goto switchD_0063d444_default;
  }
  *(undefined1 *)(param_1 + 0x93) = 0;
switchD_0063d444_default:
  return;
}


