// 0065a230 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},
   craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}::{closure#4}> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::run_native<craggemini_core[66f3c71560d70857]::bridge::verify_agy::{closure#0},craggemini_core[66f3c71560d70857]::bridge::verify_agy>::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong in_FS_OFFSET;
  longlong local_158 [37];
  
  pbVar2 = (byte *)*param_2;
  lVar3 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065a2b6:
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
    goto joined_r0x0065a2b6;
  }
  bVar1 = *pbVar2;
  bVar6 = bVar1;
  if ((bVar1 & 1) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)(bVar1,param_3);
    bVar6 = *pbVar2;
    if (cVar4 == '\0') {
      *pbVar2 = bVar6 | 1;
      uVar5 = 0x800000000000000f;
      goto LAB_0065a37a;
    }
  }
  if ((bVar6 & 2) == 0) {
    <craggemini_core[66f3c71560d70857]::bridge::Bridge>::next::_closure_0_
              (local_158,lVar3 + 0x48,param_3);
    if (local_158[0] != -3) {
      (*(code *)PTR_memcpy_00799008)();
      *pbVar2 = *pbVar2 | 2;
      return param_1;
    }
    if ((*pbVar2 & 4) != 0) goto LAB_0065a363;
  }
  else if ((bVar6 & 4) != 0) {
    if ((bVar1 & 1) == 0) goto LAB_0065a363;
    uVar5 = 0x8000000000000012;
    goto LAB_0065a37a;
  }
  cVar4 = (*(code *)PTR_poll_007992b8)();
  if (cVar4 != '\0') {
LAB_0065a363:
    *param_1 = 0xfffffffffffffffd;
    return param_1;
  }
  *pbVar2 = *pbVar2 | 4;
  uVar5 = 0x8000000000000011;
LAB_0065a37a:
  *param_1 = uVar5;
  return param_1;
}


