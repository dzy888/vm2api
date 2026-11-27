// 0065ec10 poll

/* <core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::{closure#24}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::future::poll_fn::PollFn<craggemini_core[66f3c71560d70857]::bridge::run_loop::{closure#0}::{closure#24}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong in_FS_OFFSET;
  
  if (*(char *)(in_FS_OFFSET + -0xf0) == '\0') {
    cVar1 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  else {
    if (*(char *)(in_FS_OFFSET + -0xf0) != '\x01') goto LAB_0065ec8c;
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
    cVar1 = *(char *)(in_FS_OFFSET + -0xf4);
  }
  if ((cVar1 == '\x01') && (*(char *)(in_FS_OFFSET + -0xf3) == '\0')) {
    (*(code *)PTR_register_waker_00799e58)();
    *param_1 = 0xfffffffffffffffd;
    return param_1;
  }
LAB_0065ec8c:
                    /* WARNING: Could not recover jumptable at 0x0065ecab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined8 *)
           (*(code *)((longlong)&DAT_001a1fa4 + (longlong)DAT_001a1fa4))
                     ((code *)((longlong)&DAT_001a1fa4 + (longlong)DAT_001a1fa4));
  return puVar2;
}


