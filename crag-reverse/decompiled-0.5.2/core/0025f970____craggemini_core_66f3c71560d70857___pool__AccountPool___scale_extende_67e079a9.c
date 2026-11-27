// 0025f970 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::{closure#0}>

/* WARNING: Removing unreachable block (ram,0x006fd7b0) */
/* WARNING: Switch with 1 destination removed at 0x0025fad1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::scale_extended::_closure_0_>
          (longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  
  switch(*(undefined1 *)(param_1 + 0xa0)) {
  case 3:
    if (*(char *)(param_1 + 0x3150) != '\x03') {
      if (*(char *)(param_1 + 0x3150) == '\0') {
        <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x918);
      }
      goto LAB_0025fbde;
    }
    <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
              (param_1 + 0x19b8);
    piVar3 = *(int **)(param_1 + 0x19b0);
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      *(ulonglong *)(piVar3 + 0x40) =
           *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
      uVar4 = *(ulonglong *)puVar5;
joined_r0x0025fce2:
      if ((uVar4 & 0x7fffffffffffffff) != 0) {
        cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        if (cVar6 == '\0') {
          *(undefined1 *)(piVar3 + 1) = 1;
        }
      }
    }
    else {
      cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      *(ulonglong *)(piVar3 + 0x40) =
           *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
      if (cVar6 != '\0') {
        uVar4 = *(ulonglong *)puVar5;
        goto joined_r0x0025fce2;
      }
    }
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    *(undefined1 *)(param_1 + 0x3151) = 0;
LAB_0025fbde:
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x8f8);
    return;
  case 4:
    if (*(char *)(param_1 + 0x120) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x118) != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0xd0) != '\x04') {
      return;
    }
    (*(code *)PTR_drop_00799100)();
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0025fb2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0xe0) + 0x18))();
    return;
  case 5:
    <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::spawn_acp_worker_inner::_closure_0_>
              (param_1 + 0xb0);
    goto LAB_0025faba;
  case 6:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x168);
    if (*(longlong *)(param_1 + 0x150) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xa5) = 0;
    <craggemini_core[66f3c71560d70857]::pool::SlotMcpRegistration>(param_1 + 0x128);
    *(undefined1 *)(param_1 + 0xa6) = 0;
    plVar2 = *(longlong **)(param_1 + 0x120);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x120);
    }
    if ((*(char *)(param_1 + 0xa1) != '\0') && (*(longlong *)(param_1 + 0xc0) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0xa1) = 0;
    *(undefined2 *)(param_1 + 0xa7) = 0;
    if (*(char *)(param_1 + 0xa2) != '\0') {
      plVar2 = *(longlong **)(param_1 + 0xb8);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
        ::drop_slow(param_1 + 0xb8);
      }
    }
    *(undefined1 *)(param_1 + 0xa2) = 0;
    *(undefined1 *)(param_1 + 0xa9) = 0;
LAB_0025faba:
    piVar3 = *(int **)(param_1 + 0x80);
    LOCK();
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      *piVar3 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar7 = bVar7 ^ 1;
    }
    <tokio[d7d91d38da47d894]::sync::batch_semaphore::Semaphore>::add_permits_locked
              (piVar3,1,piVar3,bVar7);
    return;
  case 7:
    if (*(char *)(param_1 + 0x1238) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::spawn_with_cut::_closure_0_>
                (param_1 + 0xd8);
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x3130) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x1998);
      piVar3 = *(int **)(param_1 + 0x1990);
      LOCK();
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        (*(code *)PTR_lock_contended_00798fe0)();
      }
      puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
      if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        uVar4 = *(ulonglong *)puVar5;
joined_r0x0025fd4b:
        if ((uVar4 & 0x7fffffffffffffff) != 0) {
          cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
          if (cVar6 == '\0') {
            *(undefined1 *)(piVar3 + 1) = 1;
          }
        }
      }
      else {
        cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
        *(ulonglong *)(piVar3 + 0x40) =
             *(longlong *)(piVar3 + 0x40) + -1 + (ulonglong)(*(longlong *)(piVar3 + 0x40) == 0);
        if (cVar6 != '\0') {
          uVar4 = *(ulonglong *)puVar5;
          goto joined_r0x0025fd4b;
        }
      }
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x3131) = 0;
    }
    else if (*(char *)(param_1 + 0x3130) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x8f8);
    }
    *(undefined1 *)(param_1 + 0xa3) = 0;
    break;
  default:
    goto switchD_0025f99c_default;
  }
  *(undefined1 *)(param_1 + 0xa4) = 0;
switchD_0025f99c_default:
  return;
}


