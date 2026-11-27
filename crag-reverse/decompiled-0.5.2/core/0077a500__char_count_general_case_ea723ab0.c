// 0077a500 char_count_general_case

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* core[c0acaeba6ab4c2e0]::str::count::char_count_general_case */

longlong __rustcall
core[c0acaeba6ab4c2e0]::str::count::char_count_general_case(longlong param_1,ulonglong param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar11;
  char cVar12;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar13 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if (3 < param_2) {
    uVar4 = param_2 & 0x7ffffffffffffffc;
    lVar3 = 0;
    lVar5 = 0;
    uVar2 = 0;
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar1 = *(undefined2 *)(param_1 + 2 + uVar2);
      auVar8[0] = -(DAT_001844d0 < (char)*(undefined2 *)(param_1 + uVar2));
      cVar11 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(param_1 + uVar2) >> 8));
      cVar12 = -(UNK_001844d7 < '\0');
      auVar8._8_8_ = (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar12,cVar12),
                                                                            -(UNK_001844d6 < '\0')),
                                                                   -(UNK_001844d6 < '\0')),
                                                          -(UNK_001844d5 < '\0')),
                                                 -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                               CONCAT11(-(UNK_001844d4 < '\0'),cVar12)) >> 8);
      auVar8[7] = -(UNK_001844d3 < '\0');
      auVar8[6] = -(UNK_001844d3 < '\0');
      auVar8[5] = -(UNK_001844d2 < '\0');
      auVar8[4] = -(UNK_001844d2 < '\0');
      auVar8[3] = cVar11;
      auVar8[2] = cVar11;
      auVar8[1] = auVar8[0];
      auVar8 = pshuflw(auVar8,auVar8,0xd4);
      auVar9._12_4_ = auVar8._12_4_;
      auVar9._0_8_ = auVar8._0_8_;
      auVar9._8_4_ = auVar8._4_4_;
      auVar9 = auVar9 & _DAT_00184640;
      lVar6 = lVar6 + auVar9._0_8_;
      lVar7 = lVar7 + auVar9._8_8_;
      auVar13[0] = -(DAT_001844d0 < (char)uVar1);
      cVar11 = -(UNK_001844d1 < (char)((ushort)uVar1 >> 8));
      cVar12 = -(UNK_001844d7 < '\0');
      auVar13._8_8_ =
           (undefined8)
           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar12,cVar12),
                                                                  -(UNK_001844d6 < '\0')),
                                                         -(UNK_001844d6 < '\0')),
                                                -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')),
                              -(UNK_001844d4 < '\0')),CONCAT11(-(UNK_001844d4 < '\0'),cVar12)) >> 8)
      ;
      auVar13[7] = -(UNK_001844d3 < '\0');
      auVar13[6] = -(UNK_001844d3 < '\0');
      auVar13[5] = -(UNK_001844d2 < '\0');
      auVar13[4] = -(UNK_001844d2 < '\0');
      auVar13[3] = cVar11;
      auVar13[2] = cVar11;
      auVar13[1] = auVar13[0];
      auVar8 = pshuflw(auVar9,auVar13,0xd4);
      auVar10._12_4_ = auVar8._12_4_;
      auVar10._0_8_ = auVar8._0_8_;
      auVar10._8_4_ = auVar8._4_4_;
      lVar3 = lVar3 + SUB168(auVar10 & _DAT_00184640,0);
      lVar5 = lVar5 + SUB168(auVar10 & _DAT_00184640,8);
      uVar2 = uVar2 + 4;
    } while (uVar4 != uVar2);
    lVar3 = lVar5 + lVar7 + lVar3 + lVar6;
    goto LAB_0077a5b1;
  }
  uVar4 = 0;
  lVar3 = 0;
  do {
    lVar3 = lVar3 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar4));
    uVar4 = uVar4 + 1;
LAB_0077a5b1:
  } while (param_2 != uVar4);
  return lVar3;
}


