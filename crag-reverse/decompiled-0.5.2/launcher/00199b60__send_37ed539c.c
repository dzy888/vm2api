// 00199b60 send

/* <std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,
   bool, 
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send
    */

undefined8 * __rustcall
<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>
::send(undefined8 *param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
      undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong *plVar24;
  byte bVar25;
  char cVar26;
  longlong lVar27;
  longlong lVar28;
  longlong *plVar29;
  longlong *in_FS_OFFSET;
  bool bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 *local_1b8;
  undefined8 *puStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  longlong *plStack_d0;
  longlong *local_c8;
  undefined4 *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  undefined4 *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  
  uVar31 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (undefined4 *)0x0;
  LOCK();
  bVar30 = (int)*param_2 == 0;
  if (bVar30) {
    *(int *)param_2 = 1;
  }
  UNLOCK();
  local_e8 = param_4;
  local_e0 = param_5;
  if (!bVar30) {
    uVar31 = (*(code *)PTR_lock_contended_00219d70)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) == 0) {
    bVar25 = 0;
    cVar26 = *(char *)((longlong)param_2 + 4);
  }
  else {
    bVar25 = (*(code *)PTR_is_zero_slow_path_00219d18)();
    bVar25 = bVar25 ^ 1;
    cVar26 = *(char *)((longlong)param_2 + 4);
    uVar31 = extraout_XMM0_Da;
  }
  if (cVar26 != '\0') {
    uVar8 = (ulonglong)uStack_160 >> 8;
    uStack_160 = (longlong *)CONCAT71((int7)uVar8,bVar25);
    local_168 = param_2;
    (*(code *)PTR_unwrap_failed_00219ec0)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<std[6c98fd8553dbae28]::sync::mpmc::zero::Inner>>>_00216580
               ,&local_168,&PTR_s__rustc_48a229ceaefd4985c50990b14_00216630);
    goto LAB_0019a223;
  }
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    lVar5 = *in_FS_OFFSET;
    lVar6 = param_2[8];
    lVar28 = 1;
    lVar27 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar27);
      if (*(longlong *)(lVar7 + 0x28) != lVar5 + -0x70) {
        LOCK();
        bVar30 = *(longlong *)(lVar7 + 0x18) == 0;
        if (bVar30) {
          *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar6 + 8 + lVar27);
        }
        UNLOCK();
        if (bVar30) {
          lVar4 = *(longlong *)(lVar6 + 0x10 + lVar27);
          if (lVar4 != 0) {
            *(longlong *)(lVar7 + 0x20) = lVar4;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar7 + 0x10) + 0x28);
          iVar3 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          local_f8 = param_1;
          if (iVar3 == -1) {
            uVar31 = (*(code *)PTR_futex_wake_00219fe8)();
          }
          local_100 = lVar28 - 1;
          uVar8 = param_2[9];
          if (local_100 < uVar8) {
            lVar4 = param_2[8];
            plVar29 = *(longlong **)(lVar4 + lVar27);
            puVar2 = (undefined8 *)(lVar4 + 8 + lVar27);
            local_1c8 = (longlong *)*puVar2;
            uStack_1c0 = *(undefined4 *)(puVar2 + 1);
            uStack_1bc = *(undefined4 *)((longlong)puVar2 + 0xc);
            uVar31 = (*(code *)PTR_memmove_00219fb0)(plVar29,(uVar8 - lVar28) * 0x18);
            param_2[9] = uVar8 - 1;
            if (plVar29 != (longlong *)0x0) {
              uStack_160 = local_1c8;
              uStack_158 = (undefined8 *)CONCAT44(uStack_1bc,uStack_1c0);
              local_38 = (undefined4 *)uStack_158;
              local_168 = plVar29;
              if (((bVar25 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
                 (cVar26 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar26 == '\0')) {
                *(undefined1 *)((longlong)param_2 + 4) = 1;
              }
              puVar2 = local_f8;
              LOCK();
              lVar5 = *param_2;
              *(int *)param_2 = 0;
              UNLOCK();
              if ((int)lVar5 == 2) {
                (*(code *)PTR_wake_00219d10)();
              }
              if (local_38 == (undefined4 *)0x0) {
                if (param_3[10] != -2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
                            (param_3,lVar4 + lVar27 + 0x18);
                  (*(code *)PTR_unwrap_failed_00219e58)();
                  goto LAB_0019a223;
                }
              }
              else {
                *(undefined8 *)(local_38 + 0xc) = *(undefined8 *)(param_3 + 0xc);
                uVar31 = *param_3;
                uVar10 = param_3[1];
                uVar11 = param_3[2];
                uVar12 = param_3[3];
                uVar20 = *(undefined8 *)(param_3 + 4);
                uVar21 = *(undefined8 *)(param_3 + 6);
                uVar22 = *(undefined8 *)(param_3 + 10);
                *(undefined8 *)(local_38 + 8) = *(undefined8 *)(param_3 + 8);
                *(undefined8 *)(local_38 + 10) = uVar22;
                *(undefined8 *)(local_38 + 4) = uVar20;
                *(undefined8 *)(local_38 + 6) = uVar21;
                *local_38 = uVar31;
                local_38[1] = uVar10;
                local_38[2] = uVar11;
                local_38[3] = uVar12;
                *(undefined1 *)(local_38 + 0xe) = 1;
              }
              *puVar2 = 2;
              LOCK();
              *plVar29 = *plVar29 + -1;
              UNLOCK();
              if (*plVar29 == 0) {
                <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>
                ::drop_slow(&local_168);
                return puVar2;
              }
              return puVar2;
            }
          }
          (*(code *)PTR_assert_failed_00219ff0)
                    (uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_002165a0);
          goto LAB_0019a223;
        }
      }
      lVar27 = lVar27 + 0x18;
      lVar28 = lVar28 + 1;
    } while (lVar4 * 0x18 != lVar27);
  }
  if ((char)param_2[0xd] != '\0') {
    param_1[7] = *(undefined8 *)(param_3 + 0xc);
    uVar31 = *param_3;
    uVar10 = param_3[1];
    uVar11 = param_3[2];
    uVar12 = param_3[3];
    uVar13 = param_3[4];
    uVar14 = param_3[5];
    uVar15 = param_3[6];
    uVar16 = param_3[7];
    uVar17 = param_3[9];
    uVar18 = param_3[10];
    uVar19 = param_3[0xb];
    *(undefined4 *)(param_1 + 5) = param_3[8];
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar17;
    *(undefined4 *)(param_1 + 6) = uVar18;
    *(undefined4 *)((longlong)param_1 + 0x34) = uVar19;
    *(undefined4 *)(param_1 + 3) = uVar13;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar14;
    *(undefined4 *)(param_1 + 4) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar16;
    *(undefined4 *)(param_1 + 1) = uVar31;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
    *(undefined4 *)(param_1 + 2) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar12;
    *param_1 = 1;
    if (((bVar25 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
       (cVar26 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar26 == '\0')) {
      *(undefined1 *)((longlong)param_2 + 4) = 1;
    }
    LOCK();
    iVar3 = (int)*param_2;
    *(int *)param_2 = 0;
    UNLOCK();
    goto joined_r0x0019a0a9;
  }
  local_170 = *(undefined8 *)(param_3 + 0xc);
  uStack_1a0 = *param_3;
  uStack_19c = param_3[1];
  uStack_198 = param_3[2];
  uStack_194 = param_3[3];
  uStack_190 = param_3[4];
  uStack_18c = param_3[5];
  uStack_188 = param_3[6];
  uStack_184 = param_3[7];
  local_180 = param_3[8];
  uStack_17c = param_3[9];
  uStack_178 = *(longlong *)(param_3 + 10);
  uVar23 = (uint)uStack_1c0 >> 8;
  uStack_1c0 = CONCAT31((int3)uVar23,bVar25);
  local_1b8 = &local_58;
  puStack_1b0 = &local_e8;
  plVar29 = (longlong *)(*in_FS_OFFSET + -0x20);
  local_1c8 = param_2;
  local_1a8 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar29 = (longlong *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (plVar29,0), plVar29 != (longlong *)0x0)) {
    lVar5 = uStack_178;
    lVar4 = *plVar29;
    *plVar29 = 0;
    if (lVar4 == 0) {
      plVar29 = (longlong *)(*(code *)PTR_new_00219fc0)();
      lVar4 = uStack_178;
      local_118 = (int)uStack_178;
      uStack_114 = uStack_178._4_4_;
      uStack_178 = -2;
      local_98 = plVar29;
      if (lVar4 == -2) {
        (*(code *)PTR_unwrap_failed_00219e58)();
        goto LAB_0019a223;
      }
      local_128 = CONCAT44(uStack_184,uStack_188);
      uStack_120 = CONCAT44(uStack_17c,local_180);
      local_138 = CONCAT44(uStack_194,uStack_198);
      uStack_130 = uStack_190;
      uStack_12c = uStack_18c;
      local_148 = (undefined4)local_1a8;
      uStack_144 = local_1a8._4_4_;
      uStack_140 = uStack_1a0;
      uStack_13c = uStack_19c;
      uStack_158 = local_1b8;
      puStack_150 = puStack_1b0;
      local_168 = local_1c8;
      uStack_160 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0);
      uStack_110 = (undefined4)local_170;
      uStack_10c = local_170._4_4_;
      send::_closure_0_(&local_d8,&local_168,plVar29);
      LOCK();
      *plVar29 = *plVar29 + -1;
      UNLOCK();
      if (*plVar29 == 0) {
        <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
        drop_slow(&local_98);
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      local_118 = (int)uStack_178;
      uStack_114 = uStack_178._4_4_;
      uStack_178 = -2;
      local_f0 = lVar4;
      if (lVar5 == -2) {
        (*(code *)PTR_unwrap_failed_00219e58)();
LAB_0019a223:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_128 = CONCAT44(uStack_184,uStack_188);
      uStack_120 = CONCAT44(uStack_17c,local_180);
      local_138 = CONCAT44(uStack_194,uStack_198);
      uStack_130 = uStack_190;
      uStack_12c = uStack_18c;
      local_148 = (undefined4)local_1a8;
      uStack_144 = local_1a8._4_4_;
      uStack_140 = uStack_1a0;
      uStack_13c = uStack_19c;
      uStack_158 = local_1b8;
      puStack_150 = puStack_1b0;
      local_168 = local_1c8;
      uStack_160 = (longlong *)CONCAT44(uStack_1bc,uStack_1c0);
      uStack_110 = (undefined4)local_170;
      uStack_10c = local_170._4_4_;
      send::_closure_0_(&local_98,&local_168,lVar4);
      local_168 = (longlong *)*plVar29;
      *plVar29 = lVar4;
      if (local_168 != (longlong *)0x0) {
        LOCK();
        *local_168 = *local_168 + -1;
        UNLOCK();
        if (*local_168 == 0) {
          <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::mpmc::context::Inner>>::
          drop_slow(&local_168);
        }
      }
      local_d8 = local_98;
      plStack_d0 = plStack_90;
      local_c8 = local_88;
      puStack_c0 = puStack_80;
      local_b8 = local_78;
      uStack_b0 = uStack_70;
      local_a8 = local_68;
      uStack_a0 = uStack_60;
    }
    local_168 = plStack_d0;
    plVar29 = local_168;
    uStack_160 = local_c8;
    plVar24 = uStack_160;
    uStack_158 = (undefined8 *)puStack_c0;
    puStack_150 = (undefined8 *)local_b8;
    local_148 = (undefined4)uStack_b0;
    uStack_144 = uStack_b0._4_4_;
    uStack_140 = (undefined4)local_a8;
    uStack_13c = local_a8._4_4_;
    local_138 = uStack_a0;
    if (local_d8 == (longlong *)0xffffffffffffffff) goto LAB_0019a05d;
    *param_1 = local_d8;
    local_168._0_4_ = SUB84(plStack_d0,0);
    local_168._4_4_ = (undefined4)((ulonglong)plStack_d0 >> 0x20);
    uStack_160._0_4_ = SUB84(local_c8,0);
    uStack_160._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
    *(undefined4 *)(param_1 + 1) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_168._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_160._4_4_;
    param_1[3] = puStack_c0;
    param_1[4] = local_b8;
    param_1[5] = uStack_b0;
    param_1[6] = local_a8;
    param_1[7] = uStack_a0;
    local_168 = plVar29;
    uStack_160 = plVar24;
  }
  else {
LAB_0019a05d:
    <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
    <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>
    ::_closure_2_(param_1,&local_1c8);
  }
  if ((int)uStack_178 == -2) {
    return param_1;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
            (&uStack_1a0);
  plVar29 = local_1c8;
  if ((((char)uStack_1c0 == '\0') &&
      ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00219d08 & 0x7fffffffffffffff) != 0)) &&
     (cVar26 = (*(code *)PTR_is_zero_slow_path_00219d18)(), cVar26 == '\0')) {
    *(undefined1 *)((longlong)plVar29 + 4) = 1;
  }
  LOCK();
  iVar3 = (int)*plVar29;
  *(int *)plVar29 = 0;
  UNLOCK();
joined_r0x0019a0a9:
  if (iVar3 == 2) {
    (*(code *)PTR_wake_00219d10)();
  }
  return param_1;
}


