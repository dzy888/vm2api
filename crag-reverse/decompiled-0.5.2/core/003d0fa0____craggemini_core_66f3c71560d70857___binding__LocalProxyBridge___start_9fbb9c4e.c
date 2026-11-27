// 003d0fa0 <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_>
          (longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 0x28);
  if (cVar1 == '\0') {
    plVar2 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x20);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
  }
  else {
    if (cVar1 == '\x03') {
      <(tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture,<tokio[d7d91d38da47d894]::net::tcp::listener::TcpListener>::accept::_closure_0_)>
                (param_1 + 0x40);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      <tokio[d7d91d38da47d894]::time::timeout::Timeout<craggemini_core[66f3c71560d70857]::binding::write_proxy_error_response::_closure_0_>>
                (param_1 + 0x30);
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 0x138);
      if (*(int *)(param_1 + 0x150) != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x138);
      *(undefined1 *)(param_1 + 0x2a) = 0;
      if (*(int *)(param_1 + 0x158) == 2) {
        <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (param_1 + 0x158);
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x20);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
  }
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  return;
}


