// 006dffc0 notify_waiters

/* <tokio[d7d91d38da47d894]::sync::notify::Notify>::notify_waiters */

void __rustcall <tokio[d7d91d38da47d894]::sync::notify::Notify>::notify_waiters(longlong param_1)

{
  bool bVar1;
  
  LOCK();
  bVar1 = *(int *)(param_1 + 8) == 0;
  if (bVar1) {
    *(int *)(param_1 + 8) = 1;
  }
  UNLOCK();
  if (!bVar1) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  return;
}


