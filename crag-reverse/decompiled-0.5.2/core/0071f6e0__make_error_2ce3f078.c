// 0071f6e0 make_error

/* serde_json[dc3825464c436029]::error::make_error */

void __rustcall serde_json[dc3825464c436029]::error::make_error(ulonglong *param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined4 uVar26;
  undefined **local_a8;
  char local_98;
  ulonglong local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar10 = param_1[1];
  uVar24 = param_1[2];
  uVar26 = (*(code *)PTR_new_00799a18)
                     (" at line EOF while parsing a listEOF while parsing an objectEOF while parsing a stringEOF while parsing a valueexpected `:`expected `,` or `]`expected `,` or `}`expected identexpected valueexpected `\"`invalid escapeinvalid numbernumber out of rangeinvalid unicode code pointcontrol character (\\u0000-\\u001F) found while parsing a stringkey must be a stringinvalid value: expected key to be a number in quotesfloat key must be finite (got NaN or +/-inf)lone leading surrogate in hex escapetrailing commatrailing charactersunexpected end of hex escaperecursion limit exceeded"
                      ,uVar24,9);
  if (local_98 == '\0') {
    if (uStack_80._2_1_ == '\0') {
      if (local_88 == 0) {
        local_88 = 0;
        if ((uStack_80 & 0x100) != 0) goto LAB_0071fa4c;
        goto LAB_0071fafc;
      }
      if (local_88 < local_48) {
        if (-0x41 < *(char *)(local_50 + local_88)) goto LAB_0071f962;
      }
      else if (local_88 == local_48) {
LAB_0071f962:
        bVar4 = *(byte *)(local_50 + -1 + local_88);
        uVar14 = (uint)bVar4;
        if ((char)bVar4 < '\0') {
          bVar5 = *(byte *)(local_50 + -2 + local_88);
          if ((char)bVar5 < -0x40) {
            bVar6 = *(byte *)(local_50 + -3 + local_88);
            if ((char)bVar6 < -0x40) {
              uVar14 = bVar6 & 0x3f | (*(byte *)(local_50 + -4 + local_88) & 7) << 6;
            }
            else {
              uVar14 = bVar6 & 0xf;
            }
            uVar14 = bVar5 & 0x3f | uVar14 << 6;
          }
          else {
            uVar14 = bVar5 & 0x1f;
          }
          uVar14 = bVar4 & 0x3f | uVar14 << 6;
        }
        if ((uStack_80 & 0x100) != 0) {
LAB_0071fa4c:
          uVar16 = local_88 + 9;
          ppuVar19 = &PTR_s__vendor_serde_json_1_0_154_src_e_00795d00;
          uVar17 = uVar16;
          do {
            if (uVar17 != 0) {
              if (uVar17 < uVar24) {
                if (*(char *)(uVar10 + uVar17) < -0x40) goto LAB_0071ff97;
              }
              else if (uVar17 != uVar24) {
LAB_0071ff97:
                local_88 = uVar24;
                uVar16 = uVar17;
                goto LAB_0071ff55;
              }
            }
            uVar18 = uVar24;
            if ((uVar24 == uVar17) ||
               (uVar18 = uVar17, 9 < (byte)(*(char *)(uVar10 + uVar17) - 0x30U)))
            goto joined_r0x0071faa9;
            uVar17 = uVar17 + 1;
          } while( true );
        }
        uVar16 = 0xffffffffffffffff;
        if ((0x7f < uVar14) && (uVar16 = 0xfffffffffffffffe, 0x7ff < uVar14)) {
          uVar16 = (ulonglong)(uVar14 < 0x10000) | 0xfffffffffffffffc;
        }
        local_88 = local_88 + uVar16;
        if (local_88 == 0) {
          local_88 = 0;
          goto LAB_0071fa4c;
        }
        if (local_88 < local_48) {
          if (-0x41 < *(char *)(local_50 + local_88)) goto LAB_0071fa4c;
        }
        else if (local_88 == local_48) goto LAB_0071fa4c;
      }
      ppuVar19 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00795dd8;
      uVar16 = 0;
      goto LAB_0071ff55;
    }
  }
  else if (local_60 == -1) {
    uVar16 = local_68 - local_38;
    if (uVar16 < local_48) {
      if (local_88 - 1 < local_38) {
LAB_0071f8d5:
        if ((local_78 >> ((ulonglong)*(byte *)(local_50 + uVar16) & 0x3f) & 1) == 0) {
          uVar17 = uVar16;
        }
        else {
          lVar22 = (local_88 - 1) + uVar16;
          uVar17 = local_68;
          uVar18 = local_88;
          do {
            if (uVar18 == 0) {
              uVar17 = local_88;
              goto LAB_0071f920;
            }
            pcVar2 = (char *)(local_40 + -1 + uVar18);
            uVar17 = uVar17 - 1;
            pcVar1 = (char *)(local_50 + lVar22);
            lVar22 = lVar22 + -1;
            uVar18 = uVar18 - 1;
          } while (*pcVar2 == *pcVar1);
        }
        goto LAB_0071f8c3;
      }
      if (local_88 != 0) {
        local_a8 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00795cc8;
        local_88 = local_68;
        if ((local_78 >> ((ulonglong)*(byte *)(local_50 + uVar16) & 0x3f) & 1) == 0) {
          local_88 = local_68 + local_38 * -2;
          do {
            if (local_48 <= local_88) goto LAB_0071fa34;
            pbVar3 = (byte *)(local_50 + local_88);
            local_88 = local_88 - local_38;
          } while ((local_78 >> ((ulonglong)*pbVar3 & 0x3f) & 1) == 0);
        }
LAB_0071ff7f:
        (*(code *)PTR_panic_bounds_check_00799520)(local_88,local_a8);
        goto LAB_0071ff95;
      }
      do {
        while ((local_78 >> ((ulonglong)*(byte *)(local_50 + uVar16) & 0x3f) & 1) == 0) {
          uVar17 = uVar16 - local_38;
          local_68 = uVar16;
          uVar16 = uVar17;
          if (local_48 <= uVar17) goto LAB_0071fa34;
        }
        uVar17 = 0;
        do {
          if (local_38 == uVar17) goto LAB_0071fa44;
          pcVar1 = (char *)(local_40 + uVar17);
          pcVar2 = (char *)(local_50 + uVar16 + uVar17);
          uVar17 = uVar17 + 1;
        } while (*pcVar1 == *pcVar2);
        uVar16 = (local_68 - uStack_80) - local_38;
        local_68 = local_68 - uStack_80;
      } while (uVar16 < local_48);
    }
  }
  else {
    uVar16 = local_68 - local_38;
    if (uVar16 < local_48) {
      local_a8 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00795cc8;
LAB_0071f7a2:
      do {
        uVar17 = uVar16;
        if ((local_78 >> ((ulonglong)*(byte *)(local_50 + uVar16) & 0x3f) & 1) != 0) {
          uVar17 = local_88;
          if (local_58 < local_88) {
            uVar17 = local_58;
          }
          uVar17 = uVar17 - 1;
          do {
            if (uVar17 == 0xffffffffffffffff) {
              uVar17 = local_88;
              goto LAB_0071f800;
            }
            if (local_38 <= uVar17) goto LAB_0071ff7f;
            pcVar1 = (char *)(local_40 + uVar17);
            uVar18 = uVar17 - 1;
            pcVar2 = (char *)(local_50 + uVar16 + uVar17);
            uVar17 = uVar18;
          } while (*pcVar1 == *pcVar2);
          uVar17 = uVar18 + (local_68 - local_88) + 1;
        }
        uVar16 = uVar17 - local_38;
        local_68 = uVar17;
        local_58 = local_38;
      } while (uVar16 < local_48);
    }
  }
LAB_0071fa34:
  uVar16 = 0;
  uVar23 = 0;
  goto LAB_0071fb02;
  while (pcVar1 = (char *)(local_40 + uVar17), pcVar2 = (char *)(local_50 + uVar16 + uVar17),
        uVar17 = uVar17 + 1, *pcVar1 == *pcVar2) {
LAB_0071f920:
    if (local_38 == uVar17) goto LAB_0071fa44;
  }
  uVar17 = local_68 - uStack_80;
LAB_0071f8c3:
  local_68 = uVar17;
  uVar16 = local_68 - local_38;
  if (local_48 <= uVar16) goto LAB_0071fa34;
  goto LAB_0071f8d5;
  while( true ) {
    if (local_38 <= uVar17) {
      local_a8 = &PTR_s__rustc_48a229ceaefd4985c50990b14_00795cb0;
      goto LAB_0071ff7f;
    }
    pcVar1 = (char *)(local_40 + uVar17);
    pcVar2 = (char *)(local_50 + uVar16 + uVar17);
    uVar17 = uVar17 + 1;
    if (*pcVar1 != *pcVar2) break;
LAB_0071f800:
    if (local_58 <= uVar17) goto LAB_0071fa44;
  }
  local_68 = local_68 - uStack_80;
  uVar16 = local_68 - local_38;
  local_58 = uStack_80;
  if (local_48 <= uVar16) goto LAB_0071fa34;
  goto LAB_0071f7a2;
LAB_0071fa44:
  local_88 = uVar16;
  goto LAB_0071fa4c;
joined_r0x0071faa9:
  if (uVar17 != 0) {
    ppuVar19 = &PTR_s__vendor_serde_json_1_0_154_src_e_00795d18;
    if (uVar18 < uVar24) {
      if (*(char *)(uVar10 + uVar18) < -0x40) goto LAB_0071fac8;
    }
    else if (uVar24 != uVar18) {
LAB_0071fac8:
      local_88 = uVar24;
      uVar16 = uVar18;
      goto LAB_0071ff55;
    }
  }
  if ((7 < uVar24 - uVar18) &&
     (uVar17 = 0x206e6d756c6f6320, *(longlong *)(uVar10 + uVar18) == 0x206e6d756c6f6320)) {
    uVar23 = uVar18 + 8;
    ppuVar19 = &PTR_s__vendor_serde_json_1_0_154_src_e_00795d30;
    uVar20 = uVar23;
    do {
      if (uVar20 != 0) {
        if (uVar20 < uVar24) {
          if (*(char *)(uVar10 + uVar20) < -0x40) goto LAB_0071ffa2;
        }
        else if (uVar20 != uVar24) {
LAB_0071ffa2:
          local_88 = uVar24;
          uVar16 = uVar20;
          goto LAB_0071ff55;
        }
      }
      if (uVar24 == uVar20) {
        uVar20 = uVar24;
        goto LAB_0071fc31;
      }
      uVar17 = 0;
      if (9 < (byte)(*(char *)(uVar10 + uVar20) - 0x30U)) goto LAB_0071fc28;
      uVar20 = uVar20 + 1;
    } while( true );
  }
LAB_0071fafc:
  uVar16 = 0;
  uVar23 = 0;
  goto LAB_0071fb02;
LAB_0071fc28:
  if (uVar20 < uVar24) goto LAB_0071fafc;
LAB_0071fc31:
  ppuVar19 = &PTR_s__vendor_serde_json_1_0_154_src_e_00795d48;
  if ((uVar18 < uVar16) ||
     (((uVar16 != 0 && (*(char *)(uVar10 + uVar16) < -0x40)) || (*(char *)(uVar10 + uVar18) < -0x40)
      ))) {
    local_88 = uVar18;
LAB_0071ff55:
    (*(code *)PTR_slice_error_fail_00799408)(local_88,uVar16,ppuVar19);
    goto LAB_0071ff95;
  }
  uVar21 = uVar18 - uVar16;
  if (uVar21 == 0) {
    uVar16 = 0;
    uVar23 = 0;
    goto LAB_0071fb02;
  }
  if (uVar21 == 1) {
    cVar15 = *(char *)(uVar10 + uVar16);
    if ((cVar15 != '+') && (cVar15 != '-')) goto LAB_0071fc93;
  }
  else {
    cVar15 = *(char *)(uVar10 + uVar16);
LAB_0071fc93:
    uVar12 = (ulonglong)(cVar15 == '+');
    if (uVar21 - uVar12 < 0x11) {
      if (uVar21 == uVar12) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        uVar21 = local_88;
        do {
          uVar14 = *(byte *)(uVar12 + uVar10 + 9 + uVar21) - 0x30;
          if (9 < uVar14) goto LAB_0071fdc9;
          uVar17 = (ulonglong)uVar14;
          uVar16 = uVar17 + uVar16 * 10;
          uVar21 = uVar21 + 1;
        } while ((-uVar12 + uVar18) - 9 != uVar21);
      }
LAB_0071fdd4:
      ppuVar19 = &PTR_s__vendor_serde_json_1_0_154_src_e_00795d60;
      if (((uVar23 <= uVar20) && (uVar20 <= uVar24)) &&
         ((uVar23 == uVar24 || ((uVar23 == 0 || (-0x41 < *(char *)(uVar10 + uVar23))))))) {
        uVar21 = uVar20 - uVar23;
        if (uVar21 == 0) {
          uVar16 = 0;
          uVar23 = 0;
        }
        else {
          if (uVar21 == 1) {
            cVar15 = *(char *)(uVar10 + uVar23);
            if ((cVar15 == '+') || (cVar15 == '-')) goto LAB_0071fafc;
          }
          else {
            cVar15 = *(char *)(uVar10 + uVar23);
          }
          uVar12 = (ulonglong)(cVar15 == '+');
          if (0x10 < uVar21 - uVar12) {
            ppuVar19 = (undefined **)(uVar12 + uVar10 + 8);
            uVar23 = 0;
            while( true ) {
              if ((uVar20 + -uVar12) - 8 == uVar18) goto LAB_0071fee8;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar23;
              uVar21 = SUB168(auVar8 * ZEXT816(10),0);
              if (SUB168(auVar8 * ZEXT816(10),8) != 0) break;
              uVar14 = *(byte *)((longlong)ppuVar19 + uVar18) - 0x30;
              uVar17 = (ulonglong)uVar14;
              uVar23 = uVar21 + uVar17;
              if ((9 < uVar14) || (uVar18 = uVar18 + 1, CARRY8(uVar21,uVar17))) break;
            }
            goto LAB_0071fafc;
          }
          if (uVar21 == uVar12) {
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            do {
              uVar14 = *(byte *)(uVar12 + uVar10 + 8 + uVar18) - 0x30;
              if (9 < uVar14) goto LAB_0071fafc;
              uVar17 = (ulonglong)uVar14;
              uVar23 = uVar17 + uVar23 * 10;
              uVar18 = uVar18 + 1;
            } while ((-uVar12 + uVar20) - 8 != uVar18);
          }
LAB_0071fee8:
          if (local_88 <= uVar24) {
            bVar25 = local_88 < uVar24;
            uVar24 = local_88;
            if ((bVar25 && local_88 != 0) && (*(char *)(uVar10 + local_88) < -0x40)) {
              (*(code *)PTR_panic_00799338)
                        (CONCAT71((int7)(uVar17 >> 8),bVar25 && local_88 != 0),
                         &PTR_s__vendor_serde_json_1_0_154_src_e_00795d78,ppuVar19);
              goto LAB_0071ff95;
            }
          }
        }
        goto LAB_0071fb02;
      }
      local_88 = uVar20;
      uVar16 = uVar23;
      goto LAB_0071ff55;
    }
    uVar16 = 0;
    uVar21 = local_88;
    while( true ) {
      if ((uVar18 + -uVar12) - 9 == uVar21) goto LAB_0071fdd4;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      uVar13 = SUB168(auVar7 * ZEXT816(10),0);
      if (SUB168(auVar7 * ZEXT816(10),8) != 0) break;
      uVar14 = *(byte *)(uVar12 + uVar10 + 9 + uVar21) - 0x30;
      uVar17 = (ulonglong)uVar14;
      uVar16 = uVar13 + uVar17;
      if ((9 < uVar14) || (uVar21 = uVar21 + 1, CARRY8(uVar13,uVar17))) break;
    }
  }
LAB_0071fdc9:
  uVar23 = 0;
  uVar16 = 0;
LAB_0071fb02:
  if (uVar24 < *param_1) {
    if (uVar24 == 0) {
      uVar10 = 1;
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar26,1);
    }
    else {
      uVar10 = (*(code *)PTR___rust_realloc_007997f0)(uVar24,1);
      if (uVar10 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_0071ff95;
      }
    }
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar11 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar11 != (undefined8 *)0x0) {
    puVar11[4] = uVar23;
    puVar11[2] = uVar24;
    puVar11[3] = uVar16;
    *puVar11 = 0;
    puVar11[1] = uVar10;
    return;
  }
  (*(code *)PTR_handle_alloc_error_007991d8)();
LAB_0071ff95:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}


