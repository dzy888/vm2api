// 003d0dd0 <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_>
          (longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x15b8) == '\0') {
    (*(code *)PTR_drop_007990f0)();
    plVar1 = *(longlong **)(param_1 + 0x20);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d8)();
    }
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x30);
    }
    <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1);
    if (*(int *)(param_1 + 0x18) != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x15b8) == '\x03') {
    (*(code *)PTR_drop_007990e8)();
    if (*(longlong *)(param_1 + 0x70) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x70) + 0x18))();
    }
    <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_>
              (param_1 + 0x90);
    (*(code *)PTR_drop_007990f0)();
    plVar1 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_drop_slow_007990d8)();
    }
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
      ::drop_slow(param_1 + 0x30);
      return;
    }
  }
  return;
}


