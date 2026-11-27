// 0065a700 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy,
   craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#5}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#5}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong in_FS_OFFSET;
  
  pbVar2 = (byte *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar5 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065a72a:
    if ((cVar5 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      return 0xffffffffffffffff;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar5 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065a72a;
  }
  uVar6 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar1 = *pbVar2;
  switch(uVar6 & 3) {
  case 0:
    if ((bVar1 & 1) == 0) {
      uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar3,param_2);
      bVar4 = true;
      if ((uVar7 & 1) == 0) goto LAB_0065a963;
    }
    else {
LAB_0065a815:
      bVar4 = false;
    }
    break;
  case 1:
    if ((bVar1 & 2) != 0) goto LAB_0065a815;
    uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
            ::poll(puVar3[1],param_2);
    bVar4 = true;
    if ((uVar7 & 1) == 0) goto LAB_0065a9d8;
    break;
  case 2:
    if ((bVar1 & 4) != 0) goto LAB_0065a815;
    cVar5 = craggemini_core[66f3c71560d70857]::server::run_native::
            <craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>
            ::_closure_0_(*(undefined8 *)puVar3[2],param_2);
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_0065a98a;
    break;
  case 3:
    if ((bVar1 & 8) != 0) goto LAB_0065a815;
    cVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
            ::poll(puVar3[3],param_2);
    bVar4 = true;
    if (cVar5 == '\0') goto LAB_0065a9b1;
  }
  bVar1 = *pbVar2;
  switch(uVar6 + 1 & 3) {
  case 0:
    if ((bVar1 & 1) == 0) {
      lVar8 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar3,param_2);
      bVar4 = true;
      if (lVar8 != 1) goto LAB_0065a963;
    }
    break;
  case 1:
    if ((bVar1 & 2) == 0) {
      uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[1],param_2);
      bVar4 = true;
      if ((uVar7 & 1) == 0) goto LAB_0065a9d8;
    }
    break;
  case 2:
    if ((bVar1 & 4) == 0) {
      cVar5 = craggemini_core[66f3c71560d70857]::server::run_native::
              <craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>
              ::_closure_0_(*(undefined8 *)puVar3[2],param_2);
      bVar4 = true;
      if (cVar5 == '\0') goto LAB_0065a98a;
    }
    break;
  case 3:
    if ((bVar1 & 8) == 0) {
      cVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[3],param_2);
      bVar4 = true;
      if (cVar5 == '\0') goto LAB_0065a9b1;
    }
  }
  bVar1 = *pbVar2;
  switch(uVar6 & 3) {
  case 0:
    if ((bVar1 & 4) == 0) {
      cVar5 = craggemini_core[66f3c71560d70857]::server::run_native::
              <craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>
              ::_closure_0_(*(undefined8 *)puVar3[2],param_2);
      bVar4 = true;
      if (cVar5 == '\0') goto LAB_0065a98a;
    }
    break;
  case 1:
    if ((bVar1 & 8) == 0) {
      cVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[3],param_2);
      bVar4 = true;
      if (cVar5 == '\0') goto LAB_0065a9b1;
    }
    break;
  case 2:
    if ((bVar1 & 1) == 0) {
      lVar8 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar3,param_2);
      bVar4 = true;
      if (lVar8 != 1) goto LAB_0065a963;
    }
    break;
  case 3:
    if ((bVar1 & 2) == 0) {
      uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[1],param_2);
      bVar4 = true;
      if ((uVar7 & 1) == 0) goto LAB_0065a9d8;
    }
  }
  bVar1 = *pbVar2;
  switch(uVar6 - 1 & 3) {
  case 0:
    if ((bVar1 & 1) == 0) {
      uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::serve_http::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(*puVar3,param_2);
      if ((uVar7 & 1) != 0) {
        return 0xffffffffffffffff;
      }
LAB_0065a963:
      *pbVar2 = *pbVar2 | 1;
      return 0;
    }
    break;
  case 1:
    if ((bVar1 & 2) == 0) {
      uVar7 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::server::run_with_license<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy,craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[1],param_2);
      if ((uVar7 & 1) != 0) {
        return 0xffffffffffffffff;
      }
LAB_0065a9d8:
      *pbVar2 = *pbVar2 | 2;
      return 1;
    }
    break;
  case 2:
    if ((bVar1 & 4) == 0) {
      cVar5 = craggemini_core[66f3c71560d70857]::server::run_native::
              <craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>
              ::_closure_0_(*(undefined8 *)puVar3[2],param_2);
      if (cVar5 != '\0') {
        return 0xffffffffffffffff;
      }
LAB_0065a98a:
      *pbVar2 = *pbVar2 | 4;
      return 2;
    }
    break;
  case 3:
    if ((bVar1 & 8) == 0) {
      cVar5 = <core[c0acaeba6ab4c2e0]::pin::Pin<&mut_craggemini_core[66f3c71560d70857]::run::{closure#0}::{closure#1}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
              ::poll(puVar3[3],param_2);
      if (cVar5 != '\0') {
        return 0xffffffffffffffff;
      }
LAB_0065a9b1:
      *pbVar2 = *pbVar2 | 8;
      return 3;
    }
  }
  if (bVar4) {
    return 0xffffffffffffffff;
  }
  return 4;
}


