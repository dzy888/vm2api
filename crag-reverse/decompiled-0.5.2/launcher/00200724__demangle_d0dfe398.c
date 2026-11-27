// 00200724 demangle

/* rustc_demangle[a2bba03bad1b7f1a]::demangle */

undefined8 * __rustcall
rustc_demangle[a2bba03bad1b7f1a]::demangle
          (undefined8 *param_1,int *param_2,byte ******param_3,undefined8 param_4,undefined8 param_5
          ,longlong param_6)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte ******ppppppbVar10;
  uint uVar11;
  byte ******ppppppbVar12;
  byte ******ppppppbVar13;
  longlong lVar14;
  byte *pbVar15;
  undefined **ppuVar16;
  byte bVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte ******ppppppbVar21;
  byte ******unaff_R13;
  byte ******ppppppbVar22;
  byte *****local_d8;
  byte ******local_d0;
  byte ******local_c0;
  byte ******local_b8;
  byte ******local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  byte ******local_88;
  longlong local_78;
  byte *local_70;
  longlong local_68;
  byte ******local_60;
  ulonglong local_50;
  byte ******local_48;
  int *local_40;
  undefined1 local_31;
  
  local_48 = param_3;
  local_40 = param_2;
  (*(code *)PTR_new_0021a470)();
  if ((char)local_c0 == '\0') {
    ppppppbVar21 = &local_d8;
    unaff_R13 = (byte ******)&local_c0;
    do {
      <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next(ppppppbVar21);
    } while (local_d8 == (byte *****)0x1);
    ppppppbVar10 = local_d0;
    local_68 = param_6;
    if (local_d8 == (byte *****)0x0) {
LAB_00200878:
      ppppppbVar12 = local_48;
      uVar9 = (uint)local_68;
      ppppppbVar22 = (byte ******)((longlong)ppppppbVar10 + 6);
      ppppppbVar13 = local_48;
      if (ppppppbVar22 != (byte ******)0x0) {
        if (ppppppbVar22 < local_48) {
          if ((char)*(byte *)((longlong)local_40 + (longlong)ppppppbVar22) < -0x40)
          goto LAB_00201149;
        }
        else if (ppppppbVar22 != local_48) goto LAB_00201149;
      }
      pbVar15 = (byte *)((longlong)ppppppbVar22 + (longlong)local_40);
      do {
        if (pbVar15 == (byte *)((longlong)local_48 + (longlong)local_40)) {
          if (ppppppbVar10 == (byte ******)0x0) {
            ppppppbVar13 = (byte ******)0x0;
            goto LAB_00200e25;
          }
          if (ppppppbVar10 < local_48) {
            if (-0x41 < (char)*(byte *)((longlong)local_40 + (longlong)ppppppbVar10)) {
              ppppppbVar13 = ppppppbVar10;
              goto LAB_00200a11;
            }
          }
          else if (ppppppbVar10 == local_48) goto LAB_00200a11;
          pbVar15 = &DAT_00218620;
          (*(code *)PTR_slice_error_fail_00219da0)(ppppppbVar10,0);
          goto LAB_00200b51;
        }
        bVar18 = *pbVar15;
        uVar7 = (uint)bVar18;
        if ((char)bVar18 < '\0') {
          uVar11 = bVar18 & 0x1f;
          pbVar1 = pbVar15 + 1;
          if (bVar18 < 0xe0) {
            pbVar15 = pbVar15 + 2;
            uVar7 = uVar11 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar7 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar18 < 0xf0) {
              pbVar15 = pbVar15 + 3;
              uVar7 = uVar7 | uVar11 << 0xc;
            }
            else {
              pbVar1 = pbVar15 + 3;
              pbVar15 = pbVar15 + 4;
              uVar7 = *pbVar1 & 0x3f | uVar7 << 6 | (bVar18 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar15 = pbVar15 + 1;
        }
      } while (0xfffffff8 < uVar7 - 0x47 || 0xfffffff5 < uVar7 - 0x3a);
    }
  }
  else {
    ppppppbVar13 = local_60;
    if (local_88 == (byte ******)0xffffffffffffffff) {
      ppppppbVar10 = (byte ******)CONCAT44(uStack_94,local_98);
      pbVar15 = (byte *)((longlong)ppppppbVar10 + (longlong)local_60 + -1);
      if (pbVar15 < local_70) {
        local_50 = local_a0;
        unaff_R13 = (byte ******)((longlong)local_b8 + -1);
LAB_002008e6:
        ppppppbVar12 = local_60;
        if ((local_a0 >> ((ulonglong)pbVar15[local_78] & 0x3f) & 1) == 0) goto LAB_00200952;
        lVar14 = 0;
        pbVar15 = (byte *)((longlong)local_b8 + local_68);
        ppppppbVar12 = ppppppbVar10;
        do {
          if (local_60 <= (byte ******)((longlong)local_b8 + lVar14)) {
            ppppppbVar12 = unaff_R13;
            goto LAB_0020092e;
          }
          bVar18 = *pbVar15;
          ppppppbVar21 = (byte ******)((longlong)ppppppbVar12 + 1);
          pbVar15 = pbVar15 + 1;
          lVar14 = lVar14 + 1;
          pbVar1 = (byte *)((longlong)local_b8 + local_78 + (longlong)ppppppbVar12);
          ppppppbVar12 = ppppppbVar21;
        } while (bVar18 == *pbVar1);
        goto LAB_00200955;
      }
    }
    else {
      ppppppbVar10 = (byte ******)CONCAT44(uStack_94,local_98);
      pbVar15 = (byte *)((longlong)ppppppbVar10 + (longlong)((longlong)local_60 + -1));
      if (pbVar15 < local_70) {
        local_50 = CONCAT44(uStack_a4,local_a8);
        unaff_R13 = (byte ******)((longlong)local_60 - local_50);
LAB_002007c0:
        if ((local_a0 >> ((ulonglong)pbVar15[local_78] & 0x3f) & 1) == 0) {
          ppppppbVar10 = (byte ******)((longlong)ppppppbVar10 + (longlong)local_60);
          local_88 = (byte ******)0x0;
        }
        else {
          ppppppbVar12 = local_b8;
          if (local_b8 < local_88) {
            ppppppbVar12 = local_88;
          }
          do {
            ppppppbVar22 = local_b8;
            if (local_60 <= ppppppbVar12) goto LAB_00200806;
            ppppppbVar21 = (byte ******)((longlong)ppppppbVar12 + 1);
            pbVar15 = (byte *)((longlong)ppppppbVar12 + local_68);
            pbVar1 = (byte *)((longlong)ppppppbVar10 + local_78) + (longlong)ppppppbVar12;
            ppppppbVar12 = ppppppbVar21;
          } while (*pbVar15 == *pbVar1);
          ppppppbVar10 = (byte ******)
                         ((longlong)ppppppbVar21 + ((longlong)ppppppbVar10 - (longlong)local_b8));
          local_88 = (byte ******)0x0;
        }
        goto LAB_00200830;
      }
    }
  }
LAB_00200a0d:
  ppppppbVar13 = local_48;
LAB_00200a11:
  if (ppppppbVar13 < (byte ******)0x3) {
    if (ppppppbVar13 != (byte ******)0x2) goto LAB_00200e25;
    if ((short)*local_40 == 0x4e5a) {
      lVar20 = -2;
      lVar14 = 2;
      ppppppbVar12 = (byte ******)0x2;
      goto LAB_00200afa;
    }
LAB_00200d9b:
    ppppppbVar13 = (byte ******)0x2;
    if ((char)*local_40 != 'R') goto LAB_00200e25;
LAB_00200da6:
    cVar3 = *(char *)((longlong)local_40 + 1);
    if (cVar3 < -0x40) {
LAB_00201129:
      ppuVar16 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218760;
      uVar8 = 1;
      goto LAB_00201172;
    }
    ppppppbVar21 = (byte ******)((longlong)local_40 + 1);
    unaff_R13 = (byte ******)0xffffffffffffffff;
    ppppppbVar12 = ppppppbVar13;
  }
  else {
    ppppppbVar12 = ppppppbVar13;
    if (*(char *)((longlong)local_40 + 2) == 'N' && (short)*local_40 == 0x5a5f) {
      lVar20 = -3;
      lVar14 = 3;
      if (ppppppbVar13 == (byte ******)0x3) {
        ppppppbVar12 = (byte ******)0x3;
      }
      else if (*(char *)((longlong)local_40 + 3) < -0x40) {
        ppuVar16 = &PTR_s__rust_deps_rustc_demangle_0_1_27_00218808;
        uVar8 = 3;
        goto LAB_00201172;
      }
LAB_00200afa:
      ppppppbVar21 = (byte ******)((longlong)ppppppbVar12 + lVar20);
      pbVar15 = (byte *)(lVar14 + (longlong)local_40);
      ppppppbVar10 = (byte ******)(pbVar15 + (longlong)ppppppbVar21);
      ppppppbVar13 = (byte ******)0x0;
LAB_00200b06:
      if (ppppppbVar21 != ppppppbVar13) goto code_r0x00200b0b;
      if (ppppppbVar21 != (byte ******)0x0) {
        bVar18 = *pbVar15;
        uVar7 = (uint)bVar18;
        uVar9 = (uint)bVar18;
        if ((char)bVar18 < '\0') {
LAB_00200b51:
          if ((byte)uVar9 < 0xe0) {
            ppppppbVar22 = (byte ******)(pbVar15 + 2);
            uVar7 = (uVar9 & 0x1f) << 6 | pbVar15[1] & 0x3f;
          }
          else {
            uVar7 = pbVar15[2] & 0x3f | (pbVar15[1] & 0x3f) << 6;
            if ((byte)uVar9 < 0xf0) {
              ppppppbVar22 = (byte ******)(pbVar15 + 3);
              uVar7 = uVar7 | (uVar9 & 0x1f) << 0xc;
            }
            else {
              ppppppbVar22 = (byte ******)(pbVar15 + 4);
              uVar7 = pbVar15[3] & 0x3f | uVar7 << 6 | (uVar9 & 7) << 0x12;
            }
          }
        }
        else {
          ppppppbVar22 = (byte ******)(pbVar15 + 1);
        }
        unaff_R13 = (byte ******)0x0;
        while( true ) {
          if (uVar7 == 0x45) {
            lVar14 = (longlong)ppppppbVar10 - (longlong)ppppppbVar22;
            goto LAB_00200fbf;
          }
          uVar9 = uVar7 - 0x30;
          if (9 < uVar9) break;
          uVar6 = 0;
          do {
            uVar4 = uVar6;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar4;
            uVar5 = SUB168(auVar2 * ZEXT816(10),0);
            if (SUB168(auVar2 * ZEXT816(10),8) != 0) goto LAB_00200d75;
            uVar19 = (ulonglong)uVar9;
            uVar6 = uVar5 + uVar19;
            if ((CARRY8(uVar5,uVar19)) || (ppppppbVar22 == ppppppbVar10)) goto LAB_00200d75;
            bVar18 = *(byte *)ppppppbVar22;
            uVar7 = (uint)bVar18;
            if ((char)bVar18 < '\0') {
              uVar9 = bVar18 & 0x1f;
              uVar7 = *(byte *)((longlong)ppppppbVar22 + 1) & 0x3f;
              if (bVar18 < 0xe0) {
                ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 2);
                uVar7 = uVar9 << 6 | uVar7;
              }
              else {
                uVar7 = *(byte *)((longlong)ppppppbVar22 + 2) & 0x3f | uVar7 << 6;
                if (bVar18 < 0xf0) {
                  ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 3);
                  uVar7 = uVar7 | uVar9 << 0xc;
                }
                else {
                  pbVar1 = (byte *)((longlong)ppppppbVar22 + 3);
                  ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 4);
                  uVar7 = *pbVar1 & 0x3f | uVar7 << 6 | (bVar18 & 7) << 0x12;
                }
              }
            }
            else {
              ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 1);
            }
            uVar9 = uVar7 - 0x30;
          } while (uVar9 < 10);
          if (uVar6 != 0) {
            lVar14 = uVar19 + uVar4 * 10;
            do {
              if (ppppppbVar22 == ppppppbVar10) goto LAB_00200d75;
              bVar18 = *(byte *)ppppppbVar22;
              uVar7 = (uint)bVar18;
              if ((char)bVar18 < '\0') {
                uVar9 = *(byte *)((longlong)ppppppbVar22 + 1) & 0x3f;
                if (bVar18 < 0xe0) {
                  ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 2);
                  uVar7 = (uVar7 & 0x1f) << 6 | uVar9;
                }
                else {
                  uVar9 = *(byte *)((longlong)ppppppbVar22 + 2) & 0x3f | uVar9 << 6;
                  if (bVar18 < 0xf0) {
                    ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 3);
                    uVar7 = uVar9 | (uVar7 & 0x1f) << 0xc;
                  }
                  else {
                    pbVar1 = (byte *)((longlong)ppppppbVar22 + 3);
                    ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 4);
                    uVar7 = *pbVar1 & 0x3f | uVar9 << 6 | (uVar7 & 7) << 0x12;
                  }
                }
              }
              else {
                ppppppbVar22 = (byte ******)((longlong)ppppppbVar22 + 1);
              }
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
          }
          unaff_R13 = (byte ******)((longlong)unaff_R13 + 1);
        }
      }
      goto LAB_00200d75;
    }
    if ((short)*local_40 == 0x4e5a) {
      if (*(char *)((longlong)local_40 + 2) < -0x40) goto LAB_00201152;
      lVar14 = 2;
      lVar20 = -2;
      goto LAB_00200afa;
    }
    ppppppbVar12 = (byte ******)0x3;
    if (ppppppbVar13 != (byte ******)0x3) {
      if (*local_40 == 0x4e5a5f5f) {
        lVar20 = -4;
        lVar14 = 4;
        if (ppppppbVar13 < &DAT_00000005) {
          ppppppbVar12 = (byte ******)0x4;
        }
        else {
          ppppppbVar12 = ppppppbVar13;
          if ((char)local_40[1] < -0x40) {
            ppuVar16 = &PTR_s__rust_deps_rustc_demangle_0_1_27_002187d8;
            uVar8 = 4;
            goto LAB_00201172;
          }
        }
        goto LAB_00200afa;
      }
      ppppppbVar12 = ppppppbVar13;
    }
LAB_00200d82:
    ppppppbVar13 = ppppppbVar12;
    if ((short)*local_40 == 0x525f) {
      cVar3 = *(char *)((longlong)local_40 + 2);
      if (cVar3 < -0x40) {
LAB_00201149:
        do {
          (*(code *)PTR_slice_error_fail_00219da0)();
LAB_00201152:
          ppuVar16 = &PTR_s__rust_deps_rustc_demangle_0_1_27_002187f0;
          uVar8 = 2;
LAB_00201172:
          (*(code *)PTR_slice_error_fail_00219da0)(ppppppbVar13,uVar8,ppuVar16);
        } while( true );
      }
      ppppppbVar21 = (byte ******)((longlong)local_40 + 2);
      unaff_R13 = (byte ******)0xfffffffffffffffe;
    }
    else {
      if ((char)*local_40 == 'R') goto LAB_00200da6;
      if (ppppppbVar13 == (byte ******)0x3) {
        ppppppbVar13 = (byte ******)0x3;
        goto LAB_00200e25;
      }
      if (*(char *)((longlong)local_40 + 2) != 'R' || (short)*local_40 != 0x5f5f) goto LAB_00200e25;
      cVar3 = *(char *)((longlong)local_40 + 3);
      if (cVar3 < -0x40) goto LAB_00201149;
      ppppppbVar21 = (byte ******)((longlong)local_40 + 3);
      unaff_R13 = (byte ******)0xfffffffffffffffd;
    }
    ppppppbVar12 = ppppppbVar13;
  }
  ppppppbVar22 = (byte ******)0x1;
  ppppppbVar13 = ppppppbVar12;
  if ((byte)(cVar3 + 0xbfU) < 0x1a) {
    unaff_R13 = (byte ******)((longlong)unaff_R13 + (longlong)ppppppbVar12);
    ppppppbVar10 = (byte ******)0x0;
LAB_00200df5:
    if (unaff_R13 != ppppppbVar10) goto code_r0x00200dfa;
    local_b0 = (byte ******)0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = ppppppbVar21;
    local_b8 = unaff_R13;
    cVar3 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_c0,0);
    if (cVar3 != '\0') {
LAB_002010f8:
      (*(code *)PTR_unwrap_failed_00219ec0)
                (&DAT_00218698,&local_31,&PTR_s__rust_deps_rustc_demangle_0_1_27_00218790);
      ppppppbVar13 = (byte ******)0x3d;
LAB_0020111c:
      (*(code *)PTR_panic_bounds_check_0021a020)();
      goto LAB_00201129;
    }
    if (local_c0 == (byte ******)0x0) {
LAB_00200f80:
      ppppppbVar21 = (byte ******)0x0;
      pbVar15 = (byte *)0x0;
      uVar8 = 0;
      lVar14 = 0;
      goto LAB_00200e29;
    }
    if ((local_b0 < local_b8) &&
       ((byte)(*(byte *)((longlong)local_c0 + (longlong)local_b0) + 0xbf) < 0x1a)) {
      local_a0 = 0;
      local_98 = 0;
      cVar3 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_c0,0);
      if (cVar3 != '\0') goto LAB_002010f8;
      if (local_c0 == (byte ******)0x0) goto LAB_00200f80;
    }
    if (local_b0 != (byte ******)0x0) {
      ppppppbVar13 = local_b8;
      if (local_b0 < local_b8) {
        if ((char)*(byte *)((longlong)local_c0 + (longlong)local_b0) < -0x40) goto LAB_00201149;
      }
      else if (local_b8 != local_b0) goto LAB_00201149;
    }
    ppppppbVar22 = (byte ******)((longlong)local_c0 + (longlong)local_b0);
    lVar14 = (longlong)local_b8 - (longlong)local_b0;
    pbVar15 = (byte *)0x0;
LAB_00200fbf:
    if (lVar14 != 0) {
      if (*(byte *)ppppppbVar22 == 0x2e) {
        bVar18 = 0x2e;
        ppppppbVar13 = ppppppbVar22;
        while( true ) {
          if ((char)bVar18 < '\0') {
            bVar17 = bVar18 & 0x1f;
            uVar9 = *(byte *)((longlong)ppppppbVar13 + 1) & 0x3f;
            if (bVar18 < 0xe0) {
              ppppppbVar13 = (byte ******)((longlong)ppppppbVar13 + 2);
              uVar9 = (uint)bVar17 << 6 | uVar9;
            }
            else {
              uVar9 = *(byte *)((longlong)ppppppbVar13 + 2) & 0x3f | uVar9 << 6;
              if (bVar18 < 0xf0) {
                ppppppbVar13 = (byte ******)((longlong)ppppppbVar13 + 3);
                uVar9 = uVar9 | (uint)bVar17 << 0xc;
              }
              else {
                pbVar1 = (byte *)((longlong)ppppppbVar13 + 3);
                ppppppbVar13 = (byte ******)((longlong)ppppppbVar13 + 4);
                uVar9 = *pbVar1 & 0x3f | uVar9 << 6 | (bVar17 & 7) << 0x12;
              }
            }
          }
          else {
            ppppppbVar13 = (byte ******)((longlong)ppppppbVar13 + 1);
            uVar9 = (uint)bVar18;
          }
          if (((0xe < uVar9 - 0x21 && 9 < uVar9 - 0x30) && 0x19 < (uVar9 & 0x1fffdf) - 0x41) &&
             (((0x26 < uVar9 - 0x3a ||
               ((0x7e0000007fU >> ((ulonglong)(uVar9 - 0x3a) & 0x3f) & 1) == 0)) &&
              (uVar9 - 0x7f < 0xfffffffc)))) break;
          if (ppppppbVar13 == (byte ******)((longlong)ppppppbVar22 + lVar14)) {
            uVar8 = 1;
            goto LAB_00200e29;
          }
          bVar18 = *(byte *)ppppppbVar13;
        }
      }
      lVar14 = 0;
      uVar8 = 0;
      ppppppbVar22 = (byte ******)0x1;
      goto LAB_00200e29;
    }
    uVar8 = 1;
    goto LAB_00200e27;
  }
LAB_00200e25:
  ppppppbVar21 = (byte ******)0x0;
  ppppppbVar22 = (byte ******)0x1;
  pbVar15 = (byte *)0x0;
  uVar8 = 0;
  ppppppbVar12 = ppppppbVar13;
LAB_00200e27:
  lVar14 = 0;
LAB_00200e29:
  *param_1 = uVar8;
  param_1[1] = pbVar15;
  param_1[2] = ppppppbVar21;
  param_1[3] = unaff_R13;
  param_1[4] = local_40;
  param_1[5] = ppppppbVar12;
  param_1[6] = ppppppbVar22;
  param_1[7] = lVar14;
  return param_1;
  while( true ) {
    if (local_60 <= unaff_R13) goto LAB_0020111c;
    pbVar15 = (byte *)((longlong)ppppppbVar12 + local_68);
    pbVar1 = (byte *)((longlong)ppppppbVar10 + local_78) + (longlong)ppppppbVar12;
    ppppppbVar12 = (byte ******)((longlong)ppppppbVar12 + -1);
    if (*pbVar15 != *pbVar1) break;
LAB_0020092e:
    ppppppbVar21 = (byte ******)((longlong)local_b8 + local_78);
    if (ppppppbVar12 == (byte ******)0xffffffffffffffff) goto LAB_00200878;
  }
  ppppppbVar12 = (byte ******)CONCAT44(uStack_a4,local_a8);
LAB_00200952:
  ppppppbVar21 = (byte ******)((longlong)ppppppbVar10 + (longlong)ppppppbVar12);
LAB_00200955:
  ppppppbVar10 = ppppppbVar21;
  pbVar15 = (byte *)((longlong)ppppppbVar10 + (longlong)((longlong)local_60 + -1));
  if (local_70 <= pbVar15) goto LAB_00200a0d;
  goto LAB_002008e6;
  while( true ) {
    if (local_60 <= ppppppbVar12) goto LAB_0020111c;
    ppppppbVar22 = ppppppbVar12;
    if (*(byte *)((longlong)ppppppbVar12 + local_68) !=
        ((byte *)((longlong)ppppppbVar10 + local_78))[(longlong)ppppppbVar12]) break;
LAB_00200806:
    ppppppbVar12 = (byte ******)((longlong)ppppppbVar22 + -1);
    ppppppbVar21 = local_b8;
    if (ppppppbVar22 <= local_88) goto LAB_00200878;
  }
  ppppppbVar10 = (byte ******)((longlong)ppppppbVar10 + local_50);
  local_88 = unaff_R13;
LAB_00200830:
  pbVar15 = (byte *)((longlong)ppppppbVar10 + (longlong)((longlong)local_60 + -1));
  if (local_70 <= pbVar15) goto LAB_00200a0d;
  goto LAB_002007c0;
code_r0x00200b0b:
  pbVar1 = pbVar15 + (longlong)ppppppbVar13;
  ppppppbVar13 = (byte ******)((longlong)ppppppbVar13 + 1);
  if ((char)*pbVar1 < '\0') {
LAB_00200d75:
    if ((byte ******)0x2 < ppppppbVar12) {
      goto LAB_00200d82;
    }
    ppppppbVar13 = ppppppbVar12;
    if (ppppppbVar12 == (byte ******)0x2) goto LAB_00200d9b;
    goto LAB_00200e25;
  }
  goto LAB_00200b06;
code_r0x00200dfa:
  pbVar15 = (byte *)((longlong)ppppppbVar21 + (longlong)ppppppbVar10);
  ppppppbVar10 = (byte ******)((longlong)ppppppbVar10 + 1);
  if ((char)*pbVar15 < '\0') goto LAB_00200e25;
  goto LAB_00200df5;
}


