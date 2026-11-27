// 004a2f60 {closure#0}

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send::{closure#0} */

ulonglong __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::send::_closure_0_
          (undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong extraout_RDX;
  uint uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da_00;
  undefined2 local_6b;
  char local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar20 = (longlong *)*param_1;
  local_6b = 1;
  local_69 = '\x01';
  piVar4 = (int *)param_1[3];
  LOCK();
  lVar13 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 == 0 || SCARRY8(lVar13,1) != *param_2 < 0) {
LAB_004a3595:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  local_58 = &local_6b;
  lVar13 = *(longlong *)(piVar4 + 6);
  local_68 = param_2;
  uStack_60 = plVar20;
  if (lVar13 == *(longlong *)(piVar4 + 2)) {
    (*(code *)PTR_grow_one_00799b08)();
  }
  lVar5 = *(longlong *)(piVar4 + 4);
  *(undefined2 **)(lVar5 + 0x10 + lVar13 * 0x18) = local_58;
  puVar2 = (undefined4 *)(lVar5 + lVar13 * 0x18);
  *puVar2 = (undefined4)local_68;
  puVar2[1] = local_68._4_4_;
  puVar2[2] = (undefined4)uStack_60;
  puVar2[3] = uStack_60._4_4_;
  *(longlong *)(piVar4 + 6) = lVar13 + 1;
  <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(piVar4 + 0xe);
  lVar13 = extraout_RDX;
  if (((*(char *)(param_1 + 4) == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)(piVar4 + 1) = 1;
  }
  LOCK();
  iVar3 = *piVar4;
  *piVar4 = 0;
  UNLOCK();
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  puVar9 = PTR_park_00799b20;
  puVar8 = PTR_now_00799250;
  uVar18 = *(uint *)((longlong *)param_1[1] + 1);
  local_50 = param_1;
  if (uVar18 == 0xffffffff) {
    uVar15 = param_2[3];
    while (uVar15 == 0) {
      (*(code *)puVar9)();
      uVar15 = param_2[3];
    }
    puVar8 = puVar9;
    pcVar7 = (code *)PTR_yield_now_00799b28;
  }
  else {
    lVar5 = *(longlong *)param_1[1];
    uVar15 = param_2[3];
    while (pcVar7 = (code *)PTR_yield_now_00799b28, uVar15 == 0) {
      uVar21 = (uint)lVar13;
      lVar13 = (*(code *)puVar8)();
      bVar23 = lVar13 < lVar5;
      if (lVar13 == lVar5) {
        bVar23 = uVar21 < uVar18;
      }
      if (!bVar23) {
        uVar14 = 0;
        LOCK();
        uVar22 = param_2[3];
        if (uVar22 == 0) {
          param_2[3] = 1;
        }
        else {
          uVar14 = uVar22;
        }
        UNLOCK();
        uVar15 = 3;
        if (uVar14 < 3) {
          uVar15 = uVar14;
        }
        puVar19 = local_50;
        uVar24 = extraout_XMM0_Da;
        if (uVar22 == 0) goto LAB_004a3230;
        goto LAB_004a30f7;
      }
      (*(code *)PTR_sub_00799b10)();
      (*(code *)PTR_park_timeout_00799b18)();
      uVar15 = param_2[3];
    }
  }
  PTR_yield_now_00799b28 = pcVar7;
  if (uVar15 - 1 < 2) {
LAB_004a30f7:
                    /* WARNING: Could not recover jumptable at 0x004a3105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar15 = (*(code *)((longlong)&DAT_00195eec + (longlong)(int)(&DAT_00195eec)[uVar15]))
                       ((code *)((longlong)&DAT_00195eec + (longlong)(int)(&DAT_00195eec)[uVar15]));
    return uVar15;
  }
  local_6b._1_1_ = (char)((ushort)local_6b >> 8);
  uVar15 = CONCAT71((int7)((ulonglong)puVar8 >> 8),2);
  if (local_6b._1_1_ == '\0') {
    uVar21 = 0;
    uVar18 = 0;
    do {
      if (uVar18 < 7) {
        if (uVar18 != 0) {
          uVar12 = uVar21 & 7;
          if (6 < uVar21 - 1) {
            uVar16 = uVar21 & 0xfffffff8;
            do {
              uVar16 = uVar16 - 8;
            } while (uVar16 != 0);
            if (uVar12 == 0) goto LAB_004a3383;
          }
          do {
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
      else {
        (*pcVar7)();
      }
LAB_004a3383:
      iVar3 = uVar18 * 2;
      uVar18 = uVar18 + 1;
      uVar21 = uVar21 + iVar3 + 1;
    } while (local_6b._1_1_ == '\0');
  }
LAB_004a3360:
  return uVar15 & 0xffffffff;
LAB_004a3230:
  plVar6 = (longlong *)puVar19[2];
  LOCK();
  bVar23 = (int)*plVar6 == 0;
  if (bVar23) {
    *(int *)plVar6 = 1;
  }
  UNLOCK();
  if (!bVar23) {
    uVar24 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar19 = (undefined8 *)PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar10 = 0;
    cVar11 = *(char *)((longlong)plVar6 + 4);
  }
  else {
    bVar10 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar10 = bVar10 ^ 1;
    cVar11 = *(char *)((longlong)plVar6 + 4);
    uVar24 = extraout_XMM0_Da_00;
  }
  if (cVar11 != '\0') {
    uVar15 = (ulonglong)uStack_60 >> 8;
    uStack_60 = (longlong *)CONCAT71((int7)uVar15,bVar10);
    local_68 = plVar6;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_68,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b398);
    goto LAB_004a3595;
  }
  lVar5 = plVar6[2];
  uVar15 = plVar6[3];
  uVar22 = 0xffffffffffffffff;
  lVar17 = 0;
  lVar13 = lVar5;
  do {
    if (uVar15 * 0x18 == lVar17) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_004a3595;
    }
    lVar17 = lVar17 + 0x18;
    uVar22 = uVar22 + 1;
    puVar1 = (undefined8 *)(lVar13 + 8);
    lVar13 = lVar13 + 0x18;
  } while ((longlong *)*puVar1 != plVar20);
  if (uVar15 <= uVar22) {
LAB_004a356d:
    (*(code *)PTR_assert_failed_00799718)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b668);
    goto LAB_004a3595;
  }
  plVar20 = *(longlong **)(lVar5 + -0x18 + lVar17);
  puVar2 = (undefined4 *)(lVar5 + -0x10 + lVar17);
  local_48 = *puVar2;
  uStack_44 = puVar2[1];
  uStack_40 = puVar2[2];
  uStack_3c = puVar2[3];
  uVar24 = (*(code *)PTR_memmove_00799258)(lVar17,uVar15 * 0x18 - lVar17);
  plVar6[3] = uVar15 - 1;
  if (plVar20 == (longlong *)0x0) goto LAB_004a356d;
  uStack_60 = (longlong *)CONCAT44(uStack_44,local_48);
  local_58 = (undefined2 *)CONCAT44(uStack_3c,uStack_40);
  LOCK();
  *plVar20 = *plVar20 + -1;
  UNLOCK();
  local_68 = plVar20;
  if (*plVar20 == 0) {
    (*(code *)PTR_drop_slow_007995f0)();
  }
  if (((bVar10 == 0) && ((*puVar19 & 0x7fffffffffffffff) != 0)) &&
     (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
    *(undefined1 *)((longlong)plVar6 + 4) = 1;
  }
  LOCK();
  lVar13 = *plVar6;
  *(int *)plVar6 = 0;
  UNLOCK();
  if ((int)lVar13 == 2) {
    (*(code *)PTR_wake_00799010)();
  }
  if (local_69 != '\0') {
    uVar15 = 0;
    goto LAB_004a3360;
  }
  local_69 = '\0';
  (*(code *)PTR_unwrap_failed_00799278)();
  (*(code *)PTR_wake_00799010)();
  bVar23 = local_69 != '\0';
  local_69 = '\0';
  uVar15 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  if (bVar23) goto LAB_004a3360;
  uVar24 = (*(code *)PTR_unwrap_failed_00799278)();
  goto LAB_004a3230;
}


