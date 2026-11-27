// 00782150 fmt

/* WARNING: Switch with 1 destination removed at 0x00782167 */
/* WARNING: Switch with 1 destination removed at 0x0078217c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <bool as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

undefined1 __rustcall
<bool_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(char *param_1,longlong param_2)

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
  char *pcVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  char cVar18;
  char cVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong lVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  undefined1 auVar25 [16];
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
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  if (*param_1 == '\0') {
    pcVar9 = "false";
    pbVar8 = (byte *)0x5;
  }
  else {
    pcVar9 = "truePATHTERMLANGurlsseed";
    pbVar8 = (byte *)0x4;
  }
  uVar4 = *(uint *)(param_2 + 0x10);
  if ((uVar4 & 0x18000000) != 0) {
    if ((uVar4 & 0x10000000) == 0) {
      if (pbVar8 < (byte *)0x20) {
        if (pbVar8 == (byte *)0x0) {
          uVar11 = 0;
        }
        else {
          if ((byte *)0x3 < pbVar8) {
            uVar7 = (uint)pbVar8 & 0x1c;
            pbVar6 = (byte *)(ulonglong)uVar7;
            cVar24 = DAT_001844d0;
            auVar15[0] = -(cVar24 < (char)*(undefined2 *)pcVar9);
            cVar26 = DAT_001844d0._1_1_;
            cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)pcVar9 >> 8));
            cVar27 = DAT_001844d0._2_1_;
            cVar28 = DAT_001844d0._3_1_;
            cVar29 = DAT_001844d0._4_1_;
            cVar30 = DAT_001844d0._5_1_;
            cVar31 = DAT_001844d0._6_1_;
            cVar32 = DAT_001844d0._7_1_;
            cVar19 = -(cVar32 < '\0');
            auVar15._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                        -(cVar31 < '\0')),
                                                               -(cVar31 < '\0')),-(cVar30 < '\0')),
                                             -(cVar30 < '\0')),-(cVar29 < '\0')),
                           CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
            auVar15[7] = -(cVar28 < '\0');
            auVar15[6] = -(cVar28 < '\0');
            auVar15[5] = -(cVar27 < '\0');
            auVar15[4] = -(cVar27 < '\0');
            auVar15[3] = cVar18;
            auVar15[2] = cVar18;
            auVar15[1] = auVar15[0];
            auVar15 = pshuflw(auVar15,auVar15,0xd4);
            auVar16._12_4_ = auVar15._12_4_;
            auVar16._0_8_ = auVar15._0_8_;
            auVar16._8_4_ = auVar15._4_4_;
            auVar17 = auVar16 & _DAT_00184640;
            auVar21[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 2));
            cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 2) >> 8));
            cVar19 = -(cVar32 < '\0');
            auVar21._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                        -(cVar31 < '\0')),
                                                               -(cVar31 < '\0')),-(cVar30 < '\0')),
                                             -(cVar30 < '\0')),-(cVar29 < '\0')),
                           CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
            auVar21[7] = -(cVar28 < '\0');
            auVar21[6] = -(cVar28 < '\0');
            auVar21[5] = -(cVar27 < '\0');
            auVar21[4] = -(cVar27 < '\0');
            auVar21[3] = cVar18;
            auVar21[2] = cVar18;
            auVar21[1] = auVar21[0];
            auVar15 = pshuflw(auVar21,auVar21,0xd4);
            auVar22._12_4_ = auVar15._12_4_;
            auVar22._0_8_ = auVar15._0_8_;
            auVar22._8_4_ = auVar15._4_4_;
            auVar23 = auVar22 & _DAT_00184640;
            if (pbVar6 != (byte *)0x4) {
              auVar33[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 4));
              cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 4) >> 8));
              cVar19 = -(cVar32 < '\0');
              auVar33._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                          -(cVar31 < '\0')),
                                                                 -(cVar31 < '\0')),-(cVar30 < '\0'))
                                               ,-(cVar30 < '\0')),-(cVar29 < '\0')),
                             CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
              auVar33[7] = -(cVar28 < '\0');
              auVar33[6] = -(cVar28 < '\0');
              auVar33[5] = -(cVar27 < '\0');
              auVar33[4] = -(cVar27 < '\0');
              auVar33[3] = cVar18;
              auVar33[2] = cVar18;
              auVar33[1] = auVar33[0];
              auVar15 = pshuflw(auVar33,auVar33,0xd4);
              auVar34._12_4_ = auVar15._12_4_;
              auVar34._0_8_ = auVar15._0_8_;
              auVar34._8_4_ = auVar15._4_4_;
              auVar45[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 6));
              cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 6) >> 8));
              cVar19 = -(cVar32 < '\0');
              auVar45._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                          -(cVar31 < '\0')),
                                                                 -(cVar31 < '\0')),-(cVar30 < '\0'))
                                               ,-(cVar30 < '\0')),-(cVar29 < '\0')),
                             CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
              auVar45[7] = -(cVar28 < '\0');
              auVar45[6] = -(cVar28 < '\0');
              auVar45[5] = -(cVar27 < '\0');
              auVar45[4] = -(cVar27 < '\0');
              auVar45[3] = cVar18;
              auVar45[2] = cVar18;
              auVar45[1] = auVar45[0];
              auVar15 = pshuflw(auVar45,auVar45,0xd4);
              auVar46._12_4_ = auVar15._12_4_;
              auVar46._0_8_ = auVar15._0_8_;
              auVar46._8_4_ = auVar15._4_4_;
              lVar20 = auVar17._8_8_;
              auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar34 & _DAT_00184640,0);
              auVar17._8_8_ = lVar20 + SUB168(auVar34 & _DAT_00184640,8);
              lVar20 = auVar23._8_8_;
              auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar46 & _DAT_00184640,0);
              auVar23._8_8_ = lVar20 + SUB168(auVar46 & _DAT_00184640,8);
              if (uVar7 != 8) {
                auVar35[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 8));
                cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 8) >> 8));
                cVar19 = -(cVar32 < '\0');
                auVar35._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                            -(cVar31 < '\0')),
                                                                   -(cVar31 < '\0')),
                                                          -(cVar30 < '\0')),-(cVar30 < '\0')),
                                        -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
                auVar35[7] = -(cVar28 < '\0');
                auVar35[6] = -(cVar28 < '\0');
                auVar35[5] = -(cVar27 < '\0');
                auVar35[4] = -(cVar27 < '\0');
                auVar35[3] = cVar18;
                auVar35[2] = cVar18;
                auVar35[1] = auVar35[0];
                auVar15 = pshuflw(auVar35,auVar35,0xd4);
                auVar36._12_4_ = auVar15._12_4_;
                auVar36._0_8_ = auVar15._0_8_;
                auVar36._8_4_ = auVar15._4_4_;
                auVar47[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 10));
                cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 10) >> 8));
                cVar19 = -(cVar32 < '\0');
                auVar47._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19),
                                                                            -(cVar31 < '\0')),
                                                                   -(cVar31 < '\0')),
                                                          -(cVar30 < '\0')),-(cVar30 < '\0')),
                                        -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8);
                auVar47[7] = -(cVar28 < '\0');
                auVar47[6] = -(cVar28 < '\0');
                auVar47[5] = -(cVar27 < '\0');
                auVar47[4] = -(cVar27 < '\0');
                auVar47[3] = cVar18;
                auVar47[2] = cVar18;
                auVar47[1] = auVar47[0];
                auVar15 = pshuflw(auVar47,auVar47,0xd4);
                auVar48._12_4_ = auVar15._12_4_;
                auVar48._0_8_ = auVar15._0_8_;
                auVar48._8_4_ = auVar15._4_4_;
                auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar36 & _DAT_00184640,0);
                auVar17._8_8_ = auVar17._8_8_ + SUB168(auVar36 & _DAT_00184640,8);
                auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar48 & _DAT_00184640,0);
                auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar48 & _DAT_00184640,8);
                if (uVar7 != 0xc) {
                  auVar37[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0xc));
                  cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0xc) >> 8));
                  cVar19 = -(cVar32 < '\0');
                  auVar37._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19
                                                                                      ),
                                                                              -(cVar31 < '\0')),
                                                                     -(cVar31 < '\0')),
                                                            -(cVar30 < '\0')),-(cVar30 < '\0')),
                                          -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8)
                  ;
                  auVar37[7] = -(cVar28 < '\0');
                  auVar37[6] = -(cVar28 < '\0');
                  auVar37[5] = -(cVar27 < '\0');
                  auVar37[4] = -(cVar27 < '\0');
                  auVar37[3] = cVar18;
                  auVar37[2] = cVar18;
                  auVar37[1] = auVar37[0];
                  auVar15 = pshuflw(auVar37,auVar37,0xd4);
                  auVar38._12_4_ = auVar15._12_4_;
                  auVar38._0_8_ = auVar15._0_8_;
                  auVar38._8_4_ = auVar15._4_4_;
                  auVar49[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0xe));
                  cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0xe) >> 8));
                  cVar19 = -(cVar32 < '\0');
                  auVar49._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,cVar19
                                                                                      ),
                                                                              -(cVar31 < '\0')),
                                                                     -(cVar31 < '\0')),
                                                            -(cVar30 < '\0')),-(cVar30 < '\0')),
                                          -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >> 8)
                  ;
                  auVar49[7] = -(cVar28 < '\0');
                  auVar49[6] = -(cVar28 < '\0');
                  auVar49[5] = -(cVar27 < '\0');
                  auVar49[4] = -(cVar27 < '\0');
                  auVar49[3] = cVar18;
                  auVar49[2] = cVar18;
                  auVar49[1] = auVar49[0];
                  auVar15 = pshuflw(auVar49,auVar49,0xd4);
                  auVar50._12_4_ = auVar15._12_4_;
                  auVar50._0_8_ = auVar15._0_8_;
                  auVar50._8_4_ = auVar15._4_4_;
                  auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar38 & _DAT_00184640,0);
                  auVar17._8_8_ = auVar17._8_8_ + SUB168(auVar38 & _DAT_00184640,8);
                  auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar50 & _DAT_00184640,0);
                  auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar50 & _DAT_00184640,8);
                  if (uVar7 != 0x10) {
                    auVar39[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x10));
                    cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x10) >> 8));
                    cVar19 = -(cVar32 < '\0');
                    auVar39._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                            -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >>
                         8);
                    auVar39[7] = -(cVar28 < '\0');
                    auVar39[6] = -(cVar28 < '\0');
                    auVar39[5] = -(cVar27 < '\0');
                    auVar39[4] = -(cVar27 < '\0');
                    auVar39[3] = cVar18;
                    auVar39[2] = cVar18;
                    auVar39[1] = auVar39[0];
                    auVar15 = pshuflw(auVar39,auVar39,0xd4);
                    auVar40._12_4_ = auVar15._12_4_;
                    auVar40._0_8_ = auVar15._0_8_;
                    auVar40._8_4_ = auVar15._4_4_;
                    auVar51[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x12));
                    cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x12) >> 8));
                    cVar19 = -(cVar32 < '\0');
                    auVar51._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                            -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19)) >>
                         8);
                    auVar51[7] = -(cVar28 < '\0');
                    auVar51[6] = -(cVar28 < '\0');
                    auVar51[5] = -(cVar27 < '\0');
                    auVar51[4] = -(cVar27 < '\0');
                    auVar51[3] = cVar18;
                    auVar51[2] = cVar18;
                    auVar51[1] = auVar51[0];
                    auVar15 = pshuflw(auVar51,auVar51,0xd4);
                    auVar52._12_4_ = auVar15._12_4_;
                    auVar52._0_8_ = auVar15._0_8_;
                    auVar52._8_4_ = auVar15._4_4_;
                    auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar40 & _DAT_00184640,0);
                    auVar17._8_8_ = auVar17._8_8_ + SUB168(auVar40 & _DAT_00184640,8);
                    auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar52 & _DAT_00184640,0);
                    auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar52 & _DAT_00184640,8);
                    if (uVar7 != 0x14) {
                      auVar41[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x14));
                      cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x14) >> 8));
                      cVar19 = -(cVar32 < '\0');
                      auVar41._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                              -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19))
                           >> 8);
                      auVar41[7] = -(cVar28 < '\0');
                      auVar41[6] = -(cVar28 < '\0');
                      auVar41[5] = -(cVar27 < '\0');
                      auVar41[4] = -(cVar27 < '\0');
                      auVar41[3] = cVar18;
                      auVar41[2] = cVar18;
                      auVar41[1] = auVar41[0];
                      auVar15 = pshuflw(auVar41,auVar41,0xd4);
                      auVar42._12_4_ = auVar15._12_4_;
                      auVar42._0_8_ = auVar15._0_8_;
                      auVar42._8_4_ = auVar15._4_4_;
                      auVar53[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x16));
                      cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x16) >> 8));
                      cVar19 = -(cVar32 < '\0');
                      auVar53._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                              -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19))
                           >> 8);
                      auVar53[7] = -(cVar28 < '\0');
                      auVar53[6] = -(cVar28 < '\0');
                      auVar53[5] = -(cVar27 < '\0');
                      auVar53[4] = -(cVar27 < '\0');
                      auVar53[3] = cVar18;
                      auVar53[2] = cVar18;
                      auVar53[1] = auVar53[0];
                      auVar15 = pshuflw(auVar53,auVar53,0xd4);
                      auVar54._12_4_ = auVar15._12_4_;
                      auVar54._0_8_ = auVar15._0_8_;
                      auVar54._8_4_ = auVar15._4_4_;
                      auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar42 & _DAT_00184640,0);
                      auVar17._8_8_ = auVar17._8_8_ + SUB168(auVar42 & _DAT_00184640,8);
                      auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar54 & _DAT_00184640,0);
                      auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar54 & _DAT_00184640,8);
                      if (uVar7 != 0x18) {
                        auVar43[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x18));
                        cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x18) >> 8));
                        cVar19 = -(cVar32 < '\0');
                        auVar43._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19))
                             >> 8);
                        auVar43[7] = -(cVar28 < '\0');
                        auVar43[6] = -(cVar28 < '\0');
                        auVar43[5] = -(cVar27 < '\0');
                        auVar43[4] = -(cVar27 < '\0');
                        auVar43[3] = cVar18;
                        auVar43[2] = cVar18;
                        auVar43[1] = auVar43[0];
                        auVar15 = pshuflw(auVar43,auVar43,0xd4);
                        auVar44._12_4_ = auVar15._12_4_;
                        auVar44._0_8_ = auVar15._0_8_;
                        auVar44._8_4_ = auVar15._4_4_;
                        auVar55[0] = -(cVar24 < (char)*(undefined2 *)(pcVar9 + 0x1a));
                        cVar18 = -(cVar26 < (char)((ushort)*(undefined2 *)(pcVar9 + 0x1a) >> 8));
                        cVar19 = -(cVar32 < '\0');
                        auVar55._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar19,
                                                  cVar19),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar19))
                             >> 8);
                        auVar55[7] = -(cVar28 < '\0');
                        auVar55[6] = -(cVar28 < '\0');
                        auVar55[5] = -(cVar27 < '\0');
                        auVar55[4] = -(cVar27 < '\0');
                        auVar55[3] = cVar18;
                        auVar55[2] = cVar18;
                        auVar55[1] = auVar55[0];
                        auVar15 = pshuflw(_DAT_001844d0,auVar55,0xd4);
                        auVar25._12_4_ = auVar15._12_4_;
                        auVar25._0_8_ = auVar15._0_8_;
                        auVar25._8_4_ = auVar15._4_4_;
                        auVar17._0_8_ = auVar17._0_8_ + SUB168(auVar44 & _DAT_00184640,0);
                        auVar17._8_8_ = auVar17._8_8_ + SUB168(auVar44 & _DAT_00184640,8);
                        auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar25 & _DAT_00184640,0);
                        auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar25 & _DAT_00184640,8);
                      }
                    }
                  }
                }
              }
            }
            uVar11 = auVar17._8_8_ + auVar23._8_8_ + auVar17._0_8_ + auVar23._0_8_;
            goto LAB_00778ca0;
          }
          pbVar6 = (byte *)0x0;
          uVar11 = 0;
          do {
            uVar11 = uVar11 + (-0x41 < pcVar9[(longlong)pbVar6]);
            pbVar6 = pbVar6 + 1;
LAB_00778ca0:
          } while (pbVar8 != pbVar6);
        }
      }
      else {
        uVar11 = (*(code *)PTR_do_count_chars_00799d00)();
      }
    }
    else {
      uVar11 = (ulonglong)*(ushort *)(param_2 + 0x16);
      if (uVar11 == 0) {
        pbVar8 = (byte *)0x0;
        uVar5 = 0;
      }
      else {
        pbVar6 = (byte *)(pcVar9 + (longlong)pbVar8);
        pbVar8 = (byte *)0x0;
        uVar5 = uVar11;
        do {
          if ((byte *)pcVar9 == pbVar6) goto LAB_00778a5f;
          bVar1 = *pcVar9;
          if ((char)bVar1 < '\0') {
            if (bVar1 < 0xe0) {
              pbVar10 = (byte *)(pcVar9 + 2);
            }
            else {
              pbVar10 = (byte *)(pcVar9 + (4 - (ulonglong)(bVar1 < 0xf0)));
            }
          }
          else {
            pbVar10 = (byte *)(pcVar9 + 1);
          }
          pbVar8 = pbVar10 + ((longlong)pbVar8 - (longlong)pcVar9);
          uVar5 = uVar5 - 1;
          pcVar9 = (char *)pbVar10;
        } while (uVar5 != 0);
        uVar5 = 0;
      }
LAB_00778a5f:
      uVar11 = uVar11 - uVar5;
    }
    uVar2 = *(ushort *)(param_2 + 0x14);
    if (uVar11 < uVar2) {
      uVar7 = (uint)uVar2 - (int)uVar11;
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
      lVar20 = *(longlong *)(param_2 + 8);
      uVar14 = uVar4 + 1;
      while (uVar12 = (short)uVar14 - 1, uVar14 = (uint)uVar12, uVar12 != 0) {
        cVar18 = (**(code **)(lVar20 + 0x20))();
        if (cVar18 != '\0') {
          return true;
        }
      }
      cVar18 = (**(code **)(lVar20 + 0x18))();
      if (cVar18 != '\0') {
        return true;
      }
      uVar12 = (short)uVar7 - (short)uVar4;
      uVar13 = 0xffff;
      do {
        if ((ushort)((((short)uVar4 + (short)uVar11) - uVar2) + uVar13) == -1) {
          uVar13 = uVar12;
          break;
        }
        cVar18 = (**(code **)(lVar20 + 0x20))();
        uVar13 = uVar13 + 1;
      } while (cVar18 == '\0');
      return uVar13 < uVar12;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_2 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00778d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar8);
  return uVar3;
}


