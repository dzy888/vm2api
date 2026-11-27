// 00557c60 <hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>

/* WARNING: Switch with 1 destination removed at 0x00557d4b */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  <tokio[d7d91d38da47d894]::io::poll_evented::PollEvented<mio[4b4dae02747c797f]::net::uds::stream::UnixStream>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*(int *)(param_1 + 0x18) != -1) {
    (*(code *)PTR_close_00799030)();
  }
  <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>(param_1);
  (*(code *)PTR_drop_007994e8)();
  if (*(longlong *)(param_1 + 0x30) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <alloc[12e961f32105355]::collections::vec_deque::VecDeque<hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop((longlong *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>(param_1 + 0xc0);
  <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
            (param_1 + 0x260);
  <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::SenderDropGuard>(param_1 + 0x250);
  if (**(longlong **)(param_1 + 0x270) != 0) {
    puVar1 = (undefined8 *)(*(longlong **)(param_1 + 0x270))[1];
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
    if (puVar1[1] != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,puVar1[2]);
    }
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


