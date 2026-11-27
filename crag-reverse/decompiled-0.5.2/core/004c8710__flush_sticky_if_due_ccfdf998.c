// 004c8710 flush_sticky_if_due

/* WARNING: Switch with 1 destination removed at 0x004c878e */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::flush_sticky_if_due */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::flush_sticky_if_due(longlong param_1)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  piVar1 = (int *)(param_1 + 0x1d0);
  LOCK();
  bVar10 = *(int *)(param_1 + 0x1d0) == 0;
  if (bVar10) {
    *(int *)(param_1 + 0x1d0) = 1;
  }
  UNLOCK();
  if (!bVar10) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar2 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar4 = *(char *)(param_1 + 0x1d4);
  }
  else {
    bVar3 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar3 = bVar3 ^ 1;
    cVar4 = *(char *)(param_1 + 0x1d4);
  }
  if (cVar4 == '\0') {
    if (*(char *)(param_1 + 0x268) == '\x01') {
      (*(code *)PTR_now_00799478)();
      iVar9 = (int)local_38 >> 0xd;
      iVar8 = iVar9 + -1;
      iVar5 = 0;
      if (iVar9 < 1) {
        iVar5 = (1U - iVar9) / 400 + 1;
        iVar8 = iVar8 + iVar5 * 400;
        iVar5 = iVar5 * -0x23ab1;
      }
      uVar6 = (local_30 & 0xffffffff) / 1000000 +
              ((longlong)
               (int)((((local_38 >> 4 & 0x1ff) + iVar5) - iVar8 / 100) + (iVar8 * 0x5b5 >> 2) +
                     (iVar8 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_34) * 1000;
      if ((longlong)uVar6 < 1) {
        uVar6 = 0;
      }
      uVar7 = uVar6 - *(ulonglong *)(param_1 + 0x260);
      if (uVar6 < *(ulonglong *)(param_1 + 0x260)) {
        uVar7 = 0;
      }
      if ((((4999 < uVar7) &&
           (uVar6 = <craggemini_core[66f3c71560d70857]::resume::StickyIndex>::flush(param_1 + 0x1d8)
           , uVar6 != 0)) && (1 < ((uint)uVar6 & 3) - 2)) && ((uVar6 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(param_1 + 0x1d4) = 1;
    }
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar8 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar4 == '\0')) {
      *(undefined1 *)(param_1 + 0x1d4) = 1;
    }
    LOCK();
    iVar8 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar8 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


