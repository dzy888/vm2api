// 000b0048 fmt

/* WARNING: Switch with 1 destination removed at 0x000b004e */
/* WARNING: Type propagation algorithm not settling */
/* <rustc_demangle[a2bba03bad1b7f1a]::DemangleStyle as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

ulonglong __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::DemangleStyle_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined4 param_1,longlong *param_2,longlong param_3)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined *puVar12;
  uint uVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  byte *pbVar23;
  undefined **ppuVar24;
  byte bVar25;
  byte *pbVar26;
  char *unaff_R13;
  char *unaff_R14;
  longlong lVar27;
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
  char *pcStack_50;
  char cStack_41;
  longlong lStack_40;
  undefined4 local_38;
  uint uStack_34;
  
  if (*param_2 == 0) {
    local_38 = (undefined4)param_2[1];
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
    lStack_40 = 0xb0085;
    uVar8 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_38,1);
    return uVar8;
  }
  pcStack_50 = (char *)param_2[1];
  lVar18 = param_2[2];
  pbVar11 = (byte *)*param_2;
  lVar27 = 0;
  lStack_40 = param_3;
LAB_000aec64:
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),lVar27 != lVar18);
  if (lVar27 != lVar18) {
    if (pcStack_50 == (char *)0x0) goto LAB_000af68c;
    bVar25 = *pbVar11;
    lVar22 = 0;
    unaff_R13 = (char *)0x0;
    pcVar19 = pcStack_50;
    do {
      if ((char)bVar25 < '\0') {
        bVar9 = bVar25 & 0x1f;
        uVar13 = (pbVar11 + 1)[(longlong)unaff_R13] & 0x3f;
        if (bVar25 < 0xe0) {
          uVar17 = (uint)bVar9 << 6;
        }
        else {
          uVar13 = (pbVar11 + 2)[(longlong)unaff_R13] & 0x3f | uVar13 << 6;
          if (bVar25 < 0xf0) {
            uVar17 = (uint)bVar9 << 0xc | uVar13;
            goto LAB_000aecf3;
          }
          uVar17 = (bVar9 & 7) << 0x12;
          uVar13 = (pbVar11 + 3)[(longlong)unaff_R13] & 0x3f | uVar13 << 6;
        }
        uVar17 = uVar17 | uVar13;
      }
      else {
        uVar17 = (uint)bVar25;
      }
LAB_000aecf3:
      if (9 < uVar17 - 0x30) goto LAB_000aed21;
      if ((char *)((longlong)pcStack_50 + 0xffffffffffffffffU) == unaff_R13) goto LAB_000af68c;
      bVar25 = (pbVar11 + 1)[(longlong)unaff_R13];
      if ((char)bVar25 < -0x40) {
        do {
          lVar18 = (longlong)pcStack_50 - (longlong)unaff_R13;
          ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2778;
          pcVar5 = Elf64_Ehdr_00000000.e_ident_magic_str;
LAB_000af6ae:
          (*(code *)PTR_slice_error_fail_000c3fc8)(lVar18,pcVar5,ppuVar24);
LAB_000af6b7:
          cVar4 = '\x01';
LAB_000af64b:
          puVar12 = &DAT_000c2598;
          cStack_41 = cVar4;
          (*(code *)PTR_unwrap_failed_000c3c78)
                    (&DAT_000c2598,&cStack_41,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27a8);
LAB_000af671:
          pcStack_50 = unaff_R13;
          (*(code *)PTR_slice_error_fail_000c3fc8)
                    ((longlong)puVar12 + 1,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2850);
          unaff_R13 = pcStack_50;
LAB_000af68c:
          (*(code *)PTR_unwrap_failed_000c3b08)();
        } while( true );
      }
      pcVar19 = (char *)((longlong)pcVar19 + 0xffffffffffffffff);
      unaff_R13 = unaff_R13 + 1;
      lVar22 = lVar22 + -1;
    } while( true );
  }
LAB_000af620:
  uStack_34 = (uint)pcVar5;
  goto LAB_000af62b;
LAB_000aed21:
  if (unaff_R13 == (char *)0x0) {
    cVar4 = '\0';
    goto LAB_000af64b;
  }
  if ((char)pbVar11[(longlong)unaff_R13] < -0x40) goto LAB_000af772;
  bVar9 = *pbVar11;
  if (unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) {
    cVar4 = '\x01';
    if (bVar9 == 0x2b) goto LAB_000af64b;
    if (bVar9 == 0x2d) goto LAB_000af64b;
  }
  pcVar10 = pcStack_50 + -(longlong)unaff_R13;
  pbVar26 = pbVar11 + (longlong)unaff_R13;
  pbVar15 = (byte *)(ulonglong)(bVar9 == 0x2b);
  uVar13 = (uint)pcVar5;
  if ((ulonglong)((longlong)unaff_R13 - (longlong)pbVar15) < 0x11) {
    if ((byte *)unaff_R13 != pbVar15) {
      lVar14 = 0;
      pcVar5 = (char *)0x0;
      do {
        uVar17 = (pbVar11 + (longlong)pbVar15)[lVar14] - 0x30;
        if (9 < uVar17) goto LAB_000af6b7;
        pcVar5 = (char *)((ulonglong)uVar17 + (longlong)pcVar5 * 10);
        lVar14 = lVar14 + 1;
      } while (-(longlong)pbVar15 + (longlong)unaff_R13 != lVar14);
      goto LAB_000aedb7;
    }
    unaff_R14 = (char *)0x0;
    pbStack_60 = pbVar26;
    pcStack_50 = pcVar10;
  }
  else {
    lVar14 = 0;
    pcVar5 = (char *)0x0;
    while (-(longlong)pbVar15 + (longlong)unaff_R13 != lVar14) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = pcVar5;
      uVar8 = SUB168(auVar2 * ZEXT816(10),0);
      bVar9 = (pbVar11 + (longlong)pbVar15)[lVar14];
      if (SUB168(auVar2 * ZEXT816(10),8) != 0) {
        cVar4 = ((byte)(bVar9 - 0x30) < 10) + '\x01';
        goto LAB_000af64b;
      }
      uVar17 = bVar9 - 0x30;
      if (9 < uVar17) goto LAB_000af6b7;
      lVar14 = lVar14 + 1;
      pcVar5 = (char *)(uVar8 + uVar17);
      if (CARRY8(uVar8,(ulonglong)uVar17)) {
        cVar4 = '\x02';
        goto LAB_000af64b;
      }
    }
LAB_000aedb7:
    pbVar15 = (byte *)(pcStack_50 + -(longlong)pcVar5);
    if (pcVar5 == (char *)0x0) {
      unaff_R14 = (char *)0x0;
      pbStack_60 = pbVar11 + (longlong)unaff_R13;
      pcStack_50 = (char *)(pbVar15 + -(longlong)unaff_R13);
    }
    else {
      if (pcVar5 < pcVar10) {
        if ((char)(pbVar11 + (longlong)pcVar5)[(longlong)unaff_R13] < -0x40) {
LAB_000af6d3:
          lVar18 = (longlong)pcStack_50 - (longlong)unaff_R13;
          ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c27c0;
          goto LAB_000af6ae;
        }
      }
      else if (pbVar15 != (byte *)unaff_R13) goto LAB_000af6d3;
      if (pcVar5 < pcVar10) {
        if ((char)(pbVar11 + (longlong)pcVar5)[(longlong)unaff_R13] < -0x40) {
LAB_000af6e8:
          (*(code *)PTR_slice_error_fail_000c3fc8)
                    (pcVar5,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27d8);
          goto LAB_000af772;
        }
        pcStack_50 = (char *)(pbVar15 + -(longlong)unaff_R13);
        pcVar10 = pcVar5;
      }
      else {
        if (pbVar15 != (byte *)unaff_R13) goto LAB_000af6e8;
        pcStack_50 = (char *)0x0;
      }
      if ((((*(byte *)(lStack_40 + 0x12) & 0x80) != 0) && (lVar27 + 1 == lVar18)) &&
         (bVar25 == 0x68)) {
        if ((pcVar10 != Elf64_Ehdr_00000000.e_ident_magic_str) &&
           ((char)(pbVar11 + 1)[(longlong)unaff_R13] < -0x40)) goto LAB_000af745;
        pbVar15 = pbVar11 + (longlong)unaff_R13 + 1;
        if (pcVar5 < pcVar19) {
          pcVar19 = pcVar5;
        }
        do {
          if (pbVar11 + (longlong)pcVar19 + -lVar22 == pbVar15) {
            uStack_34 = 0;
            goto LAB_000af62b;
          }
          bVar25 = *pbVar15;
          uVar17 = (uint)bVar25;
          if ((char)bVar25 < '\0') {
            uVar21 = bVar25 & 0x1f;
            pbVar1 = pbVar15 + 1;
            if (bVar25 < 0xe0) {
              pbVar15 = pbVar15 + 2;
              uVar17 = uVar21 << 6 | *pbVar1 & 0x3f;
            }
            else {
              uVar17 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
              if (bVar25 < 0xf0) {
                pbVar15 = pbVar15 + 3;
                uVar17 = uVar17 | uVar21 << 0xc;
              }
              else {
                pbVar1 = pbVar15 + 3;
                pbVar15 = pbVar15 + 4;
                uVar17 = *pbVar1 & 0x3f | uVar17 << 6 | (bVar25 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar15 = pbVar15 + 1;
          }
          uVar21 = uVar17 - 0x30;
          if (0x39 < uVar17) {
            uVar21 = (uVar17 - 0x41 & 0xffffffde) + 10;
          }
        } while (uVar21 < 0x10);
      }
      unaff_R14 = pcVar10;
      pbStack_60 = pbVar11 + (longlong)pcVar5 + (longlong)unaff_R13;
    }
  }
  uStack_34 = uVar13;
  if ((lVar27 != 0) &&
     (cVar4 = (*(code *)PTR_write_str_000c3d28)(), param_1 = extraout_XMM0_Da, cVar4 != '\0'))
  goto LAB_000af62b;
  if ((Elf64_Ehdr_00000000.e_ident_magic_str < unaff_R14) && (*(short *)pbVar26 == 0x245f)) {
    if ((char)(pbVar11 + 1)[(longlong)unaff_R13] < -0x40) {
      param_1 = (*(code *)PTR_slice_error_fail_000c3fc8)
                          (unaff_R14,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27f0);
LAB_000af745:
      ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2700;
LAB_000af757:
      (*(code *)PTR_slice_error_fail_000c3fc8)(param_1,1,ppuVar24);
LAB_000af772:
      do {
        (*(code *)PTR_slice_error_fail_000c3fc8)(unaff_R13);
      } while( true );
    }
    pbVar26 = pbVar11 + (longlong)unaff_R13 + 1;
    unaff_R14 = (char *)((longlong)unaff_R14 + 0xffffffffffffffff);
  }
LAB_000aefca:
  unaff_R13 = unaff_R14;
  if (unaff_R13 == (char *)0x0) {
LAB_000af015:
    pbVar11 = pbVar26;
    pcVar5 = (char *)0x0;
    do {
      pcVar19 = pcVar5;
      unaff_R14 = unaff_R13;
      if (pbVar11 == pbVar26 + (longlong)unaff_R13) goto LAB_000af5d9;
      bVar25 = *pbVar11;
      uVar13 = (uint)bVar25;
      if ((char)bVar25 < '\0') {
        uVar17 = bVar25 & 0x1f;
        if (bVar25 < 0xe0) {
          pbVar15 = pbVar11 + 2;
          uVar13 = uVar17 << 6 | pbVar11[1] & 0x3f;
        }
        else {
          uVar13 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (bVar25 < 0xf0) {
            pbVar15 = pbVar11 + 3;
            uVar13 = uVar13 | uVar17 << 0xc;
          }
          else {
            pbVar15 = pbVar11 + 4;
            uVar13 = pbVar11[3] & 0x3f | uVar13 << 6 | (bVar25 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar15 = pbVar11 + 1;
      }
    } while ((uVar13 != 0x24) &&
            (lVar22 = (longlong)pcVar19 - (longlong)pbVar11, pbVar11 = pbVar15,
            pcVar5 = (char *)(pbVar15 + lVar22), uVar13 != 0x2e));
    if (pcVar19 == (char *)0x0) {
      uVar6 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar6 != '\0') goto LAB_000af626;
      pcVar5 = (char *)0x0;
      param_1 = extraout_XMM0_Da_02;
LAB_000af21a:
      unaff_R14 = unaff_R13 + -(longlong)pcVar5;
      pbVar26 = pbVar26 + (longlong)pcVar5;
LAB_000af3af:
      goto LAB_000aefca;
    }
    if (pcVar19 < unaff_R13) {
      if (-0x41 < (char)pbVar26[(longlong)pcVar19]) {
LAB_000af183:
        uVar6 = (*(code *)PTR_write_str_000c3d28)();
        if ((char)uVar6 != '\0') goto LAB_000af626;
        param_1 = extraout_XMM0_Da_03;
        if (pcVar19 < unaff_R13) {
          if (-0x41 < (char)pbVar26[(longlong)pcVar19]) {
            pcVar5 = pcVar19;
            goto LAB_000af21a;
          }
          goto LAB_000af772;
        }
        pcVar5 = unaff_R13;
        if (pcVar19 != unaff_R13) goto LAB_000af772;
        goto LAB_000af21a;
      }
    }
    else if (pcVar19 == unaff_R13) goto LAB_000af183;
    (*(code *)PTR_slice_error_fail_000c3fc8)
              (pcVar19,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2808);
    pcVar5 = unaff_R13;
    goto LAB_000af620;
  }
  if (*pbVar26 == 0x24) {
    if ((unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) || (-0x41 < (char)pbVar26[1])) {
      unaff_R14 = (char *)((longlong)unaff_R13 + 0xffffffffffffffff);
      pbVar11 = pbVar26 + 1;
      uVar8 = 0;
      do {
        uVar7 = (longlong)unaff_R14 - uVar8;
        if (uVar7 < 0x10) {
          uVar16 = 0;
          if (uVar7 != 0) {
            do {
              if ((pbVar11 + uVar8)[uVar16] == 0x24) {
                lVar22 = 1;
                uVar7 = uVar16;
                goto LAB_000af131;
              }
              uVar16 = uVar16 + 1;
            } while (uVar7 != uVar16);
            uVar16 = uVar7;
          }
          lVar22 = 0;
          uVar7 = uVar16;
        }
        else {
          lVar22 = (*(code *)PTR_memchr_aligned_000c3cb0)();
          param_1 = extraout_XMM0_Da_01;
        }
LAB_000af131:
        if (lVar22 != 1) goto LAB_000af5d9;
        puVar12 = (undefined *)(uVar8 + uVar7);
        if ((puVar12 < unaff_R14) && (pbVar11[(longlong)puVar12] == 0x24)) goto LAB_000af225;
        uVar8 = uVar8 + 1 + uVar7;
        if (unaff_R14 < uVar8) goto LAB_000af5d9;
      } while( true );
    }
    goto LAB_000af772;
  }
  if (*pbVar26 != 0x2e) goto LAB_000af015;
  if (unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) {
    uVar6 = (*(code *)PTR_write_str_000c3d28)();
    param_1 = extraout_XMM0_Da_00;
    if ((char)uVar6 == '\0') {
LAB_000af3a9:
      unaff_R14 = (char *)((longlong)unaff_R13 + 0xffffffffffffffff);
      pbVar26 = pbVar26 + 1;
      goto LAB_000af3af;
    }
  }
  else {
    if ((char)pbVar26[1] < -0x40) goto LAB_000af772;
    bVar25 = pbVar26[1];
    uVar13 = (uint)bVar25;
    if ((char)bVar25 < '\0') {
      uVar17 = bVar25 & 0x1f;
      if (bVar25 < 0xe0) {
        uVar13 = uVar17 << 6 | pbVar26[2] & 0x3f;
      }
      else {
        uVar13 = pbVar26[3] & 0x3f | (pbVar26[2] & 0x3f) << 6;
        if (bVar25 < 0xf0) {
          uVar13 = uVar13 | uVar17 << 0xc;
        }
        else {
          uVar13 = pbVar26[4] & 0x3f | uVar13 << 6 | (bVar25 & 7) << 0x12;
        }
      }
    }
    if (uVar13 != 0x2e) {
      uVar6 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar6 != '\0') goto LAB_000af626;
      param_1 = extraout_XMM0_Da_06;
      if (-0x41 < (char)pbVar26[1]) goto LAB_000af3a9;
      goto LAB_000af772;
    }
    uVar6 = (*(code *)PTR_write_str_000c3d28)();
    if ((char)uVar6 == '\0') {
      if ((unaff_R13 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) || (-0x41 < (char)pbVar26[2])) {
        unaff_R14 = (char *)((longlong)unaff_R13 + 0xfffffffffffffffe);
        pbVar26 = pbVar26 + 2;
        param_1 = extraout_XMM0_Da_05;
        goto LAB_000af3af;
      }
      goto LAB_000af772;
    }
  }
  goto LAB_000af626;
LAB_000af225:
  bVar25 = *pbVar11;
  if ((char)bVar25 < -0x40) goto LAB_000af671;
  uVar8 = (longlong)puVar12 + 2;
  unaff_R14 = unaff_R13 + -uVar8;
  if (unaff_R13 < uVar8 || unaff_R14 == (char *)0x0) {
    if (unaff_R14 != (char *)0x0) goto LAB_000af772;
  }
  else if ((char)pbVar26[uVar8] < -0x40) goto LAB_000af772;
  if (puVar12 == Elf64_Ehdr_00000000.e_ident_magic_str) {
    if (*pbVar11 != 0x43) {
      if (bVar25 != 0x75) goto LAB_000af5d9;
      goto LAB_000af3c2;
    }
LAB_000af31a:
    uVar6 = (*(code *)PTR_write_str_000c3d28)();
    cVar4 = (char)uVar6;
    param_1 = extraout_XMM0_Da_04;
  }
  else {
    if (puVar12 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
      if (((((*(short *)pbVar11 == 0x5053) || (*(short *)pbVar11 == 0x5042)) ||
           (*(short *)pbVar11 == 0x4652)) ||
          ((*(short *)pbVar11 == 0x544c || (*(short *)pbVar11 == 0x5447)))) ||
         ((*(short *)pbVar11 == 0x504c || (*(short *)pbVar11 == 0x5052)))) goto LAB_000af31a;
      if (bVar25 != 0x75) goto LAB_000af5d9;
    }
    else {
      if ((puVar12 == (undefined *)0x0) || (bVar25 != 0x75)) goto LAB_000af5d9;
      if (puVar12 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000af3c2;
    }
    if ((char)pbVar26[2] < -0x40) {
      ppuVar24 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2880;
      goto LAB_000af757;
    }
LAB_000af3c2:
    pbVar1 = pbVar26 + 2;
    pbVar15 = pbVar1;
    do {
      pbVar23 = pbVar15;
      if (pbVar23 == pbVar11 + (longlong)puVar12) break;
      bVar25 = *pbVar23;
      uVar13 = (uint)bVar25;
      if ((char)bVar25 < '\0') {
        uVar17 = bVar25 & 0x1f;
        if (bVar25 < 0xe0) {
          pbVar15 = pbVar23 + 2;
          uVar13 = uVar17 << 6 | pbVar23[1] & 0x3f;
        }
        else {
          uVar13 = pbVar23[2] & 0x3f | (pbVar23[1] & 0x3f) << 6;
          if (bVar25 < 0xf0) {
            pbVar15 = pbVar23 + 3;
            uVar13 = uVar13 | uVar17 << 0xc;
          }
          else {
            pbVar15 = pbVar23 + 4;
            uVar13 = pbVar23[3] & 0x3f | uVar13 << 6 | (bVar25 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar15 = pbVar23 + 1;
      }
    } while (0xfffffff9 < uVar13 - 0x67 || 0xfffffff5 < uVar13 - 0x3a);
    if (puVar12 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
      bVar25 = *pbVar1;
      if ((bVar25 == 0x2b) || (bVar25 == 0x2d)) goto LAB_000af5d9;
    }
    else {
      if (puVar12 == Elf64_Ehdr_00000000.e_ident_magic_str) goto LAB_000af5d9;
      bVar25 = *pbVar1;
    }
    uVar16 = (ulonglong)(bVar25 == 0x2b);
    uVar7 = ((longlong)puVar12 + 0xffffffffffffffffU) - uVar16;
    if (uVar7 < 9) {
      uVar13 = 0;
      if ((longlong)puVar12 + 0xffffffffffffffffU != uVar16) {
        uVar20 = 0;
        do {
          bVar25 = (pbVar1 + uVar16)[uVar20];
          uVar17 = bVar25 - 0x30;
          if (0x39 < bVar25) {
            uVar17 = (bVar25 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar17) goto LAB_000af5d9;
          uVar13 = uVar13 << 4 | uVar17;
          uVar20 = uVar20 + 1;
        } while (uVar7 != uVar20);
      }
    }
    else {
      uVar13 = 0;
      uVar20 = 0;
      do {
        bVar25 = (pbVar1 + uVar16)[uVar20];
        if (0xfffffff < uVar13) {
          uVar13 = bVar25 - 0x30;
          if (0x39 < bVar25) {
            uVar13 = (bVar25 - 0x41 & 0xffffffde) + 10;
          }
          uVar7 = (ulonglong)(uVar13 < 0x10) * 0x100 + 0x101;
          bVar3 = true;
          goto LAB_000af547;
        }
        uVar17 = bVar25 - 0x30;
        if (0x39 < bVar25) {
          uVar17 = (bVar25 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar17) goto LAB_000af5d9;
        uVar13 = uVar17 | uVar13 << 4;
        uVar20 = uVar20 + 1;
      } while (uVar7 != uVar20);
    }
    uVar7 = (ulonglong)uVar13 << 0x20;
    bVar3 = false;
LAB_000af547:
    if ((((bVar3) || (((uint)(uVar7 >> 0x20) ^ 0xd800) - 0x110000 < 0xffef0800)) ||
        (pbVar23 != pbVar11 + (longlong)puVar12)) ||
       ((uVar7 >> 0x25 == 0 || ((uint)(uVar7 - 0x7f00000000 >> 0x20) < 0x21)))) goto LAB_000af5d9;
    uVar6 = (*(code *)PTR_fmt_000c4030)();
    cVar4 = (char)uVar6;
    param_1 = extraout_XMM0_Da_07;
  }
  pbVar26 = pbVar26 + uVar8;
  if (cVar4 == '\0') goto LAB_000aefca;
LAB_000af626:
  uStack_34 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  goto LAB_000af62b;
LAB_000af5d9:
  cVar4 = (*(code *)PTR_write_str_000c3d28)(param_1,unaff_R13);
  pbVar11 = pbStack_60;
  lVar27 = lVar27 + 1;
  param_1 = extraout_XMM0_Da_08;
  if (cVar4 != '\0') {
LAB_000af62b:
    return (ulonglong)uStack_34;
  }
  goto LAB_000aec64;
}


