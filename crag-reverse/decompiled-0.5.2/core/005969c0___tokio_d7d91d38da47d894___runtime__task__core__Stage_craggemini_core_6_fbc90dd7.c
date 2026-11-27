// 005969c0 <tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}>>

/* WARNING: Switch with 1 destination removed at 0x00596a19 */
/* WARNING: Switch with 1 destination removed at 0x00596ac5 */
/* WARNING: Switch with 1 destination removed at 0x006dc4c1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::runtime::task::core::Stage<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_>>
          (int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  if (*param_1 == 0) {
    cVar1 = (char)param_1[0xb4];
    if (cVar1 != '\x04') {
      if (cVar1 != '\x03') {
        if (cVar1 != '\0') {
          return;
        }
        plVar2 = *(longlong **)(param_1 + 10);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
          drop_slow(param_1 + 10);
        }
        <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 2);
        if (param_1[8] != -1) {
          (*(code *)PTR_close_00799030)();
        }
        <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1 + 2);
        return;
      }
      (*(code *)PTR_drop_007990e8)();
      if (*(longlong *)(param_1 + 0xc2) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0xc2) + 0x18))();
      }
    }
    <hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>
              (param_1 + 0xe);
    *(undefined2 *)((longlong)param_1 + 0x2d2) = 0;
    (*(code *)PTR_drop_007990c8)();
    plVar2 = *(longlong **)(param_1 + 0xc);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar3 = *(longlong *)(param_1 + 0xc);
      plVar2 = *(longlong **)(lVar3 + 0x30);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_007990d0)();
        }
      }
      puVar4 = PTR_drop_slow_007990d0;
      if (*(longlong *)(lVar3 + 0x28) != 0) {
        puVar6 = *(undefined8 **)(lVar3 + 0x20);
        lVar7 = 1 - *(longlong *)(lVar3 + 0x28);
        do {
          plVar2 = (longlong *)*puVar6;
          LOCK();
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            (*(code *)puVar4)();
          }
          puVar6 = puVar6 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 1);
      }
      if (*(longlong *)(lVar3 + 0x18) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8,param_5,param_6,unaff_R14,unaff_R15);
      }
      if (lVar3 != -1) {
        LOCK();
        plVar2 = (longlong *)(lVar3 + 8);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          uVar5 = 8;
          goto __rustc_100742bb89c490cb____rust_dealloc;
        }
      }
      return;
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (*(longlong *)(param_1 + 4) != 0)) {
    puVar6 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)();
    }
    if (puVar6[1] != 0) {
      uVar5 = puVar6[2];
__rustc_100742bb89c490cb____rust_dealloc:
      (*(code *)PTR_free_0079adc8)(param_4,uVar5);
      return;
    }
  }
  return;
}


