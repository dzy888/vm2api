// 006e19e0 drop

/* <tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::semaphore::OwnedSemaphorePermit_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    return;
  }
  piVar1 = (int *)(*param_1 + 0x10);
  LOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
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
            (piVar1,lVar3,piVar1,bVar4);
  return;
}


