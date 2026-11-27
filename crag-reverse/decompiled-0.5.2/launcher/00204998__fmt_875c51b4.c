// 00204998 fmt

/* WARNING: Switch with 1 destination removed at 0x0020499e */
/* <rustc_demangle[a2bba03bad1b7f1a]::DemangleStyle as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::DemangleStyle_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined4 param_1,longlong *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  longlong lVar10;
  byte *pbVar11;
  ulonglong uVar12;
  byte *pbVar13;
  uint uVar14;
  longlong lVar15;
  byte *pbVar16;
  uint uVar17;
  longlong lVar18;
  byte *pbVar19;
  undefined **ppuVar20;
  byte bVar21;
  byte *pbVar22;
  byte *unaff_R13;
  byte *unaff_R14;
  longlong lVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  byte *pbStack_60;
  byte *pbStack_50;
  char cStack_41;
  longlong lStack_40;
  undefined4 local_38;
  uint uStack_34;
  
  if (*param_2 == 0) {
    local_38 = (undefined4)param_2[1];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    lStack_40 = 0x2049d5;
    uVar6 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_38,1);
    return uVar6;
  }
  pbStack_50 = (byte *)param_2[1];
  lVar15 = param_2[2];
  pbVar5 = (byte *)*param_2;
  lVar23 = 0;
  lStack_40 = param_3;
LAB_002035b4:
  pbVar13 = (byte *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),lVar23 != lVar15);
  if (lVar23 != lVar15) {
    if (pbStack_50 == (byte *)0x0) goto LAB_00203fdc;
    bVar21 = *pbVar5;
    lVar18 = 0;
    unaff_R13 = (byte *)0x0;
    pbVar16 = pbStack_50;
    do {
      if ((char)bVar21 < '\0') {
        bVar7 = bVar21 & 0x1f;
        uVar9 = (pbVar5 + 1)[(longlong)unaff_R13] & 0x3f;
        if (bVar21 < 0xe0) {
          uVar14 = (uint)bVar7 << 6;
        }
        else {
          uVar9 = (pbVar5 + 2)[(longlong)unaff_R13] & 0x3f | uVar9 << 6;
          if (bVar21 < 0xf0) {
            uVar14 = (uint)bVar7 << 0xc | uVar9;
            goto LAB_00203643;
          }
          uVar14 = (bVar7 & 7) << 0x12;
          uVar9 = (pbVar5 + 3)[(longlong)unaff_R13] & 0x3f | uVar9 << 6;
        }
        uVar14 = uVar14 | uVar9;
      }
      else {
        uVar14 = (uint)bVar21;
      }
LAB_00203643:
      if (9 < uVar14 - 0x30) goto LAB_00203671;
      if (pbStack_50 + -1 == unaff_R13) goto LAB_00203fdc;
      bVar21 = (pbVar5 + 1)[(longlong)unaff_R13];
      if ((char)bVar21 < -0x40) {
        do {
          lVar15 = (longlong)pbStack_50 - (longlong)unaff_R13;
          ppuVar20 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218838;
          pbVar13 = (byte *)0x1;
LAB_00203ffe:
          (*(code *)PTR_slice_error_fail_00219da0)(lVar15,pbVar13,ppuVar20);
LAB_00204007:
          cVar3 = '\x01';
LAB_00203f9b:
          pbVar16 = &DAT_00218658;
          cStack_41 = cVar3;
          (*(code *)PTR_unwrap_failed_00219ec0)
                    (&DAT_00218658,&cStack_41,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218868);
LAB_00203fc1:
          pbStack_50 = unaff_R13;
          (*(code *)PTR_slice_error_fail_00219da0)
                    (pbVar16 + 1,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218910);
          unaff_R13 = pbStack_50;
LAB_00203fdc:
          (*(code *)PTR_unwrap_failed_00219e58)();
        } while( true );
      }
      pbVar16 = pbVar16 + -1;
      unaff_R13 = unaff_R13 + 1;
      lVar18 = lVar18 + -1;
    } while( true );
  }
LAB_00203f70:
  uStack_34 = (uint)pbVar13;
  goto LAB_00203f7b;
LAB_00203671:
  if (unaff_R13 == (byte *)0x0) {
    cVar3 = '\0';
    goto LAB_00203f9b;
  }
  if ((char)pbVar5[(longlong)unaff_R13] < -0x40) goto LAB_002040c2;
  bVar7 = *pbVar5;
  if (unaff_R13 == (byte *)0x1) {
    cVar3 = '\x01';
    if (bVar7 == 0x2b) goto LAB_00203f9b;
    if (bVar7 == 0x2d) goto LAB_00203f9b;
  }
  pbVar8 = pbStack_50 + -(longlong)unaff_R13;
  pbVar22 = pbVar5 + (longlong)unaff_R13;
  pbVar11 = (byte *)(ulonglong)(bVar7 == 0x2b);
  uVar9 = (uint)pbVar13;
  if ((ulonglong)((longlong)unaff_R13 - (longlong)pbVar11) < 0x11) {
    if (unaff_R13 != pbVar11) {
      lVar10 = 0;
      pbVar13 = (byte *)0x0;
      do {
        uVar14 = (pbVar11 + (longlong)pbVar5)[lVar10] - 0x30;
        if (9 < uVar14) goto LAB_00204007;
        pbVar13 = (byte *)((ulonglong)uVar14 + (longlong)pbVar13 * 10);
        lVar10 = lVar10 + 1;
      } while (-(longlong)pbVar11 + (longlong)unaff_R13 != lVar10);
      goto LAB_00203707;
    }
    unaff_R14 = (byte *)0x0;
    pbStack_60 = pbVar22;
    pbStack_50 = pbVar8;
  }
  else {
    lVar10 = 0;
    pbVar13 = (byte *)0x0;
    while (-(longlong)pbVar11 + (longlong)unaff_R13 != lVar10) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = pbVar13;
      uVar6 = SUB168(auVar1 * ZEXT816(10),0);
      bVar7 = (pbVar11 + (longlong)pbVar5)[lVar10];
      if (SUB168(auVar1 * ZEXT816(10),8) != 0) {
        cVar3 = ((byte)(bVar7 - 0x30) < 10) + '\x01';
        goto LAB_00203f9b;
      }
      uVar14 = bVar7 - 0x30;
      if (9 < uVar14) goto LAB_00204007;
      lVar10 = lVar10 + 1;
      pbVar13 = (byte *)(uVar6 + uVar14);
      if (CARRY8(uVar6,(ulonglong)uVar14)) {
        cVar3 = '\x02';
        goto LAB_00203f9b;
      }
    }
LAB_00203707:
    pbVar11 = pbStack_50 + -(longlong)pbVar13;
    if (pbVar13 == (byte *)0x0) {
      unaff_R14 = (byte *)0x0;
      pbStack_60 = pbVar5 + (longlong)unaff_R13;
      pbStack_50 = pbVar11 + -(longlong)unaff_R13;
    }
    else {
      if (pbVar13 < pbVar8) {
        if ((char)unaff_R13[(longlong)(pbVar5 + (longlong)pbVar13)] < -0x40) {
LAB_00204023:
          lVar15 = (longlong)pbStack_50 - (longlong)unaff_R13;
          ppuVar20 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218880;
          goto LAB_00203ffe;
        }
      }
      else if (pbVar11 != unaff_R13) goto LAB_00204023;
      if (pbVar13 < pbVar8) {
        if ((char)(pbVar5 + (longlong)pbVar13)[(longlong)unaff_R13] < -0x40) {
LAB_00204038:
          (*(code *)PTR_slice_error_fail_00219da0)
                    (pbVar13,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218898);
          goto LAB_002040c2;
        }
        pbStack_50 = pbVar11 + -(longlong)unaff_R13;
        pbVar8 = pbVar13;
      }
      else {
        if (pbVar11 != unaff_R13) goto LAB_00204038;
        pbStack_50 = (byte *)0x0;
      }
      if ((((*(byte *)(lStack_40 + 0x12) & 0x80) != 0) && (lVar23 + 1 == lVar15)) &&
         (bVar21 == 0x68)) {
        if ((pbVar8 != (byte *)0x1) && ((char)(pbVar5 + 1)[(longlong)unaff_R13] < -0x40))
        goto LAB_00204095;
        pbVar11 = pbVar5 + (longlong)unaff_R13 + 1;
        if (pbVar13 < pbVar16) {
          pbVar16 = pbVar13;
        }
        do {
          if (pbVar16 + (longlong)pbVar5 + -lVar18 == pbVar11) {
            uStack_34 = 0;
            goto LAB_00203f7b;
          }
          bVar21 = *pbVar11;
          uVar14 = (uint)bVar21;
          if ((char)bVar21 < '\0') {
            uVar17 = bVar21 & 0x1f;
            pbVar19 = pbVar11 + 1;
            if (bVar21 < 0xe0) {
              pbVar11 = pbVar11 + 2;
              uVar14 = uVar17 << 6 | *pbVar19 & 0x3f;
            }
            else {
              uVar14 = pbVar11[2] & 0x3f | (*pbVar19 & 0x3f) << 6;
              if (bVar21 < 0xf0) {
                pbVar11 = pbVar11 + 3;
                uVar14 = uVar14 | uVar17 << 0xc;
              }
              else {
                pbVar19 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar14 = *pbVar19 & 0x3f | uVar14 << 6 | (bVar21 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar11 = pbVar11 + 1;
          }
          uVar17 = uVar14 - 0x30;
          if (0x39 < uVar14) {
            uVar17 = (uVar14 - 0x41 & 0xffffffde) + 10;
          }
        } while (uVar17 < 0x10);
      }
      unaff_R14 = pbVar8;
      pbStack_60 = pbVar5 + (longlong)pbVar13 + (longlong)unaff_R13;
    }
  }
  uStack_34 = uVar9;
  if ((lVar23 != 0) &&
     (cVar3 = (*(code *)PTR_write_str_00219e10)(), param_1 = extraout_XMM0_Da, cVar3 != '\0'))
  goto LAB_00203f7b;
  if (((byte *)0x1 < unaff_R14) && (*(short *)pbVar22 == 0x245f)) {
    if ((char)(pbVar5 + 1)[(longlong)unaff_R13] < -0x40) {
      param_1 = (*(code *)PTR_slice_error_fail_00219da0)
                          (unaff_R14,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_002188b0);
LAB_00204095:
      ppuVar20 = &PTR_s__rust_deps_rustc_demangle_0_1_27_002187c0;
LAB_002040a7:
      (*(code *)PTR_slice_error_fail_00219da0)(param_1,1,ppuVar20);
LAB_002040c2:
      do {
        (*(code *)PTR_slice_error_fail_00219da0)(unaff_R13);
      } while( true );
    }
    pbVar22 = pbVar5 + (longlong)unaff_R13 + 1;
    unaff_R14 = unaff_R14 + -1;
  }
LAB_0020391a:
  unaff_R13 = unaff_R14;
  if (unaff_R13 == (byte *)0x0) {
LAB_00203965:
    pbVar5 = pbVar22;
    pbVar13 = (byte *)0x0;
    do {
      pbVar16 = pbVar13;
      unaff_R14 = unaff_R13;
      if (pbVar5 == pbVar22 + (longlong)unaff_R13) goto LAB_00203f29;
      bVar21 = *pbVar5;
      uVar9 = (uint)bVar21;
      if ((char)bVar21 < '\0') {
        uVar14 = bVar21 & 0x1f;
        if (bVar21 < 0xe0) {
          pbVar13 = pbVar5 + 2;
          uVar9 = uVar14 << 6 | pbVar5[1] & 0x3f;
        }
        else {
          uVar9 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (bVar21 < 0xf0) {
            pbVar13 = pbVar5 + 3;
            uVar9 = uVar9 | uVar14 << 0xc;
          }
          else {
            pbVar13 = pbVar5 + 4;
            uVar9 = pbVar5[3] & 0x3f | uVar9 << 6 | (bVar21 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar13 = pbVar5 + 1;
      }
    } while ((uVar9 != 0x24) &&
            (lVar18 = (longlong)pbVar16 - (longlong)pbVar5, pbVar5 = pbVar13,
            pbVar13 = pbVar13 + lVar18, uVar9 != 0x2e));
    if (pbVar16 == (byte *)0x0) {
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
      pbVar5 = (byte *)0x0;
      param_1 = extraout_XMM0_Da_02;
LAB_00203b6a:
      unaff_R14 = unaff_R13 + -(longlong)pbVar5;
      pbVar22 = pbVar22 + (longlong)pbVar5;
LAB_00203cff:
      goto LAB_0020391a;
    }
    if (pbVar16 < unaff_R13) {
      if (-0x41 < (char)pbVar22[(longlong)pbVar16]) {
LAB_00203ad3:
        uVar4 = (*(code *)PTR_write_str_00219e10)();
        if ((char)uVar4 != '\0') goto LAB_00203f76;
        param_1 = extraout_XMM0_Da_03;
        if (pbVar16 < unaff_R13) {
          if (-0x41 < (char)pbVar22[(longlong)pbVar16]) {
            pbVar5 = pbVar16;
            goto LAB_00203b6a;
          }
          goto LAB_002040c2;
        }
        pbVar5 = unaff_R13;
        if (pbVar16 != unaff_R13) goto LAB_002040c2;
        goto LAB_00203b6a;
      }
    }
    else if (pbVar16 == unaff_R13) goto LAB_00203ad3;
    (*(code *)PTR_slice_error_fail_00219da0)
              (pbVar16,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_002188c8);
    pbVar13 = unaff_R13;
    goto LAB_00203f70;
  }
  if (*pbVar22 == 0x24) {
    if ((unaff_R13 == (byte *)0x1) || (-0x41 < (char)pbVar22[1])) {
      unaff_R14 = unaff_R13 + -1;
      pbVar5 = pbVar22 + 1;
      pbVar13 = (byte *)0x0;
      do {
        uVar6 = (longlong)unaff_R14 - (longlong)pbVar13;
        if (uVar6 < 0x10) {
          uVar12 = 0;
          if (uVar6 != 0) {
            do {
              if ((pbVar5 + (longlong)pbVar13)[uVar12] == 0x24) {
                lVar18 = 1;
                uVar6 = uVar12;
                goto LAB_00203a81;
              }
              uVar12 = uVar12 + 1;
            } while (uVar6 != uVar12);
            uVar12 = uVar6;
          }
          lVar18 = 0;
          uVar6 = uVar12;
        }
        else {
          lVar18 = (*(code *)PTR_memchr_aligned_00219d40)();
          param_1 = extraout_XMM0_Da_01;
        }
LAB_00203a81:
        if (lVar18 != 1) goto LAB_00203f29;
        pbVar16 = pbVar13 + uVar6;
        if ((pbVar16 < unaff_R14) && (pbVar5[(longlong)pbVar16] == 0x24)) goto LAB_00203b75;
        pbVar13 = pbVar13 + uVar6 + 1;
        if (unaff_R14 < pbVar13) goto LAB_00203f29;
      } while( true );
    }
    goto LAB_002040c2;
  }
  if (*pbVar22 != 0x2e) goto LAB_00203965;
  if (unaff_R13 == (byte *)0x1) {
    uVar4 = (*(code *)PTR_write_str_00219e10)();
    param_1 = extraout_XMM0_Da_00;
    if ((char)uVar4 == '\0') {
LAB_00203cf9:
      unaff_R14 = unaff_R13 + -1;
      pbVar22 = pbVar22 + 1;
      goto LAB_00203cff;
    }
  }
  else {
    if ((char)pbVar22[1] < -0x40) goto LAB_002040c2;
    bVar21 = pbVar22[1];
    uVar9 = (uint)bVar21;
    if ((char)bVar21 < '\0') {
      uVar14 = bVar21 & 0x1f;
      if (bVar21 < 0xe0) {
        uVar9 = uVar14 << 6 | pbVar22[2] & 0x3f;
      }
      else {
        uVar9 = pbVar22[3] & 0x3f | (pbVar22[2] & 0x3f) << 6;
        if (bVar21 < 0xf0) {
          uVar9 = uVar9 | uVar14 << 0xc;
        }
        else {
          uVar9 = pbVar22[4] & 0x3f | uVar9 << 6 | (bVar21 & 7) << 0x12;
        }
      }
    }
    if (uVar9 != 0x2e) {
      uVar4 = (*(code *)PTR_write_str_00219e10)();
      if ((char)uVar4 != '\0') goto LAB_00203f76;
      param_1 = extraout_XMM0_Da_06;
      if (-0x41 < (char)pbVar22[1]) goto LAB_00203cf9;
      goto LAB_002040c2;
    }
    uVar4 = (*(code *)PTR_write_str_00219e10)();
    if ((char)uVar4 == '\0') {
      if ((unaff_R13 < (byte *)0x3) || (-0x41 < (char)pbVar22[2])) {
        unaff_R14 = unaff_R13 + -2;
        pbVar22 = pbVar22 + 2;
        param_1 = extraout_XMM0_Da_05;
        goto LAB_00203cff;
      }
      goto LAB_002040c2;
    }
  }
  goto LAB_00203f76;
LAB_00203b75:
  bVar21 = *pbVar5;
  if ((char)bVar21 < -0x40) goto LAB_00203fc1;
  pbVar13 = pbVar16 + 2;
  unaff_R14 = unaff_R13 + -(longlong)pbVar13;
  if (unaff_R13 < pbVar13 || unaff_R14 == (byte *)0x0) {
    if (unaff_R14 != (byte *)0x0) goto LAB_002040c2;
  }
  else if ((char)pbVar22[(longlong)pbVar13] < -0x40) goto LAB_002040c2;
  if (pbVar16 == (byte *)0x1) {
    if (*pbVar5 != 0x43) {
      if (bVar21 != 0x75) goto LAB_00203f29;
      goto LAB_00203d12;
    }
LAB_00203c6a:
    uVar4 = (*(code *)PTR_write_str_00219e10)();
    cVar3 = (char)uVar4;
    param_1 = extraout_XMM0_Da_04;
  }
  else {
    if (pbVar16 == (byte *)0x2) {
      if (((((*(short *)pbVar5 == 0x5053) || (*(short *)pbVar5 == 0x5042)) ||
           (*(short *)pbVar5 == 0x4652)) ||
          ((*(short *)pbVar5 == 0x544c || (*(short *)pbVar5 == 0x5447)))) ||
         ((*(short *)pbVar5 == 0x504c || (*(short *)pbVar5 == 0x5052)))) goto LAB_00203c6a;
      if (bVar21 != 0x75) goto LAB_00203f29;
    }
    else {
      if ((pbVar16 == (byte *)0x0) || (bVar21 != 0x75)) goto LAB_00203f29;
      if (pbVar16 < (byte *)0x2) goto LAB_00203d12;
    }
    if ((char)pbVar22[2] < -0x40) {
      ppuVar20 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218940;
      goto LAB_002040a7;
    }
LAB_00203d12:
    pbVar11 = pbVar22 + 2;
    pbVar8 = pbVar11;
    do {
      pbVar19 = pbVar8;
      if (pbVar19 == pbVar5 + (longlong)pbVar16) break;
      bVar21 = *pbVar19;
      uVar9 = (uint)bVar21;
      if ((char)bVar21 < '\0') {
        uVar14 = bVar21 & 0x1f;
        if (bVar21 < 0xe0) {
          pbVar8 = pbVar19 + 2;
          uVar9 = uVar14 << 6 | pbVar19[1] & 0x3f;
        }
        else {
          uVar9 = pbVar19[2] & 0x3f | (pbVar19[1] & 0x3f) << 6;
          if (bVar21 < 0xf0) {
            pbVar8 = pbVar19 + 3;
            uVar9 = uVar9 | uVar14 << 0xc;
          }
          else {
            pbVar8 = pbVar19 + 4;
            uVar9 = pbVar19[3] & 0x3f | uVar9 << 6 | (bVar21 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar8 = pbVar19 + 1;
      }
    } while (0xfffffff9 < uVar9 - 0x67 || 0xfffffff5 < uVar9 - 0x3a);
    if (pbVar16 == (byte *)0x2) {
      bVar21 = *pbVar11;
      if ((bVar21 == 0x2b) || (bVar21 == 0x2d)) goto LAB_00203f29;
    }
    else {
      if (pbVar16 == (byte *)0x1) goto LAB_00203f29;
      bVar21 = *pbVar11;
    }
    pbVar8 = (byte *)(ulonglong)(bVar21 == 0x2b);
    uVar6 = (longlong)(pbVar16 + -1) - (longlong)pbVar8;
    if (uVar6 < 9) {
      uVar9 = 0;
      if (pbVar16 + -1 != pbVar8) {
        uVar12 = 0;
        do {
          bVar21 = (pbVar11 + (longlong)pbVar8)[uVar12];
          uVar14 = bVar21 - 0x30;
          if (0x39 < bVar21) {
            uVar14 = (bVar21 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar14) goto LAB_00203f29;
          uVar9 = uVar9 << 4 | uVar14;
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
      }
    }
    else {
      uVar9 = 0;
      uVar12 = 0;
      do {
        bVar21 = (pbVar11 + (longlong)pbVar8)[uVar12];
        if (0xfffffff < uVar9) {
          uVar9 = bVar21 - 0x30;
          if (0x39 < bVar21) {
            uVar9 = (bVar21 - 0x41 & 0xffffffde) + 10;
          }
          uVar6 = (ulonglong)(uVar9 < 0x10) * 0x100 + 0x101;
          bVar2 = true;
          goto LAB_00203e97;
        }
        uVar14 = bVar21 - 0x30;
        if (0x39 < bVar21) {
          uVar14 = (bVar21 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar14) goto LAB_00203f29;
        uVar9 = uVar14 | uVar9 << 4;
        uVar12 = uVar12 + 1;
      } while (uVar6 != uVar12);
    }
    uVar6 = (ulonglong)uVar9 << 0x20;
    bVar2 = false;
LAB_00203e97:
    if ((((bVar2) || (((uint)(uVar6 >> 0x20) ^ 0xd800) - 0x110000 < 0xffef0800)) ||
        (pbVar19 != pbVar5 + (longlong)pbVar16)) ||
       ((uVar6 >> 0x25 == 0 || ((uint)(uVar6 - 0x7f00000000 >> 0x20) < 0x21)))) goto LAB_00203f29;
    uVar4 = (*(code *)PTR_fmt_0021a428)();
    cVar3 = (char)uVar4;
    param_1 = extraout_XMM0_Da_07;
  }
  pbVar22 = pbVar13 + (longlong)pbVar22;
  if (cVar3 == '\0') goto LAB_0020391a;
LAB_00203f76:
  uStack_34 = (uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
  goto LAB_00203f7b;
LAB_00203f29:
  cVar3 = (*(code *)PTR_write_str_00219e10)(param_1,unaff_R13);
  pbVar5 = pbStack_60;
  lVar23 = lVar23 + 1;
  param_1 = extraout_XMM0_Da_08;
  if (cVar3 != '\0') {
LAB_00203f7b:
    return (ulonglong)uStack_34;
  }
  goto LAB_002035b4;
}


