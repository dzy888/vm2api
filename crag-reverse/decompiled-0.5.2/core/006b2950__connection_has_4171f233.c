// 006b2950 connection_has

/* hyper[c4782d5b5c5e3493]::headers::connection_has */

undefined8 __rustcall
hyper[c4782d5b5c5e3493]::headers::connection_has
          (char *param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  byte bVar22;
  char cVar25;
  byte bVar24;
  char cVar27;
  byte bVar26;
  char cVar29;
  byte bVar28;
  char cVar31;
  byte bVar30;
  char cVar33;
  byte bVar32;
  char cVar35;
  byte bVar34;
  byte bVar36;
  undefined1 auVar23 [16];
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined8 local_60;
  ulonglong local_58;
  char *local_50;
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined2 local_20;
  
  if (param_2 == 0) goto LAB_006b2adf;
  if (param_2 < 8) {
    bVar10 = false;
    pcVar6 = param_1;
LAB_006b2aac:
    do {
      cVar4 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      bVar10 = (bool)(bVar10 | (cVar4 != '\t' && (byte)(cVar4 + 0x81U) < 0xa1));
    } while (pcVar6 != param_1 + param_2);
  }
  else if (param_2 < 0x20) {
    uVar5 = 0;
    uVar8 = 0;
LAB_006b2a31:
    uVar9 = param_2 & 0xfffffffffffffff8;
    pcVar6 = param_1 + uVar9;
    auVar64 = ZEXT416(uVar8);
    auVar11._8_4_ = 0xffffffff;
    auVar11._0_8_ = 0xffffffffffffffff;
    auVar11._12_4_ = 0xffffffff;
    do {
      uVar3 = *(undefined8 *)(param_1 + uVar5);
      bVar22 = (char)uVar3 + DAT_00183cf0;
      cVar25 = (char)((ulonglong)uVar3 >> 8);
      bVar24 = cVar25 + UNK_00183cf1;
      cVar27 = (char)((ulonglong)uVar3 >> 0x10);
      bVar26 = cVar27 + UNK_00183cf2;
      cVar29 = (char)((ulonglong)uVar3 >> 0x18);
      bVar28 = cVar29 + UNK_00183cf3;
      cVar31 = (char)((ulonglong)uVar3 >> 0x20);
      bVar30 = cVar31 + UNK_00183cf4;
      cVar33 = (char)((ulonglong)uVar3 >> 0x28);
      bVar32 = cVar33 + UNK_00183cf5;
      cVar35 = (char)((ulonglong)uVar3 >> 0x30);
      cVar4 = (char)((ulonglong)uVar3 >> 0x38);
      bVar34 = cVar35 + UNK_00183cf6;
      bVar36 = cVar4 + UNK_00183cf7;
      auVar38[0] = -((byte)((bVar22 < DAT_00183660) * DAT_00183660 |
                           (bVar22 >= DAT_00183660) * bVar22) == bVar22);
      auVar38[1] = -((byte)((bVar24 < UNK_00183661) * UNK_00183661 |
                           (bVar24 >= UNK_00183661) * bVar24) == bVar24);
      auVar38[2] = -((byte)((bVar26 < UNK_00183662) * UNK_00183662 |
                           (bVar26 >= UNK_00183662) * bVar26) == bVar26);
      auVar38[3] = -((byte)((bVar28 < UNK_00183663) * UNK_00183663 |
                           (bVar28 >= UNK_00183663) * bVar28) == bVar28);
      auVar38[4] = -((byte)((bVar30 < UNK_00183664) * UNK_00183664 |
                           (bVar30 >= UNK_00183664) * bVar30) == bVar30);
      auVar38[5] = -((byte)((bVar32 < UNK_00183665) * UNK_00183665 |
                           (bVar32 >= UNK_00183665) * bVar32) == bVar32);
      auVar38[6] = -((byte)((bVar34 < UNK_00183666) * UNK_00183666 |
                           (bVar34 >= UNK_00183666) * bVar34) == bVar34);
      auVar38[7] = -((byte)((bVar36 < UNK_00183667) * UNK_00183667 |
                           (bVar36 >= UNK_00183667) * bVar36) == bVar36);
      auVar38[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                           (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
      auVar38[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                           (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
      auVar38[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                            (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
      auVar38[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                             (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
      auVar38[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                             (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
      auVar38[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                             (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
      auVar38[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                             (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
      auVar38[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                             (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
      auVar13[0] = -((char)uVar3 == s__00184760[0]);
      auVar13[1] = -(cVar25 == s__00184760[1]);
      auVar13[2] = -(cVar27 == s__00184760[2]);
      auVar13[3] = -(cVar29 == s__00184760[3]);
      auVar13[4] = -(cVar31 == s__00184760[4]);
      auVar13[5] = -(cVar33 == s__00184760[5]);
      auVar13[6] = -(cVar35 == s__00184760[6]);
      auVar13[7] = -(cVar4 == s__00184760[7]);
      auVar13[8] = -(s__00184760[8] == '\0');
      auVar13[9] = -(UNK_00184769 == '\0');
      auVar13[10] = -(UNK_0018476a == '\0');
      auVar13[0xb] = -(UNK_0018476b == '\0');
      auVar13[0xc] = -(UNK_0018476c == '\0');
      auVar13[0xd] = -(UNK_0018476d == '\0');
      auVar13[0xe] = -(UNK_0018476e == '\0');
      auVar13[0xf] = -(UNK_0018476f == '\0');
      auVar13 = auVar13 | auVar38;
      auVar21._0_14_ = auVar13._0_14_;
      auVar21[0xe] = auVar13[7];
      auVar21[0xf] = auVar13[7];
      auVar20._14_2_ = auVar21._14_2_;
      auVar20._0_13_ = auVar13._0_13_;
      auVar20[0xd] = auVar13[6];
      auVar19._13_3_ = auVar20._13_3_;
      auVar19._0_12_ = auVar13._0_12_;
      auVar19[0xc] = auVar13[6];
      auVar18._12_4_ = auVar19._12_4_;
      auVar18._0_11_ = auVar13._0_11_;
      auVar18[0xb] = auVar13[5];
      auVar17._11_5_ = auVar18._11_5_;
      auVar17._0_10_ = auVar13._0_10_;
      auVar17[10] = auVar13[5];
      auVar16._10_6_ = auVar17._10_6_;
      auVar16._0_9_ = auVar13._0_9_;
      auVar16[9] = auVar13[4];
      auVar15._9_7_ = auVar16._9_7_;
      auVar15._0_8_ = auVar13._0_8_;
      auVar15[8] = auVar13[4];
      auVar14._8_8_ = auVar15._8_8_;
      auVar14[7] = auVar13[3];
      auVar14[6] = auVar13[3];
      auVar14[5] = auVar13[2];
      auVar14[4] = auVar13[2];
      auVar14[3] = auVar13[1];
      auVar14[2] = auVar13[1];
      auVar14[0] = auVar13[0];
      auVar14[1] = auVar14[0];
      auVar64 = auVar64 | auVar14 ^ auVar11;
      uVar5 = uVar5 + 8;
    } while (uVar9 != uVar5);
    auVar64 = psllw(auVar64,7);
    bVar10 = (((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                 (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
               (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0;
    if (param_2 != uVar9) goto LAB_006b2aac;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffffe0;
    auVar64 = (undefined1  [16])0x0;
    uVar9 = 0;
    auVar11 = (undefined1  [16])0x0;
    do {
      pcVar6 = param_1 + uVar9;
      pcVar2 = param_1 + uVar9 + 0x10;
      bVar22 = *pcVar6 + DAT_001831d0;
      bVar24 = pcVar6[1] + UNK_001831d1;
      bVar26 = pcVar6[2] + UNK_001831d2;
      bVar28 = pcVar6[3] + UNK_001831d3;
      bVar30 = pcVar6[4] + UNK_001831d4;
      bVar32 = pcVar6[5] + UNK_001831d5;
      bVar34 = pcVar6[6] + UNK_001831d6;
      bVar36 = pcVar6[7] + UNK_001831d7;
      bVar39 = pcVar6[8] + UNK_001831d8;
      bVar40 = pcVar6[9] + UNK_001831d9;
      bVar41 = pcVar6[10] + UNK_001831da;
      bVar42 = pcVar6[0xb] + UNK_001831db;
      bVar43 = pcVar6[0xc] + UNK_001831dc;
      bVar44 = pcVar6[0xd] + UNK_001831dd;
      bVar45 = pcVar6[0xe] + UNK_001831de;
      bVar46 = pcVar6[0xf] + UNK_001831df;
      bVar47 = *pcVar2 + DAT_001831d0;
      bVar48 = pcVar2[1] + UNK_001831d1;
      bVar49 = pcVar2[2] + UNK_001831d2;
      bVar50 = pcVar2[3] + UNK_001831d3;
      bVar51 = pcVar2[4] + UNK_001831d4;
      bVar52 = pcVar2[5] + UNK_001831d5;
      bVar53 = pcVar2[6] + UNK_001831d6;
      bVar54 = pcVar2[7] + UNK_001831d7;
      bVar55 = pcVar2[8] + UNK_001831d8;
      bVar56 = pcVar2[9] + UNK_001831d9;
      bVar57 = pcVar2[10] + UNK_001831da;
      bVar58 = pcVar2[0xb] + UNK_001831db;
      bVar59 = pcVar2[0xc] + UNK_001831dc;
      bVar60 = pcVar2[0xd] + UNK_001831dd;
      bVar61 = pcVar2[0xe] + UNK_001831de;
      bVar62 = pcVar2[0xf] + UNK_001831df;
      auVar63[0] = -((byte)((DAT_00182f40 < bVar22) * DAT_00182f40 |
                           (DAT_00182f40 >= bVar22) * bVar22) == bVar22);
      auVar63[1] = -((byte)((UNK_00182f41 < bVar24) * UNK_00182f41 |
                           (UNK_00182f41 >= bVar24) * bVar24) == bVar24);
      auVar63[2] = -((byte)((UNK_00182f42 < bVar26) * UNK_00182f42 |
                           (UNK_00182f42 >= bVar26) * bVar26) == bVar26);
      auVar63[3] = -((byte)((UNK_00182f43 < bVar28) * UNK_00182f43 |
                           (UNK_00182f43 >= bVar28) * bVar28) == bVar28);
      auVar63[4] = -((byte)((UNK_00182f44 < bVar30) * UNK_00182f44 |
                           (UNK_00182f44 >= bVar30) * bVar30) == bVar30);
      auVar63[5] = -((byte)((UNK_00182f45 < bVar32) * UNK_00182f45 |
                           (UNK_00182f45 >= bVar32) * bVar32) == bVar32);
      auVar63[6] = -((byte)((UNK_00182f46 < bVar34) * UNK_00182f46 |
                           (UNK_00182f46 >= bVar34) * bVar34) == bVar34);
      auVar63[7] = -((byte)((UNK_00182f47 < bVar36) * UNK_00182f47 |
                           (UNK_00182f47 >= bVar36) * bVar36) == bVar36);
      auVar63[8] = -((byte)((UNK_00182f48 < bVar39) * UNK_00182f48 |
                           (UNK_00182f48 >= bVar39) * bVar39) == bVar39);
      auVar63[9] = -((byte)((UNK_00182f49 < bVar40) * UNK_00182f49 |
                           (UNK_00182f49 >= bVar40) * bVar40) == bVar40);
      auVar63[10] = -((byte)((UNK_00182f4a < bVar41) * UNK_00182f4a |
                            (UNK_00182f4a >= bVar41) * bVar41) == bVar41);
      auVar63[0xb] = -((byte)((UNK_00182f4b < bVar42) * UNK_00182f4b |
                             (UNK_00182f4b >= bVar42) * bVar42) == bVar42);
      auVar63[0xc] = -((byte)((UNK_00182f4c < bVar43) * UNK_00182f4c |
                             (UNK_00182f4c >= bVar43) * bVar43) == bVar43);
      auVar63[0xd] = -((byte)((UNK_00182f4d < bVar44) * UNK_00182f4d |
                             (UNK_00182f4d >= bVar44) * bVar44) == bVar44);
      auVar63[0xe] = -((byte)((UNK_00182f4e < bVar45) * UNK_00182f4e |
                             (UNK_00182f4e >= bVar45) * bVar45) == bVar45);
      auVar63[0xf] = -((byte)((UNK_00182f4f < bVar46) * UNK_00182f4f |
                             (UNK_00182f4f >= bVar46) * bVar46) == bVar46);
      auVar37[0] = -((byte)((DAT_00182f40 < bVar47) * DAT_00182f40 |
                           (DAT_00182f40 >= bVar47) * bVar47) == bVar47);
      auVar37[1] = -((byte)((UNK_00182f41 < bVar48) * UNK_00182f41 |
                           (UNK_00182f41 >= bVar48) * bVar48) == bVar48);
      auVar37[2] = -((byte)((UNK_00182f42 < bVar49) * UNK_00182f42 |
                           (UNK_00182f42 >= bVar49) * bVar49) == bVar49);
      auVar37[3] = -((byte)((UNK_00182f43 < bVar50) * UNK_00182f43 |
                           (UNK_00182f43 >= bVar50) * bVar50) == bVar50);
      auVar37[4] = -((byte)((UNK_00182f44 < bVar51) * UNK_00182f44 |
                           (UNK_00182f44 >= bVar51) * bVar51) == bVar51);
      auVar37[5] = -((byte)((UNK_00182f45 < bVar52) * UNK_00182f45 |
                           (UNK_00182f45 >= bVar52) * bVar52) == bVar52);
      auVar37[6] = -((byte)((UNK_00182f46 < bVar53) * UNK_00182f46 |
                           (UNK_00182f46 >= bVar53) * bVar53) == bVar53);
      auVar37[7] = -((byte)((UNK_00182f47 < bVar54) * UNK_00182f47 |
                           (UNK_00182f47 >= bVar54) * bVar54) == bVar54);
      auVar37[8] = -((byte)((UNK_00182f48 < bVar55) * UNK_00182f48 |
                           (UNK_00182f48 >= bVar55) * bVar55) == bVar55);
      auVar37[9] = -((byte)((UNK_00182f49 < bVar56) * UNK_00182f49 |
                           (UNK_00182f49 >= bVar56) * bVar56) == bVar56);
      auVar37[10] = -((byte)((UNK_00182f4a < bVar57) * UNK_00182f4a |
                            (UNK_00182f4a >= bVar57) * bVar57) == bVar57);
      auVar37[0xb] = -((byte)((UNK_00182f4b < bVar58) * UNK_00182f4b |
                             (UNK_00182f4b >= bVar58) * bVar58) == bVar58);
      auVar37[0xc] = -((byte)((UNK_00182f4c < bVar59) * UNK_00182f4c |
                             (UNK_00182f4c >= bVar59) * bVar59) == bVar59);
      auVar37[0xd] = -((byte)((UNK_00182f4d < bVar60) * UNK_00182f4d |
                             (UNK_00182f4d >= bVar60) * bVar60) == bVar60);
      auVar37[0xe] = -((byte)((UNK_00182f4e < bVar61) * UNK_00182f4e |
                             (UNK_00182f4e >= bVar61) * bVar61) == bVar61);
      auVar37[0xf] = -((byte)((UNK_00182f4f < bVar62) * UNK_00182f4f |
                             (UNK_00182f4f >= bVar62) * bVar62) == bVar62);
      auVar12[0] = -(*pcVar6 == DAT_00183900);
      auVar12[1] = -(pcVar6[1] == UNK_00183901);
      auVar12[2] = -(pcVar6[2] == UNK_00183902);
      auVar12[3] = -(pcVar6[3] == UNK_00183903);
      auVar12[4] = -(pcVar6[4] == UNK_00183904);
      auVar12[5] = -(pcVar6[5] == UNK_00183905);
      auVar12[6] = -(pcVar6[6] == UNK_00183906);
      auVar12[7] = -(pcVar6[7] == UNK_00183907);
      auVar12[8] = -(pcVar6[8] == UNK_00183908);
      auVar12[9] = -(pcVar6[9] == UNK_00183909);
      auVar12[10] = -(pcVar6[10] == UNK_0018390a);
      auVar12[0xb] = -(pcVar6[0xb] == UNK_0018390b);
      auVar12[0xc] = -(pcVar6[0xc] == UNK_0018390c);
      auVar12[0xd] = -(pcVar6[0xd] == UNK_0018390d);
      auVar12[0xe] = -(pcVar6[0xe] == UNK_0018390e);
      auVar12[0xf] = -(pcVar6[0xf] == UNK_0018390f);
      auVar11 = auVar11 | ~auVar12 & auVar63;
      auVar23[0] = -(*pcVar2 == DAT_00183900);
      auVar23[1] = -(pcVar2[1] == UNK_00183901);
      auVar23[2] = -(pcVar2[2] == UNK_00183902);
      auVar23[3] = -(pcVar2[3] == UNK_00183903);
      auVar23[4] = -(pcVar2[4] == UNK_00183904);
      auVar23[5] = -(pcVar2[5] == UNK_00183905);
      auVar23[6] = -(pcVar2[6] == UNK_00183906);
      auVar23[7] = -(pcVar2[7] == UNK_00183907);
      auVar23[8] = -(pcVar2[8] == UNK_00183908);
      auVar23[9] = -(pcVar2[9] == UNK_00183909);
      auVar23[10] = -(pcVar2[10] == UNK_0018390a);
      auVar23[0xb] = -(pcVar2[0xb] == UNK_0018390b);
      auVar23[0xc] = -(pcVar2[0xc] == UNK_0018390c);
      auVar23[0xd] = -(pcVar2[0xd] == UNK_0018390d);
      auVar23[0xe] = -(pcVar2[0xe] == UNK_0018390e);
      auVar23[0xf] = -(pcVar2[0xf] == UNK_0018390f);
      auVar64 = auVar64 | ~auVar23 & auVar37;
      uVar9 = uVar9 + 0x20;
    } while (uVar5 != uVar9);
    auVar64 = psllw(auVar64 | auVar11,7);
    bVar10 = (((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0)
                         || (SUB161(auVar64 >> 0x17,0) & 1) != 0) ||
                        (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                       (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0
                      ) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                    (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0)
                  || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0)
                || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x6f,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) ||
             auVar64[0xf] < '\0';
    uVar8 = (uint)bVar10;
    if (param_2 != uVar5) {
      if ((param_2 & 0x18) == 0) {
        pcVar6 = param_1 + uVar5;
        goto LAB_006b2aac;
      }
      goto LAB_006b2a31;
    }
  }
  if (bVar10) {
    return 0;
  }
LAB_006b2adf:
  local_60 = 0;
  local_40 = 0;
  local_30 = 0x2c0000002c;
  local_28 = 1;
  local_20 = 1;
  local_58 = param_2;
  local_50 = param_1;
  local_48 = param_2;
  local_38 = param_2;
  auVar64 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_60);
  if (auVar64._0_8_ != 0) {
    do {
      auVar64 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar64._0_8_,auVar64._8_8_);
      if (auVar64._8_8_ == param_4) {
        lVar7 = 0;
        do {
          if (param_4 == lVar7) {
            return 1;
          }
          bVar22 = *(byte *)(auVar64._0_8_ + lVar7);
          pbVar1 = (byte *)(param_3 + lVar7);
          lVar7 = lVar7 + 1;
        } while ((byte)(((byte)(bVar22 + 0xbf) < 0x1a) << 5 | bVar22) ==
                 (byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1));
      }
      auVar64 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next(&local_60);
    } while (auVar64._0_8_ != 0);
  }
  return 0;
}


