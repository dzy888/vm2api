// 006f3940 unpark_worker_by_id

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::unpark_worker_by_id */

bool __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::unpark_worker_by_id
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  bool bVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  
  LOCK();
  bVar11 = *(int *)(param_2 + 0x100) == 0;
  if (bVar11) {
    *(int *)(param_2 + 0x100) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar8 = bVar8 ^ 1;
  }
  lVar4 = *(longlong *)(param_2 + 0x118);
  lVar10 = 0;
  do {
    bVar11 = lVar4 == lVar10;
    if (bVar11) {
      if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
        *(undefined1 *)(param_2 + 0x104) = 1;
      }
      bVar7 = false;
      LOCK();
      iVar3 = *(int *)(param_2 + 0x100);
      *(int *)(param_2 + 0x100) = 0;
      UNLOCK();
      goto LAB_006f3a0a;
    }
    lVar1 = lVar10 + 1;
    lVar5 = *(longlong *)(param_2 + 0x110);
    lVar2 = lVar10 * 8;
    lVar10 = lVar1;
  } while (*(longlong *)(lVar5 + lVar2) != param_3);
  *(undefined8 *)(lVar5 + -8 + lVar1 * 8) = *(undefined8 *)(lVar5 + -8 + lVar4 * 8);
  *(longlong *)(param_2 + 0x118) = lVar4 + -1;
  LOCK();
  *param_1 = *param_1 + 0x10000;
  UNLOCK();
  if (((bVar8 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar9 == '\0')) {
    *(undefined1 *)(param_2 + 0x104) = 1;
  }
  LOCK();
  iVar3 = *(int *)(param_2 + 0x100);
  *(int *)(param_2 + 0x100) = 0;
  UNLOCK();
  bVar7 = true;
LAB_006f3a0a:
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
    bVar7 = !bVar11;
  }
  return bVar7;
}


