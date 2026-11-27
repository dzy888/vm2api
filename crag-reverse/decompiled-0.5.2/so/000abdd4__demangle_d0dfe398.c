// 000abdd4 demangle

/* rustc_demangle[a2bba03bad1b7f1a]::demangle */

undefined8 * __rustcall
rustc_demangle[a2bba03bad1b7f1a]::demangle
          (undefined8 *param_1,int *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
          longlong param_6)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  longlong lVar13;
  byte *pbVar14;
  undefined **ppuVar15;
  byte bVar16;
  byte bVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  byte *pbVar21;
  byte *unaff_R13;
  longlong local_d8;
  byte *local_d0;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  byte *local_88;
  longlong local_78;
  byte *local_70;
  longlong local_68;
  byte *local_60;
  ulonglong local_50;
  byte *local_48;
  int *local_40;
  undefined1 local_31;
  
  local_48 = param_3;
  local_40 = param_2;
  (*(code *)PTR_new_000c3fc0)();
  if ((byte)local_c0 == 0) {
    pbVar21 = (byte *)&local_d8;
    unaff_R13 = (byte *)&local_c0;
    do {
      <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next(pbVar21);
    } while (local_d8 == 1);
    pbVar8 = local_d0;
    local_68 = param_6;
    if (local_d8 == 0) {
LAB_000abf28:
      pbVar10 = local_48;
      uVar19 = (uint)local_68;
      pbVar14 = pbVar8 + 6;
      pbVar12 = local_48;
      if (pbVar14 != (byte *)0x0) {
        if (pbVar14 < local_48) {
          if ((char)*(byte *)((longlong)local_40 + (longlong)pbVar14) < -0x40) goto LAB_000ac7f9;
        }
        else if (pbVar14 != local_48) goto LAB_000ac7f9;
      }
      pbVar14 = pbVar14 + (longlong)local_40;
      do {
        if (pbVar14 == local_48 + (longlong)local_40) {
          if (pbVar8 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
            goto LAB_000ac4d5;
          }
          if (pbVar8 < local_48) {
            if (-0x41 < (char)*(byte *)((longlong)local_40 + (longlong)pbVar8)) {
              pbVar12 = pbVar8;
              goto LAB_000ac0c1;
            }
          }
          else if (pbVar8 == local_48) goto LAB_000ac0c1;
          pbVar14 = &DAT_000c2560;
          (*(code *)PTR_slice_error_fail_000c3fc8)(pbVar8,0);
          goto LAB_000ac201;
        }
        bVar17 = *pbVar14;
        uVar6 = (uint)bVar17;
        if ((char)bVar17 < '\0') {
          uVar9 = bVar17 & 0x1f;
          pbVar11 = pbVar14 + 1;
          if (bVar17 < 0xe0) {
            pbVar14 = pbVar14 + 2;
            uVar6 = uVar9 << 6 | *pbVar11 & 0x3f;
          }
          else {
            uVar6 = pbVar14[2] & 0x3f | (*pbVar11 & 0x3f) << 6;
            if (bVar17 < 0xf0) {
              pbVar14 = pbVar14 + 3;
              uVar6 = uVar6 | uVar9 << 0xc;
            }
            else {
              pbVar11 = pbVar14 + 3;
              pbVar14 = pbVar14 + 4;
              uVar6 = *pbVar11 & 0x3f | uVar6 << 6 | (bVar17 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar14 = pbVar14 + 1;
        }
      } while (0xfffffff8 < uVar6 - 0x47 || 0xfffffff5 < uVar6 - 0x3a);
    }
  }
  else {
    pbVar12 = local_60;
    if (local_88 == (byte *)0xffffffffffffffff) {
      pbVar8 = (byte *)CONCAT44(uStack_94,local_98);
      pbVar10 = pbVar8 + (longlong)(local_60 + -1);
      if (pbVar10 < local_70) {
        local_50 = local_a0;
        unaff_R13 = local_b8 + -1;
LAB_000abf96:
        pbVar21 = local_60;
        if ((local_a0 >> ((ulonglong)pbVar10[local_78] & 0x3f) & 1) == 0) goto LAB_000ac002;
        lVar13 = 0;
        pbVar10 = local_b8 + local_68;
        pbVar21 = pbVar8;
        do {
          if (local_60 <= local_b8 + lVar13) {
            pbVar10 = unaff_R13;
            goto LAB_000abfde;
          }
          bVar17 = *pbVar10;
          pbVar14 = pbVar21 + 1;
          pbVar10 = pbVar10 + 1;
          lVar13 = lVar13 + 1;
          pbVar11 = local_b8 + local_78 + (longlong)pbVar21;
          pbVar21 = pbVar14;
        } while (bVar17 == *pbVar11);
        goto LAB_000ac005;
      }
    }
    else {
      pbVar8 = (byte *)CONCAT44(uStack_94,local_98);
      pbVar10 = pbVar8 + (longlong)(local_60 + -1);
      if (pbVar10 < local_70) {
        local_50 = CONCAT44(uStack_a4,local_a8);
        unaff_R13 = local_60 + -local_50;
LAB_000abe70:
        if ((local_a0 >> ((ulonglong)pbVar10[local_78] & 0x3f) & 1) == 0) {
          pbVar8 = pbVar8 + (longlong)local_60;
          local_88 = (byte *)0x0;
        }
        else {
          pbVar10 = local_b8;
          if (local_b8 < local_88) {
            pbVar10 = local_88;
          }
          do {
            pbVar14 = local_b8;
            if (local_60 <= pbVar10) goto LAB_000abeb6;
            pbVar21 = pbVar10 + 1;
            pbVar14 = pbVar10 + local_68;
            pbVar11 = pbVar8 + local_78 + (longlong)pbVar10;
            pbVar10 = pbVar21;
          } while (*pbVar14 == *pbVar11);
          pbVar8 = pbVar21 + ((longlong)pbVar8 - (longlong)local_b8);
          local_88 = (byte *)0x0;
        }
        goto LAB_000abee0;
      }
    }
  }
LAB_000ac0bd:
  pbVar12 = local_48;
LAB_000ac0c1:
  if (pbVar12 < Elf64_Ehdr_00000000.e_ident_magic_str + 2) {
    if (pbVar12 != (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 1)) goto LAB_000ac4d5;
    if ((short)*local_40 == 0x4e5a) {
      lVar20 = -2;
      lVar13 = 2;
      pbVar10 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 1);
      goto LAB_000ac1aa;
    }
LAB_000ac44b:
    pbVar12 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 1);
    if ((char)*local_40 != 'R') goto LAB_000ac4d5;
LAB_000ac456:
    cVar2 = *(char *)((longlong)local_40 + 1);
    if (cVar2 < -0x40) {
LAB_000ac7d9:
      ppuVar15 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c26a0;
      uVar7 = 1;
      goto LAB_000ac822;
    }
    pbVar21 = (byte *)((longlong)local_40 + 1);
    unaff_R13 = (byte *)0xffffffffffffffff;
    pbVar10 = pbVar12;
  }
  else {
    pbVar10 = pbVar12;
    if (*(char *)((longlong)local_40 + 2) == 'N' && (short)*local_40 == 0x5a5f) {
      lVar20 = -3;
      lVar13 = 3;
      if (pbVar12 == (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2)) {
        pbVar10 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
      }
      else if (*(char *)((longlong)local_40 + 3) < -0x40) {
        ppuVar15 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2748;
        uVar7 = 3;
        goto LAB_000ac822;
      }
LAB_000ac1aa:
      pbVar21 = pbVar10 + lVar20;
      pbVar14 = (byte *)(lVar13 + (longlong)local_40);
      pbVar8 = pbVar14 + (longlong)pbVar21;
      pbVar12 = (byte *)0x0;
LAB_000ac1b6:
      if (pbVar21 != pbVar12) goto code_r0x000ac1bb;
      if (pbVar21 != (byte *)0x0) {
        bVar17 = *pbVar14;
        uVar6 = (uint)bVar17;
        uVar19 = (uint)bVar17;
        if ((char)bVar17 < '\0') {
LAB_000ac201:
          if ((byte)uVar19 < 0xe0) {
            pbVar11 = pbVar14 + 2;
            uVar6 = (uVar19 & 0x1f) << 6 | pbVar14[1] & 0x3f;
          }
          else {
            uVar6 = pbVar14[2] & 0x3f | (pbVar14[1] & 0x3f) << 6;
            if ((byte)uVar19 < 0xf0) {
              pbVar11 = pbVar14 + 3;
              uVar6 = uVar6 | (uVar19 & 0x1f) << 0xc;
            }
            else {
              pbVar11 = pbVar14 + 4;
              uVar6 = pbVar14[3] & 0x3f | uVar6 << 6 | (uVar19 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar11 = pbVar14 + 1;
        }
        unaff_R13 = (byte *)0x0;
        while( true ) {
          if (uVar6 == 0x45) {
            lVar13 = (longlong)pbVar8 - (longlong)pbVar11;
            goto LAB_000ac66f;
          }
          uVar19 = uVar6 - 0x30;
          if (9 < uVar19) break;
          uVar5 = 0;
          do {
            uVar3 = uVar5;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = uVar3;
            uVar4 = SUB168(auVar1 * ZEXT816(10),0);
            if (SUB168(auVar1 * ZEXT816(10),8) != 0) goto LAB_000ac425;
            uVar18 = (ulonglong)uVar19;
            uVar5 = uVar4 + uVar18;
            if ((CARRY8(uVar4,uVar18)) || (pbVar11 == pbVar8)) goto LAB_000ac425;
            bVar17 = *pbVar11;
            uVar6 = (uint)bVar17;
            if ((char)bVar17 < '\0') {
              uVar19 = bVar17 & 0x1f;
              pbVar12 = pbVar11 + 1;
              if (bVar17 < 0xe0) {
                pbVar11 = pbVar11 + 2;
                uVar6 = uVar19 << 6 | *pbVar12 & 0x3f;
              }
              else {
                uVar6 = pbVar11[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
                if (bVar17 < 0xf0) {
                  pbVar11 = pbVar11 + 3;
                  uVar6 = uVar6 | uVar19 << 0xc;
                }
                else {
                  pbVar12 = pbVar11 + 3;
                  pbVar11 = pbVar11 + 4;
                  uVar6 = *pbVar12 & 0x3f | uVar6 << 6 | (bVar17 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar11 = pbVar11 + 1;
            }
            uVar19 = uVar6 - 0x30;
          } while (uVar19 < 10);
          if (uVar5 != 0) {
            lVar13 = uVar18 + uVar3 * 10;
            do {
              if (pbVar11 == pbVar8) goto LAB_000ac425;
              bVar17 = *pbVar11;
              uVar6 = (uint)bVar17;
              if ((char)bVar17 < '\0') {
                pbVar12 = pbVar11 + 1;
                if (bVar17 < 0xe0) {
                  pbVar11 = pbVar11 + 2;
                  uVar6 = (uVar6 & 0x1f) << 6 | *pbVar12 & 0x3f;
                }
                else {
                  uVar19 = pbVar11[2] & 0x3f | (*pbVar12 & 0x3f) << 6;
                  if (bVar17 < 0xf0) {
                    pbVar11 = pbVar11 + 3;
                    uVar6 = uVar19 | (uVar6 & 0x1f) << 0xc;
                  }
                  else {
                    pbVar12 = pbVar11 + 3;
                    pbVar11 = pbVar11 + 4;
                    uVar6 = *pbVar12 & 0x3f | uVar19 << 6 | (uVar6 & 7) << 0x12;
                  }
                }
              }
              else {
                pbVar11 = pbVar11 + 1;
              }
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          unaff_R13 = unaff_R13 + 1;
        }
      }
      goto LAB_000ac425;
    }
    if ((short)*local_40 == 0x4e5a) {
      if (*(char *)((longlong)local_40 + 2) < -0x40) goto LAB_000ac802;
      lVar13 = 2;
      lVar20 = -2;
      goto LAB_000ac1aa;
    }
    pbVar10 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
    if (pbVar12 != (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2)) {
      if (*local_40 == 0x4e5a5f5f) {
        lVar20 = -4;
        lVar13 = 4;
        if (pbVar12 < &Elf64_Ehdr_00000000.e_ident_data) {
          pbVar10 = &Elf64_Ehdr_00000000.e_ident_class;
        }
        else {
          pbVar10 = pbVar12;
          if ((char)local_40[1] < -0x40) {
            ppuVar15 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2718;
            uVar7 = 4;
            goto LAB_000ac822;
          }
        }
        goto LAB_000ac1aa;
      }
      pbVar10 = pbVar12;
    }
LAB_000ac432:
    pbVar12 = pbVar10;
    if ((short)*local_40 == 0x525f) {
      cVar2 = *(char *)((longlong)local_40 + 2);
      if (cVar2 < -0x40) {
LAB_000ac7f9:
        do {
          (*(code *)PTR_slice_error_fail_000c3fc8)();
LAB_000ac802:
          ppuVar15 = &PTR_s__rust_deps_rustc_demangle_0_1_27_000c2730;
          uVar7 = 2;
LAB_000ac822:
          (*(code *)PTR_slice_error_fail_000c3fc8)(pbVar12,uVar7,ppuVar15);
        } while( true );
      }
      pbVar21 = (byte *)((longlong)local_40 + 2);
      unaff_R13 = (byte *)0xfffffffffffffffe;
    }
    else {
      if ((char)*local_40 == 'R') goto LAB_000ac456;
      if (pbVar12 == (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2)) {
        pbVar12 = (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 2);
        goto LAB_000ac4d5;
      }
      if (*(char *)((longlong)local_40 + 2) != 'R' || (short)*local_40 != 0x5f5f) goto LAB_000ac4d5;
      cVar2 = *(char *)((longlong)local_40 + 3);
      if (cVar2 < -0x40) goto LAB_000ac7f9;
      pbVar21 = (byte *)((longlong)local_40 + 3);
      unaff_R13 = (byte *)0xfffffffffffffffd;
    }
    pbVar10 = pbVar12;
  }
  pbVar11 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
  pbVar12 = pbVar10;
  if ((byte)(cVar2 + 0xbfU) < 0x1a) {
    unaff_R13 = unaff_R13 + (longlong)pbVar10;
    pbVar8 = (byte *)0x0;
LAB_000ac4a5:
    if (unaff_R13 != pbVar8) goto code_r0x000ac4aa;
    local_b0 = (byte *)0x0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_c0 = pbVar21;
    local_b8 = unaff_R13;
    cVar2 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_c0,0);
    if (cVar2 != '\0') {
LAB_000ac7a8:
      (*(code *)PTR_unwrap_failed_000c3c78)
                (&DAT_000c25d8,&local_31,&PTR_s__rust_deps_rustc_demangle_0_1_27_000c26d0);
      pbVar12 = (byte *)((longlong)&Elf64_Ehdr_00000000.e_shnum + 1);
LAB_000ac7cc:
      (*(code *)PTR_panic_bounds_check_000c3dd8)();
      goto LAB_000ac7d9;
    }
    if (local_c0 == (byte *)0x0) {
LAB_000ac630:
      pbVar21 = (byte *)0x0;
      pbVar14 = (byte *)0x0;
      uVar7 = 0;
      lVar13 = 0;
      goto LAB_000ac4d9;
    }
    if ((local_b0 < local_b8) && ((byte)(local_c0[(longlong)local_b0] + 0xbf) < 0x1a)) {
      local_a0 = 0;
      local_98 = 0;
      cVar2 = <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_path(&local_c0,0);
      if (cVar2 != '\0') goto LAB_000ac7a8;
      if (local_c0 == (byte *)0x0) goto LAB_000ac630;
    }
    if (local_b0 != (byte *)0x0) {
      pbVar12 = local_b8;
      if (local_b0 < local_b8) {
        if ((char)local_c0[(longlong)local_b0] < -0x40) goto LAB_000ac7f9;
      }
      else if (local_b8 != local_b0) goto LAB_000ac7f9;
    }
    pbVar11 = local_c0 + (longlong)local_b0;
    lVar13 = (longlong)local_b8 - (longlong)local_b0;
    pbVar14 = (byte *)0x0;
LAB_000ac66f:
    if (lVar13 != 0) {
      if (*pbVar11 == 0x2e) {
        bVar17 = 0x2e;
        pbVar12 = pbVar11;
        while( true ) {
          if ((char)bVar17 < '\0') {
            bVar16 = bVar17 & 0x1f;
            pbVar8 = pbVar12 + 1;
            if (bVar17 < 0xe0) {
              pbVar12 = pbVar12 + 2;
              uVar19 = (uint)bVar16 << 6 | *pbVar8 & 0x3f;
            }
            else {
              uVar19 = pbVar12[2] & 0x3f | (*pbVar8 & 0x3f) << 6;
              if (bVar17 < 0xf0) {
                pbVar12 = pbVar12 + 3;
                uVar19 = uVar19 | (uint)bVar16 << 0xc;
              }
              else {
                pbVar8 = pbVar12 + 3;
                pbVar12 = pbVar12 + 4;
                uVar19 = *pbVar8 & 0x3f | uVar19 << 6 | (bVar16 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar12 = pbVar12 + 1;
            uVar19 = (uint)bVar17;
          }
          if (((0xe < uVar19 - 0x21 && 9 < uVar19 - 0x30) && 0x19 < (uVar19 & 0x1fffdf) - 0x41) &&
             (((0x26 < uVar19 - 0x3a ||
               ((0x7e0000007fU >> ((ulonglong)(uVar19 - 0x3a) & 0x3f) & 1) == 0)) &&
              (uVar19 - 0x7f < 0xfffffffc)))) break;
          if (pbVar12 == pbVar11 + lVar13) {
            uVar7 = 1;
            goto LAB_000ac4d9;
          }
          bVar17 = *pbVar12;
        }
      }
      lVar13 = 0;
      uVar7 = 0;
      pbVar11 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
      goto LAB_000ac4d9;
    }
    uVar7 = 1;
    goto LAB_000ac4d7;
  }
LAB_000ac4d5:
  pbVar21 = (byte *)0x0;
  pbVar11 = (byte *)Elf64_Ehdr_00000000.e_ident_magic_str;
  pbVar14 = (byte *)0x0;
  uVar7 = 0;
  pbVar10 = pbVar12;
LAB_000ac4d7:
  lVar13 = 0;
LAB_000ac4d9:
  *param_1 = uVar7;
  param_1[1] = pbVar14;
  param_1[2] = pbVar21;
  param_1[3] = unaff_R13;
  param_1[4] = local_40;
  param_1[5] = pbVar10;
  param_1[6] = pbVar11;
  param_1[7] = lVar13;
  return param_1;
  while( true ) {
    if (local_60 <= unaff_R13) goto LAB_000ac7cc;
    pbVar21 = pbVar10 + local_68;
    pbVar14 = pbVar8 + local_78 + (longlong)pbVar10;
    pbVar10 = pbVar10 + -1;
    if (*pbVar21 != *pbVar14) break;
LAB_000abfde:
    pbVar21 = local_b8 + local_78;
    if (pbVar10 == (byte *)0xffffffffffffffff) goto LAB_000abf28;
  }
  pbVar21 = (byte *)CONCAT44(uStack_a4,local_a8);
LAB_000ac002:
  pbVar14 = pbVar8 + (longlong)pbVar21;
LAB_000ac005:
  pbVar8 = pbVar14;
  pbVar10 = pbVar8 + (longlong)(local_60 + -1);
  if (local_70 <= pbVar10) goto LAB_000ac0bd;
  goto LAB_000abf96;
  while( true ) {
    if (local_60 <= pbVar10) goto LAB_000ac7cc;
    pbVar14 = pbVar10;
    if (pbVar10[local_68] != (pbVar8 + local_78)[(longlong)pbVar10]) break;
LAB_000abeb6:
    pbVar10 = pbVar14 + -1;
    pbVar21 = local_b8;
    if (pbVar14 <= local_88) goto LAB_000abf28;
  }
  pbVar8 = pbVar8 + local_50;
  local_88 = unaff_R13;
LAB_000abee0:
  pbVar10 = pbVar8 + (longlong)(local_60 + -1);
  if (local_70 <= pbVar10) goto LAB_000ac0bd;
  goto LAB_000abe70;
code_r0x000ac1bb:
  pbVar11 = pbVar14 + (longlong)pbVar12;
  pbVar12 = pbVar12 + 1;
  if ((char)*pbVar11 < '\0') {
LAB_000ac425:
    if (Elf64_Ehdr_00000000.e_ident_magic_str + 2 <= pbVar10) {
      goto LAB_000ac432;
    }
    pbVar12 = pbVar10;
    if (pbVar10 == (byte *)(Elf64_Ehdr_00000000.e_ident_magic_str + 1)) goto LAB_000ac44b;
    goto LAB_000ac4d5;
  }
  goto LAB_000ac1b6;
code_r0x000ac4aa:
  pbVar14 = pbVar21 + (longlong)pbVar8;
  pbVar8 = pbVar8 + 1;
  if ((char)*pbVar14 < '\0') goto LAB_000ac4d5;
  goto LAB_000ac4a5;
}


