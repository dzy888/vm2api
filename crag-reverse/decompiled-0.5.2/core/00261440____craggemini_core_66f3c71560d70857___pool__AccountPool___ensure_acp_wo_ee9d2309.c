// 00261440 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::ensure_acp_worker::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x006fd7b0) */
/* WARNING: Switch with 1 destination removed at 0x00261510 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::ensure_acp_worker::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::ensure_acp_worker::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  int *piVar4;
  byte bVar5;
  
  cVar2 = *(char *)(param_1 + 0x4f);
  if (cVar2 != '\x03') {
    if (cVar2 == '\x04') {
      <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
                (param_1 + 0x50);
    }
    else {
      if (cVar2 != '\x05') {
        return;
      }
      <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
                (param_1 + 0xb8);
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x78);
      *(undefined2 *)(param_1 + 0x49) = 0;
      if ((*(char *)(param_1 + 0x48) != '\0') && (*(longlong *)(param_1 + 0x60) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(undefined1 *)(param_1 + 0x48) = 0;
      *(undefined2 *)(param_1 + 0x4b) = 0;
      plVar3 = *(longlong **)(param_1 + 0x58);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0x58);
      }
      *(undefined1 *)(param_1 + 0x4d) = 0;
      plVar3 = *(longlong **)(param_1 + 0x50);
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
        ::drop_slow(param_1 + 0x50);
      }
      *(undefined1 *)(param_1 + 0x4e) = 0;
    }
    piVar4 = *(int **)(param_1 + 0x28);
    LOCK();
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      *piVar4 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar5 = 0;
    }
    else {
      bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar5 = bVar5 ^ 1;
    }
    <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
              (piVar4,1,piVar4,bVar5);
    return;
  }
  if (((*(char *)(param_1 + 0xc0) == '\x03') && (*(char *)(param_1 + 0xb8) == '\x03')) &&
     (*(char *)(param_1 + 0x70) == '\x04')) {
    (*(code *)PTR_drop_00799100)();
    if (*(longlong *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00261552. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x80) + 0x18))();
      return;
    }
  }
  return;
}


