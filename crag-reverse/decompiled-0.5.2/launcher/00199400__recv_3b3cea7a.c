// 00199400 recv

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::recv(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined *puVar6;
  longlong *plVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong *in_FS_OFFSET;
  bool bVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Da;
  longlong *local_140;
  longlong *local_138;
  longlong *plStack_130;
  longlong *plStack_128;
  longlong *plStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  longlong *local_100;
  undefined8 *puStack_f8;
  longlong *local_f0;
  longlong *plStack_e8;
  byte local_e0;
  undefined4 local_df;
  undefined3 uStack_db;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  
  uVar23 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (longlong *)0x0;
  LOCK();
  bVar22 = (int)*param_2 == 0;
  if (bVar22) {
    *(int *)param_2 = 1;
  }
  UNLOCK();
  local_68 = param_3;
  local_60 = param_4;
  if (!bVar22) {
    uVar23 = (*(code *)PTR_lock_contended_00219d70)();
  }
  puVar14 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)((longlong)param_2 + 4);
  }
  else {
    bVar8 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)((longlong)param_2 + 4);
    uVar23 = extraout_XMM0_Da;
  }
  if (cVar9 != '\0') {
    uVar4 = (ulonglong)plStack_130 >> 8;
    plStack_130 = (longlong *)CONCAT71((int7)uVar4,bVar8);
    local_138 = param_2;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
               ,&local_138,&PTR_s__rustc_48a229ceaefd4985c50990b14_00216618);
    goto LAB_00199aa6;
  }
  lVar13 = param_2[3];
  if (lVar13 != 0) {
    lVar15 = *in_FS_OFFSET;
    lVar21 = param_2[2];
    lVar17 = 1;
    lVar19 = 0;
    do {
      lVar3 = *(longlong *)(lVar21 + lVar19);
      if (*(longlong *)(lVar3 + 0x28) != lVar15 + -0x70) {
        LOCK();
        bVar22 = *(longlong *)(lVar3 + 0x18) == 0;
        if (bVar22) {
          *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar21 + 8 + lVar19);
        }
        UNLOCK();
        if (bVar22) {
          lVar13 = *(longlong *)(lVar21 + 0x10 + lVar19);
          if (lVar13 != 0) {
            *(longlong *)(lVar3 + 0x20) = lVar13;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar3 + 0x10) + 0x28);
          iVar2 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar2 == -1) {
            uVar23 = (*(code *)PTR_futex_wake_00219fe8)();
          }
          local_a0 = lVar17 - 1;
          uVar4 = param_2[3];
          if (local_a0 < uVar4) {
            lVar13 = param_2[2];
            plVar11 = *(longlong **)(lVar13 + lVar19);
            puVar20 = (undefined8 *)(lVar13 + 8 + lVar19);
            local_d8 = (longlong *)*puVar20;
            plStack_d0 = (longlong *)puVar20[1];
            lVar13 = lVar13 + lVar19 + 0x18;
            uVar23 = (*(code *)PTR_memmove_00219fb0)(plVar11,(uVar4 - lVar17) * 0x18);
            param_2[3] = uVar4 - 1;
            if (plVar11 != (longlong *)0x0) {
              plStack_130 = local_d8;
              plStack_128 = plStack_d0;
              local_38 = plStack_d0;
              local_138 = plVar11;
              if (((bVar8 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
                 (cVar9 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar9 == '\0')) {
                *(undefined1 *)((longlong)param_2 + 4) = 1;
              }
              LOCK();
              lVar15 = *param_2;
              *(int *)param_2 = 0;
              UNLOCK();
              if ((int)lVar15 == 2) {
                (*(code *)PTR_wake_00219d10)();
              }
              plVar7 = local_38;
              puVar6 = PTR_yield_now_00219ff8;
              if (local_38 == (longlong *)0x0) {
                *(undefined1 *)param_1 = 1;
                param_1[5] = 0xfffffffffffffffe;
                LOCK();
                *plVar11 = *plVar11 + -1;
                UNLOCK();
                if (*plVar11 != 0) {
                  return param_1;
                }
                goto LAB_001998c1;
              }
              if (*(char *)((longlong)local_38 + 0x39) != '\0') {
                lVar15 = local_38[5];
                lVar21 = local_38[6];
                local_38[5] = -2;
                if (lVar15 == -2) goto LAB_00199a83;
                local_78 = local_38[4];
                local_98 = *local_38;
                uStack_90 = local_38[1];
                local_88 = local_38[2];
                lStack_80 = local_38[3];
                *(undefined1 *)(local_38 + 7) = 1;
                goto LAB_00199886;
              }
              if ((char)local_38[7] != '\0') goto LAB_00199831;
              uVar18 = 0;
              uVar16 = 0;
              goto LAB_001998fe;
            }
          }
          (*(code *)PTR_assert_failed_00219ff0)
                    (uVar23,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165a0);
          goto LAB_00199aa6;
        }
      }
      lVar19 = lVar19 + 0x18;
      lVar17 = lVar17 + 1;
    } while (lVar13 * 0x18 != lVar19);
  }
  if ((char)param_2[0xd] != '\0') {
    *(undefined1 *)param_1 = 1;
    param_1[5] = 0xfffffffffffffffe;
    goto joined_r0x001997c6;
  }
  local_100 = &local_58;
  puVar20 = (undefined8 *)(*in_FS_OFFSET + -0x20);
  puStack_f8 = &local_68;
  local_f0 = param_2;
  plStack_e8 = param_2;
  local_e0 = bVar8;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (puVar20 = (undefined8 *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (puVar20,0), puVar20 != (undefined8 *)0x0)) {
    plVar11 = (longlong *)*puVar20;
    *puVar20 = 0;
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)(*(code *)PTR_new_00219fc0)();
      puVar14 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
      local_e0 = 2;
      local_138 = &local_58;
      local_118 = CONCAT71(local_118._1_7_,bVar8);
      local_140 = plVar11;
      plStack_130 = &local_68;
      plStack_128 = param_2;
      plStack_120 = param_2;
      recv::_closure_1_(&local_d8,&local_138,plVar11);
      LOCK();
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_140);
      }
    }
    else {
      plVar11[3] = 0;
      plVar11[4] = 0;
      local_e0 = 2;
      local_d8 = local_100;
      plStack_d0 = puStack_f8;
      local_c8 = local_f0;
      plStack_c0 = plStack_e8;
      local_b8._0_5_ = CONCAT41(local_df,bVar8);
      local_b8 = CONCAT44(CONCAT31(uStack_db,local_df._3_1_),(undefined4)local_b8);
      local_140 = plVar11;
      recv::_closure_1_(&local_138,&local_d8,plVar11);
      local_d8 = (longlong *)*puVar20;
      *puVar20 = plVar11;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        *local_d8 = *local_d8 + -1;
        UNLOCK();
        if (*local_d8 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_d8);
        }
      }
      local_d8 = local_138;
      plStack_d0 = plStack_130;
      local_c8 = plStack_128;
      plStack_c0 = plStack_120;
      local_b8 = local_118;
      uStack_b0 = lStack_110;
      local_a8 = local_108;
      puVar14 = (ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08;
    }
    local_118 = local_b8;
    plStack_128 = local_c8;
    plStack_120 = plStack_c0;
    local_138 = local_d8;
    plStack_130 = plStack_d0;
    if (uStack_b0 == -3) goto LAB_00199778;
    param_1[4] = local_b8;
    param_1[2] = local_c8;
    param_1[3] = plStack_c0;
    *param_1 = local_d8;
    param_1[1] = plStack_d0;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_b0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_b0._4_4_;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_a8._4_4_;
  }
  else {
LAB_00199778:
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::recv::{closure#1},core[c0acaeba6ab4c2e0]::result::Result<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>),std[6c98fd8553dbae28]::sync::mpsc::RecvTimeoutError>>
    ::_closure_2_(param_1,&local_100);
  }
  if (local_e0 == 2) {
    return param_1;
  }
  bVar8 = local_e0 & 1;
  param_2 = plStack_e8;
joined_r0x001997c6:
  if (((bVar8 == 0) && ((*puVar14 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar9 == '\0')) {
    *(undefined1 *)((longlong)param_2 + 4) = 1;
  }
  LOCK();
  lVar13 = *param_2;
  *(int *)param_2 = 0;
  UNLOCK();
  if ((int)lVar13 == 2) {
    (*(code *)PTR_wake_00219d10)();
  }
  return param_1;
LAB_001998fe:
  do {
    if (uVar16 < 7) {
      if (uVar16 != 0) {
        uVar10 = uVar18 & 7;
        if (6 < uVar18 - 1) {
          uVar12 = uVar18 & 0xfffffff8;
          do {
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
          if (uVar10 == 0) goto LAB_001998e3;
        }
        do {
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    else {
      (*(code *)puVar6)();
    }
LAB_001998e3:
    iVar2 = uVar16 * 2;
    uVar16 = uVar16 + 1;
    uVar18 = uVar18 + iVar2 + 1;
  } while ((char)plVar7[7] == '\0');
LAB_00199831:
  lVar15 = plVar7[5];
  lVar21 = plVar7[6];
  plVar7[5] = -2;
  if (lVar15 != -2) {
    local_78 = plVar7[4];
    local_98 = *plVar7;
    uStack_90 = plVar7[1];
    local_88 = plVar7[2];
    lStack_80 = plVar7[3];
    lVar13 = 0x40;
    (*(code *)PTR___rust_dealloc_00219c40)((int)*plVar7,8);
LAB_00199886:
    param_1[4] = local_78;
    param_1[2] = local_88;
    param_1[3] = lStack_80;
    *(undefined4 *)param_1 = (undefined4)local_98;
    *(undefined4 *)((longlong)param_1 + 4) = local_98._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_90._4_4_;
    param_1[5] = lVar15;
    param_1[6] = lVar21;
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 != 0) {
      return param_1;
    }
LAB_001998c1:
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
    drop_slow(&local_138,lVar13);
    return param_1;
  }
LAB_00199a83:
  (*(code *)PTR_unwrap_failed_00219e58)();
LAB_00199aa6:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


