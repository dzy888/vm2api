// 006b2680 is_chunked_

/* hyper[c4782d5b5c5e3493]::headers::is_chunked_ */

bool __rustcall hyper[c4782d5b5c5e3493]::headers::is_chunked_(longlong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  byte *pbVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  undefined1 auVar17 [16];
  undefined1 auVar16 [16];
  undefined1 auVar15 [16];
  undefined1 auVar14 [16];
  undefined1 auVar13 [16];
  undefined1 auVar12 [16];
  byte bVar20;
  char cVar23;
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
  byte bVar34;
  undefined1 auVar21 [16];
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  byte bVar45;
  byte bVar46;
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
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined8 local_48;
  ulonglong local_40;
  char *local_38;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined8 local_18;
  undefined1 local_10;
  undefined2 local_8;
  
  local_38 = *(char **)(param_1 + 8);
  local_40 = *(ulonglong *)(param_1 + 0x10);
  if (local_40 == 0) goto LAB_006b2820;
  if (local_40 < 8) {
    bVar8 = false;
    pcVar6 = local_38;
LAB_006b27de:
    do {
      cVar3 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      bVar8 = (bool)(bVar8 | (cVar3 != '\t' && (byte)(cVar3 + 0x81U) < 0xa1));
    } while (pcVar6 != local_38 + local_40);
  }
  else if (local_40 < 0x20) {
    uVar5 = 0;
    bVar8 = false;
LAB_006b2760:
    uVar7 = local_40 & 0xfffffffffffffff8;
    pcVar6 = local_38 + uVar7;
    auVar62 = ZEXT116(bVar8);
    auVar9._8_4_ = 0xffffffff;
    auVar9._0_8_ = 0xffffffffffffffff;
    auVar9._12_4_ = 0xffffffff;
    do {
      uVar2 = *(undefined8 *)(local_38 + uVar5);
      bVar20 = (char)uVar2 + DAT_00183cf0;
      cVar23 = (char)((ulonglong)uVar2 >> 8);
      bVar22 = cVar23 + UNK_00183cf1;
      cVar25 = (char)((ulonglong)uVar2 >> 0x10);
      bVar24 = cVar25 + UNK_00183cf2;
      cVar27 = (char)((ulonglong)uVar2 >> 0x18);
      bVar26 = cVar27 + UNK_00183cf3;
      cVar29 = (char)((ulonglong)uVar2 >> 0x20);
      bVar28 = cVar29 + UNK_00183cf4;
      cVar31 = (char)((ulonglong)uVar2 >> 0x28);
      bVar30 = cVar31 + UNK_00183cf5;
      cVar33 = (char)((ulonglong)uVar2 >> 0x30);
      cVar3 = (char)((ulonglong)uVar2 >> 0x38);
      bVar32 = cVar33 + UNK_00183cf6;
      bVar34 = cVar3 + UNK_00183cf7;
      auVar36[0] = -((byte)((bVar20 < DAT_00183660) * DAT_00183660 |
                           (bVar20 >= DAT_00183660) * bVar20) == bVar20);
      auVar36[1] = -((byte)((bVar22 < UNK_00183661) * UNK_00183661 |
                           (bVar22 >= UNK_00183661) * bVar22) == bVar22);
      auVar36[2] = -((byte)((bVar24 < UNK_00183662) * UNK_00183662 |
                           (bVar24 >= UNK_00183662) * bVar24) == bVar24);
      auVar36[3] = -((byte)((bVar26 < UNK_00183663) * UNK_00183663 |
                           (bVar26 >= UNK_00183663) * bVar26) == bVar26);
      auVar36[4] = -((byte)((bVar28 < UNK_00183664) * UNK_00183664 |
                           (bVar28 >= UNK_00183664) * bVar28) == bVar28);
      auVar36[5] = -((byte)((bVar30 < UNK_00183665) * UNK_00183665 |
                           (bVar30 >= UNK_00183665) * bVar30) == bVar30);
      auVar36[6] = -((byte)((bVar32 < UNK_00183666) * UNK_00183666 |
                           (bVar32 >= UNK_00183666) * bVar32) == bVar32);
      auVar36[7] = -((byte)((bVar34 < UNK_00183667) * UNK_00183667 |
                           (bVar34 >= UNK_00183667) * bVar34) == bVar34);
      auVar36[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                           (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
      auVar36[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                           (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
      auVar36[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                            (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
      auVar36[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                             (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
      auVar36[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                             (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
      auVar36[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                             (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
      auVar36[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                             (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
      auVar36[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                             (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
      auVar11[0] = -((char)uVar2 == s__00184760[0]);
      auVar11[1] = -(cVar23 == s__00184760[1]);
      auVar11[2] = -(cVar25 == s__00184760[2]);
      auVar11[3] = -(cVar27 == s__00184760[3]);
      auVar11[4] = -(cVar29 == s__00184760[4]);
      auVar11[5] = -(cVar31 == s__00184760[5]);
      auVar11[6] = -(cVar33 == s__00184760[6]);
      auVar11[7] = -(cVar3 == s__00184760[7]);
      auVar11[8] = -(s__00184760[8] == '\0');
      auVar11[9] = -(UNK_00184769 == '\0');
      auVar11[10] = -(UNK_0018476a == '\0');
      auVar11[0xb] = -(UNK_0018476b == '\0');
      auVar11[0xc] = -(UNK_0018476c == '\0');
      auVar11[0xd] = -(UNK_0018476d == '\0');
      auVar11[0xe] = -(UNK_0018476e == '\0');
      auVar11[0xf] = -(UNK_0018476f == '\0');
      auVar11 = auVar11 | auVar36;
      auVar19._0_14_ = auVar11._0_14_;
      auVar19[0xe] = auVar11[7];
      auVar19[0xf] = auVar11[7];
      auVar18._14_2_ = auVar19._14_2_;
      auVar18._0_13_ = auVar11._0_13_;
      auVar18[0xd] = auVar11[6];
      auVar17._13_3_ = auVar18._13_3_;
      auVar17._0_12_ = auVar11._0_12_;
      auVar17[0xc] = auVar11[6];
      auVar16._12_4_ = auVar17._12_4_;
      auVar16._0_11_ = auVar11._0_11_;
      auVar16[0xb] = auVar11[5];
      auVar15._11_5_ = auVar16._11_5_;
      auVar15._0_10_ = auVar11._0_10_;
      auVar15[10] = auVar11[5];
      auVar14._10_6_ = auVar15._10_6_;
      auVar14._0_9_ = auVar11._0_9_;
      auVar14[9] = auVar11[4];
      auVar13._9_7_ = auVar14._9_7_;
      auVar13._0_8_ = auVar11._0_8_;
      auVar13[8] = auVar11[4];
      auVar12._8_8_ = auVar13._8_8_;
      auVar12[7] = auVar11[3];
      auVar12[6] = auVar11[3];
      auVar12[5] = auVar11[2];
      auVar12[4] = auVar11[2];
      auVar12[3] = auVar11[1];
      auVar12[2] = auVar11[1];
      auVar12[0] = auVar11[0];
      auVar12[1] = auVar12[0];
      auVar62 = auVar62 | auVar12 ^ auVar9;
      uVar5 = uVar5 + 8;
    } while (uVar7 != uVar5);
    auVar62 = psllw(auVar62,7);
    bVar8 = (((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
              (SUB161(auVar62 >> 0x47,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
            (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x77,0) & 1) != 0;
    if (local_40 != uVar7) goto LAB_006b27de;
  }
  else {
    uVar5 = local_40 & 0xffffffffffffffe0;
    auVar62 = (undefined1  [16])0x0;
    uVar7 = 0;
    auVar9 = (undefined1  [16])0x0;
    do {
      pcVar6 = local_38 + uVar7;
      pcVar1 = local_38 + uVar7 + 0x10;
      bVar20 = *pcVar6 + DAT_001831d0;
      bVar22 = pcVar6[1] + UNK_001831d1;
      bVar24 = pcVar6[2] + UNK_001831d2;
      bVar26 = pcVar6[3] + UNK_001831d3;
      bVar28 = pcVar6[4] + UNK_001831d4;
      bVar30 = pcVar6[5] + UNK_001831d5;
      bVar32 = pcVar6[6] + UNK_001831d6;
      bVar34 = pcVar6[7] + UNK_001831d7;
      bVar37 = pcVar6[8] + UNK_001831d8;
      bVar38 = pcVar6[9] + UNK_001831d9;
      bVar39 = pcVar6[10] + UNK_001831da;
      bVar40 = pcVar6[0xb] + UNK_001831db;
      bVar41 = pcVar6[0xc] + UNK_001831dc;
      bVar42 = pcVar6[0xd] + UNK_001831dd;
      bVar43 = pcVar6[0xe] + UNK_001831de;
      bVar44 = pcVar6[0xf] + UNK_001831df;
      bVar45 = *pcVar1 + DAT_001831d0;
      bVar46 = pcVar1[1] + UNK_001831d1;
      bVar47 = pcVar1[2] + UNK_001831d2;
      bVar48 = pcVar1[3] + UNK_001831d3;
      bVar49 = pcVar1[4] + UNK_001831d4;
      bVar50 = pcVar1[5] + UNK_001831d5;
      bVar51 = pcVar1[6] + UNK_001831d6;
      bVar52 = pcVar1[7] + UNK_001831d7;
      bVar53 = pcVar1[8] + UNK_001831d8;
      bVar54 = pcVar1[9] + UNK_001831d9;
      bVar55 = pcVar1[10] + UNK_001831da;
      bVar56 = pcVar1[0xb] + UNK_001831db;
      bVar57 = pcVar1[0xc] + UNK_001831dc;
      bVar58 = pcVar1[0xd] + UNK_001831dd;
      bVar59 = pcVar1[0xe] + UNK_001831de;
      bVar60 = pcVar1[0xf] + UNK_001831df;
      auVar61[0] = -((byte)((DAT_00182f40 < bVar20) * DAT_00182f40 |
                           (DAT_00182f40 >= bVar20) * bVar20) == bVar20);
      auVar61[1] = -((byte)((UNK_00182f41 < bVar22) * UNK_00182f41 |
                           (UNK_00182f41 >= bVar22) * bVar22) == bVar22);
      auVar61[2] = -((byte)((UNK_00182f42 < bVar24) * UNK_00182f42 |
                           (UNK_00182f42 >= bVar24) * bVar24) == bVar24);
      auVar61[3] = -((byte)((UNK_00182f43 < bVar26) * UNK_00182f43 |
                           (UNK_00182f43 >= bVar26) * bVar26) == bVar26);
      auVar61[4] = -((byte)((UNK_00182f44 < bVar28) * UNK_00182f44 |
                           (UNK_00182f44 >= bVar28) * bVar28) == bVar28);
      auVar61[5] = -((byte)((UNK_00182f45 < bVar30) * UNK_00182f45 |
                           (UNK_00182f45 >= bVar30) * bVar30) == bVar30);
      auVar61[6] = -((byte)((UNK_00182f46 < bVar32) * UNK_00182f46 |
                           (UNK_00182f46 >= bVar32) * bVar32) == bVar32);
      auVar61[7] = -((byte)((UNK_00182f47 < bVar34) * UNK_00182f47 |
                           (UNK_00182f47 >= bVar34) * bVar34) == bVar34);
      auVar61[8] = -((byte)((UNK_00182f48 < bVar37) * UNK_00182f48 |
                           (UNK_00182f48 >= bVar37) * bVar37) == bVar37);
      auVar61[9] = -((byte)((UNK_00182f49 < bVar38) * UNK_00182f49 |
                           (UNK_00182f49 >= bVar38) * bVar38) == bVar38);
      auVar61[10] = -((byte)((UNK_00182f4a < bVar39) * UNK_00182f4a |
                            (UNK_00182f4a >= bVar39) * bVar39) == bVar39);
      auVar61[0xb] = -((byte)((UNK_00182f4b < bVar40) * UNK_00182f4b |
                             (UNK_00182f4b >= bVar40) * bVar40) == bVar40);
      auVar61[0xc] = -((byte)((UNK_00182f4c < bVar41) * UNK_00182f4c |
                             (UNK_00182f4c >= bVar41) * bVar41) == bVar41);
      auVar61[0xd] = -((byte)((UNK_00182f4d < bVar42) * UNK_00182f4d |
                             (UNK_00182f4d >= bVar42) * bVar42) == bVar42);
      auVar61[0xe] = -((byte)((UNK_00182f4e < bVar43) * UNK_00182f4e |
                             (UNK_00182f4e >= bVar43) * bVar43) == bVar43);
      auVar61[0xf] = -((byte)((UNK_00182f4f < bVar44) * UNK_00182f4f |
                             (UNK_00182f4f >= bVar44) * bVar44) == bVar44);
      auVar35[0] = -((byte)((DAT_00182f40 < bVar45) * DAT_00182f40 |
                           (DAT_00182f40 >= bVar45) * bVar45) == bVar45);
      auVar35[1] = -((byte)((UNK_00182f41 < bVar46) * UNK_00182f41 |
                           (UNK_00182f41 >= bVar46) * bVar46) == bVar46);
      auVar35[2] = -((byte)((UNK_00182f42 < bVar47) * UNK_00182f42 |
                           (UNK_00182f42 >= bVar47) * bVar47) == bVar47);
      auVar35[3] = -((byte)((UNK_00182f43 < bVar48) * UNK_00182f43 |
                           (UNK_00182f43 >= bVar48) * bVar48) == bVar48);
      auVar35[4] = -((byte)((UNK_00182f44 < bVar49) * UNK_00182f44 |
                           (UNK_00182f44 >= bVar49) * bVar49) == bVar49);
      auVar35[5] = -((byte)((UNK_00182f45 < bVar50) * UNK_00182f45 |
                           (UNK_00182f45 >= bVar50) * bVar50) == bVar50);
      auVar35[6] = -((byte)((UNK_00182f46 < bVar51) * UNK_00182f46 |
                           (UNK_00182f46 >= bVar51) * bVar51) == bVar51);
      auVar35[7] = -((byte)((UNK_00182f47 < bVar52) * UNK_00182f47 |
                           (UNK_00182f47 >= bVar52) * bVar52) == bVar52);
      auVar35[8] = -((byte)((UNK_00182f48 < bVar53) * UNK_00182f48 |
                           (UNK_00182f48 >= bVar53) * bVar53) == bVar53);
      auVar35[9] = -((byte)((UNK_00182f49 < bVar54) * UNK_00182f49 |
                           (UNK_00182f49 >= bVar54) * bVar54) == bVar54);
      auVar35[10] = -((byte)((UNK_00182f4a < bVar55) * UNK_00182f4a |
                            (UNK_00182f4a >= bVar55) * bVar55) == bVar55);
      auVar35[0xb] = -((byte)((UNK_00182f4b < bVar56) * UNK_00182f4b |
                             (UNK_00182f4b >= bVar56) * bVar56) == bVar56);
      auVar35[0xc] = -((byte)((UNK_00182f4c < bVar57) * UNK_00182f4c |
                             (UNK_00182f4c >= bVar57) * bVar57) == bVar57);
      auVar35[0xd] = -((byte)((UNK_00182f4d < bVar58) * UNK_00182f4d |
                             (UNK_00182f4d >= bVar58) * bVar58) == bVar58);
      auVar35[0xe] = -((byte)((UNK_00182f4e < bVar59) * UNK_00182f4e |
                             (UNK_00182f4e >= bVar59) * bVar59) == bVar59);
      auVar35[0xf] = -((byte)((UNK_00182f4f < bVar60) * UNK_00182f4f |
                             (UNK_00182f4f >= bVar60) * bVar60) == bVar60);
      auVar10[0] = -(*pcVar6 == DAT_00183900);
      auVar10[1] = -(pcVar6[1] == UNK_00183901);
      auVar10[2] = -(pcVar6[2] == UNK_00183902);
      auVar10[3] = -(pcVar6[3] == UNK_00183903);
      auVar10[4] = -(pcVar6[4] == UNK_00183904);
      auVar10[5] = -(pcVar6[5] == UNK_00183905);
      auVar10[6] = -(pcVar6[6] == UNK_00183906);
      auVar10[7] = -(pcVar6[7] == UNK_00183907);
      auVar10[8] = -(pcVar6[8] == UNK_00183908);
      auVar10[9] = -(pcVar6[9] == UNK_00183909);
      auVar10[10] = -(pcVar6[10] == UNK_0018390a);
      auVar10[0xb] = -(pcVar6[0xb] == UNK_0018390b);
      auVar10[0xc] = -(pcVar6[0xc] == UNK_0018390c);
      auVar10[0xd] = -(pcVar6[0xd] == UNK_0018390d);
      auVar10[0xe] = -(pcVar6[0xe] == UNK_0018390e);
      auVar10[0xf] = -(pcVar6[0xf] == UNK_0018390f);
      auVar9 = auVar9 | ~auVar10 & auVar61;
      auVar21[0] = -(*pcVar1 == DAT_00183900);
      auVar21[1] = -(pcVar1[1] == UNK_00183901);
      auVar21[2] = -(pcVar1[2] == UNK_00183902);
      auVar21[3] = -(pcVar1[3] == UNK_00183903);
      auVar21[4] = -(pcVar1[4] == UNK_00183904);
      auVar21[5] = -(pcVar1[5] == UNK_00183905);
      auVar21[6] = -(pcVar1[6] == UNK_00183906);
      auVar21[7] = -(pcVar1[7] == UNK_00183907);
      auVar21[8] = -(pcVar1[8] == UNK_00183908);
      auVar21[9] = -(pcVar1[9] == UNK_00183909);
      auVar21[10] = -(pcVar1[10] == UNK_0018390a);
      auVar21[0xb] = -(pcVar1[0xb] == UNK_0018390b);
      auVar21[0xc] = -(pcVar1[0xc] == UNK_0018390c);
      auVar21[0xd] = -(pcVar1[0xd] == UNK_0018390d);
      auVar21[0xe] = -(pcVar1[0xe] == UNK_0018390e);
      auVar21[0xf] = -(pcVar1[0xf] == UNK_0018390f);
      auVar62 = auVar62 | ~auVar21 & auVar35;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 != uVar7);
    auVar62 = psllw(auVar62 | auVar9,7);
    bVar8 = (((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x1f,0) & 1) != 0) || (SUB161(auVar62 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x37,0) & 1) != 0) || (SUB161(auVar62 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x47,0) & 1) != 0) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0';
    if (local_40 != uVar5) {
      if ((local_40 & 0x18) == 0) {
        pcVar6 = local_38 + uVar5;
        goto LAB_006b27de;
      }
      goto LAB_006b2760;
    }
  }
  if (bVar8) {
    return false;
  }
LAB_006b2820:
  local_48 = 0;
  local_28 = 0;
  local_18 = 0x2c0000002c;
  local_10 = 1;
  local_8 = 1;
  local_30 = local_40;
  local_20 = local_40;
  auVar62 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next_back(&local_48);
  if (auVar62._0_8_ != 0) {
    auVar62 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar62._0_8_,auVar62._8_8_);
    pbVar4 = auVar62._0_8_;
    if ((((auVar62._8_8_ == 7) && ((byte)(((byte)(*pbVar4 + 0xbf) < 0x1a) << 5 | *pbVar4) == 99)) &&
        ((byte)(((byte)(pbVar4[1] + 0xbf) < 0x1a) << 5 | pbVar4[1]) == 0x68)) &&
       ((((byte)(((byte)(pbVar4[2] + 0xbf) < 0x1a) << 5 | pbVar4[2]) == 0x75 &&
         ((byte)(((byte)(pbVar4[3] + 0xbf) < 0x1a) << 5 | pbVar4[3]) == 0x6e)) &&
        (((byte)(((byte)(pbVar4[4] + 0xbf) < 0x1a) << 5 | pbVar4[4]) == 0x6b &&
         ((byte)(((byte)(pbVar4[5] + 0xbf) < 0x1a) << 5 | pbVar4[5]) == 0x65)))))) {
      return (byte)(((byte)(pbVar4[6] + 0xbf) < 0x1a) << 5 | pbVar4[6]) == 100;
    }
  }
  return false;
}


