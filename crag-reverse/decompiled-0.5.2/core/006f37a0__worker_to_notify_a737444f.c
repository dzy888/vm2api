// 006f37a0 worker_to_notify

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::worker_to_notify */

bool __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::worker_to_notify
          (ulonglong *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  
  LOCK();
  UNLOCK();
  if (((short)*param_1 == 0) && (*param_1 >> 0x10 < param_1[1])) {
    LOCK();
    bVar5 = *(int *)(param_2 + 0x100) == 0;
    if (bVar5) {
      *(int *)(param_2 + 0x100) = 1;
    }
    UNLOCK();
    if (!bVar5) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar3 = bVar3 ^ 1;
    }
    LOCK();
    UNLOCK();
    if (((short)*param_1 == 0) && (*param_1 >> 0x10 < param_1[1])) {
      LOCK();
      *param_1 = *param_1 + 0x10001;
      UNLOCK();
      bVar5 = *(longlong *)(param_2 + 0x118) != 0;
      if (bVar5) {
        *(longlong *)(param_2 + 0x118) = *(longlong *)(param_2 + 0x118) + -1;
      }
      if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
         (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
        *(undefined1 *)(param_2 + 0x104) = 1;
      }
      LOCK();
      iVar1 = *(int *)(param_2 + 0x100);
      *(int *)(param_2 + 0x100) = 0;
      UNLOCK();
    }
    else {
      if ((bVar3 == 0) &&
         (((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0 &&
          (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')))) {
        *(undefined1 *)(param_2 + 0x104) = 1;
      }
      bVar5 = false;
      LOCK();
      iVar1 = *(int *)(param_2 + 0x100);
      *(int *)(param_2 + 0x100) = 0;
      UNLOCK();
    }
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}


