// 0065ab30 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy,
   craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  byte bVar5;
  longlong in_FS_OFFSET;
  bool bVar6;
  int local_c8 [38];
  
  pbVar1 = (byte *)*param_2;
  lVar2 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065abb3:
    if ((cVar3 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      *param_1 = 0xffffffffffffffff;
      return param_1;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065abb3;
  }
  uVar4 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar5 = *pbVar1;
  if ((uVar4 & 1) == 0) {
    bVar6 = (bVar5 & 1) == 0;
    if (bVar6) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 == '\0') goto LAB_0065ac63;
      bVar5 = *pbVar1;
    }
    if ((bVar5 & 2) == 0) {
      <tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::_closure_0_
                (local_c8,lVar2 + 0x48,param_3);
      if (local_c8[0] != -1) {
LAB_0065ac3d:
        (*(code *)PTR_memcpy_00799008)();
        *pbVar1 = *pbVar1 | 2;
        return param_1;
      }
      goto LAB_0065ac5a;
    }
  }
  else {
    bVar6 = (bVar5 & 2) == 0;
    if (bVar6) {
      <tokio[d7d91d38da47d894]::net::unix::listener::UnixListener>::accept::_closure_0_
                (local_c8,lVar2 + 0x48,param_3);
      if (local_c8[0] != -1) goto LAB_0065ac3d;
      bVar5 = *pbVar1;
    }
    if ((bVar5 & 1) == 0) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 == '\0') {
LAB_0065ac63:
        *pbVar1 = *pbVar1 | 1;
        *param_1 = 3;
        return param_1;
      }
      goto LAB_0065ac5a;
    }
  }
  if (!bVar6) {
    *param_1 = 5;
    return param_1;
  }
LAB_0065ac5a:
  *param_1 = 0xffffffffffffffff;
  return param_1;
}


