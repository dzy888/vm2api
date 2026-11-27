// 002ef9e0 <<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_>(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  
  switch(*(undefined1 *)(param_1 + 0x13)) {
  case 3:
    <<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::shutdown::_closure_0_>
              (param_1 + 0x50);
    if ((*(longlong *)(param_1 + 0x38) != -1) && (*(longlong *)(param_1 + 0x38) != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    *(undefined1 *)(param_1 + 0x11) = 0;
    plVar2 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>>
      ::drop_slow(param_1 + 0x30);
    }
    <[(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::path::PathBuf>)]>
              (*(longlong *)(param_1 + 0x7f0),
               (ulonglong)(*(longlong *)(param_1 + 0x800) - *(longlong *)(param_1 + 0x7f0)) >> 5);
    if (*(longlong *)(param_1 + 0x7f8) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0x30b8) == '\x03') {
      <<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_and_terminate::_closure_0_>
                (param_1 + 0x1920);
      piVar3 = *(int **)(param_1 + 0x1918);
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
joined_r0x002efc56:
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
          goto joined_r0x002efc56;
        }
      }
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (iVar1 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      *(undefined1 *)(param_1 + 0x30b9) = 0;
    }
    else if (*(char *)(param_1 + 0x30b8) == '\0') {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(param_1 + 0x880);
    }
    <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::pool::AgySlot>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 0x860);
    break;
  case 5:
    <tokio[d7d91d38da47d894]::time::timeout::Timeout<<craggemini_core[66f3c71560d70857]::pool::AccountPool>::shutdown::_closure_0_::_closure_0_>>
              (param_1 + 0x18);
    break;
  case 6:
    if (*(longlong *)(param_1 + 0x18) != 2) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        plVar2 = *(longlong **)(param_1 + 0x20);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799078)();
        }
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x20);
        LOCK();
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          (*(code *)PTR_drop_slow_00799070)();
        }
      }
      <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::runtime::Timer>>
                (param_1 + 0x28);
    }
    <tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>>(param_1 + 0xb0);
    break;
  default:
    goto switchD_002efa0a_default;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x20);
    for (lVar8 = *(longlong *)(param_1 + 0x28) + 1; lVar8 != 1; lVar8 = lVar8 + -1) {
      <craggemini_core[66f3c71560d70857]::pool::AgySlot>(lVar7);
      lVar7 = lVar7 + 0x848;
    }
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
switchD_002efa0a_default:
  return;
}


