// 002040f3 count

/* WARNING: Switch with 1 destination removed at 0x002040fc */
/* WARNING: Switch with 1 destination removed at 0x00204102 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[c0acaeba6ab4c2e0]::str::iter::Chars as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::count */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::str::iter::Chars_as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::count(ulonglong param_1,longlong param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar35;
  char cVar36;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  longlong lVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  uVar8 = param_2 - param_1;
  if (uVar8 < 0x20) {
    if (uVar8 == 0) {
      return 0;
    }
    if (3 < uVar8) {
      uVar5 = uVar8 & 0x7ffffffffffffffc;
      lVar3 = 0;
      lVar14 = 0;
      uVar2 = 0;
      lVar15 = 0;
      lVar20 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + 2 + uVar2);
        auVar33[0] = -(DAT_00114020 < (char)*(undefined2 *)(param_1 + uVar2));
        cVar35 = -(UNK_00114021 < (char)((ushort)*(undefined2 *)(param_1 + uVar2) >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar33._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar33[7] = -(UNK_00114023 < '\0');
        auVar33[6] = -(UNK_00114023 < '\0');
        auVar33[5] = -(UNK_00114022 < '\0');
        auVar33[4] = -(UNK_00114022 < '\0');
        auVar33[3] = cVar35;
        auVar33[2] = cVar35;
        auVar33[1] = auVar33[0];
        auVar33 = pshuflw(auVar33,auVar33,0xd4);
        auVar34._12_4_ = auVar33._12_4_;
        auVar34._0_8_ = auVar33._0_8_;
        auVar34._8_4_ = auVar33._4_4_;
        auVar34 = auVar34 & _DAT_00114060;
        lVar15 = lVar15 + auVar34._0_8_;
        lVar20 = lVar20 + auVar34._8_8_;
        auVar41[0] = -(DAT_00114020 < (char)uVar1);
        cVar35 = -(UNK_00114021 < (char)((ushort)uVar1 >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar41._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar41[7] = -(UNK_00114023 < '\0');
        auVar41[6] = -(UNK_00114023 < '\0');
        auVar41[5] = -(UNK_00114022 < '\0');
        auVar41[4] = -(UNK_00114022 < '\0');
        auVar41[3] = cVar35;
        auVar41[2] = cVar35;
        auVar41[1] = auVar41[0];
        auVar33 = pshuflw(auVar34,auVar41,0xd4);
        auVar31._12_4_ = auVar33._12_4_;
        auVar31._0_8_ = auVar33._0_8_;
        auVar31._8_4_ = auVar33._4_4_;
        lVar3 = lVar3 + SUB168(auVar31 & _DAT_00114060,0);
        lVar14 = lVar14 + SUB168(auVar31 & _DAT_00114060,8);
        uVar2 = uVar2 + 4;
      } while (uVar5 != uVar2);
      lVar3 = lVar14 + lVar20 + lVar3 + lVar15;
      goto LAB_0020cfe1;
    }
    uVar5 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar5));
      uVar5 = uVar5 + 1;
LAB_0020cfe1:
    } while (uVar8 != uVar5);
    return lVar3;
  }
  uVar12 = param_1 + 7 & 0xfffffffffffffff8;
  uVar5 = uVar12 - param_1;
  uVar2 = uVar8 - uVar5;
  if ((uVar8 < uVar5) || (uVar4 = uVar2 >> 3, uVar4 == 0)) {
    if (uVar8 == 0) {
      return 0;
    }
    if (3 < uVar8) {
      uVar5 = uVar8 & 0xfffffffffffffffc;
      lVar3 = 0;
      lVar14 = 0;
      uVar2 = 0;
      lVar15 = 0;
      lVar20 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + 2 + uVar2);
        auVar49[0] = -(DAT_00114020 < (char)*(undefined2 *)(param_1 + uVar2));
        cVar35 = -(UNK_00114021 < (char)((ushort)*(undefined2 *)(param_1 + uVar2) >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar49._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar49[7] = -(UNK_00114023 < '\0');
        auVar49[6] = -(UNK_00114023 < '\0');
        auVar49[5] = -(UNK_00114022 < '\0');
        auVar49[4] = -(UNK_00114022 < '\0');
        auVar49[3] = cVar35;
        auVar49[2] = cVar35;
        auVar49[1] = auVar49[0];
        auVar33 = pshuflw(auVar49,auVar49,0xd4);
        auVar25._12_4_ = auVar33._12_4_;
        auVar25._0_8_ = auVar33._0_8_;
        auVar25._8_4_ = auVar33._4_4_;
        auVar25 = auVar25 & _DAT_00114060;
        lVar15 = lVar15 + auVar25._0_8_;
        lVar20 = lVar20 + auVar25._8_8_;
        auVar37[0] = -(DAT_00114020 < (char)uVar1);
        cVar35 = -(UNK_00114021 < (char)((ushort)uVar1 >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar37._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar37[7] = -(UNK_00114023 < '\0');
        auVar37[6] = -(UNK_00114023 < '\0');
        auVar37[5] = -(UNK_00114022 < '\0');
        auVar37[4] = -(UNK_00114022 < '\0');
        auVar37[3] = cVar35;
        auVar37[2] = cVar35;
        auVar37[1] = auVar37[0];
        auVar33 = pshuflw(auVar25,auVar37,0xd4);
        auVar54._12_4_ = auVar33._12_4_;
        auVar54._0_8_ = auVar33._0_8_;
        auVar54._8_4_ = auVar33._4_4_;
        lVar3 = lVar3 + SUB168(auVar54 & _DAT_00114060,0);
        lVar14 = lVar14 + SUB168(auVar54 & _DAT_00114060,8);
        uVar2 = uVar2 + 4;
      } while (uVar5 != uVar2);
      lVar3 = lVar14 + lVar20 + lVar3 + lVar15;
      goto LAB_0020cf22;
    }
    uVar5 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar5));
      uVar5 = uVar5 + 1;
LAB_0020cf22:
    } while (uVar8 != uVar5);
    return lVar3;
  }
  uVar6 = (uint)uVar2 & 7;
  if (uVar12 == param_1) {
    lVar3 = 0;
  }
  else {
    if (3 < uVar5) {
      uVar12 = (ulonglong)((uint)uVar5 & 4);
      lVar3 = 0;
      lVar14 = 0;
      uVar8 = 0;
      lVar15 = 0;
      lVar20 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + 2 + uVar8);
        auVar26[0] = -(DAT_00114020 < (char)*(undefined2 *)(param_1 + uVar8));
        cVar35 = -(UNK_00114021 < (char)((ushort)*(undefined2 *)(param_1 + uVar8) >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar26._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar26[7] = -(UNK_00114023 < '\0');
        auVar26[6] = -(UNK_00114023 < '\0');
        auVar26[5] = -(UNK_00114022 < '\0');
        auVar26[4] = -(UNK_00114022 < '\0');
        auVar26[3] = cVar35;
        auVar26[2] = cVar35;
        auVar26[1] = auVar26[0];
        auVar33 = pshuflw(auVar26,auVar26,0xd4);
        auVar27._12_4_ = auVar33._12_4_;
        auVar27._0_8_ = auVar33._0_8_;
        auVar27._8_4_ = auVar33._4_4_;
        auVar27 = auVar27 & _DAT_00114060;
        lVar15 = lVar15 + auVar27._0_8_;
        lVar20 = lVar20 + auVar27._8_8_;
        auVar38[0] = -(DAT_00114020 < (char)uVar1);
        cVar35 = -(UNK_00114021 < (char)((ushort)uVar1 >> 8));
        cVar36 = -(UNK_00114027 < '\0');
        auVar38._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar36,cVar36),
                                                                    -(UNK_00114026 < '\0')),
                                                           -(UNK_00114026 < '\0')),
                                                  -(UNK_00114025 < '\0')),-(UNK_00114025 < '\0')),
                                -(UNK_00114024 < '\0')),CONCAT11(-(UNK_00114024 < '\0'),cVar36)) >>
             8);
        auVar38[7] = -(UNK_00114023 < '\0');
        auVar38[6] = -(UNK_00114023 < '\0');
        auVar38[5] = -(UNK_00114022 < '\0');
        auVar38[4] = -(UNK_00114022 < '\0');
        auVar38[3] = cVar35;
        auVar38[2] = cVar35;
        auVar38[1] = auVar38[0];
        auVar33 = pshuflw(auVar27,auVar38,0xd4);
        auVar28._12_4_ = auVar33._12_4_;
        auVar28._0_8_ = auVar33._0_8_;
        auVar28._8_4_ = auVar33._4_4_;
        lVar3 = lVar3 + SUB168(auVar28 & _DAT_00114060,0);
        lVar14 = lVar14 + SUB168(auVar28 & _DAT_00114060,8);
        uVar8 = uVar8 + 4;
      } while (uVar12 != uVar8);
      lVar3 = lVar14 + lVar20 + lVar3 + lVar15;
      goto LAB_0020caf8;
    }
    uVar12 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar12));
      uVar12 = uVar12 + 1;
LAB_0020caf8:
    } while (uVar5 != uVar12);
  }
  pauVar10 = (undefined1 (*) [16])(param_1 + uVar5);
  if ((uVar2 & 7) == 0) {
    uVar8 = 0;
  }
  else {
    uVar2 = uVar2 & 0x7ffffffffffffff8;
    uVar8 = (ulonglong)(-0x41 < (char)(*pauVar10)[uVar2]);
    if (((((uVar6 != 1) && (uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 1]), uVar6 != 2)) &&
         (uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 2]), uVar6 != 3)) &&
        ((uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 3]), uVar6 != 4 &&
         (uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 4]), uVar6 != 5)))) &&
       (uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 5]), uVar6 != 6)) {
      uVar8 = uVar8 + (-0x41 < (char)(*pauVar10)[uVar2 + 6]);
    }
  }
  lVar3 = uVar8 + lVar3;
  auVar13._8_4_ = 0xffffffff;
  auVar13._0_8_ = 0xffffffffffffffff;
  auVar13._12_4_ = 0xffffffff;
  do {
    pauVar11 = pauVar10;
    if (uVar4 == 0) {
      return lVar3;
    }
    uVar8 = 0xc0;
    if (uVar4 < 0xc0) {
      uVar8 = uVar4;
    }
    uVar6 = (uint)uVar8;
    uVar9 = uVar6 * 8;
    if ((uVar9 & 0x7e0) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (ulonglong)uVar9 - 0x20;
      if (uVar2 < 0x60) {
        uVar2 = 0;
        pauVar7 = pauVar11;
      }
      else {
        uVar5 = (uVar2 >> 5) + 1;
        uVar12 = uVar5 & 0xfffffffffffffffc;
        pauVar7 = pauVar11 + uVar12 * 2;
        pauVar10 = pauVar11 + 4;
        lVar14 = 0;
        lVar15 = 0;
        lVar20 = 0;
        lVar45 = 0;
        uVar2 = uVar12;
        do {
          auVar21._8_8_ = *(ulonglong *)pauVar10[-2];
          auVar21._0_8_ = *(ulonglong *)pauVar10[-4];
          auVar46._0_8_ = SUB168(auVar21 ^ auVar13,0) >> 7;
          auVar46._8_8_ = SUB168(auVar21 ^ auVar13,8) >> 7;
          auVar22._0_8_ = *(ulonglong *)pauVar10[-4] >> 6;
          auVar22._8_8_ = *(ulonglong *)pauVar10[-2] >> 6;
          auVar34 = (auVar22 | auVar46) & _DAT_00113a10;
          auVar16._8_8_ = *(ulonglong *)(pauVar10[-2] + 8);
          auVar16._0_8_ = *(ulonglong *)(pauVar10[-4] + 8);
          auVar39._8_8_ = *(ulonglong *)pauVar10[-1];
          auVar39._0_8_ = *(ulonglong *)pauVar10[-3];
          auVar29._8_8_ = *(ulonglong *)(pauVar10[-1] + 8);
          auVar29._0_8_ = *(ulonglong *)(pauVar10[-3] + 8);
          auVar50._8_8_ = *(ulonglong *)pauVar10[2];
          auVar50._0_8_ = *(ulonglong *)*pauVar10;
          auVar57._0_8_ = SUB168(auVar50 ^ auVar13,0) >> 7;
          auVar57._8_8_ = SUB168(auVar50 ^ auVar13,8) >> 7;
          auVar51._0_8_ = *(ulonglong *)*pauVar10 >> 6;
          auVar51._8_8_ = *(ulonglong *)pauVar10[2] >> 6;
          auVar25 = (auVar51 | auVar57) & _DAT_00113a10;
          auVar52._8_8_ = *(ulonglong *)(pauVar10[2] + 8);
          auVar52._0_8_ = *(ulonglong *)(*pauVar10 + 8);
          auVar47._8_8_ = *(ulonglong *)pauVar10[3];
          auVar47._0_8_ = *(ulonglong *)pauVar10[1];
          auVar43._8_8_ = *(ulonglong *)(pauVar10[3] + 8);
          auVar43._0_8_ = *(ulonglong *)(pauVar10[1] + 8);
          auVar55._0_8_ = SUB168(auVar16 ^ auVar13,0) >> 7;
          auVar55._8_8_ = SUB168(auVar16 ^ auVar13,8) >> 7;
          auVar58._0_8_ = SUB168(auVar52 ^ auVar13,0) >> 7;
          auVar58._8_8_ = SUB168(auVar52 ^ auVar13,8) >> 7;
          auVar17._0_8_ = *(ulonglong *)(pauVar10[-4] + 8) >> 6;
          auVar17._8_8_ = *(ulonglong *)(pauVar10[-2] + 8) >> 6;
          auVar53._0_8_ = *(ulonglong *)(*pauVar10 + 8) >> 6;
          auVar53._8_8_ = *(ulonglong *)(pauVar10[2] + 8) >> 6;
          auVar33 = (auVar17 | auVar55) & _DAT_00113a10;
          auVar54 = (auVar53 | auVar58) & _DAT_00113a10;
          auVar56._0_8_ = SUB168(auVar39 ^ auVar13,0) >> 7;
          auVar56._8_8_ = SUB168(auVar39 ^ auVar13,8) >> 7;
          auVar59._0_8_ = SUB168(auVar47 ^ auVar13,0) >> 7;
          auVar59._8_8_ = SUB168(auVar47 ^ auVar13,8) >> 7;
          auVar40._0_8_ = *(ulonglong *)pauVar10[-3] >> 6;
          auVar40._8_8_ = *(ulonglong *)pauVar10[-1] >> 6;
          auVar48._0_8_ = *(ulonglong *)pauVar10[1] >> 6;
          auVar48._8_8_ = *(ulonglong *)pauVar10[3] >> 6;
          auVar41 = (auVar40 | auVar56) & _DAT_00113a10;
          auVar49 = (auVar48 | auVar59) & _DAT_00113a10;
          auVar18._0_8_ = SUB168(auVar29 ^ auVar13,0) >> 7;
          auVar18._8_8_ = SUB168(auVar29 ^ auVar13,8) >> 7;
          auVar23._0_8_ = SUB168(auVar43 ^ auVar13,0) >> 7;
          auVar23._8_8_ = SUB168(auVar43 ^ auVar13,8) >> 7;
          auVar30._0_8_ = *(ulonglong *)(pauVar10[-3] + 8) >> 6;
          auVar30._8_8_ = *(ulonglong *)(pauVar10[-1] + 8) >> 6;
          auVar44._0_8_ = *(ulonglong *)(pauVar10[1] + 8) >> 6;
          auVar44._8_8_ = *(ulonglong *)(pauVar10[3] + 8) >> 6;
          auVar31 = (auVar30 | auVar18) & _DAT_00113a10;
          lVar14 = auVar31._0_8_ + auVar41._0_8_ + auVar33._0_8_ + auVar34._0_8_ + lVar14;
          lVar15 = auVar31._8_8_ + auVar41._8_8_ + auVar33._8_8_ + auVar34._8_8_ + lVar15;
          auVar33 = (auVar44 | auVar23) & _DAT_00113a10;
          lVar20 = auVar33._0_8_ + auVar49._0_8_ + auVar54._0_8_ + auVar25._0_8_ + lVar20;
          lVar45 = auVar33._8_8_ + auVar49._8_8_ + auVar54._8_8_ + auVar25._8_8_ + lVar45;
          pauVar10 = pauVar10 + 8;
          uVar2 = uVar2 - 4;
        } while (uVar2 != 0);
        uVar2 = lVar45 + lVar15 + lVar20 + lVar14;
        if (uVar5 == uVar12) goto LAB_0020cbd3;
      }
      do {
        auVar33 = *pauVar7;
        auVar34 = pauVar7[1];
        auVar42._0_8_ = SUB168(auVar34 ^ auVar13,0) >> 7;
        auVar42._8_8_ = SUB168(auVar34 ^ auVar13,8) >> 7;
        auVar32._0_8_ = SUB168(auVar33 ^ auVar13,0) >> 7;
        auVar32._8_8_ = SUB168(auVar33 ^ auVar13,8) >> 7;
        auVar24._0_8_ = auVar34._0_8_ >> 6;
        auVar24._8_8_ = auVar34._8_8_ >> 6;
        auVar19._0_8_ = auVar33._0_8_ >> 6;
        auVar19._8_8_ = auVar33._8_8_ >> 6;
        auVar34 = (auVar24 | auVar42) & _DAT_00113a10;
        auVar33 = (auVar19 | auVar32) & _DAT_00113a10;
        uVar2 = uVar2 + auVar33._8_8_ + auVar34._8_8_ + auVar33._0_8_ + auVar34._0_8_;
        pauVar7 = pauVar7 + 2;
      } while (pauVar7 != (undefined1 (*) [16])(*pauVar11 + (uVar9 & 0x7e0)));
    }
LAB_0020cbd3:
    uVar4 = uVar4 - uVar8;
    lVar3 = (((uVar2 >> 8 & 0xff00ff00ff00ff) + (uVar2 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar3;
    pauVar10 = (undefined1 (*) [16])(*pauVar11 + uVar9);
    if ((uVar8 & 3) != 0) {
      uVar2 = (ulonglong)(uVar6 & 0xfc);
      uVar8 = (*(ulonglong *)(*pauVar11 + uVar2 * 8) >> 6 |
              ~*(ulonglong *)(*pauVar11 + uVar2 * 8) >> 7) & 0x101010101010101;
      if (((uVar6 & 3) != 1) &&
         (uVar8 = uVar8 + ((*(ulonglong *)(*pauVar11 + uVar2 * 8 + 8) >> 6 |
                           ~*(ulonglong *)(*pauVar11 + uVar2 * 8 + 8) >> 7) & 0x101010101010101),
         (uVar6 & 3) != 2)) {
        uVar8 = uVar8 + ((*(ulonglong *)(pauVar11[1] + uVar2 * 8) >> 6 |
                         ~*(ulonglong *)(pauVar11[1] + uVar2 * 8) >> 7) & 0x101010101010101);
      }
      return (((uVar8 >> 8 & 0xff00ff00ff00ff) + (uVar8 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
             0x30) + lVar3;
    }
  } while( true );
}


