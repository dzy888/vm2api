// 004c84f0 maintain_cooldowns

/* WARNING: Switch with 1 destination removed at 0x004c8570 */
/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::maintain_cooldowns */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::maintain_cooldowns
          (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 extraout_EDX;
  undefined4 uVar9;
  longlong lVar10;
  bool bVar11;
  char local_58;
  longlong local_50;
  uint local_48;
  
  lVar3 = *(longlong *)(param_1 + 0x188);
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar11 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar11) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x14);
  }
  if (cVar6 == '\0') {
    (*(code *)PTR_now_007993f0)();
    (*(code *)PTR_duration_since_007993f8)(0,0,param_5,param_6,param_3);
    if (local_58 == '\0') {
      lVar10 = (ulonglong)local_48 / 1000000 + local_50 * 1000;
    }
    else {
      lVar10 = 0;
    }
    <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::prune_expired(lVar3 + 0x18,lVar10);
    if (*(char *)(lVar3 + 0x98) == '\x01') {
      uVar9 = extraout_EDX;
      (*(code *)PTR_now_007993f0)();
      (*(code *)PTR_duration_since_007993f8)(0,0,param_5,param_6,uVar9);
      if (local_58 == '\0') {
        uVar8 = (ulonglong)local_48 / 1000000 + local_50 * 1000;
      }
      else {
        uVar8 = 0;
      }
      uVar7 = 0;
      if (*(ulonglong *)(lVar3 + 0x90) <= uVar8) {
        uVar7 = uVar8 - *(ulonglong *)(lVar3 + 0x90);
      }
      if ((((4999 < uVar7) &&
           (uVar8 = <craggemini_core[66f3c71560d70857]::pool::CooldownRegistry>::flush_at
                              (lVar3 + 0x18), uVar8 != 0)) && (1 < ((uint)uVar8 & 3) - 2)) &&
         ((uVar8 & 3) != 0)) {
        (*(code *)PTR_drop_00799040)();
      }
    }
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
  }
  else {
    if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar3 + 0x14) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_syscall_00799e60)(1,0x81);
      return;
    }
  }
  return;
}


