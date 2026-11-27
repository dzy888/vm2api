// 0065dcf0 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::{closure#0}::{closure#3}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<<craggemini_core[66f3c71560d70857]::pool::ConversationGate>::lock_with_deadline::{closure#0}::{closure#3}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(void)

{
  char cVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar1 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065dd7d;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar1 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  if ((cVar1 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
    (*(code *)PTR_register_waker_00799e58)();
    auVar2._8_8_ = 0xfffffffffffffec8;
    auVar2._0_8_ = 0xffffffffffffffff;
    return auVar2;
  }
LAB_0065dd7d:
  UNRECOVERED_JUMPTABLE = (code *)((longlong)&DAT_001a1f4c + (longlong)DAT_001a1f4c);
                    /* WARNING: Could not recover jumptable at 0x0065dd9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  auVar3._0_8_ = (*UNRECOVERED_JUMPTABLE)(0,UNRECOVERED_JUMPTABLE);
  auVar3._8_8_ = UNRECOVERED_JUMPTABLE;
  return auVar3;
}


