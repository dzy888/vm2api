// 00197bc0 {closure#0}

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
      <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::sync::mpmc::waker::Entry>>::
      grow_one(piVar5 + 2);
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
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar13 == '\0')) {
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
          if (uVar21 != 0) goto LAB_00197d3f;
          plVar7 = (longlong *)local_a0[4];
          LOCK();
          bVar23 = (int)*plVar7 == 0;
          if (bVar23) {
            *(int *)plVar7 = 1;
          }
          UNLOCK();
          uVar24 = extraout_XMM0_Da;
          if (!bVar23) {
            uVar24 = (*(code *)PTR_lock_contended_00219d70)();
          }
          if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
            bVar12 = 0;
            cVar13 = *(char *)((longlong)plVar7 + 4);
          }
          else {
            bVar12 = (*(code *)PTR_is_zero_slow_path_00219d18)();
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
            goto LAB_00197f80;
          }
          uVar18 = (ulonglong)uStack_b0 >> 8;
          uStack_b0 = CONCAT71((int7)uVar18,bVar12);
          local_b8 = plVar7;
          (*(code *)PTR_unwrap_failed_00219ec0)
                    (&
                     PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
                     ,&local_b8,&PTR_s__rustc_48a229ceaefd4985c50990b14_002164f0);
          goto LAB_001982c4;
        }
        (*(code *)PTR_sub_00219fd8)();
        (*(code *)PTR_park_timeout_00219fd0)();
      }
    }
    puVar9 = PTR_yield_now_00219ff8;
    if (uVar18 - 1 < 2) {
LAB_00197d3f:
                    /* WARNING: Could not recover jumptable at 0x00197d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_001198f4 + *(int *)(&DAT_001198f4 + uVar18 * 4)))
                (&DAT_001198f4 + *(int *)(&DAT_001198f4 + uVar18 * 4));
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
              if (uVar14 == 0) goto LAB_00198093;
            }
            do {
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        else {
          (*(code *)puVar9)();
        }
LAB_00198093:
        iVar3 = uVar20 * 2;
        uVar20 = uVar20 + 1;
        uVar22 = uVar22 + iVar3 + 1;
      } while ((char)local_50 == '\0');
    }
    *local_90 = 2;
    if ((int)uStack_60 != -2) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                (&local_88);
    }
    return;
  }
  goto LAB_001982c4;
  while( true ) {
    lVar19 = lVar19 + 0x18;
    uVar21 = uVar21 + 1;
    plVar1 = (longlong *)(lVar15 + 8);
    lVar15 = lVar15 + 0x18;
    if (*plVar1 == lVar4) break;
LAB_00197f80:
    if (uVar18 * 0x18 == lVar19) {
      (*(code *)PTR_unwrap_failed_00219e58)();
      goto LAB_001982c4;
    }
  }
  if (uVar21 < uVar18) {
    plVar1 = *(longlong **)(lVar6 + -0x18 + lVar19);
    puVar2 = (undefined4 *)(lVar6 + -0x10 + lVar19);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    uVar24 = (*(code *)PTR_memmove_00219fb0)(lVar19,uVar18 * 0x18 - lVar19);
    plVar7[3] = uVar18 - 1;
    if (plVar1 != (longlong *)0x0) {
      uStack_b0 = CONCAT44(uStack_44,local_48);
      local_a8 = (undefined4 *)CONCAT44(uStack_3c,uStack_40);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      local_b8 = plVar1;
      if (*plVar1 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_b8,lVar6 + lVar19);
      }
      if (((bVar12 == 0) &&
          ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)plVar7 + 4) = 1;
      }
      LOCK();
      lVar15 = *plVar7;
      *(int *)plVar7 = 0;
      UNLOCK();
      if ((int)lVar15 == 2) {
        (*(code *)PTR_wake_00219d10)();
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
      (*(code *)PTR_unwrap_failed_00219e58)();
      goto LAB_001982c4;
    }
  }
  (*(code *)PTR_assert_failed_00219ff0)(uVar24,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165b8);
LAB_001982c4:
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}


