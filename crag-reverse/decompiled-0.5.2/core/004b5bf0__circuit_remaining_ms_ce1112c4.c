// 004b5bf0 circuit_remaining_ms

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::circuit_remaining_ms */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::circuit_remaining_ms
          (longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  int *local_30;
  int local_28;
  
  piVar1 = (int *)(param_1 + 0xd8);
  LOCK();
  bVar8 = *(int *)(param_1 + 0xd8) == 0;
  if (bVar8) {
    *(int *)(param_1 + 0xd8) = 1;
  }
  UNLOCK();
  if (!bVar8) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
    cVar6 = *(char *)(param_1 + 0xdc);
    iVar2 = local_28;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    cVar6 = *(char *)(param_1 + 0xdc);
    iVar2 = local_28;
  }
  if (cVar6 != '\0') {
    local_28 = CONCAT31((int3)((uint)iVar2 >> 8),bVar5);
    local_30 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_181_llvm_7677212527096675952,&local_30,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078ba18);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_28 = *(int *)(param_1 + 0xe8);
  if (local_28 != -1) {
    local_30 = *(int **)(param_1 + 0xe0);
    (*(code *)PTR_now_00799250)();
    lVar7 = (*(code *)PTR_checked_duration_since_00799bb8)();
    iVar2 = local_28;
    if (param_3 != 0xffffffff) {
      lVar7 = (ulonglong)param_3 / 1000000 + lVar7 * 1000;
      goto joined_r0x004b5c99;
    }
  }
  local_28 = iVar2;
  lVar7 = 0;
joined_r0x004b5c99:
  if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return lVar7;
}


