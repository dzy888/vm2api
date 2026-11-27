// 00638370 <&str,<http[56314f485c23ccf6]::header::value::HeaderValue>::from_str::{closure#0}>

/* <http[56314f485c23ccf6]::header::value::HeaderValue>::try_from_generic::<&str,
   <http[56314f485c23ccf6]::header::value::HeaderValue>::from_str::{closure#0}> */

longlong __rustcall
<http[56314f485c23ccf6]::header::value::HeaderValue>::try_from_generic::
<&str,<http[56314f485c23ccf6]::header::value::HeaderValue>::from_str::_closure_0_>
          (longlong param_1,byte *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
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
  undefined1 uVar27;
  ulonglong uVar28;
  byte *pbVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  byte bVar44;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  
  if (param_3 != 0) {
    if (param_3 < 8) {
      bVar31 = false;
      pbVar29 = param_2;
LAB_006384e1:
      do {
        bVar2 = *pbVar29;
        pbVar29 = pbVar29 + 1;
        bVar31 = (bool)(bVar31 | (bVar2 != 9 && (bVar2 == 0x7f || bVar2 < 0x20)));
      } while (pbVar29 != param_2 + param_3);
    }
    else if (param_3 < 0x20) {
      uVar28 = 0;
      bVar31 = false;
LAB_00638459:
      uVar30 = param_3 & 0xfffffffffffffff8;
      pbVar29 = param_2 + uVar30;
      auVar32 = ZEXT116(bVar31);
      auVar33._8_4_ = 0xffffffff;
      auVar33._0_8_ = 0xffffffffffffffff;
      auVar33._12_4_ = 0xffffffff;
      do {
        uVar1 = *(undefined8 *)(param_2 + uVar28);
        bVar44 = (byte)uVar1;
        bVar47 = (byte)((ulonglong)uVar1 >> 8);
        bVar48 = (byte)((ulonglong)uVar1 >> 0x10);
        bVar49 = (byte)((ulonglong)uVar1 >> 0x18);
        bVar50 = (byte)((ulonglong)uVar1 >> 0x20);
        bVar51 = (byte)((ulonglong)uVar1 >> 0x28);
        bVar52 = (byte)((ulonglong)uVar1 >> 0x30);
        bVar2 = (byte)((ulonglong)uVar1 >> 0x38);
        auVar46[0] = -((byte)((bVar44 < (byte)s__001846a0[0]) * s__001846a0[0] |
                             (bVar44 >= (byte)s__001846a0[0]) * bVar44) == bVar44);
        auVar46[1] = -((byte)((bVar47 < (byte)s__001846a0[1]) * s__001846a0[1] |
                             (bVar47 >= (byte)s__001846a0[1]) * bVar47) == bVar47);
        auVar46[2] = -((byte)((bVar48 < (byte)s__001846a0[2]) * s__001846a0[2] |
                             (bVar48 >= (byte)s__001846a0[2]) * bVar48) == bVar48);
        auVar46[3] = -((byte)((bVar49 < (byte)s__001846a0[3]) * s__001846a0[3] |
                             (bVar49 >= (byte)s__001846a0[3]) * bVar49) == bVar49);
        auVar46[4] = -((byte)((bVar50 < (byte)s__001846a0[4]) * s__001846a0[4] |
                             (bVar50 >= (byte)s__001846a0[4]) * bVar50) == bVar50);
        auVar46[5] = -((byte)((bVar51 < (byte)s__001846a0[5]) * s__001846a0[5] |
                             (bVar51 >= (byte)s__001846a0[5]) * bVar51) == bVar51);
        auVar46[6] = -((byte)((bVar52 < (byte)s__001846a0[6]) * s__001846a0[6] |
                             (bVar52 >= (byte)s__001846a0[6]) * bVar52) == bVar52);
        auVar46[7] = -((byte)((bVar2 < (byte)s__001846a0[7]) * s__001846a0[7] |
                             (bVar2 >= (byte)s__001846a0[7]) * bVar2) == bVar2);
        auVar46[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
        auVar46[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
        auVar46[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
        auVar46[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
        auVar46[0xc] = -((char)((UNK_001846ac != '\0') * UNK_001846ac) == '\0');
        auVar46[0xd] = -((char)((UNK_001846ad != '\0') * UNK_001846ad) == '\0');
        auVar46[0xe] = -((char)((UNK_001846ae != '\0') * UNK_001846ae) == '\0');
        auVar46[0xf] = -((char)((UNK_001846af != '\0') * UNK_001846af) == '\0');
        auVar55[0] = -(bVar44 == DAT_00182630);
        auVar55[1] = -(bVar47 == UNK_00182631);
        auVar55[2] = -(bVar48 == UNK_00182632);
        auVar55[3] = -(bVar49 == UNK_00182633);
        auVar55[4] = -(bVar50 == UNK_00182634);
        auVar55[5] = -(bVar51 == UNK_00182635);
        auVar55[6] = -(bVar52 == UNK_00182636);
        auVar55[7] = -(bVar2 == UNK_00182637);
        auVar55[8] = -(UNK_00182638 == '\0');
        auVar55[9] = -(UNK_00182639 == '\0');
        auVar55[10] = -(UNK_0018263a == '\0');
        auVar55[0xb] = -(UNK_0018263b == '\0');
        auVar55[0xc] = -(UNK_0018263c == '\0');
        auVar55[0xd] = -(UNK_0018263d == '\0');
        auVar55[0xe] = -(UNK_0018263e == '\0');
        auVar55[0xf] = -(UNK_0018263f == '\0');
        auVar34[0] = -(bVar44 == s__00184760[0]);
        auVar34[1] = -(bVar47 == s__00184760[1]);
        auVar34[2] = -(bVar48 == s__00184760[2]);
        auVar34[3] = -(bVar49 == s__00184760[3]);
        auVar34[4] = -(bVar50 == s__00184760[4]);
        auVar34[5] = -(bVar51 == s__00184760[5]);
        auVar34[6] = -(bVar52 == s__00184760[6]);
        auVar34[7] = -(bVar2 == s__00184760[7]);
        auVar34[8] = -(s__00184760[8] == '\0');
        auVar34[9] = -(UNK_00184769 == '\0');
        auVar34[10] = -(UNK_0018476a == '\0');
        auVar34[0xb] = -(UNK_0018476b == '\0');
        auVar34[0xc] = -(UNK_0018476c == '\0');
        auVar34[0xd] = -(UNK_0018476d == '\0');
        auVar34[0xe] = -(UNK_0018476e == '\0');
        auVar34[0xf] = -(UNK_0018476f == '\0');
        auVar35 = ~auVar34 & (auVar55 | auVar46 ^ auVar33);
        auVar43._0_14_ = auVar35._0_14_;
        auVar43[0xe] = auVar35[7];
        auVar43[0xf] = auVar35[7];
        auVar42._14_2_ = auVar43._14_2_;
        auVar42._0_13_ = auVar35._0_13_;
        auVar42[0xd] = auVar35[6];
        auVar41._13_3_ = auVar42._13_3_;
        auVar41._0_12_ = auVar35._0_12_;
        auVar41[0xc] = auVar35[6];
        auVar40._12_4_ = auVar41._12_4_;
        auVar40._0_11_ = auVar35._0_11_;
        auVar40[0xb] = auVar35[5];
        auVar39._11_5_ = auVar40._11_5_;
        auVar39._0_10_ = auVar35._0_10_;
        auVar39[10] = auVar35[5];
        auVar38._10_6_ = auVar39._10_6_;
        auVar38._0_9_ = auVar35._0_9_;
        auVar38[9] = auVar35[4];
        auVar37._9_7_ = auVar38._9_7_;
        auVar37._0_8_ = auVar35._0_8_;
        auVar37[8] = auVar35[4];
        auVar36._8_8_ = auVar37._8_8_;
        auVar36[7] = auVar35[3];
        auVar36[6] = auVar35[3];
        auVar36[5] = auVar35[2];
        auVar36[4] = auVar35[2];
        auVar36[3] = auVar35[1];
        auVar36[2] = auVar35[1];
        auVar36[0] = auVar35[0];
        auVar36[1] = auVar36[0];
        auVar32 = auVar32 | auVar36;
        uVar28 = uVar28 + 8;
      } while (uVar30 != uVar28);
      auVar32 = psllw(auVar32,7);
      bVar31 = (((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                   (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0;
      if (param_3 != uVar30) goto LAB_006384e1;
    }
    else {
      uVar28 = param_3 & 0xffffffffffffffe0;
      auVar32 = (undefined1  [16])0x0;
      uVar30 = 0;
      auVar33 = (undefined1  [16])0x0;
      do {
        pbVar29 = param_2 + uVar30;
        bVar2 = *pbVar29;
        bVar44 = pbVar29[1];
        bVar47 = pbVar29[2];
        bVar48 = pbVar29[3];
        bVar49 = pbVar29[4];
        bVar50 = pbVar29[5];
        bVar51 = pbVar29[6];
        bVar52 = pbVar29[7];
        bVar3 = pbVar29[8];
        bVar4 = pbVar29[9];
        bVar5 = pbVar29[10];
        bVar6 = pbVar29[0xb];
        bVar7 = pbVar29[0xc];
        bVar8 = pbVar29[0xd];
        bVar9 = pbVar29[0xe];
        bVar10 = pbVar29[0xf];
        pbVar29 = param_2 + uVar30 + 0x10;
        bVar11 = *pbVar29;
        bVar12 = pbVar29[1];
        bVar13 = pbVar29[2];
        bVar14 = pbVar29[3];
        bVar15 = pbVar29[4];
        bVar16 = pbVar29[5];
        bVar17 = pbVar29[6];
        bVar18 = pbVar29[7];
        bVar19 = pbVar29[8];
        bVar20 = pbVar29[9];
        bVar21 = pbVar29[10];
        bVar22 = pbVar29[0xb];
        bVar23 = pbVar29[0xc];
        bVar24 = pbVar29[0xd];
        bVar25 = pbVar29[0xe];
        bVar26 = pbVar29[0xf];
        auVar53[0] = -((byte)((DAT_00184700 < bVar2) * DAT_00184700 |
                             (DAT_00184700 >= bVar2) * bVar2) == bVar2);
        auVar53[1] = -((byte)((UNK_00184701 < bVar44) * UNK_00184701 |
                             (UNK_00184701 >= bVar44) * bVar44) == bVar44);
        auVar53[2] = -((byte)((UNK_00184702 < bVar47) * UNK_00184702 |
                             (UNK_00184702 >= bVar47) * bVar47) == bVar47);
        auVar53[3] = -((byte)((UNK_00184703 < bVar48) * UNK_00184703 |
                             (UNK_00184703 >= bVar48) * bVar48) == bVar48);
        auVar53[4] = -((byte)((UNK_00184704 < bVar49) * UNK_00184704 |
                             (UNK_00184704 >= bVar49) * bVar49) == bVar49);
        auVar53[5] = -((byte)((UNK_00184705 < bVar50) * UNK_00184705 |
                             (UNK_00184705 >= bVar50) * bVar50) == bVar50);
        auVar53[6] = -((byte)((UNK_00184706 < bVar51) * UNK_00184706 |
                             (UNK_00184706 >= bVar51) * bVar51) == bVar51);
        auVar53[7] = -((byte)((UNK_00184707 < bVar52) * UNK_00184707 |
                             (UNK_00184707 >= bVar52) * bVar52) == bVar52);
        auVar53[8] = -((byte)((UNK_00184708 < bVar3) * UNK_00184708 |
                             (UNK_00184708 >= bVar3) * bVar3) == bVar3);
        auVar53[9] = -((byte)((UNK_00184709 < bVar4) * UNK_00184709 |
                             (UNK_00184709 >= bVar4) * bVar4) == bVar4);
        auVar53[10] = -((byte)((UNK_0018470a < bVar5) * UNK_0018470a |
                              (UNK_0018470a >= bVar5) * bVar5) == bVar5);
        auVar53[0xb] = -((byte)((UNK_0018470b < bVar6) * UNK_0018470b |
                               (UNK_0018470b >= bVar6) * bVar6) == bVar6);
        auVar53[0xc] = -((byte)((UNK_0018470c < bVar7) * UNK_0018470c |
                               (UNK_0018470c >= bVar7) * bVar7) == bVar7);
        auVar53[0xd] = -((byte)((UNK_0018470d < bVar8) * UNK_0018470d |
                               (UNK_0018470d >= bVar8) * bVar8) == bVar8);
        auVar53[0xe] = -((byte)((UNK_0018470e < bVar9) * UNK_0018470e |
                               (UNK_0018470e >= bVar9) * bVar9) == bVar9);
        auVar53[0xf] = -((byte)((UNK_0018470f < bVar10) * UNK_0018470f |
                               (UNK_0018470f >= bVar10) * bVar10) == bVar10);
        auVar56[0] = -((byte)((DAT_00184700 < bVar11) * DAT_00184700 |
                             (DAT_00184700 >= bVar11) * bVar11) == bVar11);
        auVar56[1] = -((byte)((UNK_00184701 < bVar12) * UNK_00184701 |
                             (UNK_00184701 >= bVar12) * bVar12) == bVar12);
        auVar56[2] = -((byte)((UNK_00184702 < bVar13) * UNK_00184702 |
                             (UNK_00184702 >= bVar13) * bVar13) == bVar13);
        auVar56[3] = -((byte)((UNK_00184703 < bVar14) * UNK_00184703 |
                             (UNK_00184703 >= bVar14) * bVar14) == bVar14);
        auVar56[4] = -((byte)((UNK_00184704 < bVar15) * UNK_00184704 |
                             (UNK_00184704 >= bVar15) * bVar15) == bVar15);
        auVar56[5] = -((byte)((UNK_00184705 < bVar16) * UNK_00184705 |
                             (UNK_00184705 >= bVar16) * bVar16) == bVar16);
        auVar56[6] = -((byte)((UNK_00184706 < bVar17) * UNK_00184706 |
                             (UNK_00184706 >= bVar17) * bVar17) == bVar17);
        auVar56[7] = -((byte)((UNK_00184707 < bVar18) * UNK_00184707 |
                             (UNK_00184707 >= bVar18) * bVar18) == bVar18);
        auVar56[8] = -((byte)((UNK_00184708 < bVar19) * UNK_00184708 |
                             (UNK_00184708 >= bVar19) * bVar19) == bVar19);
        auVar56[9] = -((byte)((UNK_00184709 < bVar20) * UNK_00184709 |
                             (UNK_00184709 >= bVar20) * bVar20) == bVar20);
        auVar56[10] = -((byte)((UNK_0018470a < bVar21) * UNK_0018470a |
                              (UNK_0018470a >= bVar21) * bVar21) == bVar21);
        auVar56[0xb] = -((byte)((UNK_0018470b < bVar22) * UNK_0018470b |
                               (UNK_0018470b >= bVar22) * bVar22) == bVar22);
        auVar56[0xc] = -((byte)((UNK_0018470c < bVar23) * UNK_0018470c |
                               (UNK_0018470c >= bVar23) * bVar23) == bVar23);
        auVar56[0xd] = -((byte)((UNK_0018470d < bVar24) * UNK_0018470d |
                               (UNK_0018470d >= bVar24) * bVar24) == bVar24);
        auVar56[0xe] = -((byte)((UNK_0018470e < bVar25) * UNK_0018470e |
                               (UNK_0018470e >= bVar25) * bVar25) == bVar25);
        auVar56[0xf] = -((byte)((UNK_0018470f < bVar26) * UNK_0018470f |
                               (UNK_0018470f >= bVar26) * bVar26) == bVar26);
        auVar57[0] = -(bVar2 == DAT_00182620);
        auVar57[1] = -(bVar44 == UNK_00182621);
        auVar57[2] = -(bVar47 == UNK_00182622);
        auVar57[3] = -(bVar48 == UNK_00182623);
        auVar57[4] = -(bVar49 == UNK_00182624);
        auVar57[5] = -(bVar50 == UNK_00182625);
        auVar57[6] = -(bVar51 == UNK_00182626);
        auVar57[7] = -(bVar52 == UNK_00182627);
        auVar57[8] = -(bVar3 == UNK_00182628);
        auVar57[9] = -(bVar4 == UNK_00182629);
        auVar57[10] = -(bVar5 == UNK_0018262a);
        auVar57[0xb] = -(bVar6 == UNK_0018262b);
        auVar57[0xc] = -(bVar7 == UNK_0018262c);
        auVar57[0xd] = -(bVar8 == UNK_0018262d);
        auVar57[0xe] = -(bVar9 == UNK_0018262e);
        auVar57[0xf] = -(bVar10 == UNK_0018262f);
        auVar54[0] = -(bVar11 == DAT_00182620);
        auVar54[1] = -(bVar12 == UNK_00182621);
        auVar54[2] = -(bVar13 == UNK_00182622);
        auVar54[3] = -(bVar14 == UNK_00182623);
        auVar54[4] = -(bVar15 == UNK_00182624);
        auVar54[5] = -(bVar16 == UNK_00182625);
        auVar54[6] = -(bVar17 == UNK_00182626);
        auVar54[7] = -(bVar18 == UNK_00182627);
        auVar54[8] = -(bVar19 == UNK_00182628);
        auVar54[9] = -(bVar20 == UNK_00182629);
        auVar54[10] = -(bVar21 == UNK_0018262a);
        auVar54[0xb] = -(bVar22 == UNK_0018262b);
        auVar54[0xc] = -(bVar23 == UNK_0018262c);
        auVar54[0xd] = -(bVar24 == UNK_0018262d);
        auVar54[0xe] = -(bVar25 == UNK_0018262e);
        auVar54[0xf] = -(bVar26 == UNK_0018262f);
        auVar35[0] = -(bVar2 == DAT_00183900);
        auVar35[1] = -(bVar44 == UNK_00183901);
        auVar35[2] = -(bVar47 == UNK_00183902);
        auVar35[3] = -(bVar48 == UNK_00183903);
        auVar35[4] = -(bVar49 == UNK_00183904);
        auVar35[5] = -(bVar50 == UNK_00183905);
        auVar35[6] = -(bVar51 == UNK_00183906);
        auVar35[7] = -(bVar52 == UNK_00183907);
        auVar35[8] = -(bVar3 == UNK_00183908);
        auVar35[9] = -(bVar4 == UNK_00183909);
        auVar35[10] = -(bVar5 == UNK_0018390a);
        auVar35[0xb] = -(bVar6 == UNK_0018390b);
        auVar35[0xc] = -(bVar7 == UNK_0018390c);
        auVar35[0xd] = -(bVar8 == UNK_0018390d);
        auVar35[0xe] = -(bVar9 == UNK_0018390e);
        auVar35[0xf] = -(bVar10 == UNK_0018390f);
        auVar33 = auVar33 | ~auVar35 & (auVar57 | auVar53);
        auVar45[0] = -(bVar11 == DAT_00183900);
        auVar45[1] = -(bVar12 == UNK_00183901);
        auVar45[2] = -(bVar13 == UNK_00183902);
        auVar45[3] = -(bVar14 == UNK_00183903);
        auVar45[4] = -(bVar15 == UNK_00183904);
        auVar45[5] = -(bVar16 == UNK_00183905);
        auVar45[6] = -(bVar17 == UNK_00183906);
        auVar45[7] = -(bVar18 == UNK_00183907);
        auVar45[8] = -(bVar19 == UNK_00183908);
        auVar45[9] = -(bVar20 == UNK_00183909);
        auVar45[10] = -(bVar21 == UNK_0018390a);
        auVar45[0xb] = -(bVar22 == UNK_0018390b);
        auVar45[0xc] = -(bVar23 == UNK_0018390c);
        auVar45[0xd] = -(bVar24 == UNK_0018390d);
        auVar45[0xe] = -(bVar25 == UNK_0018390e);
        auVar45[0xf] = -(bVar26 == UNK_0018390f);
        auVar32 = auVar32 | ~auVar45 & (auVar54 | auVar56);
        uVar30 = uVar30 + 0x20;
      } while (uVar28 != uVar30);
      auVar32 = psllw(auVar32 | auVar33,7);
      bVar31 = (((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                            (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                           (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                          (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                         (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
               auVar32[0xf] < '\0';
      if (param_3 != uVar28) {
        if ((param_3 & 0x18) == 0) {
          pbVar29 = param_2 + uVar28;
          goto LAB_006384e1;
        }
        goto LAB_00638459;
      }
    }
    uVar27 = 2;
    if (bVar31) goto LAB_00638530;
  }
  (*(code *)PTR_copy_from_slice_0079a118)();
  uVar27 = 0;
LAB_00638530:
  *(undefined1 *)(param_1 + 0x20) = uVar27;
  return param_1;
}


