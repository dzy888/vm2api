// 004a9350 pop_notified

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::pop_notified
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::IdleNotifiedSet<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::pop_notified(longlong *param_1,longlong *param_2,ulonglong param_3,undefined8 param_4,
              undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  undefined *puVar8;
  byte bVar9;
  char cVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  longlong local_50;
  longlong local_38;
  
  if (param_1[1] == 0) {
    lVar11 = 0;
    goto LAB_004a953a;
  }
  lVar5 = *param_1;
  piVar2 = (int *)(lVar5 + 0x10);
  LOCK();
  bVar14 = *(int *)(lVar5 + 0x10) == 0;
  if (bVar14) {
    *(int *)(lVar5 + 0x10) = 1;
  }
  UNLOCK();
  if (!bVar14) {
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
  if ((*(undefined8 **)(lVar5 + 0x38) == (undefined8 *)0x0) ||
     (param_3 = *(ulonglong *)(lVar5 + 0x40) ^ param_2[1],
     *(undefined8 **)(lVar5 + 0x38) != (undefined8 *)*param_2 || param_3 != 0)) {
    uVar12 = (**(code **)*param_2)();
    local_50 = *(longlong *)(lVar5 + 0x38);
    *(undefined8 *)(lVar5 + 0x38) = uVar12;
    *(ulonglong *)(lVar5 + 0x40) = param_3;
    bVar7 = 1;
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (lVar13 == 0) goto LAB_004a93e7;
LAB_004a946c:
    lVar11 = *(longlong *)(lVar13 + 8);
    *(longlong *)(lVar5 + 0x20) = lVar11;
    if (lVar11 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(lVar11 + 0x10) = 0;
    }
    *(undefined8 *)(lVar13 + 8) = 0;
    *(undefined8 *)(lVar13 + 0x10) = 0;
    lVar11 = lVar13 + -0x10;
    LOCK();
    plVar1 = (longlong *)(lVar13 + -0x10);
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (*plVar1 == 0 || SCARRY8(lVar4,1) != *plVar1 < 0) {
LAB_004a95bf:
                    /* WARNING: Does not return */
      pcVar6 = (code *)invalidInstructionException();
      (*pcVar6)();
    }
    lVar4 = *(longlong *)(lVar5 + 0x28);
    local_38 = lVar13;
    if (lVar4 == lVar13) {
      core[c0acaeba6ab4c2e0]::panicking::assert_failed::
      <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>,core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::ptr::non_null::NonNull<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>>
                (1,lVar5 + 0x28,&local_38,0,param_5,
                 &anon_63b06cc94833867f683611f039574387_360_llvm_6903579140370050947);
      goto LAB_004a95bf;
    }
    *(longlong *)(lVar13 + 0x10) = lVar4;
    *(undefined8 *)(lVar13 + 8) = 0;
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 8) = lVar13;
    }
    *(longlong *)(lVar5 + 0x28) = lVar13;
    if (*(longlong *)(lVar5 + 0x30) == 0) {
      *(longlong *)(lVar5 + 0x30) = lVar13;
      *(undefined1 *)(lVar13 + 0x20) = 1;
    }
    else {
      *(undefined1 *)(lVar13 + 0x20) = 1;
    }
    if (((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(lVar5 + 0x14) = 1;
    }
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    bVar14 = (bool)(bVar7 & local_50 != 0);
  }
  else {
    bVar7 = 0;
    lVar13 = *(longlong *)(lVar5 + 0x20);
    if (lVar13 != 0) goto LAB_004a946c;
LAB_004a93e7:
    if (((bVar9 == 0) && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
       (cVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar10 == '\0')) {
      *(undefined1 *)(lVar5 + 0x14) = 1;
    }
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    lVar11 = 0;
    bVar14 = (bool)(bVar7 & local_50 != 0);
  }
  if (bVar14) {
    (**(code **)(local_50 + 0x18))();
  }
LAB_004a953a:
  auVar15._8_8_ = param_1;
  auVar15._0_8_ = lVar11;
  return auVar15;
}


