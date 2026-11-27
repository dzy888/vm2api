// 00355f80 new

/* <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>, axum_core[61c49771464cda0a]::body::Body,
   hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>::new */

longlong __rustcall
<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
::new(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  (*(code *)PTR_memcpy_00799008)(param_4,0x250);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *puVar2 = 0;
  (*(code *)PTR_memcpy_00799008)();
  *(undefined8 *)(param_1 + 0x260) = param_2;
  *(undefined8 *)(param_1 + 0x268) = param_3;
  *(undefined1 *)(param_1 + 600) = 2;
  *(undefined8 **)(param_1 + 0x270) = puVar2;
  *(undefined1 *)(param_1 + 0x278) = 0;
  return param_1;
}


