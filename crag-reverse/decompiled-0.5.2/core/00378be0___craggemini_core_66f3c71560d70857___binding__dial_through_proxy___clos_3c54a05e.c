// 00378be0 <craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_>(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x12d4) != '\x03') {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  cVar2 = *(char *)(param_1 + 0xc0);
  if (cVar2 == '\x05') {
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 200);
    goto switchD_00378c3f_default;
  }
  if (cVar2 == '\x04') {
    cVar2 = *(char *)(param_1 + 0x14d);
    if (cVar2 == '\x05') {
      <craggemini_core[66f3c71560d70857]::binding::read_http_head::_closure_0_>(param_1 + 0x150);
LAB_00378cfd:
      if (*(longlong *)(param_1 + 0x128) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (*(longlong *)(param_1 + 0x110) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 200);
      if (*(int *)(param_1 + 0xe0) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 200);
    }
    else {
      if (cVar2 == '\x04') goto LAB_00378cfd;
      if (cVar2 != '\x03') goto switchD_00378c3f_default;
      <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
                (param_1 + 0x150);
    }
    *(undefined1 *)(param_1 + 0x14c) = 0;
    lVar3 = *plVar1;
    goto joined_r0x00378d68;
  }
  if (cVar2 != '\x03') {
switchD_00378c3f_default:
    lVar3 = *plVar1;
    goto joined_r0x00378d68;
  }
  switch(*(undefined1 *)(param_1 + 0x15c)) {
  case 3:
    <<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::connect<(&str,u16)>::_closure_0_>
              (param_1 + 0x160);
    break;
  case 6:
  case 7:
    if (*(longlong *)(param_1 + 0x118) == 0) goto switchD_00378c3f_caseD_4;
    goto LAB_00378c52;
  case 0xf:
    if (*(longlong *)(param_1 + 0x160) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_00378c3f::switchdataD_00192264,1);
    }
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    if (*(longlong *)(param_1 + 0x130) != 0) {
LAB_00378c52:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  case 4:
  case 5:
  case 8:
  case 9:
switchD_00378c3f_caseD_4:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 200);
    if (*(int *)(param_1 + 0xe0) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 200);
    break;
  default:
    goto switchD_00378c3f_default;
  }
  *(undefined1 *)(param_1 + 0x15b) = 0;
  lVar3 = *plVar1;
joined_r0x00378d68:
  if (lVar3 == 2) {
    return;
  }
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x40);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>(param_1 + 0x48);
  return;
}


