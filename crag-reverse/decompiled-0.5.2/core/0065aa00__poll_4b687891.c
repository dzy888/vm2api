// 0065aa00 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy,
   craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#6}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#6}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  longlong in_FS_OFFSET;
  bool bVar7;
  
  pbVar1 = (byte *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065aa77:
    if ((cVar3 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      return 0xffffffffffffffff;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065aa77;
  }
  uVar4 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar6 = *pbVar1;
  if ((uVar4 & 1) == 0) {
    bVar7 = (bVar6 & 1) == 0;
    if (bVar7) {
      lVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar2,param_2);
      if (lVar5 != 1) goto LAB_0065ab0b;
      bVar6 = *pbVar1;
    }
    if ((bVar6 & 2) == 0) {
      cVar3 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar2[1],param_2);
      if (cVar3 != '\0') {
        return 0xffffffffffffffff;
      }
LAB_0065aaf2:
      *pbVar1 = *pbVar1 | 2;
      return 1;
    }
  }
  else {
    bVar7 = (bVar6 & 2) == 0;
    if (bVar7) {
      cVar3 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar2[1],param_2);
      if (cVar3 == '\0') goto LAB_0065aaf2;
      bVar6 = *pbVar1;
    }
    if ((bVar6 & 1) == 0) {
      uVar4 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar2,param_2);
      if ((uVar4 & 1) != 0) {
        return 0xffffffffffffffff;
      }
LAB_0065ab0b:
      *pbVar1 = *pbVar1 | 1;
      return 0;
    }
  }
  if (bVar7) {
    return 0xffffffffffffffff;
  }
  return 2;
}


