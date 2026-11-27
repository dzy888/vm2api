// 004f8fb0 parse_model_spec

/* WARNING: Switch with 1 destination removed at 0x004f95c3 */
/* craggemini_core[66f3c71560d70857]::models::parse_model_spec */

void __rustcall
craggemini_core[66f3c71560d70857]::models::parse_model_spec
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  char *pcVar7;
  char cVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  bool bVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  byte *pbVar19;
  undefined **ppuVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  char *pcVar23;
  char *pcVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined1 auVar30 [16];
  longlong local_b0;
  undefined8 local_90;
  undefined1 local_78 [16];
  char *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  char local_48 [8];
  undefined1 *local_40;
  
  auVar30 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  puVar14 = auVar30._8_8_;
  auVar30._0_8_ = auVar30._0_8_;
  pbVar19 = auVar30._0_8_;
  cVar8 = valid_requested_model_syntax();
  if (cVar8 == '\0') goto LAB_004f9368;
  if (&DAT_00000006 < puVar14) {
    pbVar9 = auVar30._0_8_ + 7;
    if ((*(int *)(auVar30._0_8_ + 3) != 0x2f736c65 || *(int *)auVar30._0_8_ != 0x65646f6d) &&
       (*(int *)(auVar30._0_8_ + 3) != 0x2f534c45 || *(int *)auVar30._0_8_ != 0x45444f4d)) {
      pbVar9 = (byte *)0x0;
    }
  }
  else {
    pbVar9 = (byte *)0x0;
  }
  auVar4._8_8_ = puVar14 + -7;
  auVar4._0_8_ = pbVar9;
  if (pbVar9 == (byte *)0x0) {
    auVar4 = auVar30;
  }
  pbVar13 = auVar4._8_8_;
  auVar30._0_8_ = auVar4._0_8_;
  if ((byte *)0x3 < pbVar13) {
    pbVar12 = pbVar13 + -4;
    uVar29 = extraout_XMM0_Da;
    if (pbVar12 == (byte *)0x0) {
LAB_004f9069:
      bVar1 = *auVar30._0_8_;
    }
    else {
      bVar1 = auVar30._0_8_[(longlong)pbVar12];
      if ((char)bVar1 < -0x40) {
        pbVar9 = (byte *)(*(code *)PTR_slice_error_fail_00799408)
                                   (pbVar13,pbVar12,&PTR_s_src_models_rs_0078cbb8);
        pbVar12 = pbVar13;
        pbVar19 = auVar30._0_8_;
        uVar29 = extraout_XMM0_Da_00;
        goto LAB_004f9069;
      }
    }
    if ((((byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) != 0x5b) ||
        (iVar18 = (auVar30._0_8_ + 1)[(longlong)pbVar12] - 0x41,
        bVar17 = ((byte)iVar18 < 0x1a) << 5 | (auVar30._0_8_ + 1)[(longlong)pbVar12],
        pbVar19 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar18 >> 8),bVar17), bVar17 != 0x31)) ||
       (iVar18 = (auVar30._0_8_ + 2)[(longlong)pbVar12] - 0x41,
       bVar17 = ((byte)iVar18 < 0x1a) << 5 | (auVar30._0_8_ + 2)[(longlong)pbVar12],
       pbVar19 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar18 >> 8),bVar17), bVar17 != 0x6d))
    goto LAB_004f9102;
    bVar17 = ((byte)((auVar30._0_8_ + 3)[(longlong)pbVar12] + 0xbf) < 0x1a) << 5 |
             (auVar30._0_8_ + 3)[(longlong)pbVar12];
    pbVar19 = (byte *)0x0;
    pbVar13 = auVar30._0_8_;
    if (bVar17 != 0x5d) {
      pbVar13 = pbVar19;
    }
    if (pbVar12 == (byte *)0x0) goto LAB_004f9104;
    if (bVar17 != 0x5d) goto LAB_004f9104;
    if (-0x41 < (char)bVar1) {
      pbVar13 = auVar30._0_8_;
      pbVar19 = pbVar12;
      goto LAB_004f9104;
    }
    (*(code *)PTR_slice_error_fail_00799408)(uVar29,0,&PTR_s_src_models_rs_0078cbd0);
    goto LAB_004f935d;
  }
LAB_004f9102:
  pbVar13 = (byte *)0x0;
LAB_004f9104:
  auVar30._8_8_ = pbVar19;
  auVar30._0_8_ = pbVar13;
  local_78 = auVar4;
  if (pbVar13 != (byte *)0x0) {
    local_78 = auVar30;
  }
  puVar22 = local_78._8_8_;
  pbVar19 = local_78._0_8_;
  bVar15 = pbVar9 != (byte *)0x0 || pbVar13 != (byte *)0x0;
  local_68 = (char *)0x0;
  local_50 = 1;
  local_58 = 0x2800000028;
  local_60 = puVar22;
  uVar29 = <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
           ::next_match(local_48,local_78);
  if (local_48[0] != '\0') {
    if (((puVar22 == (undefined1 *)0x0) || (local_40 == (undefined1 *)0x0)) ||
       ((pbVar19 + -1)[(longlong)puVar22] != 0x29)) goto LAB_004f9368;
    puVar11 = local_40 + 1;
    puVar14 = puVar22 + -1;
    ppuVar20 = &PTR_s_src_models_rs_0078c8d8;
    uVar16 = (longlong)puVar14 - (longlong)puVar11;
    if ((puVar11 <= puVar14) &&
       ((puVar11 == (undefined1 *)0x0 || (-0x41 < (char)pbVar19[(longlong)puVar11])))) {
      if (uVar16 < 0x10) {
        if (puVar14 != puVar11) {
          puVar14 = local_40;
          do {
            if ((pbVar19 + 1)[(longlong)puVar14] == 0x28) goto LAB_004f9368;
            puVar14 = puVar14 + 1;
          } while (puVar22 + -2 != puVar14);
          puVar14 = local_40;
          do {
            if ((pbVar19 + 1)[(longlong)puVar14] == 0x29) goto LAB_004f9368;
            puVar14 = puVar14 + 1;
          } while (puVar22 + -2 != puVar14);
        }
      }
      else {
        lVar10 = (*(code *)PTR_memchr_aligned_00799490)
                           (puVar14,uVar16,&PTR_s_src_models_rs_0078c8d8);
        if (lVar10 == 1) goto LAB_004f9368;
        lVar10 = (*(code *)PTR_memchr_aligned_00799490)(extraout_XMM0_Da_04,uVar16);
        if (lVar10 == 1) goto LAB_004f9368;
      }
      auVar30 = normalize_effort_token(pbVar19 + (longlong)puVar11,uVar16);
      lVar10 = auVar30._8_8_;
      if (auVar30._0_8_ == 0) goto LAB_004f9368;
      if (lVar10 < 0) goto LAB_004f935d;
      if (lVar10 == 0) {
        puVar14 = (undefined1 *)0x1;
        uVar29 = extraout_XMM0_Da_05;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar14 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar14 == (undefined1 *)0x0) goto LAB_004f935d;
        uVar29 = extraout_XMM0_Da_06;
      }
      uVar29 = (*(code *)PTR_memcpy_00799008)(uVar29,lVar10);
      ppuVar20 = &PTR_s_src_models_rs_0078c8f0;
      if (local_40 < puVar22) {
        if (-0x41 < (char)pbVar19[(longlong)local_40]) goto LAB_004f93f4;
      }
      else if (local_40 == puVar22) {
LAB_004f93f4:
        if (local_40 == (undefined1 *)0x0) {
          *param_1 = 0xffffffffffffffff;
          goto LAB_004f95a1;
        }
        bVar15 = true;
        bVar1 = *pbVar19;
        local_b0 = lVar10;
        puVar22 = local_40;
        goto joined_r0x004f940f;
      }
      puVar11 = (undefined1 *)0x0;
      puVar14 = local_40;
    }
    (*(code *)PTR_slice_error_fail_00799408)(puVar14,puVar11,ppuVar20);
    goto LAB_004f97ef;
  }
  if (&DAT_0000000f < puVar22) {
    lVar10 = (*(code *)PTR_memchr_aligned_00799490)(uVar29,puVar22);
    if (lVar10 == 1) {
LAB_004f9368:
      *param_1 = 0xffffffffffffffff;
      return;
    }
    lVar10 = (*(code *)PTR_memchr_aligned_00799490)(extraout_XMM0_Da_01,puVar22);
    if (lVar10 == 1) goto LAB_004f9368;
    lVar10 = (*(code *)PTR_memchr_aligned_00799490)(extraout_XMM0_Da_02,puVar22);
    uVar29 = extraout_XMM0_Da_03;
    if (lVar10 == 1) goto LAB_004f9368;
  }
  else {
    if (puVar22 == (undefined1 *)0x0) goto LAB_004f9368;
    puVar11 = (undefined1 *)0x0;
    do {
      if (pbVar19[(longlong)puVar11] == 0x29) goto LAB_004f9368;
      puVar11 = puVar11 + 1;
    } while (puVar22 != puVar11);
    puVar11 = (undefined1 *)0x0;
    do {
      if (pbVar19[(longlong)puVar11] == 0x5b) goto LAB_004f9368;
      puVar11 = puVar11 + 1;
    } while (puVar22 != puVar11);
    puVar11 = (undefined1 *)0x0;
    do {
      if (pbVar19[(longlong)puVar11] == 0x5d) goto LAB_004f9368;
      puVar11 = puVar11 + 1;
    } while (puVar22 != puVar11);
  }
  lVar10 = -1;
  bVar1 = *pbVar19;
joined_r0x004f940f:
  if ((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) {
LAB_004f9419:
    *param_1 = 0xffffffffffffffff;
    if (lVar10 == -1) {
      return;
    }
LAB_004f95a1:
    if (lVar10 == 0) {
      return;
    }
    (*(code *)PTR_free_0079adc8)(uVar29,1);
    return;
  }
  auVar5._8_8_ = puVar22;
  auVar5._0_8_ = pbVar19;
  puVar11 = (undefined1 *)0x0;
  do {
    bVar1 = pbVar19[(longlong)puVar11];
    if (((9 < (byte)(bVar1 - 0x30)) && (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))) &&
       ((0x32 < bVar1 - 0x2d || ((0x4000000000003U >> ((ulonglong)(bVar1 - 0x2d) & 0x3f) & 1) == 0))
       )) goto LAB_004f9419;
    puVar11 = puVar11 + 1;
  } while (puVar22 != puVar11);
  auVar30 = strip_case_insensitive_suffix(pbVar19,puVar22,"-latest",7);
  bVar25 = auVar30._0_8_ != 0;
  bVar26 = auVar30._8_8_ != 0;
  if (bVar26 && bVar25) {
    auVar5 = auVar30;
  }
  auVar30 = strip_case_insensitive_suffix(auVar5._0_8_,auVar5._8_8_,"-thinking",9);
  bVar27 = auVar30._0_8_ != 0;
  bVar28 = auVar30._8_8_ != 0;
  if (bVar28 && bVar27) {
    auVar5 = auVar30;
  }
  uVar21 = auVar5._8_8_;
  uVar3 = auVar5._0_8_;
  uVar29 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in(local_78,uVar21,0,1,1);
  pcVar7 = local_68;
  uVar6 = local_78._8_8_;
  if (local_78._0_4_ == 1) {
LAB_004f935d:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004f97ef;
  }
  (*(code *)PTR_memcpy_00799008)(uVar29,uVar21);
  auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-extra-high",0xb);
  pcVar24 = (char *)0x5;
  pcVar23 = "xhigh";
  if (auVar30._0_8_ == 0) {
LAB_004f9565:
    auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-minimal",8);
    if ((auVar30._0_8_ == 0) || (auVar30._8_8_ == 0)) {
      auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-medium",7);
      if ((auVar30._0_8_ == 0) || (auVar30._8_8_ == 0)) {
        auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-xhigh",6);
        if (auVar30._0_8_ != 0) {
          if (auVar30._8_8_ != 0) goto LAB_004f9607;
        }
        auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-high",5);
        if ((auVar30._0_8_ == 0) || (auVar30._8_8_ == 0)) {
          auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,"-low",4);
          if ((auVar30._0_8_ == 0) || (auVar30._8_8_ == 0)) {
            auVar30 = strip_case_insensitive_suffix(uVar3,uVar21,&DAT_0018e0ac,4);
            local_90 = 0xffffffffffffffff;
            if ((auVar30._0_8_ == 0) || (auVar30._8_8_ == 0)) goto LAB_004f9652;
            pcVar24 = (char *)0x5;
          }
          else {
            pcVar24 = (char *)0x3;
          }
        }
        else {
          pcVar24 = (char *)0x4;
        }
      }
      else {
        pcVar24 = (char *)0x6;
      }
    }
    else {
      pcVar24 = (char *)0x7;
    }
  }
  else if (auVar30._8_8_ == 0) goto LAB_004f9565;
LAB_004f9607:
  auVar5 = auVar30;
  pcVar23 = pcVar24;
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in(local_78,pcVar23,0,1,1);
  pcVar24 = local_68;
  local_90 = local_78._8_8_;
  if (local_78._0_4_ == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
LAB_004f97ef:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  (*(code *)PTR_memcpy_00799008)();
LAB_004f9652:
  normalize_known_base_alias(local_78,auVar5._0_8_,auVar5._8_8_);
  param_1[5] = local_68;
  *(undefined1 (*) [16])(param_1 + 3) = local_78;
  *param_1 = uVar6;
  param_1[1] = pcVar7;
  param_1[2] = uVar21;
  param_1[6] = local_90;
  param_1[7] = pcVar24;
  param_1[8] = pcVar23;
  param_1[9] = lVar10;
  param_1[10] = puVar14;
  param_1[0xb] = local_b0;
  *(char *)(param_1 + 0xc) = bVar15 | (bVar26 && bVar25) | (bVar28 && bVar27);
  return;
}


