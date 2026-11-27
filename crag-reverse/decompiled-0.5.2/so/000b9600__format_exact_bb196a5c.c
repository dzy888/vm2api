// 000b9600 format_exact

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::format_exact */

undefined8 * __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::format_exact
          (undefined4 param_1,undefined8 *param_2,ulonglong *param_3,undefined1 *param_4,
          uint *param_5,undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined1 uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  char cVar21;
  uint *unaff_RBX;
  ulonglong uVar22;
  uint *puVar23;
  short sVar24;
  short sVar25;
  ulonglong uVar26;
  uint *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint auStack_3b4 [41];
  undefined8 local_310;
  uint local_308 [40];
  undefined8 local_268;
  uint local_260 [40];
  undefined8 local_1c0;
  uint local_1b8 [40];
  ulonglong local_118;
  undefined8 local_110;
  uint local_108 [40];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  uint *local_50;
  undefined1 *local_48;
  undefined4 local_3c;
  uint *local_38;
  
  uVar22 = *param_3;
  if (uVar22 == 0) {
LAB_000ba471:
    param_1 = (*(code *)PTR_panic_000c3b00)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3288);
LAB_000ba48a:
    param_1 = (*(code *)PTR_panic_000c3b00)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c32a0);
LAB_000ba4a3:
    param_1 = (*(code *)PTR_panic_000c3b00)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c32b8);
LAB_000ba4bc:
    param_1 = (*(code *)PTR_panic_000c3b00)
                        (param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3360);
    param_5 = unaff_RBX;
LAB_000ba4d5:
    uVar31 = (*(code *)PTR_panic_000c3b00)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3348)
    ;
LAB_000ba4ee:
    uVar31 = (*(code *)PTR_panic_000c3b00)(uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
LAB_000ba507:
    (*(code *)PTR_panic_000c3b00)(uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
LAB_000ba520:
    (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3330);
LAB_000ba52d:
    (*(code *)PTR_slice_index_fail_000c3bb0)(&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70,0x28);
LAB_000ba544:
    uVar31 = (*(code *)PTR_slice_index_fail_000c3bb0)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c32e8,param_5);
  }
  else {
    unaff_RBX = param_5;
    if (param_3[1] == 0) goto LAB_000ba48a;
    if (param_3[2] == 0) goto LAB_000ba4a3;
    if (CARRY8(param_3[2],uVar22)) goto LAB_000ba4bc;
    if (uVar22 < param_3[1]) goto LAB_000ba4d5;
    uVar29 = 0x3f;
    if (uVar22 - 1 != 0) {
      for (; uVar22 - 1 >> uVar29 == 0; uVar29 = uVar29 - 1) {
      }
    }
    uVar28 = ((longlong)(short)param_3[3] - (uVar29 ^ 0x3f)) * 0x4d104d42 + 0x1344135080;
    uVar29 = uVar28 >> 0x20;
    local_68 = 2 - (ulonglong)(uVar22 >> 0x20 == 0);
    local_108[0] = (uint)uVar22;
    local_108[1] = (uint)(uVar22 >> 0x20);
    local_108[2] = 0;
    local_108[3] = 0;
    local_108[4] = 0;
    local_108[5] = 0;
    local_108[6] = 0;
    local_108[7] = 0;
    local_108[8] = 0;
    local_108[9] = 0;
    local_108[10] = 0;
    local_108[0xb] = 0;
    local_108[0xc] = 0;
    local_108[0xd] = 0;
    local_108[0xe] = 0;
    local_108[0xf] = 0;
    local_108[0x10] = 0;
    local_108[0x11] = 0;
    local_108[0x12] = 0;
    local_108[0x13] = 0;
    local_108[0x14] = 0;
    local_108[0x15] = 0;
    local_108[0x16] = 0;
    local_108[0x17] = 0;
    local_108[0x18] = 0;
    local_108[0x19] = 0;
    local_108[0x1a] = 0;
    local_108[0x1b] = 0;
    local_108[0x1c] = 0;
    local_108[0x1d] = 0;
    local_108[0x1e] = 0;
    local_108[0x1f] = 0;
    local_108[0x20] = 0;
    local_108[0x21] = 0;
    local_108[0x22] = 0;
    local_108[0x23] = 0;
    local_108[0x24] = 0;
    local_108[0x25] = 0;
    local_108[0x26] = 0;
    local_108[0x27] = 0;
    local_1b8[0x25] = 0;
    local_1b8[0x26] = 0;
    local_1b8[0x27] = 0;
    local_1b8[0x21] = 0;
    local_1b8[0x22] = 0;
    local_1b8[0x23] = 0;
    local_1b8[0x24] = 0;
    local_1b8[0x1d] = 0;
    local_1b8[0x1e] = 0;
    local_1b8[0x1f] = 0;
    local_1b8[0x20] = 0;
    local_1b8[0x19] = 0;
    local_1b8[0x1a] = 0;
    local_1b8[0x1b] = 0;
    local_1b8[0x1c] = 0;
    local_1b8[0x15] = 0;
    local_1b8[0x16] = 0;
    local_1b8[0x17] = 0;
    local_1b8[0x18] = 0;
    local_1b8[0x11] = 0;
    local_1b8[0x12] = 0;
    local_1b8[0x13] = 0;
    local_1b8[0x14] = 0;
    local_1b8[0xd] = 0;
    local_1b8[0xe] = 0;
    local_1b8[0xf] = 0;
    local_1b8[0x10] = 0;
    local_1b8[9] = 0;
    local_1b8[10] = 0;
    local_1b8[0xb] = 0;
    local_1b8[0xc] = 0;
    local_1b8[5] = 0;
    local_1b8[6] = 0;
    local_1b8[7] = 0;
    local_1b8[8] = 0;
    local_1b8[1] = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[4] = 0;
    local_118 = 1;
    local_1b8[0] = 1;
    local_3c = param_6;
    (*(code *)PTR_mul_pow2_000c4768)();
    local_38 = param_5;
    (*(code *)PTR_mul_pow10_000c47a8)();
    puVar18 = local_1b8;
    uVar31 = (*(code *)PTR_memcpy_000c3aa8)();
    uVar32 = local_3c;
    puVar9 = PTR_memcpy_000c3aa8;
    puVar23 = local_38;
    if (Elf64_Ehdr_00000000.e_ident_pad < local_38) {
      do {
        if (0x28 < local_1c0) goto LAB_000ba431;
        if (local_1c0 != 0) {
          puVar27 = local_260 + local_1c0;
          uVar22 = local_1c0 * 4 - 4;
          if (uVar22 == 0) {
            lVar12 = 0;
          }
          else {
            uVar22 = (uVar22 >> 2) + 1;
            uVar26 = uVar22 & 0x7ffffffffffffffe;
            lVar12 = 0;
            do {
              uVar11 = puVar27[-1];
              auVar7._8_8_ = 0;
              auVar7._0_8_ = lVar12 << 0x20 | (ulonglong)uVar11;
              uVar19 = (uint)(SUB168(auVar7 * ZEXT816(0x112e0be826d694b3),8) >> 0x1a);
              puVar27[-1] = uVar19;
              uVar17 = CONCAT44(uVar11 + uVar19 * -1000000000,puVar27[-2]);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar17;
              uVar20 = SUB168(auVar8 * ZEXT816(0x112e0be826d694b3),8) >> 0x1a;
              param_5 = (uint *)(uVar20 * 1000000000);
              lVar12 = uVar17 + uVar20 * -1000000000;
              puVar27[-2] = (uint)uVar20;
              puVar27 = puVar27 + -2;
              uVar26 = uVar26 - 2;
            } while (uVar26 != 0);
            if ((uVar22 & 1) == 0) goto LAB_000b980b;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulonglong)puVar27[-1] | lVar12 << 0x20;
          puVar27[-1] = (uint)(SUB168(auVar6 * ZEXT816(0x112e0be826d694b3),8) >> 0x1a);
        }
LAB_000b980b:
        puVar23 = (uint *)((longlong)puVar23 + -9);
      } while (Elf64_Ehdr_00000000.e_ident_pad < puVar23);
    }
    uVar11 = *(int *)(POW10 + (longlong)puVar23 * 4) * 2;
    if (uVar11 == 0) goto LAB_000ba4ee;
    if (0x28 < local_1c0) {
LAB_000ba431:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70,0x28);
LAB_000ba445:
      (*(code *)PTR_slice_index_fail_000c3bb0)
                (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70,0x28);
LAB_000ba45c:
      param_1 = (*(code *)PTR_slice_index_fail_000c3bb0)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3300,param_5);
      unaff_RBX = param_5;
      goto LAB_000ba471;
    }
    if (local_1c0 == 0) {
      uVar22 = 0;
    }
    else {
      puVar23 = local_260 + local_1c0;
      uVar26 = (ulonglong)uVar11;
      uVar22 = local_1c0 * 4 - 4;
      if (uVar22 == 0) {
        uVar22 = 0;
LAB_000b99a4:
        if (uVar22 == 0) {
          uVar11 = puVar23[-1] / uVar11;
        }
        else {
          uVar11 = (uint)(((ulonglong)puVar23[-1] | uVar22 << 0x20) / uVar26);
        }
        puVar23[-1] = uVar11;
      }
      else {
        uVar17 = (uVar22 >> 2) + 1;
        uVar20 = uVar17 & 0x7ffffffffffffffe;
        uVar22 = 0;
        do {
          while( true ) {
            puVar27 = puVar23;
            uVar13 = (ulonglong)puVar27[-1];
            uVar14 = uVar13 | uVar22 << 0x20;
            if (uVar22 == 0) {
              uVar19 = puVar27[-1] / uVar11;
            }
            else {
              uVar19 = (uint)(uVar14 / uVar26);
              uVar13 = uVar14;
            }
            puVar27[-1] = uVar19;
            uVar19 = puVar27[-2];
            uVar14 = (ulonglong)uVar19 | uVar13 % uVar26 << 0x20;
            if (uVar13 % uVar26 == 0) break;
            uVar22 = uVar14 % uVar26;
            puVar27[-2] = (uint)(uVar14 / uVar26);
            uVar20 = uVar20 - 2;
            puVar23 = puVar27 + -2;
            if (uVar20 == 0) goto LAB_000b998b;
          }
          uVar22 = (ulonglong)uVar19 % uVar26;
          puVar27[-2] = uVar19 / uVar11;
          uVar20 = uVar20 - 2;
          puVar23 = puVar27 + -2;
        } while (uVar20 != 0);
LAB_000b998b:
        puVar23 = puVar27 + -2;
        if ((uVar17 & 1) != 0) goto LAB_000b99a4;
      }
      uVar22 = local_1c0;
    }
    uVar26 = local_68;
    if (uVar22 < local_68) {
      uVar22 = local_68;
    }
    if (0x28 < uVar22) goto LAB_000ba445;
    if (uVar22 == 0) {
      uVar22 = 0;
LAB_000b9a65:
      local_1c0 = uVar22;
      if (uVar22 < local_118) {
        uVar22 = local_118;
      }
      if (0x28 < uVar22) goto LAB_000ba445;
      lVar12 = uVar22 << 2;
      do {
        if (lVar12 == 0) goto LAB_000b9ae7;
        uVar11 = *(uint *)((longlong)local_1b8 + lVar12 + -4);
        uVar19 = *(uint *)((longlong)local_260 + lVar12 + -4);
        lVar12 = lVar12 + -4;
      } while (uVar19 == uVar11);
      if (uVar19 < uVar11) {
        if (uVar26 == 0) {
          uVar26 = 0;
          local_68 = 0;
        }
        else {
          uVar28 = uVar26 * 4 - 4;
          uVar17 = (uVar28 >> 2) + 1;
          uVar22 = (ulonglong)((uint)uVar17 & 3);
          if (uVar28 < 0xc) {
            puVar23 = local_108;
            uVar28 = 0;
LAB_000ba3ec:
            uVar17 = 0;
            do {
              uVar20 = uVar28 + (ulonglong)puVar23[uVar17] * 10;
              uVar28 = uVar20 >> 0x20;
              puVar23[uVar17] = (uint)uVar20;
              uVar17 = uVar17 + 1;
            } while (uVar22 != uVar17);
          }
          else {
            uVar17 = uVar17 & 0x7ffffffffffffffc;
            puVar23 = local_108;
            uVar28 = 0;
            do {
              uVar28 = uVar28 + (ulonglong)*puVar23 * 10;
              *puVar23 = (uint)uVar28;
              uVar28 = (uVar28 >> 0x20) + (ulonglong)puVar23[1] * 10;
              puVar23[1] = (uint)uVar28;
              uVar28 = (uVar28 >> 0x20) + (ulonglong)puVar23[2] * 10;
              puVar23[2] = (uint)uVar28;
              uVar28 = (uVar28 >> 0x20) + (ulonglong)puVar23[3] * 10;
              puVar23[3] = (uint)uVar28;
              puVar23 = puVar23 + 4;
              uVar28 = uVar28 >> 0x20;
              uVar17 = uVar17 - 4;
            } while (uVar17 != 0);
            if (uVar22 != 0) goto LAB_000ba3ec;
          }
          if (uVar28 != 0) {
            if (uVar26 == 0x28) goto LAB_000ba559;
            local_108[uVar26] = (uint)uVar28;
            uVar26 = uVar26 + 1;
          }
          local_68 = uVar26;
        }
      }
      else {
LAB_000b9ae7:
        uVar29 = (ulonglong)((int)(uVar28 >> 0x20) + 1);
      }
      bVar30 = true;
      sVar24 = (short)uVar29;
      sVar25 = (short)uVar32;
      if (sVar24 < sVar25) {
LAB_000ba0d7:
        puVar23 = (uint *)0x0;
        uVar22 = local_118;
      }
      else {
        puVar23 = (uint *)(longlong)(short)(sVar24 - sVar25);
        if (local_38 <= (uint *)((longlong)sVar24 - (longlong)sVar25)) {
          puVar23 = local_38;
        }
        if (puVar23 == (uint *)0x0) goto LAB_000ba0d7;
        local_58 = local_118;
        param_5 = local_1b8;
        local_60 = uVar29;
        local_50 = puVar23;
        local_48 = param_4;
        (*(code *)PTR_memcpy_000c3aa8)(puVar23,0xa8);
        puVar10 = PTR_mul_pow2_000c4768;
        local_110 = param_2;
        uVar32 = (*(code *)PTR_mul_pow2_000c4768)();
        (*(code *)puVar9)(uVar32,0xa8);
        uVar32 = (*(code *)puVar10)();
        (*(code *)puVar9)(uVar32,0xa8);
        param_4 = local_48;
        uVar31 = (*(code *)puVar10)();
        puVar15 = local_110;
        puVar23 = (uint *)0x0;
        do {
          if (0x28 < local_68) goto LAB_000ba431;
          puVar27 = (uint *)((longlong)puVar23 + 1);
          lVar12 = 0;
          do {
            if (local_68 * 4 == lVar12) {
              if (local_50 <= local_38) {
                if (local_50 != puVar23) {
                  (*(code *)PTR_memset_000c3cd8)();
                }
                *puVar15 = param_4;
                puVar15[1] = local_50;
                *(short *)(puVar15 + 2) = (short)local_60;
                return puVar15;
              }
              goto LAB_000ba520;
            }
            piVar2 = (int *)((longlong)local_108 + lVar12);
            lVar12 = lVar12 + 4;
          } while (*piVar2 == 0);
          uVar22 = local_68;
          if (local_68 < local_1c0) {
            uVar22 = local_1c0;
          }
          if (0x28 < uVar22) goto LAB_000ba445;
          lVar12 = uVar22 * 4;
          do {
            if (lVar12 == 0) goto LAB_000b9c70;
            uVar11 = *(uint *)((longlong)local_108 + lVar12 + -4);
            uVar19 = *(uint *)((longlong)local_260 + lVar12 + -4);
            lVar12 = lVar12 + -4;
          } while (uVar11 == uVar19);
          if (uVar11 < uVar19) {
            param_5 = (uint *)0x0;
          }
          else {
LAB_000b9c70:
            if (uVar22 == 1) {
              bVar30 = true;
              param_5 = (uint *)0x0;
LAB_000b9ccc:
              puVar3 = local_108 + (longlong)param_5;
              uVar11 = (uint)bVar30;
              uVar19 = *puVar3 + ~local_260[(longlong)param_5];
              bVar30 = CARRY4(*puVar3,~local_260[(longlong)param_5]) || CARRY4(uVar19,uVar11);
              *puVar3 = uVar19 + uVar11;
            }
            else {
              bVar30 = true;
              param_5 = (uint *)0x0;
              do {
                puVar3 = local_108 + (longlong)param_5;
                uVar11 = *puVar3;
                uVar19 = *puVar3 + ~local_260[(longlong)param_5];
                *puVar3 = uVar19 + bVar30;
                puVar3 = local_108 + (longlong)param_5 + 1;
                uVar11 = (uint)(CARRY4(uVar11,~local_260[(longlong)param_5]) ||
                               CARRY4(uVar19,(uint)bVar30));
                uVar19 = *puVar3 + ~local_260[(longlong)param_5 + 1];
                bVar30 = CARRY4(*puVar3,~local_260[(longlong)param_5 + 1]) || CARRY4(uVar19,uVar11);
                *puVar3 = uVar19 + uVar11;
                param_5 = (uint *)((longlong)param_5 + 2);
              } while ((uint *)(ulonglong)((uint)uVar22 & 0x3e) != param_5);
              if ((uVar22 & 1) != 0) goto LAB_000b9ccc;
            }
            if (!bVar30) goto LAB_000ba507;
            local_68 = uVar22;
            param_5 = (uint *)CONCAT71((int7)((ulonglong)param_5 >> 8),8);
          }
          uVar22 = local_68;
          if (local_68 < local_310) {
            uVar22 = local_310;
          }
          if (0x28 < uVar22) goto LAB_000ba445;
          lVar12 = uVar22 * 4;
          do {
            if (lVar12 == 0) goto LAB_000b9d50;
            puVar3 = (uint *)((longlong)auStack_3b4 + lVar12);
            uVar11 = *(uint *)((longlong)local_108 + lVar12 + -4);
            lVar12 = lVar12 + -4;
          } while (uVar11 == *puVar3);
          if (*puVar3 <= uVar11) {
LAB_000b9d50:
            if (uVar22 != 0) {
              if (uVar22 == 1) {
                bVar30 = true;
                uVar29 = 0;
LAB_000b9dc2:
                puVar3 = local_108 + uVar29;
                uVar11 = (uint)bVar30;
                uVar19 = *puVar3 + ~auStack_3b4[uVar29 + 1];
                bVar30 = CARRY4(*puVar3,~auStack_3b4[uVar29 + 1]) || CARRY4(uVar19,uVar11);
                *puVar3 = uVar19 + uVar11;
              }
              else {
                bVar30 = true;
                uVar29 = 0;
                do {
                  uVar19 = auStack_3b4[uVar29 + 1];
                  puVar3 = local_108 + uVar29;
                  uVar11 = *puVar3;
                  uVar4 = *puVar3 + ~uVar19;
                  *puVar3 = uVar4 + bVar30;
                  puVar3 = local_108 + uVar29 + 1;
                  uVar11 = (uint)(CARRY4(uVar11,~uVar19) || CARRY4(uVar4,(uint)bVar30));
                  uVar19 = *puVar3 + ~auStack_3b4[uVar29 + 2];
                  bVar30 = CARRY4(*puVar3,~auStack_3b4[uVar29 + 2]) || CARRY4(uVar19,uVar11);
                  *puVar3 = uVar19 + uVar11;
                  uVar29 = uVar29 + 2;
                } while (((uint)uVar22 & 0x3e) != uVar29);
                param_4 = local_48;
                if ((uVar22 & 1) != 0) goto LAB_000b9dc2;
              }
              if (!bVar30) goto LAB_000ba507;
            }
            local_68 = uVar22;
            param_5 = (uint *)((ulonglong)param_5 | 4);
          }
          uVar22 = local_68;
          if (local_68 < local_268) {
            uVar22 = local_268;
          }
          if (0x28 < uVar22) goto LAB_000ba52d;
          lVar12 = uVar22 * 4;
          do {
            if (lVar12 == 0) goto LAB_000b9e40;
            uVar11 = *(uint *)((longlong)local_308 + lVar12 + -4);
            uVar19 = *(uint *)((longlong)local_108 + lVar12 + -4);
            lVar12 = lVar12 + -4;
          } while (uVar19 == uVar11);
          if (uVar11 <= uVar19) {
LAB_000b9e40:
            if (uVar22 != 0) {
              if (uVar22 == 1) {
                bVar30 = true;
                uVar29 = 0;
LAB_000b9ea2:
                puVar3 = local_108 + uVar29;
                uVar11 = (uint)bVar30;
                uVar19 = *puVar3 + ~local_308[uVar29];
                bVar30 = CARRY4(*puVar3,~local_308[uVar29]) || CARRY4(uVar19,uVar11);
                *puVar3 = uVar19 + uVar11;
              }
              else {
                bVar30 = true;
                uVar29 = 0;
                do {
                  puVar3 = local_108 + uVar29;
                  uVar11 = *puVar3;
                  uVar19 = *puVar3 + ~local_308[uVar29];
                  *puVar3 = uVar19 + bVar30;
                  puVar3 = local_108 + uVar29 + 1;
                  uVar11 = (uint)(CARRY4(uVar11,~local_308[uVar29]) || CARRY4(uVar19,(uint)bVar30));
                  uVar19 = *puVar3 + ~local_308[uVar29 + 1];
                  bVar30 = CARRY4(*puVar3,~local_308[uVar29 + 1]) || CARRY4(uVar19,uVar11);
                  *puVar3 = uVar19 + uVar11;
                  uVar29 = uVar29 + 2;
                } while (((uint)uVar22 & 0x3e) != uVar29);
                param_4 = local_48;
                if ((uVar22 & 1) != 0) goto LAB_000b9ea2;
              }
              if (!bVar30) goto LAB_000ba507;
            }
            local_68 = uVar22;
            param_5 = (uint *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + '\x02');
          }
          uVar22 = local_68;
          if (local_68 < local_58) {
            uVar22 = local_58;
          }
          if (0x28 < uVar22) goto LAB_000ba431;
          lVar12 = uVar22 * 4;
          do {
            if (lVar12 == 0) goto LAB_000b9f20;
            uVar11 = *(uint *)((longlong)local_1b8 + lVar12 + -4);
            uVar19 = *(uint *)((longlong)local_108 + lVar12 + -4);
            lVar12 = lVar12 + -4;
          } while (uVar19 == uVar11);
          if (uVar11 <= uVar19) {
LAB_000b9f20:
            if (uVar22 != 0) {
              if (uVar22 == 1) {
                bVar30 = true;
                uVar29 = 0;
LAB_000b9f82:
                puVar3 = local_108 + uVar29;
                uVar11 = (uint)bVar30;
                uVar19 = *puVar3 + ~local_1b8[uVar29];
                bVar30 = CARRY4(*puVar3,~local_1b8[uVar29]) || CARRY4(uVar19,uVar11);
                *puVar3 = uVar19 + uVar11;
              }
              else {
                bVar30 = true;
                uVar29 = 0;
                do {
                  puVar3 = local_108 + uVar29;
                  uVar11 = *puVar3;
                  uVar19 = *puVar3 + ~local_1b8[uVar29];
                  *puVar3 = uVar19 + bVar30;
                  puVar3 = local_108 + uVar29 + 1;
                  uVar11 = (uint)(CARRY4(uVar11,~local_1b8[uVar29]) || CARRY4(uVar19,(uint)bVar30));
                  uVar19 = *puVar3 + ~local_1b8[uVar29 + 1];
                  bVar30 = CARRY4(*puVar3,~local_1b8[uVar29 + 1]) || CARRY4(uVar19,uVar11);
                  *puVar3 = uVar19 + uVar11;
                  uVar29 = uVar29 + 2;
                } while (((uint)uVar22 & 0x3e) != uVar29);
                param_4 = local_48;
                if ((uVar22 & 1) != 0) goto LAB_000b9f82;
              }
              if (!bVar30) goto LAB_000ba507;
            }
            local_68 = uVar22;
            param_5 = (uint *)CONCAT71((int7)((ulonglong)param_5 >> 8),(char)param_5 + '\x01');
          }
          uVar26 = local_68;
          if (puVar23 == local_38) goto LAB_000ba570;
          cVar21 = (char)param_5 + '0';
          param_5 = (uint *)CONCAT71((int7)((ulonglong)param_5 >> 8),cVar21);
          param_4[(longlong)puVar23] = cVar21;
          if (local_68 == 0) {
            uVar26 = 0;
          }
          else {
            uVar28 = local_68 * 4 - 4;
            uVar29 = (uVar28 >> 2) + 1;
            uVar22 = (ulonglong)((uint)uVar29 & 3);
            param_5 = local_108;
            if (uVar28 < 0xc) {
              uVar28 = 0;
LAB_000ba071:
              uVar29 = 0;
              do {
                uVar17 = uVar28 + (ulonglong)param_5[uVar29] * 10;
                uVar28 = uVar17 >> 0x20;
                param_5[uVar29] = (uint)uVar17;
                uVar29 = uVar29 + 1;
              } while (uVar22 != uVar29);
            }
            else {
              uVar29 = uVar29 & 0x7ffffffffffffffc;
              uVar28 = 0;
              do {
                uVar28 = uVar28 + (ulonglong)*param_5 * 10;
                *param_5 = (uint)uVar28;
                uVar28 = (uVar28 >> 0x20) + (ulonglong)param_5[1] * 10;
                param_5[1] = (uint)uVar28;
                uVar28 = (uVar28 >> 0x20) + (ulonglong)param_5[2] * 10;
                param_5[2] = (uint)uVar28;
                uVar28 = (uVar28 >> 0x20) + (ulonglong)param_5[3] * 10;
                param_5[3] = (uint)uVar28;
                param_5 = param_5 + 4;
                uVar28 = uVar28 >> 0x20;
                uVar29 = uVar29 - 4;
              } while (uVar29 != 0);
              param_4 = local_48;
              if (uVar22 != 0) goto LAB_000ba071;
            }
            if (uVar28 != 0) {
              if (uVar26 == 0x28) goto LAB_000ba559;
              local_108[uVar26] = (uint)uVar28;
              uVar26 = uVar26 + 1;
            }
          }
          local_68 = uVar26;
          puVar23 = puVar27;
        } while (puVar27 != local_50);
        bVar30 = false;
        uVar22 = local_58;
        uVar29 = local_60;
        puVar23 = local_50;
        param_2 = local_110;
      }
      sVar24 = (short)uVar29;
      if (uVar22 == 0) {
        uVar22 = 0;
LAB_000ba223:
        param_5 = local_38;
      }
      else {
        uVar17 = uVar22 * 4 - 4;
        uVar28 = (uVar17 >> 2) + 1;
        uVar29 = (ulonglong)((uint)uVar28 & 3);
        if (uVar17 < 0xc) {
          uVar17 = 0;
LAB_000ba1d1:
          uVar28 = 0;
          do {
            uVar20 = (ulonglong)puVar18[uVar28] * 5 + uVar17;
            uVar17 = uVar20 >> 0x20;
            puVar18[uVar28] = (uint)uVar20;
            uVar28 = uVar28 + 1;
          } while (uVar29 != uVar28);
        }
        else {
          uVar28 = uVar28 & 0x7ffffffffffffffc;
          puVar18 = local_1b8;
          uVar17 = 0;
          do {
            uVar17 = (ulonglong)*puVar18 * 5 + uVar17;
            *puVar18 = (uint)uVar17;
            uVar17 = (ulonglong)puVar18[1] * 5 + (uVar17 >> 0x20);
            puVar18[1] = (uint)uVar17;
            uVar17 = (ulonglong)puVar18[2] * 5 + (uVar17 >> 0x20);
            puVar18[2] = (uint)uVar17;
            uVar17 = (ulonglong)puVar18[3] * 5 + (uVar17 >> 0x20);
            puVar18[3] = (uint)uVar17;
            puVar18 = puVar18 + 4;
            uVar17 = uVar17 >> 0x20;
            uVar28 = uVar28 - 4;
          } while (uVar28 != 0);
          if (uVar29 != 0) goto LAB_000ba1d1;
        }
        param_5 = local_38;
        if (uVar17 == 0) goto LAB_000ba223;
        if (uVar22 == 0x28) goto LAB_000ba559;
        local_1b8[uVar22] = (uint)uVar17;
        uVar22 = uVar22 + 1;
      }
      local_118 = uVar22;
      if (uVar26 < uVar22) {
        uVar26 = uVar22;
      }
      if (0x28 < uVar26) goto LAB_000ba431;
      lVar12 = uVar26 << 2;
      do {
        if (lVar12 == 0) goto LAB_000ba27e;
        uVar11 = *(uint *)((longlong)local_1b8 + lVar12 + -4);
        uVar19 = *(uint *)((longlong)local_108 + lVar12 + -4);
        lVar12 = lVar12 + -4;
      } while (uVar19 == uVar11);
      if (uVar11 < uVar19 == uVar19 < uVar11) {
LAB_000ba27e:
        if (bVar30) {
          puVar23 = (uint *)0x0;
          goto LAB_000ba340;
        }
        if (param_5 <= (uint *)((longlong)puVar23 - 1U)) goto LAB_000ba584;
        if ((param_4[(longlong)((longlong)puVar23 - 1U)] & 1) != 0) goto LAB_000ba2a2;
LAB_000ba337:
        if (puVar23 <= param_5) {
LAB_000ba340:
          *param_2 = param_4;
          param_2[1] = puVar23;
          *(short *)(param_2 + 2) = sVar24;
          return param_2;
        }
        goto LAB_000ba45c;
      }
      if ((char)((uVar11 < uVar19) - (uVar19 < uVar11)) != '\x01') goto LAB_000ba337;
LAB_000ba2a2:
      if (puVar23 <= param_5) {
        lVar12 = -1;
        puVar18 = puVar23;
        do {
          if (puVar18 == (uint *)0x0) {
            uVar16 = 0x31;
            if (!bVar30) {
              *param_4 = 0x31;
              (*(code *)PTR_memset_000c3cd8)(0x31,(longlong)puVar23 + -1);
              uVar16 = 0x30;
            }
            if (((short)local_3c <= sVar24) && (puVar23 < param_5)) {
              param_4[(longlong)puVar23] = uVar16;
              puVar23 = (uint *)((longlong)puVar23 + 1);
            }
            sVar24 = sVar24 + 1;
            goto LAB_000ba337;
          }
          puVar27 = (uint *)((longlong)puVar18 + -1);
          lVar12 = lVar12 + 1;
          pcVar1 = param_4 + -1 + (longlong)puVar18;
          puVar18 = puVar27;
        } while (*pcVar1 == '9');
        param_4[(longlong)puVar27] = param_4[(longlong)puVar27] + '\x01';
        (*(code *)PTR_memset_000c3cd8)(puVar27,lVar12);
        goto LAB_000ba337;
      }
      goto LAB_000ba544;
    }
    if (uVar22 == 1) {
      bVar30 = false;
      uVar17 = 0;
LAB_000b9a35:
      puVar23 = local_260 + uVar17;
      uVar11 = (uint)bVar30;
      uVar19 = *puVar23 + local_108[uVar17];
      bVar30 = CARRY4(*puVar23,local_108[uVar17]) || CARRY4(uVar19,uVar11);
      *puVar23 = uVar19 + uVar11;
    }
    else {
      bVar30 = false;
      uVar17 = 0;
      do {
        uVar19 = local_108[uVar17 + 1];
        puVar23 = local_260 + uVar17;
        uVar11 = *puVar23;
        uVar4 = *puVar23 + local_108[uVar17];
        *puVar23 = uVar4 + bVar30;
        puVar23 = local_260 + uVar17 + 1;
        uVar11 = (uint)(CARRY4(uVar11,local_108[uVar17]) || CARRY4(uVar4,(uint)bVar30));
        uVar4 = *puVar23 + uVar19;
        bVar30 = CARRY4(*puVar23,uVar19) || CARRY4(uVar4,uVar11);
        *puVar23 = uVar4 + uVar11;
        uVar17 = uVar17 + 2;
      } while (((uint)uVar22 & 0x3e) != uVar17);
      if ((uVar22 & 1) != 0) goto LAB_000b9a35;
    }
    if (!bVar30) goto LAB_000b9a65;
    if (uVar22 != 0x28) {
      local_260[uVar22] = 1;
      uVar22 = uVar22 + 1;
      goto LAB_000b9a65;
    }
  }
LAB_000ba559:
  uVar31 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                     (uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c2f70);
LAB_000ba570:
  uVar31 = (*(code *)PTR_panic_bounds_check_000c3dd8)
                     (uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c3318);
LAB_000ba584:
  (*(code *)PTR_panic_bounds_check_000c3dd8)
            (uVar31,&PTR_s__rustc_48a229ceaefd4985c50990b14_000c32d0);
  pcVar5 = (code *)swi(3);
  puVar15 = (undefined8 *)(*pcVar5)();
  return puVar15;
}


