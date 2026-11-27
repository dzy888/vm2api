// 00504ec0 parse_agy_text_error

/* craggemini_core[66f3c71560d70857]::protocol::parse_agy_text_error */

void __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_agy_text_error
          (undefined8 *param_1,longlong param_2,byte *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  byte *pbVar11;
  short sVar12;
  byte *pbVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong extraout_RDX;
  short sVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  undefined **ppuVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 unaff_R12;
  byte *pbVar25;
  undefined8 unaff_R13;
  byte *pbVar26;
  byte *unaff_R14;
  bool bVar27;
  undefined1 auVar28 [16];
  longlong local_e8;
  ulonglong local_e0;
  byte *local_d0;
  int local_b8 [2];
  byte *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  byte *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  byte *local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_58;
  
  auVar28._8_8_ = unaff_R12;
  auVar28._0_8_ = unaff_R13;
  pbVar18 = (byte *)0x0;
LAB_00504ee0:
  do {
    pbVar25 = auVar28._8_8_;
    pbVar26 = auVar28._0_8_;
    if (pbVar18 != (byte *)0x0) {
      if (param_3 <= pbVar18) {
        if (param_3 != pbVar18) goto LAB_00505745;
        goto LAB_00504f06;
      }
      if (-0x41 < (char)pbVar18[param_2]) goto LAB_00504f06;
LAB_00505745:
      ppuVar21 = &PTR_s_src_protocol_rs_0078cc68;
      pbVar13 = unaff_R14;
LAB_00505755:
      (*(code *)PTR_slice_error_fail_00799408)(param_3,pbVar18,ppuVar21);
      goto LAB_00505767;
    }
LAB_00504f06:
    pbVar13 = (byte *)&local_98;
    (*(code *)PTR_new_00799a18)("Error ",(longlong)param_3 - (longlong)pbVar18,6);
    <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_b8,pbVar13);
    if ((char)local_b8[0] == '\0') {
      pbVar26 = (byte *)0x0;
      break;
    }
    pbVar18 = local_b0 + (longlong)(pbVar18 + 6);
    if (pbVar18 != (byte *)0x0) {
      if (pbVar18 < param_3) {
        if ((char)pbVar18[param_2] < -0x40) {
LAB_0050574e:
          ppuVar21 = &PTR_s_src_protocol_rs_0078cc80;
          goto LAB_00505755;
        }
      }
      else if (param_3 != pbVar18) goto LAB_0050574e;
    }
    unaff_R14 = param_3 + -(longlong)pbVar18;
    if (&DAT_0000000d < unaff_R14) {
      pbVar26 = pbVar18 + param_2;
      auVar9._8_8_ = pbVar25;
      auVar9._0_8_ = pbVar26;
      auVar8._8_8_ = pbVar25;
      auVar8._0_8_ = pbVar26;
      auVar7._8_8_ = pbVar25;
      auVar7._0_8_ = pbVar26;
      auVar28._8_8_ = pbVar25;
      auVar28._0_8_ = pbVar26;
      bVar2 = *pbVar26;
      if ((((byte)(bVar2 - 0x30) < 10) &&
          (bVar3 = pbVar26[1], auVar28 = auVar7, (byte)(bVar3 - 0x30) < 10)) &&
         (bVar4 = pbVar26[2], auVar28 = auVar8, (byte)(bVar4 - 0x30) < 10)) {
        if ((char)pbVar26[3] < -0x40) goto LAB_005057b1;
        auVar28 = auVar9;
        if (*(longlong *)(pbVar26 + 6) == 0x203a656761737365 &&
            *(longlong *)(pbVar26 + 3) == 0x67617373654d202c) {
          if ((unaff_R14 != &DAT_0000000e) && ((char)pbVar26[0xe] < -0x40)) goto LAB_005057f9;
          unaff_R14 = unaff_R14 + -0xe;
          pbVar26 = pbVar26 + 0xe;
          auVar28._0_8_ = pbVar26;
          (*(code *)PTR_new_00799a18)(", Status: ",unaff_R14,10);
          <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
          ::next_match(local_b8,&local_98);
          pbVar13 = local_b0;
          if ((char)local_b8[0] != '\0') {
            if (local_b0 != (byte *)0x0) {
              if (local_b0 < unaff_R14) {
                if ((char)pbVar26[(longlong)local_b0] < -0x40) goto LAB_00505814;
              }
              else if (local_b0 != unaff_R14) goto LAB_00505814;
            }
            auVar28 = ::<str>::trim_matches::<<char>::is_whitespace>(pbVar26,local_b0);
            uVar20 = auVar28._8_8_;
            if ((longlong)uVar20 < 0) {
              (*(code *)PTR_handle_error_00798ff0)();
LAB_005056ae:
              (*(code *)PTR_handle_error_00798ff0)();
LAB_005056c1:
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_00505844;
            }
            if (uVar20 == 0) {
              local_e8 = 1;
            }
            else {
              local_a0 = auVar28._0_8_;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_e8 = (*(code *)PTR___rust_alloc_00799000)();
              if (local_e8 == 0) {
                (*(code *)PTR_handle_error_00798ff0)();
LAB_00505860:
                (*(code *)PTR_slice_error_fail_00799408)(uVar20,5,&PTR_s_src_protocol_rs_0078cd70);
                goto LAB_005056c1;
              }
              (*(code *)PTR_memcpy_00799008)();
            }
            pbVar13 = pbVar13 + 10;
            if (pbVar13 < unaff_R14) {
              if ((char)pbVar26[(longlong)pbVar13] < -0x40) goto LAB_00505829;
            }
            else if (unaff_R14 != pbVar13) goto LAB_00505829;
            auVar28 = ::<str>::trim_matches::<<char>::is_whitespace>(pbVar26 + (longlong)pbVar13);
            pbVar11 = auVar28._0_8_;
            auVar10._8_8_ = pbVar25;
            auVar10._0_8_ = 0x100000002400;
            pbVar26 = pbVar11;
            pbVar13 = (byte *)0x0;
            do {
              pbVar19 = pbVar13;
              if (pbVar26 == pbVar11 + (longlong)auVar28._8_8_) {
                pbVar19 = auVar28._8_8_;
                break;
              }
              bVar5 = *pbVar26;
              uVar24 = (uint)bVar5;
              if ((char)bVar5 < '\0') {
                uVar22 = bVar5 & 0x1f;
                if (bVar5 < 0xe0) {
                  pbVar13 = pbVar26 + 2;
                  uVar24 = uVar22 << 6 | pbVar26[1] & 0x3f;
                }
                else {
                  uVar24 = pbVar26[2] & 0x3f | (pbVar26[1] & 0x3f) << 6;
                  if (bVar5 < 0xf0) {
                    pbVar13 = pbVar26 + 3;
                    uVar24 = uVar24 | uVar22 << 0xc;
                  }
                  else {
                    pbVar13 = pbVar26 + 4;
                    uVar24 = pbVar26[3] & 0x3f | uVar24 << 6 | (bVar5 & 7) << 0x12;
                  }
                }
              }
              else {
                pbVar13 = pbVar26 + 1;
              }
              lVar23 = (longlong)pbVar19 - (longlong)pbVar26;
              pbVar26 = pbVar13;
              pbVar13 = pbVar13 + lVar23;
            } while ((0x2c < uVar24) || ((0x100000002400U >> ((ulonglong)uVar24 & 0x3f) & 1) == 0));
            auVar28 = ::<str>::trim_matches::<<char>::is_whitespace>(pbVar11,pbVar19);
            unaff_R14 = auVar28._8_8_;
            local_e0 = uVar20;
            if (unaff_R14 != (byte *)0x0) {
              pbVar26 = (byte *)0x0;
              do {
                if (unaff_R14 == pbVar26) {
                  if ((longlong)unaff_R14 < 0) goto LAB_005056c1;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  local_d0 = (byte *)(*(code *)PTR___rust_alloc_00799000)();
                  if (local_d0 == (byte *)0x0) goto LAB_005056c1;
                  (*(code *)PTR_memcpy_00799008)();
                  if (uVar20 == 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)();
                    goto LAB_00504ee0;
                  }
                  pbVar18 = unaff_R14;
                  goto LAB_005056e0;
                }
                pbVar13 = pbVar26 + auVar28._0_8_;
                pbVar26 = pbVar26 + 1;
              } while (*pbVar13 == 0x5f || 0xe5 < (byte)(*pbVar13 + 0xa5));
            }
            auVar28 = auVar10;
            if (uVar20 != 0) goto LAB_005056d9;
          }
        }
      }
    }
  } while( true );
LAB_00505290:
  if (pbVar26 != (byte *)0x0) {
    if (pbVar26 < param_3) {
      if ((char)pbVar26[param_2] < -0x40) goto LAB_00505767;
    }
    else if (param_3 != pbVar26) goto LAB_00505767;
  }
  pbVar13 = (byte *)&local_98;
  (*(code *)PTR_new_00799a18)(" (code ",(longlong)param_3 - (longlong)pbVar26,7);
  <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_b8,pbVar13);
  if ((char)local_b8[0] == '\0') {
    local_e0 = 0xffffffffffffffff;
    lVar23 = 0x20;
    goto LAB_0050568b;
  }
  pbVar26 = pbVar26 + (longlong)local_b0;
  if (pbVar26 != (byte *)0x0) {
    if (pbVar26 < param_3) {
      if ((char)pbVar26[param_2] < -0x40) goto LAB_00505789;
    }
    else if (pbVar26 != param_3) goto LAB_00505789;
  }
  auVar28 = ::<str>::trim_end_matches::<<char>::is_whitespace>(param_2,pbVar26);
  uVar14 = auVar28._8_8_;
  lVar23 = auVar28._0_8_;
  lVar15 = uVar14 + lVar23;
  do {
    if (lVar23 == lVar15) goto LAB_005053bc;
    uVar24 = (uint)*(char *)(lVar15 + -1);
    if ((int)uVar24 < 0) {
      bVar2 = *(byte *)(lVar15 + -2);
      if ((char)bVar2 < -0x40) {
        bVar3 = *(byte *)(lVar15 + -3);
        if ((char)bVar3 < -0x40) {
          pbVar18 = (byte *)(lVar15 + -4);
          lVar15 = lVar15 + -4;
          uVar22 = bVar3 & 0x3f | (*pbVar18 & 7) << 6;
        }
        else {
          lVar15 = lVar15 + -3;
          uVar22 = bVar3 & 0xf;
        }
        uVar22 = bVar2 & 0x3f | uVar22 << 6;
      }
      else {
        lVar15 = lVar15 + -2;
        uVar22 = bVar2 & 0x1f;
      }
      uVar24 = uVar24 & 0x3f | uVar22 << 6;
    }
    else {
      lVar15 = lVar15 + -1;
    }
  } while (uVar24 == 0x5f || 0xffffffe5 < uVar24 - 0x5b);
  uVar16 = (lVar15 - lVar23) + 1;
  if (uVar16 == 0) {
LAB_005053bc:
    uVar16 = 0;
LAB_005053be:
    if (lVar23 == 0) goto LAB_005057a1;
  }
  else {
    bVar27 = uVar16 == uVar14;
    if (uVar14 <= uVar16) {
      uVar16 = uVar14;
      if (bVar27) goto LAB_005053be;
      goto LAB_005057a1;
    }
    if (*(char *)(lVar23 + uVar16) < -0x40) goto LAB_005057a1;
  }
  pbVar26 = pbVar26 + 7;
  if (pbVar26 != (byte *)0x0) {
    if (pbVar26 < param_3) {
      if ((char)pbVar26[param_2] < -0x40) {
LAB_00505770:
        ppuVar21 = &PTR_s_src_protocol_rs_0078cd40;
        goto LAB_00505777;
      }
    }
    else if (param_3 != pbVar26) goto LAB_00505770;
  }
  uVar20 = (longlong)param_3 - (longlong)pbVar26;
  pbVar13 = pbVar26 + param_2;
  unaff_R14 = (byte *)(uVar14 - uVar16);
  if (unaff_R14 != (byte *)0x0) {
    do {
      if (uVar14 == uVar16) {
        if ((((4 < uVar20) && (bVar2 = *pbVar13, (byte)(bVar2 - 0x30) < 10)) &&
            (bVar3 = pbVar13[1], (byte)(bVar3 - 0x30) < 10)) &&
           (bVar4 = pbVar13[2], (byte)(bVar4 - 0x30) < 10)) {
          if ((char)pbVar13[3] < -0x40) {
            (*(code *)PTR_slice_error_fail_00799408)(uVar20,3,&PTR_s_src_protocol_rs_0078cd58);
            unaff_R14 = pbVar13;
            goto LAB_005057f9;
          }
          if (*(short *)(pbVar13 + 3) == 0x3a29) {
            if ((uVar20 != 5) && ((char)pbVar13[5] < -0x40)) goto LAB_00505860;
            local_90 = (byte *)(uVar20 - 5);
            local_98 = 0;
            local_78 = 0;
            local_68 = 0xa0000000a;
            local_60 = 1;
            local_58 = 0;
            local_88 = pbVar13 + 5;
            local_80 = local_90;
            local_70 = local_90;
            <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
            ::next_match(local_b8,&local_88);
            if (local_b8[0] == 1) {
              lVar23 = local_a8 - local_98;
              pbVar13 = pbVar13 + 5;
joined_r0x005055b0:
              pbVar13 = pbVar13 + local_98;
              if (lVar23 != 0) {
                lVar15 = lVar23;
                if (((pbVar13[lVar23 + -1] != 10) || (lVar15 = lVar23 + -1, lVar15 == 0)) ||
                   (pbVar13[lVar23 + -2] != 0xd)) goto LAB_005055bf;
                lVar23 = lVar23 + -2;
              }
              lVar15 = lVar23;
            }
            else {
              if (local_58._1_1_ == '\0') {
                lVar23 = (longlong)local_90 - local_98;
                pbVar13 = local_88;
                if ((lVar23 != 0 | (byte)local_58) == 1) goto joined_r0x005055b0;
              }
              pbVar13 = (byte *)0x1;
              lVar15 = 0;
            }
LAB_005055bf:
            ::<str>::trim_matches::<<char>::is_whitespace>(pbVar13,lVar15);
            if ((longlong)extraout_RDX < 0) goto LAB_005056ae;
            if (extraout_RDX != 0) {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              local_e8 = (*(code *)PTR___rust_alloc_00799000)();
              if (local_e8 == 0) {
                (*(code *)PTR_handle_error_00798ff0)();
                if (local_e0 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)();
                }
                    /* WARNING: Subroutine does not return */
                _Unwind_Resume();
              }
              (*(code *)PTR_memcpy_00799008)();
              <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                        (&local_98,unaff_R14,0,1,1);
              local_d0 = local_88;
              pbVar18 = local_90;
              if ((byte)local_98 != 0) goto LAB_005057cc;
              sVar12 = (ushort)bVar3 + (ushort)bVar2 * 10;
              sVar17 = (ushort)bVar4 + sVar12 * 10;
              (*(code *)PTR_memcpy_00799008)(sVar12 * 2,unaff_R14);
              local_e0 = extraout_RDX;
              goto LAB_00505707;
            }
          }
        }
        break;
      }
      pcVar1 = (char *)(lVar23 + uVar16);
      uVar16 = uVar16 + 1;
    } while (*pcVar1 == '_' || 0xe5 < (byte)(*pcVar1 + 0xa5U));
  }
  goto LAB_00505290;
LAB_005057f9:
  (*(code *)PTR_slice_error_fail_00799408)(unaff_R14,0xe,&PTR_s_src_protocol_rs_0078ccb0);
LAB_00505814:
  (*(code *)PTR_slice_error_fail_00799408)();
LAB_00505829:
  (*(code *)PTR_slice_error_fail_00799408)(unaff_R14);
  goto LAB_00505844;
LAB_005056d9:
  unaff_R14 = pbVar25;
  pbVar18 = (byte *)0xffffffffffffffff;
LAB_005056e0:
  sVar17 = (ushort)bVar4 + ((ushort)bVar3 + (ushort)bVar2 * 10) * 10;
LAB_00505707:
  *param_1 = pbVar18;
  param_1[1] = local_d0;
  param_1[2] = unaff_R14;
  *(undefined2 *)(param_1 + 3) = 1;
  *(short *)((longlong)param_1 + 0x1a) = sVar17 + -0x14d0;
  param_1[4] = local_e0;
  param_1[5] = local_e8;
  lVar23 = 0x30;
LAB_0050568b:
  *(ulonglong *)((longlong)param_1 + lVar23) = local_e0;
  return;
LAB_00505767:
  ppuVar21 = &PTR_s_src_protocol_rs_0078ccf8;
LAB_00505777:
  (*(code *)PTR_slice_error_fail_00799408)(param_3,pbVar26,ppuVar21);
LAB_00505789:
  (*(code *)PTR_slice_error_fail_00799408)(pbVar26,0,&PTR_s_src_protocol_rs_0078cd10);
LAB_005057a1:
  (*(code *)PTR_slice_error_fail_00799408)();
  unaff_R14 = pbVar13;
LAB_005057b1:
  (*(code *)PTR_slice_error_fail_00799408)(unaff_R14,3,&PTR_s_src_protocol_rs_0078cc98);
LAB_005057cc:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00505844:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}


