// 0020358d fmt

/* <rustc_demangle[a2bba03bad1b7f1a]::legacy::Demangle as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    */

undefined4 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::legacy::Demangle_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *pbVar18;
  undefined **ppuVar19;
  byte bVar20;
  byte *pbVar21;
  byte *unaff_R13;
  undefined4 uVar22;
  byte *unaff_R14;
  longlong lVar23;
  byte *local_60;
  byte *local_50;
  char local_41;
  longlong local_40;
  undefined4 local_34;
  
  local_50 = (byte *)param_1[1];
  lVar15 = param_1[2];
  pbVar6 = (byte *)*param_1;
  lVar23 = 0;
  local_40 = param_2;
LAB_002035b4:
  pbVar13 = (byte *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),lVar23 != lVar15);
  if (lVar23 != lVar15) {
    if (local_50 == (byte *)0x0) goto LAB_00203fdc;
    bVar20 = *pbVar6;
    lVar17 = 0;
    unaff_R13 = (byte *)0x0;
    pbVar16 = local_50;
    do {
      if ((char)bVar20 < '\0') {
        bVar7 = bVar20 & 0x1f;
        uVar14 = (pbVar6 + 1)[(longlong)unaff_R13] & 0x3f;
        if (bVar20 < 0xe0) {
          uVar8 = (uint)bVar7 << 6;
        }
        else {
          uVar14 = (pbVar6 + 2)[(longlong)unaff_R13] & 0x3f | uVar14 << 6;
          if (bVar20 < 0xf0) {
            uVar8 = (uint)bVar7 << 0xc | uVar14;
            goto LAB_00203643;
          }
          uVar8 = (bVar7 & 7) << 0x12;
          uVar14 = (pbVar6 + 3)[(longlong)unaff_R13] & 0x3f | uVar14 << 6;
        }
        uVar8 = uVar8 | uVar14;
      }
      else {
        uVar8 = (uint)bVar20;
      }
LAB_00203643:
      if (9 < uVar8 - 0x30) goto LAB_00203671;
      if (local_50 + -1 == unaff_R13) goto LAB_00203fdc;
      bVar20 = (pbVar6 + 1)[(longlong)unaff_R13];
      if ((char)bVar20 < -0x40) {
        do {
          lVar15 = (longlong)local_50 - (longlong)unaff_R13;
          ppuVar19 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218838;
          pbVar13 = (byte *)0x1;
LAB_00203ffe:
          (*(code *)PTR_slice_error_fail_00219da0)(lVar15,pbVar13,ppuVar19);
LAB_00204007:
          cVar3 = '\x01';
LAB_00203f9b:
          pbVar16 = &DAT_00218658;
          local_41 = cVar3;
          (*(code *)PTR_unwrap_failed_00219ec0)
                    (&DAT_00218658,&local_41,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218868);
LAB_00203fc1:
          local_50 = unaff_R13;
          (*(code *)PTR_slice_error_fail_00219da0)
                    (pbVar16 + 1,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218910);
          unaff_R13 = local_50;
LAB_00203fdc:
          (*(code *)PTR_unwrap_failed_00219e58)();
        } while( true );
      }
      pbVar16 = pbVar16 + -1;
      unaff_R13 = unaff_R13 + 1;
      lVar17 = lVar17 + -1;
    } while( true );
  }
LAB_00203f70:
  return (int)pbVar13;
LAB_00203671:
  if (unaff_R13 == (byte *)0x0) {
    cVar3 = '\0';
    goto LAB_00203f9b;
  }
  if ((char)pbVar6[(longlong)unaff_R13] < -0x40) goto LAB_002040c2;
  bVar7 = *pbVar6;
  if (unaff_R13 == (byte *)0x1) {
    cVar3 = '\x01';
    if (bVar7 == 0x2b) goto LAB_00203f9b;
    if (bVar7 == 0x2d) goto LAB_00203f9b;
  }
  pbVar9 = local_50 + -(longlong)unaff_R13;
  pbVar21 = pbVar6 + (longlong)unaff_R13;
  pbVar11 = (byte *)(ulonglong)(bVar7 == 0x2b);
  uVar22 = SUB84(pbVar13,0);
  if ((ulonglong)((longlong)unaff_R13 - (longlong)pbVar11) < 0x11) {
    if (unaff_R13 != pbVar11) {
      lVar10 = 0;
      pbVar13 = (byte *)0x0;
      do {
        uVar14 = (pbVar11 + (longlong)pbVar6)[lVar10] - 0x30;
        if (9 < uVar14) goto LAB_00204007;
        pbVar13 = (byte *)((ulonglong)uVar14 + (longlong)pbVar13 * 10);
        lVar10 = lVar10 + 1;
      } while (-(longlong)pbVar11 + (longlong)unaff_R13 != lVar10);
      goto LAB_00203707;
    }
    unaff_R14 = (byte *)0x0;
    local_60 = pbVar21;
    local_50 = pbVar9;
  }
  else {
    lVar10 = 0;
    pbVar13 = (byte *)0x0;
    while (-(longlong)pbVar11 + (longlong)unaff_R13 != lVar10) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pbVar13;
      uVar5 = SUB168(auVar1 * ZEXT816(10),0);
      bVar7 = (pbVar11 + (longlong)pbVar6)[lVar10];
      if (SUB168(auVar1 * ZEXT816(10),8) != 0) {
        cVar3 = ((byte)(bVar7 - 0x30) < 10) + '\x01';
        goto LAB_00203f9b;
      }
      uVar14 = bVar7 - 0x30;
      if (9 < uVar14) goto LAB_00204007;
      lVar10 = lVar10 + 1;
      pbVar13 = (byte *)(uVar5 + uVar14);
      if (CARRY8(uVar5,(ulonglong)uVar14)) {
        cVar3 = '\x02';
        goto LAB_00203f9b;
      }
    }
LAB_00203707:
    pbVar11 = local_50 + -(longlong)pbVar13;
    if (pbVar13 == (byte *)0x0) {
      unaff_R14 = (byte *)0x0;
      local_60 = pbVar6 + (longlong)unaff_R13;
      local_50 = pbVar11 + -(longlong)unaff_R13;
    }
    else {
      if (pbVar13 < pbVar9) {
        if ((char)unaff_R13[(longlong)(pbVar6 + (longlong)pbVar13)] < -0x40) {
LAB_00204023:
          lVar15 = (longlong)local_50 - (longlong)unaff_R13;
          ppuVar19 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218880;
          goto LAB_00203ffe;
        }
      }
      else if (pbVar11 != unaff_R13) goto LAB_00204023;
      if (pbVar13 < pbVar9) {
        if ((char)(pbVar6 + (longlong)pbVar13)[(longlong)unaff_R13] < -0x40) {
LAB_00204038:
          (*(code *)PTR_slice_error_fail_00219da0)
                    (pbVar13,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218898);
          goto LAB_002040c2;
        }
        local_50 = pbVar11 + -(longlong)unaff_R13;
        pbVar9 = pbVar13;
      }
      else {
        if (pbVar11 != unaff_R13) goto LAB_00204038;
        local_50 = (byte *)0x0;
      }
      if ((((*(byte *)(local_40 + 0x12) & 0x80) != 0) && (lVar23 + 1 == lVar15)) && (bVar20 == 0x68)
         ) {
        if ((pbVar9 != (byte *)0x1) && ((char)(pbVar6 + 1)[(longlong)unaff_R13] < -0x40))
        goto LAB_002040a7;
        pbVar11 = pbVar6 + (longlong)unaff_R13 + 1;
        if (pbVar13 < pbVar16) {
          pbVar16 = pbVar13;
        }
        do {
          if (pbVar16 + (longlong)pbVar6 + -lVar17 == pbVar11) {
            return 0;
          }
          bVar20 = *pbVar11;
          uVar14 = (uint)bVar20;
          if ((char)bVar20 < '\0') {
            uVar8 = bVar20 & 0x1f;
            pbVar18 = pbVar11 + 1;
            if (bVar20 < 0xe0) {
              pbVar11 = pbVar11 + 2;
              uVar14 = uVar8 << 6 | *pbVar18 & 0x3f;
            }
            else {
              uVar14 = pbVar11[2] & 0x3f | (*pbVar18 & 0x3f) << 6;
              if (bVar20 < 0xf0) {
                pbVar11 = pbVar11 + 3;
                uVar14 = uVar14 | uVar8 << 0xc;
              }
              else {
                pbVar18 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar14 = *pbVar18 & 0x3f | uVar14 << 6 | (bVar20 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar11 = pbVar11 + 1;
          }
          uVar8 = uVar14 - 0x30;
          if (0x39 < uVar14) {
            uVar8 = (uVar14 - 0x41 & 0xffffffde) + 10;
          }
        } while (uVar8 < 0x10);
      }
      unaff_R14 = pbVar9;
      local_60 = pbVar6 + (longlong)pbVar13 + (longlong)unaff_R13;
    }
  }
  local_34 = uVar22;
  if ((lVar23 != 0) && (cVar3 = (*(code *)PTR_write_str_00219e10)(), cVar3 != '\0')) {
    return local_34;
  }
  if (((byte *)0x1 < unaff_R14) && (*(short *)pbVar21 == 0x245f)) {
    if ((char)(pbVar6 + 1)[(longlong)unaff_R13] < -0x40) {
      (*(code *)PTR_slice_error_fail_00219da0)
                (unaff_R14,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_002188b0);
LAB_002040a7:
      (*(code *)PTR_slice_error_fail_00219da0)();
LAB_002040c2:
      do {
        (*(code *)PTR_slice_error_fail_00219da0)(unaff_R13);
      } while( true );
    }
    pbVar21 = pbVar6 + (longlong)unaff_R13 + 1;
    unaff_R14 = unaff_R14 + -1;
  }
LAB_0020391a:
  unaff_R13 = unaff_R14;
  if (unaff_R13 == (byte *)0x0) {
LAB_00203965:
    pbVar6 = pbVar21;
    pbVar13 = (byte *)0x0;
    do {
      pbVar16 = pbVar13;
      unaff_R14 = unaff_R13;
      if (pbVar6 == pbVar21 + (longlong)unaff_R13) goto LAB_00203f29;
      bVar20 = *pbVar6;
      uVar14 = (uint)bVar20;
      if ((char)bVar20 < '\0') {
        uVar8 = bVar20 & 0x1f;
        if (bVar20 < 0xe0) {
          pbVar13 = pbVar6 + 2;
          uVar14 = uVar8 << 6 | pbVar6[1] & 0x3f;
        }
        else {
          uVar14 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
          if (bVar20 < 0xf0) {
            pbVar13 = pbVar6 + 3;
            uVar14 = uVar14 | uVar8 << 0xc;
          }
          else {
            pbVar13 = pbVar6 + 4;
            uVar14 = pbVar6[3] & 0x3f | uVar14 << 6 | (bVar20 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar13 = pbVar6 + 1;
      }
    } while ((uVar14 != 0x24) &&
            (lVar17 = (longlong)pbVar16 - (longlong)pbVar6, pbVar6 = pbVar13,
            pbVar13 = pbVar13 + lVar17, uVar14 != 0x2e));
    if (pbVar16 == (byte *)0x0) {
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
      pbVar6 = (byte *)0x0;
    }
    else {
      if (unaff_R13 <= pbVar16) {
        if (pbVar16 == unaff_R13) goto LAB_00203ad3;
LAB_00203f58:
        (*(code *)PTR_slice_error_fail_00219da0)
                  (pbVar16,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_002188c8);
        pbVar13 = unaff_R13;
        goto LAB_00203f70;
      }
      if ((char)pbVar21[(longlong)pbVar16] < -0x40) goto LAB_00203f58;
LAB_00203ad3:
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
      if (unaff_R13 <= pbVar16) {
        pbVar6 = unaff_R13;
        if (pbVar16 == unaff_R13) goto LAB_00203b6a;
        goto LAB_002040c2;
      }
      if ((char)pbVar21[(longlong)pbVar16] < -0x40) goto LAB_002040c2;
      pbVar6 = pbVar16;
    }
LAB_00203b6a:
    unaff_R14 = unaff_R13 + -(longlong)pbVar6;
    pbVar21 = pbVar21 + (longlong)pbVar6;
  }
  else {
    if (*pbVar21 == 0x24) {
      if ((unaff_R13 == (byte *)0x1) || (-0x41 < (char)pbVar21[1])) {
        unaff_R14 = unaff_R13 + -1;
        pbVar6 = pbVar21 + 1;
        pbVar13 = (byte *)0x0;
        do {
          uVar5 = (longlong)unaff_R14 - (longlong)pbVar13;
          if (uVar5 < 0x10) {
            uVar12 = 0;
            if (uVar5 != 0) {
              do {
                if ((pbVar6 + (longlong)pbVar13)[uVar12] == 0x24) {
                  lVar17 = 1;
                  uVar5 = uVar12;
                  goto LAB_00203a81;
                }
                uVar12 = uVar12 + 1;
              } while (uVar5 != uVar12);
              uVar12 = uVar5;
            }
            lVar17 = 0;
            uVar5 = uVar12;
          }
          else {
            lVar17 = (*(code *)PTR_memchr_aligned_00219d40)();
          }
LAB_00203a81:
          if (lVar17 != 1) goto LAB_00203f29;
          pbVar16 = pbVar13 + uVar5;
          if ((pbVar16 < unaff_R14) && (pbVar6[(longlong)pbVar16] == 0x24)) goto LAB_00203b75;
          pbVar13 = pbVar13 + uVar5 + 1;
          if (unaff_R14 < pbVar13) goto LAB_00203f29;
        } while( true );
      }
      goto LAB_002040c2;
    }
    if (*pbVar21 != 0x2e) goto LAB_00203965;
    if (unaff_R13 == (byte *)0x1) {
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
    }
    else {
      if ((char)pbVar21[1] < -0x40) goto LAB_002040c2;
      bVar20 = pbVar21[1];
      uVar14 = (uint)bVar20;
      if ((char)bVar20 < '\0') {
        uVar8 = bVar20 & 0x1f;
        if (bVar20 < 0xe0) {
          uVar14 = uVar8 << 6 | pbVar21[2] & 0x3f;
        }
        else {
          uVar14 = pbVar21[3] & 0x3f | (pbVar21[2] & 0x3f) << 6;
          if (bVar20 < 0xf0) {
            uVar14 = uVar14 | uVar8 << 0xc;
          }
          else {
            uVar14 = pbVar21[4] & 0x3f | uVar14 << 6 | (bVar20 & 7) << 0x12;
          }
        }
      }
      if (uVar14 == 0x2e) {
        uVar4 = (*(code *)PTR_write_str_00219e10)();
        if ((char)uVar4 != '\0') goto LAB_00203f76;
        if ((unaff_R13 < (byte *)0x3) || (-0x41 < (char)pbVar21[2])) {
          unaff_R14 = unaff_R13 + -2;
          pbVar21 = pbVar21 + 2;
          goto LAB_00203cff;
        }
        goto LAB_002040c2;
      }
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
      if ((char)pbVar21[1] < -0x40) goto LAB_002040c2;
    }
    unaff_R14 = unaff_R13 + -1;
    pbVar21 = pbVar21 + 1;
  }
LAB_00203cff:
  goto LAB_0020391a;
LAB_00203b75:
  bVar20 = *pbVar6;
  if ((char)bVar20 < -0x40) goto LAB_00203fc1;
  pbVar13 = pbVar16 + 2;
  unaff_R14 = unaff_R13 + -(longlong)pbVar13;
  if (unaff_R13 < pbVar13 || unaff_R14 == (byte *)0x0) {
    if (unaff_R14 != (byte *)0x0) goto LAB_002040c2;
  }
  else if ((char)pbVar21[(longlong)pbVar13] < -0x40) goto LAB_002040c2;
  if (pbVar16 == (byte *)0x1) {
    if (*pbVar6 == 0x43) {
LAB_00203c6a:
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      cVar3 = (char)uVar4;
      goto joined_r0x00203c7e;
    }
    if (bVar20 != 0x75) goto LAB_00203f29;
  }
  else {
    if (pbVar16 == (byte *)0x2) {
      if (((((*(short *)pbVar6 == 0x5053) || (*(short *)pbVar6 == 0x5042)) ||
           (*(short *)pbVar6 == 0x4652)) ||
          ((*(short *)pbVar6 == 0x544c || (*(short *)pbVar6 == 0x5447)))) ||
         ((*(short *)pbVar6 == 0x504c || (*(short *)pbVar6 == 0x5052)))) goto LAB_00203c6a;
      if (bVar20 != 0x75) goto LAB_00203f29;
    }
    else {
      if ((pbVar16 == (byte *)0x0) || (bVar20 != 0x75)) goto LAB_00203f29;
      if (pbVar16 < (byte *)0x2) goto LAB_00203d12;
    }
    if ((char)pbVar21[2] < -0x40) goto LAB_002040a7;
  }
LAB_00203d12:
  pbVar11 = pbVar21 + 2;
  pbVar9 = pbVar11;
  do {
    pbVar18 = pbVar9;
    if (pbVar18 == pbVar6 + (longlong)pbVar16) break;
    bVar20 = *pbVar18;
    uVar14 = (uint)bVar20;
    if ((char)bVar20 < '\0') {
      uVar8 = bVar20 & 0x1f;
      if (bVar20 < 0xe0) {
        pbVar9 = pbVar18 + 2;
        uVar14 = uVar8 << 6 | pbVar18[1] & 0x3f;
      }
      else {
        uVar14 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
        if (bVar20 < 0xf0) {
          pbVar9 = pbVar18 + 3;
          uVar14 = uVar14 | uVar8 << 0xc;
        }
        else {
          pbVar9 = pbVar18 + 4;
          uVar14 = pbVar18[3] & 0x3f | uVar14 << 6 | (bVar20 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar9 = pbVar18 + 1;
    }
  } while (0xfffffff9 < uVar14 - 0x67 || 0xfffffff5 < uVar14 - 0x3a);
  if (pbVar16 == (byte *)0x2) {
    bVar20 = *pbVar11;
    if ((bVar20 == 0x2b) || (bVar20 == 0x2d)) goto LAB_00203f29;
  }
  else {
    if (pbVar16 == (byte *)0x1) goto LAB_00203f29;
    bVar20 = *pbVar11;
  }
  pbVar9 = (byte *)(ulonglong)(bVar20 == 0x2b);
  uVar5 = (longlong)(pbVar16 + -1) - (longlong)pbVar9;
  if (uVar5 < 9) {
    uVar14 = 0;
    if (pbVar16 + -1 != pbVar9) {
      uVar12 = 0;
      do {
        bVar20 = (pbVar11 + (longlong)pbVar9)[uVar12];
        uVar8 = bVar20 - 0x30;
        if (0x39 < bVar20) {
          uVar8 = (bVar20 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar8) goto LAB_00203f29;
        uVar14 = uVar14 << 4 | uVar8;
        uVar12 = uVar12 + 1;
      } while (uVar5 != uVar12);
    }
  }
  else {
    uVar14 = 0;
    uVar12 = 0;
    do {
      bVar20 = (pbVar11 + (longlong)pbVar9)[uVar12];
      if (0xfffffff < uVar14) {
        uVar14 = bVar20 - 0x30;
        if (0x39 < bVar20) {
          uVar14 = (bVar20 - 0x41 & 0xffffffde) + 10;
        }
        uVar5 = (ulonglong)(uVar14 < 0x10) * 0x100 + 0x101;
        bVar2 = true;
        goto LAB_00203e97;
      }
      uVar8 = bVar20 - 0x30;
      if (0x39 < bVar20) {
        uVar8 = (bVar20 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar8) goto LAB_00203f29;
      uVar14 = uVar8 | uVar14 << 4;
      uVar12 = uVar12 + 1;
    } while (uVar5 != uVar12);
  }
  uVar5 = (ulonglong)uVar14 << 0x20;
  bVar2 = false;
LAB_00203e97:
  if ((((bVar2) || (((uint)(uVar5 >> 0x20) ^ 0xd800) - 0x110000 < 0xffef0800)) ||
      (pbVar18 != pbVar6 + (longlong)pbVar16)) ||
     ((uVar5 >> 0x25 == 0 || ((uint)(uVar5 - 0x7f00000000 >> 0x20) < 0x21)))) goto LAB_00203f29;
  uVar4 = (*(code *)PTR_fmt_0021a428)();
  cVar3 = (char)uVar4;
joined_r0x00203c7e:
  pbVar21 = pbVar13 + (longlong)pbVar21;
  if (cVar3 != '\0') {
LAB_00203f76:
    return (int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  }
  goto LAB_0020391a;
LAB_00203f29:
  cVar3 = (*(code *)PTR_write_str_00219e10)();
  pbVar6 = local_60;
  lVar23 = lVar23 + 1;
  if (cVar3 != '\0') {
    return local_34;
  }
  goto LAB_002035b4;
}


