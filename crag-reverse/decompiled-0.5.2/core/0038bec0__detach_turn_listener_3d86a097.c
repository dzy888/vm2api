// 0038bec0 detach_turn_listener

/* WARNING: Switch with 1 destination removed at 0x0038bfd2 */
/* <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::detach_turn_listener */

void __rustcall
<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::detach_turn_listener(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  int *local_38;
  byte local_30;
  
  piVar1 = (int *)(param_1 + 0x60);
  LOCK();
  bVar9 = *(int *)(param_1 + 0x60) == 0;
  if (bVar9) {
    *(int *)(param_1 + 0x60) = 1;
  }
  UNLOCK();
  if (!bVar9) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
    cVar8 = *(char *)(param_1 + 100);
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
    cVar8 = *(char *)(param_1 + 100);
  }
  if (cVar8 != '\0') {
    local_38 = piVar1;
    local_30 = bVar7;
    (*(code *)PTR_unwrap_failed_00799028)
              (&anon_869a44742910931491f4b62d80901a16_50_llvm_763634721200370616,&local_38,
               &anon_869a44742910931491f4b62d80901a16_63_llvm_763634721200370616);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  puVar2 = (undefined8 *)(param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar2);
    plVar4 = (longlong *)*puVar2;
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar2);
    }
  }
  *puVar2 = 0;
  if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 100) = 1;
  }
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_syscall_00799e60)(1,0x81);
    return;
  }
  return;
}


