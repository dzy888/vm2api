// 006ee620 add_permit

/* <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore as
   tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>::add_permit */

void __rustcall
<tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore_as_tokio[d7d91d38da47d894]::sync::mpsc::chan::Semaphore>
::add_permit(int *param_1)

{
  int iVar1;
  byte bVar2;
  
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
  <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
            (param_1,1,param_1,bVar2);
  return;
}


