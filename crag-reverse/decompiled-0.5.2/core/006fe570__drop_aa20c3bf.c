// 006fe570 drop

/* WARNING: Switch with 1 destination removed at 0x006fe67f */
/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::batch_semaphore::Acquire_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  
  if (*(char *)(param_1 + 7) != '\x01') {
    return;
  }
  piVar2 = (int *)*param_1;
  LOCK();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    *piVar2 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
  }
  if (param_1[3] == 0) {
    if (*(undefined8 **)(piVar2 + 2) != param_1 + 1) goto LAB_006fe5f9;
    lVar3 = param_1[4];
    *(longlong *)(piVar2 + 2) = lVar3;
  }
  else {
    lVar3 = param_1[4];
    *(longlong *)(param_1[3] + 0x18) = lVar3;
  }
  if (lVar3 == 0) {
    if (*(undefined8 **)(piVar2 + 4) != param_1 + 1) goto LAB_006fe5f9;
    *(undefined8 *)(piVar2 + 4) = param_1[3];
  }
  else {
    *(undefined8 *)(lVar3 + 0x10) = param_1[3];
  }
  param_1[3] = 0;
  param_1[4] = 0;
LAB_006fe5f9:
  if (param_1[6] - param_1[5] != 0) {
    <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
              (*param_1,param_1[6] - param_1[5],piVar2,bVar5);
    return;
  }
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(piVar2 + 1) = 1;
  }
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


