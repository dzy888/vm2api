// 004a9660 try_pop_notified

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::try_pop_notified
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::try_pop_notified(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 in_R8;
  bool bVar12;
  undefined1 auVar13 [16];
  longlong local_38;
  
  if (param_1[1] == 0) {
    lVar11 = 0;
  }
  else {
    lVar5 = *param_1;
    piVar1 = (int *)(lVar5 + 0x10);
    LOCK();
    bVar12 = *(int *)(lVar5 + 0x10) == 0;
    if (bVar12) {
      *(int *)(lVar5 + 0x10) = 1;
    }
    UNLOCK();
    if (!bVar12) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    puVar8 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar9 = 0;
    }
    else {
      bVar9 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar9 = bVar9 ^ 1;
    }
    lVar6 = *(longlong *)(lVar5 + 0x20);
    if (lVar6 != 0) {
      lVar11 = *(longlong *)(lVar6 + 8);
      *(longlong *)(lVar5 + 0x20) = lVar11;
      if (lVar11 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      else {
        *(undefined8 *)(lVar11 + 0x10) = 0;
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined8 *)(lVar6 + 0x10) = 0;
      lVar11 = lVar6 + -0x10;
      LOCK();
      plVar2 = (longlong *)(lVar6 + -0x10);
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 != 0 && SCARRY8(lVar4,1) == *plVar2 < 0) {
        lVar4 = *(longlong *)(lVar5 + 0x28);
        local_38 = lVar6;
        if (lVar4 != lVar6) {
          *(longlong *)(lVar6 + 0x10) = lVar4;
          *(undefined8 *)(lVar6 + 8) = 0;
          if (lVar4 != 0) {
            *(longlong *)(lVar4 + 8) = lVar6;
          }
          *(longlong *)(lVar5 + 0x28) = lVar6;
          if (*(longlong *)(lVar5 + 0x30) == 0) {
            *(longlong *)(lVar5 + 0x30) = lVar6;
            *(undefined1 *)(lVar6 + 0x20) = 1;
          }
          else {
            *(undefined1 *)(lVar6 + 0x20) = 1;
          }
          if ((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) {
            cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            if (cVar10 == '\0') {
              *(undefined1 *)(lVar5 + 0x14) = 1;
            }
          }
          LOCK();
          iVar3 = *piVar1;
          *piVar1 = 0;
          UNLOCK();
          if (iVar3 == 2) {
            (*(code *)PTR_wake_00799010)();
          }
          goto LAB_004a97aa;
        }
        core[c0acaeba6ab4c2e0]::panicking::assert_failed::
        <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                  (1,lVar5 + 0x28,&local_38,0,in_R8,
                   &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    if (((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(lVar5 + 0x14) = 1;
    }
    lVar11 = 0;
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
      lVar11 = 0;
    }
  }
LAB_004a97aa:
  auVar13._8_8_ = param_1;
  auVar13._0_8_ = lVar11;
  return auVar13;
}


