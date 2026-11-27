// 00197450 {closure#1}

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1}
    */

void __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv::_closure_1_(undefined4 *param_1,longlong *param_2,longlong *param_3)

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
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong extraout_RDX;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da_00;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  int *local_98;
  undefined4 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined2 local_38;
  
  lVar4 = *param_2;
  local_38 = 0x100;
  local_48 = -2;
  piVar5 = (int *)param_2[3];
  LOCK();
  lVar14 = *param_3;
  *param_3 = *param_3 + 1;
  UNLOCK();
  local_a0 = param_2;
  local_90 = param_1;
  if (*param_3 != 0 && SCARRY8(lVar14,1) == *param_3 < 0) {
    local_a8 = &local_70;
    lVar14 = *(longlong *)(piVar5 + 0x12);
    local_b8 = param_3;
    uStack_b0 = lVar4;
    local_98 = piVar5;
    if (lVar14 == *(longlong *)(piVar5 + 0xe)) {
      <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>>::
      grow_one(piVar5 + 0xe);
    }
    lVar6 = *(longlong *)(piVar5 + 0x10);
    *(undefined4 **)(lVar6 + 0x10 + lVar14 * 0x18) = local_a8;
    puVar2 = (undefined4 *)(lVar6 + lVar14 * 0x18);
    *puVar2 = (undefined4)local_b8;
    puVar2[1] = local_b8._4_4_;
    puVar2[2] = (undefined4)uStack_b0;
    puVar2[3] = uStack_b0._4_4_;
    *(longlong *)(piVar5 + 0x12) = lVar14 + 1;
    <std[6c98fd8553dbae28]::sync::mpmc::waker::Waker>::notify(piVar5 + 2);
    lVar14 = extraout_RDX;
    if ((((char)local_a0[4] == '\0') &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar12 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar12 == '\0')) {
      *(undefined1 *)(local_98 + 1) = 1;
    }
    LOCK();
    iVar3 = *local_98;
    *local_98 = 0;
    UNLOCK();
    if (iVar3 == 2) {
      (*(code *)PTR_wake_00219d10)();
    }
    puVar10 = PTR_park_00219fe0;
    puVar9 = PTR_now_00219fc8;
    uVar19 = *(uint *)((longlong *)local_a0[1] + 1);
    if (uVar19 == 0xffffffff) {
      while (uVar17 = param_3[3], uVar17 == 0) {
        (*(code *)puVar10)();
      }
    }
    else {
      lVar6 = *(longlong *)local_a0[1];
      while( true ) {
        uVar20 = (uint)lVar14;
        uVar17 = param_3[3];
        if (uVar17 != 0) break;
        lVar14 = (*(code *)puVar9)();
        bVar22 = uVar20 < uVar19;
        if (lVar14 != lVar6) {
          bVar22 = lVar14 < lVar6;
        }
        if (!bVar22) {
          uVar15 = 0;
          LOCK();
          uVar21 = param_3[3];
          if (uVar21 == 0) {
            param_3[3] = 1;
          }
          else {
            uVar15 = uVar21;
          }
          UNLOCK();
          uVar17 = 3;
          if (uVar15 < 3) {
            uVar17 = uVar15;
          }
          if (uVar21 != 0) goto LAB_001975c0;
          plVar7 = (longlong *)local_a0[2];
          LOCK();
          bVar22 = (int)*plVar7 == 0;
          if (bVar22) {
            *(int *)plVar7 = 1;
          }
          UNLOCK();
          uVar23 = extraout_XMM0_Da;
          if (!bVar22) {
            uVar23 = (*(code *)PTR_lock_contended_00219d70)();
          }
          puVar9 = PTR_GLOBAL_PANIC_COUNT_00219d08;
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
            bVar11 = 0;
            cVar12 = *(char *)((longlong)plVar7 + 4);
          }
          else {
            bVar11 = (*(code *)PTR_is_zero_slow_path_00219d18)();
            bVar11 = bVar11 ^ 1;
            cVar12 = *(char *)((longlong)plVar7 + 4);
            uVar23 = extraout_XMM0_Da_00;
          }
          if (cVar12 == '\0') {
            lVar6 = plVar7[8];
            uVar17 = plVar7[9];
            uVar21 = 0xffffffffffffffff;
            lVar18 = 0;
            lVar14 = lVar6;
            goto LAB_001977f0;
          }
          uVar17 = (ulonglong)uStack_b0 >> 8;
          uStack_b0 = CONCAT71((int7)uVar17,bVar11);
          local_b8 = plVar7;
          (*(code *)PTR_unwrap_failed_00219ec0)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
                     ,&local_b8,&PTR_s__rustc_48a229ceaefd4985c50990b14_00216460);
          goto LAB_00197b0e;
        }
        (*(code *)PTR_sub_00219fd8)();
        (*(code *)PTR_park_timeout_00219fd0)();
      }
    }
    puVar9 = PTR_yield_now_00219ff8;
    if (uVar17 - 1 < 2) {
LAB_001975c0:
                    /* WARNING: Could not recover jumptable at 0x001975ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001198e4 + *(int *)(&DAT_001198e4 + uVar17 * 4)))
                (&DAT_001198e4 + *(int *)(&DAT_001198e4 + uVar17 * 4));
      return;
    }
    if ((char)local_38 == '\0') {
      uVar19 = 0;
      uVar20 = 0;
      do {
        if (uVar20 < 7) {
          if (uVar20 != 0) {
            uVar13 = uVar19 & 7;
            if (6 < uVar19 - 1) {
              uVar16 = uVar19 & 0xfffffff8;
              do {
                uVar16 = uVar16 - 8;
              } while (uVar16 != 0);
              if (uVar13 == 0) goto LAB_001978e3;
            }
            do {
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
        }
        else {
          (*(code *)puVar9)();
        }
LAB_001978e3:
        iVar3 = uVar20 * 2;
        uVar20 = uVar20 + 1;
        uVar19 = uVar19 + iVar3 + 1;
      } while ((char)local_38 == '\0');
    }
    lVar14 = local_48;
    local_48 = -2;
    if (lVar14 != -2) {
      *(undefined8 *)(local_90 + 8) = local_50;
      *(undefined8 *)(local_90 + 4) = local_60;
      *(undefined8 *)(local_90 + 6) = uStack_58;
      *local_90 = local_70;
      local_90[1] = uStack_6c;
      local_90[2] = uStack_68;
      local_90[3] = uStack_64;
      *(longlong *)(local_90 + 10) = lVar14;
      *(undefined8 *)(local_90 + 0xc) = local_40;
      return;
    }
    (*(code *)PTR_unwrap_failed_00219e58)();
  }
  goto LAB_00197b0e;
  while( true ) {
    lVar18 = lVar18 + 0x18;
    uVar21 = uVar21 + 1;
    plVar1 = (longlong *)(lVar14 + 8);
    lVar14 = lVar14 + 0x18;
    if (*plVar1 == lVar4) break;
LAB_001977f0:
    if (uVar17 * 0x18 == lVar18) {
      (*(code *)PTR_unwrap_failed_00219e58)();
      goto LAB_00197b0e;
    }
  }
  if (uVar21 < uVar17) {
    plVar1 = *(longlong **)(lVar6 + -0x18 + lVar18);
    puVar2 = (undefined4 *)(lVar6 + -0x10 + lVar18);
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    uVar23 = (*(code *)PTR_memmove_00219fb0)(lVar18,uVar17 * 0x18 - lVar18);
    plVar7[9] = uVar17 - 1;
    if (plVar1 != (longlong *)0x0) {
      uStack_b0 = CONCAT44(uStack_84,local_88);
      local_a8 = (undefined4 *)CONCAT44(uStack_7c,uStack_80);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_b8 = plVar1;
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_b8,lVar6 + lVar18);
      }
      if (((bVar11 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) &&
         (cVar12 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar12 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 4) = 1;
      }
      LOCK();
      lVar14 = *plVar7;
      *(int *)plVar7 = 0;
      UNLOCK();
      if ((int)lVar14 == 2) {
        (*(code *)PTR_wake_00219d10)();
      }
      *(undefined1 *)local_90 = 0;
      *(undefined8 *)(local_90 + 10) = 0xfffffffffffffffe;
      if ((int)local_48 != -2) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                  (&local_70);
      }
      return;
    }
  }
  (*(code *)PTR_assert_failed_00219ff0)(uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165b8);
LAB_00197b0e:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


