// 004aa030 flush_resume_cut

/* WARNING: Type propagation algorithm not settling */
/* <craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_resume_cut */

void __rustcall
<craggemini_core[66f3c71560d70857]::pool::AgySlot>::flush_resume_cut(longlong param_1,int *param_2)

{
  byte *******pppppppbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *******pppppppbVar4;
  code *pcVar5;
  byte *******pppppppbVar6;
  byte *******pppppppbVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined *puVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  byte *******pppppppbVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined1 uVar22;
  byte *******pppppppbVar23;
  byte *******pppppppbVar24;
  byte *******pppppppbVar25;
  bool bVar26;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined1 auVar28 [16];
  byte *******local_390;
  byte *******local_388;
  byte *******local_378;
  byte *******pppppppbStack_370;
  byte *******local_368;
  byte *******pppppppbStack_360;
  undefined4 local_358;
  undefined4 uStack_354;
  byte *******local_340;
  undefined1 local_338 [16];
  byte *******local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 uStack_310;
  byte *******local_308;
  byte *******pppppppbStack_300;
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  byte *******local_2e8;
  byte *******pppppppbStack_2e0;
  byte *******local_2d8;
  longlong lStack_2d0;
  ulonglong local_2c8;
  byte *******pppppppbStack_2c0;
  byte *******local_2b8;
  char local_2b0;
  int *local_2a8;
  longlong local_2a0;
  byte *******local_298;
  byte *******pppppppbStack_290;
  byte *******local_288;
  byte *******pppppppbStack_280;
  byte *******local_278;
  byte *******pppppppbStack_270;
  byte *******local_268;
  byte *******pppppppbStack_260;
  byte *******local_258;
  longlong lStack_250;
  ulonglong local_248;
  byte *******pppppppbStack_240;
  byte *******local_238;
  char local_230;
  undefined1 local_1e1;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  byte *******local_1c8;
  byte *******pppppppbStack_1c0;
  byte *******local_1b8;
  byte *******local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  byte *******local_198;
  undefined8 local_190;
  undefined8 local_188;
  byte *******local_180;
  byte *******local_178;
  byte *******local_170;
  undefined8 local_168;
  byte *******local_160;
  char local_158;
  undefined7 uStack_157;
  undefined8 local_150;
  undefined8 local_148;
  byte *******local_140;
  longlong local_138;
  undefined8 local_128;
  byte *******local_120;
  byte *******local_118;
  byte *******local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e0;
  byte *******local_d8;
  char local_d0;
  longlong local_c8;
  undefined8 local_c0;
  byte *******local_b8;
  longlong local_b0;
  byte *******local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  
  if (*(longlong *)(param_1 + 0x6e8) == -1) {
    return;
  }
  uVar19 = *(undefined8 *)(param_1 + 0x6f0);
  local_a0 = *(undefined8 *)(param_1 + 0x6f8);
  if (*(longlong *)(param_1 + 0x700) == -1) {
    if (*(longlong *)(param_1 + 0x130) == -1) {
      return;
    }
    puVar21 = (undefined8 *)(param_1 + 0x138);
    puVar15 = (undefined8 *)(param_1 + 0x140);
  }
  else {
    puVar15 = (undefined8 *)(param_1 + 0x710);
    puVar21 = (undefined8 *)(param_1 + 0x708);
  }
  uVar20 = *puVar21;
  uVar2 = *puVar15;
  LOCK();
  iVar14 = *param_2;
  if (iVar14 == 0) {
    *param_2 = 1;
  }
  UNLOCK();
  if (iVar14 != 0) {
    (*(code *)PTR_lock_contended_00798fe0)();
  }
  if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
    bVar12 = 0;
  }
  else {
    bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
    bVar12 = bVar12 ^ 1;
  }
  local_2a8 = param_2;
  local_68 = uVar19;
  if ((char)param_2[1] == '\0') {
    lVar18 = <craggemini_core[66f3c71560d70857]::resume::SessionStore>::find
                       (param_2 + 2,uVar19,local_a0);
    if (lVar18 == 0) {
      pppppppbVar25 = (byte *******)0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_clone_00798fd0)();
      local_b0 = *(longlong *)(lVar18 + 0xa0) + *(longlong *)(lVar18 + 0x270);
      pppppppbVar25 = local_298;
      local_318 = pppppppbStack_290;
      uStack_310 = local_288;
    }
    if (((bVar12 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    LOCK();
    iVar14 = *param_2;
    *param_2 = 0;
    UNLOCK();
    if (iVar14 == 2) {
      (*(code *)PTR_wake_00799010)();
      if (pppppppbVar25 != (byte *******)0xffffffffffffffff) goto LAB_004aa1f3;
      goto LAB_004aa113;
    }
    if (pppppppbVar25 == (byte *******)0xffffffffffffffff) goto LAB_004aa113;
LAB_004aa1f3:
    pppppppbStack_290 = local_318;
    local_288 = uStack_310;
    local_178 = pppppppbVar25;
  }
  else {
    if (((bVar12 == 0) &&
        ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) &&
       (cVar11 = (*(code *)PTR_is_zero_slow_path_00798fe8)(), cVar11 == '\0')) {
      *(undefined1 *)(param_2 + 1) = 1;
    }
    LOCK();
    iVar14 = *param_2;
    *param_2 = 0;
    UNLOCK();
    if (iVar14 == 2) {
      (*(code *)PTR_wake_00799010)();
    }
LAB_004aa113:
    (*(code *)PTR_clone_00798fd0)();
    local_b0 = 0;
    local_178 = local_298;
  }
  local_140 = pppppppbStack_290;
  local_a8 = local_288;
  uVar19 = *(undefined8 *)(param_1 + 0x6c8);
  uVar3 = *(undefined8 *)(param_1 + 0x690);
  local_148 = *(undefined8 *)(param_1 + 0x698);
  local_298 = local_178;
  local_338 = ::<str>::trim_matches::<<char>::is_whitespace>(uVar20,uVar2);
  pppppppbVar25 = local_338._8_8_;
  uVar27 = extraout_XMM0_Da;
  if (((undefined1 *)0xffffffffffffff7f < (undefined1 *)((longlong)pppppppbVar25 + -0x81)) &&
     ((bVar12 = *local_338._0_8_, (byte)(bVar12 - 0x30) < 10 ||
      ((byte)((bVar12 & 0xdf) + 0xbf) < 0x1a)))) {
    pppppppbVar16 = (byte *******)0x0;
    do {
      bVar12 = local_338._0_8_[(longlong)pppppppbVar16];
      if (((9 < (byte)(bVar12 - 0x30)) && (0x19 < (byte)((bVar12 & 0xdf) + 0xbf))) &&
         ((0x32 < bVar12 - 0x2d ||
          ((0x4000000000003U >> ((ulonglong)(bVar12 - 0x2d) & 0x3f) & 1) == 0)))) goto LAB_004ac0ca;
      pppppppbVar16 = (byte *******)((longlong)pppppppbVar16 + 1);
    } while (pppppppbVar25 != pppppppbVar16);
    (*(code *)PTR__join_00799210)(".gemini",uVar19,7);
    local_168 = uVar3;
    uVar27 = (*(code *)PTR__join_00799210)("antigravity-cli",local_288,0xf);
    if (local_298 != (byte *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
    }
    (*(code *)PTR__join_00799210)(".gemini",uVar19,7);
    uVar27 = (*(code *)PTR__join_00799210)("antigravity",local_288,0xb);
    if (local_298 != (byte *******)0x0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
    }
    uVar19 = local_128;
    cVar11 = (*(code *)PTR_is_dir_00799b80)();
    if (cVar11 == '\0') {
      cVar11 = (*(code *)PTR_is_dir_00799b80)();
      uVar27 = extraout_XMM0_Da_00;
      if (cVar11 != '\0') goto LAB_004aa40f;
    }
    else {
LAB_004aa40f:
      (*(code *)PTR__join_00799210)("cuts",local_148,4);
      pppppppbVar16 = local_b8;
      uVar17 = craggemini_core[66f3c71560d70857]::binding::ensure_private_dir(local_c0,local_b8);
      if (uVar17 == 0) {
        (*(code *)PTR_new_v4_00799350)();
        pppppppbVar1 = pppppppbStack_290;
        pppppppbVar23 = local_298;
        local_378 = local_298;
        pppppppbStack_370 = pppppppbStack_290;
        local_318 = (byte *******)0x0;
        uStack_310 = (byte *******)0x1;
        local_308 = (byte *******)0x0;
        local_288 = (byte *******)0x60000020;
        pppppppbStack_290 = (byte *******)&PTR_<alloc[12e961f32105355]::string::String>_0078beb0;
        local_298 = (byte *******)&local_318;
        cVar11 = (*(code *)PTR_fmt_00799400)();
        pppppppbVar24 = local_318;
        if (cVar11 != '\0') {
          (*(code *)PTR_unwrap_failed_00799028)
                    (&DAT_0078b630,&local_1e1,
                     &
                     PTR_anon_59e2fb66b8c947e9c506f2bec78bddb3_45_llvm_10337461052197347093_0078bee0
                    );
          goto LAB_004ac51e;
        }
        if (&DAT_00000008 < local_308) {
          if (*(char *)(uStack_310 + 1) < -0x40) goto LAB_004aa547;
        }
        else if (local_308 != (byte *******)&DAT_00000008) {
LAB_004aa547:
          (*(code *)PTR_slice_error_fail_00799408)
                    (8,0,&
                         PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bdd8
                    );
          goto LAB_004ac51e;
        }
        local_318 = uStack_310;
        uStack_310 = (byte *******)&DAT_00000008;
        local_298 = (byte *******)local_338;
        pppppppbStack_290 = (byte *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        pppppppbStack_280 = (byte *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        local_288 = (byte *******)&local_318;
        uVar27 = (*(code *)PTR_format_inner_00799048)(&local_318,&local_298);
        if (pppppppbVar24 != (byte *******)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
        }
        uVar27 = (*(code *)PTR__join_00799210)(local_58,pppppppbVar16,local_50);
        if (local_60 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
        }
        uVar20 = local_1d0;
        uVar17 = craggemini_core[66f3c71560d70857]::binding::ensure_private_dir(local_1d8,local_1d0)
        ;
        if (uVar17 == 0) {
          local_2a0 = 0x200;
          local_328 = (byte *******)0x0;
          (*(code *)PTR__join_00799210)("brain",local_e0,5);
          (*(code *)PTR__join_00799210)(local_338._0_8_,local_188,local_338._8_8_);
          (*(code *)PTR__join_00799210)("brain",uVar19,5);
          (*(code *)PTR__join_00799210)(local_338._0_8_,local_1b8,local_338._8_8_);
          pppppppbVar16 = local_298;
          local_308 = local_368;
          local_318 = pppppppbVar23;
          uStack_310 = pppppppbVar1;
          pppppppbStack_2f0 = local_288;
          pppppppbStack_300 = local_298;
          pppppppbStack_2f8 = pppppppbStack_290;
          local_268 = pppppppbStack_290;
          pppppppbStack_260 = local_288;
          local_278 = local_368;
          pppppppbStack_270 = local_298;
          local_288 = pppppppbVar23;
          pppppppbStack_280 = pppppppbVar1;
          pppppppbStack_290 = (byte *******)0x2;
          local_298 = (byte *******)0x1;
          if (pppppppbVar23 == (byte *******)0xffffffffffffffff) {
            uVar27 = 0xffffffff;
            if (pppppppbVar16 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(0xffffffff,1);
            }
            local_340 = (byte *******)0x0;
          }
          else {
            local_320 = uVar20;
            cVar11 = (*(code *)PTR_is_dir_00799b80)();
            if (cVar11 == '\0') {
              local_170 = (byte *******)0x0;
              local_340 = (byte *******)0x0;
              uVar27 = extraout_XMM0_Da_03;
            }
            else {
              (*(code *)PTR__join_00799210)("brain",local_320,5);
              (*(code *)PTR__join_00799210)(local_338._0_8_,local_308,local_338._8_8_);
              uVar27 = craggemini_core[66f3c71560d70857]::pool::copy_cut_tree_bounded
                                 (pppppppbVar1,local_368,pppppppbVar1,local_368,1,&local_2a0,
                                  &local_328);
              if (pppppppbVar23 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              if (local_318 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              local_340 = (byte *******)0x1;
              local_170 = local_328;
              if (local_328 == (byte *******)0x0) {
                (*(code *)PTR__join_00799210)("brain",local_320,5);
                (*(code *)PTR__join_00799210)(local_338._0_8_,local_308,local_338._8_8_);
                uVar17 = (*(code *)PTR_is_dir_00799b80)();
                local_340 = (byte *******)(uVar17 & 0xffffffff);
                uVar27 = extraout_XMM0_Da_04;
                if (pppppppbVar23 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_04,1);
                }
                if (local_318 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                local_170 = (byte *******)0x0;
              }
            }
            if (pppppppbVar23 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            pppppppbVar4 = pppppppbStack_260;
            pppppppbVar24 = local_268;
            pppppppbVar16 = pppppppbStack_270;
            local_298 = (byte *******)0x2;
            if (pppppppbStack_270 != (byte *******)0xffffffffffffffff) {
              cVar11 = (*(code *)PTR_is_dir_00799b80)();
              if (cVar11 == '\0') {
                uVar27 = extraout_XMM0_Da_05;
              }
              else {
                (*(code *)PTR__join_00799210)("brain",local_320,5);
                local_180 = local_340;
                (*(code *)PTR__join_00799210)(local_338._0_8_,local_308,local_338._8_8_);
                uVar27 = craggemini_core[66f3c71560d70857]::pool::copy_cut_tree_bounded
                                   (pppppppbVar24,pppppppbVar4,pppppppbVar1,local_368,1,&local_2a0,
                                    &local_328);
                if (pppppppbVar23 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                if (local_318 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                local_340 = (byte *******)0x1;
                if (local_328 <= local_170) {
                  (*(code *)PTR__join_00799210)("brain",local_320,5);
                  (*(code *)PTR__join_00799210)(local_338._0_8_,local_308,local_338._8_8_);
                  bVar12 = (*(code *)PTR_is_dir_00799b80)();
                  uVar27 = extraout_XMM0_Da_06;
                  if (pppppppbVar23 != (byte *******)0x0) {
                    uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_06,1);
                  }
                  pppppppbVar24 = local_180;
                  if (local_318 != (byte *******)0x0) {
                    uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  local_340 = (byte *******)(ulonglong)(byte)(bVar12 | (byte)pppppppbVar24);
                }
              }
              if (pppppppbVar16 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
            }
          }
          if (local_1c8 != (byte *******)0x0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          if (local_198 != (byte *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          (*(code *)PTR__join_00799210)("conversations",uVar19,0xd);
          cVar11 = (*(code *)PTR_is_dir_00799b80)();
          if (cVar11 != '\0') {
            (*(code *)PTR_read_dir_00799ad0)(extraout_XMM0_Da_07,local_88);
            puVar10 = PTR_next_00799b88;
            local_160 = local_298;
            local_158 = (char)pppppppbStack_290;
            if ((char)pppppppbStack_290 == '\x02') {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>
                        (&local_160,local_90);
            }
            else {
              local_318 = (byte *******)0x0;
              local_2e8 = (byte *******)0x0;
              local_2b8 = local_298;
              local_2b0 = (char)pppppppbStack_290;
              do {
                while( true ) {
                  (*(code *)puVar10)();
                  if (local_298 == (byte *******)0x0) {
                    if (local_2b0 != '\x02') {
                      LOCK();
                      *local_2b8 = (byte ******)((longlong)*local_2b8 + -1);
                      UNLOCK();
                      if (*local_2b8 == (byte ******)0x0) {
                        (*(code *)PTR_drop_slow_007997d0)();
                      }
                    }
                    local_2b0 = '\x02';
                    local_378 = pppppppbStack_290;
                    pppppppbStack_370 = local_288;
                    local_368 = pppppppbStack_280;
                    pppppppbStack_360 = local_278;
                    if (local_298 != (byte *******)0x1) goto LAB_004ab21d;
                  }
                  else {
                    local_368 = pppppppbStack_280;
                    pppppppbStack_360 = local_278;
                    local_378 = pppppppbStack_290;
                    pppppppbStack_370 = local_288;
                  }
                  lVar18 = local_2a0;
                  local_298 = local_378;
                  pppppppbStack_290 = pppppppbStack_370;
                  local_278 = pppppppbStack_270;
                  local_288 = local_368;
                  pppppppbStack_280 = pppppppbStack_360;
                  if (local_378 != (byte *******)0x0) break;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
                            (&local_298);
LAB_004aae62:
                  if (local_2b0 == '\x02') goto LAB_004ab21d;
                }
                local_358 = SUB84(pppppppbStack_270,0);
                uStack_354 = (undefined4)((ulonglong)pppppppbStack_270 >> 0x20);
                local_1b0 = pppppppbStack_360;
                uStack_1a8 = local_358;
                uStack_1a4 = uStack_354;
                pppppppbStack_1c0 = pppppppbStack_370;
                local_1b8 = local_368;
                local_1c8 = local_378;
                if (local_2a0 == 0) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::fs::DirEntry>
                            (&local_1c8,&local_2b8);
                  break;
                }
                uVar27 = (*(code *)PTR_file_name_00799b90)();
                uVar20 = local_f8;
                uVar19 = local_100;
                uVar27 = (*(code *)PTR_from_utf8_00799468)(uVar27,local_f8);
                if (((int)local_298 == 1) || (local_288 < pppppppbVar25)) {
LAB_004aaf0c:
                  if (local_108 != 0) {
                    uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  LOCK();
                  *local_1c8 = (byte ******)((longlong)*local_1c8 + -1);
                  UNLOCK();
                  if (*local_1c8 == (byte ******)0x0) {
                    uVar27 = (*(code *)PTR_drop_slow_007997d0)();
                  }
                  *(undefined1 *)pppppppbStack_1c0 = 0;
                  if (local_1b8 != (byte *******)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  goto LAB_004aae62;
                }
                iVar14 = (*(code *)PTR_bcmp_00799020)(uVar27,pppppppbVar25);
                uVar27 = extraout_XMM0_Da_08;
                if (iVar14 != 0) goto LAB_004aaf0c;
                (*(code *)PTR_path_00799b98)();
                uVar3 = local_188;
                uVar2 = local_190;
                uVar27 = (*(code *)PTR_symlink_metadata_007992d0)();
                pppppppbVar24 = pppppppbStack_290;
                pppppppbVar16 = local_298;
                if (local_298 == (byte *******)0x2) {
                  uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
                                     (2,pppppppbStack_290);
                }
                else if (((uint)pppppppbStack_260 & 0xf000) == 0x8000) {
                  local_2a0 = lVar18 + -1;
                  (*(code *)PTR__join_00799210)("conversations",local_1d0,0xd);
                  (*(code *)PTR__join_00799210)(uVar19,local_288,uVar20);
                  auVar28 = craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
                                      (uVar2,uVar3,pppppppbStack_370,local_368,1);
                  uVar17 = auVar28._8_8_;
                  if (auVar28._0_8_ == 1) {
                    uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                             <core[c0acaeba6ab4c2e0]::result::Result<u64,core[c0acaeba6ab4c2e0]::io::error::Error>>
                                       (1,uVar17);
                    if (local_378 != (byte *******)0x0) {
                      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                    }
                  }
                  else {
                    bVar26 = CARRY8(uVar17,(ulonglong)local_328);
                    local_328 = (byte *******)(uVar17 + (longlong)local_328);
                    if (bVar26) {
                      local_328 = (byte *******)0xffffffffffffffff;
                    }
                    uVar27 = extraout_XMM0_Da_09;
                    if (local_378 != (byte *******)0x0) {
                      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_09,1);
                    }
                    local_340 = (byte *******)0x1;
                  }
                  if (local_298 != (byte *******)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
                                     (pppppppbVar16,pppppppbVar24);
                }
                if (local_198 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                if (local_108 != 0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                LOCK();
                *local_1c8 = (byte ******)((longlong)*local_1c8 + -1);
                UNLOCK();
                if (*local_1c8 == (byte ******)0x0) {
                  uVar27 = (*(code *)PTR_drop_slow_007997d0)();
                }
                *(undefined1 *)pppppppbStack_1c0 = 0;
                if (local_1b8 != (byte *******)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
              } while (local_2b0 != '\x02');
LAB_004ab21d:
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                        (&local_318);
              if (local_158 == '\x02') {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (&local_160);
              }
            }
            uVar19 = local_128;
          }
          (*(code *)PTR__join_00799210)("sessionsfileData",uVar19,8);
          cVar11 = (*(code *)PTR_is_dir_00799b80)();
          if (cVar11 != '\0') {
            (*(code *)PTR_read_dir_00799ad0)(extraout_XMM0_Da_10,local_70);
            pppppppbVar16 = local_298;
            puVar10 = PTR_next_00799b88;
            local_d8 = local_298;
            local_d0 = (char)pppppppbStack_290;
            if ((char)pppppppbStack_290 == '\x02') {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>
                        (&local_d8,local_78);
            }
            else {
              local_120 = (byte *******)0x0;
              local_118 = (byte *******)&DAT_00000008;
              local_110 = (byte *******)0x0;
              local_298 = (byte *******)0x0;
              local_268 = (byte *******)0x0;
              local_238 = pppppppbVar16;
              local_230 = (char)pppppppbStack_290;
              do {
                while( true ) {
                  (*(code *)puVar10)();
                  if (local_318 == (byte *******)0x0) {
                    if (local_230 != '\x02') {
                      LOCK();
                      *local_238 = (byte ******)((longlong)*local_238 + -1);
                      UNLOCK();
                      if (*local_238 == (byte ******)0x0) {
                        (*(code *)PTR_drop_slow_007997d0)();
                      }
                    }
                    local_230 = '\x02';
                    local_378 = uStack_310;
                    pppppppbStack_370 = local_308;
                    local_368 = pppppppbStack_300;
                    pppppppbStack_360 = pppppppbStack_2f8;
                    if (local_318 != (byte *******)0x1) goto LAB_004ab4b7;
                  }
                  else {
                    local_368 = pppppppbStack_300;
                    pppppppbStack_360 = pppppppbStack_2f8;
                    local_378 = uStack_310;
                    pppppppbStack_370 = local_308;
                  }
                  pppppppbVar16 = local_110;
                  local_318 = local_378;
                  uStack_310 = pppppppbStack_370;
                  pppppppbStack_2f8 = pppppppbStack_2f0;
                  local_308 = local_368;
                  pppppppbStack_300 = pppppppbStack_360;
                  if (local_378 != (byte *******)0x0) break;
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
                            (&local_318);
                  if (local_230 == '\x02') goto LAB_004ab4b7;
                }
                if (local_110 == local_120) {
                  <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::fs::DirEntry>>::
                  grow_one(&local_120,&local_238);
                }
                local_118[(longlong)pppppppbVar16 * 5 + 4] = (byte ******)pppppppbStack_2f8;
                local_118[(longlong)pppppppbVar16 * 5 + 2] = (byte ******)local_308;
                (local_118 + (longlong)pppppppbVar16 * 5 + 2)[1] = (byte ******)pppppppbStack_300;
                pppppppbVar24 = local_118 + (longlong)pppppppbVar16 * 5;
                *(undefined4 *)pppppppbVar24 = (undefined4)local_318;
                *(undefined4 *)((longlong)pppppppbVar24 + 4) = local_318._4_4_;
                *(undefined4 *)(pppppppbVar24 + 1) = (undefined4)uStack_310;
                *(undefined4 *)((longlong)pppppppbVar24 + 0xc) = uStack_310._4_4_;
                local_110 = (byte *******)((longlong)pppppppbVar16 + 1);
              } while (local_230 != '\x02');
LAB_004ab4b7:
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
                        (&local_298);
              pppppppbVar24 = local_110;
              pppppppbVar16 = local_118 + (longlong)local_110 * 5;
              local_1c8 = local_118;
              pppppppbStack_1c0 = local_118;
              local_1b8 = local_120;
              pppppppbVar23 = local_118;
              local_1b0 = pppppppbVar16;
              if (local_110 != (byte *******)0x0) {
                do {
                  while( true ) {
                    lVar18 = local_2a0;
                    pppppppbVar1 = pppppppbVar23 + 5;
                    pppppppbVar4 = (byte *******)*pppppppbVar23;
                    local_368 = (byte *******)pppppppbVar23[3];
                    pppppppbVar6 = (byte *******)pppppppbVar23[1];
                    local_378 = (byte *******)pppppppbVar23[1];
                    pppppppbVar7 = (byte *******)pppppppbVar23[2];
                    pppppppbStack_370 = (byte *******)pppppppbVar23[2];
                    pppppppbStack_1c0 = pppppppbVar1;
                    if (pppppppbVar4 == (byte *******)0x0) goto LAB_004ab916;
                    local_318 = pppppppbVar4;
                    uStack_310 = pppppppbVar6;
                    local_308 = pppppppbVar7;
                    pppppppbStack_300 = local_368;
                    pppppppbStack_2f8 = (byte *******)pppppppbVar23[4];
                    if (local_2a0 == 0) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::fs::DirEntry>
                                (&local_318);
                      goto LAB_004ab916;
                    }
                    uVar27 = (*(code *)PTR_file_name_00799b90)();
                    uVar20 = local_150;
                    uVar19 = CONCAT71(uStack_157,local_158);
                    uVar27 = (*(code *)PTR_from_utf8_00799468)(uVar27,local_150);
                    pppppppbVar6 = local_288;
                    pppppppbVar4 = pppppppbStack_290;
                    if ((int)local_298 != 1) break;
LAB_004ab68e:
                    if (local_160 != (byte *******)0x0) {
                      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                    }
                    LOCK();
                    *local_318 = (byte ******)((longlong)*local_318 + -1);
                    UNLOCK();
                    if (*local_318 == (byte ******)0x0) {
                      uVar27 = (*(code *)PTR_drop_slow_007997d0)();
                    }
                    *(undefined1 *)uStack_310 = 0;
                    if (local_308 != (byte *******)0x0) {
                      (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                    }
                    pppppppbVar23 = pppppppbVar1;
                    if (pppppppbVar1 == pppppppbVar16) goto LAB_004ab916;
                  }
                  (*(code *)PTR_path_00799b98)();
                  uVar2 = local_100;
                  local_320 = local_f8;
                  uVar27 = (*(code *)PTR_symlink_metadata_007992d0)();
                  uVar17 = local_248;
                  if ((int)local_298 == 2) {
                    if ((1 < ((uint)pppppppbStack_290 & 3) - 2) &&
                       (((ulonglong)pppppppbStack_290 & 3) != 0)) {
                      pppppppbStack_290 = (byte *******)((longlong)pppppppbStack_290 + -1);
                      local_298 = (byte *******)CONCAT71(local_298._1_7_,3);
                      uVar27 = (*(code *)PTR_drop_00799040)();
                    }
                    if (local_108 != 0) {
                      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                    }
                    goto LAB_004ab68e;
                  }
                  if (((uint)pppppppbStack_260 & 0xf000) == 0x8000) {
                    bVar12 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::
                             is_contained_in(local_338._0_8_,local_338._8_8_,pppppppbVar4,
                                             pppppppbVar6);
                    uVar27 = extraout_XMM0_Da_11;
                    if (((uVar17 < 0x40001 && pppppppbVar24 < &DAT_00000011) | bVar12) == 1) {
                      local_2a0 = lVar18 + -1;
                      (*(code *)PTR__join_00799210)("sessionsfileData",local_1d0,8);
                      (*(code *)PTR__join_00799210)(uVar19,local_288,uVar20);
                      auVar28 = craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
                                          (uVar2,local_320,local_190,local_188,1);
                      uVar17 = auVar28._8_8_;
                      if (auVar28._0_8_ == 1) {
                        uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                 <core[c0acaeba6ab4c2e0]::result::Result<u64,core[c0acaeba6ab4c2e0]::io::error::Error>>
                                           (1,uVar17);
                        if (local_198 != (byte *******)0x0) {
                          uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                        }
                      }
                      else {
                        bVar26 = CARRY8(uVar17,(ulonglong)local_328);
                        local_328 = (byte *******)(uVar17 + (longlong)local_328);
                        if (bVar26) {
                          local_328 = (byte *******)0xffffffffffffffff;
                        }
                        uVar27 = extraout_XMM0_Da_12;
                        if (local_198 != (byte *******)0x0) {
                          uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_12,1);
                        }
                        local_340 = (byte *******)0x1;
                      }
                      if (local_298 != (byte *******)0x0) {
                        uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                      }
                    }
                  }
                  if (local_108 != 0) {
                    uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  if (local_160 != (byte *******)0x0) {
                    uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  LOCK();
                  *local_318 = (byte ******)((longlong)*local_318 + -1);
                  UNLOCK();
                  if (*local_318 == (byte ******)0x0) {
                    uVar27 = (*(code *)PTR_drop_slow_007997d0)();
                  }
                  *(undefined1 *)uStack_310 = 0;
                  if (local_308 != (byte *******)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                  pppppppbVar23 = pppppppbVar23 + 5;
                } while (pppppppbVar23 != pppppppbVar16);
              }
LAB_004ab916:
              <alloc[12e961f32105355]::vec::into_iter::IntoIter<std[6c98fd8553dbae28]::fs::DirEntry>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
              ::drop(&local_1c8);
              if (local_d0 == '\x02') {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::ReadDir,core[c0acaeba6ab4c2e0]::io::error::Error>>
                          (&local_d8);
              }
            }
            uVar19 = local_128;
          }
          lVar18 = local_2a0;
          pppppppbVar16 = local_328;
          local_388 = local_328;
          (*(code *)PTR__join_00799210)("conversation_summaries.db",uVar19,0x19);
          pppppppbVar23 = local_308;
          pppppppbVar24 = uStack_310;
          bVar12 = (*(code *)PTR_is_file_00799348)();
          if ((bVar12 & lVar18 != 0) == 0) {
            uVar8 = 0;
            uVar27 = extraout_XMM0_Da_13;
          }
          else {
            (*(code *)PTR__join_00799210)("conversation_summaries.db",local_1d0,0x19);
            auVar28 = craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
                                (pppppppbVar24,pppppppbVar23,pppppppbStack_290,local_288,0);
            uVar17 = auVar28._8_8_;
            uVar27 = extraout_XMM0_Da_14;
            if (auVar28._0_8_ == 1) {
              if ((1 < (auVar28._8_4_ & 3) - 2) && ((uVar17 & 3) != 0)) {
                pppppppbStack_370 = (byte *******)(uVar17 - 1);
                local_378 = (byte *******)CONCAT71(local_378._1_7_,3);
                uVar27 = (*(code *)PTR_drop_00799040)();
              }
              uVar22 = 0;
              uVar8 = 0;
            }
            else {
              local_388 = (byte *******)0xffffffffffffffff;
              if (!CARRY8((ulonglong)pppppppbVar16,uVar17)) {
                local_388 = (byte *******)((longlong)pppppppbVar16 + uVar17);
              }
              lVar18 = lVar18 + -1;
              uVar22 = 1;
              uVar8 = 1;
            }
            if (local_298 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              uVar8 = uVar22;
            }
          }
          if (local_318 != (byte *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          (*(code *)PTR__join_00799210)("conve",uVar19,0x1d);
          pppppppbVar24 = local_308;
          pppppppbVar16 = uStack_310;
          bVar12 = (*(code *)PTR_is_file_00799348)();
          uVar27 = extraout_XMM0_Da_15;
          if ((bVar12 & lVar18 != 0) == 1) {
            (*(code *)PTR__join_00799210)("conve",local_1d0,0x1d);
            auVar28 = craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
                                (pppppppbVar16,pppppppbVar24,pppppppbStack_290,local_288,0);
            uVar17 = auVar28._8_8_;
            uVar27 = extraout_XMM0_Da_16;
            if ((auVar28._0_8_ & 1) == 0) {
              bVar26 = CARRY8((ulonglong)local_388,uVar17);
              pppppppbVar16 = (byte *******)((longlong)local_388 + uVar17);
              local_388 = (byte *******)0xffffffffffffffff;
              if (!bVar26) {
                local_388 = pppppppbVar16;
              }
              lVar18 = lVar18 + -1;
              uVar8 = 1;
            }
            else if ((1 < (auVar28._8_4_ & 3) - 2) && ((uVar17 & 3) != 0)) {
              pppppppbStack_370 = (byte *******)(uVar17 - 1);
              local_378 = (byte *******)CONCAT71(local_378._1_7_,3);
              uVar27 = (*(code *)PTR_drop_00799040)();
            }
            if (local_298 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
          }
          if (local_318 != (byte *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          (*(code *)PTR__join_00799210)("conversation_summaries.db-shm",uVar19,0x1d);
          pppppppbVar24 = local_308;
          pppppppbVar16 = uStack_310;
          bVar12 = (*(code *)PTR_is_file_00799348)();
          uVar27 = extraout_XMM0_Da_17;
          if ((bVar12 & lVar18 != 0) == 1) {
            (*(code *)PTR__join_00799210)("conversation_summaries.db-shm",local_1d0,0x1d);
            auVar28 = craggemini_core[66f3c71560d70857]::pool::transfer_cut_file
                                (pppppppbVar16,pppppppbVar24,pppppppbStack_290,local_288,0);
            uVar17 = auVar28._8_8_;
            uVar27 = extraout_XMM0_Da_18;
            if ((auVar28._0_8_ & 1) == 0) {
              bVar26 = CARRY8((ulonglong)local_388,uVar17);
              pppppppbVar16 = (byte *******)((longlong)local_388 + uVar17);
              local_388 = (byte *******)0xffffffffffffffff;
              if (!bVar26) {
                local_388 = pppppppbVar16;
              }
              lVar18 = lVar18 + -1;
              uVar8 = 1;
            }
            else if ((1 < (auVar28._8_4_ & 3) - 2) && ((uVar17 & 3) != 0)) {
              pppppppbStack_370 = (byte *******)(uVar17 - 1);
              local_378 = (byte *******)CONCAT71(local_378._1_7_,3);
              uVar27 = (*(code *)PTR_drop_00799040)();
            }
            if (local_298 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
          }
          if (local_318 != (byte *******)0x0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          local_328 = local_388;
          local_2a0 = lVar18;
          if (((ulonglong)local_340 & 1) != 0) {
            local_320 = local_c0;
            uVar27 = (*(code *)PTR__join_00799210)(local_338._0_8_,local_b8,local_338._8_8_);
            (*(code *)PTR_metadata_00799308)(uVar27,local_368);
            pppppppbVar16 = local_298;
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
            <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::Metadata,core[c0acaeba6ab4c2e0]::io::error::Error>>
                      (local_298,pppppppbStack_290);
            if ((int)pppppppbVar16 != 2) {
              (*(code *)PTR_new_v4_00799350)();
              local_1c8 = local_298;
              pppppppbStack_1c0 = pppppppbStack_290;
              <uuid[ef5bff2cf415df3d]::fmt::Simple_as_alloc[12e961f32105355]::string::SpecToString>
              ::spec_to_string(&local_318,&local_1c8);
              if (&DAT_00000008 < local_308) {
                if (-0x41 < *(char *)(uStack_310 + 1)) goto LAB_004abe3c;
              }
              else if (local_308 == (byte *******)&DAT_00000008) {
LAB_004abe3c:
                local_198 = uStack_310;
                local_190 = 8;
                local_298 = (byte *******)local_338;
                pppppppbStack_290 =
                     (byte *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                local_288 = (byte *******)&local_198;
                pppppppbStack_280 =
                     (byte *******)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
                uVar27 = (*(code *)PTR_format_inner_00799048)(local_288,&local_298);
                if (local_318 != (byte *******)0x0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
                <std[6c98fd8553dbae28]::path::Path>::join::<std[6c98fd8553dbae28]::path::PathBuf>
                          (&local_298,local_320,local_b8,local_48);
                pppppppbVar16 = local_288;
                lVar18 = (*(code *)PTR_rename_00799778)(local_288);
                if (lVar18 == 0) {
                  local_390 = local_298;
                }
                else {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                            (lVar18,local_368);
                  uVar19 = (*(code *)PTR_remove_dir_all_00799038)();
                  uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                           <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                     (uVar19,local_368);
                  local_390 = (byte *******)0xffffffffffffffff;
                  if (local_298 != (byte *******)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                  }
                }
                goto LAB_004abf5d;
              }
              (*(code *)PTR_slice_error_fail_00799408)
                        (8,0,&
                             PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_0078bdf0
                        );
              goto LAB_004ac51e;
            }
            local_390 = (byte *******)0xffffffffffffffff;
            pppppppbVar16 = local_b8;
LAB_004abf5d:
            lVar18 = (*(code *)PTR_rename_00799778)(local_368,pppppppbStack_370);
            uVar19 = local_168;
            if (lVar18 != 0) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::
              <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                        (lVar18,local_1d0);
              uVar19 = (*(code *)PTR_remove_dir_all_00799038)();
              uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                 (uVar19,local_1d0);
              if (local_390 != (byte *******)0xffffffffffffffff) {
                uVar19 = (*(code *)PTR_rename_00799778)(local_368,pppppppbStack_370);
                uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                   (uVar19,pppppppbVar16);
                if (local_390 != (byte *******)0x0) {
                  uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
                }
              }
              if (local_378 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              goto LAB_004ac00f;
            }
            if (local_390 != (byte *******)0xffffffffffffffff) {
              uVar20 = (*(code *)PTR_remove_dir_all_00799038)();
              uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                                 (uVar20,pppppppbVar16);
              if (local_390 != (byte *******)0x0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
            }
            craggemini_core[66f3c71560d70857]::pool::prune_account_cuts
                      (uVar19,local_148,local_338._0_8_,local_338._8_8_);
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_298,pppppppbVar25,0,1,1);
            pppppppbVar24 = pppppppbStack_290;
            if ((int)local_298 == 1) {
              (*(code *)PTR_handle_error_00798ff0)();
LAB_004ac51e:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            local_170 = local_288;
            (*(code *)PTR_memcpy_00799008)(uVar27,pppppppbVar25);
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_298,pppppppbVar25,0,1,1);
            pppppppbVar23 = local_288;
            local_180 = pppppppbStack_290;
            if ((char)local_298 != '\0') {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_004ac51e;
            }
            (*(code *)PTR_memcpy_00799008)(uVar27,pppppppbVar25);
            pppppppbVar16 = local_a8;
            uVar27 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_298,local_a8,0,1,1);
            pppppppbVar4 = local_288;
            pppppppbVar1 = pppppppbStack_290;
            if ((char)local_298 != '\0') {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_004ac51e;
            }
            if (pppppppbVar16 != (byte *******)0x0) {
              (*(code *)PTR_memcpy_00799008)(uVar27,pppppppbVar16);
            }
            uVar17 = craggemini_core[66f3c71560d70857]::pool::now_epoch_ms();
            uVar27 = extraout_XMM0_Da_19;
            if (local_378 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da_19,1);
            }
            if (local_80 != 0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            if (local_98 != 0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            if (local_1e0 != 0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            if (local_c8 != 0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            if (local_f0 != 0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            if (local_138 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            pppppppbVar16 = local_178;
            local_318 = pppppppbVar24;
            uStack_310 = local_170;
            pppppppbStack_300 = local_180;
            pppppppbStack_2f8 = pppppppbVar23;
            local_2e8 = pppppppbVar1;
            pppppppbStack_2e0 = pppppppbVar4;
            local_2d8 = local_a8;
            lStack_2d0 = local_b0;
            pppppppbStack_2c0 = local_388;
            local_2b8 = (byte *******)CONCAT71(local_2b8._1_7_,uVar8);
            LOCK();
            iVar14 = *local_2a8;
            if (iVar14 == 0) {
              *local_2a8 = 1;
            }
            UNLOCK();
            local_308 = pppppppbVar25;
            pppppppbStack_2f0 = pppppppbVar25;
            local_2c8 = uVar17;
            if (iVar14 != 0) {
              (*(code *)PTR_lock_contended_00798fe0)();
            }
            if ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) == 0) {
              bVar12 = 0;
              cVar11 = (char)local_2a8[1];
              if (cVar11 != '\0') goto LAB_004ac42f;
LAB_004ac554:
              piVar9 = local_2a8;
              local_238 = local_2b8;
              local_248 = local_2c8;
              pppppppbStack_240 = pppppppbStack_2c0;
              local_258 = local_2d8;
              lStack_250 = lStack_2d0;
              local_268 = local_2e8;
              pppppppbStack_260 = pppppppbStack_2e0;
              local_278 = pppppppbStack_2f8;
              pppppppbStack_270 = pppppppbStack_2f0;
              local_288 = local_308;
              pppppppbStack_280 = pppppppbStack_300;
              local_298 = local_318;
              pppppppbStack_290 = uStack_310;
              <craggemini_core[66f3c71560d70857]::resume::SessionStore>::record_resume_cut
                        (local_2a8 + 2,local_68,local_a0,&local_298);
              local_288 = *(byte ********)(piVar9 + 0x18);
              local_298 = *(byte ********)(piVar9 + 0x14);
              pppppppbStack_290 = *(byte ********)(piVar9 + 0x16);
              piVar9[0x14] = 0;
              piVar9[0x15] = 0;
              piVar9[0x16] = 8;
              piVar9[0x17] = 0;
              piVar9[0x18] = 0;
              piVar9[0x19] = 0;
              if ((bVar12 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                if (cVar13 == '\0') {
                  *(undefined1 *)(local_2a8 + 1) = 1;
                }
              }
              uVar19 = local_168;
              LOCK();
              iVar14 = *local_2a8;
              *local_2a8 = 0;
              UNLOCK();
              if (iVar14 == 2) {
                (*(code *)PTR_wake_00799010)();
              }
            }
            else {
              bVar12 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
              bVar12 = bVar12 ^ 1;
              cVar11 = (char)local_2a8[1];
              if (cVar11 == '\0') goto LAB_004ac554;
LAB_004ac42f:
              if ((bVar12 == 0) &&
                 ((*(ulonglong *)PTR_GLOBAL_PANIC_COUNT_00798fd8 & 0x7fffffffffffffff) != 0)) {
                cVar13 = (*(code *)PTR_is_zero_slow_path_00798fe8)();
                if (cVar13 == '\0') {
                  *(undefined1 *)(local_2a8 + 1) = 1;
                }
              }
              uVar19 = local_168;
              LOCK();
              iVar14 = *local_2a8;
              *local_2a8 = 0;
              UNLOCK();
              if (iVar14 == 2) {
                (*(code *)PTR_wake_00799010)();
              }
              local_298 = (byte *******)0x0;
              pppppppbStack_290 = (byte *******)&DAT_00000008;
              local_288 = (byte *******)0x0;
            }
            pppppppbVar24 = local_288;
            pppppppbVar25 = pppppppbStack_290;
            uVar27 = craggemini_core[66f3c71560d70857]::pool::reclaim_cut_dirs
                               (uVar19,local_148,pppppppbStack_290,local_288);
            puVar10 = PTR___rust_dealloc_00798fc8;
            if (pppppppbVar24 != (byte *******)0x0) {
              pppppppbVar25 = pppppppbVar25 + 7;
              do {
                if (pppppppbVar25[-7] != (byte ******)0x0) {
                  uVar27 = (*(code *)puVar10)(uVar27,1);
                }
                if (pppppppbVar25[-4] != (byte ******)0x0) {
                  uVar27 = (*(code *)puVar10)(uVar27,1);
                }
                if (pppppppbVar25[-1] != (byte ******)0x0) {
                  uVar27 = (*(code *)puVar10)(uVar27,1);
                }
                pppppppbVar25 = pppppppbVar25 + 0xd;
                pppppppbVar24 = (byte *******)((longlong)pppppppbVar24 + -1);
              } while (pppppppbVar24 != (byte *******)0x0);
            }
            if (local_298 != (byte *******)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,8);
            }
            if (cVar11 != '\0') {
              if (local_318 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              if (pppppppbStack_300 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
              if (local_2e8 != (byte *******)0x0) {
                uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
              }
            }
            goto LAB_004ac0d2;
          }
          uVar19 = (*(code *)PTR_remove_dir_all_00799038)();
          uVar27 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <core[c0acaeba6ab4c2e0]::result::Result<(),core[c0acaeba6ab4c2e0]::io::error::Error>>
                             (uVar19,local_1d0);
LAB_004ac00f:
          if (local_80 != 0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          if (local_98 != 0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
        }
        else {
          uVar27 = extraout_XMM0_Da_02;
          if ((1 < ((uint)uVar17 & 3) - 2) && ((uVar17 & 3) != 0)) {
            pppppppbStack_290 = (byte *******)(uVar17 - 1);
            local_298 = (byte *******)CONCAT71(local_298._1_7_,3);
            uVar27 = (*(code *)PTR_drop_00799040)();
          }
        }
        if (local_1e0 != 0) {
          uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
        }
      }
      else {
        uVar27 = extraout_XMM0_Da_01;
        if ((1 < ((uint)uVar17 & 3) - 2) && ((uVar17 & 3) != 0)) {
          pppppppbStack_290 = (byte *******)(uVar17 - 1);
          local_298 = (byte *******)CONCAT71(local_298._1_7_,3);
          uVar27 = (*(code *)PTR_drop_00799040)();
        }
      }
      if (local_c8 != 0) {
        uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
      }
    }
    if (local_f0 != 0) {
      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
    }
    if (local_138 != 0) {
      uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
    }
  }
LAB_004ac0ca:
  pppppppbVar16 = local_178;
LAB_004ac0d2:
  if (pppppppbVar16 != (byte *******)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
  }
  return;
}


