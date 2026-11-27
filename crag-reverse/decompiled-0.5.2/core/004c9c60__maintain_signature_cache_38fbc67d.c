// 004c9c60 maintain_signature_cache

/* WARNING: Switch with 1 destination removed at 0x004c9ce0 */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::maintain_signature_cache */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::maintain_signature_cache(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x180);
  piVar1 = (int *)(lVar2 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar2 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar2 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar5 = *(char *)(lVar2 + 0x14);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    cVar5 = *(char *)(lVar2 + 0x14);
  }
  if (cVar5 == '\0') {
    <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::prune_to_bounds(lVar2 + 0x18);
    if (*(char *)(lVar2 + 0xe0) == '\x01') {
      (*(code *)PTR_now_00799478)();
      iVar10 = (int)local_40 >> 0xd;
      iVar9 = iVar10 + -1;
      iVar6 = 0;
      if (iVar10 < 1) {
        iVar6 = (1U - iVar10) / 400 + 1;
        iVar9 = iVar9 + iVar6 * 400;
        iVar6 = iVar6 * -0x23ab1;
      }
      uVar7 = (local_38 & 0xffffffff) / 1000000 +
              ((longlong)
               (int)((((local_40 >> 4 & 0x1ff) + iVar6) - iVar9 / 100) + (iVar9 * 0x5b5 >> 2) +
                     (iVar9 / 100 >> 2) + -0xaf93b) * 0x15180 + (ulonglong)local_3c) * 1000;
      if ((longlong)uVar7 < 1) {
        uVar7 = 0;
      }
      uVar8 = uVar7 - *(ulonglong *)(lVar2 + 0xd8);
      if (uVar7 < *(ulonglong *)(lVar2 + 0xd8)) {
        uVar8 = 0;
      }
      if ((((4999 < uVar8) &&
           (uVar7 = <craggemini_core[66f3c71560d70857]::resume::SignatureCache>::flush(lVar2 + 0x18)
           , uVar7 != 0)) && (1 < ((uint)uVar7 & 3) - 2)) && ((uVar7 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(lVar2 + 0x14) = 1;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(lVar2 + 0x14) = 1;
    }
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar9 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


