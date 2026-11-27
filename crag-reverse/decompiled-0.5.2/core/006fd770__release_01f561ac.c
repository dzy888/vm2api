// 006fd770 release

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::release */

void __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::release(int *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    return;
  }
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar2 = bVar2 ^ 1;
  }
  add_permits_locked(param_1,param_2,param_1,bVar2);
  return;
}


