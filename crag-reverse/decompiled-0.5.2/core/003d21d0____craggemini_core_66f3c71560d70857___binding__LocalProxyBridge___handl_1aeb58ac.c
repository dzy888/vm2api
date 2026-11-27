// 003d21d0 <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  switch(*(undefined1 *)(param_1 + 0x238)) {
  case 0:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    return;
  default:
    goto switchD_003d21fb_caseD_1;
  case 3:
    <craggemini_core[66f3c71560d70857]::binding::read_http_head::_closure_0_>(param_1 + 0x2b0);
    if (*(longlong *)(param_1 + 0x240) != 2) {
      if (*(longlong *)(param_1 + 0x240) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x248);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar1 = *(longlong **)(param_1 + 0x248);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x250);
    }
    goto LAB_003d24ad;
  case 4:
  case 5:
  case 10:
    goto switchD_003d21fb_caseD_4;
  case 6:
    <craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_>(param_1 + 0x240);
    break;
  case 7:
    if (*(char *)(param_1 + 0x2f0) == '\x03') {
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d21fb::switchdataD_00192ea4,1);
      }
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (*(longlong *)(param_1 + 0x248) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x240) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x240) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    break;
  case 9:
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x270) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x270) + 0x18))();
    }
    <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_>
              (param_1 + 0x290);
  case 8:
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x178);
    if (*(int *)(param_1 + 400) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x178);
    break;
  case 0xb:
    <craggemini_core[66f3c71560d70857]::binding::dial_through_proxy::_closure_0_>(param_1 + 0x240);
    goto LAB_003d2443;
  case 0xc:
    if (*(char *)(param_1 + 0x2f0) == '\x03') {
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(&switchD_003d21fb::switchdataD_00192ea4,1);
      }
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    }
    if (*(longlong *)(param_1 + 0x248) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    if ((1 < ((uint)*(ulonglong *)(param_1 + 0x240) & 3) - 2) &&
       ((*(ulonglong *)(param_1 + 0x240) & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    goto LAB_003d2443;
  case 0xe:
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x270) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x270) + 0x18))();
    }
    <tokio[d7d91d38da47d894]::io::util::copy_bidirectional::copy_bidirectional<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream>::_closure_0_>
              (param_1 + 0x290);
  case 0xd:
    if (*(longlong *)(param_1 + 0x220) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x1e0);
    if (*(int *)(param_1 + 0x1f8) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x1e0);
LAB_003d2443:
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    goto joined_r0x003d2452;
  }
  lVar2 = *(longlong *)(param_1 + 0x160);
joined_r0x003d2452:
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
switchD_003d21fb_caseD_4:
  if ((*(char *)(param_1 + 0x239) != '\0') && (*(longlong *)(param_1 + 0x148) != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  *(undefined1 *)(param_1 + 0x239) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
LAB_003d24ad:
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0x30);
  if (*(int *)(param_1 + 0x48) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x30);
switchD_003d21fb_caseD_1:
  return;
}


