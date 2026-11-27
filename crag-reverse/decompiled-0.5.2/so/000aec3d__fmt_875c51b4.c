// 000aec3d fmt

/* WARNING: Type propagation algorithm not settling */
/* <rustc_demangle[a2bba03bad1b7f1a]::legacy::Demangle as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
    */

undefined4 __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::legacy::Demangle_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  undefined *puVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  char *pcVar19;
  ulonglong uVar20;
  longlong lVar21;
  byte *pbVar22;
  undefined **ppuVar23;
  byte bVar24;
  byte *pbVar25;
  char *unaff_R13;
  undefined4 uVar26;
  char *unaff_R14;
  longlong lVar27;
  byte *local_60;
  char *local_50;
  char local_41;
  longlong local_40;
  undefined4 local_34;
  
  local_50 = (char *)param_1[1];
  lVar18 = param_1[2];
  pbVar12 = (byte *)*param_1;
  lVar27 = 0;
  local_40 = param_2;
LAB_000aec64:
  pcVar6 = (char *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),lVar27 != lVar18);
  if (lVar27 != lVar18) {
    if (local_50 == (char *)0x0) goto LAB_000af68c;
    bVar24 = *pbVar12;
    lVar21 = 0;
    unaff_R13 = (char *)0x0;
    pcVar19 = local_50;
    do {
      if ((char)bVar24 < '\0') {
        bVar9 = bVar24 & 0x1f;
        uVar17 = (pbVar12 + 1)[(longlong)unaff_R13] & 0x3f;
        if (bVar24 < 0xe0) {
          uVar10 = (uint)bVar9 << 6;
        }
        else {
          uVar17 = (pbVar12 + 2)[(longlong)unaff_R13] & 0x3f | uVar17 << 6;
          if (bVar24 < 0xf0) {
            uVar10 = (uint)bVar9 << 0xc | uVar17;
            goto LAB_000aecf3;
          }
          uVar10 = (bVar9 & 7) << 0x12;
          uVar17 = (pbVar12 + 3)[(longlong)unaff_R13] & 0x3f | uVar17 << 6;
        }
        uVar10 = uVar10 | uVar17;
      }
      else {
        uVar10 = (uint)bVar24;
      }
LAB_000aecf3:
      if (9 < uVar10 - 0x30) goto LAB_000aed21;
      if ((char *)((longlong)local_50 + 0xffffffffffffffffU) == unaff_R13) goto LAB_000af68c;
      bVar24 = (pbVar12 + 1)[(longlong)unaff_R13];
      if ((char)bVar24 < -0x40) {
        do {
          lVar18 = (longlong)local_50 - (longlong)unaff_R13;
          ppuVar23 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2778;
          pcVar6 = Elf64_Ehdr_00000000.e_ident_magic_str;
LAB_000af6ae:
          (*(code *)PTR_slice_error_fail_000c3fc8)(lVar18,pcVar6,ppuVar23);
LAB_000af6b7:
          cVar4 = '\x01';
LAB_000af64b:
          puVar13 = &DAT_000c2598;
          local_41 = cVar4;
          (*(code *)PTR_unwrap_failed_000c3c78)
                    (&DAT_000c2598,&local_41,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27a8);
LAB_000af671:
          local_50 = unaff_R13;
          (*(code *)PTR_slice_error_fail_000c3fc8)
                    ((longlong)puVar13 + 1,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2850);
          unaff_R13 = local_50;
LAB_000af68c:
          (*(code *)PTR_unwrap_failed_000c3b08)();
        } while( true );
      }
      pcVar19 = (char *)((longlong)pcVar19 + 0xffffffffffffffff);
      unaff_R13 = unaff_R13 + 1;
      lVar21 = lVar21 + -1;
    } while( true );
  }
LAB_000af620:
  return (int)pcVar6;
LAB_000aed21:
  if (unaff_R13 == (char *)0x0) {
    cVar4 = '\0';
    goto LAB_000af64b;
  }
  if ((char)pbVar12[(longlong)unaff_R13] < -0x40) goto LAB_000af772;
  bVar9 = *pbVar12;
  if (unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) {
    cVar4 = '\x01';
    if (bVar9 == 0x2b) goto LAB_000af64b;
    if (bVar9 == 0x2d) goto LAB_000af64b;
  }
  pcVar11 = local_50 + -(longlong)unaff_R13;
  pbVar25 = pbVar12 + (longlong)unaff_R13;
  pbVar15 = (byte *)(ulonglong)(bVar9 == 0x2b);
  uVar26 = SUB84(pcVar6,0);
  if ((ulonglong)((longlong)unaff_R13 - (longlong)pbVar15) < 0x11) {
    if ((byte *)unaff_R13 != pbVar15) {
      lVar14 = 0;
      pcVar6 = (char *)0x0;
      do {
        uVar17 = (pbVar12 + (longlong)pbVar15)[lVar14] - 0x30;
        if (9 < uVar17) goto LAB_000af6b7;
        pcVar6 = (char *)((ulonglong)uVar17 + (longlong)pcVar6 * 10);
        lVar14 = lVar14 + 1;
      } while (-(longlong)pbVar15 + (longlong)unaff_R13 != lVar14);
      goto LAB_000aedb7;
    }
    unaff_R14 = (char *)0x0;
    local_60 = pbVar25;
    local_50 = pcVar11;
  }
  else {
    lVar14 = 0;
    pcVar6 = (char *)0x0;
    while (-(longlong)pbVar15 + (longlong)unaff_R13 != lVar14) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = pcVar6;
      uVar5 = SUB168(auVar2 * ZEXT816(10),0);
      bVar9 = (pbVar12 + (longlong)pbVar15)[lVar14];
      if (SUB168(auVar2 * ZEXT816(10),8) != 0) {
        cVar4 = ((byte)(bVar9 - 0x30) < 10) + '\x01';
        goto LAB_000af64b;
      }
      uVar17 = bVar9 - 0x30;
      if (9 < uVar17) goto LAB_000af6b7;
      lVar14 = lVar14 + 1;
      pcVar6 = (char *)(uVar5 + uVar17);
      if (CARRY8(uVar5,(ulonglong)uVar17)) {
        cVar4 = '\x02';
        goto LAB_000af64b;
      }
    }
LAB_000aedb7:
    pbVar15 = (byte *)(local_50 + -(longlong)pcVar6);
    if (pcVar6 == (char *)0x0) {
      unaff_R14 = (char *)0x0;
      local_60 = pbVar12 + (longlong)unaff_R13;
      local_50 = (char *)(pbVar15 + -(longlong)unaff_R13);
    }
    else {
      if (pcVar6 < pcVar11) {
        if ((char)(pbVar12 + (longlong)pcVar6)[(longlong)unaff_R13] < -0x40) {
LAB_000af6d3:
          lVar18 = (longlong)local_50 - (longlong)unaff_R13;
          ppuVar23 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c27c0;
          goto LAB_000af6ae;
        }
      }
      else if (pbVar15 != (byte *)unaff_R13) goto LAB_000af6d3;
      if (pcVar6 < pcVar11) {
        if ((char)(pbVar12 + (longlong)pcVar6)[(longlong)unaff_R13] < -0x40) {
LAB_000af6e8:
          (*(code *)PTR_slice_error_fail_000c3fc8)
                    (pcVar6,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27d8);
          goto LAB_000af772;
        }
        local_50 = (char *)(pbVar15 + -(longlong)unaff_R13);
        pcVar11 = pcVar6;
      }
      else {
        if (pbVar15 != (byte *)unaff_R13) goto LAB_000af6e8;
        local_50 = (char *)0x0;
      }
      if ((((*(byte *)(local_40 + 0x12) & 0x80) != 0) && (lVar27 + 1 == lVar18)) && (bVar24 == 0x68)
         ) {
        if ((pcVar11 != Elf64_Ehdr_00000000.e_ident_magic_str) &&
           ((char)(pbVar12 + 1)[(longlong)unaff_R13] < -0x40)) goto LAB_000af757;
        pbVar15 = pbVar12 + (longlong)unaff_R13 + 1;
        if (pcVar6 < pcVar19) {
          pcVar19 = pcVar6;
        }
        do {
          if (pbVar12 + (longlong)pcVar19 + -lVar21 == pbVar15) {
            return 0;
          }
          bVar24 = *pbVar15;
          uVar17 = (uint)bVar24;
          if ((char)bVar24 < '\0') {
            uVar10 = bVar24 & 0x1f;
            pbVar1 = pbVar15 + 1;
            if (bVar24 < 0xe0) {
              pbVar15 = pbVar15 + 2;
              uVar17 = uVar10 << 6 | *pbVar1 & 0x3f;
            }
            else {
              uVar17 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
              if (bVar24 < 0xf0) {
                pbVar15 = pbVar15 + 3;
                uVar17 = uVar17 | uVar10 << 0xc;
              }
              else {
                pbVar1 = pbVar15 + 3;
                pbVar15 = pbVar15 + 4;
                uVar17 = *pbVar1 & 0x3f | uVar17 << 6 | (bVar24 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar15 = pbVar15 + 1;
          }
          uVar10 = uVar17 - 0x30;
          if (0x39 < uVar17) {
            uVar10 = (uVar17 - 0x41 & 0xffffffde) + 10;
          }
        } while (uVar10 < 0x10);
      }
      unaff_R14 = pcVar11;
      local_60 = pbVar12 + (longlong)pcVar6 + (longlong)unaff_R13;
    }
  }
  local_34 = uVar26;
  if ((lVar27 != 0) && (cVar4 = (*(code *)PTR_write_str_000c3d28)(), cVar4 != '\0')) {
    return local_34;
  }
  if ((Elf64_Ehdr_00000000.e_ident_magic_str < unaff_R14) && (*(short *)pbVar25 == 0x245f)) {
    if ((char)(pbVar12 + 1)[(longlong)unaff_R13] < -0x40) {
      (*(code *)PTR_slice_error_fail_000c3fc8)
                (unaff_R14,1,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c27f0);
LAB_000af757:
      (*(code *)PTR_slice_error_fail_000c3fc8)();
LAB_000af772:
      do {
        (*(code *)PTR_slice_error_fail_000c3fc8)(unaff_R13);
      } while( true );
    }
    pbVar25 = pbVar12 + (longlong)unaff_R13 + 1;
    unaff_R14 = (char *)((longlong)unaff_R14 + 0xffffffffffffffff);
  }
LAB_000aefca:
  unaff_R13 = unaff_R14;
  if (unaff_R13 == (char *)0x0) {
LAB_000af015:
    pbVar12 = pbVar25;
    pcVar6 = (char *)0x0;
    do {
      pcVar19 = pcVar6;
      unaff_R14 = unaff_R13;
      if (pbVar12 == pbVar25 + (longlong)unaff_R13) goto LAB_000af5d9;
      bVar24 = *pbVar12;
      uVar17 = (uint)bVar24;
      if ((char)bVar24 < '\0') {
        uVar10 = bVar24 & 0x1f;
        if (bVar24 < 0xe0) {
          pbVar15 = pbVar12 + 2;
          uVar17 = uVar10 << 6 | pbVar12[1] & 0x3f;
        }
        else {
          uVar17 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (bVar24 < 0xf0) {
            pbVar15 = pbVar12 + 3;
            uVar17 = uVar17 | uVar10 << 0xc;
          }
          else {
            pbVar15 = pbVar12 + 4;
            uVar17 = pbVar12[3] & 0x3f | uVar17 << 6 | (bVar24 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar15 = pbVar12 + 1;
      }
    } while ((uVar17 != 0x24) &&
            (lVar21 = (longlong)pcVar19 - (longlong)pbVar12, pbVar12 = pbVar15,
            pcVar6 = (char *)(pbVar15 + lVar21), uVar17 != 0x2e));
    if (pcVar19 == (char *)0x0) {
      uVar7 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar7 != '\0') goto LAB_000af626;
      pcVar6 = (char *)0x0;
    }
    else {
      if (unaff_R13 <= pcVar19) {
        if (pcVar19 == unaff_R13) goto LAB_000af183;
LAB_000af608:
        (*(code *)PTR_slice_error_fail_000c3fc8)
                  (pcVar19,0,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c2808);
        pcVar6 = unaff_R13;
        goto LAB_000af620;
      }
      if ((char)pbVar25[(longlong)pcVar19] < -0x40) goto LAB_000af608;
LAB_000af183:
      uVar7 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar7 != '\0') goto LAB_000af626;
      if (unaff_R13 <= pcVar19) {
        pcVar6 = unaff_R13;
        if (pcVar19 == unaff_R13) goto LAB_000af21a;
        goto LAB_000af772;
      }
      if ((char)pbVar25[(longlong)pcVar19] < -0x40) goto LAB_000af772;
      pcVar6 = pcVar19;
    }
LAB_000af21a:
    unaff_R14 = unaff_R13 + -(longlong)pcVar6;
    pbVar25 = pbVar25 + (longlong)pcVar6;
  }
  else {
    if (*pbVar25 == 0x24) {
      if ((unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) || (-0x41 < (char)pbVar25[1])) {
        unaff_R14 = (char *)((longlong)unaff_R13 + 0xffffffffffffffff);
        pbVar12 = pbVar25 + 1;
        uVar5 = 0;
        do {
          uVar8 = (longlong)unaff_R14 - uVar5;
          if (uVar8 < 0x10) {
            uVar16 = 0;
            if (uVar8 != 0) {
              do {
                if ((pbVar12 + uVar5)[uVar16] == 0x24) {
                  lVar21 = 1;
                  uVar8 = uVar16;
                  goto LAB_000af131;
                }
                uVar16 = uVar16 + 1;
              } while (uVar8 != uVar16);
              uVar16 = uVar8;
            }
            lVar21 = 0;
            uVar8 = uVar16;
          }
          else {
            lVar21 = (*(code *)PTR_memchr_aligned_000c3cb0)();
          }
LAB_000af131:
          if (lVar21 != 1) goto LAB_000af5d9;
          puVar13 = (undefined *)(uVar5 + uVar8);
          if ((puVar13 < unaff_R14) && (pbVar12[(longlong)puVar13] == 0x24)) goto LAB_000af225;
          uVar5 = uVar5 + 1 + uVar8;
          if (unaff_R14 < uVar5) goto LAB_000af5d9;
        } while( true );
      }
      goto LAB_000af772;
    }
    if (*pbVar25 != 0x2e) goto LAB_000af015;
    if (unaff_R13 == Elf64_Ehdr_00000000.e_ident_magic_str) {
      uVar7 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar7 != '\0') goto LAB_000af626;
    }
    else {
      if ((char)pbVar25[1] < -0x40) goto LAB_000af772;
      bVar24 = pbVar25[1];
      uVar17 = (uint)bVar24;
      if ((char)bVar24 < '\0') {
        uVar10 = bVar24 & 0x1f;
        if (bVar24 < 0xe0) {
          uVar17 = uVar10 << 6 | pbVar25[2] & 0x3f;
        }
        else {
          uVar17 = pbVar25[3] & 0x3f | (pbVar25[2] & 0x3f) << 6;
          if (bVar24 < 0xf0) {
            uVar17 = uVar17 | uVar10 << 0xc;
          }
          else {
            uVar17 = pbVar25[4] & 0x3f | uVar17 << 6 | (bVar24 & 7) << 0x12;
          }
        }
      }
      if (uVar17 == 0x2e) {
        uVar7 = (*(code *)PTR_write_str_000c3d28)();
        if ((char)uVar7 != '\0') goto LAB_000af626;
        if ((unaff_R13 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) || (-0x41 < (char)pbVar25[2])) {
          unaff_R14 = (char *)((longlong)unaff_R13 + 0xfffffffffffffffe);
          pbVar25 = pbVar25 + 2;
          goto LAB_000af3af;
        }
        goto LAB_000af772;
      }
      uVar7 = (*(code *)PTR_write_str_000c3d28)();
      if ((char)uVar7 != '\0') goto LAB_000af626;
      if ((char)pbVar25[1] < -0x40) goto LAB_000af772;
    }
    unaff_R14 = (char *)((longlong)unaff_R13 + 0xffffffffffffffff);
    pbVar25 = pbVar25 + 1;
  }
LAB_000af3af:
  goto LAB_000aefca;
LAB_000af225:
  bVar24 = *pbVar12;
  if ((char)bVar24 < -0x40) goto LAB_000af671;
  uVar5 = (longlong)puVar13 + 2;
  unaff_R14 = unaff_R13 + -uVar5;
  if (unaff_R13 < uVar5 || unaff_R14 == (char *)0x0) {
    if (unaff_R14 != (char *)0x0) goto LAB_000af772;
  }
  else if ((char)pbVar25[uVar5] < -0x40) goto LAB_000af772;
  if (puVar13 == Elf64_Ehdr_00000000.e_ident_magic_str) {
    if (*pbVar12 == 0x43) {
LAB_000af31a:
      uVar7 = (*(code *)PTR_write_str_000c3d28)();
      cVar4 = (char)uVar7;
      goto joined_r0x000af32e;
    }
    if (bVar24 != 0x75) goto LAB_000af5d9;
  }
  else {
    if (puVar13 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
      if (((((*(short *)pbVar12 == 0x5053) || (*(short *)pbVar12 == 0x5042)) ||
           (*(short *)pbVar12 == 0x4652)) ||
          ((*(short *)pbVar12 == 0x544c || (*(short *)pbVar12 == 0x5447)))) ||
         ((*(short *)pbVar12 == 0x504c || (*(short *)pbVar12 == 0x5052)))) goto LAB_000af31a;
      if (bVar24 != 0x75) goto LAB_000af5d9;
    }
    else {
      if ((puVar13 == (undefined *)0x0) || (bVar24 != 0x75)) goto LAB_000af5d9;
      if (puVar13 < Elf64_Ehdr_00000000.e_ident_magic_str + 1) goto LAB_000af3c2;
    }
    if ((char)pbVar25[2] < -0x40) goto LAB_000af757;
  }
LAB_000af3c2:
  pbVar1 = pbVar25 + 2;
  pbVar15 = pbVar1;
  do {
    pbVar22 = pbVar15;
    if (pbVar22 == pbVar12 + (longlong)puVar13) break;
    bVar24 = *pbVar22;
    uVar17 = (uint)bVar24;
    if ((char)bVar24 < '\0') {
      uVar10 = bVar24 & 0x1f;
      if (bVar24 < 0xe0) {
        pbVar15 = pbVar22 + 2;
        uVar17 = uVar10 << 6 | pbVar22[1] & 0x3f;
      }
      else {
        uVar17 = pbVar22[2] & 0x3f | (pbVar22[1] & 0x3f) << 6;
        if (bVar24 < 0xf0) {
          pbVar15 = pbVar22 + 3;
          uVar17 = uVar17 | uVar10 << 0xc;
        }
        else {
          pbVar15 = pbVar22 + 4;
          uVar17 = pbVar22[3] & 0x3f | uVar17 << 6 | (bVar24 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar15 = pbVar22 + 1;
    }
  } while (0xfffffff9 < uVar17 - 0x67 || 0xfffffff5 < uVar17 - 0x3a);
  if (puVar13 == Elf64_Ehdr_00000000.e_ident_magic_str + 1) {
    bVar24 = *pbVar1;
    if ((bVar24 == 0x2b) || (bVar24 == 0x2d)) goto LAB_000af5d9;
  }
  else {
    if (puVar13 == Elf64_Ehdr_00000000.e_ident_magic_str) goto LAB_000af5d9;
    bVar24 = *pbVar1;
  }
  uVar16 = (ulonglong)(bVar24 == 0x2b);
  uVar8 = ((longlong)puVar13 + 0xffffffffffffffffU) - uVar16;
  if (uVar8 < 9) {
    uVar17 = 0;
    if ((longlong)puVar13 + 0xffffffffffffffffU != uVar16) {
      uVar20 = 0;
      do {
        bVar24 = (pbVar1 + uVar16)[uVar20];
        uVar10 = bVar24 - 0x30;
        if (0x39 < bVar24) {
          uVar10 = (bVar24 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar10) goto LAB_000af5d9;
        uVar17 = uVar17 << 4 | uVar10;
        uVar20 = uVar20 + 1;
      } while (uVar8 != uVar20);
    }
  }
  else {
    uVar17 = 0;
    uVar20 = 0;
    do {
      bVar24 = (pbVar1 + uVar16)[uVar20];
      if (0xfffffff < uVar17) {
        uVar17 = bVar24 - 0x30;
        if (0x39 < bVar24) {
          uVar17 = (bVar24 - 0x41 & 0xffffffde) + 10;
        }
        uVar8 = (ulonglong)(uVar17 < 0x10) * 0x100 + 0x101;
        bVar3 = true;
        goto LAB_000af547;
      }
      uVar10 = bVar24 - 0x30;
      if (0x39 < bVar24) {
        uVar10 = (bVar24 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar10) goto LAB_000af5d9;
      uVar17 = uVar10 | uVar17 << 4;
      uVar20 = uVar20 + 1;
    } while (uVar8 != uVar20);
  }
  uVar8 = (ulonglong)uVar17 << 0x20;
  bVar3 = false;
LAB_000af547:
  if ((((bVar3) || (((uint)(uVar8 >> 0x20) ^ 0xd800) - 0x110000 < 0xffef0800)) ||
      (pbVar22 != pbVar12 + (longlong)puVar13)) ||
     ((uVar8 >> 0x25 == 0 || ((uint)(uVar8 - 0x7f00000000 >> 0x20) < 0x21)))) goto LAB_000af5d9;
  uVar7 = (*(code *)PTR_fmt_000c4030)();
  cVar4 = (char)uVar7;
joined_r0x000af32e:
  pbVar25 = pbVar25 + uVar5;
  if (cVar4 != '\0') {
LAB_000af626:
    return (int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
  }
  goto LAB_000aefca;
LAB_000af5d9:
  cVar4 = (*(code *)PTR_write_str_000c3d28)();
  pbVar12 = local_60;
  lVar27 = lVar27 + 1;
  if (cVar4 != '\0') {
    return local_34;
  }
  goto LAB_000aec64;
}


