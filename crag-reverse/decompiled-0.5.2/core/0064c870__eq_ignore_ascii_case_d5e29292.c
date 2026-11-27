// 0064c870 eq_ignore_ascii_case

/* <str>::eq_ignore_ascii_case */

undefined1 __rustcall
<str>::eq_ignore_ascii_case(byte *param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
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
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  
  if (param_2 == param_4) {
    if (param_2 < 0x10) {
      uVar3 = 0;
      do {
        if (param_2 == uVar3) {
          return 1;
        }
        pbVar1 = param_1 + uVar3;
        pbVar2 = param_3 + uVar3;
        uVar3 = uVar3 + 1;
      } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
               (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
      return 0;
    }
    bVar5 = *param_1 + DAT_00183f60;
    bVar6 = param_1[1] + UNK_00183f61;
    bVar7 = param_1[2] + UNK_00183f62;
    bVar8 = param_1[3] + UNK_00183f63;
    bVar9 = param_1[4] + UNK_00183f64;
    bVar10 = param_1[5] + UNK_00183f65;
    bVar11 = param_1[6] + UNK_00183f66;
    bVar12 = param_1[7] + UNK_00183f67;
    bVar13 = param_1[8] + UNK_00183f68;
    bVar14 = param_1[9] + UNK_00183f69;
    bVar15 = param_1[10] + UNK_00183f6a;
    bVar16 = param_1[0xb] + UNK_00183f6b;
    bVar17 = param_1[0xc] + UNK_00183f6c;
    bVar18 = param_1[0xd] + UNK_00183f6d;
    bVar19 = param_1[0xe] + UNK_00183f6e;
    bVar20 = param_1[0xf] + UNK_00183f6f;
    bVar21 = *param_3 + DAT_00183f60;
    bVar22 = param_3[1] + UNK_00183f61;
    bVar23 = param_3[2] + UNK_00183f62;
    bVar24 = param_3[3] + UNK_00183f63;
    bVar25 = param_3[4] + UNK_00183f64;
    bVar26 = param_3[5] + UNK_00183f65;
    bVar27 = param_3[6] + UNK_00183f66;
    bVar28 = param_3[7] + UNK_00183f67;
    bVar29 = param_3[8] + UNK_00183f68;
    bVar30 = param_3[9] + UNK_00183f69;
    bVar31 = param_3[10] + UNK_00183f6a;
    bVar32 = param_3[0xb] + UNK_00183f6b;
    bVar33 = param_3[0xc] + UNK_00183f6c;
    bVar34 = param_3[0xd] + UNK_00183f6d;
    bVar35 = param_3[0xe] + UNK_00183f6e;
    bVar36 = param_3[0xf] + UNK_00183f6f;
    auVar37[0] = -((byte)(-((byte)((DAT_00183030 < bVar21) * DAT_00183030 |
                                  (DAT_00183030 >= bVar21) * bVar21) == bVar21) & DAT_00184830 |
                         *param_3) ==
                  (byte)(-((byte)((DAT_00183030 < bVar5) * DAT_00183030 |
                                 (DAT_00183030 >= bVar5) * bVar5) == bVar5) & DAT_00184830 |
                        *param_1));
    auVar37[1] = -((byte)(-((byte)((UNK_00183031 < bVar22) * UNK_00183031 |
                                  (UNK_00183031 >= bVar22) * bVar22) == bVar22) & UNK_00184831 |
                         param_3[1]) ==
                  (byte)(-((byte)((UNK_00183031 < bVar6) * UNK_00183031 |
                                 (UNK_00183031 >= bVar6) * bVar6) == bVar6) & UNK_00184831 |
                        param_1[1]));
    auVar37[2] = -((byte)(-((byte)((UNK_00183032 < bVar23) * UNK_00183032 |
                                  (UNK_00183032 >= bVar23) * bVar23) == bVar23) & UNK_00184832 |
                         param_3[2]) ==
                  (byte)(-((byte)((UNK_00183032 < bVar7) * UNK_00183032 |
                                 (UNK_00183032 >= bVar7) * bVar7) == bVar7) & UNK_00184832 |
                        param_1[2]));
    auVar37[3] = -((byte)(-((byte)((UNK_00183033 < bVar24) * UNK_00183033 |
                                  (UNK_00183033 >= bVar24) * bVar24) == bVar24) & UNK_00184833 |
                         param_3[3]) ==
                  (byte)(-((byte)((UNK_00183033 < bVar8) * UNK_00183033 |
                                 (UNK_00183033 >= bVar8) * bVar8) == bVar8) & UNK_00184833 |
                        param_1[3]));
    auVar37[4] = -((byte)(-((byte)((UNK_00183034 < bVar25) * UNK_00183034 |
                                  (UNK_00183034 >= bVar25) * bVar25) == bVar25) & UNK_00184834 |
                         param_3[4]) ==
                  (byte)(-((byte)((UNK_00183034 < bVar9) * UNK_00183034 |
                                 (UNK_00183034 >= bVar9) * bVar9) == bVar9) & UNK_00184834 |
                        param_1[4]));
    auVar37[5] = -((byte)(-((byte)((UNK_00183035 < bVar26) * UNK_00183035 |
                                  (UNK_00183035 >= bVar26) * bVar26) == bVar26) & UNK_00184835 |
                         param_3[5]) ==
                  (byte)(-((byte)((UNK_00183035 < bVar10) * UNK_00183035 |
                                 (UNK_00183035 >= bVar10) * bVar10) == bVar10) & UNK_00184835 |
                        param_1[5]));
    auVar37[6] = -((byte)(-((byte)((UNK_00183036 < bVar27) * UNK_00183036 |
                                  (UNK_00183036 >= bVar27) * bVar27) == bVar27) & UNK_00184836 |
                         param_3[6]) ==
                  (byte)(-((byte)((UNK_00183036 < bVar11) * UNK_00183036 |
                                 (UNK_00183036 >= bVar11) * bVar11) == bVar11) & UNK_00184836 |
                        param_1[6]));
    auVar37[7] = -((byte)(-((byte)((UNK_00183037 < bVar28) * UNK_00183037 |
                                  (UNK_00183037 >= bVar28) * bVar28) == bVar28) & UNK_00184837 |
                         param_3[7]) ==
                  (byte)(-((byte)((UNK_00183037 < bVar12) * UNK_00183037 |
                                 (UNK_00183037 >= bVar12) * bVar12) == bVar12) & UNK_00184837 |
                        param_1[7]));
    auVar37[8] = -((byte)(-((byte)((UNK_00183038 < bVar29) * UNK_00183038 |
                                  (UNK_00183038 >= bVar29) * bVar29) == bVar29) & UNK_00184838 |
                         param_3[8]) ==
                  (byte)(-((byte)((UNK_00183038 < bVar13) * UNK_00183038 |
                                 (UNK_00183038 >= bVar13) * bVar13) == bVar13) & UNK_00184838 |
                        param_1[8]));
    auVar37[9] = -((byte)(-((byte)((UNK_00183039 < bVar30) * UNK_00183039 |
                                  (UNK_00183039 >= bVar30) * bVar30) == bVar30) & UNK_00184839 |
                         param_3[9]) ==
                  (byte)(-((byte)((UNK_00183039 < bVar14) * UNK_00183039 |
                                 (UNK_00183039 >= bVar14) * bVar14) == bVar14) & UNK_00184839 |
                        param_1[9]));
    auVar37[10] = -((byte)(-((byte)((UNK_0018303a < bVar31) * UNK_0018303a |
                                   (UNK_0018303a >= bVar31) * bVar31) == bVar31) & UNK_0018483a |
                          param_3[10]) ==
                   (byte)(-((byte)((UNK_0018303a < bVar15) * UNK_0018303a |
                                  (UNK_0018303a >= bVar15) * bVar15) == bVar15) & UNK_0018483a |
                         param_1[10]));
    auVar37[0xb] = -((byte)(-((byte)((UNK_0018303b < bVar32) * UNK_0018303b |
                                    (UNK_0018303b >= bVar32) * bVar32) == bVar32) & UNK_0018483b |
                           param_3[0xb]) ==
                    (byte)(-((byte)((UNK_0018303b < bVar16) * UNK_0018303b |
                                   (UNK_0018303b >= bVar16) * bVar16) == bVar16) & UNK_0018483b |
                          param_1[0xb]));
    auVar37[0xc] = -((byte)(-((byte)((UNK_0018303c < bVar33) * UNK_0018303c |
                                    (UNK_0018303c >= bVar33) * bVar33) == bVar33) & UNK_0018483c |
                           param_3[0xc]) ==
                    (byte)(-((byte)((UNK_0018303c < bVar17) * UNK_0018303c |
                                   (UNK_0018303c >= bVar17) * bVar17) == bVar17) & UNK_0018483c |
                          param_1[0xc]));
    auVar37[0xd] = -((byte)(-((byte)((UNK_0018303d < bVar34) * UNK_0018303d |
                                    (UNK_0018303d >= bVar34) * bVar34) == bVar34) & UNK_0018483d |
                           param_3[0xd]) ==
                    (byte)(-((byte)((UNK_0018303d < bVar18) * UNK_0018303d |
                                   (UNK_0018303d >= bVar18) * bVar18) == bVar18) & UNK_0018483d |
                          param_1[0xd]));
    auVar37[0xe] = -((byte)(-((byte)((UNK_0018303e < bVar35) * UNK_0018303e |
                                    (UNK_0018303e >= bVar35) * bVar35) == bVar35) & UNK_0018483e |
                           param_3[0xe]) ==
                    (byte)(-((byte)((UNK_0018303e < bVar19) * UNK_0018303e |
                                   (UNK_0018303e >= bVar19) * bVar19) == bVar19) & UNK_0018483e |
                          param_1[0xe]));
    auVar37[0xf] = -((byte)(-((byte)((UNK_0018303f < bVar36) * UNK_0018303f |
                                    (UNK_0018303f >= bVar36) * bVar36) == bVar36) & UNK_0018483f |
                           param_3[0xf]) ==
                    (byte)(-((byte)((UNK_0018303f < bVar20) * UNK_0018303f |
                                   (UNK_0018303f >= bVar20) * bVar20) == bVar20) & UNK_0018483f |
                          param_1[0xf]));
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if ((param_2 & 3) == 0) {
        return 1;
      }
      param_1 = param_1 + (param_2 - 0x10);
      bVar21 = *param_1 + DAT_00183f60;
      bVar22 = param_1[1] + UNK_00183f61;
      bVar23 = param_1[2] + UNK_00183f62;
      bVar24 = param_1[3] + UNK_00183f63;
      bVar25 = param_1[4] + UNK_00183f64;
      bVar26 = param_1[5] + UNK_00183f65;
      bVar27 = param_1[6] + UNK_00183f66;
      bVar28 = param_1[7] + UNK_00183f67;
      bVar29 = param_1[8] + UNK_00183f68;
      bVar30 = param_1[9] + UNK_00183f69;
      bVar31 = param_1[10] + UNK_00183f6a;
      bVar32 = param_1[0xb] + UNK_00183f6b;
      bVar33 = param_1[0xc] + UNK_00183f6c;
      bVar34 = param_1[0xd] + UNK_00183f6d;
      bVar35 = param_1[0xe] + UNK_00183f6e;
      bVar36 = param_1[0xf] + UNK_00183f6f;
      param_3 = param_3 + (param_2 - 0x10);
      bVar5 = DAT_00183f60 + *param_3;
      bVar6 = UNK_00183f61 + param_3[1];
      bVar7 = UNK_00183f62 + param_3[2];
      bVar8 = UNK_00183f63 + param_3[3];
      bVar9 = UNK_00183f64 + param_3[4];
      bVar10 = UNK_00183f65 + param_3[5];
      bVar11 = UNK_00183f66 + param_3[6];
      bVar12 = UNK_00183f67 + param_3[7];
      bVar13 = UNK_00183f68 + param_3[8];
      bVar14 = UNK_00183f69 + param_3[9];
      bVar15 = UNK_00183f6a + param_3[10];
      bVar16 = UNK_00183f6b + param_3[0xb];
      bVar17 = UNK_00183f6c + param_3[0xc];
      bVar18 = UNK_00183f6d + param_3[0xd];
      bVar19 = UNK_00183f6e + param_3[0xe];
      bVar20 = UNK_00183f6f + param_3[0xf];
      auVar4[0] = -((byte)(-((byte)((bVar5 < DAT_00183030) * bVar5 |
                                   (bVar5 >= DAT_00183030) * DAT_00183030) == bVar5) & DAT_00184830
                          | *param_3) ==
                   (byte)(-((byte)((DAT_00183030 < bVar21) * DAT_00183030 |
                                  (DAT_00183030 >= bVar21) * bVar21) == bVar21) & DAT_00184830 |
                         *param_1));
      auVar4[1] = -((byte)(-((byte)((bVar6 < UNK_00183031) * bVar6 |
                                   (bVar6 >= UNK_00183031) * UNK_00183031) == bVar6) & UNK_00184831
                          | param_3[1]) ==
                   (byte)(-((byte)((UNK_00183031 < bVar22) * UNK_00183031 |
                                  (UNK_00183031 >= bVar22) * bVar22) == bVar22) & UNK_00184831 |
                         param_1[1]));
      auVar4[2] = -((byte)(-((byte)((bVar7 < UNK_00183032) * bVar7 |
                                   (bVar7 >= UNK_00183032) * UNK_00183032) == bVar7) & UNK_00184832
                          | param_3[2]) ==
                   (byte)(-((byte)((UNK_00183032 < bVar23) * UNK_00183032 |
                                  (UNK_00183032 >= bVar23) * bVar23) == bVar23) & UNK_00184832 |
                         param_1[2]));
      auVar4[3] = -((byte)(-((byte)((bVar8 < UNK_00183033) * bVar8 |
                                   (bVar8 >= UNK_00183033) * UNK_00183033) == bVar8) & UNK_00184833
                          | param_3[3]) ==
                   (byte)(-((byte)((UNK_00183033 < bVar24) * UNK_00183033 |
                                  (UNK_00183033 >= bVar24) * bVar24) == bVar24) & UNK_00184833 |
                         param_1[3]));
      auVar4[4] = -((byte)(-((byte)((bVar9 < UNK_00183034) * bVar9 |
                                   (bVar9 >= UNK_00183034) * UNK_00183034) == bVar9) & UNK_00184834
                          | param_3[4]) ==
                   (byte)(-((byte)((UNK_00183034 < bVar25) * UNK_00183034 |
                                  (UNK_00183034 >= bVar25) * bVar25) == bVar25) & UNK_00184834 |
                         param_1[4]));
      auVar4[5] = -((byte)(-((byte)((bVar10 < UNK_00183035) * bVar10 |
                                   (bVar10 >= UNK_00183035) * UNK_00183035) == bVar10) &
                           UNK_00184835 | param_3[5]) ==
                   (byte)(-((byte)((UNK_00183035 < bVar26) * UNK_00183035 |
                                  (UNK_00183035 >= bVar26) * bVar26) == bVar26) & UNK_00184835 |
                         param_1[5]));
      auVar4[6] = -((byte)(-((byte)((bVar11 < UNK_00183036) * bVar11 |
                                   (bVar11 >= UNK_00183036) * UNK_00183036) == bVar11) &
                           UNK_00184836 | param_3[6]) ==
                   (byte)(-((byte)((UNK_00183036 < bVar27) * UNK_00183036 |
                                  (UNK_00183036 >= bVar27) * bVar27) == bVar27) & UNK_00184836 |
                         param_1[6]));
      auVar4[7] = -((byte)(-((byte)((bVar12 < UNK_00183037) * bVar12 |
                                   (bVar12 >= UNK_00183037) * UNK_00183037) == bVar12) &
                           UNK_00184837 | param_3[7]) ==
                   (byte)(-((byte)((UNK_00183037 < bVar28) * UNK_00183037 |
                                  (UNK_00183037 >= bVar28) * bVar28) == bVar28) & UNK_00184837 |
                         param_1[7]));
      auVar4[8] = -((byte)(-((byte)((bVar13 < UNK_00183038) * bVar13 |
                                   (bVar13 >= UNK_00183038) * UNK_00183038) == bVar13) &
                           UNK_00184838 | param_3[8]) ==
                   (byte)(-((byte)((UNK_00183038 < bVar29) * UNK_00183038 |
                                  (UNK_00183038 >= bVar29) * bVar29) == bVar29) & UNK_00184838 |
                         param_1[8]));
      auVar4[9] = -((byte)(-((byte)((bVar14 < UNK_00183039) * bVar14 |
                                   (bVar14 >= UNK_00183039) * UNK_00183039) == bVar14) &
                           UNK_00184839 | param_3[9]) ==
                   (byte)(-((byte)((UNK_00183039 < bVar30) * UNK_00183039 |
                                  (UNK_00183039 >= bVar30) * bVar30) == bVar30) & UNK_00184839 |
                         param_1[9]));
      auVar4[10] = -((byte)(-((byte)((bVar15 < UNK_0018303a) * bVar15 |
                                    (bVar15 >= UNK_0018303a) * UNK_0018303a) == bVar15) &
                            UNK_0018483a | param_3[10]) ==
                    (byte)(-((byte)((UNK_0018303a < bVar31) * UNK_0018303a |
                                   (UNK_0018303a >= bVar31) * bVar31) == bVar31) & UNK_0018483a |
                          param_1[10]));
      auVar4[0xb] = -((byte)(-((byte)((bVar16 < UNK_0018303b) * bVar16 |
                                     (bVar16 >= UNK_0018303b) * UNK_0018303b) == bVar16) &
                             UNK_0018483b | param_3[0xb]) ==
                     (byte)(-((byte)((UNK_0018303b < bVar32) * UNK_0018303b |
                                    (UNK_0018303b >= bVar32) * bVar32) == bVar32) & UNK_0018483b |
                           param_1[0xb]));
      auVar4[0xc] = -((byte)(-((byte)((bVar17 < UNK_0018303c) * bVar17 |
                                     (bVar17 >= UNK_0018303c) * UNK_0018303c) == bVar17) &
                             UNK_0018483c | param_3[0xc]) ==
                     (byte)(-((byte)((UNK_0018303c < bVar33) * UNK_0018303c |
                                    (UNK_0018303c >= bVar33) * bVar33) == bVar33) & UNK_0018483c |
                           param_1[0xc]));
      auVar4[0xd] = -((byte)(-((byte)((bVar18 < UNK_0018303d) * bVar18 |
                                     (bVar18 >= UNK_0018303d) * UNK_0018303d) == bVar18) &
                             UNK_0018483d | param_3[0xd]) ==
                     (byte)(-((byte)((UNK_0018303d < bVar34) * UNK_0018303d |
                                    (UNK_0018303d >= bVar34) * bVar34) == bVar34) & UNK_0018483d |
                           param_1[0xd]));
      auVar4[0xe] = -((byte)(-((byte)((bVar19 < UNK_0018303e) * bVar19 |
                                     (bVar19 >= UNK_0018303e) * UNK_0018303e) == bVar19) &
                             UNK_0018483e | param_3[0xe]) ==
                     (byte)(-((byte)((UNK_0018303e < bVar35) * UNK_0018303e |
                                    (UNK_0018303e >= bVar35) * bVar35) == bVar35) & UNK_0018483e |
                           param_1[0xe]));
      auVar4[0xf] = -((byte)(-((byte)((bVar20 < UNK_0018303f) * bVar20 |
                                     (bVar20 >= UNK_0018303f) * UNK_0018303f) == bVar20) &
                             UNK_0018483f | param_3[0xf]) ==
                     (byte)(-((byte)((UNK_0018303f < bVar36) * UNK_0018303f |
                                    (UNK_0018303f >= bVar36) * bVar36) == bVar36) & UNK_0018483f |
                           param_1[0xf]));
      if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        return 1;
      }
    }
  }
  return 0;
}


