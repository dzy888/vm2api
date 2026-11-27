// 003610c0 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x0036119e */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar2 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar2 != (code *)0x0) {
        (*(code *)*puVar2)();
      }
      if (puVar2[1] != 0) {
        (*(code *)PTR_free_0079adc8)(param_4,puVar2[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    if ((char)param_1[0x570] == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x1e) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1e) + 0x18))();
      }
      <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_>
                (param_1 + 0x26);
      (*(code *)PTR_drop_007990f0)();
      plVar1 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007990d8)();
      }
      plVar1 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 0xe);
        return;
      }
    }
    else if ((char)param_1[0x570] == '\0') {
      (*(code *)PTR_drop_007990f0)();
      plVar1 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007990d8)();
      }
      plVar1 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 0xe);
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(param_1 + 2);
      if (param_1[8] != -1) {
        (*(code *)PTR_close_00799030)();
      }
      <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 2);
      return;
    }
  }
  return;
}


