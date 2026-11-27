// 006e4dc0 clear_wakers

/* WARNING: Switch with 1 destination removed at 0x006e4e76 */
/* <tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::clear_wakers */

void __rustcall
<tokio[d7d91d38da47d894]::runtime::io::scheduled_io::ScheduledIo>::clear_wakers(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = *(int *)(param_1 + 0x18) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0x18) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))();
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))();
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


