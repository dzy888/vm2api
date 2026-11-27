// 00522200 create_record

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::create_record */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::create_record
          (longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
          undefined8 **param_5,longlong param_6,undefined8 **param_7)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined8 **ppuVar12;
  undefined8 **ppuVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  char *pcVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  longlong in_FS_OFFSET;
  bool bVar28;
  undefined8 uVar29;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined8 extraout_XMM0_Qb_23;
  undefined8 extraout_XMM0_Qb_24;
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined8 extraout_XMM0_Qb_27;
  undefined8 extraout_XMM0_Qb_28;
  undefined8 extraout_XMM0_Qb_29;
  undefined8 extraout_XMM0_Qb_30;
  longlong local_848;
  longlong lStack_840;
  longlong lStack_838;
  undefined8 **local_830;
  longlong lStack_828;
  undefined8 **local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  longlong local_800;
  longlong *local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 *local_7a8;
  undefined8 **ppuStack_7a0;
  longlong local_798;
  longlong local_790;
  longlong local_778;
  longlong local_760;
  longlong local_748;
  longlong local_730;
  longlong local_718;
  longlong local_710;
  longlong local_708;
  longlong local_700;
  longlong local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  ulonglong local_6d0;
  longlong local_6c8;
  ulonglong local_6c0;
  ulonglong local_6b8;
  longlong local_6b0;
  longlong local_6a8;
  longlong local_6a0;
  longlong local_698;
  longlong local_680;
  longlong local_668;
  undefined8 *local_650;
  undefined8 uStack_648;
  undefined4 local_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 local_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  longlong local_5e8;
  longlong local_5d0;
  longlong local_5b8;
  longlong local_590;
  undefined1 (*local_578) [16];
  longlong local_570;
  longlong local_560;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 **local_4f8;
  longlong local_4f0;
  undefined8 **local_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 *local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 *local_480;
  undefined8 **ppuStack_478;
  longlong local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [16];
  undefined8 local_448;
  undefined1 local_440 [16];
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 **local_418;
  longlong lStack_410;
  undefined8 **local_408;
  undefined8 local_400;
  undefined8 local_3e8;
  undefined8 local_3d0;
  undefined8 local_368;
  undefined8 local_350;
  undefined8 local_310;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 **local_2d0;
  longlong local_2c8;
  undefined1 local_2c0 [16];
  undefined2 local_2b0;
  undefined1 local_2ae;
  undefined8 *local_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  
  local_7f8 = param_1;
  (*(code *)PTR_now_00799478)();
  <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
  to_rfc3339(&local_818,&local_7a8);
  (*(code *)PTR_now_00799478)();
  iVar15 = (int)(uint)local_7a8 >> 0xd;
  iVar10 = iVar15 + -1;
  iVar8 = 0;
  if (iVar15 < 1) {
    iVar8 = (1U - iVar15) / 400 + 1;
    iVar10 = iVar10 + iVar8 * 400;
    iVar8 = iVar8 * -0x23ab1;
  }
  uVar11 = iVar10 * 0x5b5 >> 2;
  ppuVar12 = (undefined8 **)(ulonglong)uVar11;
  lVar9 = ((ulonglong)ppuStack_7a0 & 0xffffffff) / 1000000 +
          ((longlong)
           (int)(((((uint)local_7a8 >> 4 & 0x1ff) + iVar8) - iVar10 / 100) + uVar11 +
                 (iVar10 / 100 >> 2) + -0xaf93b) * 0x15180 + ((ulonglong)local_7a8 >> 0x20)) * 1000;
  lVar14 = 0;
  if (0 < lVar9) {
    lVar14 = lVar9;
  }
  if (*param_3 == -1) {
    (*(code *)PTR_new_v4_00799350)();
    ppuStack_7a0 = (undefined8 **)
                   <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::
                   fmt;
    ppuVar12 = &local_7a8;
    local_7a8 = &local_528;
    (*(code *)PTR_format_inner_00799048)();
  }
  else {
    lStack_840 = param_3[1];
    lStack_838 = param_3[2];
    local_848 = *param_3;
  }
  (*(code *)PTR_clone_00798fd0)();
  if (param_4 == 0) {
    if (*(longlong *)(param_2 + 0x60) == -1) {
      local_830 = (undefined8 **)0xffffffffffffffff;
    }
    else {
      (*(code *)PTR_clone_00798fd0)();
    }
  }
  else {
    if ((longlong)param_5 < 0) {
LAB_0052238a:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005230e2;
    }
    if (param_5 == (undefined8 **)0x0) {
      lStack_828 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lStack_828 = (*(code *)PTR___rust_alloc_00799000)();
      if (lStack_828 == 0) goto LAB_0052238a;
      ppuVar12 = param_5;
      (*(code *)PTR_memcpy_00799008)();
    }
    local_830 = param_5;
    local_820 = param_5;
  }
  (*(code *)PTR_clone_00798fd0)();
  ppuVar13 = param_7;
  if (param_6 == 0) {
    ppuVar13 = (undefined8 **)0x0;
  }
  lVar9 = 1;
  if (-1 < (longlong)ppuVar13) {
    if (ppuVar13 == (undefined8 **)0x0) {
      param_7 = (undefined8 **)0x0;
LAB_0052248f:
      (*(code *)PTR_clone_00798fd0)();
      local_2a8 = (undefined8 *)0x0;
      ppuStack_2a0 = (undefined8 **)0x8;
      local_298 = 0;
      local_7a8 = (undefined8 *)0x0;
      ppuStack_7a0 = (undefined8 **)&DAT_00000008;
      local_798 = 0;
      if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
        local_2d8 = *(longlong *)(in_FS_OFFSET + -0x38);
        ppuVar12 = *(undefined8 ***)(in_FS_OFFSET + -0x30);
      }
      else {
        local_2d8 = (*(code *)PTR_hashmap_random_keys_00799248)();
        *(longlong *)(in_FS_OFFSET + -0x38) = local_2d8;
        *(undefined8 ***)(in_FS_OFFSET + -0x30) = ppuVar12;
        *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
      }
      *(longlong *)(in_FS_OFFSET + -0x38) = local_2d8 + 1;
      local_528 = local_7f0;
      uStack_520 = uStack_7e8;
      local_518 = local_7e0;
      local_418 = local_830;
      lStack_410 = lStack_828;
      local_408 = local_820;
      local_400 = 0xffffffffffffffff;
      local_510 = local_7d8;
      uStack_508 = uStack_7d0;
      local_500 = local_7c8;
      local_3e8 = 0xffffffffffffffff;
      local_4d0 = local_7b0;
      local_4e0 = local_7c0;
      uStack_4d8 = uStack_7b8;
      local_4c8 = local_818;
      local_4c0 = local_810;
      local_4b8 = local_808;
      local_2ae = 0;
      uVar29 = 0;
      local_2c0 = (undefined1  [16])0x0;
      local_4b0 = 0;
      local_4a8 = 1;
      local_4a0 = 0;
      local_498 = local_2a8;
      uStack_490 = ppuStack_2a0;
      local_488 = local_298;
      local_480 = local_7a8;
      ppuStack_478 = ppuStack_7a0;
      local_470 = local_798;
      local_2e8 = _DAT_0078d790;
      uStack_2e0 = _UNK_0078d798;
      local_2f8 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780.
                  _0_4_;
      uStack_2f4 = PTR_anon_48246b2c7bc3818a1cbc30620defa29e_19_llvm_17816610714767121267_0078d780.
                   _4_4_;
      uStack_2f0 = _UNK_0078d788;
      uStack_2ec = _UNK_0078d78c;
      local_468 = 0;
      local_460 = 8;
      local_458 = (undefined1  [16])0x0;
      local_3d0 = 0xffffffffffffffff;
      local_448 = 8;
      local_440 = (undefined1  [16])0x0;
      local_430 = 0;
      local_428 = 8;
      local_420 = 0;
      local_368 = 0xffffffffffffffff;
      local_2b0 = 0;
      local_350 = 0xffffffffffffffff;
      local_310 = 0xffffffffffffffff;
      lVar18 = *(longlong *)(param_2 + 0x40);
      local_4f8 = param_7;
      local_4f0 = lVar9;
      local_4e8 = param_7;
      local_2d0 = ppuVar12;
      local_2c8 = lVar14;
      if (lVar18 == *(longlong *)(param_2 + 0x30)) {
        uVar29 = <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>>
                 ::grow_one(param_2 + 0x30,&local_818);
      }
      auVar30._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar29,0x280);
      auVar30._8_8_ = extraout_XMM0_Qb;
      uVar24 = lVar18 + 1;
      *(ulonglong *)(param_2 + 0x40) = uVar24;
      if (*(ulonglong *)(param_2 + 0xa8) < uVar24) {
        local_800 = param_2 + 0x48;
        do {
          puVar6 = PTR_memcpy_00799008;
          uVar29 = auVar30._0_8_;
          lVar14 = *(longlong *)(param_2 + 0x38);
          lVar18 = uVar24 * 0x280 + lVar14;
          pcVar21 = (char *)(lVar14 + 0x77a);
          uVar16 = uVar24 * 0x280;
          lVar9 = lVar14;
          uVar19 = 0;
          while( true ) {
            uVar16 = uVar16 - 0x280;
            lVar26 = lVar9 + 0x280;
            uVar20 = uVar19 + 1;
            if (1 < (byte)(*(char *)(lVar9 + 0x27a) - 1U)) break;
            pcVar21 = pcVar21 + 0x280;
            lVar9 = lVar26;
            uVar19 = uVar20;
            if (lVar26 == lVar18) goto LAB_00523014;
          }
          if (lVar26 != lVar18) {
            uVar23 = *(ulonglong *)(lVar9 + 0x260);
            if ((lVar18 - lVar26) - 0x280U < 0x280) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0;
              do {
                uVar22 = uVar23;
                if ((byte)(pcVar21[-0x280] - 3U) < 0xfe) {
                  uVar2 = *(ulonglong *)(pcVar21 + -0x29a);
                  if (uVar2 <= uVar23) {
                    uVar22 = uVar2;
                  }
                  if (uVar2 < uVar23) {
                    uVar19 = uVar20;
                  }
                }
                uVar23 = uVar22;
                if ((byte)(*pcVar21 - 3U) < 0xfe) {
                  uVar2 = *(ulonglong *)(pcVar21 + -0x1a);
                  if (uVar2 <= uVar22) {
                    uVar23 = uVar2;
                  }
                  if (uVar2 < uVar22) {
                    uVar19 = uVar20 + 1;
                  }
                }
                uVar20 = uVar20 + 2;
                uVar7 = uVar7 + 2;
                pcVar21 = pcVar21 + 0x500;
              } while ((uVar16 / 0x280 & 0xfffffffffffffffe) != uVar7);
              if (((ulonglong)(lVar18 - lVar26) / 0x280 & 1) == 0) goto LAB_005228c7;
            }
            if (((byte)(*(char *)(lVar9 + 0x4fa + uVar7 * 0x280) - 3U) < 0xfe) &&
               (*(ulonglong *)(lVar26 + uVar7 * 0x280 + 0x260) < uVar23)) {
              uVar19 = uVar20;
            }
          }
LAB_005228c7:
          if (uVar24 <= uVar19) {
LAB_005230cf:
            (*(code *)PTR_assert_failed_00799718)(uVar29,&PTR_s_src_resume_rs_0078d7b8);
            goto LAB_005230e2;
          }
          puVar3 = *(undefined8 **)(lVar14 + uVar19 * 0x280);
          uVar29 = (*(code *)PTR_memcpy_00799008)(uVar29,0x278);
          uVar29 = (*(code *)PTR_memmove_00799258)(uVar29,(~uVar19 + uVar24) * 0x280);
          *(ulonglong *)(param_2 + 0x40) = uVar24 - 1;
          if (puVar3 == (undefined8 *)0xffffffffffffffff) goto LAB_005230cf;
          local_7a8 = puVar3;
          auVar30._0_8_ = (*(code *)puVar6)(uVar29,0x278);
          ppuVar13 = ppuStack_7a0;
          puVar6 = PTR___rust_dealloc_00798fc8;
          auVar30._8_8_ = extraout_XMM0_Qb_00;
          ppuVar12 = *(undefined8 ***)(param_2 + 0x78);
          ppuVar17 = &local_2a8;
          if ((ppuVar12 != (undefined8 **)0xffffffffffffffff) &&
             (*(longlong *)(param_2 + 0x88) == local_798)) {
            iVar10 = (*(code *)PTR_bcmp_00799020)();
            auVar30._8_8_ = extraout_XMM0_Qb_01;
            auVar30._0_8_ = extraout_XMM0_Qa;
            ppuVar17 = ppuVar13;
            if (iVar10 == 0) {
              if (ppuVar12 != (undefined8 **)0x0) {
                auVar30._0_8_ = (*(code *)puVar6)(extraout_XMM0_Qa,1);
                auVar30._8_8_ = extraout_XMM0_Qb_02;
                ppuVar17 = ppuVar12;
              }
              *(undefined8 *)(param_2 + 0x78) = 0xffffffffffffffff;
            }
          }
          if (local_650 != (undefined8 *)0xffffffffffffffff) {
            local_248 = local_5f0;
            local_258 = local_600;
            uStack_250 = uStack_5f8;
            local_268 = local_610;
            uStack_260 = uStack_608;
            local_278 = local_620;
            uStack_274 = uStack_61c;
            uStack_270 = uStack_618;
            uStack_26c = uStack_614;
            local_288 = local_630;
            uStack_284 = uStack_62c;
            uStack_280 = uStack_628;
            uStack_27c = uStack_624;
            local_298 = CONCAT44(uStack_63c,local_640);
            uStack_290 = uStack_638;
            uStack_28c = uStack_634;
            local_2a8 = local_650;
            ppuStack_2a0 = (undefined8 **)uStack_648;
            lVar14 = *(longlong *)(param_2 + 0x58);
            if (lVar14 == *(longlong *)(param_2 + 0x48)) {
              <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::subagents::CustomSubagentDef>>
              ::grow_one(local_800,ppuVar17);
            }
            lVar9 = *(longlong *)(param_2 + 0x50);
            lVar18 = lVar14 * 0x68;
            *(undefined8 *)(lVar9 + 0x60 + lVar18) = local_248;
            puVar1 = (undefined8 *)(lVar9 + 0x50 + lVar18);
            *puVar1 = local_258;
            puVar1[1] = uStack_250;
            puVar1 = (undefined8 *)(lVar9 + 0x40 + lVar18);
            *puVar1 = local_268;
            puVar1[1] = uStack_260;
            auVar30._8_8_ = ppuStack_2a0;
            auVar30._0_8_ = local_2a8;
            puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar18);
            *puVar1 = CONCAT44(uStack_274,local_278);
            puVar1[1] = CONCAT44(uStack_26c,uStack_270);
            puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar18);
            *puVar1 = CONCAT44(uStack_284,local_288);
            puVar1[1] = CONCAT44(uStack_27c,uStack_280);
            puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar18);
            *puVar1 = local_298;
            puVar1[1] = CONCAT44(uStack_28c,uStack_290);
            *(undefined1 (*) [16])(lVar9 + lVar18) = auVar30;
            *(longlong *)(param_2 + 0x58) = lVar14 + 1;
          }
          if (puVar3 != (undefined8 *)0x0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_03;
          }
          if ((local_698 != -1) && (local_698 != 0)) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_04;
          }
          if ((local_680 != -1) && (local_680 != 0)) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_05;
          }
          if (local_790 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_06;
          }
          if (local_778 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_07;
          }
          if ((local_668 != -1) && (local_668 != 0)) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_08;
          }
          if (local_760 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_09;
          }
          if (local_748 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_10;
          }
          if (local_730 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_11;
          }
          if (local_708 != 0) {
            lVar9 = local_710 + 8;
            lVar14 = local_708;
            do {
              if (*(longlong *)(lVar9 + -8) != 0) {
                auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb_12;
              }
              lVar9 = lVar9 + 0x18;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (local_718 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,8);
            auVar30._8_8_ = extraout_XMM0_Qb_13;
          }
          if (local_6f0 != 0) {
            lVar9 = local_6f8 + 8;
            lVar14 = local_6f0;
            do {
              if (*(longlong *)(lVar9 + -8) != 0) {
                auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb_14;
              }
              lVar9 = lVar9 + 0x18;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (local_700 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,8);
            auVar30._8_8_ = extraout_XMM0_Qb_15;
          }
          lVar14 = local_570;
          if (local_570 != 0) {
            if (local_560 != 0) {
              auVar30 = *local_578;
              pauVar25 = local_578 + 1;
              uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar30[0xf] >> 7) << 0xf);
              lVar9 = local_560;
              pauVar27 = local_578;
              do {
                if ((short)uVar11 == 0) {
                  do {
                    auVar30 = *pauVar25;
                    pauVar27 = pauVar27 + -0x20;
                    pauVar25 = pauVar25 + 1;
                    uVar11 = (ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar30[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar11 == 0);
                }
                iVar10 = 0;
                for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  iVar10 = iVar10 + 1;
                }
                if (*(longlong *)((longlong)pauVar27 + (-0x20 - (ulonglong)(uint)(iVar10 << 5))) !=
                    0) {
                  auVar30._0_8_ = (*(code *)puVar6)((ulonglong)(uint)(iVar10 << 5),1);
                  auVar30._8_8_ = extraout_XMM0_Qb_16;
                }
                lVar9 = lVar9 + -1;
                uVar11 = uVar11 - 1 & uVar11;
              } while (lVar9 != 0);
            }
            if (lVar14 * 0x21 != -0x31) {
              auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,0x10);
              auVar30._8_8_ = extraout_XMM0_Qb_17;
            }
          }
          if (local_6d8 != 0) {
            lVar9 = local_6e0 + 0x38;
            lVar14 = local_6d8;
            do {
              if (*(longlong *)(lVar9 + -0x38) != 0) {
                auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb_18;
              }
              if (*(longlong *)(lVar9 + -0x20) != 0) {
                auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb_19;
              }
              if (*(longlong *)(lVar9 + -8) != 0) {
                auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                auVar30._8_8_ = extraout_XMM0_Qb_20;
              }
              lVar9 = lVar9 + 0x48;
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          if (local_6e8 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,8);
            auVar30._8_8_ = extraout_XMM0_Qb_21;
          }
          uVar24 = local_6b8;
          lVar14 = local_6c8;
          if (local_6b8 != 0) {
            uVar16 = local_6d0;
            if (local_6c0 < local_6d0) {
              uVar16 = 0;
            }
            lVar9 = local_6c0 - uVar16;
            uVar19 = local_6d0 - lVar9;
            lVar18 = local_6b8 - uVar19;
            bVar28 = lVar18 != 0;
            if (local_6b8 < uVar19) {
              lVar18 = 0;
            }
            uVar20 = lVar9 + local_6b8;
            if (local_6b8 >= uVar19 && bVar28) {
              uVar20 = local_6d0;
            }
            lVar9 = uVar20 - lVar9;
            if (lVar9 != 0) {
              lVar26 = local_6c8 + local_6c0 * 0x18 + uVar16 * -0x18 + 8;
              do {
                if (*(longlong *)(lVar26 + -8) != 0) {
                  auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                  auVar30._8_8_ = extraout_XMM0_Qb_30;
                }
                lVar26 = lVar26 + 0x18;
                lVar9 = lVar9 + -1;
              } while (lVar9 != 0);
            }
            if (uVar19 < uVar24) {
              lVar14 = lVar14 + 8;
              do {
                if (*(longlong *)(lVar14 + -8) != 0) {
                  auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
                  auVar30._8_8_ = extraout_XMM0_Qb_22;
                }
                lVar14 = lVar14 + 0x18;
                lVar18 = lVar18 + -1;
              } while (lVar18 != 0);
            }
          }
          if (local_6d0 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,8);
            auVar30._8_8_ = extraout_XMM0_Qb_23;
          }
          lVar14 = local_6a8;
          for (lVar9 = local_6a0 + 1; lVar9 != 1; lVar9 = lVar9 + -1) {
            auVar30._0_8_ =
                 core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>(lVar14);
            auVar30._8_8_ = extraout_XMM0_Qb_24;
            lVar14 = lVar14 + 200;
          }
          if (local_6b0 != 0) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,8);
            auVar30._8_8_ = extraout_XMM0_Qb_25;
          }
          if ((local_5e8 != -1) && (local_5e8 != 0)) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_26;
          }
          lVar14 = local_5d0;
          if (local_5d0 != -1) {
            if ((local_5b8 != -1) && (local_5b8 != 0)) {
              auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
              auVar30._8_8_ = extraout_XMM0_Qb_27;
            }
            if (lVar14 != 0) {
              auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
              auVar30._8_8_ = extraout_XMM0_Qb_28;
            }
          }
          if ((local_590 != -1) && (local_590 != 0)) {
            auVar30._0_8_ = (*(code *)puVar6)(auVar30._0_8_,1);
            auVar30._8_8_ = extraout_XMM0_Qb_29;
          }
          uVar24 = *(ulonglong *)(param_2 + 0x40);
        } while (*(ulonglong *)(param_2 + 0xa8) < uVar24);
      }
LAB_00523014:
      (*(code *)PTR_clone_00798fd0)();
      local_298 = local_798;
      local_2a8 = local_7a8;
      ppuStack_2a0 = ppuStack_7a0;
      if ((*(longlong *)(param_2 + 0x78) != -1) && (*(longlong *)(param_2 + 0x78) != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      *(longlong *)(param_2 + 0x88) = local_298;
      *(undefined8 **)(param_2 + 0x78) = local_2a8;
      *(undefined8 ***)(param_2 + 0x80) = ppuStack_2a0;
      local_7f8[2] = lStack_838;
      *local_7f8 = local_848;
      local_7f8[1] = lStack_840;
      return;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 != 0) {
      (*(code *)PTR_memcpy_00799008)();
      ppuVar12 = ppuVar13;
      goto LAB_0052248f;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005230e2:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


