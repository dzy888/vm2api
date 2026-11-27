// 006f1d20 <mio[4b4dae02747c797f]::net::uds::listener::UnixListener>

/* <tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::add_source::<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>
    */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::runtime::io::driver::Handle>::add_source::
<mio[4b4dae02747c797f]::net::uds::listener::UnixListener>
          (longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  
  piVar1 = (int *)(param_1 + 8);
  LOCK();
  bVar12 = *(int *)(param_1 + 8) == 0;
  if (bVar12) {
    *(int *)(param_1 + 8) = 1;
  }
  UNLOCK();
  plVar11 = param_3;
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
    if (iVar3 != 2) goto LAB_006f1f46;
    (*(code *)PTR_wake_00799010)();
    plVar10 = plVar11;
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
      if (((ulonglong)param_3 & 2) != 0) goto LAB_006f1e1d;
      bVar6 = 0x10;
      bVar5 = 1;
      if (((ulonglong)param_3 & 0x10) != 0) goto LAB_006f1e25;
    }
    else {
      bVar6 = 1;
      if (((ulonglong)param_3 & 2) != 0) {
        bVar6 = 3;
      }
LAB_006f1e1d:
      if (((ulonglong)param_3 & 0x10) != 0) {
        bVar6 = bVar6 | 0x10;
      }
LAB_006f1e25:
      bVar5 = bVar6;
      if (((ulonglong)param_3 & 0x20) != 0) {
        bVar5 = bVar6 | 1;
      }
    }
    plVar10 = (longlong *)(*(code *)PTR_register_0079a8a0)(bVar5,plVar11 + 0x10);
    if (plVar10 == (longlong *)0x0) {
      uVar9 = 0;
      goto LAB_006f1f46;
    }
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
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
    plVar2 = plVar11 + 0x10;
    if (plVar11[0x10] == 0) {
      if (*(longlong **)(param_1 + 0x28) == plVar2) {
        plVar4 = (longlong *)plVar11[0x11];
        *(longlong **)(param_1 + 0x28) = plVar4;
        goto joined_r0x006f1ef2;
      }
    }
    else {
      plVar4 = (longlong *)plVar11[0x11];
      *(longlong **)(plVar11[0x10] + 8) = plVar4;
joined_r0x006f1ef2:
      if (plVar4 == (longlong *)0x0) {
        if (*(longlong **)(param_1 + 0x30) != plVar2) goto LAB_006f1efa;
        *(longlong *)(param_1 + 0x30) = *plVar2;
      }
      else {
        *plVar4 = *plVar2;
      }
      *plVar2 = 0;
      plVar11[0x11] = 0;
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        (*(code *)PTR_drop_slow_00799150)();
      }
    }
LAB_006f1efa:
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
    *plVar11 = *plVar11 + -1;
    lVar8 = *plVar11;
    UNLOCK();
    uVar9 = 1;
    plVar11 = plVar10;
    if (lVar8 != 0) goto LAB_006f1f46;
    (*(code *)PTR_drop_slow_00799150)();
  }
  uVar9 = 1;
  plVar11 = plVar10;
LAB_006f1f46:
  auVar13._8_8_ = plVar11;
  auVar13._0_8_ = uVar9;
  return auVar13;
}


