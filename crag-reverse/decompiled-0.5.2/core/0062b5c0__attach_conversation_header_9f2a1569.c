// 0062b5c0 attach_conversation_header

/* craggemini_core[66f3c71560d70857]::server::attach_conversation_header */

void __rustcall
craggemini_core[66f3c71560d70857]::server::attach_conversation_header
          (undefined8 param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte *pbVar28;
  ulonglong uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  byte bVar47;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 local_89;
  longlong local_88 [2];
  undefined8 local_78;
  char local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  uint7 uStack_3f;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  longlong local_10;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    pbVar28 = param_2;
    do {
      if (pbVar28 == param_2 + param_3) {
        if (param_3 < 8) {
          bVar33 = false;
          pbVar28 = param_2;
          goto LAB_0062b820;
        }
        if (param_3 < 0x20) {
          uVar29 = 0;
          uVar30 = 0;
          goto LAB_0062b78d;
        }
        uVar29 = param_3 & 0xffffffffffffffe0;
        auVar35 = (undefined1  [16])0x0;
        uVar32 = 0;
        auVar36 = (undefined1  [16])0x0;
        do {
          pbVar28 = param_2 + uVar32;
          bVar2 = *pbVar28;
          bVar47 = pbVar28[1];
          bVar50 = pbVar28[2];
          bVar51 = pbVar28[3];
          bVar52 = pbVar28[4];
          bVar53 = pbVar28[5];
          bVar54 = pbVar28[6];
          bVar55 = pbVar28[7];
          bVar4 = pbVar28[8];
          bVar5 = pbVar28[9];
          bVar6 = pbVar28[10];
          bVar7 = pbVar28[0xb];
          bVar8 = pbVar28[0xc];
          bVar9 = pbVar28[0xd];
          bVar10 = pbVar28[0xe];
          bVar11 = pbVar28[0xf];
          pbVar28 = param_2 + uVar32 + 0x10;
          bVar12 = *pbVar28;
          bVar13 = pbVar28[1];
          bVar14 = pbVar28[2];
          bVar15 = pbVar28[3];
          bVar16 = pbVar28[4];
          bVar17 = pbVar28[5];
          bVar18 = pbVar28[6];
          bVar19 = pbVar28[7];
          bVar20 = pbVar28[8];
          bVar21 = pbVar28[9];
          bVar22 = pbVar28[10];
          bVar23 = pbVar28[0xb];
          bVar24 = pbVar28[0xc];
          bVar25 = pbVar28[0xd];
          bVar26 = pbVar28[0xe];
          bVar27 = pbVar28[0xf];
          auVar56[0] = -((byte)((DAT_00184700 < bVar2) * DAT_00184700 |
                               (DAT_00184700 >= bVar2) * bVar2) == bVar2);
          auVar56[1] = -((byte)((UNK_00184701 < bVar47) * UNK_00184701 |
                               (UNK_00184701 >= bVar47) * bVar47) == bVar47);
          auVar56[2] = -((byte)((UNK_00184702 < bVar50) * UNK_00184702 |
                               (UNK_00184702 >= bVar50) * bVar50) == bVar50);
          auVar56[3] = -((byte)((UNK_00184703 < bVar51) * UNK_00184703 |
                               (UNK_00184703 >= bVar51) * bVar51) == bVar51);
          auVar56[4] = -((byte)((UNK_00184704 < bVar52) * UNK_00184704 |
                               (UNK_00184704 >= bVar52) * bVar52) == bVar52);
          auVar56[5] = -((byte)((UNK_00184705 < bVar53) * UNK_00184705 |
                               (UNK_00184705 >= bVar53) * bVar53) == bVar53);
          auVar56[6] = -((byte)((UNK_00184706 < bVar54) * UNK_00184706 |
                               (UNK_00184706 >= bVar54) * bVar54) == bVar54);
          auVar56[7] = -((byte)((UNK_00184707 < bVar55) * UNK_00184707 |
                               (UNK_00184707 >= bVar55) * bVar55) == bVar55);
          auVar56[8] = -((byte)((UNK_00184708 < bVar4) * UNK_00184708 |
                               (UNK_00184708 >= bVar4) * bVar4) == bVar4);
          auVar56[9] = -((byte)((UNK_00184709 < bVar5) * UNK_00184709 |
                               (UNK_00184709 >= bVar5) * bVar5) == bVar5);
          auVar56[10] = -((byte)((UNK_0018470a < bVar6) * UNK_0018470a |
                                (UNK_0018470a >= bVar6) * bVar6) == bVar6);
          auVar56[0xb] = -((byte)((UNK_0018470b < bVar7) * UNK_0018470b |
                                 (UNK_0018470b >= bVar7) * bVar7) == bVar7);
          auVar56[0xc] = -((byte)((UNK_0018470c < bVar8) * UNK_0018470c |
                                 (UNK_0018470c >= bVar8) * bVar8) == bVar8);
          auVar56[0xd] = -((byte)((UNK_0018470d < bVar9) * UNK_0018470d |
                                 (UNK_0018470d >= bVar9) * bVar9) == bVar9);
          auVar56[0xe] = -((byte)((UNK_0018470e < bVar10) * UNK_0018470e |
                                 (UNK_0018470e >= bVar10) * bVar10) == bVar10);
          auVar56[0xf] = -((byte)((UNK_0018470f < bVar11) * UNK_0018470f |
                                 (UNK_0018470f >= bVar11) * bVar11) == bVar11);
          auVar59[0] = -((byte)((DAT_00184700 < bVar12) * DAT_00184700 |
                               (DAT_00184700 >= bVar12) * bVar12) == bVar12);
          auVar59[1] = -((byte)((UNK_00184701 < bVar13) * UNK_00184701 |
                               (UNK_00184701 >= bVar13) * bVar13) == bVar13);
          auVar59[2] = -((byte)((UNK_00184702 < bVar14) * UNK_00184702 |
                               (UNK_00184702 >= bVar14) * bVar14) == bVar14);
          auVar59[3] = -((byte)((UNK_00184703 < bVar15) * UNK_00184703 |
                               (UNK_00184703 >= bVar15) * bVar15) == bVar15);
          auVar59[4] = -((byte)((UNK_00184704 < bVar16) * UNK_00184704 |
                               (UNK_00184704 >= bVar16) * bVar16) == bVar16);
          auVar59[5] = -((byte)((UNK_00184705 < bVar17) * UNK_00184705 |
                               (UNK_00184705 >= bVar17) * bVar17) == bVar17);
          auVar59[6] = -((byte)((UNK_00184706 < bVar18) * UNK_00184706 |
                               (UNK_00184706 >= bVar18) * bVar18) == bVar18);
          auVar59[7] = -((byte)((UNK_00184707 < bVar19) * UNK_00184707 |
                               (UNK_00184707 >= bVar19) * bVar19) == bVar19);
          auVar59[8] = -((byte)((UNK_00184708 < bVar20) * UNK_00184708 |
                               (UNK_00184708 >= bVar20) * bVar20) == bVar20);
          auVar59[9] = -((byte)((UNK_00184709 < bVar21) * UNK_00184709 |
                               (UNK_00184709 >= bVar21) * bVar21) == bVar21);
          auVar59[10] = -((byte)((UNK_0018470a < bVar22) * UNK_0018470a |
                                (UNK_0018470a >= bVar22) * bVar22) == bVar22);
          auVar59[0xb] = -((byte)((UNK_0018470b < bVar23) * UNK_0018470b |
                                 (UNK_0018470b >= bVar23) * bVar23) == bVar23);
          auVar59[0xc] = -((byte)((UNK_0018470c < bVar24) * UNK_0018470c |
                                 (UNK_0018470c >= bVar24) * bVar24) == bVar24);
          auVar59[0xd] = -((byte)((UNK_0018470d < bVar25) * UNK_0018470d |
                                 (UNK_0018470d >= bVar25) * bVar25) == bVar25);
          auVar59[0xe] = -((byte)((UNK_0018470e < bVar26) * UNK_0018470e |
                                 (UNK_0018470e >= bVar26) * bVar26) == bVar26);
          auVar59[0xf] = -((byte)((UNK_0018470f < bVar27) * UNK_0018470f |
                                 (UNK_0018470f >= bVar27) * bVar27) == bVar27);
          auVar60[0] = -(bVar2 == DAT_00182620);
          auVar60[1] = -(bVar47 == UNK_00182621);
          auVar60[2] = -(bVar50 == UNK_00182622);
          auVar60[3] = -(bVar51 == UNK_00182623);
          auVar60[4] = -(bVar52 == UNK_00182624);
          auVar60[5] = -(bVar53 == UNK_00182625);
          auVar60[6] = -(bVar54 == UNK_00182626);
          auVar60[7] = -(bVar55 == UNK_00182627);
          auVar60[8] = -(bVar4 == UNK_00182628);
          auVar60[9] = -(bVar5 == UNK_00182629);
          auVar60[10] = -(bVar6 == UNK_0018262a);
          auVar60[0xb] = -(bVar7 == UNK_0018262b);
          auVar60[0xc] = -(bVar8 == UNK_0018262c);
          auVar60[0xd] = -(bVar9 == UNK_0018262d);
          auVar60[0xe] = -(bVar10 == UNK_0018262e);
          auVar60[0xf] = -(bVar11 == UNK_0018262f);
          auVar57[0] = -(bVar12 == DAT_00182620);
          auVar57[1] = -(bVar13 == UNK_00182621);
          auVar57[2] = -(bVar14 == UNK_00182622);
          auVar57[3] = -(bVar15 == UNK_00182623);
          auVar57[4] = -(bVar16 == UNK_00182624);
          auVar57[5] = -(bVar17 == UNK_00182625);
          auVar57[6] = -(bVar18 == UNK_00182626);
          auVar57[7] = -(bVar19 == UNK_00182627);
          auVar57[8] = -(bVar20 == UNK_00182628);
          auVar57[9] = -(bVar21 == UNK_00182629);
          auVar57[10] = -(bVar22 == UNK_0018262a);
          auVar57[0xb] = -(bVar23 == UNK_0018262b);
          auVar57[0xc] = -(bVar24 == UNK_0018262c);
          auVar57[0xd] = -(bVar25 == UNK_0018262d);
          auVar57[0xe] = -(bVar26 == UNK_0018262e);
          auVar57[0xf] = -(bVar27 == UNK_0018262f);
          auVar38[0] = -(bVar2 == DAT_00183900);
          auVar38[1] = -(bVar47 == UNK_00183901);
          auVar38[2] = -(bVar50 == UNK_00183902);
          auVar38[3] = -(bVar51 == UNK_00183903);
          auVar38[4] = -(bVar52 == UNK_00183904);
          auVar38[5] = -(bVar53 == UNK_00183905);
          auVar38[6] = -(bVar54 == UNK_00183906);
          auVar38[7] = -(bVar55 == UNK_00183907);
          auVar38[8] = -(bVar4 == UNK_00183908);
          auVar38[9] = -(bVar5 == UNK_00183909);
          auVar38[10] = -(bVar6 == UNK_0018390a);
          auVar38[0xb] = -(bVar7 == UNK_0018390b);
          auVar38[0xc] = -(bVar8 == UNK_0018390c);
          auVar38[0xd] = -(bVar9 == UNK_0018390d);
          auVar38[0xe] = -(bVar10 == UNK_0018390e);
          auVar38[0xf] = -(bVar11 == UNK_0018390f);
          auVar36 = auVar36 | ~auVar38 & (auVar60 | auVar56);
          auVar48[0] = -(bVar12 == DAT_00183900);
          auVar48[1] = -(bVar13 == UNK_00183901);
          auVar48[2] = -(bVar14 == UNK_00183902);
          auVar48[3] = -(bVar15 == UNK_00183903);
          auVar48[4] = -(bVar16 == UNK_00183904);
          auVar48[5] = -(bVar17 == UNK_00183905);
          auVar48[6] = -(bVar18 == UNK_00183906);
          auVar48[7] = -(bVar19 == UNK_00183907);
          auVar48[8] = -(bVar20 == UNK_00183908);
          auVar48[9] = -(bVar21 == UNK_00183909);
          auVar48[10] = -(bVar22 == UNK_0018390a);
          auVar48[0xb] = -(bVar23 == UNK_0018390b);
          auVar48[0xc] = -(bVar24 == UNK_0018390c);
          auVar48[0xd] = -(bVar25 == UNK_0018390d);
          auVar48[0xe] = -(bVar26 == UNK_0018390e);
          auVar48[0xf] = -(bVar27 == UNK_0018390f);
          auVar35 = auVar35 | ~auVar48 & (auVar57 | auVar59);
          uVar32 = uVar32 + 0x20;
        } while (uVar29 != uVar32);
        auVar35 = psllw(auVar35 | auVar36,7);
        bVar33 = (((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0)
                 || auVar35[0xf] < '\0';
        uVar30 = (uint)bVar33;
        if (param_3 != uVar29) {
          if ((param_3 & 0x18) == 0) {
            pbVar28 = param_2 + uVar29;
          }
          else {
LAB_0062b78d:
            uVar32 = param_3 & 0xfffffffffffffff8;
            pbVar28 = param_2 + uVar32;
            auVar35 = ZEXT416(uVar30);
            auVar36._8_4_ = 0xffffffff;
            auVar36._0_8_ = 0xffffffffffffffff;
            auVar36._12_4_ = 0xffffffff;
            do {
              uVar34 = *(undefined8 *)(param_2 + uVar29);
              bVar47 = (byte)uVar34;
              bVar50 = (byte)((ulonglong)uVar34 >> 8);
              bVar51 = (byte)((ulonglong)uVar34 >> 0x10);
              bVar52 = (byte)((ulonglong)uVar34 >> 0x18);
              bVar53 = (byte)((ulonglong)uVar34 >> 0x20);
              bVar54 = (byte)((ulonglong)uVar34 >> 0x28);
              bVar55 = (byte)((ulonglong)uVar34 >> 0x30);
              bVar2 = (byte)((ulonglong)uVar34 >> 0x38);
              auVar49[0] = -((byte)((bVar47 < (byte)s__001846a0[0]) * s__001846a0[0] |
                                   (bVar47 >= (byte)s__001846a0[0]) * bVar47) == bVar47);
              auVar49[1] = -((byte)((bVar50 < (byte)s__001846a0[1]) * s__001846a0[1] |
                                   (bVar50 >= (byte)s__001846a0[1]) * bVar50) == bVar50);
              auVar49[2] = -((byte)((bVar51 < (byte)s__001846a0[2]) * s__001846a0[2] |
                                   (bVar51 >= (byte)s__001846a0[2]) * bVar51) == bVar51);
              auVar49[3] = -((byte)((bVar52 < (byte)s__001846a0[3]) * s__001846a0[3] |
                                   (bVar52 >= (byte)s__001846a0[3]) * bVar52) == bVar52);
              auVar49[4] = -((byte)((bVar53 < (byte)s__001846a0[4]) * s__001846a0[4] |
                                   (bVar53 >= (byte)s__001846a0[4]) * bVar53) == bVar53);
              auVar49[5] = -((byte)((bVar54 < (byte)s__001846a0[5]) * s__001846a0[5] |
                                   (bVar54 >= (byte)s__001846a0[5]) * bVar54) == bVar54);
              auVar49[6] = -((byte)((bVar55 < (byte)s__001846a0[6]) * s__001846a0[6] |
                                   (bVar55 >= (byte)s__001846a0[6]) * bVar55) == bVar55);
              auVar49[7] = -((byte)((bVar2 < (byte)s__001846a0[7]) * s__001846a0[7] |
                                   (bVar2 >= (byte)s__001846a0[7]) * bVar2) == bVar2);
              auVar49[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
              auVar49[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
              auVar49[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
              auVar49[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
              auVar49[0xc] = -((char)((UNK_001846ac != '\0') * UNK_001846ac) == '\0');
              auVar49[0xd] = -((char)((UNK_001846ad != '\0') * UNK_001846ad) == '\0');
              auVar49[0xe] = -((char)((UNK_001846ae != '\0') * UNK_001846ae) == '\0');
              auVar49[0xf] = -((char)((UNK_001846af != '\0') * UNK_001846af) == '\0');
              auVar58[0] = -(bVar47 == DAT_00182630);
              auVar58[1] = -(bVar50 == UNK_00182631);
              auVar58[2] = -(bVar51 == UNK_00182632);
              auVar58[3] = -(bVar52 == UNK_00182633);
              auVar58[4] = -(bVar53 == UNK_00182634);
              auVar58[5] = -(bVar54 == UNK_00182635);
              auVar58[6] = -(bVar55 == UNK_00182636);
              auVar58[7] = -(bVar2 == UNK_00182637);
              auVar58[8] = -(UNK_00182638 == '\0');
              auVar58[9] = -(UNK_00182639 == '\0');
              auVar58[10] = -(UNK_0018263a == '\0');
              auVar58[0xb] = -(UNK_0018263b == '\0');
              auVar58[0xc] = -(UNK_0018263c == '\0');
              auVar58[0xd] = -(UNK_0018263d == '\0');
              auVar58[0xe] = -(UNK_0018263e == '\0');
              auVar58[0xf] = -(UNK_0018263f == '\0');
              auVar37[0] = -(bVar47 == s__00184760[0]);
              auVar37[1] = -(bVar50 == s__00184760[1]);
              auVar37[2] = -(bVar51 == s__00184760[2]);
              auVar37[3] = -(bVar52 == s__00184760[3]);
              auVar37[4] = -(bVar53 == s__00184760[4]);
              auVar37[5] = -(bVar54 == s__00184760[5]);
              auVar37[6] = -(bVar55 == s__00184760[6]);
              auVar37[7] = -(bVar2 == s__00184760[7]);
              auVar37[8] = -(s__00184760[8] == '\0');
              auVar37[9] = -(UNK_00184769 == '\0');
              auVar37[10] = -(UNK_0018476a == '\0');
              auVar37[0xb] = -(UNK_0018476b == '\0');
              auVar37[0xc] = -(UNK_0018476c == '\0');
              auVar37[0xd] = -(UNK_0018476d == '\0');
              auVar37[0xe] = -(UNK_0018476e == '\0');
              auVar37[0xf] = -(UNK_0018476f == '\0');
              auVar38 = ~auVar37 & (auVar58 | auVar49 ^ auVar36);
              auVar46._0_14_ = auVar38._0_14_;
              auVar46[0xe] = auVar38[7];
              auVar46[0xf] = auVar38[7];
              auVar45._14_2_ = auVar46._14_2_;
              auVar45._0_13_ = auVar38._0_13_;
              auVar45[0xd] = auVar38[6];
              auVar44._13_3_ = auVar45._13_3_;
              auVar44._0_12_ = auVar38._0_12_;
              auVar44[0xc] = auVar38[6];
              auVar43._12_4_ = auVar44._12_4_;
              auVar43._0_11_ = auVar38._0_11_;
              auVar43[0xb] = auVar38[5];
              auVar42._11_5_ = auVar43._11_5_;
              auVar42._0_10_ = auVar38._0_10_;
              auVar42[10] = auVar38[5];
              auVar41._10_6_ = auVar42._10_6_;
              auVar41._0_9_ = auVar38._0_9_;
              auVar41[9] = auVar38[4];
              auVar40._9_7_ = auVar41._9_7_;
              auVar40._0_8_ = auVar38._0_8_;
              auVar40[8] = auVar38[4];
              auVar39._8_8_ = auVar40._8_8_;
              auVar39[7] = auVar38[3];
              auVar39[6] = auVar38[3];
              auVar39[5] = auVar38[2];
              auVar39[4] = auVar38[2];
              auVar39[3] = auVar38[1];
              auVar39[2] = auVar38[1];
              auVar39[0] = auVar38[0];
              auVar39[1] = auVar39[0];
              auVar35 = auVar35 | auVar39;
              uVar29 = uVar29 + 8;
            } while (uVar32 != uVar29);
            auVar35 = psllw(auVar35,7);
            bVar33 = (((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0x17,0) & 1) != 0
                          ) || (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
                     (SUB161(auVar35 >> 0x77,0) & 1) != 0;
            if (param_3 == uVar32) goto LAB_0062b849;
          }
LAB_0062b820:
          do {
            bVar2 = *pbVar28;
            pbVar28 = pbVar28 + 1;
            bVar33 = (bool)(bVar33 | (bVar2 != 9 && (bVar2 == 0x7f || bVar2 < 0x20)));
          } while (pbVar28 != param_2 + param_3);
        }
LAB_0062b849:
        if (bVar33) {
          return;
        }
        (*(code *)PTR_copy_from_slice_0079a118)();
        local_40 = 0;
        local_10 = (ulonglong)uStack_3f << 8;
        local_20 = local_50;
        uStack_18 = uStack_48;
        local_30 = local_60;
        uStack_28 = uStack_58;
        local_38 = param_1;
        uVar34 = <http[56314f485c23ccf6]::header::name::HdrName>::from_static::
                 <<&str_as_http[56314f485c23ccf6]::header::map::into_header_name::Sealed>::try_insert<http[56314f485c23ccf6]::header::value::HeaderValue>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<core[c0acaeba6ab4c2e0]::option::Option<http[56314f485c23ccf6]::header::value::HeaderValue>,http[56314f485c23ccf6]::header::map::MaxSizeReached>>
                           (local_88,"x-conversation-id",0x11,&local_38);
        if (local_68 == -1) {
          (*(code *)PTR_unwrap_failed_00799028)
                    (&DAT_0078f238,&local_89,
                     &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078f738
                    );
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (local_68 == '\x02') {
          return;
        }
        (**(code **)(local_88[0] + 0x20))(uVar34,local_78);
        return;
      }
      bVar2 = *pbVar28;
      uVar30 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        pbVar1 = pbVar28 + 1;
        if (bVar2 < 0xe0) {
          pbVar28 = pbVar28 + 2;
          uVar30 = (uVar30 & 0x1f) << 6 | *pbVar1 & 0x3f;
        }
        else {
          uVar31 = pbVar28[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar2 < 0xf0) {
            pbVar28 = pbVar28 + 3;
            uVar30 = uVar31 | (uVar30 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar28 + 3;
            pbVar28 = pbVar28 + 4;
            uVar30 = *pbVar1 & 0x3f | uVar31 << 6 | (uVar30 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar28 = pbVar28 + 1;
      }
    } while ((uVar30 != 10) && (uVar30 != 0xd));
  }
  return;
}


