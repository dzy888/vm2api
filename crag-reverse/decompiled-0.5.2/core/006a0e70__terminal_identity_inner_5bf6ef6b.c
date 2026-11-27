// 006a0e70 terminal_identity_inner

/* WARNING: Removing unreachable block (ram,0x006a1724) */
/* WARNING: Removing unreachable block (ram,0x006a164e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::bridge::terminal_identity_inner */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::bridge::terminal_identity_inner
          (undefined8 *param_1,longlong param_2,longlong param_3,char param_4)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  byte *pbVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  byte *pbVar28;
  byte *pbVar29;
  char local_a8;
  ulonglong local_98;
  undefined1 local_90;
  byte bStack_8f;
  char cStack_8e;
  undefined5 uStack_8d;
  ulonglong local_88;
  ulonglong local_78;
  longlong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  (*(code *)PTR_new_00799a18)(") ");
  if (local_a8 == '\0') {
    if (cStack_8e == '\0') {
      if (local_98 == 0) {
        if ((bStack_8f & 1) == 0) goto LAB_006a1043;
      }
      else {
        if (local_98 < local_58) {
          if (-0x41 < *(char *)(local_60 + local_98)) goto LAB_006a10b8;
        }
        else if (local_98 == local_58) {
LAB_006a10b8:
          bVar4 = *(byte *)((local_60 - 1) + local_98);
          uVar16 = (uint)bVar4;
          uVar21 = (uint)bVar4;
          local_78 = local_98;
          local_48 = local_58;
          if ((char)bVar4 < '\0') {
            bVar3 = *(byte *)((local_60 - 2) + local_98);
            uVar20 = (uint)bVar3;
            uVar16 = (uint)bVar4;
            if (-0x41 < (char)bVar3) goto LAB_006a11d4;
            bVar4 = *(byte *)((local_60 - 3) + local_98);
            if ((char)bVar4 < -0x40) {
              uVar16 = bVar4 & 0x3f | (*(byte *)((local_60 - 4) + local_98) & 7) << 6;
            }
            else {
              uVar16 = bVar4 & 0xf;
            }
            uVar20 = uVar20 & 0x3f | uVar16 << 6;
            goto LAB_006a123c;
          }
          goto joined_r0x006a10c7;
        }
LAB_006a128e:
        (*(code *)PTR_slice_error_fail_00799408)();
      }
LAB_006a129d:
      local_78 = 0;
LAB_006a12af:
      uVar27 = param_3 - local_78;
      pbVar28 = (byte *)(param_2 + local_78);
      bVar7 = false;
      bVar23 = false;
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      do {
        pbVar17 = pbVar28;
        bVar24 = bVar23;
        while( true ) {
          uVar19 = uVar27;
          pbVar28 = pbVar17;
          if (bVar24) goto LAB_006a1761;
          if (uVar19 == 0) break;
          uVar13 = 0;
          while ((0x20 < (ulonglong)pbVar28[uVar13] ||
                 ((0x100003600U >> ((ulonglong)pbVar28[uVar13] & 0x3f) & 1) == 0))) {
            uVar13 = uVar13 + 1;
            if (uVar19 == uVar13) {
              bVar7 = true;
              bVar23 = true;
              uVar27 = uVar25;
              pbVar28 = pbVar29;
              goto LAB_006a133a;
            }
          }
          uVar25 = ~uVar13 + uVar19;
          pbVar29 = pbVar28 + uVar13 + 1;
          bVar24 = false;
          pbVar17 = pbVar29;
          uVar27 = uVar25;
          if (uVar13 != 0) {
            uVar27 = ~uVar13 + uVar19;
            pbVar28 = pbVar28 + uVar13 + 1;
LAB_006a133a:
            uVar25 = uVar27;
            pbVar29 = pbVar28;
            goto LAB_006a1340;
          }
        }
        bVar7 = true;
        bVar23 = true;
        uVar27 = 0;
      } while( true );
    }
  }
  else if (local_70 == -1) {
    uVar25 = local_78 - local_48;
    if (uVar25 < local_58) {
      lVar15 = CONCAT53(uStack_8d,CONCAT12(cStack_8e,CONCAT11(bStack_8f,local_90)));
      uVar27 = local_98 - 1;
      if (uVar27 < local_48) {
LAB_006a10ea:
        if ((local_88 >> ((ulonglong)*(byte *)(local_60 + uVar25) & 0x3f) & 1) != 0) {
          lVar18 = 0;
          do {
            if (-lVar18 == local_98) {
              uVar19 = local_98;
              goto LAB_006a1140;
            }
            pcVar11 = (char *)(uVar27 + local_50 + lVar18);
            lVar1 = lVar18 + -1;
            pcVar2 = (char *)(local_60 + uVar27 + uVar25 + lVar18);
            lVar18 = lVar1;
          } while (*pcVar11 == *pcVar2);
          goto LAB_006a10d8;
        }
        goto LAB_006a10db;
      }
      if (local_98 != 0) {
        local_50 = (ulonglong)*(byte *)(local_60 + uVar25);
        if ((local_88 >> (local_50 & 0x3f) & 1) == 0) {
          uVar25 = local_78 + local_48 * -2;
          do {
            if (local_58 <= uVar25) goto LAB_006a1043;
            local_50 = (ulonglong)*(byte *)(local_60 + uVar25);
            uVar25 = uVar25 - local_48;
          } while ((local_88 >> (local_50 & 0x3f) & 1) == 0);
        }
LAB_006a11c7:
        uVar20 = (uint)local_50;
        uVar16 = 0x790a20;
        bStack_8f = (*(code *)PTR_panic_bounds_check_00799520)();
        local_98 = local_60;
        local_60 = uVar27;
LAB_006a11d4:
        uVar21 = uVar16;
        uVar20 = uVar20 & 0x1f;
LAB_006a123c:
        uVar16 = uVar21 & 0x3f | uVar20 << 6;
        local_78 = local_98;
joined_r0x006a10c7:
        if ((bStack_8f & 1) != 0) goto LAB_006a12af;
        uVar25 = 0xffffffffffffffff;
        if ((0x7f < uVar16) && (uVar25 = 0xfffffffffffffffe, 0x7ff < uVar16)) {
          uVar25 = (ulonglong)(uVar16 < 0x10000) | 0xfffffffffffffffc;
        }
        local_78 = uVar25 + local_78;
        if (local_78 == 0) goto LAB_006a129d;
        if (local_78 < local_48) {
          if (-0x41 < *(char *)(local_60 + local_78)) goto LAB_006a12af;
        }
        else if (local_78 == local_48) goto LAB_006a12af;
        goto LAB_006a128e;
      }
      do {
        while ((local_88 >> ((ulonglong)*(byte *)(local_60 + uVar25) & 0x3f) & 1) == 0) {
          uVar27 = uVar25 - local_48;
          local_78 = uVar25;
          uVar25 = uVar27;
          if (local_58 <= uVar27) goto LAB_006a1043;
        }
        uVar27 = 0;
        do {
          if (local_48 == uVar27) goto LAB_006a12af;
          pcVar11 = (char *)(local_50 + uVar27);
          pcVar2 = (char *)(uVar25 + local_60 + uVar27);
          uVar27 = uVar27 + 1;
        } while (*pcVar11 == *pcVar2);
        local_78 = local_78 - lVar15;
        uVar25 = local_78 - local_48;
      } while (uVar25 < local_58);
    }
  }
  else {
    uVar25 = local_78 - local_48;
    if (uVar25 < local_58) {
      uVar19 = CONCAT53(uStack_8d,CONCAT12(cStack_8e,CONCAT11(bStack_8f,local_90)));
LAB_006a0f12:
      do {
        if ((local_88 >> ((ulonglong)*(byte *)(local_60 + uVar25) & 0x3f) & 1) != 0) {
          uVar27 = local_98;
          if (local_68 < local_98) {
            uVar27 = local_68;
          }
          uVar27 = uVar27 - 1;
          do {
            if (uVar27 == 0xffffffffffffffff) {
              uVar27 = local_98;
              goto LAB_006a0f70;
            }
            if (local_48 <= uVar27) goto LAB_006a11c7;
            pcVar11 = (char *)(local_50 + uVar27);
            uVar13 = uVar27 - 1;
            pcVar2 = (char *)(uVar25 + local_60 + uVar27);
            uVar27 = uVar13;
          } while (*pcVar11 == *pcVar2);
          uVar25 = (local_78 - local_98) + uVar13 + 1;
        }
        local_78 = uVar25;
        uVar25 = local_78 - local_48;
        local_68 = local_48;
      } while (uVar25 < local_58);
    }
  }
LAB_006a1043:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  uVar26 = 1;
  pcVar11 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar12 = s_ive_process_stat_001a4ba2._8_8_;
  if (pcVar11 != (char *)0x0) {
    *(ulonglong *)(pcVar11 + 0xb) =
         CONCAT35(s_ive_process_stat_001a4ba2._5_3_,
                  CONCAT41(s_ive_process_stat_001a4ba2._1_4_,s_ive_process_stat_001a4ba2[0]));
    *(undefined8 *)(pcVar11 + 0x13) = uVar12;
    uVar10 = s_ive_process_stat_001a4ba2._1_4_;
    uVar9 = ram0x001a4b9f;
    uVar8 = s_invalid_nat_001a4b97._4_4_;
    *(undefined4 *)pcVar11 = s_invalid_nat_001a4b97._0_4_;
    *(undefined4 *)(pcVar11 + 4) = uVar8;
    *(undefined4 *)(pcVar11 + 8) = uVar9;
    *(undefined4 *)(pcVar11 + 0xc) = uVar10;
    uVar12 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
    param_1[1] = uVar12;
    goto LAB_006a1fce;
  }
LAB_006a20c1:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_006a20d1:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_006a20e1:
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar5 = (code *)swi(3);
  puVar14 = (undefined8 *)(*pcVar5)();
  return puVar14;
  while (pcVar11 = (char *)(local_50 + uVar19), pcVar2 = (char *)(uVar25 + local_60 + uVar19),
        uVar19 = uVar19 + 1, *pcVar11 == *pcVar2) {
LAB_006a1140:
    if (local_48 == uVar19) goto LAB_006a12af;
  }
  lVar1 = -lVar15;
LAB_006a10d8:
  uVar25 = local_78 + lVar1;
LAB_006a10db:
  local_78 = uVar25;
  uVar25 = local_78 - local_48;
  if (local_58 <= uVar25) goto LAB_006a1043;
  goto LAB_006a10ea;
  while( true ) {
    if (local_48 <= uVar27) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (local_60,&PTR_s__rustc_48a229ceaefd4985c50990b14_00790a08);
      goto LAB_006a20c1;
    }
    pcVar11 = (char *)(local_50 + uVar27);
    pcVar2 = (char *)(uVar25 + local_60 + uVar27);
    uVar27 = uVar27 + 1;
    if (*pcVar11 != *pcVar2) break;
LAB_006a0f70:
    if (local_68 <= uVar27) goto LAB_006a12af;
  }
  local_78 = local_78 - uVar19;
  uVar25 = local_78 - local_48;
  local_68 = uVar19;
  if (local_58 <= uVar25) goto LAB_006a1043;
  goto LAB_006a0f12;
LAB_006a1340:
  pbVar17 = pbVar28;
  bVar24 = bVar23;
  while( true ) {
    uVar19 = uVar27;
    pbVar28 = pbVar17;
    if (bVar24) goto LAB_006a1761;
    if (uVar19 == 0) break;
    uVar13 = 0;
    while ((0x20 < (ulonglong)pbVar28[uVar13] ||
           ((0x100003600U >> ((ulonglong)pbVar28[uVar13] & 0x3f) & 1) == 0))) {
      uVar13 = uVar13 + 1;
      if (uVar19 == uVar13) {
        bVar7 = true;
        bVar23 = true;
        uVar27 = uVar25;
        pbVar28 = pbVar29;
        goto LAB_006a13aa;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    pbVar29 = pbVar28 + uVar13 + 1;
    bVar24 = false;
    pbVar17 = pbVar29;
    uVar27 = uVar25;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
      pbVar28 = pbVar28 + uVar13 + 1;
LAB_006a13aa:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a13b0;
    }
  }
  bVar7 = true;
  bVar23 = true;
  uVar27 = 0;
  goto LAB_006a1340;
LAB_006a13b0:
  pbVar17 = pbVar28;
  bVar24 = bVar23;
  while( true ) {
    uVar19 = uVar27;
    pbVar28 = pbVar17;
    if (bVar24) goto LAB_006a1761;
    if (uVar19 == 0) break;
    uVar13 = 0;
    while ((0x20 < (ulonglong)pbVar28[uVar13] ||
           ((0x100003600U >> ((ulonglong)pbVar28[uVar13] & 0x3f) & 1) == 0))) {
      uVar13 = uVar13 + 1;
      if (uVar19 == uVar13) {
        bVar7 = true;
        bVar23 = true;
        uVar27 = uVar25;
        pbVar28 = pbVar29;
        goto LAB_006a141a;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    pbVar29 = pbVar28 + uVar13 + 1;
    bVar24 = false;
    pbVar17 = pbVar29;
    uVar27 = uVar25;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
      pbVar28 = pbVar28 + uVar13 + 1;
LAB_006a141a:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1420;
    }
  }
  bVar7 = true;
  bVar23 = true;
  uVar27 = 0;
  goto LAB_006a13b0;
LAB_006a1420:
  pbVar17 = pbVar28;
  while( true ) {
    pbVar28 = pbVar17;
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1761;
    if (uVar19 == 0) break;
    uVar13 = 0;
    while ((0x20 < (ulonglong)pbVar28[uVar13] ||
           ((0x100003600U >> ((ulonglong)pbVar28[uVar13] & 0x3f) & 1) == 0))) {
      uVar13 = uVar13 + 1;
      if (uVar19 == uVar13) {
        bVar7 = true;
        uVar27 = uVar25;
        goto LAB_006a1487;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    pbVar29 = pbVar28 + uVar13 + 1;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar17 = pbVar29;
    if (uVar13 != 0) {
      pbVar29 = pbVar28 + uVar13 + 1;
      uVar27 = ~uVar13 + uVar19;
LAB_006a1487:
      uVar16 = 0;
      pbVar28 = pbVar29;
      uVar25 = uVar27;
      bVar23 = bVar7;
      goto LAB_006a14b0;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  bVar23 = true;
  goto LAB_006a1420;
LAB_006a14b0:
  do {
    pbVar17 = pbVar28;
    if (bVar23) goto LAB_006a1763;
    if (uVar27 == 0) {
      bVar7 = true;
      goto LAB_006a1763;
    }
    uVar19 = 0;
    do {
      if (((ulonglong)pbVar17[uVar19] < 0x21) &&
         ((0x100003600U >> ((ulonglong)pbVar17[uVar19] & 0x3f) & 1) != 0)) {
        uVar27 = ~uVar19 + uVar27;
        pbVar29 = pbVar17 + uVar19 + 1;
        bVar23 = false;
        uVar25 = uVar27;
        pbVar28 = pbVar29;
        goto joined_r0x006a1505;
      }
      uVar19 = uVar19 + 1;
    } while (uVar27 != uVar19);
    bVar7 = true;
    bVar23 = true;
    pbVar28 = pbVar17;
    uVar19 = uVar27;
joined_r0x006a1505:
  } while (uVar19 == 0);
  bVar4 = *pbVar17;
  if ((uVar19 == 1) && ((bVar4 == 0x2b || (uVar19 = 1, bVar4 == 0x2d)))) goto LAB_006a1763;
  if (bVar4 == 0x2d) {
    lVar15 = uVar19 - 1;
    if (uVar19 < 9) {
      if (lVar15 == 0) goto LAB_006a1717;
      uVar27 = 1;
      uVar21 = 0;
      do {
        if (9 < pbVar17[uVar27] - 0x30) goto LAB_006a1761;
        uVar21 = uVar21 * 10 - (pbVar17[uVar27] - 0x30);
        uVar27 = uVar27 + 1;
      } while (uVar19 != uVar27);
    }
    else {
      uVar21 = 0;
      do {
        pbVar17 = pbVar17 + 1;
        iVar22 = (int)((longlong)(int)uVar21 * 10);
        if ((longlong)iVar22 != (longlong)(int)uVar21 * 10) goto LAB_006a1763;
        uVar20 = *pbVar17 - 0x30;
        if ((9 < uVar20) || (uVar21 = iVar22 - uVar20, SBORROW4(iVar22,uVar20))) goto LAB_006a1761;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  else {
    if (bVar4 == 0x2b) {
      pbVar17 = pbVar17 + 1;
      uVar19 = uVar19 - 1;
    }
    if (uVar19 < 8) {
      if (uVar19 == 0) {
LAB_006a1717:
        uVar16 = 0;
        goto LAB_006a1763;
      }
      uVar21 = *pbVar17 - 0x30;
      if (uVar21 < 10) {
        if (uVar19 == 1) goto LAB_006a174e;
        if (pbVar17[1] - 0x30 < 10) {
          uVar21 = (pbVar17[1] - 0x30) + uVar21 * 10;
          if (uVar19 == 2) goto LAB_006a174e;
          if (pbVar17[2] - 0x30 < 10) {
            uVar21 = (pbVar17[2] - 0x30) + uVar21 * 10;
            if (uVar19 == 3) goto LAB_006a174e;
            if (pbVar17[3] - 0x30 < 10) {
              uVar21 = (pbVar17[3] - 0x30) + uVar21 * 10;
              if (uVar19 == 4) goto LAB_006a174e;
              if (pbVar17[4] - 0x30 < 10) {
                uVar21 = (pbVar17[4] - 0x30) + uVar21 * 10;
                if (uVar19 == 5) goto LAB_006a174e;
                if (pbVar17[5] - 0x30 < 10) {
                  uVar21 = (pbVar17[5] - 0x30) + uVar21 * 10;
                  if (uVar19 == 6) goto LAB_006a174e;
                  if (pbVar17[6] - 0x30 < 10) {
                    uVar16 = (pbVar17[6] - 0x30) + uVar21 * 10;
                    goto LAB_006a1763;
                  }
                }
              }
            }
          }
        }
      }
LAB_006a1761:
      uVar16 = 0;
      goto LAB_006a1763;
    }
    uVar21 = 0;
    do {
      iVar22 = (int)((longlong)(int)uVar21 * 10);
      if ((longlong)iVar22 != (longlong)(int)uVar21 * 10) goto LAB_006a1763;
      uVar20 = *pbVar17 - 0x30;
      if ((9 < uVar20) || (uVar21 = iVar22 + uVar20, SCARRY4(iVar22,uVar20))) goto LAB_006a1761;
      pbVar17 = pbVar17 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_006a174e:
  uVar16 = uVar21;
LAB_006a1763:
  uVar27 = uVar25;
  pbVar28 = pbVar29;
  do {
    pbVar17 = pbVar29;
    bVar23 = bVar7;
    while( true ) {
      uVar19 = uVar25;
      pbVar29 = pbVar17;
      if (bVar23) goto LAB_006a1f64;
      if (uVar19 == 0) break;
      uVar13 = 0;
      while ((0x20 < (ulonglong)pbVar29[uVar13] ||
             ((0x100003600U >> ((ulonglong)pbVar29[uVar13] & 0x3f) & 1) == 0))) {
        uVar13 = uVar13 + 1;
        if (uVar19 == uVar13) {
          bVar7 = true;
          goto LAB_006a17d6;
        }
      }
      uVar27 = ~uVar13 + uVar19;
      pbVar28 = pbVar29 + uVar13 + 1;
      bVar23 = false;
      pbVar17 = pbVar28;
      uVar25 = uVar27;
      if (uVar13 != 0) {
        pbVar28 = pbVar29 + uVar13 + 1;
        uVar27 = ~uVar13 + uVar19;
LAB_006a17d6:
        uVar25 = uVar27;
        pbVar29 = pbVar28;
        goto LAB_006a17dc;
      }
    }
    bVar7 = true;
    uVar25 = 0;
  } while( true );
LAB_006a17dc:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1842;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1842:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1848;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a17dc;
LAB_006a1848:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a18b2;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a18b2:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a18b8;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1848;
LAB_006a18b8:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1922;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1922:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1928;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a18b8;
LAB_006a1928:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1992;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a1992:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1998;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1928;
LAB_006a1998:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1a02;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1a02:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1a08;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a1998;
LAB_006a1a08:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1a72;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a1a72:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1a78;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1a08;
LAB_006a1a78:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1ae2;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1ae2:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1ae8;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a1a78;
LAB_006a1ae8:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1b52;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a1b52:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1b58;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1ae8;
LAB_006a1b58:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1bc2;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1bc2:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1bc8;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a1b58;
LAB_006a1bc8:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1c32;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a1c32:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1c38;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1bc8;
LAB_006a1c38:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1ca2;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
LAB_006a1ca2:
      uVar27 = uVar25;
      pbVar28 = pbVar29;
      goto LAB_006a1ca8;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a1c38;
LAB_006a1ca8:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar25;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar29;
    while( true ) {
      pbVar29 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar29;
      if (uVar19 == uVar13) {
        bVar7 = true;
        goto LAB_006a1d24;
      }
    }
    uVar27 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar25 = uVar27;
    pbVar28 = pbVar29;
    if (uVar13 != 0) {
      uVar27 = ~uVar13 + uVar19;
LAB_006a1d24:
      uVar25 = uVar27;
      pbVar29 = pbVar28;
      goto LAB_006a1d2a;
    }
  }
  bVar7 = true;
  uVar25 = 0;
  goto LAB_006a1ca8;
LAB_006a1d2a:
  bVar23 = bVar7;
  while( true ) {
    uVar19 = uVar27;
    if (bVar23) goto LAB_006a1f64;
    if (uVar19 == 0) break;
    uVar13 = 0;
    pbVar17 = pbVar28;
    while( true ) {
      pbVar28 = pbVar17 + 1;
      if (((ulonglong)*pbVar17 < 0x21) && ((0x100003600U >> ((ulonglong)*pbVar17 & 0x3f) & 1) != 0))
      break;
      uVar13 = uVar13 + 1;
      pbVar17 = pbVar28;
      if (uVar19 == uVar13) {
        bVar7 = true;
        pbVar28 = pbVar29;
        goto LAB_006a1e60;
      }
    }
    uVar25 = ~uVar13 + uVar19;
    bVar23 = false;
    uVar27 = uVar25;
    pbVar29 = pbVar28;
    if (uVar13 != 0) {
      uVar25 = ~uVar13 + uVar19;
      goto LAB_006a1e60;
    }
  }
  bVar7 = true;
  uVar27 = 0;
  goto LAB_006a1d2a;
LAB_006a1e60:
  do {
    pbVar29 = pbVar28;
    if ((bVar7) || (uVar25 == 0)) goto LAB_006a1f64;
    uVar27 = 0;
    do {
      if (((ulonglong)pbVar29[uVar27] < 0x21) &&
         ((0x100003600U >> ((ulonglong)pbVar29[uVar27] & 0x3f) & 1) != 0)) {
        uVar25 = uVar25 + ~uVar27;
        bVar7 = false;
        pbVar28 = pbVar29 + uVar27 + 1;
        goto joined_r0x006a1eae;
      }
      uVar27 = uVar27 + 1;
    } while (uVar25 != uVar27);
    bVar7 = true;
    pbVar28 = pbVar29;
    uVar27 = uVar25;
joined_r0x006a1eae:
  } while (uVar27 == 0);
  bVar4 = *pbVar29;
  if ((uVar27 == 1) && ((bVar4 == 0x2b || (uVar27 = 1, bVar4 == 0x2d)))) {
LAB_006a1f64:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar11 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar26 = s_ative_start_time_001a4bbb._8_8_;
    if (pcVar11 == (char *)0x0) goto LAB_006a20d1;
    *(ulonglong *)(pcVar11 + 9) =
         CONCAT17(s_ative_start_time_001a4bbb[7],
                  CONCAT43(s_ative_start_time_001a4bbb._3_4_,s_ative_start_time_001a4bbb._0_3_));
    *(undefined8 *)(pcVar11 + 0x11) = uVar26;
    uVar10 = s_ative_start_time_001a4bbb._3_4_;
    uVar9 = ram0x001a4bba;
    uVar8 = s_invalid_n_001a4bb2._4_4_;
    *(undefined4 *)pcVar11 = s_invalid_n_001a4bb2._0_4_;
    *(undefined4 *)(pcVar11 + 4) = uVar8;
    *(undefined4 *)(pcVar11 + 8) = uVar9;
    *(undefined4 *)(pcVar11 + 0xc) = uVar10;
  }
  else {
    uVar25 = (ulonglong)(bVar4 == 0x2b);
    if (0x10 < uVar27 - uVar25) {
      uVar19 = 0;
      lVar15 = 0;
      while( true ) {
        if (lVar15 == uVar27 + -uVar25) goto LAB_006a1fe8;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar19;
        uVar13 = SUB168(auVar6 * ZEXT816(10),0);
        if (SUB168(auVar6 * ZEXT816(10),8) != 0) break;
        uVar21 = pbVar29[lVar15 + uVar25] - 0x30;
        uVar19 = uVar13 + uVar21;
        if ((9 < uVar21) || (lVar15 = lVar15 + 1, CARRY8(uVar13,(ulonglong)uVar21))) break;
      }
      goto LAB_006a1f64;
    }
    if (uVar27 == uVar25) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      lVar15 = 0;
      do {
        if (9 < pbVar29[lVar15 + uVar25] - 0x30) goto LAB_006a1f64;
        uVar19 = (ulonglong)(pbVar29[lVar15 + uVar25] - 0x30) + uVar19 * 10;
        lVar15 = lVar15 + 1;
      } while (lVar15 != uVar27 + -uVar25);
    }
LAB_006a1fe8:
    if ((uVar16 != 0) &&
       ((param_4 != '\0' || (((uVar16 & 0xffe00) != 0x200 && ((uVar16 & 0xff000) != 0x8000)))))) {
      *(uint *)(param_1 + 1) = uVar16;
      param_1[2] = uVar19;
      uVar26 = 0;
      goto LAB_006a1fce;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar11 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar26 = s_ontrolling_terminal_001a5473._8_8_;
    if (pcVar11 == (char *)0x0) goto LAB_006a20e1;
    *(undefined8 *)(pcVar11 + 0x20) = s_ontrolling_terminal_001a5473._0_8_;
    *(undefined8 *)(pcVar11 + 0x28) = uVar26;
    uVar26 = s_as_no_required_c_001a5463._8_8_;
    *(undefined8 *)(pcVar11 + 0x10) = s_as_no_required_c_001a5463._0_8_;
    *(undefined8 *)(pcVar11 + 0x18) = uVar26;
    uVar10 = s_native_process_h_001a5453._12_4_;
    uVar9 = s_native_process_h_001a5453._8_4_;
    uVar8 = s_native_process_h_001a5453._4_4_;
    *(undefined4 *)pcVar11 = s_native_process_h_001a5453._0_4_;
    *(undefined4 *)(pcVar11 + 4) = uVar8;
    *(undefined4 *)(pcVar11 + 8) = uVar9;
    *(undefined4 *)(pcVar11 + 0xc) = uVar10;
    pcVar11[0x2f] = 'i';
    pcVar11[0x30] = 'n';
    pcVar11[0x31] = 'a';
    pcVar11[0x32] = 'l';
  }
  uVar26 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
  param_1[1] = uVar26;
  uVar26 = 1;
LAB_006a1fce:
  *param_1 = uVar26;
  return param_1;
}


