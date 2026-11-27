// 0020f500 format_shortest

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::format_shortest */

void __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::dragon::format_shortest
          (undefined4 param_1,undefined8 *param_2,ulonglong *param_3,undefined1 *param_4,
          uint *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  short sVar10;
  uint uVar11;
  undefined7 uVar12;
  uint *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  uint *puVar25;
  bool bVar26;
  undefined4 uVar27;
  uint auStack_5c4 [41];
  undefined8 local_520;
  uint local_518 [40];
  undefined8 local_478;
  uint local_470 [40];
  undefined8 local_3d0;
  uint local_3c8 [40];
  undefined8 local_328;
  uint local_320 [40];
  undefined8 local_280;
  uint local_278 [40];
  ulonglong local_1d8;
  uint local_1d0 [40];
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  uint local_110 [40];
  ulonglong local_70;
  ulonglong local_68;
  undefined8 *local_60;
  uint *local_58;
  undefined1 *local_50;
  uint *local_48;
  ulonglong local_40;
  char local_31;
  
  puVar5 = PTR_mul_pow2_0021adb8;
  uVar7 = *param_3;
  if (uVar7 == 0) goto LAB_00210703;
  uVar15 = param_3[1];
  if (uVar15 == 0) goto LAB_0021071c;
  uVar18 = param_3[2];
  if (uVar18 == 0) goto LAB_00210735;
  if (CARRY8(uVar18,uVar7)) goto LAB_0021074e;
  if (uVar7 < uVar15) goto LAB_00210767;
  if (&DAT_00000010 < param_5) {
    local_31 = *(char *)((longlong)param_3 + 0x1a);
    uVar19 = (uVar18 + uVar7) - 1;
    uVar17 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> uVar17 == 0; uVar17 = uVar17 - 1) {
      }
    }
    local_40 = ((longlong)(short)param_3[3] - (uVar17 ^ 0x3f)) * 0x4d104d42 + 0x1344135080 >> 0x20;
    local_70 = 2 - (ulonglong)(uVar7 >> 0x20 == 0);
    local_1d8 = 2 - (ulonglong)(uVar15 >> 0x20 == 0);
    local_130 = 2 - (ulonglong)(uVar18 >> 0x20 == 0);
    local_110[0] = (uint)uVar7;
    local_110[1] = (uint)(uVar7 >> 0x20);
    local_110[2] = 0;
    local_110[3] = 0;
    local_110[4] = 0;
    local_110[5] = 0;
    local_110[6] = 0;
    local_110[7] = 0;
    local_110[8] = 0;
    local_110[9] = 0;
    local_110[10] = 0;
    local_110[0xb] = 0;
    local_110[0xc] = 0;
    local_110[0xd] = 0;
    local_110[0xe] = 0;
    local_110[0xf] = 0;
    local_110[0x10] = 0;
    local_110[0x11] = 0;
    local_110[0x12] = 0;
    local_110[0x13] = 0;
    local_110[0x14] = 0;
    local_110[0x15] = 0;
    local_110[0x16] = 0;
    local_110[0x17] = 0;
    local_110[0x18] = 0;
    local_110[0x19] = 0;
    local_110[0x1a] = 0;
    local_110[0x1b] = 0;
    local_110[0x1c] = 0;
    local_110[0x1d] = 0;
    local_110[0x1e] = 0;
    local_110[0x1f] = 0;
    local_110[0x20] = 0;
    local_110[0x21] = 0;
    local_110[0x22] = 0;
    local_110[0x23] = 0;
    local_110[0x24] = 0;
    local_110[0x25] = 0;
    local_110[0x26] = 0;
    local_110[0x27] = 0;
    local_278[0] = (uint)uVar15;
    local_278[1] = (uint)(uVar15 >> 0x20);
    local_278[2] = 0;
    local_278[3] = 0;
    local_278[4] = 0;
    local_278[5] = 0;
    local_278[6] = 0;
    local_278[7] = 0;
    local_278[8] = 0;
    local_278[9] = 0;
    local_278[10] = 0;
    local_278[0xb] = 0;
    local_278[0xc] = 0;
    local_278[0xd] = 0;
    local_278[0xe] = 0;
    local_278[0xf] = 0;
    local_278[0x10] = 0;
    local_278[0x11] = 0;
    local_278[0x12] = 0;
    local_278[0x13] = 0;
    local_278[0x14] = 0;
    local_278[0x15] = 0;
    local_278[0x16] = 0;
    local_278[0x17] = 0;
    local_278[0x18] = 0;
    local_278[0x19] = 0;
    local_278[0x1a] = 0;
    local_278[0x1b] = 0;
    local_278[0x1c] = 0;
    local_278[0x1d] = 0;
    local_278[0x1e] = 0;
    local_278[0x1f] = 0;
    local_278[0x20] = 0;
    local_278[0x21] = 0;
    local_278[0x22] = 0;
    local_278[0x23] = 0;
    local_278[0x24] = 0;
    local_278[0x25] = 0;
    local_278[0x26] = 0;
    local_278[0x27] = 0;
    local_1d0[0] = (uint)uVar18;
    local_1d0[1] = (uint)(uVar18 >> 0x20);
    local_1d0[2] = 0;
    local_1d0[3] = 0;
    local_1d0[4] = 0;
    local_1d0[5] = 0;
    local_1d0[6] = 0;
    local_1d0[7] = 0;
    local_1d0[8] = 0;
    local_1d0[9] = 0;
    local_1d0[10] = 0;
    local_1d0[0xb] = 0;
    local_1d0[0xc] = 0;
    local_1d0[0xd] = 0;
    local_1d0[0xe] = 0;
    local_1d0[0xf] = 0;
    local_1d0[0x10] = 0;
    local_1d0[0x11] = 0;
    local_1d0[0x12] = 0;
    local_1d0[0x13] = 0;
    local_1d0[0x14] = 0;
    local_1d0[0x15] = 0;
    local_1d0[0x16] = 0;
    local_1d0[0x17] = 0;
    local_1d0[0x18] = 0;
    local_1d0[0x19] = 0;
    local_1d0[0x1a] = 0;
    local_1d0[0x1b] = 0;
    local_1d0[0x1c] = 0;
    local_1d0[0x1d] = 0;
    local_1d0[0x1e] = 0;
    local_1d0[0x1f] = 0;
    local_1d0[0x20] = 0;
    local_1d0[0x21] = 0;
    local_1d0[0x22] = 0;
    local_1d0[0x23] = 0;
    local_1d0[0x24] = 0;
    local_1d0[0x25] = 0;
    local_1d0[0x26] = 0;
    local_1d0[0x27] = 0;
    local_320[0x25] = 0;
    local_320[0x26] = 0;
    local_320[0x27] = 0;
    local_320[0x21] = 0;
    local_320[0x22] = 0;
    local_320[0x23] = 0;
    local_320[0x24] = 0;
    local_320[0x1d] = 0;
    local_320[0x1e] = 0;
    local_320[0x1f] = 0;
    local_320[0x20] = 0;
    local_320[0x19] = 0;
    local_320[0x1a] = 0;
    local_320[0x1b] = 0;
    local_320[0x1c] = 0;
    local_320[0x15] = 0;
    local_320[0x16] = 0;
    local_320[0x17] = 0;
    local_320[0x18] = 0;
    local_320[0x11] = 0;
    local_320[0x12] = 0;
    local_320[0x13] = 0;
    local_320[0x14] = 0;
    local_320[0xd] = 0;
    local_320[0xe] = 0;
    local_320[0xf] = 0;
    local_320[0x10] = 0;
    local_320[9] = 0;
    local_320[10] = 0;
    local_320[0xb] = 0;
    local_320[0xc] = 0;
    local_320[5] = 0;
    local_320[6] = 0;
    local_320[7] = 0;
    local_320[8] = 0;
    local_320[1] = 0;
    local_320[2] = 0;
    local_320[3] = 0;
    local_320[4] = 0;
    local_280 = 1;
    local_320[0] = 1;
    local_50 = param_4;
    if ((longlong)(short)param_3[3] < 0) {
      (*(code *)PTR_mul_pow2_0021adb8)();
      if ((short)local_40 < 0) goto LAB_0020f7bb;
LAB_0020f78a:
      uVar27 = (*(code *)PTR_mul_pow10_0021adf8)();
    }
    else {
      (*(code *)PTR_mul_pow2_0021adb8)();
      (*(code *)puVar5)();
      (*(code *)puVar5)();
      if (-1 < (short)local_40) goto LAB_0020f78a;
LAB_0020f7bb:
      puVar5 = PTR_mul_pow10_0021adf8;
      (*(code *)PTR_mul_pow10_0021adf8)();
      (*(code *)puVar5)();
      uVar27 = (*(code *)puVar5)();
    }
    puVar14 = local_110;
    uVar27 = (*(code *)PTR_memcpy_00219c60)(uVar27,0xa8);
    uVar7 = local_130;
    puVar5 = PTR_memcpy_00219c60;
    uVar15 = local_328;
    if (local_328 < local_130) {
      uVar15 = local_130;
    }
    if (uVar15 < 0x29) {
      if (uVar15 == 0) {
        uVar15 = 0;
      }
      else {
        if (uVar15 == 1) {
          bVar26 = false;
          uVar18 = 0;
LAB_0020f887:
          puVar21 = local_3c8 + uVar18;
          uVar2 = (uint)bVar26;
          uVar11 = *puVar21 + local_1d0[uVar18];
          bVar26 = CARRY4(*puVar21,local_1d0[uVar18]) || CARRY4(uVar11,uVar2);
          *puVar21 = uVar11 + uVar2;
        }
        else {
          bVar26 = false;
          uVar18 = 0;
          do {
            uVar11 = local_1d0[uVar18 + 1];
            puVar21 = local_3c8 + uVar18;
            uVar2 = *puVar21;
            uVar3 = *puVar21 + local_1d0[uVar18];
            *puVar21 = uVar3 + bVar26;
            puVar21 = local_3c8 + uVar18 + 1;
            uVar2 = (uint)(CARRY4(uVar2,local_1d0[uVar18]) || CARRY4(uVar3,(uint)bVar26));
            uVar3 = *puVar21 + uVar11;
            bVar26 = CARRY4(*puVar21,uVar11) || CARRY4(uVar3,uVar2);
            *puVar21 = uVar3 + uVar2;
            uVar18 = uVar18 + 2;
          } while (((uint)uVar15 & 0x3e) != uVar18);
          if ((uVar15 & 1) != 0) goto LAB_0020f887;
        }
        if (bVar26) {
          if (uVar15 == 0x28) goto LAB_00210799;
          local_3c8[uVar15] = 1;
          uVar15 = uVar15 + 1;
        }
      }
      uVar17 = local_70;
      uVar18 = local_1d8;
      local_328 = uVar15;
      local_68 = local_280;
      if (uVar15 <= local_280) {
        uVar15 = local_280;
      }
      if (uVar15 < 0x29) {
        lVar16 = uVar15 << 2;
        do {
          local_60 = param_2;
          if (lVar16 == 0) {
            uVar15 = 0;
            if ('\0' < local_31) goto LAB_0020f94e;
            goto LAB_0020f908;
          }
          uVar2 = *(uint *)((longlong)local_3c8 + lVar16 + -4);
          uVar11 = *(uint *)((longlong)local_320 + lVar16 + -4);
          lVar16 = lVar16 + -4;
        } while (uVar11 == uVar2);
        cVar8 = (uVar2 < uVar11) - (uVar11 < uVar2);
        uVar15 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar8);
        if (cVar8 < local_31) {
LAB_0020f94e:
          local_40 = (ulonglong)((int)local_40 + 1);
        }
        else {
LAB_0020f908:
          if (0x28 < local_70) goto LAB_00210693;
          if (local_70 == 0) {
            uVar17 = 0;
          }
          else {
            uVar19 = local_70 * 4 - 4;
            uVar20 = (uVar19 >> 2) + 1;
            uVar15 = (ulonglong)((uint)uVar20 & 3);
            if (uVar19 < 0xc) {
              uVar19 = 0;
LAB_0020f9d9:
              uVar20 = 0;
              do {
                uVar1 = uVar19 + (ulonglong)puVar14[uVar20] * 10;
                uVar19 = uVar1 >> 0x20;
                puVar14[uVar20] = (uint)uVar1;
                uVar20 = uVar20 + 1;
              } while (uVar15 != uVar20);
            }
            else {
              uVar20 = uVar20 & 0x7ffffffffffffffc;
              puVar14 = local_110;
              uVar19 = 0;
              do {
                uVar19 = uVar19 + (ulonglong)*puVar14 * 10;
                *puVar14 = (uint)uVar19;
                uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar14[1] * 10;
                puVar14[1] = (uint)uVar19;
                uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar14[2] * 10;
                puVar14[2] = (uint)uVar19;
                uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar14[3] * 10;
                puVar14[3] = (uint)uVar19;
                puVar14 = puVar14 + 4;
                uVar19 = uVar19 >> 0x20;
                uVar20 = uVar20 - 4;
              } while (uVar20 != 0);
              if (uVar15 != 0) goto LAB_0020f9d9;
            }
            if (uVar19 != 0) {
              if (uVar17 == 0x28) goto LAB_00210799;
              local_110[uVar17] = (uint)uVar19;
              uVar17 = uVar17 + 1;
            }
          }
          local_70 = uVar17;
          if (0x28 < local_1d8) goto LAB_00210693;
          if (local_1d8 == 0) {
            uVar18 = 0;
          }
          else {
            uVar17 = local_1d8 * 4 - 4;
            uVar19 = (uVar17 >> 2) + 1;
            uVar15 = (ulonglong)((uint)uVar19 & 3);
            if (uVar17 < 0xc) {
              puVar14 = local_278;
              uVar17 = 0;
LAB_0020fadd:
              uVar19 = 0;
              do {
                uVar20 = uVar17 + (ulonglong)puVar14[uVar19] * 10;
                uVar17 = uVar20 >> 0x20;
                puVar14[uVar19] = (uint)uVar20;
                uVar19 = uVar19 + 1;
              } while (uVar15 != uVar19);
            }
            else {
              uVar19 = uVar19 & 0x7ffffffffffffffc;
              puVar14 = local_278;
              uVar17 = 0;
              do {
                uVar17 = uVar17 + (ulonglong)*puVar14 * 10;
                *puVar14 = (uint)uVar17;
                uVar17 = (uVar17 >> 0x20) + (ulonglong)puVar14[1] * 10;
                puVar14[1] = (uint)uVar17;
                uVar17 = (uVar17 >> 0x20) + (ulonglong)puVar14[2] * 10;
                puVar14[2] = (uint)uVar17;
                uVar17 = (uVar17 >> 0x20) + (ulonglong)puVar14[3] * 10;
                puVar14[3] = (uint)uVar17;
                puVar14 = puVar14 + 4;
                uVar17 = uVar17 >> 0x20;
                uVar19 = uVar19 - 4;
              } while (uVar19 != 0);
              if (uVar15 != 0) goto LAB_0020fadd;
            }
            if (uVar17 != 0) {
              if (uVar18 == 0x28) goto LAB_00210799;
              local_278[uVar18] = (uint)uVar17;
              uVar18 = uVar18 + 1;
            }
          }
          local_1d8 = uVar18;
          if (uVar7 == 0) {
            uVar7 = 0;
          }
          else {
            uVar18 = uVar7 * 4 - 4;
            uVar17 = (uVar18 >> 2) + 1;
            uVar15 = (ulonglong)((uint)uVar17 & 3);
            if (uVar18 < 0xc) {
              puVar14 = local_1d0;
              uVar18 = 0;
LAB_0020fbc9:
              uVar17 = 0;
              do {
                uVar19 = uVar18 + (ulonglong)puVar14[uVar17] * 10;
                uVar18 = uVar19 >> 0x20;
                puVar14[uVar17] = (uint)uVar19;
                uVar17 = uVar17 + 1;
              } while (uVar15 != uVar17);
            }
            else {
              uVar17 = uVar17 & 0x7ffffffffffffffc;
              puVar14 = local_1d0;
              uVar18 = 0;
              do {
                uVar18 = uVar18 + (ulonglong)*puVar14 * 10;
                *puVar14 = (uint)uVar18;
                uVar18 = (uVar18 >> 0x20) + (ulonglong)puVar14[1] * 10;
                puVar14[1] = (uint)uVar18;
                uVar18 = (uVar18 >> 0x20) + (ulonglong)puVar14[2] * 10;
                puVar14[2] = (uint)uVar18;
                uVar18 = (uVar18 >> 0x20) + (ulonglong)puVar14[3] * 10;
                puVar14[3] = (uint)uVar18;
                puVar14 = puVar14 + 4;
                uVar18 = uVar18 >> 0x20;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
              if (uVar15 != 0) goto LAB_0020fbc9;
            }
            if (uVar18 != 0) {
              if (uVar7 == 0x28) goto LAB_00210799;
              local_1d0[uVar7] = (uint)uVar18;
              uVar7 = uVar7 + 1;
            }
          }
          local_130 = uVar7;
        }
        puVar14 = local_320;
        (*(code *)PTR_memcpy_00219c60)(uVar15,0xa8);
        puVar6 = PTR_mul_pow2_0021adb8;
        uVar27 = (*(code *)PTR_mul_pow2_0021adb8)();
        (*(code *)puVar5)(uVar27,0xa8);
        (*(code *)puVar6)();
        (*(code *)puVar5)();
        uVar27 = (*(code *)puVar6)();
        local_118 = local_520;
        uVar7 = local_70;
        if (local_70 < local_520) {
          uVar7 = local_520;
        }
        if (uVar7 < 0x29) {
          local_128 = local_478;
          local_120 = local_3d0;
          puVar23 = local_50 + 2;
          puVar21 = (uint *)0x0;
          local_48 = param_5;
          puVar22 = local_50;
          uVar18 = local_70;
          do {
            uVar17 = local_1d8;
            lVar16 = uVar7 * 4;
            do {
              if (lVar16 == 0) goto LAB_0020fd50;
              uVar2 = *(uint *)((longlong)local_110 + lVar16 + -4);
              uVar15 = (ulonglong)uVar2;
              puVar25 = (uint *)((longlong)auStack_5c4 + lVar16);
              lVar16 = lVar16 + -4;
            } while (uVar2 == *puVar25);
            if (uVar2 < *puVar25) {
              bVar9 = 0;
              uVar12 = 0;
              uVar7 = uVar18;
            }
            else {
LAB_0020fd50:
              if (uVar7 != 0) {
                if (uVar7 == 1) {
                  bVar26 = true;
                  uVar18 = 0;
LAB_0020fdb9:
                  uVar11 = ~auStack_5c4[uVar18 + 1];
                  uVar15 = (ulonglong)uVar11;
                  puVar25 = local_110 + uVar18;
                  uVar2 = (uint)bVar26;
                  bVar26 = CARRY4(*puVar25,uVar11) || CARRY4(*puVar25 + uVar11,uVar2);
                  *puVar25 = *puVar25 + uVar11 + uVar2;
                }
                else {
                  uVar15 = (ulonglong)((uint)uVar7 & 0x3e);
                  bVar26 = true;
                  uVar18 = 0;
                  do {
                    uVar11 = auStack_5c4[uVar18 + 1];
                    puVar25 = local_110 + uVar18;
                    uVar2 = *puVar25;
                    uVar3 = *puVar25 + ~uVar11;
                    *puVar25 = uVar3 + bVar26;
                    puVar25 = local_110 + uVar18 + 1;
                    uVar2 = (uint)(CARRY4(uVar2,~uVar11) || CARRY4(uVar3,(uint)bVar26));
                    uVar11 = *puVar25 + ~auStack_5c4[uVar18 + 2];
                    bVar26 = CARRY4(*puVar25,~auStack_5c4[uVar18 + 2]) || CARRY4(uVar11,uVar2);
                    *puVar25 = uVar11 + uVar2;
                    uVar18 = uVar18 + 2;
                  } while (uVar15 != uVar18);
                  if ((uVar7 & 1) != 0) goto LAB_0020fdb9;
                }
                if (!bVar26) goto LAB_002106d5;
              }
              local_70 = uVar7;
              uVar12 = (undefined7)(uVar15 >> 8);
              bVar9 = 8;
            }
            uVar15 = uVar7;
            if (uVar7 < local_128) {
              uVar15 = local_128;
            }
            if (0x28 < uVar15) goto LAB_002106a7;
            lVar16 = uVar15 * 4;
            do {
              if (lVar16 == 0) goto LAB_0020fe30;
              uVar2 = *(uint *)((longlong)local_518 + lVar16 + -4);
              uVar11 = *(uint *)((longlong)local_110 + lVar16 + -4);
              lVar16 = lVar16 + -4;
            } while (uVar11 == uVar2);
            if (uVar11 < uVar2) {
              uVar15 = uVar7;
            }
            else {
LAB_0020fe30:
              if (uVar15 != 0) {
                if (uVar15 == 1) {
                  bVar26 = true;
                  uVar7 = 0;
LAB_0020fe9a:
                  puVar25 = local_110 + uVar7;
                  uVar2 = (uint)bVar26;
                  uVar11 = *puVar25 + ~local_518[uVar7];
                  bVar26 = CARRY4(*puVar25,~local_518[uVar7]) || CARRY4(uVar11,uVar2);
                  *puVar25 = uVar11 + uVar2;
                }
                else {
                  bVar26 = true;
                  uVar7 = 0;
                  do {
                    puVar25 = local_110 + uVar7;
                    uVar2 = *puVar25;
                    uVar11 = *puVar25 + ~local_518[uVar7];
                    *puVar25 = uVar11 + bVar26;
                    puVar25 = local_110 + uVar7 + 1;
                    uVar2 = (uint)(CARRY4(uVar2,~local_518[uVar7]) || CARRY4(uVar11,(uint)bVar26));
                    uVar11 = *puVar25 + ~local_518[uVar7 + 1];
                    bVar26 = CARRY4(*puVar25,~local_518[uVar7 + 1]) || CARRY4(uVar11,uVar2);
                    *puVar25 = uVar11 + uVar2;
                    uVar7 = uVar7 + 2;
                  } while (((uint)uVar15 & 0x3e) != uVar7);
                  if ((uVar15 & 1) != 0) goto LAB_0020fe9a;
                }
                if (!bVar26) goto LAB_002106d5;
              }
              local_70 = uVar15;
              bVar9 = bVar9 | 4;
            }
            uVar7 = uVar15;
            if (uVar15 < local_120) {
              uVar7 = local_120;
            }
            if (0x28 < uVar7) break;
            lVar16 = uVar7 * 4;
            do {
              if (lVar16 == 0) goto LAB_0020ff20;
              uVar2 = *(uint *)((longlong)local_470 + lVar16 + -4);
              uVar11 = *(uint *)((longlong)local_110 + lVar16 + -4);
              lVar16 = lVar16 + -4;
            } while (uVar11 == uVar2);
            if (uVar11 < uVar2) {
              uVar7 = uVar15;
            }
            else {
LAB_0020ff20:
              if (uVar7 != 0) {
                if (uVar7 == 1) {
                  bVar26 = true;
                  uVar15 = 0;
LAB_0020ff8c:
                  puVar25 = local_110 + uVar15;
                  uVar2 = (uint)bVar26;
                  uVar11 = *puVar25 + ~local_470[uVar15];
                  bVar26 = CARRY4(*puVar25,~local_470[uVar15]) || CARRY4(uVar11,uVar2);
                  *puVar25 = uVar11 + uVar2;
                }
                else {
                  bVar26 = true;
                  uVar15 = 0;
                  do {
                    puVar25 = local_110 + uVar15;
                    uVar2 = *puVar25;
                    uVar11 = *puVar25 + ~local_470[uVar15];
                    *puVar25 = uVar11 + bVar26;
                    puVar25 = local_110 + uVar15 + 1;
                    uVar2 = (uint)(CARRY4(uVar2,~local_470[uVar15]) || CARRY4(uVar11,(uint)bVar26));
                    uVar11 = *puVar25 + ~local_470[uVar15 + 1];
                    bVar26 = CARRY4(*puVar25,~local_470[uVar15 + 1]) || CARRY4(uVar11,uVar2);
                    *puVar25 = uVar11 + uVar2;
                    uVar15 = uVar15 + 2;
                  } while (((uint)uVar7 & 0x3e) != uVar15);
                  if ((uVar7 & 1) != 0) goto LAB_0020ff8c;
                }
                if (!bVar26) goto LAB_002106d5;
              }
              local_70 = uVar7;
              bVar9 = bVar9 + 2;
            }
            uVar18 = uVar7;
            if (uVar7 < local_68) {
              uVar18 = local_68;
            }
            if (0x28 < uVar18) goto LAB_002106be;
            lVar16 = uVar18 * 4;
            do {
              if (lVar16 == 0) goto LAB_00210000;
              uVar2 = *(uint *)((longlong)local_320 + lVar16 + -4);
              uVar11 = *(uint *)((longlong)local_110 + lVar16 + -4);
              lVar16 = lVar16 + -4;
            } while (uVar11 == uVar2);
            if (uVar11 < uVar2) {
              uVar18 = uVar7;
            }
            else {
LAB_00210000:
              if (uVar18 != 0) {
                if (uVar18 == 1) {
                  bVar26 = true;
                  uVar7 = 0;
LAB_00210069:
                  puVar25 = local_110 + uVar7;
                  uVar2 = (uint)bVar26;
                  uVar11 = *puVar25 + ~local_320[uVar7];
                  bVar26 = CARRY4(*puVar25,~local_320[uVar7]) || CARRY4(uVar11,uVar2);
                  *puVar25 = uVar11 + uVar2;
                }
                else {
                  bVar26 = true;
                  uVar7 = 0;
                  do {
                    puVar25 = local_110 + uVar7;
                    uVar2 = *puVar25;
                    uVar11 = *puVar25 + ~local_320[uVar7];
                    *puVar25 = uVar11 + bVar26;
                    puVar25 = local_110 + uVar7 + 1;
                    uVar2 = (uint)(CARRY4(uVar2,~local_320[uVar7]) || CARRY4(uVar11,(uint)bVar26));
                    uVar11 = *puVar25 + ~local_320[uVar7 + 1];
                    bVar26 = CARRY4(*puVar25,~local_320[uVar7 + 1]) || CARRY4(uVar11,uVar2);
                    *puVar25 = uVar11 + uVar2;
                    uVar7 = uVar7 + 2;
                  } while (((uint)uVar18 & 0x3e) != uVar7);
                  if ((uVar18 & 1) != 0) goto LAB_00210069;
                }
                if (!bVar26) goto LAB_002106d5;
              }
              local_70 = uVar18;
              bVar9 = bVar9 + 1;
            }
            if (puVar21 == param_5) goto LAB_002107b0;
            puVar22[(longlong)puVar21] = bVar9 + 0x30;
            uVar7 = uVar18;
            if (uVar18 < local_1d8) {
              uVar7 = local_1d8;
            }
            if (0x28 < uVar7) break;
            local_58 = (uint *)((longlong)puVar21 + 1);
            lVar16 = uVar7 << 2;
            do {
              if (lVar16 == 0) {
                puVar14 = (uint *)0x0;
                goto LAB_00210105;
              }
              uVar2 = *(uint *)((longlong)local_278 + lVar16 + -4);
              uVar11 = *(uint *)((longlong)local_110 + lVar16 + -4);
              lVar16 = lVar16 + -4;
            } while (uVar11 == uVar2);
            puVar14 = (uint *)CONCAT71((int7)((ulonglong)puVar14 >> 8),
                                       (uVar2 < uVar11) - (uVar11 < uVar2));
LAB_00210105:
            uVar27 = (*(code *)PTR_memcpy_00219c60)(CONCAT71(uVar12,bVar9 + 0x30),0xa8);
            puVar22 = local_50;
            uVar15 = local_130;
            uVar7 = local_328;
            if (local_328 < local_130) {
              uVar7 = local_130;
            }
            if (0x28 < uVar7) break;
            if (uVar7 == 0) {
              uVar7 = 0;
            }
            else {
              if (uVar7 == 1) {
                bVar26 = false;
                uVar19 = 0;
LAB_002101b7:
                puVar25 = local_3c8 + uVar19;
                uVar2 = (uint)bVar26;
                uVar11 = *puVar25 + local_1d0[uVar19];
                bVar26 = CARRY4(*puVar25,local_1d0[uVar19]) || CARRY4(uVar11,uVar2);
                *puVar25 = uVar11 + uVar2;
              }
              else {
                bVar26 = false;
                uVar19 = 0;
                do {
                  uVar11 = local_1d0[uVar19 + 1];
                  puVar25 = local_3c8 + uVar19;
                  uVar2 = *puVar25;
                  uVar3 = *puVar25 + local_1d0[uVar19];
                  *puVar25 = uVar3 + bVar26;
                  puVar25 = local_3c8 + uVar19 + 1;
                  uVar2 = (uint)(CARRY4(uVar2,local_1d0[uVar19]) || CARRY4(uVar3,(uint)bVar26));
                  uVar3 = *puVar25 + uVar11;
                  bVar26 = CARRY4(*puVar25,uVar11) || CARRY4(uVar3,uVar2);
                  *puVar25 = uVar3 + uVar2;
                  uVar19 = uVar19 + 2;
                } while (((uint)uVar7 & 0x3e) != uVar19);
                if ((uVar7 & 1) != 0) goto LAB_002101b7;
              }
              if (bVar26) {
                if (uVar7 == 0x28) goto LAB_00210799;
                local_3c8[uVar7] = 1;
                uVar7 = uVar7 + 1;
              }
            }
            local_328 = uVar7;
            if (uVar7 <= local_68) {
              uVar7 = local_68;
            }
            if (0x28 < uVar7) break;
            lVar16 = uVar7 << 2;
            do {
              if (lVar16 == 0) {
                cVar8 = '\0';
                goto joined_r0x00210248;
              }
              uVar2 = *(uint *)((longlong)local_3c8 + lVar16 + -4);
              uVar11 = *(uint *)((longlong)local_320 + lVar16 + -4);
              lVar16 = lVar16 + -4;
            } while (uVar11 == uVar2);
            cVar8 = (uVar2 < uVar11) - (uVar11 < uVar2);
joined_r0x00210248:
            if ((char)puVar14 < local_31) {
              if (local_31 <= cVar8) goto LAB_002105df;
              uVar27 = (*(code *)PTR_mul_pow2_0021adb8)();
              uVar7 = local_70;
              if (local_70 < local_68) {
                uVar7 = local_68;
              }
              puVar14 = puVar21;
              if (uVar7 < 0x29) {
                lVar16 = uVar7 << 2;
                goto LAB_002105c0;
              }
              break;
            }
            if (cVar8 < local_31) goto LAB_002105f0;
            if (uVar18 == 0) {
              uVar18 = 0;
            }
            else {
              uVar20 = uVar18 * 4 - 4;
              uVar19 = (uVar20 >> 2) + 1;
              uVar7 = (ulonglong)((uint)uVar19 & 3);
              if (uVar20 < 0xc) {
                puVar21 = local_110;
                uVar20 = 0;
LAB_00210319:
                uVar19 = 0;
                do {
                  uVar1 = uVar20 + (ulonglong)puVar21[uVar19] * 10;
                  uVar20 = uVar1 >> 0x20;
                  puVar21[uVar19] = (uint)uVar1;
                  uVar19 = uVar19 + 1;
                } while (uVar7 != uVar19);
              }
              else {
                uVar19 = uVar19 & 0x7ffffffffffffffc;
                puVar21 = local_110;
                uVar20 = 0;
                do {
                  uVar20 = uVar20 + (ulonglong)*puVar21 * 10;
                  *puVar21 = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[1] * 10;
                  puVar21[1] = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[2] * 10;
                  puVar21[2] = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[3] * 10;
                  puVar21[3] = (uint)uVar20;
                  puVar21 = puVar21 + 4;
                  uVar20 = uVar20 >> 0x20;
                  uVar19 = uVar19 - 4;
                } while (uVar19 != 0);
                if (uVar7 != 0) goto LAB_00210319;
              }
              if (uVar20 != 0) {
                if (uVar18 == 0x28) goto LAB_00210799;
                local_110[uVar18] = (uint)uVar20;
                uVar18 = uVar18 + 1;
              }
            }
            local_70 = uVar18;
            if (uVar17 == 0) {
              uVar17 = 0;
            }
            else {
              uVar20 = uVar17 * 4 - 4;
              uVar19 = (uVar20 >> 2) + 1;
              uVar7 = (ulonglong)((uint)uVar19 & 3);
              if (uVar20 < 0xc) {
                puVar21 = local_278;
                uVar20 = 0;
LAB_00210429:
                uVar19 = 0;
                do {
                  uVar1 = uVar20 + (ulonglong)puVar21[uVar19] * 10;
                  uVar20 = uVar1 >> 0x20;
                  puVar21[uVar19] = (uint)uVar1;
                  uVar19 = uVar19 + 1;
                } while (uVar7 != uVar19);
              }
              else {
                uVar19 = uVar19 & 0x7ffffffffffffffc;
                puVar21 = local_278;
                uVar20 = 0;
                do {
                  uVar20 = uVar20 + (ulonglong)*puVar21 * 10;
                  *puVar21 = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[1] * 10;
                  puVar21[1] = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[2] * 10;
                  puVar21[2] = (uint)uVar20;
                  uVar20 = (uVar20 >> 0x20) + (ulonglong)puVar21[3] * 10;
                  puVar21[3] = (uint)uVar20;
                  puVar21 = puVar21 + 4;
                  uVar20 = uVar20 >> 0x20;
                  uVar19 = uVar19 - 4;
                } while (uVar19 != 0);
                if (uVar7 != 0) goto LAB_00210429;
              }
              if (uVar20 != 0) {
                if (uVar17 == 0x28) goto LAB_00210799;
                local_278[uVar17] = (uint)uVar20;
                uVar17 = uVar17 + 1;
              }
            }
            param_5 = local_48;
            puVar21 = local_58;
            local_1d8 = uVar17;
            if (uVar15 == 0) {
              uVar15 = 0;
            }
            else {
              uVar19 = uVar15 * 4 - 4;
              uVar17 = (uVar19 >> 2) + 1;
              uVar7 = (ulonglong)((uint)uVar17 & 3);
              if (uVar19 < 0xc) {
                puVar25 = local_1d0;
                uVar19 = 0;
LAB_00210529:
                uVar17 = 0;
                do {
                  uVar20 = uVar19 + (ulonglong)puVar25[uVar17] * 10;
                  uVar19 = uVar20 >> 0x20;
                  puVar25[uVar17] = (uint)uVar20;
                  uVar17 = uVar17 + 1;
                } while (uVar7 != uVar17);
              }
              else {
                uVar17 = uVar17 & 0x7ffffffffffffffc;
                puVar25 = local_1d0;
                uVar19 = 0;
                do {
                  uVar19 = uVar19 + (ulonglong)*puVar25 * 10;
                  *puVar25 = (uint)uVar19;
                  uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar25[1] * 10;
                  puVar25[1] = (uint)uVar19;
                  uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar25[2] * 10;
                  puVar25[2] = (uint)uVar19;
                  uVar19 = (uVar19 >> 0x20) + (ulonglong)puVar25[3] * 10;
                  puVar25[3] = (uint)uVar19;
                  puVar25 = puVar25 + 4;
                  uVar19 = uVar19 >> 0x20;
                  uVar17 = uVar17 - 4;
                } while (uVar17 != 0);
                if (uVar7 != 0) goto LAB_00210529;
              }
              if (uVar19 != 0) {
                if (uVar15 == 0x28) goto LAB_00210799;
                local_1d0[uVar15] = (uint)uVar19;
                uVar15 = uVar15 + 1;
              }
            }
            uVar7 = uVar18;
            if (uVar18 < local_118) {
              uVar7 = local_118;
            }
            local_130 = uVar15;
            puVar23 = puVar23 + 1;
            uVar15 = local_118;
          } while (uVar7 < 0x29);
        }
      }
    }
LAB_00210693:
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002190d8,0x28);
LAB_002106a7:
    (*(code *)PTR_slice_index_fail_00219d80)(&PTR_s__rustc_48a229ceaefd4985c50990b14_002190d8,0x28);
LAB_002106be:
    uVar27 = (*(code *)PTR_slice_index_fail_00219d80)
                       (&PTR_s__rustc_48a229ceaefd4985c50990b14_002190d8,0x28);
LAB_002106d5:
    (*(code *)PTR_panic_00219ca8)(uVar27,&PTR_s__rustc_48a229ceaefd4985c50990b14_002190d8);
    goto LAB_002106ee;
  }
  goto LAB_00210780;
  while( true ) {
    uVar2 = *(uint *)((longlong)local_320 + lVar16 + -4);
    uVar11 = *(uint *)((longlong)local_110 + lVar16 + -4);
    lVar16 = lVar16 + -4;
    if (uVar11 != uVar2) break;
LAB_002105c0:
    puVar22 = local_50;
    if (lVar16 == 0) goto LAB_002105f0;
  }
  if (uVar11 < uVar2) {
LAB_002105df:
    sVar10 = (short)local_40;
    puVar14 = local_48;
    puVar25 = local_58;
  }
  else {
LAB_002105f0:
    puVar14 = local_48;
    puVar13 = (uint *)0xffffffffffffffff;
    puVar25 = (uint *)((longlong)puVar21 + 1);
    do {
      puVar24 = puVar23;
      if (puVar21 == puVar13) {
        *puVar22 = 0x31;
        uVar27 = (*(code *)PTR_memset_00219d00)(uVar27,puVar21);
        if (puVar14 <= puVar25) goto LAB_002107c4;
        (puVar22 + 1)[(longlong)puVar21] = 0x30;
        puVar25 = (uint *)((longlong)puVar21 + 2);
        sVar10 = (short)local_40 + 1;
        goto LAB_00210671;
      }
      puVar13 = (uint *)((longlong)puVar13 + 1);
      puVar23 = puVar24 + -1;
    } while (puVar24[-2] == '9');
    puVar24[-2] = puVar24[-2] + '\x01';
    (*(code *)PTR_memset_00219d00)();
    sVar10 = (short)local_40;
    puVar22 = local_50;
  }
LAB_00210671:
  if (puVar25 <= puVar14) {
    *local_60 = puVar22;
    local_60[1] = puVar25;
    *(short *)(local_60 + 2) = sVar10;
    return;
  }
LAB_002106ee:
  param_1 = (*(code *)PTR_slice_index_fail_00219d80)
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_002195a0,puVar14);
LAB_00210703:
  param_1 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219510);
LAB_0021071c:
  param_1 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219528);
LAB_00210735:
  param_1 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219540);
LAB_0021074e:
  param_1 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_002195d0);
LAB_00210767:
  param_1 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_002195b8);
LAB_00210780:
  uVar27 = (*(code *)PTR_panic_00219ca8)(param_1,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219558);
LAB_00210799:
  uVar27 = (*(code *)PTR_panic_bounds_check_0021a020)
                     (uVar27,&PTR_s__rustc_48a229ceaefd4985c50990b14_002190d8);
LAB_002107b0:
  uVar27 = (*(code *)PTR_panic_bounds_check_0021a020)
                     (uVar27,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219570);
LAB_002107c4:
  (*(code *)PTR_panic_bounds_check_0021a020)
            (uVar27,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219588);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


