// 004d49a0 drop

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 in_R8;
  bool bVar12;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  
  if (param_1[1] != 0) {
    param_1[1] = 0;
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    lVar2 = *param_1;
    LOCK();
    bVar12 = *(int *)(lVar2 + 0x10) == 0;
    if (bVar12) {
      *(int *)(lVar2 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar12) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar5 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar9 = bVar9 ^ 1;
    }
    if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
      plVar10 = plStack_40;
      plVar11 = local_48;
      plVar7 = *(longlong **)(lVar2 + 0x30);
      do {
        local_48 = plVar7;
        lVar3 = local_48[1];
        *(longlong *)(lVar2 + 0x30) = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar2 + 0x28) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        local_48[1] = 0;
        local_48[2] = 0;
        *(undefined1 *)(local_48 + 4) = 2;
        local_38 = local_48;
        if (plVar11 == local_48) {
          local_48 = plVar11;
          core[c0acaeba6ab4c2e0]::panicking::assert_failed::
          <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                    (1,&local_48,&local_38,0,in_R8,
                     &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
          goto LAB_004d4c3f;
        }
        local_48[2] = (longlong)plVar11;
        local_48[1] = 0;
        if (plVar11 != (longlong *)0x0) {
          plVar11[1] = (longlong)local_48;
        }
        if (plVar10 == (longlong *)0x0) {
          plVar10 = local_48;
          plStack_40 = local_48;
        }
        plVar11 = local_48;
        plVar7 = *(longlong **)(lVar2 + 0x30);
      } while (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0);
    }
    if (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) {
      plVar10 = local_48;
      plVar11 = plStack_40;
      plVar7 = *(longlong **)(lVar2 + 0x20);
      do {
        local_48 = plVar7;
        lVar3 = local_48[1];
        *(longlong *)(lVar2 + 0x20) = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar2 + 0x18) = 0;
        }
        else {
          *(undefined8 *)(lVar3 + 0x10) = 0;
        }
        local_48[1] = 0;
        local_48[2] = 0;
        *(undefined1 *)(local_48 + 4) = 2;
        local_38 = local_48;
        if (plVar10 == local_48) {
          local_48 = plVar10;
          core[c0acaeba6ab4c2e0]::panicking::assert_failed::
          <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                    (1,&local_48,&local_38,0,in_R8,
                     &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
LAB_004d4c3f:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_48[2] = (longlong)plVar10;
        local_48[1] = 0;
        if (plVar10 != (longlong *)0x0) {
          plVar10[1] = (longlong)local_48;
        }
        if (plVar11 == (longlong *)0x0) {
          plVar11 = local_48;
          plStack_40 = local_48;
        }
        plVar10 = local_48;
        plVar7 = *(longlong **)(lVar2 + 0x20);
      } while (*(longlong **)(lVar2 + 0x20) != (longlong *)0x0);
    }
    if (((bVar9 == 0) && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
      *(undefined1 *)(lVar2 + 0x14) = 1;
    }
    LOCK();
    iVar1 = *(int *)(lVar2 + 0x10);
    *(int *)(lVar2 + 0x10) = 0;
    UNLOCK();
    if (iVar1 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar6 = PTR_drop_join_handle_slow_00799088;
    puVar5 = PTR_drop_join_handle_fast_00799080;
    if (plStack_40 != (longlong *)0x0) {
      do {
        plVar10 = (longlong *)plStack_40[1];
        if (plVar10 == (longlong *)0x0) {
          local_48 = (longlong *)0x0;
        }
        else {
          plVar10[2] = 0;
        }
        plStack_40[1] = 0;
        plStack_40[2] = 0;
        plVar11 = plStack_40 + -2;
        plStack_40 = plVar10;
        local_38 = plVar11;
        cVar8 = (*(code *)puVar5)();
        if (cVar8 != '\0') {
          (*(code *)puVar6)();
        }
        LOCK();
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
          ::drop_slow(&local_38);
        }
      } while (plStack_40 != (longlong *)0x0);
    }
  }
  return;
}


