// 00361340 <tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>>

/* WARNING: Switch with 1 destination removed at 0x00361436 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::{closure#0}::{closure#0}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::CoreStage<<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>::start::_closure_0_::_closure_0_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (*param_1 == 1) {
    if ((*(longlong *)(param_1 + 2) != 0) && (*(longlong *)(param_1 + 4) != 0)) {
      puVar4 = *(undefined8 **)(param_1 + 6);
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
      }
      if (puVar4[1] != 0) {
        (*(code *)PTR_free_0079adc8)(param_4,puVar4[2]);
        return;
      }
    }
  }
  else if (*param_1 == 0) {
    piVar1 = param_1 + 2;
    cVar2 = (char)param_1[0xc];
    if (cVar2 == '\0') {
      plVar3 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 10);
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
    }
    else {
      if (cVar2 == '\x03') {
        (*(code *)PTR_drop_007990e8)();
        if (*(longlong *)(param_1 + 0x1c) != 0) {
          (**(code **)(*(longlong *)(param_1 + 0x1c) + 0x18))();
        }
        if (((((char)param_1[0x50] == '\x03') && ((char)param_1[0x32] == '\x03')) &&
            ((char)param_1[0x4e] == '\x03')) && ((char)param_1[0x4c] == '\x03')) {
          (*(code *)PTR_drop_007990e0)();
          if (*(longlong *)(param_1 + 0x42) != 0) {
            (**(code **)(*(longlong *)(param_1 + 0x42) + 0x18))();
          }
        }
      }
      else {
        if (cVar2 != '\x04') {
          return;
        }
        if ((char)param_1[0x4e] == '\x03') {
          if (*(longlong *)(param_1 + 0x42) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
          }
          if (*(longlong *)(param_1 + 0x3c) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
          }
        }
        if (*(longlong *)(param_1 + 0xe) != 2) {
          if (*(longlong *)(param_1 + 0xe) == 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799078)();
            }
          }
          else {
            plVar3 = *(longlong **)(param_1 + 0x10);
            LOCK();
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
              (*(code *)PTR_drop_slow_00799070)();
            }
          }
          <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                    (param_1 + 0x12);
        }
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::stream::TcpStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 0x50);
        if (param_1[0x56] != -1) {
          (*(code *)PTR_close_00799030)();
        }
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 0x50);
        *(undefined1 *)((longlong)param_1 + 0x32) = 0;
        if (param_1[0x58] == 2) {
          <core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream,core[c0acaeba6ab4c2e0]::net::socket_addr::SocketAddr),core[c0acaeba6ab4c2e0]::io::error::Error>>
                    (param_1 + 0x58);
        }
      }
      plVar3 = *(longlong **)(param_1 + 10);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::LocalProxyBridge>>
        ::drop_slow(param_1 + 10);
      }
      <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::tcp::listener::TcpListener>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
      ::drop(piVar1);
    }
    if (param_1[8] != -1) {
      (*(code *)PTR_close_00799030)();
    }
    <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(piVar1);
    return;
  }
  return;
}


