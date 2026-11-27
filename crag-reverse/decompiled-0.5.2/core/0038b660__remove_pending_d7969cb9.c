// 0038b660 remove_pending

/* WARNING: Switch with 1 destination removed at 0x0038b740 */
/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending */

void __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int *local_40;
  byte local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  piVar1 = (int *)(param_1 + 0x60);
  LOCK();
  bVar6 = *(int *)(param_1 + 0x60) == 0;
  if (bVar6) {
    *(int *)(param_1 + 0x60) = 1;
  }
  UNLOCK();
  local_30 = param_2;
  local_28 = param_3;
  if (!bVar6) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar4 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar5 = *(char *)(param_1 + 100);
  }
  else {
    local_38 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    local_38 = local_38 ^ 1;
    cVar5 = *(char *)(param_1 + 100);
  }
  if (cVar5 != '\0') {
    local_40 = piVar1;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_40,
               &anon_869a44742910931491f4b62d80901a16_58_llvm_763634721200370616);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>>::retain::
  <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending::_closure_0_>
            (param_1 + 0x80,&local_30);
  if (((local_38 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar5 == '\0')) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


