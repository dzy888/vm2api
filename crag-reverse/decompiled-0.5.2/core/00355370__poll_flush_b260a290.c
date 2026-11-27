// 00355370 poll_flush

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>, axum_core[61c49771464cda0a]::body::Body,
   hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::poll_flush */

undefined1  [16] __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::poll_flush(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2 = <hyper[c4782d5b5c5e3493]::proto::h1::io::Buffered<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::encode::EncodedBuf<bytes[e9829e187354639b]::bytes::Bytes>>>
           ::poll_flush();
  if ((auVar2._0_8_ & 1) == 0) {
    if (auVar2._8_8_ == 0) {
      <hyper[c4782d5b5c5e3493]::proto::h1::conn::State>::try_keep_alive::
      <hyper[c4782d5b5c5e3493]::proto::h1::role::Server>(param_1 + 0xc0);
      <hyper[c4782d5b5c5e3493]::proto::h1::conn::Conn<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,bytes[e9829e187354639b]::bytes::Bytes,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
      ::maybe_notify(param_1,param_2);
      param_2 = 0;
    }
    else {
      param_2 = (*(code *)PTR_new_00799588)();
      <hyper[c4782d5b5c5e3493]::error::Error>::with::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (param_2,auVar2._8_8_);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}


