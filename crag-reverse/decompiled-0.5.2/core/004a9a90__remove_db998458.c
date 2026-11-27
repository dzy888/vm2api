// 004a9a90 remove

/* <tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>::remove
    */

longlong __rustcall
<tokio[d7d91d38da47d894]::util::idle_notified_set::EntryInOneOfTheLists<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>
::remove(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  bool bVar10;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  
  param_2[1] = param_2[1] + -1;
  lVar3 = *param_2;
  piVar1 = (int *)(lVar3 + 0x10);
  LOCK();
  bVar10 = *(int *)(lVar3 + 0x10) == 0;
  if (bVar10) {
    *(int *)(lVar3 + 0x10) = 1;
  }
  UNLOCK();
  local_40 = param_1;
  local_38 = param_2;
  if (!bVar10) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar6 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar7 = bVar7 ^ 1;
  }
  cVar8 = (char)param_1[6];
  *(undefined1 *)(param_1 + 6) = 2;
  lVar9 = 8;
  if (cVar8 != '\0') {
    if (cVar8 != '\x01') {
      (*(code *)PTR_panic_00799338)
                (cVar8,&anon_572fb51faa0db1e51baf8d00d92dd3e9_219_llvm_7677212527096675952);
      goto LAB_004a9c2a;
    }
    lVar9 = 0x18;
  }
  if (param_1[3] == 0) {
    if (*(longlong **)((longlong)piVar1 + lVar9) == param_1 + 2) {
      lVar4 = param_1[4];
      *(longlong *)((longlong)piVar1 + lVar9) = lVar4;
      goto joined_r0x004a9b46;
    }
  }
  else {
    lVar4 = param_1[4];
    *(longlong *)(param_1[3] + 0x10) = lVar4;
joined_r0x004a9b46:
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 8) = param_1[3];
LAB_004a9b5b:
      param_1[3] = 0;
      param_1[4] = 0;
      LOCK();
      *param_1 = *param_1 + -1;
      UNLOCK();
      local_30 = param_1;
      if (*param_1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
        ::drop_slow(&local_30);
      }
      if (((bVar7 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
         (cVar8 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar8 == '\0')) {
        *(undefined1 *)(lVar3 + 0x14) = 1;
      }
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = 0;
      UNLOCK();
      if (iVar2 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      lVar3 = local_40[5];
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 == 0) {
        <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::util::idle_notified_set::ListEntry<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<()>>>>
        ::drop_slow(&local_40);
      }
      return lVar3;
    }
    if (*(longlong **)(lVar3 + 0x18 + lVar9) == param_1 + 2) {
      *(longlong *)(lVar3 + 0x18 + lVar9) = param_1[3];
      goto LAB_004a9b5b;
    }
  }
  (*(code *)PTR_unwrap_failed_00799278)();
LAB_004a9c2a:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


