// 0065f410 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::{closure#0}::{closure#3}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll
   <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::dispatch_pool_turn::{closure#0}::{closure#4}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::server::dispatch_json_turn_full::{closure#0}::{closure#3}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  byte bVar6;
  longlong in_FS_OFFSET;
  bool bVar7;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  pbVar1 = (byte *)*param_2;
  puVar2 = (undefined8 *)param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar3 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065f48b:
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
    goto joined_r0x0065f48b;
  }
  uVar4 = (*(code *)PTR_thread_rng_n_0079a280)();
  bVar6 = *pbVar1;
  if ((uVar4 & 1) == 0) {
    bVar7 = (bVar6 & 1) == 0;
    if (bVar7) {
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
      ::poll(&local_a8,*puVar2,param_3);
      if (local_a8 != -3) goto LAB_0065f538;
      bVar6 = *pbVar1;
    }
    if ((bVar6 & 2) == 0) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 != '\0') goto LAB_0065f52f;
LAB_0065f519:
      *pbVar1 = *pbVar1 | 2;
      lVar5 = -0x8000000000000000;
      goto LAB_0065f592;
    }
  }
  else {
    bVar7 = (bVar6 & 2) == 0;
    if (bVar7) {
      cVar3 = (*(code *)PTR_poll_0079a290)();
      if (cVar3 == '\0') goto LAB_0065f519;
      bVar6 = *pbVar1;
    }
    if ((bVar6 & 1) == 0) {
      <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::server::JsonTurnResult,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
      ::poll(&local_a8,*puVar2,param_3);
      if (local_a8 != -3) {
LAB_0065f538:
        param_1[0xe] = local_38;
        param_1[0xc] = local_48;
        param_1[0xd] = lStack_40;
        param_1[10] = local_58;
        param_1[0xb] = lStack_50;
        param_1[8] = local_68;
        param_1[9] = lStack_60;
        param_1[6] = local_78;
        param_1[7] = lStack_70;
        param_1[4] = local_88;
        param_1[5] = lStack_80;
        param_1[2] = local_98;
        param_1[3] = lStack_90;
        *param_1 = local_a8;
        param_1[1] = lStack_a0;
        *pbVar1 = *pbVar1 | 1;
        return param_1;
      }
      goto LAB_0065f52f;
    }
  }
  if (bVar7) {
LAB_0065f52f:
    *param_1 = -3;
    return param_1;
  }
  lVar5 = -0x7fffffffffffffff;
LAB_0065f592:
  *param_1 = lVar5;
  return param_1;
}


