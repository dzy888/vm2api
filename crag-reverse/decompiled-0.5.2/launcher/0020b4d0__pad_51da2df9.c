// 0020b4d0 pad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad */

undefined1 __rustcall
<core[c0acaeba6ab4c2e0]::fmt::Formatter>::pad(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  char cVar16;
  char cVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char cVar22;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  
  uVar4 = *(uint *)(param_1 + 0x10);
  if ((uVar4 & 0x18000000) != 0) {
    if ((uVar4 & 0x10000000) == 0) {
      if (param_3 < (byte *)0x20) {
        if (param_3 == (byte *)0x0) {
          uVar9 = 0;
        }
        else {
          if ((byte *)0x3 < param_3) {
            uVar7 = (uint)param_3 & 0x1c;
            pbVar6 = (byte *)(ulonglong)uVar7;
            cVar22 = DAT_00114020;
            auVar13[0] = -(cVar22 < (char)*(undefined2 *)param_2);
            cVar24 = DAT_00114020._1_1_;
            cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)param_2 >> 8));
            cVar25 = DAT_00114020._2_1_;
            cVar26 = DAT_00114020._3_1_;
            cVar27 = DAT_00114020._4_1_;
            cVar28 = DAT_00114020._5_1_;
            cVar29 = DAT_00114020._6_1_;
            cVar30 = DAT_00114020._7_1_;
            cVar17 = -(cVar30 < '\0');
            auVar13._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                        -(cVar29 < '\0')),
                                                               -(cVar29 < '\0')),-(cVar28 < '\0')),
                                             -(cVar28 < '\0')),-(cVar27 < '\0')),
                           CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
            auVar13[7] = -(cVar26 < '\0');
            auVar13[6] = -(cVar26 < '\0');
            auVar13[5] = -(cVar25 < '\0');
            auVar13[4] = -(cVar25 < '\0');
            auVar13[3] = cVar16;
            auVar13[2] = cVar16;
            auVar13[1] = auVar13[0];
            auVar13 = pshuflw(auVar13,auVar13,0xd4);
            auVar14._12_4_ = auVar13._12_4_;
            auVar14._0_8_ = auVar13._0_8_;
            auVar14._8_4_ = auVar13._4_4_;
            auVar15 = auVar14 & _DAT_00114060;
            auVar19[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 2));
            cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 2) >> 8));
            cVar17 = -(cVar30 < '\0');
            auVar19._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                        -(cVar29 < '\0')),
                                                               -(cVar29 < '\0')),-(cVar28 < '\0')),
                                             -(cVar28 < '\0')),-(cVar27 < '\0')),
                           CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
            auVar19[7] = -(cVar26 < '\0');
            auVar19[6] = -(cVar26 < '\0');
            auVar19[5] = -(cVar25 < '\0');
            auVar19[4] = -(cVar25 < '\0');
            auVar19[3] = cVar16;
            auVar19[2] = cVar16;
            auVar19[1] = auVar19[0];
            auVar13 = pshuflw(auVar19,auVar19,0xd4);
            auVar20._12_4_ = auVar13._12_4_;
            auVar20._0_8_ = auVar13._0_8_;
            auVar20._8_4_ = auVar13._4_4_;
            auVar21 = auVar20 & _DAT_00114060;
            if (pbVar6 != (byte *)0x4) {
              auVar31[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 4));
              cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 4) >> 8));
              cVar17 = -(cVar30 < '\0');
              auVar31._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                          -(cVar29 < '\0')),
                                                                 -(cVar29 < '\0')),-(cVar28 < '\0'))
                                               ,-(cVar28 < '\0')),-(cVar27 < '\0')),
                             CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
              auVar31[7] = -(cVar26 < '\0');
              auVar31[6] = -(cVar26 < '\0');
              auVar31[5] = -(cVar25 < '\0');
              auVar31[4] = -(cVar25 < '\0');
              auVar31[3] = cVar16;
              auVar31[2] = cVar16;
              auVar31[1] = auVar31[0];
              auVar13 = pshuflw(auVar31,auVar31,0xd4);
              auVar32._12_4_ = auVar13._12_4_;
              auVar32._0_8_ = auVar13._0_8_;
              auVar32._8_4_ = auVar13._4_4_;
              auVar43[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 6));
              cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 6) >> 8));
              cVar17 = -(cVar30 < '\0');
              auVar43._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                          -(cVar29 < '\0')),
                                                                 -(cVar29 < '\0')),-(cVar28 < '\0'))
                                               ,-(cVar28 < '\0')),-(cVar27 < '\0')),
                             CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
              auVar43[7] = -(cVar26 < '\0');
              auVar43[6] = -(cVar26 < '\0');
              auVar43[5] = -(cVar25 < '\0');
              auVar43[4] = -(cVar25 < '\0');
              auVar43[3] = cVar16;
              auVar43[2] = cVar16;
              auVar43[1] = auVar43[0];
              auVar13 = pshuflw(auVar43,auVar43,0xd4);
              auVar44._12_4_ = auVar13._12_4_;
              auVar44._0_8_ = auVar13._0_8_;
              auVar44._8_4_ = auVar13._4_4_;
              lVar18 = auVar15._8_8_;
              auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar32 & _DAT_00114060,0);
              auVar15._8_8_ = lVar18 + SUB168(auVar32 & _DAT_00114060,8);
              lVar18 = auVar21._8_8_;
              auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar44 & _DAT_00114060,0);
              auVar21._8_8_ = lVar18 + SUB168(auVar44 & _DAT_00114060,8);
              if (uVar7 != 8) {
                auVar33[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 8));
                cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 8) >> 8));
                cVar17 = -(cVar30 < '\0');
                auVar33._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                            -(cVar29 < '\0')),
                                                                   -(cVar29 < '\0')),
                                                          -(cVar28 < '\0')),-(cVar28 < '\0')),
                                        -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
                auVar33[7] = -(cVar26 < '\0');
                auVar33[6] = -(cVar26 < '\0');
                auVar33[5] = -(cVar25 < '\0');
                auVar33[4] = -(cVar25 < '\0');
                auVar33[3] = cVar16;
                auVar33[2] = cVar16;
                auVar33[1] = auVar33[0];
                auVar13 = pshuflw(auVar33,auVar33,0xd4);
                auVar34._12_4_ = auVar13._12_4_;
                auVar34._0_8_ = auVar13._0_8_;
                auVar34._8_4_ = auVar13._4_4_;
                auVar45[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 10));
                cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 10) >> 8));
                cVar17 = -(cVar30 < '\0');
                auVar45._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17),
                                                                            -(cVar29 < '\0')),
                                                                   -(cVar29 < '\0')),
                                                          -(cVar28 < '\0')),-(cVar28 < '\0')),
                                        -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8);
                auVar45[7] = -(cVar26 < '\0');
                auVar45[6] = -(cVar26 < '\0');
                auVar45[5] = -(cVar25 < '\0');
                auVar45[4] = -(cVar25 < '\0');
                auVar45[3] = cVar16;
                auVar45[2] = cVar16;
                auVar45[1] = auVar45[0];
                auVar13 = pshuflw(auVar45,auVar45,0xd4);
                auVar46._12_4_ = auVar13._12_4_;
                auVar46._0_8_ = auVar13._0_8_;
                auVar46._8_4_ = auVar13._4_4_;
                auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar34 & _DAT_00114060,0);
                auVar15._8_8_ = auVar15._8_8_ + SUB168(auVar34 & _DAT_00114060,8);
                auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar46 & _DAT_00114060,0);
                auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar46 & _DAT_00114060,8);
                if (uVar7 != 0xc) {
                  auVar35[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0xc));
                  cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0xc) >> 8));
                  cVar17 = -(cVar30 < '\0');
                  auVar35._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17
                                                                                      ),
                                                                              -(cVar29 < '\0')),
                                                                     -(cVar29 < '\0')),
                                                            -(cVar28 < '\0')),-(cVar28 < '\0')),
                                          -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8)
                  ;
                  auVar35[7] = -(cVar26 < '\0');
                  auVar35[6] = -(cVar26 < '\0');
                  auVar35[5] = -(cVar25 < '\0');
                  auVar35[4] = -(cVar25 < '\0');
                  auVar35[3] = cVar16;
                  auVar35[2] = cVar16;
                  auVar35[1] = auVar35[0];
                  auVar13 = pshuflw(auVar35,auVar35,0xd4);
                  auVar36._12_4_ = auVar13._12_4_;
                  auVar36._0_8_ = auVar13._0_8_;
                  auVar36._8_4_ = auVar13._4_4_;
                  auVar47[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0xe));
                  cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0xe) >> 8));
                  cVar17 = -(cVar30 < '\0');
                  auVar47._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,cVar17
                                                                                      ),
                                                                              -(cVar29 < '\0')),
                                                                     -(cVar29 < '\0')),
                                                            -(cVar28 < '\0')),-(cVar28 < '\0')),
                                          -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >> 8)
                  ;
                  auVar47[7] = -(cVar26 < '\0');
                  auVar47[6] = -(cVar26 < '\0');
                  auVar47[5] = -(cVar25 < '\0');
                  auVar47[4] = -(cVar25 < '\0');
                  auVar47[3] = cVar16;
                  auVar47[2] = cVar16;
                  auVar47[1] = auVar47[0];
                  auVar13 = pshuflw(auVar47,auVar47,0xd4);
                  auVar48._12_4_ = auVar13._12_4_;
                  auVar48._0_8_ = auVar13._0_8_;
                  auVar48._8_4_ = auVar13._4_4_;
                  auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar36 & _DAT_00114060,0);
                  auVar15._8_8_ = auVar15._8_8_ + SUB168(auVar36 & _DAT_00114060,8);
                  auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar48 & _DAT_00114060,0);
                  auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar48 & _DAT_00114060,8);
                  if (uVar7 != 0x10) {
                    auVar37[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x10));
                    cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8));
                    cVar17 = -(cVar30 < '\0');
                    auVar37._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                            -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >>
                         8);
                    auVar37[7] = -(cVar26 < '\0');
                    auVar37[6] = -(cVar26 < '\0');
                    auVar37[5] = -(cVar25 < '\0');
                    auVar37[4] = -(cVar25 < '\0');
                    auVar37[3] = cVar16;
                    auVar37[2] = cVar16;
                    auVar37[1] = auVar37[0];
                    auVar13 = pshuflw(auVar37,auVar37,0xd4);
                    auVar38._12_4_ = auVar13._12_4_;
                    auVar38._0_8_ = auVar13._0_8_;
                    auVar38._8_4_ = auVar13._4_4_;
                    auVar49[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x12));
                    cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x12) >> 8));
                    cVar17 = -(cVar30 < '\0');
                    auVar49._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                            -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17)) >>
                         8);
                    auVar49[7] = -(cVar26 < '\0');
                    auVar49[6] = -(cVar26 < '\0');
                    auVar49[5] = -(cVar25 < '\0');
                    auVar49[4] = -(cVar25 < '\0');
                    auVar49[3] = cVar16;
                    auVar49[2] = cVar16;
                    auVar49[1] = auVar49[0];
                    auVar13 = pshuflw(auVar49,auVar49,0xd4);
                    auVar50._12_4_ = auVar13._12_4_;
                    auVar50._0_8_ = auVar13._0_8_;
                    auVar50._8_4_ = auVar13._4_4_;
                    auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar38 & _DAT_00114060,0);
                    auVar15._8_8_ = auVar15._8_8_ + SUB168(auVar38 & _DAT_00114060,8);
                    auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar50 & _DAT_00114060,0);
                    auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar50 & _DAT_00114060,8);
                    if (uVar7 != 0x14) {
                      auVar39[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x14));
                      cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x14) >> 8));
                      cVar17 = -(cVar30 < '\0');
                      auVar39._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                              -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17))
                           >> 8);
                      auVar39[7] = -(cVar26 < '\0');
                      auVar39[6] = -(cVar26 < '\0');
                      auVar39[5] = -(cVar25 < '\0');
                      auVar39[4] = -(cVar25 < '\0');
                      auVar39[3] = cVar16;
                      auVar39[2] = cVar16;
                      auVar39[1] = auVar39[0];
                      auVar13 = pshuflw(auVar39,auVar39,0xd4);
                      auVar40._12_4_ = auVar13._12_4_;
                      auVar40._0_8_ = auVar13._0_8_;
                      auVar40._8_4_ = auVar13._4_4_;
                      auVar51[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x16));
                      cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x16) >> 8));
                      cVar17 = -(cVar30 < '\0');
                      auVar51._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                              -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17))
                           >> 8);
                      auVar51[7] = -(cVar26 < '\0');
                      auVar51[6] = -(cVar26 < '\0');
                      auVar51[5] = -(cVar25 < '\0');
                      auVar51[4] = -(cVar25 < '\0');
                      auVar51[3] = cVar16;
                      auVar51[2] = cVar16;
                      auVar51[1] = auVar51[0];
                      auVar13 = pshuflw(auVar51,auVar51,0xd4);
                      auVar52._12_4_ = auVar13._12_4_;
                      auVar52._0_8_ = auVar13._0_8_;
                      auVar52._8_4_ = auVar13._4_4_;
                      auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar40 & _DAT_00114060,0);
                      auVar15._8_8_ = auVar15._8_8_ + SUB168(auVar40 & _DAT_00114060,8);
                      auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar52 & _DAT_00114060,0);
                      auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar52 & _DAT_00114060,8);
                      if (uVar7 != 0x18) {
                        auVar41[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x18));
                        cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x18) >> 8));
                        cVar17 = -(cVar30 < '\0');
                        auVar41._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                                -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17))
                             >> 8);
                        auVar41[7] = -(cVar26 < '\0');
                        auVar41[6] = -(cVar26 < '\0');
                        auVar41[5] = -(cVar25 < '\0');
                        auVar41[4] = -(cVar25 < '\0');
                        auVar41[3] = cVar16;
                        auVar41[2] = cVar16;
                        auVar41[1] = auVar41[0];
                        auVar13 = pshuflw(auVar41,auVar41,0xd4);
                        auVar42._12_4_ = auVar13._12_4_;
                        auVar42._0_8_ = auVar13._0_8_;
                        auVar42._8_4_ = auVar13._4_4_;
                        auVar53[0] = -(cVar22 < (char)*(undefined2 *)(param_2 + 0x1a));
                        cVar16 = -(cVar24 < (char)((ushort)*(undefined2 *)(param_2 + 0x1a) >> 8));
                        cVar17 = -(cVar30 < '\0');
                        auVar53._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar17,
                                                  cVar17),-(cVar29 < '\0')),-(cVar29 < '\0')),
                                                  -(cVar28 < '\0')),-(cVar28 < '\0')),
                                                -(cVar27 < '\0')),CONCAT11(-(cVar27 < '\0'),cVar17))
                             >> 8);
                        auVar53[7] = -(cVar26 < '\0');
                        auVar53[6] = -(cVar26 < '\0');
                        auVar53[5] = -(cVar25 < '\0');
                        auVar53[4] = -(cVar25 < '\0');
                        auVar53[3] = cVar16;
                        auVar53[2] = cVar16;
                        auVar53[1] = auVar53[0];
                        auVar13 = pshuflw(_DAT_00114020,auVar53,0xd4);
                        auVar23._12_4_ = auVar13._12_4_;
                        auVar23._0_8_ = auVar13._0_8_;
                        auVar23._8_4_ = auVar13._4_4_;
                        auVar15._0_8_ = auVar15._0_8_ + SUB168(auVar42 & _DAT_00114060,0);
                        auVar15._8_8_ = auVar15._8_8_ + SUB168(auVar42 & _DAT_00114060,8);
                        auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar23 & _DAT_00114060,0);
                        auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar23 & _DAT_00114060,8);
                      }
                    }
                  }
                }
              }
            }
            uVar9 = auVar15._8_8_ + auVar21._8_8_ + auVar15._0_8_ + auVar21._0_8_;
            goto LAB_0020b7f0;
          }
          pbVar6 = (byte *)0x0;
          uVar9 = 0;
          do {
            uVar9 = uVar9 + (-0x41 < (char)param_2[(longlong)pbVar6]);
            pbVar6 = pbVar6 + 1;
LAB_0020b7f0:
          } while (param_3 != pbVar6);
        }
      }
      else {
        uVar9 = (*(code *)PTR_do_count_chars_0021ad18)();
      }
    }
    else {
      uVar9 = (ulonglong)*(ushort *)(param_1 + 0x16);
      if (uVar9 == 0) {
        param_3 = (byte *)0x0;
        uVar5 = 0;
      }
      else {
        pbVar6 = param_2 + (longlong)param_3;
        param_3 = (byte *)0x0;
        uVar5 = uVar9;
        do {
          if (param_2 == pbVar6) goto LAB_0020b5af;
          bVar1 = *param_2;
          if ((char)bVar1 < '\0') {
            if (bVar1 < 0xe0) {
              pbVar8 = param_2 + 2;
            }
            else {
              pbVar8 = param_2 + (4 - (ulonglong)(bVar1 < 0xf0));
            }
          }
          else {
            pbVar8 = param_2 + 1;
          }
          param_3 = pbVar8 + ((longlong)param_3 - (longlong)param_2);
          uVar5 = uVar5 - 1;
          param_2 = pbVar8;
        } while (uVar5 != 0);
        uVar5 = 0;
      }
LAB_0020b5af:
      uVar9 = uVar9 - uVar5;
    }
    uVar2 = *(ushort *)(param_1 + 0x14);
    if (uVar9 < uVar2) {
      uVar7 = (uint)uVar2 - (int)uVar9;
      switch(uVar4 >> 0x1d & 3) {
      default:
        uVar4 = 0;
        break;
      case 1:
        uVar4 = uVar7;
        break;
      case 2:
        uVar4 = (uVar7 & 0xffff) >> 1;
      }
      lVar18 = *(longlong *)(param_1 + 8);
      uVar12 = uVar4 + 1;
      while (uVar10 = (short)uVar12 - 1, uVar12 = (uint)uVar10, uVar10 != 0) {
        cVar16 = (**(code **)(lVar18 + 0x20))();
        if (cVar16 != '\0') {
          return true;
        }
      }
      cVar16 = (**(code **)(lVar18 + 0x18))();
      if (cVar16 != '\0') {
        return true;
      }
      uVar10 = (short)uVar7 - (short)uVar4;
      uVar11 = 0xffff;
      do {
        if ((ushort)((((short)uVar4 + (short)uVar9) - uVar2) + uVar11) == -1) {
          uVar11 = uVar10;
          break;
        }
        cVar16 = (**(code **)(lVar18 + 0x20))();
        uVar11 = uVar11 + 1;
      } while (cVar16 == '\0');
      return uVar11 < uVar10;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0020b85f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,param_3);
  return uVar3;
}


