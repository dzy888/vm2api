// 006fd4f0 close

/* <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::close */

void __rustcall <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::close(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 local_238;
  undefined4 auStack_230 [126];
  ulonglong local_38;
  
  LOCK();
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (iVar1 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  uVar6 = 0;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0) {
    uVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    uVar6 = uVar6 ^ 1;
  }
  LOCK();
  *(ulonglong *)(param_1 + 8) = *(ulonglong *)(param_1 + 8) | 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 6) = 1;
  local_38 = 0;
  uVar9 = 0;
  while( true ) {
    while ((uVar9 < 0x20 && (plVar8 = *(longlong **)(param_1 + 4), plVar8 != (longlong *)0x0))) {
      lVar7 = plVar8[2];
      *(longlong *)(param_1 + 4) = lVar7;
      if (lVar7 == 0) {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        *(undefined8 *)(lVar7 + 0x18) = 0;
      }
      plVar8[2] = 0;
      plVar8[3] = 0;
      lVar10 = *plVar8;
      uVar3 = *(undefined4 *)((longlong)plVar8 + 4);
      lVar2 = plVar8[1];
      uVar4 = *(undefined4 *)((longlong)plVar8 + 0xc);
      lVar7 = *plVar8;
      *plVar8 = 0;
      if (lVar7 != 0) {
        auStack_230[uVar9 * 4 + -2] = (int)lVar10;
        auStack_230[uVar9 * 4 + -1] = uVar3;
        auStack_230[uVar9 * 4] = (int)lVar2;
        auStack_230[uVar9 * 4 + 1] = uVar4;
        local_38 = local_38 + 1;
        uVar9 = local_38;
      }
    }
    if ((((uVar6 & 1) == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    lVar7 = local_38 * 0x10;
    local_38 = 0;
    plVar8 = &local_238;
    for (lVar10 = 0; -lVar10 != lVar7; lVar10 = lVar10 + -0x10) {
      lVar2 = *plVar8;
      plVar8 = plVar8 + 2;
      (**(code **)(lVar2 + 8))();
    }
    if (uVar9 < 0x20) break;
    LOCK();
    iVar1 = *param_1;
    if (iVar1 == 0) {
      *param_1 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      uVar6 = uVar6 ^ 1;
    }
    uVar9 = local_38;
  }
  return;
}


