// 005958e0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00595942 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*param_1 == 0) {
    if ((char)param_1[0x570] == '\x03') {
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0x1e) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x1e) + 0x18))();
      }
      <<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::handle_client::_closure_0_>
                (param_1 + 0x26);
      (*(code *)PTR_drop_007990f0)();
      plVar2 = *(longlong **)(param_1 + 0x10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_007990d8)();
      }
      plVar2 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 0xe);
        return;
      }
    }
    else if ((char)param_1[0x570] == '\0') {
      (*(code *)PTR_drop_007990f0)();
      plVar2 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        (*(code *)PTR_drop_slow_007990d8)();
      }
      plVar2 = *(longlong **)(param_1 + 0xe);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
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
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (*(longlong *)(param_1 + 4) != 0)) {
    puVar1 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,puVar1[2]);
      return;
    }
  }
  return;
}


