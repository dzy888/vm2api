// 0020dae0 format_exact_opt

/* core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_exact_opt */

undefined8 * __rustcall
core[c0acaeba6ab4c2e0]::num::imp::flt2dec::strategy::grisu::format_exact_opt
          (undefined8 *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
          undefined4 param_5)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  short sVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  byte bVar19;
  
  uVar12 = *param_2;
  if (uVar12 == 0) {
    (*(code *)PTR_panic_00219ca8)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00219288);
LAB_0020de7a:
    (*(code *)PTR_panic_00219ca8)();
  }
  else {
    if (uVar12 >> 0x3d != 0) goto LAB_0020de7a;
    if (param_4 != 0) {
      sVar4 = (short)param_5;
      uVar16 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> uVar16 == 0; uVar16 = uVar16 - 1) {
        }
      }
      sVar13 = (short)param_2[3] - (short)(uVar16 ^ 0x3f);
      uVar11 = ((short)(-0x60 - sVar13) * 0x50 + 0x153b0) / 0x84e;
      if (uVar11 < 0x51) {
        lVar15 = (longlong)(int)uVar11 * 0x10;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar12 << ((byte)(uVar16 ^ 0x3f) & 0x3f);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *(ulonglong *)(PTR_CACHED_POW10_0021adf0 + lVar15);
        uVar6 = SUB168(auVar2 * auVar3,8) - (SUB168(auVar2 * auVar3,0) >> 0x3f);
        cVar5 = -((char)sVar13 + (char)*(undefined2 *)(PTR_CACHED_POW10_0021adf0 + lVar15 + 8));
        bVar10 = cVar5 - 0x40U & 0x3f;
        uVar12 = uVar6 >> bVar10;
        uVar16 = 1L << bVar10;
        uVar6 = uVar16 - 1 & uVar6;
        uVar11 = (uint)uVar12;
        if ((uVar6 != 0) || ((param_4 < 0xb && (*(uint *)("e()" + param_4 * 4) <= uVar11)))) {
          if (uVar11 < 10000) {
            if (uVar11 < 100) {
              bVar19 = 9 < uVar11;
              uVar8 = (ulonglong)((uint)bVar19 * 9 + 1);
            }
            else {
              uVar8 = 1000;
              if (uVar11 < 1000) {
                uVar8 = 100;
              }
              bVar19 = uVar11 < 1000 ^ 3;
            }
          }
          else if (uVar11 < 1000000) {
            uVar8 = 100000;
            if (uVar11 < 100000) {
              uVar8 = 10000;
            }
            bVar19 = uVar11 < 100000 ^ 5;
          }
          else if (uVar11 < 100000000) {
            uVar8 = 10000000;
            if (uVar11 < 10000000) {
              uVar8 = 1000000;
            }
            bVar19 = uVar11 < 10000000 ^ 7;
          }
          else {
            uVar8 = 1000000000;
            if (uVar11 < 1000000000) {
              uVar8 = 100000000;
            }
            bVar19 = uVar11 < 1000000000 ^ 9;
          }
          iVar14 = ((uint)bVar19 - (uint)*(ushort *)(PTR_CACHED_POW10_0021adf0 + lVar15 + 10)) + 1;
          sVar13 = (short)iVar14;
          uVar18 = param_4;
          if (sVar4 < sVar13) {
            uVar17 = (longlong)(short)(sVar13 - sVar4);
            if (param_4 <= (ulonglong)((longlong)sVar13 - (longlong)sVar4)) {
              uVar17 = param_4;
            }
            uVar18 = 1;
            do {
              uVar7 = uVar12 & 0xffffffff;
              uVar12 = uVar7 % uVar8;
              if (uVar18 - param_4 == 1) goto LAB_0020deac;
              *(char *)(param_3 + -1 + uVar18) = (char)(uVar7 / uVar8) + '0';
              uVar11 = (uint)uVar8;
              if (uVar17 == uVar18) {
                uVar6 = (uVar12 << bVar10) + uVar6;
                uVar8 = uVar8 << bVar10;
                goto LAB_0020de46;
              }
              if (uVar18 - bVar19 == 1) {
                uVar12 = 1;
                goto LAB_0020dde0;
              }
              uVar8 = uVar8 / 10;
              uVar18 = uVar18 + 1;
            } while (9 < uVar11);
            (*(code *)PTR_panic_const_div_by_zero_0021a220)();
          }
          format_exact_opt::possibly_round(param_1,param_3,uVar18,0);
          return param_1;
        }
LAB_0020dbf2:
        *param_1 = 0;
        return param_1;
      }
      goto LAB_0020ded3;
    }
  }
  (*(code *)PTR_panic_00219ca8)();
LAB_0020deac:
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_0020dec0:
  (*(code *)PTR_panic_bounds_check_0021a020)();
LAB_0020ded3:
  (*(code *)PTR_panic_bounds_check_0021a020)();
  pcVar1 = (code *)swi(3);
  puVar9 = (undefined8 *)(*pcVar1)();
  return puVar9;
LAB_0020dde0:
  if (uVar12 >> (cVar5 + 0xbfU & 0x3f) != 0) goto LAB_0020dbf2;
  if (param_4 <= uVar18) goto LAB_0020dec0;
  uVar8 = uVar6 * 10;
  uVar6 = uVar8 & uVar16 - 1;
  uVar12 = uVar12 * 10;
  *(char *)(param_3 + uVar18) = (char)(uVar8 >> bVar10) + '0';
  uVar18 = uVar18 + 1;
  if (uVar17 == uVar18) {
    uVar8 = uVar16;
    uVar16 = uVar12;
LAB_0020de46:
    format_exact_opt::possibly_round
              (param_1,param_3,param_4,uVar17,iVar14,param_5,uVar6,uVar8,uVar16);
    return param_1;
  }
  goto LAB_0020dde0;
}


