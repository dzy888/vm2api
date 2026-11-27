// 005f7380 drop

/* WARNING: Switch with 1 destination removed at 0x005f743b */
/* <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard_as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(undefined8 *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  bool bVar9;
  
  piVar3 = (int *)param_1[2];
  LOCK();
  iVar1 = *piVar3;
  if (iVar1 == 0) {
    *piVar3 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
    cVar7 = (char)piVar3[1];
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
    cVar7 = (char)piVar3[1];
  }
  if (cVar7 == '\0') {
    uVar8 = (*(code *)PTR_now_00799250)();
    *(undefined8 *)(piVar3 + 2) = uVar8;
    piVar3[4] = param_3;
  }
  if (((bVar6 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
    *(undefined1 *)(piVar3 + 1) = 1;
  }
  LOCK();
  iVar1 = *piVar3;
  *piVar3 = 0;
  UNLOCK();
  if (iVar1 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  puVar4 = (ulonglong *)*param_1;
  LOCK();
  uVar2 = *puVar4;
  *puVar4 = *puVar4 - 1;
  UNLOCK();
  if (1 < uVar2) {
    return;
  }
  LOCK();
  bVar9 = *(int *)(param_1[1] + 8) == 0;
  if (bVar9) {
    *(int *)(param_1[1] + 8) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
    (*(code *)PTR_is_zero_slow_path_00798fe8)();
  }
  (*(code *)PTR_notify_waiters_0079a750)();
  return;
}


