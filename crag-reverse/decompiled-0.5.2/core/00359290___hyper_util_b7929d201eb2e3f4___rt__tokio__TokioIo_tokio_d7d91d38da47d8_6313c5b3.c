// 00359290 <hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>

/* WARNING: Removing unreachable block (ram,0x0035946b) */
/* WARNING: Removing unreachable block (ram,0x00359471) */
/* WARNING: Removing unreachable block (ram,0x003594c2) */
/* <hyper[c4782d5b5c5e3493]::server::conn::http1::Builder>::serve_connection::<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,
   hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},
   hyper[c4782d5b5c5e3493]::body::incoming::Incoming>> */

undefined8 __rustcall
<hyper[c4782d5b5c5e3493]::server::conn::http1::Builder>::serve_connection::
<hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::_closure_0_::_closure_1_::_closure_0_,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar5 [16];
  char *local_280;
  undefined *local_278;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar3 = (*(code *)PTR___rust_alloc_00799000)();
  if (lVar3 == 0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (*plVar1 == 0 || SCARRY8(lVar3,1) != *plVar1 < 0) goto LAB_003596ca;
    }
    uVar4 = (*(code *)PTR_check_007995f8)(0x13);
    if ((*(char *)(param_2 + 0x38) == '\0') || (0x1fff < *(ulonglong *)(param_2 + 0x40))) {
      auVar5 = <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>>
               ::new(param_4,param_2 + 0x20);
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0x250);
      <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
      ::new(param_1,auVar5._0_8_,auVar5._8_8_,&local_280);
      return param_1;
    }
    local_280 = "";
    local_278 = PTR_fmt_007991f0;
    (*(code *)PTR_panic_fmt_007991a8)
              (uVar4,&anon_d4d3cd51d1d91a17bb767b00236b3a9b_84_llvm_17589326713533067298);
  }
LAB_003596ca:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


