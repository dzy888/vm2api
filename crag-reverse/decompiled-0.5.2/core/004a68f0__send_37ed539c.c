// 004a68f0 send

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
  undefined *puVar24;
  longlong *plVar25;
  byte bVar26;
  char cVar27;
  longlong lVar28;
  longlong lVar29;
  longlong *plVar30;
  longlong *in_FS_OFFSET;
  bool bVar31;
  undefined4 uVar32;
  undefined4 extraout_XMM0_Da;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
  undefined8 *puStack_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
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
  
  uVar32 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = (undefined4 *)0x0;
  LOCK();
  bVar31 = (int)*param_2 == 0;
  if (bVar31) {
    *(int *)param_2 = 1;
  }
  UNLOCK();
  local_e8 = param_4;
  local_e0 = param_5;
  if (!bVar31) {
    uVar32 = (*(code *)PTR_lock_contended_00798fe0)();
  }
  puVar24 = PTR_GLOBAL_PANIC_COUNT_00798fd8;
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar26 = 0;
    cVar27 = *(char *)((longlong)param_2 + 4);
  }
  else {
    bVar26 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar26 = bVar26 ^ 1;
    cVar27 = *(char *)((longlong)param_2 + 4);
    uVar32 = extraout_XMM0_Da;
  }
  if (cVar27 != '\0') {
    uVar8 = (ulonglong)uStack_1c0 >> 8;
    uStack_1c0 = (longlong *)CONCAT71((int7)uVar8,bVar26);
    local_1c8 = param_2;
    (*(code *)PTR_unwrap_failed_00799028)
              (&
               PTR_<std[6c98fd8553dbae28]::sync::poison::PoisonError<std[6c98fd8553dbae28]::sync::poison::mutex::MutexGuard<craggemini_core[66f3c71560d70857]::resume::SessionStore>>>_0078b5d0
               ,&local_1c8,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b6f8);
    goto LAB_004a6f8b;
  }
  lVar4 = param_2[9];
  if (lVar4 != 0) {
    lVar5 = *in_FS_OFFSET;
    lVar6 = param_2[8];
    lVar29 = 1;
    lVar28 = 0;
    do {
      lVar7 = *(longlong *)(lVar6 + lVar28);
      if (*(longlong *)(lVar7 + 0x28) != lVar5 + -200) {
        LOCK();
        bVar31 = *(longlong *)(lVar7 + 0x18) == 0;
        if (bVar31) {
          *(longlong *)(lVar7 + 0x18) = *(longlong *)(lVar6 + 8 + lVar28);
        }
        UNLOCK();
        if (bVar31) {
          lVar4 = *(longlong *)(lVar6 + 0x10 + lVar28);
          if (lVar4 != 0) {
            *(longlong *)(lVar7 + 0x20) = lVar4;
          }
          LOCK();
          piVar1 = (int *)(*(longlong *)(lVar7 + 0x10) + 0x28);
          iVar3 = *piVar1;
          *piVar1 = 1;
          UNLOCK();
          if (iVar3 == -1) {
            uVar32 = (*(code *)PTR_futex_wake_00799b60)();
          }
          local_100 = lVar29 - 1;
          uVar8 = param_2[9];
          local_f8 = param_1;
          if (local_100 < uVar8) {
            lVar4 = param_2[8];
            plVar30 = *(longlong **)(lVar4 + lVar28);
            puVar2 = (undefined8 *)(lVar4 + 8 + lVar28);
            local_168 = (longlong *)*puVar2;
            uStack_160 = *(undefined4 *)(puVar2 + 1);
            uStack_15c = *(undefined4 *)((longlong)puVar2 + 0xc);
            uVar32 = (*(code *)PTR_memmove_00799258)(*(undefined4 *)puVar2,(uVar8 - lVar29) * 0x18);
            param_2[9] = uVar8 - 1;
            if (plVar30 != (longlong *)0x0) {
              uStack_1c0 = local_168;
              uStack_1b8 = (undefined8 *)CONCAT44(uStack_15c,uStack_160);
              local_38 = (undefined4 *)uStack_1b8;
              local_1c8 = plVar30;
              if (((bVar26 == 0) &&
                  ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
                 (cVar27 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar27 == '\0')) {
                *(undefined1 *)((longlong)param_2 + 4) = 1;
              }
              puVar2 = local_f8;
              LOCK();
              lVar5 = *param_2;
              *(int *)param_2 = 0;
              UNLOCK();
              if ((int)lVar5 == 2) {
                (*(code *)PTR_wake_00799010)();
              }
              if (local_38 == (undefined4 *)0x0) {
                lVar5 = *(longlong *)(param_3 + 10);
                if (lVar5 != -2) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(param_3,lVar4 + lVar28 + 0x18);
                  if ((int)lVar5 != -1) {
                    <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
                    ::drop(param_3 + 10);
                  }
                  (*(code *)PTR_unwrap_failed_00799278)();
                  goto LAB_004a6f8b;
                }
              }
              else {
                *(undefined8 *)(local_38 + 0xc) = *(undefined8 *)(param_3 + 0xc);
                uVar32 = *param_3;
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
                *local_38 = uVar32;
                local_38[1] = uVar10;
                local_38[2] = uVar11;
                local_38[3] = uVar12;
                *(undefined1 *)(local_38 + 0xe) = 1;
              }
              *puVar2 = 2;
              LOCK();
              *local_1c8 = *local_1c8 + -1;
              UNLOCK();
              if (*local_1c8 == 0) {
                (*(code *)PTR_drop_slow_007995f0)();
                return puVar2;
              }
              return puVar2;
            }
          }
          (*(code *)PTR_assert_failed_00799718)
                    (uVar32,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078b650);
          goto LAB_004a6f8b;
        }
      }
      lVar28 = lVar28 + 0x18;
      lVar29 = lVar29 + 1;
    } while (lVar4 * 0x18 != lVar28);
  }
  if ((char)param_2[0xd] != '\0') {
    param_1[7] = *(undefined8 *)(param_3 + 0xc);
    uVar32 = *param_3;
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
    *(undefined4 *)(param_1 + 1) = uVar32;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
    *(undefined4 *)(param_1 + 2) = uVar11;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar12;
    *param_1 = 1;
    if (((bVar26 == 0) && ((*(ulonglong *)puVar24 & 0x7fffffffffffffff) != 0)) &&
       (cVar27 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar27 == '\0')) {
      *(undefined1 *)((longlong)param_2 + 4) = 1;
    }
    LOCK();
    lVar4 = *param_2;
    *(int *)param_2 = 0;
    UNLOCK();
    if ((int)lVar4 == 2) {
      (*(code *)PTR_wake_00799010)();
      return param_1;
    }
    return param_1;
  }
  local_110 = *(undefined8 *)(param_3 + 0xc);
  uStack_140 = *param_3;
  uStack_13c = param_3[1];
  uStack_138 = param_3[2];
  uStack_134 = param_3[3];
  uStack_130 = param_3[4];
  uStack_12c = param_3[5];
  uStack_128 = param_3[6];
  uStack_124 = param_3[7];
  local_120 = param_3[8];
  uStack_11c = param_3[9];
  uStack_118 = *(longlong *)(param_3 + 10);
  uVar23 = (uint)uStack_160 >> 8;
  uStack_160 = CONCAT31((int3)uVar23,bVar26);
  local_158 = &local_58;
  puStack_150 = &local_e8;
  plVar30 = (longlong *)(*in_FS_OFFSET + -0x20);
  local_168 = param_2;
  local_148 = param_2;
  if (((char)in_FS_OFFSET[-3] == '\x01') ||
     (plVar30 = (longlong *)
                <std[6c98fd8553dbae28]::sys::thread_local::native::lazy::Storage<core[c0acaeba6ab4c2e0]::cell::Cell<core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpmc::context::Context>>,()>>
                ::get_or_init_slow::
                <<std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::CONTEXT::__rust_std_internal_init_fn>
                          (plVar30,0), plVar30 != (longlong *)0x0)) {
    lVar5 = uStack_118;
    lVar4 = *plVar30;
    *plVar30 = 0;
    if (lVar4 == 0) {
      local_d8 = (longlong *)(*(code *)PTR_new_007995e8)();
      lVar4 = uStack_118;
      local_178 = (undefined4)uStack_118;
      uStack_174 = uStack_118._4_4_;
      uStack_118 = -2;
      if (lVar4 == -2) {
        (*(code *)PTR_unwrap_failed_00799278)();
        goto LAB_004a6f8b;
      }
      local_188 = CONCAT44(uStack_124,uStack_128);
      uStack_180 = CONCAT44(uStack_11c,local_120);
      local_198 = CONCAT44(uStack_134,uStack_138);
      uStack_190 = uStack_130;
      uStack_18c = uStack_12c;
      local_1a8 = (undefined4)local_148;
      uStack_1a4 = local_148._4_4_;
      uStack_1a0 = uStack_140;
      uStack_19c = uStack_13c;
      uStack_1b8 = local_158;
      puStack_1b0 = puStack_150;
      local_1c8 = local_168;
      uStack_1c0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
      uStack_170 = (undefined4)local_110;
      uStack_16c = local_110._4_4_;
      send::_closure_0_(&local_98,&local_1c8,local_d8);
      LOCK();
      *local_d8 = *local_d8 + -1;
      UNLOCK();
      if (*local_d8 == 0) {
        (*(code *)PTR_drop_slow_007995f0)();
      }
    }
    else {
      *(undefined8 *)(lVar4 + 0x18) = 0;
      *(undefined8 *)(lVar4 + 0x20) = 0;
      local_178 = (undefined4)uStack_118;
      uStack_174 = uStack_118._4_4_;
      uStack_118 = -2;
      local_f0 = lVar4;
      if (lVar5 == -2) {
        (*(code *)PTR_unwrap_failed_00799278)();
LAB_004a6f8b:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      local_188 = CONCAT44(uStack_124,uStack_128);
      uStack_180 = CONCAT44(uStack_11c,local_120);
      local_198 = CONCAT44(uStack_134,uStack_138);
      uStack_190 = uStack_130;
      uStack_18c = uStack_12c;
      local_1a8 = (undefined4)local_148;
      uStack_1a4 = local_148._4_4_;
      uStack_1a0 = uStack_140;
      uStack_19c = uStack_13c;
      uStack_1b8 = local_158;
      puStack_1b0 = puStack_150;
      local_1c8 = local_168;
      uStack_1c0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
      uStack_170 = (undefined4)local_110;
      uStack_16c = local_110._4_4_;
      send::_closure_0_(&local_d8,&local_1c8,lVar4);
      local_1c8 = (longlong *)*plVar30;
      *plVar30 = lVar4;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *local_1c8 = *local_1c8 + -1;
        UNLOCK();
        if (*local_1c8 == 0) {
          (*(code *)PTR_drop_slow_007995f0)();
        }
      }
      local_98 = local_d8;
      plStack_90 = plStack_d0;
      local_88 = local_c8;
      puStack_80 = puStack_c0;
      local_78 = local_b8;
      uStack_70 = uStack_b0;
      local_68 = local_a8;
      uStack_60 = uStack_a0;
    }
    local_1c8 = plStack_90;
    plVar30 = local_1c8;
    uStack_1c0 = local_88;
    plVar25 = uStack_1c0;
    uStack_1b8 = (undefined8 *)puStack_80;
    puStack_1b0 = (undefined8 *)local_78;
    local_1a8 = (undefined4)uStack_70;
    uStack_1a4 = uStack_70._4_4_;
    uStack_1a0 = (undefined4)local_68;
    uStack_19c = local_68._4_4_;
    local_198 = uStack_60;
    if (local_98 != (longlong *)0xffffffffffffffff) {
      *param_1 = local_98;
      local_1c8._0_4_ = SUB84(plStack_90,0);
      local_1c8._4_4_ = (undefined4)((ulonglong)plStack_90 >> 0x20);
      uStack_1c0._0_4_ = SUB84(local_88,0);
      uStack_1c0._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
      *(undefined4 *)(param_1 + 1) = (undefined4)local_1c8;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c8._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1c0;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_1c0._4_4_;
      param_1[3] = puStack_80;
      param_1[4] = local_78;
      param_1[5] = uStack_70;
      param_1[6] = local_68;
      param_1[7] = uStack_60;
      local_1c8 = plVar30;
      uStack_1c0 = plVar25;
      goto LAB_004a6e11;
    }
  }
  <std[6c98fd8553dbae28]::sync::mpmc::context::Context>::with::
  <<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<(),std[6c98fd8553dbae28]::sync::mpmc::error::SendTimeoutError<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>>
  ::_closure_2_(param_1,&local_168);
LAB_004a6e11:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
  <core[c0acaeba6ab4c2e0]::option::Option<<std[6c98fd8553dbae28]::sync::mpmc::zero::Channel<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>>::send::_closure_0_>>
            (&local_168);
  return param_1;
}


