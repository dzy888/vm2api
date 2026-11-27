// 004b0f70 record_fault

/* WARNING: Switch with 1 destination removed at 0x004b10d7 */
/* <craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_fault */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AccountPool>::record_fault
          (longlong param_1,ulonglong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  int *local_38;
  byte local_30;
  
  if (param_2 != 0) {
    LOCK();
    plVar1 = (longlong *)(param_1 + 0xd0);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (param_2 <= lVar4 + 1U) {
      (*(code *)PTR_now_00799250)();
      uVar9 = 100;
      if (100 < param_3) {
        uVar9 = param_3;
      }
      uVar10 = uVar9 / 1000;
      uVar8 = (*(code *)PTR_add_00799280)
                        (((int)uVar9 + (int)uVar10 * -1000) * 1000000,uVar10,
                         &anon_572fb51faa0db1e51baf8d00d92dd3e9_260_llvm_7677212527096675952);
      piVar2 = (int *)(param_1 + 0xd8);
      LOCK();
      bVar11 = *(int *)(param_1 + 0xd8) == 0;
      if (bVar11) {
        *(int *)(param_1 + 0xd8) = 1;
      }
      UNLOCK();
      if (!bVar11) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        local_30 = 0;
        cVar7 = *(char *)(param_1 + 0xdc);
      }
      else {
        local_30 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        local_30 = local_30 ^ 1;
        cVar7 = *(char *)(param_1 + 0xdc);
      }
      if (cVar7 != '\0') {
        local_38 = piVar2;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_572fb51faa0db1e51baf8d00d92dd3e9_181_llvm_7677212527096675952,&local_38,
                   &anon_572fb51faa0db1e51baf8d00d92dd3e9_262_llvm_7677212527096675952);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      *(undefined8 *)(param_1 + 0xe0) = uVar8;
      *(int *)(param_1 + 0xe8) = (int)uVar10;
      if (((local_30 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
        *(undefined1 *)(param_1 + 0xdc) = 1;
      }
      LOCK();
      iVar3 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (iVar3 == 2) {
        (*(code *)PTR_syscall_00799e60)(1,0x81);
        return;
      }
    }
  }
  return;
}


