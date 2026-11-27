// 00492e70 <<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::drain::<<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}> */

void __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::drain::
<<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_>
          (void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *in_RDI;
  undefined8 in_R8;
  bool bVar10;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  
  if (in_RDI[1] != 0) {
    in_RDI[1] = 0;
    local_38 = 0;
    lStack_30 = 0;
    lVar2 = *in_RDI;
    LOCK();
    bVar10 = *(int *)(lVar2 + 0x10) == 0;
    if (bVar10) {
      *(int *)(lVar2 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar10) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
    }
    else {
      bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar7 = bVar7 ^ 1;
    }
    if (*(longlong *)(lVar2 + 0x30) != 0) {
      lVar8 = lStack_30;
      lVar9 = local_38;
      lVar3 = *(longlong *)(lVar2 + 0x30);
      do {
        local_38 = lVar3;
        lVar3 = *(longlong *)(local_38 + 8);
        *(longlong *)(lVar2 + 0x30) = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        *(undefined8 *)(local_38 + 8) = 0;
        *(undefined8 *)(local_38 + 0x10) = 0;
        *(undefined1 *)(local_38 + 0x20) = 2;
        local_28 = local_38;
        if (lVar9 == local_38) {
          local_38 = lVar9;
          core[c0acaeba6ab4c2e0]::panicking::assert_failed::
          <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                    (1,&local_38,&local_28,0,in_R8,
                     &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
          goto LAB_00493097;
        }
        *(longlong *)(local_38 + 0x10) = lVar9;
        *(undefined8 *)(local_38 + 8) = 0;
        if (lVar9 != 0) {
          *(longlong *)(lVar9 + 8) = local_38;
        }
        if (lVar8 == 0) {
          lVar8 = local_38;
          lStack_30 = local_38;
        }
        lVar9 = local_38;
        lVar3 = *(longlong *)(lVar2 + 0x30);
      } while (*(longlong *)(lVar2 + 0x30) != 0);
    }
    if (*(longlong *)(lVar2 + 0x20) != 0) {
      lVar8 = local_38;
      lVar9 = lStack_30;
      lVar3 = *(longlong *)(lVar2 + 0x20);
      do {
        local_38 = lVar3;
        lVar3 = *(longlong *)(local_38 + 8);
        *(longlong *)(lVar2 + 0x20) = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar2 + 0x18) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        *(undefined8 *)(local_38 + 8) = 0;
        *(undefined8 *)(local_38 + 0x10) = 0;
        *(undefined1 *)(local_38 + 0x20) = 2;
        local_28 = local_38;
        if (lVar8 == local_38) {
          local_38 = lVar8;
          core[c0acaeba6ab4c2e0]::panicking::assert_failed::
          <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                    (1,&local_38,&local_28,0,in_R8,
                     &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
LAB_00493097:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        *(longlong *)(local_38 + 0x10) = lVar8;
        *(undefined8 *)(local_38 + 8) = 0;
        if (lVar8 != 0) {
          *(longlong *)(lVar8 + 8) = local_38;
        }
        if (lVar9 == 0) {
          lVar9 = local_38;
          lStack_30 = local_38;
        }
        lVar8 = local_38;
        lVar3 = *(longlong *)(lVar2 + 0x20);
      } while (*(longlong *)(lVar2 + 0x20) != 0);
    }
    if (((bVar7 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar2 + 0x14) = 1;
    }
    LOCK();
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    do {
      cVar6 = <<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>>
              ::pop_next(&local_38);
    } while (cVar6 != '\0');
    do {
      cVar6 = <<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<_>>::drain::AllEntries<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>,<tokio[d7d91d38da47d894]::task::join_set::JoinSet<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}>>
              ::pop_next(&local_38);
    } while (cVar6 != '\0');
  }
  return;
}


