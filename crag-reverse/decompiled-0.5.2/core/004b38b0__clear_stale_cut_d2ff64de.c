// 004b38b0 clear_stale_cut

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::clear_stale_cut */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::clear_stale_cut
          (undefined4 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  longlong local_48;
  
  if (param_3 == 0) {
    return;
  }
  piVar1 = (int *)(param_2 + 0x150);
  LOCK();
  bVar8 = *(int *)(param_2 + 0x150) == 0;
  if (bVar8) {
    *(int *)(param_2 + 0x150) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    param_1 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar3 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    cVar5 = *(char *)(param_2 + 0x154);
  }
  else {
    bVar4 = (*(code *)PTR_is_zero_slow_path_00798fe8)(param_1,param_4);
    bVar4 = bVar4 ^ 1;
    cVar5 = *(char *)(param_2 + 0x154);
  }
  if (cVar5 == '\0') {
    <craggemini_core[66f3c71560d70857]::resume::SessionStore>::clear_resume_cut
              (param_2 + 0x158,param_3,param_4);
    lVar7 = *(longlong *)(param_2 + 0x1b0);
    local_48 = *(longlong *)(param_2 + 0x1a0);
    lVar6 = *(longlong *)(param_2 + 0x1a8);
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    *(undefined8 *)(param_2 + 0x1a8) = 8;
    *(undefined8 *)(param_2 + 0x1b0) = 0;
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
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
    if (((bVar4 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
      *(undefined1 *)(param_2 + 0x154) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    local_48 = 0;
    lVar6 = 8;
    lVar7 = 0;
  }
  uVar9 = craggemini_core[66f3c71560d70857]::pool::reclaim_cut_dirs
                    (*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),lVar6,lVar7);
  puVar3 = PTR___rust_dealloc_00798fc8;
  if (lVar7 != 0) {
    lVar6 = lVar6 + 0x38;
    do {
      if (*(longlong *)(lVar6 + -0x38) != 0) {
        uVar9 = (*(code *)puVar3)(uVar9,1);
      }
      if (*(longlong *)(lVar6 + -0x20) != 0) {
        uVar9 = (*(code *)puVar3)(uVar9,1);
      }
      if (*(longlong *)(lVar6 + -8) != 0) {
        uVar9 = (*(code *)puVar3)(uVar9,1);
      }
      lVar6 = lVar6 + 0x68;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
  }
  return;
}


