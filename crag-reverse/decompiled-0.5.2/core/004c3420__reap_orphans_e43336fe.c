// 004c3420 reap_orphans

/* WARNING: Switch with 1 destination removed at 0x004c34fe */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::reap_orphans */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::reap_orphans(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = *(int *)(param_1 + 0x2d0) == 0;
  if (bVar5) {
    *(int *)(param_1 + 0x2d0) = 1;
  }
  UNLOCK();
  if (!bVar5) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar3 = *(char *)(param_1 + 0x2d4);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    cVar3 = *(char *)(param_1 + 0x2d4);
  }
  if (cVar3 == '\0') {
    <craggemini_core[66f3c71560d70857]::admission::OrphanReaper>::reap_once(param_1 + 0x2d8);
    if (((bVar4 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar3 == '\0')) {
      *(undefined1 *)(param_1 + 0x2d4) = 1;
    }
  }
  else if (((bVar4 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
          (cVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 0x2d4) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0x2d0);
  *(int *)(param_1 + 0x2d0) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


