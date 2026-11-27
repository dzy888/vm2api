// 005c2a70 poll

/* <tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::runtime::blocking::task::BlockingTask<<tokio[d7d91d38da47d894]::fs::file::File>::metadata::{closure#0}::{closure#0}>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_2;
  *param_2 = 0;
  if (plVar1 == (longlong *)0x0) {
    (*(code *)PTR_expect_failed_00799440)
              (param_4,&anon_0acbc551f34e4a0bfb9a607189131925_36_llvm_9953415283177307294);
    LOCK();
    lRam0000000000000000 = lRam0000000000000000 + -1;
    UNLOCK();
    if (lRam0000000000000000 == 0) {
      (*(code *)PTR_drop_slow_007990f8)();
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  (*(code *)PTR_stop_007998b8)();
  (*(code *)PTR_metadata_00799b30)();
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_007990f8)();
  }
  (*(code *)PTR_memcpy_00799008)(param_4,0xb0);
  return param_1;
}


