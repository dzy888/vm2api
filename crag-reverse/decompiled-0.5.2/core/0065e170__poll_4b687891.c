// 0065e170 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#6}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::acquire_slot::{closure#0}::{closure#6}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  char cVar4;
  longlong in_FS_OFFSET;
  bool bVar5;
  int local_880 [532];
  
  pbVar2 = (byte *)*param_2;
  lVar3 = param_2[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
joined_r0x0065e1ee:
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
    goto joined_r0x0065e1ee;
  }
  bVar1 = *pbVar2;
  bVar5 = (bVar1 & 1) == 0;
  if (bVar5) {
    <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<craggemini_core[66f3c71560d70857]::pool::SlotLeasePayload,craggemini_core[66f3c71560d70857]::protocol::Failure>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
    ::poll(local_880,lVar3 + 0xd8,param_3);
    if (local_880[0] != -3) {
      (*(code *)PTR_memcpy_00799008)();
      *pbVar2 = *pbVar2 | 1;
      return param_1;
    }
    bVar1 = *pbVar2;
  }
  if ((bVar1 & 2) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    bVar5 = true;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 2;
      *param_1 = 3;
      return param_1;
    }
  }
  if ((bVar1 & 4) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar1 = *pbVar2;
    bVar5 = true;
    if (cVar4 == '\0') {
      *pbVar2 = bVar1 | 4;
      *param_1 = 4;
      return param_1;
    }
  }
  if ((bVar1 & 8) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    if (cVar4 == '\0') {
      *pbVar2 = *pbVar2 | 8;
      *param_1 = 5;
      return param_1;
    }
    if ((*pbVar2 & 0x10) != 0) goto LAB_0065e2fb;
  }
  else if ((bVar1 & 0x10) != 0) {
    if (!bVar5) {
      *param_1 = 7;
      return param_1;
    }
    goto LAB_0065e2fb;
  }
  cVar4 = (*(code *)PTR_poll_007991a0)();
  if (cVar4 == '\0') {
    *pbVar2 = *pbVar2 | 0x10;
    *param_1 = 6;
    return param_1;
  }
LAB_0065e2fb:
  *param_1 = 0xfffffffffffffffd;
  return param_1;
}


