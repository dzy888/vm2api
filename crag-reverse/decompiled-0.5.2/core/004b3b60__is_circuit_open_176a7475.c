// 004b3b60 is_circuit_open

/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::is_circuit_open */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::is_circuit_open
          (longlong param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  bool bVar11;
  int *local_40;
  byte local_38;
  
  piVar1 = (int *)(param_1 + 0xd8);
  LOCK();
  bVar11 = *(int *)(param_1 + 0xd8) == 0;
  if (bVar11) {
    *(int *)(param_1 + 0xd8) = 1;
  }
  UNLOCK();
  if (!bVar11) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar10 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar6 = *(char *)(param_1 + 0xdc);
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
    cVar6 = *(char *)(param_1 + 0xdc);
  }
  if (cVar6 != '\0') {
    local_40 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_572fb51faa0db1e51baf8d00d92dd3e9_181_llvm_7677212527096675952,&local_40,
               &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078b988);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar3 = *(uint *)(param_1 + 0xe8);
  if (uVar3 == 0xffffffff) {
LAB_004b3bfb:
    if (((local_38 == 0) && ((*puVar10 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(param_1 + 0xdc) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    uVar9 = 0;
    uVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    lVar7 = (*(code *)PTR_now_00799250)();
    if (lVar7 == lVar4) {
      if (uVar3 <= param_3) {
LAB_004b3be9:
        *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
        puVar10 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
        goto LAB_004b3bfb;
      }
    }
    else if (lVar4 <= lVar7) goto LAB_004b3be9;
    if (((local_38 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(param_1 + 0xdc) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    uVar9 = 1;
    uVar8 = 1;
  }
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
    uVar8 = uVar9;
  }
  return uVar8;
}


