// 0065e700 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}::{closure#3}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::pool::drain_slot_pty::{closure#0}::{closure#3}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong in_FS_OFFSET;
  
  pbVar1 = (byte *)*param_1;
  lVar3 = param_1[1];
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar2 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065e77a;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar2 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  if ((cVar2 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
    (*(code *)PTR_register_waker_00799e58)();
    return -1;
  }
LAB_0065e77a:
  if ((*pbVar1 & 1) == 0) {
    cVar2 = (*(code *)PTR_poll_0079a290)();
    if (cVar2 == '\0') {
      *pbVar1 = *pbVar1 | 1;
      return 2;
    }
    if ((*pbVar1 & 2) != 0) {
      return -1;
    }
  }
  else if ((*pbVar1 & 2) != 0) {
    return 4;
  }
  lVar3 = craggemini_core[66f3c71560d70857]::guard::pty_read::_closure_0_(lVar3 + 0x48,param_2);
  if (lVar3 == 2) {
    return -1;
  }
  *pbVar1 = *pbVar1 | 2;
  return lVar3;
}


