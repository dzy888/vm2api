// 0065d590 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::PoolManager>::start_with_license::{closure#0}::{closure#3}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  char cVar4;
  longlong in_FS_OFFSET;
  
  pbVar3 = (byte *)*param_1;
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065d609;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar4 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  if ((cVar4 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
    (*(code *)PTR_register_waker_00799e58)();
    return 0xff;
  }
LAB_0065d609:
  bVar1 = *pbVar3;
  bVar2 = bVar1;
  if ((bVar1 & 1) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    bVar2 = *pbVar3;
    if (cVar4 == '\0') {
      *pbVar3 = bVar2 | 1;
      return 0;
    }
  }
  if ((bVar2 & 2) == 0) {
    cVar4 = (*(code *)PTR_poll_0079a290)();
    if (cVar4 == '\0') {
      *pbVar3 = *pbVar3 | 2;
      return 1;
    }
    if ((*pbVar3 & 4) != 0) {
      return 0xff;
    }
  }
  else if ((bVar2 & 4) != 0) {
    if ((bVar1 & 1) == 0) {
      return 0xff;
    }
    return 3;
  }
  cVar4 = (*(code *)PTR_poll_007991a0)();
  if (cVar4 == '\0') {
    *pbVar3 = *pbVar3 | 4;
    return 2;
  }
  return 0xff;
}


