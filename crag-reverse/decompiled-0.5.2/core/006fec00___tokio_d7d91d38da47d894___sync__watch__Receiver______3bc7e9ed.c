// 006fec00 <tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>

/* WARNING: Switch with 1 destination removed at 0x006efcba */
/* WARNING: Switch with 1 destination removed at 0x006fec8c */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::watch::Receiver<()>>
          (longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  
  plVar2 = (longlong *)*param_1;
  LOCK();
  plVar1 = plVar2 + 0x27;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    LOCK();
    bVar3 = (int)plVar2[0x23] == 0;
    if (bVar3) {
      *(int *)(plVar2 + 0x23) = 1;
    }
    UNLOCK();
    if (!bVar3) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
      (*(code *)PTR_is_zero_slow_path_00798fe8)();
    }
    (*(code *)PTR_notify_waiters_0079a750)();
    plVar2 = (longlong *)*param_1;
  }
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 != 0) {
    return;
  }
  if (*param_1 != -1) {
    LOCK();
    plVar1 = (longlong *)(*param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


