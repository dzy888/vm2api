// 0065a0a0 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}::{closure#3}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}::{closure#3}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong in_FS_OFFSET;
  bool bVar6;
  longlong local_158 [37];
  
  pbVar2 = (byte *)*param_2;
  lVar3 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065a11e:
    if ((cVar4 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      *param_1 = 0xfffffffffffffffd;
      return param_1;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065a11e;
  }
  bVar1 = *pbVar2;
  bVar6 = (bVar1 & 1) == 0;
  if (bVar6) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 1;
      uVar5 = 0x800000000000000f;
      goto LAB_0065a216;
    }
  }
  if ((bVar1 & 2) == 0) {
    cVar4 = (*(code *)PTR_poll_007991a0)();
    bVar1 = *pbVar2;
    bVar6 = true;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 2;
      uVar5 = 0x8000000000000010;
      goto LAB_0065a216;
    }
  }
  if ((bVar1 & 4) == 0) {
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_
              (local_158,lVar3 + 0xb8,param_3);
    if (local_158[0] != -3) {
      (*(code *)PTR_memcpy_00799008)();
      *pbVar2 = *pbVar2 | 4;
      return param_1;
    }
    if ((*pbVar2 & 8) != 0) goto LAB_0065a1ff;
  }
  else if ((bVar1 & 8) != 0) {
    if (bVar6) goto LAB_0065a1ff;
    uVar5 = 0x8000000000000013;
    goto LAB_0065a216;
  }
  cVar4 = (*(code *)PTR_poll_007992b8)();
  if (cVar4 != '\0') {
LAB_0065a1ff:
    *param_1 = 0xfffffffffffffffd;
    return param_1;
  }
  *pbVar2 = *pbVar2 | 8;
  uVar5 = 0x8000000000000012;
LAB_0065a216:
  *param_1 = uVar5;
  return param_1;
}


