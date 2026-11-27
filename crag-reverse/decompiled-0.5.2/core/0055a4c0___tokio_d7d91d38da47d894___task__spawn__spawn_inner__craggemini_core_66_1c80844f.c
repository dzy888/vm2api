// 0055a4c0 <tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::task::spawn::spawn_inner<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_>::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  
  lVar1 = param_1 + 0x10;
  cVar2 = *(char *)(param_1 + 0x38);
  if (cVar2 == '\0') {
    plVar3 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x30);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(lVar1);
  }
  else {
    if (cVar2 == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x78) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))();
      }
      if ((((*(char *)(param_1 + 0x148) == '\x03') && (*(char *)(param_1 + 0xd0) == '\x03')) &&
          (*(char *)(param_1 + 0x140) == '\x03')) && (*(char *)(param_1 + 0x138) == '\x03')) {
        (*(code *)PTR_drop_007990e0)();
        if (*(longlong *)(param_1 + 0x110) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x110) + 0x18))();
        }
      }
    }
    else {
      if (cVar2 != '\x04') {
        return;
      }
      if (*(char *)(param_1 + 0x140) == '\x03') {
        if (*(longlong *)(param_1 + 0x110) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
        if (*(longlong *)(param_1 + 0xf8) != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
        }
      }
      if (*(longlong *)(param_1 + 0x40) != 2) {
        if (*(longlong *)(param_1 + 0x40) == 0) {
          plVar3 = *(longlong **)(param_1 + 0x48);
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            (*(code *)PTR_drop_slow_00799078)();
          }
        }
        else {
          plVar3 = *(longlong **)(param_1 + 0x48);
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            (*(code *)PTR_drop_slow_00799070)();
          }
        }
        <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                  (param_1 + 0x50);
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x148);
      if (*(int *)(param_1 + 0x160) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x148);
      *(undefined1 *)(param_1 + 0x3a) = 0;
      if (*(int *)(param_1 + 0x168) == 2) {
        <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (param_1 + 0x168);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x30);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(lVar1);
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(lVar1);
  return;
}


