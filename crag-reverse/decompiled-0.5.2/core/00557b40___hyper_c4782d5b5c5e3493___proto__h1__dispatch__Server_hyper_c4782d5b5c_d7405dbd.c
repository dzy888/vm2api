// 00557b40 <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (*plVar1 != 0) {
    if ((char)plVar1[0x77c] == '\x03') {
      <craggemini_core[66f3c71560d70857]::server::handle::_closure_0_>(plVar1 + 0x21);
      plVar2 = (longlong *)plVar1[0x20];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
        drop_slow(plVar1 + 0x20);
      }
    }
    else if ((char)plVar1[0x77c] == '\0') {
      plVar2 = (longlong *)plVar1[0x20];
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
        drop_slow(plVar1 + 0x20);
      }
      <http[56314f485c23ccf6]::request::Request<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
                (plVar1 + 1);
    }
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::server::Runtime>>::
    drop_slow(param_1 + 1,0x3be8);
    return;
  }
  return;
}


