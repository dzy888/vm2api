// 0065f190 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::dispatch_turn::{closure#0}::{closure#3}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::dispatch_turn::{closure#0}::{closure#3}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong in_FS_OFFSET;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  
  pbVar2 = (byte *)*param_2;
  lVar7 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065f210:
    if ((cVar4 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
      (*(code *)PTR_register_waker_00799e58)();
      *param_1 = -4;
      return param_1;
    }
  }
  else if (*(char *)(in_FS_OFFSET + -0xf0) == '\x01') {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
    goto joined_r0x0065f210;
  }
  uVar5 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar1 = *pbVar2;
  if (uVar5 % 3 == 0) {
    if ((bVar1 & 1) != 0) goto LAB_0065f2a1;
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(&local_70,*(undefined8 *)(lVar7 + 0x70),param_3);
    if (local_70 != -4) goto LAB_0065f390;
    bVar3 = true;
LAB_0065f2a3:
    bVar1 = *pbVar2;
    uVar6 = (uVar5 + 1) % 3;
    if (uVar6 == 0) {
      if ((bVar1 & 1) == 0) {
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
        ::poll(&local_70,*(undefined8 *)(lVar7 + 0x70),param_3);
        if (local_70 != -4) goto LAB_0065f390;
        bVar3 = true;
      }
    }
    else if (uVar6 == 1) {
      if ((bVar1 & 2) == 0) {
        cVar4 = (*(code *)PTR_poll_007991a0)();
        bVar3 = true;
        if (cVar4 == '\0') goto LAB_0065f360;
      }
    }
    else if ((bVar1 & 4) == 0) {
      cVar4 = (*(code *)PTR_poll_0079a290)();
      bVar3 = true;
      if (cVar4 == '\0') goto LAB_0065f3cd;
    }
    bVar1 = *pbVar2;
    uVar5 = (uVar5 + 2) % 3;
    if (uVar5 == 0) {
      if ((bVar1 & 1) == 0) {
        <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::Delivery,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
        ::poll(&local_70,*(undefined8 *)(lVar7 + 0x70),param_3);
        if (local_70 != -4) {
LAB_0065f390:
          param_1[6] = local_40;
          param_1[7] = lStack_38;
          param_1[4] = local_50;
          param_1[5] = lStack_48;
          param_1[2] = local_60;
          param_1[3] = lStack_58;
          *param_1 = local_70;
          param_1[1] = lStack_68;
          *pbVar2 = *pbVar2 | 1;
          return param_1;
        }
        goto LAB_0065f3e4;
      }
    }
    else if (uVar5 == 1) {
      if ((bVar1 & 2) == 0) {
        cVar4 = (*(code *)PTR_poll_007991a0)();
        if (cVar4 != '\0') goto LAB_0065f3e4;
        goto LAB_0065f360;
      }
    }
    else if ((bVar1 & 4) == 0) {
      cVar4 = (*(code *)PTR_poll_0079a290)();
      if (cVar4 != '\0') goto LAB_0065f3e4;
      goto LAB_0065f3cd;
    }
    if (bVar3) {
LAB_0065f3e4:
      *param_1 = -4;
      return param_1;
    }
    lVar7 = -0x7ffffffffffffffe;
  }
  else {
    if (uVar5 % 3 != 1) {
      if ((bVar1 & 4) != 0) goto LAB_0065f2a1;
      cVar4 = (*(code *)PTR_poll_0079a290)();
      bVar3 = true;
      if (cVar4 != '\0') goto LAB_0065f2a3;
LAB_0065f3cd:
      *pbVar2 = *pbVar2 | 4;
      lVar7 = -0x7fffffffffffffff;
      goto LAB_0065f3fb;
    }
    if ((bVar1 & 2) != 0) {
LAB_0065f2a1:
      bVar3 = false;
      goto LAB_0065f2a3;
    }
    cVar4 = (*(code *)PTR_poll_007991a0)();
    bVar3 = true;
    if (cVar4 != '\0') goto LAB_0065f2a3;
LAB_0065f360:
    *pbVar2 = *pbVar2 | 2;
    lVar7 = -0x8000000000000000;
  }
LAB_0065f3fb:
  *param_1 = lVar7;
  return param_1;
}


