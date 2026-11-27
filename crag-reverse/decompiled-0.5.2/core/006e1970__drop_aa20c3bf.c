// 006e1970 drop

/* <tokio[d7d91d38da47d894]::sync::semaphore::SemaphorePermit as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::semaphore::SemaphorePermit_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  byte bVar4;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    return;
  }
  piVar3 = (int *)*param_1;
  LOCK();
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    *piVar3 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
  }
  <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
            (piVar3,lVar2,piVar3,bVar4);
  return;
}


