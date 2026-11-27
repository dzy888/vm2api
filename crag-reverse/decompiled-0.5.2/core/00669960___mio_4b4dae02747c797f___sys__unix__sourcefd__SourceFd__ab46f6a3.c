// 00669960 <mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>

/* <tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::<mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>
    */

undefined8 * __rustcall
<tokio[d7d91d38da47d894]::runtime::io::registration::Registration>::new_with_interest_and_handle::
<mio[4b4dae02747c797f]::sys::unix::sourcefd::SourceFd>
          (undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
          longlong *param_5)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 *local_38;
  
  plVar9 = param_3;
  local_48 = param_4;
  plStack_40 = param_5;
  local_38 = param_1;
  lVar7 = (*(code *)PTR_io_0079a300)();
  piVar1 = (int *)(lVar7 + 8);
  LOCK();
  bVar10 = *(int *)(lVar7 + 8) == 0;
  if (bVar10) {
    *(int *)(lVar7 + 8) = 1;
  }
  UNLOCK();
  if (!bVar10) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
  }
  lVar8 = (*(code *)PTR_allocate_0079a308)();
  if (lVar8 == 1) {
    if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
      *(undefined1 *)(lVar7 + 0xc) = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar2 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    goto LAB_00669b50;
  }
  local_50 = plVar9;
  if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(lVar7 + 0xc) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (((ulonglong)param_3 & 1) == 0) {
    bVar5 = 2;
    if (((ulonglong)param_3 & 2) != 0) goto LAB_00669a8c;
    bVar5 = 0x10;
    bVar4 = 1;
    if (((ulonglong)param_3 & 0x10) != 0) goto LAB_00669a94;
  }
  else {
    bVar5 = 1;
    if (((ulonglong)param_3 & 2) != 0) {
      bVar5 = 3;
    }
LAB_00669a8c:
    if (((ulonglong)param_3 & 0x10) != 0) {
      bVar5 = bVar5 | 0x10;
    }
LAB_00669a94:
    bVar4 = bVar5;
    if (((ulonglong)param_3 & 0x20) != 0) {
      bVar4 = bVar5 | 1;
    }
  }
  plVar9 = (longlong *)(*(code *)PTR_register_0079a310)(bVar4,local_50 + 0x10);
  if (plVar9 == (longlong *)0x0) {
    *local_38 = local_48;
    local_38[1] = plStack_40;
    local_38[2] = local_50;
    return local_38;
  }
  LOCK();
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    *piVar1 = 1;
  }
  UNLOCK();
  uVar11 = extraout_XMM0_Da;
  if (iVar2 != 0) {
    uVar11 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar5 = bVar5 ^ 1;
    uVar11 = extraout_XMM0_Da_00;
  }
  (*(code *)PTR_remove_0079a318)(uVar11,&local_50);
  if (((bVar5 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0))
     && (cVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar6 == '\0')) {
    *(undefined1 *)(lVar7 + 0xc) = 1;
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = 0;
  UNLOCK();
  if (iVar2 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  LOCK();
  *local_50 = *local_50 + -1;
  UNLOCK();
  if (*local_50 == 0) {
    (*(code *)PTR_drop_slow_00799150)();
  }
LAB_00669b50:
  puVar3 = local_38;
  local_38[1] = plVar9;
  *local_38 = 2;
  if ((char)local_48 == '\0') {
    LOCK();
    *plStack_40 = *plStack_40 + -1;
    UNLOCK();
    if (*plStack_40 == 0) {
      (*(code *)PTR_drop_slow_00799078)();
    }
  }
  else {
    LOCK();
    *plStack_40 = *plStack_40 + -1;
    UNLOCK();
    if (*plStack_40 == 0) {
      (*(code *)PTR_drop_slow_00799070)();
    }
  }
  return puVar3;
}


