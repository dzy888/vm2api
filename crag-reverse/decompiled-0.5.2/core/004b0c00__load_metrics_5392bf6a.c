// 004b0c00 load_metrics

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::load_metrics
          (longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  undefined *puVar10;
  char cVar11;
  ulonglong uVar12;
  bool bVar13;
  int *local_40;
  byte local_38;
  
  lVar3 = *(longlong *)(param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x40);
  piVar1 = (int *)(param_2 + 0x298);
  LOCK();
  bVar13 = *(int *)(param_2 + 0x298) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x298) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar10 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar11 = *(char *)(param_2 + 0x29c);
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
    cVar11 = *(char *)(param_2 + 0x29c);
  }
  if (cVar11 != '\0') {
    local_40 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b510
               ,&local_40,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b7c0);
    goto LAB_004b0ec4;
  }
  lVar5 = *(longlong *)(param_2 + 0x3a8);
  if (*(longlong *)(param_2 + 0x450) == 0) {
    uVar12 = 0;
    lVar6 = *(longlong *)(param_2 + 0x2e8);
  }
  else {
    uVar12 = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x450) + 0x240) + 0x10) != '\0') {
      uVar12 = (ulonglong)(lVar5 == 0);
    }
    lVar6 = *(longlong *)(param_2 + 0x2e8);
  }
  if (((local_38 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(param_2 + 0x29c) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  piVar1 = (int *)(param_2 + 0x490);
  LOCK();
  bVar13 = *(int *)(param_2 + 0x490) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x490) = 1;
  }
  UNLOCK();
  if (bVar13) {
    if ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0) goto LAB_004b0e57;
LAB_004b0cf6:
    local_38 = 0;
    cVar11 = *(char *)(param_2 + 0x494);
  }
  else {
    (*(code *)PTR_lock_contended_00798fe0)();
    if ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) == 0) goto LAB_004b0cf6;
LAB_004b0e57:
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
    cVar11 = *(char *)(param_2 + 0x494);
  }
  if (cVar11 == '\0') {
    lVar7 = *(longlong *)(param_2 + 0x4b0);
    lVar8 = *(longlong *)(param_2 + 0x4d0);
    *param_1 = lVar5 + *(longlong *)(param_2 + 0x548);
    param_1[1] = uVar12 + lVar7;
    param_1[2] = lVar6 + lVar8;
    param_1[3] = lVar3;
    param_1[4] = lVar4;
    if (((local_38 == 0) && ((*(ulonglong *)puVar10 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(param_2 + 0x494) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    return param_1;
  }
  local_40 = piVar1;
  (*(code *)PTR_unwrap_failed_00799028)
            (&
             PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b530
             ,&local_40,
             &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b7d8);
LAB_004b0ec4:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}


