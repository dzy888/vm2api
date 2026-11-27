// 0038bb90 pending_summaries

/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries
          (undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int *local_38;
  byte local_30;
  
  piVar1 = (int *)(param_2 + 0x60);
  LOCK();
  bVar6 = *(int *)(param_2 + 0x60) == 0;
  if (bVar6) {
    *(int *)(param_2 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar5 = *(char *)(param_2 + 100);
  }
  else {
    local_30 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_30 = local_30 ^ 1;
    cVar5 = *(char *)(param_2 + 100);
  }
  if (cVar5 != '\0') {
    local_38 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_38,
               &anon_869a44742910931491f4b62d80901a16_60_llvm_763634721200370616);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>,<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries::{closure#0}>>>
  ::from_iter(param_1,*(longlong *)(param_2 + 0x88),
              *(longlong *)(param_2 + 0x90) * 0x50 + *(longlong *)(param_2 + 0x88));
  if (((local_30 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_2 + 100) = 1;
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


