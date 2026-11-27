// 00779f40 do_count_chars

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[c0acaeba6ab4c2e0]::str::count::do_count_chars */

longlong __rustcall
core[c0acaeba6ab4c2e0]::str::count::do_count_chars(ulonglong param_1,ulonglong param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar14;
  undefined1 auVar13 [16];
  longlong lVar15;
  longlong lVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cVar31;
  char cVar32;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
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
  
  uVar11 = param_1 + 7 & 0xfffffffffffffff8;
  uVar10 = uVar11 - param_1;
  uVar2 = param_2 - uVar10;
  if ((param_2 < uVar10) || (uVar4 = uVar2 >> 3, uVar4 == 0)) {
    if (param_2 == 0) {
      return 0;
    }
    if (3 < param_2) {
      uVar10 = param_2 & 0xfffffffffffffffc;
      lVar3 = 0;
      lVar14 = 0;
      uVar2 = 0;
      lVar15 = 0;
      lVar20 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + 2 + uVar2);
        auVar25[0] = -(DAT_001844d0 < (char)*(undefined2 *)(param_1 + uVar2));
        cVar31 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(param_1 + uVar2) >> 8));
        cVar32 = -(UNK_001844d7 < '\0');
        auVar25._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar32,cVar32),
                                                                    -(UNK_001844d6 < '\0')),
                                                           -(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')),
                                -(UNK_001844d4 < '\0')),CONCAT11(-(UNK_001844d4 < '\0'),cVar32)) >>
             8);
        auVar25[7] = -(UNK_001844d3 < '\0');
        auVar25[6] = -(UNK_001844d3 < '\0');
        auVar25[5] = -(UNK_001844d2 < '\0');
        auVar25[4] = -(UNK_001844d2 < '\0');
        auVar25[3] = cVar31;
        auVar25[2] = cVar31;
        auVar25[1] = auVar25[0];
        auVar25 = pshuflw(auVar25,auVar25,0xd4);
        auVar26._12_4_ = auVar25._12_4_;
        auVar26._0_8_ = auVar25._0_8_;
        auVar26._8_4_ = auVar25._4_4_;
        auVar26 = auVar26 & _DAT_00184640;
        lVar15 = lVar15 + auVar26._0_8_;
        lVar20 = lVar20 + auVar26._8_8_;
        auVar36[0] = -(DAT_001844d0 < (char)uVar1);
        cVar31 = -(UNK_001844d1 < (char)((ushort)uVar1 >> 8));
        cVar32 = -(UNK_001844d7 < '\0');
        auVar36._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar32,cVar32),
                                                                    -(UNK_001844d6 < '\0')),
                                                           -(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')),
                                -(UNK_001844d4 < '\0')),CONCAT11(-(UNK_001844d4 < '\0'),cVar32)) >>
             8);
        auVar36[7] = -(UNK_001844d3 < '\0');
        auVar36[6] = -(UNK_001844d3 < '\0');
        auVar36[5] = -(UNK_001844d2 < '\0');
        auVar36[4] = -(UNK_001844d2 < '\0');
        auVar36[3] = cVar31;
        auVar36[2] = cVar31;
        auVar36[1] = auVar36[0];
        auVar25 = pshuflw(auVar26,auVar36,0xd4);
        auVar29._12_4_ = auVar25._12_4_;
        auVar29._0_8_ = auVar25._0_8_;
        auVar29._8_4_ = auVar25._4_4_;
        lVar3 = lVar3 + SUB168(auVar29 & _DAT_00184640,0);
        lVar14 = lVar14 + SUB168(auVar29 & _DAT_00184640,8);
        uVar2 = uVar2 + 4;
      } while (uVar10 != uVar2);
      lVar3 = lVar14 + lVar20 + lVar3 + lVar15;
      goto LAB_0077a4f2;
    }
    uVar10 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar10));
      uVar10 = uVar10 + 1;
LAB_0077a4f2:
    } while (param_2 != uVar10);
    return lVar3;
  }
  uVar5 = (uint)uVar2 & 7;
  if (uVar11 == param_1) {
    lVar3 = 0;
  }
  else {
    if (3 < uVar10) {
      uVar12 = (ulonglong)((uint)uVar10 & 4);
      lVar3 = 0;
      lVar14 = 0;
      uVar11 = 0;
      lVar15 = 0;
      lVar20 = 0;
      do {
        uVar1 = *(undefined2 *)(param_1 + 2 + uVar11);
        auVar44[0] = -(DAT_001844d0 < (char)*(undefined2 *)(param_1 + uVar11));
        cVar31 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(param_1 + uVar11) >> 8));
        cVar32 = -(UNK_001844d7 < '\0');
        auVar44._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar32,cVar32),
                                                                    -(UNK_001844d6 < '\0')),
                                                           -(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')),
                                -(UNK_001844d4 < '\0')),CONCAT11(-(UNK_001844d4 < '\0'),cVar32)) >>
             8);
        auVar44[7] = -(UNK_001844d3 < '\0');
        auVar44[6] = -(UNK_001844d3 < '\0');
        auVar44[5] = -(UNK_001844d2 < '\0');
        auVar44[4] = -(UNK_001844d2 < '\0');
        auVar44[3] = cVar31;
        auVar44[2] = cVar31;
        auVar44[1] = auVar44[0];
        auVar25 = pshuflw(auVar44,auVar44,0xd4);
        auVar47._12_4_ = auVar25._12_4_;
        auVar47._0_8_ = auVar25._0_8_;
        auVar47._8_4_ = auVar25._4_4_;
        auVar47 = auVar47 & _DAT_00184640;
        lVar15 = lVar15 + auVar47._0_8_;
        lVar20 = lVar20 + auVar47._8_8_;
        auVar33[0] = -(DAT_001844d0 < (char)uVar1);
        cVar31 = -(UNK_001844d1 < (char)((ushort)uVar1 >> 8));
        cVar32 = -(UNK_001844d7 < '\0');
        auVar33._8_8_ =
             (undefined8)
             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar32,cVar32),
                                                                    -(UNK_001844d6 < '\0')),
                                                           -(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')),
                                -(UNK_001844d4 < '\0')),CONCAT11(-(UNK_001844d4 < '\0'),cVar32)) >>
             8);
        auVar33[7] = -(UNK_001844d3 < '\0');
        auVar33[6] = -(UNK_001844d3 < '\0');
        auVar33[5] = -(UNK_001844d2 < '\0');
        auVar33[4] = -(UNK_001844d2 < '\0');
        auVar33[3] = cVar31;
        auVar33[2] = cVar31;
        auVar33[1] = auVar33[0];
        auVar25 = pshuflw(auVar47,auVar33,0xd4);
        auVar50._12_4_ = auVar25._12_4_;
        auVar50._0_8_ = auVar25._0_8_;
        auVar50._8_4_ = auVar25._4_4_;
        lVar3 = lVar3 + SUB168(auVar50 & _DAT_00184640,0);
        lVar14 = lVar14 + SUB168(auVar50 & _DAT_00184640,8);
        uVar11 = uVar11 + 4;
      } while (uVar12 != uVar11);
      lVar3 = lVar14 + lVar20 + lVar3 + lVar15;
      goto LAB_0077a0c8;
    }
    uVar12 = 0;
    lVar3 = 0;
    do {
      lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar12));
      uVar12 = uVar12 + 1;
LAB_0077a0c8:
    } while (uVar10 != uVar12);
  }
  pauVar8 = (undefined1 (*) [16])(param_1 + uVar10);
  if ((uVar2 & 7) == 0) {
    uVar10 = 0;
  }
  else {
    uVar2 = uVar2 & 0x7ffffffffffffff8;
    uVar10 = (ulonglong)(-0x41 < (char)(*pauVar8)[uVar2]);
    if (((((uVar5 != 1) && (uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 1]), uVar5 != 2)) &&
         (uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 2]), uVar5 != 3)) &&
        ((uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 3]), uVar5 != 4 &&
         (uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 4]), uVar5 != 5)))) &&
       (uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 5]), uVar5 != 6)) {
      uVar10 = uVar10 + (-0x41 < (char)(*pauVar8)[uVar2 + 6]);
    }
  }
  lVar3 = uVar10 + lVar3;
  auVar13._8_4_ = 0xffffffff;
  auVar13._0_8_ = 0xffffffffffffffff;
  auVar13._12_4_ = 0xffffffff;
  do {
    pauVar9 = pauVar8;
    if (uVar4 == 0) {
      return lVar3;
    }
    uVar2 = 0xc0;
    if (uVar4 < 0xc0) {
      uVar2 = uVar4;
    }
    uVar5 = (uint)uVar2;
    uVar7 = uVar5 * 8;
    if ((uVar7 & 0x7e0) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulonglong)uVar7 - 0x20;
      if (uVar10 < 0x60) {
        uVar10 = 0;
        pauVar6 = pauVar9;
      }
      else {
        uVar11 = (uVar10 >> 5) + 1;
        uVar12 = uVar11 & 0xfffffffffffffffc;
        pauVar6 = pauVar9 + uVar12 * 2;
        pauVar8 = pauVar9 + 4;
        lVar14 = 0;
        lVar15 = 0;
        lVar20 = 0;
        lVar40 = 0;
        uVar10 = uVar12;
        do {
          auVar21._8_8_ = *(ulonglong *)pauVar8[-2];
          auVar21._0_8_ = *(ulonglong *)pauVar8[-4];
          auVar41._0_8_ = SUB168(auVar21 ^ auVar13,0) >> 7;
          auVar41._8_8_ = SUB168(auVar21 ^ auVar13,8) >> 7;
          auVar22._0_8_ = *(ulonglong *)pauVar8[-4] >> 6;
          auVar22._8_8_ = *(ulonglong *)pauVar8[-2] >> 6;
          auVar26 = (auVar22 | auVar41) & _DAT_00182b20;
          auVar16._8_8_ = *(ulonglong *)(pauVar8[-2] + 8);
          auVar16._0_8_ = *(ulonglong *)(pauVar8[-4] + 8);
          auVar34._8_8_ = *(ulonglong *)pauVar8[-1];
          auVar34._0_8_ = *(ulonglong *)pauVar8[-3];
          auVar27._8_8_ = *(ulonglong *)(pauVar8[-1] + 8);
          auVar27._0_8_ = *(ulonglong *)(pauVar8[-3] + 8);
          auVar45._8_8_ = *(ulonglong *)pauVar8[2];
          auVar45._0_8_ = *(ulonglong *)*pauVar8;
          auVar53._0_8_ = SUB168(auVar45 ^ auVar13,0) >> 7;
          auVar53._8_8_ = SUB168(auVar45 ^ auVar13,8) >> 7;
          auVar46._0_8_ = *(ulonglong *)*pauVar8 >> 6;
          auVar46._8_8_ = *(ulonglong *)pauVar8[2] >> 6;
          auVar47 = (auVar46 | auVar53) & _DAT_00182b20;
          auVar48._8_8_ = *(ulonglong *)(pauVar8[2] + 8);
          auVar48._0_8_ = *(ulonglong *)(*pauVar8 + 8);
          auVar42._8_8_ = *(ulonglong *)pauVar8[3];
          auVar42._0_8_ = *(ulonglong *)pauVar8[1];
          auVar38._8_8_ = *(ulonglong *)(pauVar8[3] + 8);
          auVar38._0_8_ = *(ulonglong *)(pauVar8[1] + 8);
          auVar51._0_8_ = SUB168(auVar16 ^ auVar13,0) >> 7;
          auVar51._8_8_ = SUB168(auVar16 ^ auVar13,8) >> 7;
          auVar54._0_8_ = SUB168(auVar48 ^ auVar13,0) >> 7;
          auVar54._8_8_ = SUB168(auVar48 ^ auVar13,8) >> 7;
          auVar17._0_8_ = *(ulonglong *)(pauVar8[-4] + 8) >> 6;
          auVar17._8_8_ = *(ulonglong *)(pauVar8[-2] + 8) >> 6;
          auVar49._0_8_ = *(ulonglong *)(*pauVar8 + 8) >> 6;
          auVar49._8_8_ = *(ulonglong *)(pauVar8[2] + 8) >> 6;
          auVar25 = (auVar17 | auVar51) & _DAT_00182b20;
          auVar50 = (auVar49 | auVar54) & _DAT_00182b20;
          auVar52._0_8_ = SUB168(auVar34 ^ auVar13,0) >> 7;
          auVar52._8_8_ = SUB168(auVar34 ^ auVar13,8) >> 7;
          auVar55._0_8_ = SUB168(auVar42 ^ auVar13,0) >> 7;
          auVar55._8_8_ = SUB168(auVar42 ^ auVar13,8) >> 7;
          auVar35._0_8_ = *(ulonglong *)pauVar8[-3] >> 6;
          auVar35._8_8_ = *(ulonglong *)pauVar8[-1] >> 6;
          auVar43._0_8_ = *(ulonglong *)pauVar8[1] >> 6;
          auVar43._8_8_ = *(ulonglong *)pauVar8[3] >> 6;
          auVar36 = (auVar35 | auVar52) & _DAT_00182b20;
          auVar44 = (auVar43 | auVar55) & _DAT_00182b20;
          auVar18._0_8_ = SUB168(auVar27 ^ auVar13,0) >> 7;
          auVar18._8_8_ = SUB168(auVar27 ^ auVar13,8) >> 7;
          auVar23._0_8_ = SUB168(auVar38 ^ auVar13,0) >> 7;
          auVar23._8_8_ = SUB168(auVar38 ^ auVar13,8) >> 7;
          auVar28._0_8_ = *(ulonglong *)(pauVar8[-3] + 8) >> 6;
          auVar28._8_8_ = *(ulonglong *)(pauVar8[-1] + 8) >> 6;
          auVar39._0_8_ = *(ulonglong *)(pauVar8[1] + 8) >> 6;
          auVar39._8_8_ = *(ulonglong *)(pauVar8[3] + 8) >> 6;
          auVar29 = (auVar28 | auVar18) & _DAT_00182b20;
          lVar14 = auVar29._0_8_ + auVar36._0_8_ + auVar25._0_8_ + auVar26._0_8_ + lVar14;
          lVar15 = auVar29._8_8_ + auVar36._8_8_ + auVar25._8_8_ + auVar26._8_8_ + lVar15;
          auVar25 = (auVar39 | auVar23) & _DAT_00182b20;
          lVar20 = auVar25._0_8_ + auVar44._0_8_ + auVar50._0_8_ + auVar47._0_8_ + lVar20;
          lVar40 = auVar25._8_8_ + auVar44._8_8_ + auVar50._8_8_ + auVar47._8_8_ + lVar40;
          pauVar8 = pauVar8 + 8;
          uVar10 = uVar10 - 4;
        } while (uVar10 != 0);
        uVar10 = lVar40 + lVar15 + lVar20 + lVar14;
        if (uVar11 == uVar12) goto LAB_0077a1a3;
      }
      do {
        auVar25 = *pauVar6;
        auVar26 = pauVar6[1];
        auVar37._0_8_ = SUB168(auVar26 ^ auVar13,0) >> 7;
        auVar37._8_8_ = SUB168(auVar26 ^ auVar13,8) >> 7;
        auVar30._0_8_ = SUB168(auVar25 ^ auVar13,0) >> 7;
        auVar30._8_8_ = SUB168(auVar25 ^ auVar13,8) >> 7;
        auVar24._0_8_ = auVar26._0_8_ >> 6;
        auVar24._8_8_ = auVar26._8_8_ >> 6;
        auVar19._0_8_ = auVar25._0_8_ >> 6;
        auVar19._8_8_ = auVar25._8_8_ >> 6;
        auVar26 = (auVar24 | auVar37) & _DAT_00182b20;
        auVar25 = (auVar19 | auVar30) & _DAT_00182b20;
        uVar10 = uVar10 + auVar25._8_8_ + auVar26._8_8_ + auVar25._0_8_ + auVar26._0_8_;
        pauVar6 = pauVar6 + 2;
      } while (pauVar6 != (undefined1 (*) [16])(*pauVar9 + (uVar7 & 0x7e0)));
    }
LAB_0077a1a3:
    uVar4 = uVar4 - uVar2;
    lVar3 = (((uVar10 >> 8 & 0xff00ff00ff00ff) + (uVar10 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
            0x30) + lVar3;
    pauVar8 = (undefined1 (*) [16])(*pauVar9 + uVar7);
    if ((uVar2 & 3) != 0) {
      uVar10 = (ulonglong)(uVar5 & 0xfc);
      uVar2 = (*(ulonglong *)(*pauVar9 + uVar10 * 8) >> 6 |
              ~*(ulonglong *)(*pauVar9 + uVar10 * 8) >> 7) & 0x101010101010101;
      if (((uVar5 & 3) != 1) &&
         (uVar2 = uVar2 + ((*(ulonglong *)(*pauVar9 + uVar10 * 8 + 8) >> 6 |
                           ~*(ulonglong *)(*pauVar9 + uVar10 * 8 + 8) >> 7) & 0x101010101010101),
         (uVar5 & 3) != 2)) {
        uVar2 = uVar2 + ((*(ulonglong *)(pauVar9[1] + uVar10 * 8) >> 6 |
                         ~*(ulonglong *)(pauVar9[1] + uVar10 * 8) >> 7) & 0x101010101010101);
      }
      return (((uVar2 >> 8 & 0xff00ff00ff00ff) + (uVar2 & 0xff00ff00ff00ff)) * 0x1000100010001 >>
             0x30) + lVar3;
    }
  } while( true );
}


