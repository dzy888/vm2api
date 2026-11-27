// 006f3c20 is_parked

/* <tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::is_parked */

ulonglong __rustcall
<tokio[d7d91d38da47d894]::runtime::scheduler::multi_thread::idle::Idle>::is_parked
          (undefined8 param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  ulonglong unaff_RBX;
  undefined7 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  
  LOCK();
  bVar12 = *(int *)(param_2 + 0x100) == 0;
  if (bVar12) {
    *(int *)(param_2 + 0x100) = 1;
  }
  UNLOCK();
  if (!bVar12) {
    (*(code *)PTR_lock_contended_00798fe0)();
    unaff_RBX = param_2;
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    unaff_RBX = param_2;
  }
  lVar3 = *(longlong *)(param_2 + 0x110);
  uVar4 = *(ulonglong *)(param_2 + 0x118);
  uVar10 = uVar4 & 0xffffffffffffff8;
  uVar11 = 0;
  while (uVar9 = (undefined7)(unaff_RBX >> 8), uVar10 != uVar11) {
    unaff_RBX = CONCAT71(uVar9,1);
    if (((((*(longlong *)(lVar3 + uVar11 * 8) == param_3) ||
          (*(longlong *)(lVar3 + 8 + uVar11 * 8) == param_3)) ||
         (*(longlong *)(lVar3 + 0x10 + uVar11 * 8) == param_3)) ||
        ((*(longlong *)(lVar3 + 0x18 + uVar11 * 8) == param_3 ||
         (*(longlong *)(lVar3 + 0x20 + uVar11 * 8) == param_3)))) ||
       ((*(longlong *)(lVar3 + 0x28 + uVar11 * 8) == param_3 ||
        ((*(longlong *)(lVar3 + 0x30 + uVar11 * 8) == param_3 ||
         (lVar1 = uVar11 * 8, uVar11 = uVar11 + 8, *(longlong *)(lVar3 + 0x38 + lVar1) == param_3)))
        ))) goto LAB_006f3ceb;
  }
  uVar5 = (uint)uVar4 & 7;
  if ((uVar4 & 7) != 0) {
    unaff_RBX = CONCAT71(uVar9,1);
    if (*(longlong *)(lVar3 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
    if (uVar5 != 1) {
      if (*(longlong *)(lVar3 + 8 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
      if (uVar5 != 2) {
        if (*(longlong *)(lVar3 + 0x10 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
        if (uVar5 != 3) {
          if (*(longlong *)(lVar3 + 0x18 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
          if (uVar5 != 4) {
            if (*(longlong *)(lVar3 + 0x20 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
            if (uVar5 != 5) {
              if (*(longlong *)(lVar3 + 0x28 + uVar10 * 8) == param_3) goto LAB_006f3ceb;
              if (uVar5 != 6) {
                if (*(longlong *)(lVar3 + 0x30 + uVar10 * 8) != param_3) {
                  unaff_RBX = CONCAT71(uVar9,-(uVar5 != 7));
                }
                goto LAB_006f3ceb;
              }
            }
          }
        }
      }
    }
  }
  unaff_RBX = 0;
LAB_006f3ceb:
  if ((bVar7 == 0) &&
     (((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0 &&
      (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')))) {
    *(undefined1 *)(param_2 + 0x104) = 1;
  }
  LOCK();
  iVar2 = *(int *)(param_2 + 0x100);
  *(int *)(param_2 + 0x100) = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return unaff_RBX & 0xffffff01;
}


