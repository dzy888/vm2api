// 006e17d0 wake

/* tokio[d7d91d38da47d894]::runtime::park::wake */

void __rustcall tokio[d7d91d38da47d894]::runtime::park::wake(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + -0x10);
  <tokio[d7d91d38da47d894]::runtime::park::Inner>::unpark();
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799668)();
  }
  return;
}


