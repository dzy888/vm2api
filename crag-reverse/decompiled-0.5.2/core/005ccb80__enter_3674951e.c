// 005ccb80 enter

/* <craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard>::enter */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::ActiveTurnGuard>::enter
          (longlong *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  
  LOCK();
  *(longlong *)(param_2 + 0x348) = *(longlong *)(param_2 + 0x348) + 1;
  UNLOCK();
  piVar1 = (int *)(param_2 + 0x238);
  LOCK();
  bVar7 = *(int *)(param_2 + 0x238) == 0;
  if (bVar7) {
    *(int *)(param_2 + 0x238) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar5 = *(char *)(param_2 + 0x23c);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar4 = bVar4 ^ 1;
    cVar5 = *(char *)(param_2 + 0x23c);
  }
  if (cVar5 == '\0') {
    uVar6 = (*(code *)PTR_now_00799250)();
    *(undefined8 *)(param_2 + 0x240) = uVar6;
    *(undefined4 *)(param_2 + 0x248) = param_3;
  }
  if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 0x23c) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  *param_1 = param_2 + 0x348;
  param_1[1] = param_2 + 0x358;
  param_1[2] = (longlong)piVar1;
  return param_1;
}


