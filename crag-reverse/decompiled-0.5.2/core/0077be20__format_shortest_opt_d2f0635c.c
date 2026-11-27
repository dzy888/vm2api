// 0077be20 format_shortest_opt

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_shortest_opt */

void __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_shortest_opt
          (longlong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  short sVar8;
  char cVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  byte bVar26;
  bool bVar27;
  ulonglong local_88;
  short local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  longlong *local_50;
  int local_44;
  longlong local_40;
  ulonglong local_38;
  
  uVar18 = *param_2;
  if (uVar18 == 0) {
LAB_0077c39b:
    (*(code *)PTR_panic_00799338)();
LAB_0077c3b4:
    (*(code *)PTR_panic_00799338)();
LAB_0077c3cd:
    (*(code *)PTR_panic_00799338)();
LAB_0077c3e6:
    (*(code *)PTR_panic_00799338)();
LAB_0077c3ff:
    (*(code *)PTR_panic_00799338)();
LAB_0077c418:
    (*(code *)PTR_panic_00799338)();
  }
  else {
    uVar19 = param_2[1];
    if (uVar19 == 0) goto LAB_0077c3b4;
    uVar17 = param_2[2];
    if (uVar17 == 0) goto LAB_0077c3cd;
    uVar13 = uVar17 + uVar18;
    if (CARRY8(uVar17,uVar18)) goto LAB_0077c3e6;
    uVar17 = uVar18 - uVar19;
    if (uVar18 < uVar19) goto LAB_0077c3ff;
    if (param_4 < 0x11) goto LAB_0077c418;
    if (uVar13 >> 0x3d == 0) {
      uVar19 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> uVar19 == 0; uVar19 = uVar19 - 1) {
        }
      }
      bVar11 = (byte)(uVar19 ^ 0x3f);
      uVar14 = uVar17 << (bVar11 & 0x3f);
      local_60 = uVar14 >> (bVar11 & 0x3f);
      local_80 = (short)param_2[3];
      local_88 = uVar17;
      local_38 = param_4;
      if (local_60 == uVar17) {
        uVar25 = uVar18 << (bVar11 & 0x3f);
        local_60 = uVar25 >> (bVar11 & 0x3f);
        local_88 = uVar18;
        if (local_60 == uVar18) {
          sVar8 = local_80 - (short)(uVar19 ^ 0x3f);
          uVar12 = ((short)(-0x60 - sVar8) * 0x50 + 0x153b0) / 0x84e;
          if (uVar12 < 0x51) {
            lVar20 = (longlong)(int)uVar12 * 0x10;
            uVar18 = *(ulonglong *)(PTR_CACHED_POW10_0079b3d0 + lVar20);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar18;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar13 << (bVar11 & 0x3f);
            local_68 = SUB168(auVar2 * auVar5,8);
            local_58 = -(SUB168(auVar2 * auVar5,0) >> 0x3f);
            uVar13 = local_68 + local_58 + 1;
            bVar11 = -((char)*(undefined2 *)(PTR_CACHED_POW10_0079b3d0 + lVar20 + 8) + (char)sVar8)
                     & 0x3f;
            uVar19 = uVar13 >> bVar11;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar18;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar14;
            local_70 = SUB168(auVar3 * auVar6,8);
            lVar22 = SUB168(auVar3 * auVar6,0) >> 0x3f;
            uVar17 = 1L << bVar11;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar18;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar25;
            uVar18 = uVar17 - 1;
            uVar12 = (uint)uVar19;
            if (uVar12 < 10000) {
              if (uVar12 < 100) {
                bVar26 = 9 < uVar12;
                uVar24 = (uint)bVar26 * 9 + 1;
              }
              else {
                uVar24 = 1000;
                if (uVar12 < 1000) {
                  uVar24 = 100;
                }
                bVar26 = uVar12 < 1000 ^ 3;
              }
            }
            else if (uVar12 < 1000000) {
              uVar24 = 100000;
              if (uVar12 < 100000) {
                uVar24 = 10000;
              }
              bVar26 = uVar12 < 100000 ^ 5;
            }
            else if (uVar12 < 100000000) {
              uVar24 = 10000000;
              if (uVar12 < 10000000) {
                uVar24 = 1000000;
              }
              bVar26 = uVar12 < 10000000 ^ 7;
            }
            else {
              uVar24 = 1000000000;
              if (uVar12 < 1000000000) {
                uVar24 = 100000000;
              }
              bVar26 = uVar12 < 1000000000 ^ 9;
            }
            lVar21 = SUB168(auVar4 * auVar7,8) - (SUB168(auVar4 * auVar7,0) >> 0x3f);
            uVar25 = local_58 + local_68 + 1;
            uVar14 = uVar25 & uVar18;
            local_44 = ((uint)bVar26 - (uint)*(ushort *)(PTR_CACHED_POW10_0079b3d0 + lVar20 + 10)) +
                       1;
            local_78 = (lVar22 - local_70) + uVar25 + 1;
            uVar25 = 1;
            do {
              uVar10 = uVar19 & 0xffffffff;
              uVar19 = uVar10 % (ulonglong)uVar24;
              local_50 = param_1;
              local_40 = param_3;
              if (uVar25 - param_4 == 1) goto LAB_0077c44a;
              cVar9 = (char)(uVar10 / uVar24) + '0';
              lVar20 = uVar19 << bVar11;
              *(char *)(param_3 + -1 + uVar25) = cVar9;
              uVar10 = lVar20 + uVar14;
              uVar23 = local_78 - uVar10;
              if (uVar10 < local_78) goto LAB_0077c0fb;
              if (uVar25 - bVar26 == 1) {
                uVar19 = local_78 & uVar18;
                lVar20 = 1;
                goto LAB_0077c1e0;
              }
              lVar20 = 0xcccccccd;
              uVar25 = uVar25 + 1;
              bVar27 = 9 < uVar24;
              uVar24 = uVar24 / 10;
            } while (bVar27);
            cVar9 = (*(code *)PTR_panic_const_div_by_zero_00799f50)();
LAB_0077c0fb:
            uVar19 = (ulonglong)uVar24 << (bVar11 & 0x3f);
            lVar16 = (local_68 + local_58 + 1) - lVar21;
            uVar18 = lVar16 + 1;
            uVar17 = lVar16 - 1;
            bVar27 = uVar23 < uVar19;
            if ((uVar10 < uVar17) && (uVar19 <= uVar23)) {
              uVar13 = (((local_68 + local_58) - lVar21) - lVar20) - uVar14;
              uVar23 = (((lVar21 + uVar14 + uVar19) - local_58) - local_68) + lVar20;
              uVar14 = (((lVar22 + local_68 + local_58) - local_70) - (uVar14 + uVar19 + lVar20)) +
                       2;
              do {
                uVar15 = uVar10 + uVar19;
                if ((uVar17 <= uVar15) && (uVar13 < uVar23)) {
                  bVar27 = false;
                  uVar17 = uVar18 - uVar10;
                  if (!(uVar18 < uVar10 || uVar17 == 0)) goto LAB_0077c2ca;
                  goto LAB_0077c2f3;
                }
                cVar9 = cVar9 + -1;
                *(char *)(local_40 + -1 + uVar25) = cVar9;
                bVar27 = uVar14 < uVar19;
                uVar14 = uVar14 - uVar19;
                uVar10 = uVar15;
                if (uVar17 <= uVar15) break;
                uVar13 = uVar13 - uVar19;
                uVar23 = uVar23 + uVar19;
              } while (!bVar27);
            }
            uVar17 = uVar18 - uVar10;
            if (uVar10 <= uVar18 && uVar17 != 0) {
LAB_0077c2ca:
              if ((!bVar27) &&
                 ((uVar19 + uVar10 < uVar18 || ((uVar19 + uVar10) - uVar18 <= uVar17))))
              goto LAB_0077c36c;
            }
LAB_0077c2f3:
            if ((1 < uVar10) && (uVar10 <= local_78 - 4)) {
              *local_50 = local_40;
              goto LAB_0077c35b;
            }
            goto LAB_0077c36c;
          }
          goto LAB_0077c46e;
        }
      }
      (*(code *)PTR_<u64,u64>_0079b0d8)
                (0,&local_88,uVar17,&PTR_s__rustc_48a229ceaefd4985c50990b14_00798318);
      goto LAB_0077c39b;
    }
  }
  (*(code *)PTR_panic_00799338)();
LAB_0077c44a:
  (*(code *)PTR_panic_bounds_check_00799520)();
LAB_0077c45e:
  (*(code *)PTR_panic_bounds_check_00799520)();
LAB_0077c46e:
  (*(code *)PTR_panic_bounds_check_00799520)();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
  while( true ) {
    uVar23 = uVar14 * 10;
    uVar14 = uVar23 & uVar18;
    lVar20 = lVar22 * 10;
    uVar19 = uVar10 * 10;
    cVar9 = (char)(uVar23 >> bVar11);
    *(char *)(param_3 + uVar25) = cVar9 + '0';
    uVar25 = uVar25 + 1;
    if (uVar14 < uVar19) break;
LAB_0077c1e0:
    lVar22 = lVar20;
    uVar10 = uVar19;
    if (param_4 <= uVar25) goto LAB_0077c45e;
  }
  lVar21 = (uVar13 - lVar21) * lVar20;
  uVar18 = lVar21 + lVar20;
  uVar13 = lVar21 + lVar22 * -10;
  bVar27 = uVar19 - uVar14 < uVar17;
  uVar23 = uVar13 - uVar14;
  if ((!(uVar13 < uVar14 || uVar23 == 0)) && (uVar17 <= uVar19 - uVar14)) {
    cVar9 = cVar9 + '/';
    uVar15 = (uVar10 * 10 - uVar17) - uVar14;
    uVar10 = uVar14;
    do {
      uVar14 = uVar10 + uVar17;
      if ((uVar13 <= uVar14) && (uVar23 < (uVar17 - uVar13) + uVar10)) {
        bVar27 = false;
        uVar14 = uVar10;
        break;
      }
      *(char *)(param_3 + -1 + uVar25) = cVar9;
      bVar27 = uVar15 < uVar17;
      uVar15 = uVar15 - uVar17;
      if (uVar13 <= uVar14) break;
      cVar9 = cVar9 + -1;
      uVar23 = uVar23 - uVar17;
      uVar10 = uVar14;
    } while (!bVar27);
  }
  if ((((uVar18 <= uVar14) || (bVar27)) ||
      ((uVar18 <= uVar17 + uVar14 && (uVar18 - uVar14 < (uVar17 + uVar14) - uVar18)))) &&
     (((ulonglong)(lVar22 * 0x14) <= uVar14 && (uVar14 <= uVar19 + lVar22 * -0x28)))) {
    *param_1 = param_3;
LAB_0077c35b:
    local_50[1] = uVar25;
    *(short *)(local_50 + 2) = (short)local_44;
    return;
  }
LAB_0077c36c:
  *local_50 = 0;
  return;
}


