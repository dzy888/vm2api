// 000ad6e0 print_type

/* WARNING: Switch with 1 destination removed at 0x000ad754 */
/* WARNING: Switch with 1 destination removed at 0x000be29c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type */

bool __rustcall <rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type(longlong *param_1)

{
  byte bVar1;
  ushort uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  bool bVar15;
  ushort uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
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
  undefined1 auVar56 [16];
  char local_38;
  undefined1 local_37;
  uint uStack_34;
  longlong local_30;
  
  lVar11 = *param_1;
  if (lVar11 == 0) {
    lVar11 = param_1[4];
    if (lVar11 != 0) {
      auVar56._8_8_ = 1;
      auVar56._0_8_ = &DAT_00016a3d;
LAB_000ad748:
      pbVar12 = auVar56._8_8_;
      pbVar10 = auVar56._0_8_;
      uVar6 = *(uint *)(lVar11 + 0x10);
      if ((uVar6 & 0x18000000) != 0) {
        if ((uVar6 & 0x10000000) == 0) {
          if (pbVar12 < (byte *)0x20) {
            if (pbVar12 == (byte *)0x0) {
              uVar14 = 0;
            }
            else {
              if ((byte *)0x3 < pbVar12) {
                uVar7 = auVar56._8_4_ & 0x1c;
                pbVar9 = (byte *)(ulonglong)uVar7;
                cVar24 = DAT_00009130;
                auVar17[0] = -(cVar24 < (char)*(undefined2 *)pbVar10);
                cVar26 = DAT_00009130._1_1_;
                cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)pbVar10 >> 8));
                cVar27 = DAT_00009130._2_1_;
                cVar28 = DAT_00009130._3_1_;
                cVar29 = DAT_00009130._4_1_;
                cVar30 = DAT_00009130._5_1_;
                cVar31 = DAT_00009130._6_1_;
                cVar32 = DAT_00009130._7_1_;
                cVar4 = -(cVar32 < '\0');
                auVar17._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4),
                                                                            -(cVar31 < '\0')),
                                                                   -(cVar31 < '\0')),
                                                          -(cVar30 < '\0')),-(cVar30 < '\0')),
                                        -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8);
                auVar17[7] = -(cVar28 < '\0');
                auVar17[6] = -(cVar28 < '\0');
                auVar17[5] = -(cVar27 < '\0');
                auVar17[4] = -(cVar27 < '\0');
                auVar17[3] = cVar3;
                auVar17[2] = cVar3;
                auVar17[1] = auVar17[0];
                auVar56 = pshuflw(auVar17,auVar17,0xd4);
                auVar18._12_4_ = auVar56._12_4_;
                auVar18._0_8_ = auVar56._0_8_;
                auVar18._8_4_ = auVar56._4_4_;
                auVar19 = auVar18 & _DAT_00009160;
                auVar21[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 2));
                cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 2) >> 8));
                cVar4 = -(cVar32 < '\0');
                auVar21._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4),
                                                                            -(cVar31 < '\0')),
                                                                   -(cVar31 < '\0')),
                                                          -(cVar30 < '\0')),-(cVar30 < '\0')),
                                        -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8);
                auVar21[7] = -(cVar28 < '\0');
                auVar21[6] = -(cVar28 < '\0');
                auVar21[5] = -(cVar27 < '\0');
                auVar21[4] = -(cVar27 < '\0');
                auVar21[3] = cVar3;
                auVar21[2] = cVar3;
                auVar21[1] = auVar21[0];
                auVar56 = pshuflw(auVar21,auVar21,0xd4);
                auVar22._12_4_ = auVar56._12_4_;
                auVar22._0_8_ = auVar56._0_8_;
                auVar22._8_4_ = auVar56._4_4_;
                auVar23 = auVar22 & _DAT_00009160;
                if (pbVar9 != (byte *)0x4) {
                  auVar33[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 4));
                  cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 4) >> 8));
                  cVar4 = -(cVar32 < '\0');
                  auVar33._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4),
                                                                              -(cVar31 < '\0')),
                                                                     -(cVar31 < '\0')),
                                                            -(cVar30 < '\0')),-(cVar30 < '\0')),
                                          -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8);
                  auVar33[7] = -(cVar28 < '\0');
                  auVar33[6] = -(cVar28 < '\0');
                  auVar33[5] = -(cVar27 < '\0');
                  auVar33[4] = -(cVar27 < '\0');
                  auVar33[3] = cVar3;
                  auVar33[2] = cVar3;
                  auVar33[1] = auVar33[0];
                  auVar56 = pshuflw(auVar33,auVar33,0xd4);
                  auVar34._12_4_ = auVar56._12_4_;
                  auVar34._0_8_ = auVar56._0_8_;
                  auVar34._8_4_ = auVar56._4_4_;
                  auVar45[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 6));
                  cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 6) >> 8));
                  cVar4 = -(cVar32 < '\0');
                  auVar45._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4),
                                                                              -(cVar31 < '\0')),
                                                                     -(cVar31 < '\0')),
                                                            -(cVar30 < '\0')),-(cVar30 < '\0')),
                                          -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8);
                  auVar45[7] = -(cVar28 < '\0');
                  auVar45[6] = -(cVar28 < '\0');
                  auVar45[5] = -(cVar27 < '\0');
                  auVar45[4] = -(cVar27 < '\0');
                  auVar45[3] = cVar3;
                  auVar45[2] = cVar3;
                  auVar45[1] = auVar45[0];
                  auVar56 = pshuflw(auVar45,auVar45,0xd4);
                  auVar46._12_4_ = auVar56._12_4_;
                  auVar46._0_8_ = auVar56._0_8_;
                  auVar46._8_4_ = auVar56._4_4_;
                  lVar20 = auVar19._8_8_;
                  auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar34 & _DAT_00009160,0);
                  auVar19._8_8_ = lVar20 + SUB168(auVar34 & _DAT_00009160,8);
                  lVar20 = auVar23._8_8_;
                  auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar46 & _DAT_00009160,0);
                  auVar23._8_8_ = lVar20 + SUB168(auVar46 & _DAT_00009160,8);
                  if (uVar7 != 8) {
                    auVar35[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 8));
                    cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 8) >> 8));
                    cVar4 = -(cVar32 < '\0');
                    auVar35._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4
                                                                                        ),
                                                                                -(cVar31 < '\0')),
                                                                       -(cVar31 < '\0')),
                                                              -(cVar30 < '\0')),-(cVar30 < '\0')),
                                            -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8
                         );
                    auVar35[7] = -(cVar28 < '\0');
                    auVar35[6] = -(cVar28 < '\0');
                    auVar35[5] = -(cVar27 < '\0');
                    auVar35[4] = -(cVar27 < '\0');
                    auVar35[3] = cVar3;
                    auVar35[2] = cVar3;
                    auVar35[1] = auVar35[0];
                    auVar56 = pshuflw(auVar35,auVar35,0xd4);
                    auVar36._12_4_ = auVar56._12_4_;
                    auVar36._0_8_ = auVar56._0_8_;
                    auVar36._8_4_ = auVar56._4_4_;
                    auVar47[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 10));
                    cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 10) >> 8));
                    cVar4 = -(cVar32 < '\0');
                    auVar47._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,cVar4
                                                                                        ),
                                                                                -(cVar31 < '\0')),
                                                                       -(cVar31 < '\0')),
                                                              -(cVar30 < '\0')),-(cVar30 < '\0')),
                                            -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >> 8
                         );
                    auVar47[7] = -(cVar28 < '\0');
                    auVar47[6] = -(cVar28 < '\0');
                    auVar47[5] = -(cVar27 < '\0');
                    auVar47[4] = -(cVar27 < '\0');
                    auVar47[3] = cVar3;
                    auVar47[2] = cVar3;
                    auVar47[1] = auVar47[0];
                    auVar56 = pshuflw(auVar47,auVar47,0xd4);
                    auVar48._12_4_ = auVar56._12_4_;
                    auVar48._0_8_ = auVar56._0_8_;
                    auVar48._8_4_ = auVar56._4_4_;
                    auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar36 & _DAT_00009160,0);
                    auVar19._8_8_ = auVar19._8_8_ + SUB168(auVar36 & _DAT_00009160,8);
                    auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar48 & _DAT_00009160,0);
                    auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar48 & _DAT_00009160,8);
                    if (uVar7 != 0xc) {
                      auVar37[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0xc));
                      cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0xc) >> 8));
                      cVar4 = -(cVar32 < '\0');
                      auVar37._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,
                                                  cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                              -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >>
                           8);
                      auVar37[7] = -(cVar28 < '\0');
                      auVar37[6] = -(cVar28 < '\0');
                      auVar37[5] = -(cVar27 < '\0');
                      auVar37[4] = -(cVar27 < '\0');
                      auVar37[3] = cVar3;
                      auVar37[2] = cVar3;
                      auVar37[1] = auVar37[0];
                      auVar56 = pshuflw(auVar37,auVar37,0xd4);
                      auVar38._12_4_ = auVar56._12_4_;
                      auVar38._0_8_ = auVar56._0_8_;
                      auVar38._8_4_ = auVar56._4_4_;
                      auVar49[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0xe));
                      cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0xe) >> 8));
                      cVar4 = -(cVar32 < '\0');
                      auVar49._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,
                                                  cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                              -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)) >>
                           8);
                      auVar49[7] = -(cVar28 < '\0');
                      auVar49[6] = -(cVar28 < '\0');
                      auVar49[5] = -(cVar27 < '\0');
                      auVar49[4] = -(cVar27 < '\0');
                      auVar49[3] = cVar3;
                      auVar49[2] = cVar3;
                      auVar49[1] = auVar49[0];
                      auVar56 = pshuflw(auVar49,auVar49,0xd4);
                      auVar50._12_4_ = auVar56._12_4_;
                      auVar50._0_8_ = auVar56._0_8_;
                      auVar50._8_4_ = auVar56._4_4_;
                      auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar38 & _DAT_00009160,0);
                      auVar19._8_8_ = auVar19._8_8_ + SUB168(auVar38 & _DAT_00009160,8);
                      auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar50 & _DAT_00009160,0);
                      auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar50 & _DAT_00009160,8);
                      if (uVar7 != 0x10) {
                        auVar39[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x10));
                        cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x10) >> 8));
                        cVar4 = -(cVar32 < '\0');
                        auVar39._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,
                                                  cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4))
                             >> 8);
                        auVar39[7] = -(cVar28 < '\0');
                        auVar39[6] = -(cVar28 < '\0');
                        auVar39[5] = -(cVar27 < '\0');
                        auVar39[4] = -(cVar27 < '\0');
                        auVar39[3] = cVar3;
                        auVar39[2] = cVar3;
                        auVar39[1] = auVar39[0];
                        auVar56 = pshuflw(auVar39,auVar39,0xd4);
                        auVar40._12_4_ = auVar56._12_4_;
                        auVar40._0_8_ = auVar56._0_8_;
                        auVar40._8_4_ = auVar56._4_4_;
                        auVar51[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x12));
                        cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x12) >> 8));
                        cVar4 = -(cVar32 < '\0');
                        auVar51._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4,
                                                  cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4))
                             >> 8);
                        auVar51[7] = -(cVar28 < '\0');
                        auVar51[6] = -(cVar28 < '\0');
                        auVar51[5] = -(cVar27 < '\0');
                        auVar51[4] = -(cVar27 < '\0');
                        auVar51[3] = cVar3;
                        auVar51[2] = cVar3;
                        auVar51[1] = auVar51[0];
                        auVar56 = pshuflw(auVar51,auVar51,0xd4);
                        auVar52._12_4_ = auVar56._12_4_;
                        auVar52._0_8_ = auVar56._0_8_;
                        auVar52._8_4_ = auVar56._4_4_;
                        auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar40 & _DAT_00009160,0);
                        auVar19._8_8_ = auVar19._8_8_ + SUB168(auVar40 & _DAT_00009160,8);
                        auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar52 & _DAT_00009160,0);
                        auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar52 & _DAT_00009160,8);
                        if (uVar7 != 0x14) {
                          auVar41[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x14));
                          cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x14) >> 8));
                          cVar4 = -(cVar32 < '\0');
                          auVar41._8_8_ =
                               (undefined8)
                               (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4
                                                  ,cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)
                                        ) >> 8);
                          auVar41[7] = -(cVar28 < '\0');
                          auVar41[6] = -(cVar28 < '\0');
                          auVar41[5] = -(cVar27 < '\0');
                          auVar41[4] = -(cVar27 < '\0');
                          auVar41[3] = cVar3;
                          auVar41[2] = cVar3;
                          auVar41[1] = auVar41[0];
                          auVar56 = pshuflw(auVar41,auVar41,0xd4);
                          auVar42._12_4_ = auVar56._12_4_;
                          auVar42._0_8_ = auVar56._0_8_;
                          auVar42._8_4_ = auVar56._4_4_;
                          auVar53[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x16));
                          cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x16) >> 8));
                          cVar4 = -(cVar32 < '\0');
                          auVar53._8_8_ =
                               (undefined8)
                               (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar4
                                                  ,cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)
                                        ) >> 8);
                          auVar53[7] = -(cVar28 < '\0');
                          auVar53[6] = -(cVar28 < '\0');
                          auVar53[5] = -(cVar27 < '\0');
                          auVar53[4] = -(cVar27 < '\0');
                          auVar53[3] = cVar3;
                          auVar53[2] = cVar3;
                          auVar53[1] = auVar53[0];
                          auVar56 = pshuflw(auVar53,auVar53,0xd4);
                          auVar54._12_4_ = auVar56._12_4_;
                          auVar54._0_8_ = auVar56._0_8_;
                          auVar54._8_4_ = auVar56._4_4_;
                          auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar42 & _DAT_00009160,0);
                          auVar19._8_8_ = auVar19._8_8_ + SUB168(auVar42 & _DAT_00009160,8);
                          auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar54 & _DAT_00009160,0);
                          auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar54 & _DAT_00009160,8);
                          if (uVar7 != 0x18) {
                            auVar43[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x18));
                            cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x18) >> 8))
                            ;
                            cVar4 = -(cVar32 < '\0');
                            auVar43._8_8_ =
                                 (undefined8)
                                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(
                                                  cVar4,cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)
                                          ) >> 8);
                            auVar43[7] = -(cVar28 < '\0');
                            auVar43[6] = -(cVar28 < '\0');
                            auVar43[5] = -(cVar27 < '\0');
                            auVar43[4] = -(cVar27 < '\0');
                            auVar43[3] = cVar3;
                            auVar43[2] = cVar3;
                            auVar43[1] = auVar43[0];
                            auVar56 = pshuflw(auVar43,auVar43,0xd4);
                            auVar44._12_4_ = auVar56._12_4_;
                            auVar44._0_8_ = auVar56._0_8_;
                            auVar44._8_4_ = auVar56._4_4_;
                            auVar55[0] = -(cVar24 < (char)*(undefined2 *)(pbVar10 + 0x1a));
                            cVar3 = -(cVar26 < (char)((ushort)*(undefined2 *)(pbVar10 + 0x1a) >> 8))
                            ;
                            cVar4 = -(cVar32 < '\0');
                            auVar55._8_8_ =
                                 (undefined8)
                                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(
                                                  cVar4,cVar4),-(cVar31 < '\0')),-(cVar31 < '\0')),
                                                  -(cVar30 < '\0')),-(cVar30 < '\0')),
                                                  -(cVar29 < '\0')),CONCAT11(-(cVar29 < '\0'),cVar4)
                                          ) >> 8);
                            auVar55[7] = -(cVar28 < '\0');
                            auVar55[6] = -(cVar28 < '\0');
                            auVar55[5] = -(cVar27 < '\0');
                            auVar55[4] = -(cVar27 < '\0');
                            auVar55[3] = cVar3;
                            auVar55[2] = cVar3;
                            auVar55[1] = auVar55[0];
                            auVar56 = pshuflw(_DAT_00009130,auVar55,0xd4);
                            auVar25._12_4_ = auVar56._12_4_;
                            auVar25._0_8_ = auVar56._0_8_;
                            auVar25._8_4_ = auVar56._4_4_;
                            auVar19._0_8_ = auVar19._0_8_ + SUB168(auVar44 & _DAT_00009160,0);
                            auVar19._8_8_ = auVar19._8_8_ + SUB168(auVar44 & _DAT_00009160,8);
                            auVar23._0_8_ = auVar23._0_8_ + SUB168(auVar25 & _DAT_00009160,0);
                            auVar23._8_8_ = auVar23._8_8_ + SUB168(auVar25 & _DAT_00009160,8);
                          }
                        }
                      }
                    }
                  }
                }
                uVar14 = auVar19._8_8_ + auVar23._8_8_ + auVar19._0_8_ + auVar23._0_8_;
                goto LAB_000b69c0;
              }
              pbVar9 = (byte *)0x0;
              uVar14 = 0;
              do {
                uVar14 = uVar14 + (-0x41 < (char)pbVar10[(longlong)pbVar9]);
                pbVar9 = pbVar9 + 1;
LAB_000b69c0:
              } while (pbVar12 != pbVar9);
            }
          }
          else {
            uVar14 = (*(code *)PTR_do_count_chars_000c46c8)();
          }
        }
        else {
          uVar14 = (ulonglong)*(ushort *)(lVar11 + 0x16);
          if (uVar14 == 0) {
            pbVar12 = (byte *)0x0;
            uVar8 = 0;
          }
          else {
            pbVar9 = pbVar10 + (longlong)pbVar12;
            pbVar12 = (byte *)0x0;
            uVar8 = uVar14;
            do {
              if (pbVar10 == pbVar9) goto LAB_000b677f;
              bVar1 = *pbVar10;
              if ((char)bVar1 < '\0') {
                if (bVar1 < 0xe0) {
                  pbVar13 = pbVar10 + 2;
                }
                else {
                  pbVar13 = pbVar10 + (4 - (ulonglong)(bVar1 < 0xf0));
                }
              }
              else {
                pbVar13 = pbVar10 + 1;
              }
              pbVar12 = pbVar13 + ((longlong)pbVar12 - (longlong)pbVar10);
              uVar8 = uVar8 - 1;
              pbVar10 = pbVar13;
            } while (uVar8 != 0);
            uVar8 = 0;
          }
LAB_000b677f:
          uVar14 = uVar14 - uVar8;
        }
        uVar2 = *(ushort *)(lVar11 + 0x14);
        if (uVar14 < uVar2) {
          uStack_34 = (uint)uVar2 - (int)uVar14;
          switch(uVar6 >> 0x1d & 3) {
          default:
            uVar6 = 0;
            break;
          case 1:
            uVar6 = uStack_34;
            break;
          case 2:
            uVar6 = (uStack_34 & 0xffff) >> 1;
          }
          lVar11 = *(longlong *)(lVar11 + 8);
          uVar7 = uVar6 + 1;
          while (uVar16 = (short)uVar7 - 1, uVar7 = (uint)uVar16, uVar16 != 0) {
            cVar3 = (**(code **)(lVar11 + 0x20))();
            if (cVar3 != '\0') {
              return true;
            }
          }
          cVar3 = (**(code **)(lVar11 + 0x18))();
          if (cVar3 != '\0') {
            return true;
          }
          uStack_34 = uStack_34 - uVar6;
          uVar7 = 0xffff;
          do {
            if ((ushort)((((short)uVar6 + (short)uVar14) - uVar2) + (short)uVar7) == -1) {
              uVar7 = uStack_34;
              break;
            }
            cVar3 = (**(code **)(lVar11 + 0x20))();
            uVar7 = uVar7 + 1;
          } while (cVar3 == '\0');
          return (ushort)uVar7 < (ushort)uStack_34;
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar11 + 8) + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000b6a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE,pbVar12);
      return (bool)uVar5;
    }
    goto LAB_000ad787;
  }
  uVar14 = param_1[2];
  if ((ulonglong)param_1[1] <= uVar14) {
    if (param_1[4] != 0) {
      cVar3 = (*(code *)PTR_fmt_000c3f58)();
LAB_000ad778:
      if (cVar3 != '\0') {
        return true;
      }
    }
LAB_000ad77c:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_000ad787;
  }
  cVar3 = *(char *)(lVar11 + uVar14);
  param_1[2] = uVar14 + 1;
  auVar56 = rustc_demangle[a2bba03bad1b7f1a]::v0::basic_type(cVar3);
  if (auVar56._0_8_ != 0) {
    lVar11 = param_1[4];
    if (lVar11 != 0) goto LAB_000ad748;
    goto LAB_000ad787;
  }
  uVar6 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar6;
  if (500 < uVar6) {
    if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
      return true;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_000ad787;
  }
  switch(cVar3) {
  case 'A':
  case 'S':
    if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
      return true;
    }
    cVar4 = print_type(param_1);
    if (cVar4 != '\0') {
      return true;
    }
    if (cVar3 == 'A') {
      if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
        return true;
      }
      cVar3 = print_const(param_1,1);
      if (cVar3 != '\0') {
        return true;
      }
    }
    lVar11 = param_1[4];
joined_r0x000ad9f9:
    if (lVar11 != 0) {
      cVar3 = (*(code *)PTR_fmt_000c3f58)();
      break;
    }
    goto LAB_000adbdd;
  case 'B':
    cVar3 = print_backref::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>(param_1);
    break;
  default:
    param_1[2] = uVar14;
    cVar3 = print_path(param_1,0);
    break;
  case 'D':
    if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
      return true;
    }
    cVar3 = in_binder::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::_closure_1_>
                      (param_1);
    if (cVar3 != '\0') {
      return true;
    }
    if (((*param_1 == 0) || (uVar14 = param_1[2], (ulonglong)param_1[1] <= uVar14)) ||
       (*(char *)(*param_1 + uVar14) != 'L')) {
      if (param_1[4] != 0) {
        cVar3 = (*(code *)PTR_fmt_000c3f58)();
        goto LAB_000ad778;
      }
      goto LAB_000ad77c;
    }
    param_1[2] = uVar14 + 1;
    <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::integer_62(&local_38,param_1);
    if (local_38 == '\0') {
      if (local_30 == 0) goto LAB_000adbdd;
      if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
        return true;
      }
      cVar3 = print_lifetime_from_index(param_1,local_30);
      break;
    }
LAB_000ad93e:
    if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(&DAT_00016a24), cVar3 != '\0')) {
      return true;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = local_37;
    goto LAB_000ad787;
  case 'F':
    cVar3 = in_binder::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type::_closure_0_>
                      (param_1);
    break;
  case 'O':
  case 'P':
    if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
      return true;
    }
    if (cVar3 == 'P') {
      lVar11 = param_1[4];
    }
    else {
LAB_000adba4:
      lVar11 = param_1[4];
    }
    if ((lVar11 != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
      return true;
    }
    goto LAB_000adbca;
  case 'Q':
  case 'R':
    if (param_1[4] == 0) {
LAB_000ad905:
      uVar14 = param_1[2];
      if ((uVar14 < (ulonglong)param_1[1]) && (*(char *)(lVar11 + uVar14) == 'L')) {
        param_1[2] = uVar14 + 1;
        <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::integer_62(&local_38,param_1);
        if (local_38 != '\0') goto LAB_000ad93e;
        if (local_30 != 0) {
          cVar4 = print_lifetime_from_index(param_1);
          if (cVar4 != '\0') {
            return true;
          }
          if ((param_1[4] != 0) && (cVar4 = (*(code *)PTR_fmt_000c3f58)(), cVar4 != '\0')) {
            return true;
          }
        }
      }
    }
    else {
      cVar4 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar4 != '\0') {
        return true;
      }
      lVar11 = *param_1;
      if (lVar11 != 0) goto LAB_000ad905;
    }
    if (cVar3 != 'R') goto LAB_000adba4;
LAB_000adbca:
    cVar3 = print_type(param_1);
    break;
  case 'T':
    if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
      return true;
    }
    auVar56 = print_sep_list::<<rustc_demangle[a2bba03bad1b7f1a]::v0::Printer>::print_type>(param_1)
    ;
    if ((auVar56._0_8_ & 1) != 0) {
      return true;
    }
    if (auVar56._8_8_ != 1) {
LAB_000ad9f2:
      lVar11 = param_1[4];
      goto joined_r0x000ad9f9;
    }
    if (param_1[4] != 0) {
      cVar3 = (*(code *)PTR_fmt_000c3f58)();
      if (cVar3 != '\0') {
        return true;
      }
      goto LAB_000ad9f2;
    }
    goto LAB_000adbdd;
  case 'W':
    cVar3 = print_type(param_1);
    if (cVar3 != '\0') {
      return true;
    }
    if ((param_1[4] != 0) && (cVar3 = (*(code *)PTR_fmt_000c3f58)(), cVar3 != '\0')) {
      return true;
    }
    cVar3 = print_pat(param_1);
  }
  bVar15 = true;
  if (cVar3 == '\0') {
LAB_000adbdd:
    if (*param_1 != 0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    }
LAB_000ad787:
    bVar15 = false;
  }
  return bVar15;
}


