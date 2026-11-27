// 006e17a0 drop_waker

/* tokio[d7d91d38da47d894]::runtime::park::drop_waker */

longlong __rustcall tokio[d7d91d38da47d894]::runtime::park::drop_waker(longlong param_1)

{
  longlong *plVar1;
  
  LOCK();
  plVar1 = (longlong *)(param_1 + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799668)();
  }
  return param_1 + -0x10;
}


