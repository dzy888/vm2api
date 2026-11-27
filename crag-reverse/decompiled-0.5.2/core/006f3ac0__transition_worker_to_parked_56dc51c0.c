// 006f3ac0 transition_worker_to_parked

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::transition_worker_to_parked
    */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::transition_worker_to_parked
          (longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  ulonglong unaff_RBP;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = *(int *)(param_2 + 0x100) == 0;
  if (bVar6) {
    *(int *)(param_2 + 0x100) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    param_4 = param_4 & 0xffffffff;
    (*(code *)PTR_lock_contended_00798fe0)();
    unaff_RBP = param_4;
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar2 = 0;
    if ((char)param_4 == '\0') goto LAB_006f3b68;
LAB_006f3b0a:
    LOCK();
    lVar5 = *param_1;
    *param_1 = *param_1 + -0x10001;
    UNLOCK();
    uVar4 = CONCAT71((int7)(unaff_RBP >> 8),(short)lVar5 == 1);
    lVar5 = *(longlong *)(param_2 + 0x118);
    if (lVar5 != *(longlong *)(param_2 + 0x108)) goto LAB_006f3b8f;
  }
  else {
    unaff_RBP = param_4 & 0xffffffff;
    bVar2 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar2 = bVar2 ^ 1;
    if ((char)unaff_RBP != '\0') goto LAB_006f3b0a;
LAB_006f3b68:
    LOCK();
    *param_1 = *param_1 + -0x10000;
    UNLOCK();
    uVar4 = 0;
    lVar5 = *(longlong *)(param_2 + 0x118);
    if (lVar5 != *(longlong *)(param_2 + 0x108)) goto LAB_006f3b8f;
  }
  (*(code *)PTR_grow_one_0079a820)();
LAB_006f3b8f:
  *(undefined8 *)(*(longlong *)(param_2 + 0x110) + lVar5 * 8) = param_3;
  *(longlong *)(param_2 + 0x118) = lVar5 + 1;
  if (((bVar2 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar3 == '\0')) {
    *(undefined1 *)(param_2 + 0x104) = 1;
  }
  LOCK();
  iVar1 = *(int *)(param_2 + 0x100);
  *(int *)(param_2 + 0x100) = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar4 & 0xffffffff;
}


