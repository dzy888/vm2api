// 004a20f0 {closure#0}

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send::_closure_0_(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

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
  undefined4 uVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong extraout_RDX;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  bool bVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar4 = param_2[2];
  local_58 = param_2[0xb];
  local_88 = *(undefined4 *)(param_2 + 5);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_80 = *(undefined4 *)(param_2 + 6);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x34);
  local_78 = *(undefined4 *)(param_2 + 7);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_70 = *(undefined4 *)(param_2 + 8);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x44);
  local_68 = *(undefined4 *)(param_2 + 9);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x4c);
  uStack_60 = param_2[10];
  local_50 = 0x100;
  piVar5 = (int *)*param_2;
  LOCK();
  lVar15 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  local_a0 = param_2;
  local_90 = param_1;
  if (*param_3 != 0 && SCARRY8(lVar15,1) == *param_3 < 0) {
    local_a8 = &local_88;
    lVar15 = *(longlong *)(piVar5 + 6);
    local_b8 = param_3;
    uStack_b0 = lVar4;
    local_98 = piVar5;
    if (lVar15 == *(longlong *)(piVar5 + 2)) {
      (*(code *)PTR_grow_one_00799b08)();
    }
    lVar6 = *(longlong *)(piVar5 + 4);
    *(undefined4 **)(lVar6 + 0x10 + lVar15 * 0x18) = local_a8;
    puVar2 = (undefined4 *)(lVar6 + lVar15 * 0x18);
    *puVar2 = (undefined4)local_b8;
    puVar2[1] = local_b8._4_4_;
    puVar2[2] = (undefined4)uStack_b0;
    puVar2[3] = uStack_b0._4_4_;
    *(longlong *)(piVar5 + 6) = lVar15 + 1;
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(piVar5 + 0xe);
    lVar15 = extraout_RDX;
    if (((*(char *)(local_a0 + 1) == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
      *(undefined1 *)(local_98 + 1) = 1;
    }
    LOCK();
    iVar3 = *local_98;
    *local_98 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
    puVar10 = PTR_park_00799b20;
    puVar9 = PTR_now_00799250;
    uVar20 = *(uint *)((longlong *)local_a0[3] + 1);
    if (uVar20 == 0xffffffff) {
      while (uVar18 = param_3[3], uVar18 == 0) {
        (*(code *)puVar10)();
      }
    }
    else {
      lVar6 = *(longlong *)local_a0[3];
      while( true ) {
        uVar22 = (uint)lVar15;
        uVar18 = param_3[3];
        if (uVar18 != 0) break;
        lVar15 = (*(code *)puVar9)();
        bVar23 = uVar22 < uVar20;
        if (lVar15 != lVar6) {
          bVar23 = lVar15 < lVar6;
        }
        if (!bVar23) {
          uVar16 = 0;
          LOCK();
          uVar21 = param_3[3];
          if (uVar21 == 0) {
            param_3[3] = 1;
          }
          else {
            uVar16 = uVar21;
          }
          UNLOCK();
          uVar18 = 3;
          if (uVar16 < 3) {
            uVar18 = uVar16;
          }
          if (uVar21 != 0) goto LAB_004a226f;
          plVar7 = (longlong *)local_a0[4];
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
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
            bVar12 = 0;
            cVar13 = *(char *)((longlong)plVar7 + 4);
          }
          else {
            bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
            bVar12 = bVar12 ^ 1;
            cVar13 = *(char *)((longlong)plVar7 + 4);
            uVar24 = extraout_XMM0_Da_00;
          }
          if (cVar13 == '\0') {
            lVar6 = plVar7[2];
            uVar18 = plVar7[3];
            uVar21 = 0xffffffffffffffff;
            lVar19 = 0;
            lVar15 = lVar6;
            goto LAB_004a24c0;
          }
          uVar18 = (ulonglong)uStack_b0 >> 8;
          uStack_b0 = CONCAT71((int7)uVar18,bVar12);
          local_b8 = plVar7;
          (*(code *)PTR_unwrap_failed_00799028)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
                     ,&local_b8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b398);
          goto LAB_004a2804;
        }
        (*(code *)PTR_sub_00799b10)();
        (*(code *)PTR_park_timeout_00799b18)();
      }
    }
    puVar9 = PTR_yield_now_00799b28;
    if (uVar18 - 1 < 2) {
LAB_004a226f:
                    /* WARNING: Could not recover jumptable at 0x004a227d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00195ecc + *(int *)(&DAT_00195ecc + uVar18 * 4)))
                (&DAT_00195ecc + *(int *)(&DAT_00195ecc + uVar18 * 4));
      return;
    }
    if ((char)local_50 == '\0') {
      uVar22 = 0;
      uVar20 = 0;
      do {
        if (uVar20 < 7) {
          if (uVar20 != 0) {
            uVar14 = uVar22 & 7;
            if (6 < uVar22 - 1) {
              uVar17 = uVar22 & 0xfffffff8;
              do {
                uVar17 = uVar17 - 8;
              } while (uVar17 != 0);
              if (uVar14 == 0) goto LAB_004a25d3;
            }
            do {
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        else {
          (*(code *)puVar9)();
        }
LAB_004a25d3:
        iVar3 = uVar20 * 2;
        uVar20 = uVar20 + 1;
        uVar22 = uVar22 + iVar3 + 1;
      } while ((char)local_50 == '\0');
    }
    *local_90 = 2;
    if ((int)uStack_60 != -2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_88);
      if ((int)uStack_60 != -1) {
        <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::
        drop(&uStack_60);
      }
    }
    return;
  }
  goto LAB_004a2804;
  while( true ) {
    lVar19 = lVar19 + 0x18;
    uVar21 = uVar21 + 1;
    plVar1 = (longlong *)(lVar15 + 8);
    lVar15 = lVar15 + 0x18;
    if (*plVar1 == lVar4) break;
LAB_004a24c0:
    if (uVar18 * 0x18 == lVar19) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_004a2804;
    }
  }
  if (uVar21 < uVar18) {
    plVar1 = *(longlong **)(lVar6 + -0x18 + lVar19);
    puVar2 = (undefined4 *)(lVar6 + -0x10 + lVar19);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    uVar24 = (*(code *)PTR_memmove_00799258)(lVar19,uVar18 * 0x18 - lVar19);
    plVar7[3] = uVar18 - 1;
    if (plVar1 != (longlong *)0x0) {
      uStack_b0 = CONCAT44(uStack_44,local_48);
      local_a8 = (undefined4 *)CONCAT44(uStack_3c,uStack_40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_b8 = plVar1;
      if (*plVar1 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
      if (((bVar12 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 4) = 1;
      }
      LOCK();
      lVar15 = *plVar7;
      *(int *)plVar7 = 0;
      UNLOCK();
      if ((int)lVar15 == 2) {
        (*(code *)PTR_wake_00799010)();
      }
      lVar15 = uStack_60;
      uVar24 = (int)uStack_60;
      uVar11 = uStack_60._4_4_;
      uStack_60 = -2;
      if (lVar15 != -2) {
        local_90[5] = CONCAT44(uStack_64,local_68);
        local_90[3] = CONCAT44(uStack_74,local_78);
        local_90[4] = CONCAT44(uStack_6c,uStack_70);
        local_90[1] = CONCAT44(uStack_84,local_88);
        local_90[2] = CONCAT44(uStack_7c,uStack_80);
        *local_90 = 0;
        *(undefined4 *)(local_90 + 6) = uVar24;
        *(undefined4 *)((longlong)local_90 + 0x34) = uVar11;
        *(undefined4 *)(local_90 + 7) = (undefined4)local_58;
        *(undefined4 *)((longlong)local_90 + 0x3c) = local_58._4_4_;
        return;
      }
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_004a2804;
    }
  }
  (*(code *)PTR_assert_failed_00799718)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b668);
LAB_004a2804:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


