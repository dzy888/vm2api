// 006f1010 <tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::add_source::<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::add_source::
<tokio[d7d91d38da47d894]::process::imp::pidfd_reaper::Pidfd>
          (longlong param_1,undefined4 *param_2,longlong ****param_3)

{
  int *piVar1;
  longlong ****pppplVar2;
  int iVar3;
  longlong ***ppplVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong ****pppplVar10;
  longlong ****pppplVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  longlong ****local_40;
  longlong ****local_38;
  
  piVar1 = (int *)(param_1 + 8);
  LOCK();
  bVar12 = *(int *)(param_1 + 8) == 0;
  if (bVar12) {
    *(int *)(param_1 + 8) = 1;
  }
  UNLOCK();
  pppplVar11 = param_3;
  if (!bVar12) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar6 = bVar6 ^ 1;
  }
  lVar8 = (*(code *)PTR_allocate_0079a308)();
  if (lVar8 == 1) {
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    uVar9 = 1;
    if (iVar3 != 2) goto LAB_006f124a;
    (*(code *)PTR_wake_00799010)();
    pppplVar10 = pppplVar11;
  }
  else {
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    if (((ulonglong)param_3 & 1) == 0) {
      bVar6 = 2;
      if (((ulonglong)param_3 & 2) != 0) goto LAB_006f110d;
      bVar6 = 0x10;
      bVar5 = 1;
      if (((ulonglong)param_3 & 0x10) != 0) goto LAB_006f1115;
    }
    else {
      bVar6 = 1;
      if (((ulonglong)param_3 & 2) != 0) {
        bVar6 = 3;
      }
LAB_006f110d:
      if (((ulonglong)param_3 & 0x10) != 0) {
        bVar6 = bVar6 | 0x10;
      }
LAB_006f1115:
      bVar5 = bVar6;
      if (((ulonglong)param_3 & 0x20) != 0) {
        bVar5 = bVar6 | 1;
      }
    }
    local_40 = (longlong ****)CONCAT44(local_40._4_4_,*param_2);
    local_38 = (longlong ****)&local_40;
    pppplVar10 = (longlong ****)(*(code *)PTR_register_0079a310)(bVar5,pppplVar11 + 0x10);
    if (pppplVar10 == (longlong ****)0x0) {
      uVar9 = 0;
      goto LAB_006f124a;
    }
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    local_40 = pppplVar10;
    if (iVar3 != 0) {
      (*(code *)PTR_lock_contended_00798fe0)();
    }
    if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
      bVar6 = bVar6 ^ 1;
    }
    pppplVar2 = pppplVar11 + 0x10;
    if (pppplVar11[0x10] == (longlong ***)0x0) {
      if (*(longlong *****)(param_1 + 0x28) == pppplVar2) {
        ppplVar4 = pppplVar11[0x11];
        *(longlong ****)(param_1 + 0x28) = ppplVar4;
        goto joined_r0x006f11f6;
      }
    }
    else {
      ppplVar4 = pppplVar11[0x11];
      pppplVar11[0x10][1] = (longlong **)ppplVar4;
joined_r0x006f11f6:
      if (ppplVar4 == (longlong ***)0x0) {
        if (*(longlong *****)(param_1 + 0x30) != pppplVar2) goto LAB_006f11fe;
        *(longlong ****)(param_1 + 0x30) = *pppplVar2;
      }
      else {
        *ppplVar4 = (longlong **)*pppplVar2;
      }
      *pppplVar2 = (longlong ***)0x0;
      pppplVar11[0x11] = (longlong ***)0x0;
      LOCK();
      *pppplVar11 = (longlong ***)((longlong)*pppplVar11 + -1);
      UNLOCK();
      local_38 = pppplVar11;
      if (*pppplVar11 == (longlong ***)0x0) {
        (*(code *)PTR_drop_slow_00799150)();
      }
    }
LAB_006f11fe:
    if (((bVar6 == 0) && ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)
        ) && (cVar7 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar7 == '\0')) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    LOCK();
    *pppplVar11 = (longlong ***)((longlong)*pppplVar11 + -1);
    ppplVar4 = *pppplVar11;
    UNLOCK();
    uVar9 = 1;
    pppplVar11 = pppplVar10;
    if (ppplVar4 != (longlong ***)0x0) goto LAB_006f124a;
    (*(code *)PTR_drop_slow_00799150)();
  }
  uVar9 = 1;
  pppplVar11 = pppplVar10;
LAB_006f124a:
  auVar13._8_8_ = pppplVar11;
  auVar13._0_8_ = uVar9;
  return auVar13;
}


