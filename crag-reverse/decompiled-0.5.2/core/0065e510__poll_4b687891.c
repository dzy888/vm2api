// 0065e510 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::deliver_synthesized_frame::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll
   <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::acp_backend::deliver_frame_cancellable::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll
   <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::deliver_sse_frame::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::deliver_synthesized_frame::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  longlong lVar4;
  longlong in_FS_OFFSET;
  bool bVar5;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  
  pbVar2 = (byte *)*param_2;
  lVar4 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065e58b:
    if ((cVar3 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      *param_1 = -3;
      return param_1;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065e58b;
  }
  bVar1 = *pbVar2;
  bVar5 = (bVar1 & 1) == 0;
  if (bVar5) {
    cVar3 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    if (cVar3 == '\0') {
      *pbVar2 = bVar1 | 1;
      lVar4 = -0x8000000000000000;
      goto LAB_0065e6eb;
    }
  }
  if ((bVar1 & 2) == 0) {
    cVar3 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    bVar5 = true;
    if (cVar3 == '\0') {
      *pbVar2 = bVar1 | 2;
      lVar4 = -0x7fffffffffffffff;
      goto LAB_0065e6eb;
    }
  }
  if ((bVar1 & 4) == 0) {
    cVar3 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    bVar5 = true;
    if (cVar3 == '\0') {
      *pbVar2 = bVar1 | 4;
      lVar4 = -0x7ffffffffffffffe;
      goto LAB_0065e6eb;
    }
  }
  if ((bVar1 & 8) == 0) {
    cVar3 = (*(code *)PTR_poll_007991a0)();
    if (cVar3 == '\0') {
      *pbVar2 = *pbVar2 | 8;
      lVar4 = -0x7ffffffffffffffd;
LAB_0065e6eb:
      *param_1 = lVar4;
      return param_1;
    }
    if ((*pbVar2 & 0x10) != 0) goto LAB_0065e6d4;
  }
  else if ((bVar1 & 0x10) != 0) {
    if (bVar5) goto LAB_0065e6d4;
    lVar4 = -0x7ffffffffffffffb;
    goto LAB_0065e6eb;
  }
  <craggemini_core[66f3c71560d70857]::server::Turn>::deliver::_closure_0_
            (&local_70,lVar4 + 0x148,param_3);
  if (local_70 != -3) {
    param_1[6] = local_40;
    param_1[7] = lStack_38;
    param_1[4] = local_50;
    param_1[5] = lStack_48;
    param_1[2] = local_60;
    param_1[3] = lStack_58;
    *param_1 = local_70;
    param_1[1] = lStack_68;
    *pbVar2 = *pbVar2 | 0x10;
    return param_1;
  }
LAB_0065e6d4:
  *param_1 = -3;
  return param_1;
}


