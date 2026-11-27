// 0065ea00 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}::{closure#7}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll
   <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}::{closure#8}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::execute::{closure#0}::{closure#7}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong in_FS_OFFSET;
  bool bVar7;
  
  pbVar2 = (byte *)*param_1;
  lVar3 = param_1[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065ea84;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  if ((cVar4 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
    (*(code *)PTR_register_waker_00799e58)();
    return 0xffffffffffffffff;
  }
LAB_0065ea84:
  bVar1 = *pbVar2;
  bVar7 = (bVar1 & 1) == 0;
  if (bVar7) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 1;
      return 2;
    }
  }
  if ((bVar1 & 2) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    bVar7 = true;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 2;
      return 3;
    }
  }
  if ((bVar1 & 4) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    if (cVar4 == '\0') {
      *pbVar2 = *pbVar2 | 4;
      return 4;
    }
    if ((*pbVar2 & 8) != 0) {
      return 0xffffffffffffffff;
    }
  }
  else if ((bVar1 & 8) != 0) {
    if (bVar7) {
      return 0xffffffffffffffff;
    }
    return 6;
  }
  if ((*(char *)(in_FS_OFFSET + -0xf0) != '\0') && (*(char *)(in_FS_OFFSET + -0xf0) != '\x02')) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  lVar5 = <craggemini_core[66f3c71560d70857]::bridge::Bridge>::send::_closure_0_
                    (lVar3 + 0x148,param_2);
  if (lVar5 == 1) {
    if ((*(int *)(lVar3 + 0xd8) == 2) ||
       (cVar4 = (*(code *)PTR_poll_delay_00799228)(), cVar4 != '\0')) {
      return 0xffffffffffffffff;
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *pbVar2 = *pbVar2 | 8;
  return uVar6;
}


