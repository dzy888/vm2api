// 004a28d0 {closure#1}

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::{closure#1} */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<()>>::recv::_closure_1_
          (longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong extraout_RDX;
  uint uVar20;
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
  longlong *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = *param_1;
  local_6b = 1;
  local_69 = '\0';
  piVar5 = (int *)param_1[3];
  LOCK();
  lVar14 = *param_2;
  *param_2 = *param_2 + 1;
  UNLOCK();
  if (*param_2 != 0 && SCARRY8(lVar14,1) == *param_2 < 0) {
    local_58 = &local_6b;
    lVar14 = *(longlong *)(piVar5 + 0x12);
    local_68 = param_2;
    uStack_60 = lVar4;
    if (lVar14 == *(longlong *)(piVar5 + 0xe)) {
      (*(code *)PTR_grow_one_00799b08)();
    }
    lVar6 = *(longlong *)(piVar5 + 0x10);
    *(undefined2 **)(lVar6 + 0x10 + lVar14 * 0x18) = local_58;
    puVar2 = (undefined4 *)(lVar6 + lVar14 * 0x18);
    *puVar2 = (undefined4)local_68;
    puVar2[1] = local_68._4_4_;
    puVar2[2] = (undefined4)uStack_60;
    puVar2[3] = uStack_60._4_4_;
    *(longlong *)(piVar5 + 0x12) = lVar14 + 1;
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(piVar5 + 2);
    lVar14 = extraout_RDX;
    if ((((char)param_1[4] == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
      *(undefined1 *)(piVar5 + 1) = 1;
    }
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar10 = PTR_park_00799b20;
    puVar9 = PTR_now_00799250;
    uVar20 = *(uint *)((longlong *)param_1[1] + 1);
    local_50 = param_1;
    if (uVar20 == 0xffffffff) {
      uVar17 = param_2[3];
      while (uVar17 == 0) {
        (*(code *)puVar10)();
        uVar17 = param_2[3];
      }
      pcVar8 = (code *)PTR_yield_now_00799b28;
    }
    else {
      lVar6 = *(longlong *)param_1[1];
      uVar17 = param_2[3];
      while (pcVar8 = (code *)PTR_yield_now_00799b28, uVar17 == 0) {
        uVar21 = (uint)lVar14;
        lVar14 = (*(code *)puVar9)();
        bVar23 = lVar14 < lVar6;
        if (lVar14 == lVar6) {
          bVar23 = uVar21 < uVar20;
        }
        if (!bVar23) {
          uVar15 = 0;
          LOCK();
          uVar22 = param_2[3];
          if (uVar22 == 0) {
            param_2[3] = 1;
          }
          else {
            uVar15 = uVar22;
          }
          UNLOCK();
          uVar17 = 3;
          if (uVar15 < 3) {
            uVar17 = uVar15;
          }
          if (uVar22 != 0) goto LAB_004a2a67;
          plVar7 = (longlong *)local_50[2];
          LOCK();
          bVar23 = (int)*plVar7 == 0;
          if (bVar23) {
            *(int *)plVar7 = 1;
          }
          UNLOCK();
          uVar24 = extraout_XMM0_Da;
          if (!bVar23) {
            uVar24 = (*(code *)PTR_lock_contended_00798fe0)();
          }
          puVar9 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar11 = 0;
            cVar12 = *(char *)((longlong)plVar7 + 4);
          }
          else {
            bVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar11 = bVar11 ^ 1;
            cVar12 = *(char *)((longlong)plVar7 + 4);
            uVar24 = extraout_XMM0_Da_00;
          }
          if (cVar12 != '\0') {
            uVar17 = (ulonglong)uStack_60 >> 8;
            uStack_60 = CONCAT71((int7)uVar17,bVar11);
            local_68 = plVar7;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&
                       PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
                       ,&local_68,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b308);
            goto LAB_004a2ec8;
          }
          lVar6 = plVar7[8];
          uVar17 = plVar7[9];
          uVar22 = 0xffffffffffffffff;
          lVar19 = 0;
          lVar14 = lVar6;
          goto LAB_004a2bf0;
        }
        (*(code *)PTR_sub_00799b10)();
        (*(code *)PTR_park_timeout_00799b18)();
        uVar17 = param_2[3];
      }
    }
    PTR_yield_now_00799b28 = pcVar8;
    if (uVar17 - 1 < 2) {
LAB_004a2a67:
                    /* WARNING: Could not recover jumptable at 0x004a2a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar16 = (*(code *)((longlong)&DAT_00195edc + (longlong)(int)(&DAT_00195edc)[uVar17]))
                         ((code *)((longlong)&DAT_00195edc + (longlong)(int)(&DAT_00195edc)[uVar17])
                         );
      return uVar16;
    }
    local_6b._1_1_ = (char)((ushort)local_6b >> 8);
    uVar17 = 0;
    bVar23 = local_6b._1_1_ == '\0';
    if (bVar23) {
      uVar20 = 0;
      uVar21 = 0;
      do {
        if (uVar21 < 7) {
          if (uVar21 != 0) {
            uVar13 = uVar20 & 7;
            if (6 < uVar20 - 1) {
              uVar18 = uVar20 & 0xfffffff8;
              do {
                uVar18 = uVar18 - 8;
              } while (uVar18 != 0);
              if (uVar13 == 0) goto LAB_004a2cd3;
            }
            do {
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        else {
          (*pcVar8)();
        }
LAB_004a2cd3:
        uVar13 = uVar21 * 2 + 1;
        uVar17 = (ulonglong)uVar13;
        uVar21 = uVar21 + 1;
        uVar20 = uVar20 + uVar13;
      } while (local_6b._1_1_ == '\0');
    }
    bVar23 = local_69 != '\0';
    local_69 = '\0';
    if (bVar23) {
      return CONCAT71((int7)(uVar17 >> 8),2);
    }
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_004a2e38:
    (*(code *)PTR_wake_00799010)();
    return 0;
  }
  goto LAB_004a2ec8;
  while( true ) {
    lVar19 = lVar19 + 0x18;
    uVar22 = uVar22 + 1;
    plVar1 = (longlong *)(lVar14 + 8);
    lVar14 = lVar14 + 0x18;
    if (*plVar1 == lVar4) break;
LAB_004a2bf0:
    if (uVar17 * 0x18 == lVar19) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_004a2ec8;
    }
  }
  if (uVar22 < uVar17) {
    plVar1 = *(longlong **)(lVar6 + -0x18 + lVar19);
    puVar2 = (undefined4 *)(lVar6 + -0x10 + lVar19);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    uVar24 = (*(code *)PTR_memmove_00799258)(lVar19,uVar17 * 0x18 - lVar19);
    plVar7[9] = uVar17 - 1;
    if (plVar1 != (longlong *)0x0) {
      uStack_60 = CONCAT44(uStack_44,local_48);
      local_58 = (undefined2 *)CONCAT44(uStack_3c,uStack_40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_68 = plVar1;
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
      if (((bVar11 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
         (cVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar12 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 4) = 1;
      }
      LOCK();
      lVar14 = *plVar7;
      *(int *)plVar7 = 0;
      UNLOCK();
      if ((int)lVar14 != 2) {
        return 0;
      }
      goto LAB_004a2e38;
    }
  }
  (*(code *)PTR_assert_failed_00799718)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b668);
LAB_004a2ec8:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


