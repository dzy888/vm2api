// 004c1e80 get_policy

/* <craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_policy */

undefined4 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_policy
          (undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  char cVar12;
  bool bVar13;
  int *local_30;
  byte local_28;
  
  piVar1 = (int *)(param_2 + 0x1a0);
  LOCK();
  bVar13 = *(int *)(param_2 + 0x1a0) == 0;
  if (bVar13) {
    *(int *)(param_2 + 0x1a0) = 1;
  }
  UNLOCK();
  if (!bVar13) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar11 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
    cVar12 = *(char *)(param_2 + 0x1a4);
  }
  else {
    local_28 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_28 = local_28 ^ 1;
    cVar12 = *(char *)(param_2 + 0x1a4);
  }
  if (cVar12 != '\0') {
    local_30 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_187_llvm_7677212527096675952,&local_30,
               &anon_572fb51faa0db1e51baf8d00d92dd3e9_364_llvm_7677212527096675952);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x1c8);
  uVar4 = *(undefined4 *)(param_2 + 0x1a8);
  uVar5 = *(undefined4 *)(param_2 + 0x1ac);
  uVar6 = *(undefined4 *)(param_2 + 0x1b0);
  uVar7 = *(undefined4 *)(param_2 + 0x1b4);
  uVar8 = *(undefined4 *)(param_2 + 0x1bc);
  uVar9 = *(undefined4 *)(param_2 + 0x1c0);
  uVar10 = *(undefined4 *)(param_2 + 0x1c4);
  param_1[4] = *(undefined4 *)(param_2 + 0x1b8);
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar6;
  param_1[3] = uVar7;
  if (((local_28 == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) &&
     (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
    *(undefined1 *)(param_2 + 0x1a4) = 1;
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


