// 003e9d40 <(&mut_core[c0acaeba6ab4c2e0]::pin::Pin<&mut_hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(&mut core[c0acaeba6ab4c2e0]::pin::Pin<&mut
   hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>,
   tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(&mut_core[c0acaeba6ab4c2e0]::pin::Pin<&mut_hyper[c4782d5b5c5e3493]::server::conn::http1::Connection<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>>,tokio_util[7eb2677d58d7e81f]::sync::cancellation_token::WaitForCancellationFuture)>
          (longlong param_1)

{
  (*(code *)PTR_drop_007990e8)();
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9d65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))();
  return;
}


