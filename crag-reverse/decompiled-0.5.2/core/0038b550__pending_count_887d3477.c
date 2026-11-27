// 0038b550 pending_count

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_count */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_count(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int *local_28;
  byte local_20;
  
  piVar1 = (int *)(param_1 + 0x60);
  LOCK();
  bVar7 = *(int *)(param_1 + 0x60) == 0;
  if (bVar7) {
    *(int *)(param_1 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar7) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_20 = 0;
    cVar6 = *(char *)(param_1 + 100);
  }
  else {
    local_20 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_20 = local_20 ^ 1;
    cVar6 = *(char *)(param_1 + 100);
  }
  if (cVar6 != '\0') {
    local_28 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_28,
               &anon_869a44742910931491f4b62d80901a16_57_llvm_763634721200370616);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  if (((local_20 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  return uVar3;
}


