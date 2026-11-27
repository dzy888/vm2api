// 0065d6b0 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#1}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong in_FS_OFFSET;
  bool bVar6;
  longlong local_38 [2];
  
  pbVar1 = (byte *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065d726:
    if ((cVar3 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      return 0xffffffffffffffff;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065d726;
  }
  uVar4 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar5 = *pbVar1;
  if ((uVar4 & 1) == 0) {
    bVar6 = (bVar5 & 1) == 0;
    if (bVar6) {
      <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
      ::poll_catch(local_38,*(undefined8 *)*puVar2,param_2,1);
      if (local_38[0] != -1) goto LAB_0065d7b7;
      bVar5 = *pbVar1;
    }
    if ((bVar5 & 2) == 0) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 != '\0') {
        return 0xffffffffffffffff;
      }
LAB_0065d7f2:
      *pbVar1 = *pbVar1 | 2;
      return 1;
    }
  }
  else {
    bVar6 = (bVar5 & 2) == 0;
    if (bVar6) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 == '\0') goto LAB_0065d7f2;
      bVar5 = *pbVar1;
    }
    if ((bVar5 & 1) == 0) {
      <hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Dispatcher<hyper[c4782d5b5c5e3493]::proto::h1::dispatch::Server<hyper[c4782d5b5c5e3493]::service::util::ServiceFn<craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}::{closure#1}::{closure#0},hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,hyper[c4782d5b5c5e3493]::body::incoming::Incoming>,axum_core[61c49771464cda0a]::body::Body,hyper_util[b7929d201eb2e3f4]::rt::tokio::TokioIo<tokio[d7d91d38da47d894]::net::unix::stream::UnixStream>,hyper[c4782d5b5c5e3493]::proto::h1::role::Server>>
      ::poll_catch(local_38,*(undefined8 *)*puVar2,param_2,1);
      if (local_38[0] == -1) {
        return 0xffffffffffffffff;
      }
LAB_0065d7b7:
      if ((local_38[0] != 0) && ((int)local_38[0] != 2)) {
        (*(code *)PTR_manual_007994a0)();
      }
      *pbVar1 = *pbVar1 | 1;
      return 0;
    }
  }
  if (bVar6) {
    return 0xffffffffffffffff;
  }
  return 2;
}


