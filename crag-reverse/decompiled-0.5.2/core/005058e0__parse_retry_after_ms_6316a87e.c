// 005058e0 parse_retry_after_ms

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::protocol::parse_retry_after_ms */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::protocol::parse_retry_after_ms(longlong param_1)

{
  byte *pbVar1;
  byte bVar2;
  short *psVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  double dVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  undefined4 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint uVar19;
  byte *pbVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  byte *pbVar27;
  byte *pbVar28;
  bool bVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 local_90;
  double local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  
  if (param_1 == 0) {
    return 0;
  }
  auVar31 = ::<str>::trim_matches::<<char>::is_whitespace>();
  puVar17 = auVar31._8_8_;
  lVar21 = auVar31._0_8_;
  if (puVar17 + -0x81 < (undefined1 *)0xffffffffffffff80) {
    return 0;
  }
  (*(code *)PTR_from_str_00799c18)();
  if ((char)local_d0 != '\x01') {
    if (0xffffffffffffe < (longlong)local_c8 - 1U &&
        ((longlong)local_c8 < 0 ||
        0x3fe < (uint)((longlong)ABS((double)local_c8) + 0xfff0000000000000U >> 0x35))) {
      return 0;
    }
    dVar6 = (double)local_c8 * _s__00185460;
LAB_00505cf0:
    (*(code *)PTR_ceil_00799c20)(dVar6);
    return 1;
  }
  dVar6 = 0.0;
  auVar5 = auVar31;
  do {
    pbVar27 = auVar5._8_8_;
    pbVar28 = auVar5._0_8_;
    pbVar12 = (byte *)0x0;
    lVar18 = 0;
    pbVar13 = (byte *)0x0;
    pbVar20 = pbVar28;
    do {
      bVar2 = *pbVar20;
      if ((char)bVar2 < '\0') {
        uVar19 = bVar2 & 0x1f;
        if (bVar2 < 0xe0) {
          pbVar1 = pbVar20 + 2;
          uVar23 = uVar19 << 6 | pbVar20[1] & 0x3f;
        }
        else {
          uVar23 = pbVar20[2] & 0x3f | (pbVar20[1] & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar1 = pbVar20 + 3;
            uVar23 = uVar23 | uVar19 << 0xc;
          }
          else {
            pbVar1 = pbVar20 + 4;
            uVar23 = pbVar20[3] & 0x3f | uVar23 << 6 | (bVar2 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar1 = pbVar20 + 1;
        uVar23 = (uint)bVar2;
      }
      lVar24 = lVar18;
      if ((9 < uVar23 - 0x30) && (lVar24 = 1, uVar23 != 0x2e || lVar18 != 0)) break;
      pbVar12 = pbVar13 + 1;
      lVar18 = lVar24;
      pbVar13 = pbVar1 + ((longlong)pbVar13 - (longlong)pbVar20);
      pbVar20 = pbVar1;
    } while (pbVar1 != pbVar28 + (longlong)pbVar27);
    if (pbVar12 == (byte *)0x0) goto LAB_00505dbe;
    local_88 = dVar6;
    if (pbVar12 < pbVar27) {
      if (-0x41 < (char)pbVar28[(longlong)pbVar12]) goto LAB_00505ac6;
LAB_005065b8:
      (*(code *)PTR_slice_error_fail_00799408)(pbVar12,0,&PTR_s_src_protocol_rs_0078cd88);
LAB_005065d0:
      (*(code *)PTR_slice_error_fail_00799408)(pbVar27,pbVar12,&PTR_s_src_protocol_rs_0078cda0);
      goto LAB_005065e9;
    }
    if (pbVar27 != pbVar12) goto LAB_005065b8;
LAB_00505ac6:
    (*(code *)PTR_from_str_00799c18)(lVar24,pbVar12);
    if (((char)local_d0 != '\0') ||
       (dVar6 = ABS((double)local_c8),
       (uint)((longlong)dVar6 + 0xfff0000000000000U >> 0x35) < 0x3ff && (longlong)local_c8 < 0 ||
       (0x7fefffffffffffff < (ulonglong)dVar6 ||
       (longlong)dVar6 - 1U < 0xfffffffffffff && (longlong)local_c8 < 0))) goto LAB_00505dbe;
    uVar7 = (longlong)pbVar27 - (longlong)pbVar12;
    if (pbVar27 < pbVar12 || uVar7 == 0) {
      if (uVar7 != 0) goto LAB_005065d0;
    }
    else if ((char)pbVar28[(longlong)pbVar12] < -0x40) goto LAB_005065d0;
    pbVar28 = pbVar28 + (longlong)pbVar12;
    if (uVar7 < 2) {
      if (pbVar27 == pbVar12) goto LAB_00505dbe;
LAB_00505b78:
      bVar2 = *pbVar28;
      uVar14 = 1;
      dVar6 = _s__00185220;
      if (((bVar2 != 0x68) && (dVar6 = _s__00185460, bVar2 != 0x73)) &&
         (dVar6 = _DAT_00185130, bVar2 != 0x6d)) goto LAB_00505dbe;
      bVar29 = uVar7 == 1;
      if (1 < uVar7) goto LAB_00505960;
LAB_00505c89:
      if (!bVar29) {
LAB_005065e9:
        uVar30 = (*(code *)PTR_slice_error_fail_00799408)();
        if (local_58 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
        }
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
    }
    else {
      uVar14 = 2;
      if (*(short *)pbVar28 == 0x736e) {
        bVar29 = uVar7 == 2;
        dVar6 = _DAT_001851f0;
        if (2 < uVar7) goto LAB_00505960;
        goto LAB_00505c89;
      }
      dVar6 = DAT_00185488;
      if (*(short *)pbVar28 != 0x7375) {
        if (uVar7 != 2) {
          uVar14 = 3;
          if (pbVar28[2] == 0x73 && *(short *)pbVar28 == -0x4a3e) {
            bVar29 = uVar7 == 3;
            if (3 < uVar7) goto LAB_00505960;
            goto LAB_00505c89;
          }
          if (pbVar28[2] == 0x73 && *(short *)pbVar28 == -0x4332) goto LAB_00505c80;
        }
        uVar14 = 2;
        dVar6 = _s__00185250;
        if (*(short *)pbVar28 != 0x736d) goto LAB_00505b78;
      }
LAB_00505c80:
      bVar29 = uVar7 == uVar14;
      if (uVar7 <= uVar14) goto LAB_00505c89;
LAB_00505960:
      if ((char)pbVar28[uVar14] < -0x40) goto LAB_005065e9;
    }
    dVar6 = local_88 + (double)local_c8 * dVar6;
    auVar5._8_8_ = uVar7 - uVar14;
    auVar5._0_8_ = pbVar28 + uVar14;
  } while (uVar7 - uVar14 != 0);
  dVar16 = ABS(dVar6);
  if ((0x3fe < (uint)((ulonglong)((longlong)dVar16 + -0x10000000000000) >> 0x35) ||
      -1 < (longlong)dVar6) &&
      (((dVar16 != INFINITY && dVar16 != 0.0) && (ulonglong)dVar16 < 0x7ff0000000000001) &&
      (0xffffffffffffe < (longlong)dVar16 - 1U || -1 < (longlong)dVar6))) goto LAB_00505cf0;
LAB_00505dbe:
  local_a8 = puVar17 + lVar21;
  local_d0 = 0;
  local_a0 = 0;
  local_98 = 1;
  local_c8 = puVar17;
  local_b0 = lVar21;
  local_c0 = auVar31;
  uVar30 = <alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::str::iter::SplitWhitespace>>
           ::from_iter(&local_58,&local_d0);
  if (((local_48 == 6) && (*(longlong *)(local_50 + 0x58) == 3)) &&
     (((char)(*(short **)(local_50 + 0x50))[1] == 'T' && **(short **)(local_50 + 0x50) == 0x4d47 &&
      (uVar7 = *(ulonglong *)(local_50 + 0x18), uVar7 != 0)))) {
    pcVar8 = *(char **)(local_50 + 0x10);
    if (uVar7 == 1) {
      cVar10 = *pcVar8;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00505e43;
    }
    else {
      cVar10 = *pcVar8;
    }
    if (cVar10 == '-') {
      if (uVar7 < 0x11) {
        if (uVar7 == 1) {
          lVar18 = 0;
        }
        else {
          uVar14 = 1;
          lVar18 = 0;
          do {
            if (9 < (byte)pcVar8[uVar14] - 0x30) goto LAB_00505e43;
            lVar18 = lVar18 * 10 - (ulonglong)((byte)pcVar8[uVar14] - 0x30);
            uVar14 = uVar14 + 1;
          } while (uVar7 != uVar14);
        }
      }
      else {
        uVar14 = 1;
        lVar18 = 0;
        do {
          lVar24 = lVar18 * 10;
          if (((SEXT816(lVar24) != SEXT816(lVar18) * SEXT816(10)) ||
              (uVar19 = (byte)pcVar8[uVar14] - 0x30, 9 < uVar19)) ||
             (lVar18 = lVar24 - (ulonglong)uVar19, SBORROW8(lVar24,(ulonglong)uVar19)))
          goto LAB_00505e43;
          uVar14 = uVar14 + 1;
        } while (uVar7 != uVar14);
      }
    }
    else {
      if (cVar10 == '+') {
        pcVar8 = pcVar8 + 1;
        uVar7 = uVar7 - 1;
      }
      lVar18 = 0;
      if (uVar7 < 0x10) {
        if (uVar7 != 0) {
          uVar14 = 0;
          do {
            if (9 < (byte)pcVar8[uVar14] - 0x30) goto LAB_00505e43;
            lVar18 = (ulonglong)((byte)pcVar8[uVar14] - 0x30) + lVar18 * 10;
            uVar14 = uVar14 + 1;
          } while (uVar7 != uVar14);
        }
      }
      else {
        uVar14 = 0;
        do {
          lVar24 = lVar18 * 10;
          if (((SEXT816(lVar24) != SEXT816(lVar18) * SEXT816(10)) ||
              (uVar19 = (byte)pcVar8[uVar14] - 0x30, 9 < uVar19)) ||
             (lVar18 = lVar24 + (ulonglong)uVar19, SCARRY8(lVar24,(ulonglong)uVar19)))
          goto LAB_00505e43;
          uVar14 = uVar14 + 1;
        } while (uVar7 != uVar14);
      }
    }
    if (*(longlong *)(local_50 + 0x28) == 3) {
      psVar3 = *(short **)(local_50 + 0x20);
      dVar6 = 4.44659081257122e-323;
      lVar24 = -1;
      if ((char)psVar3[1] == 'n' && *psVar3 == 0x614a) {
        lVar22 = 1;
      }
      else if ((char)psVar3[1] == 'b' && *psVar3 == 0x6546) {
        lVar22 = 2;
      }
      else {
        dVar6 = -NAN;
        if ((char)psVar3[1] == 'r' && *psVar3 == 0x614d) {
          lVar22 = 3;
          lVar24 = 0;
        }
        else if ((char)psVar3[1] == 'r' && *psVar3 == 0x7041) {
          lVar22 = 4;
          lVar24 = 0;
        }
        else if ((char)psVar3[1] == 'y' && *psVar3 == 0x614d) {
          lVar22 = 5;
          lVar24 = 0;
        }
        else if ((char)psVar3[1] == 'n' && *psVar3 == 0x754a) {
          lVar22 = 6;
          lVar24 = 0;
        }
        else if ((char)psVar3[1] == 'l' && *psVar3 == 0x754a) {
          lVar22 = 7;
          lVar24 = 0;
        }
        else {
          if ((char)psVar3[1] == 'g' && *psVar3 == 0x7541) {
            lVar22 = 8;
          }
          else if ((char)psVar3[1] == 'p' && *psVar3 == 0x6553) {
            lVar22 = 9;
          }
          else if ((char)psVar3[1] == 't' && *psVar3 == 0x634f) {
            lVar22 = 10;
          }
          else {
            if ((char)psVar3[1] != 'v' || *psVar3 != 0x6f4e) {
              if ((char)psVar3[1] != 'c' || *psVar3 != 0x6544) goto LAB_00505e43;
              lVar24 = 0;
              lVar22 = 0xc;
              goto LAB_005061eb;
            }
            lVar22 = 0xb;
          }
          lVar24 = 0;
        }
      }
LAB_005061eb:
      uVar7 = *(ulonglong *)(local_50 + 0x38);
      if (uVar7 != 0) {
        pcVar8 = *(char **)(local_50 + 0x30);
        if (uVar7 == 1) {
          cVar10 = *pcVar8;
          if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_00505e43;
        }
        else {
          cVar10 = *pcVar8;
        }
        if (cVar10 == '-') {
          if (uVar7 < 0x11) {
            if (uVar7 == 1) {
              lVar25 = 0;
            }
            else {
              uVar14 = 1;
              lVar25 = 0;
              do {
                if (9 < (byte)pcVar8[uVar14] - 0x30) goto LAB_00505e43;
                lVar25 = lVar25 * 10 - (ulonglong)((byte)pcVar8[uVar14] - 0x30);
                uVar14 = uVar14 + 1;
              } while (uVar7 != uVar14);
            }
          }
          else {
            uVar14 = 1;
            lVar25 = 0;
            do {
              lVar26 = lVar25 * 10;
              if (((SEXT816(lVar26) != SEXT816(lVar25) * SEXT816(10)) ||
                  (uVar19 = (byte)pcVar8[uVar14] - 0x30, 9 < uVar19)) ||
                 (lVar25 = lVar26 - (ulonglong)uVar19, SBORROW8(lVar26,(ulonglong)uVar19)))
              goto LAB_00505e43;
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
          }
        }
        else {
          if (cVar10 == '+') {
            pcVar8 = pcVar8 + 1;
            uVar7 = uVar7 - 1;
          }
          lVar25 = 0;
          if (uVar7 < 0x10) {
            if (uVar7 != 0) {
              uVar14 = 0;
              do {
                if (9 < (byte)pcVar8[uVar14] - 0x30) goto LAB_00505e43;
                lVar25 = (ulonglong)((byte)pcVar8[uVar14] - 0x30) + lVar25 * 10;
                uVar14 = uVar14 + 1;
              } while (uVar7 != uVar14);
            }
          }
          else {
            uVar14 = 0;
            do {
              lVar26 = lVar25 * 10;
              if (((SEXT816(lVar26) != SEXT816(lVar25) * SEXT816(10)) ||
                  (uVar19 = (byte)pcVar8[uVar14] - 0x30, 9 < uVar19)) ||
                 (lVar25 = lVar26 + (ulonglong)uVar19, SCARRY8(lVar26,(ulonglong)uVar19)))
              goto LAB_00505e43;
              uVar14 = uVar14 + 1;
            } while (uVar7 != uVar14);
          }
        }
        local_c0._0_8_ = *(undefined8 *)(local_50 + 0x40);
        local_c8 = *(undefined1 **)(local_50 + 0x48);
        local_d0 = 0;
        local_b0 = 0;
        local_a0 = 0x3a0000003a;
        local_98 = CONCAT11(local_98._1_1_,1);
        local_90 = 1;
        local_c0._8_8_ = local_c8;
        local_a8 = local_c8;
        local_88 = dVar6;
        local_38 = lVar22;
        uVar30 = <alloc[12e961f32105355]::vec::Vec<&str>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<&str,core[c0acaeba6ab4c2e0]::str::iter::Split<char>>>
                 ::from_iter(&local_70,&local_d0);
        if (local_60 == 3) {
          puVar4 = (undefined8 *)CONCAT44(uStack_64,local_68);
          uVar30 = <i64>::from_ascii_radix(&local_d0,*puVar4,puVar4[1]);
          if ((char)local_d0 != '\x01') {
            local_78 = local_c8;
            uVar30 = <i64>::from_ascii_radix(&local_d0,puVar4[2],puVar4[3]);
            if ((char)local_d0 != '\x01') {
              local_80 = local_c8;
              uVar30 = <i64>::from_ascii_radix(&local_d0,puVar4[4],puVar4[5]);
              if ((char)local_d0 != '\x01') {
                uVar7 = lVar25 - 0x7b2;
                local_40 = local_c8;
                if ((local_c8 < (undefined1 *)0x3d &&
                    (local_80 < (undefined1 *)0x3c &&
                    (local_78 <= &DAT_00000017 && lVar18 - 1U < 0x1f))) && 0x82 >= uVar7) {
                  if (local_70 != 0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)
                              (CONCAT71((int7)(uVar7 >> 8),0x82 < uVar7),8);
                  }
                  lVar25 = lVar25 + lVar24;
                  lVar21 = (lVar25 % 400 >> 0x3f) + lVar25 / 400;
                  lVar24 = lVar21 * -400;
                  uVar7 = lVar24 + lVar25;
                  uVar9 = SUB168(SEXT816((longlong)uVar7) * SEXT816(0x5c28f5c28f5c28f5),8) - uVar7;
                  uVar14 = lVar24 + lVar25 + 3;
                  if (-1 < (longlong)uVar7) {
                    uVar14 = uVar7;
                  }
                  puVar15 = local_40 + (longlong)local_80 * 0x3c + (longlong)local_78 * 0xe10;
                  puVar17 = puVar15 + (((local_38 + (longlong)local_88) * 0x99 + 2) / 5 +
                                       (lVar18 - 1U) + lVar21 * 0x23ab1 + uVar7 * 0x16d +
                                       (uVar14 >> 2) + ((uVar9 >> 6) - ((longlong)uVar9 >> 0x3f))) *
                                      0x15180 + -0xe79256200;
                  if (local_58 != 0) {
                    puVar15 = &DAT_00000008;
                    (*(code *)PTR___rust_dealloc_00798fc8)();
                  }
                  goto LAB_00505e7f;
                }
              }
            }
          }
        }
        if (local_70 != 0) {
          uVar30 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
        }
      }
    }
  }
LAB_00505e43:
  if (local_58 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar30,8);
  }
  auVar31 = parse_rfc3339_unix_secs(lVar21,puVar17);
  puVar15 = auVar31._8_8_;
  puVar17 = puVar15;
  if (auVar31._0_8_ != 1) {
    return 0;
  }
LAB_00505e7f:
  uVar11 = SUB84(puVar15,0);
  local_70 = (*(code *)PTR_now_007993f0)();
  local_68 = uVar11;
  (*(code *)PTR_duration_since_007993f8)(0,0);
  if (((int)local_d0 == 1) || ((longlong)puVar17 - (longlong)local_c8 < 1)) {
    return 0;
  }
  return 1;
}


