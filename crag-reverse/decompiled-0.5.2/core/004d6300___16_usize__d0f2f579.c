// 004d6300 <16:usize>

/* <[u8]>::eq_ignore_ascii_case_chunks::<16usize> */

undefined8 __rustcall
<[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
          (longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
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
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  uVar3 = param_4 >> 4;
  if (param_2 >> 4 < param_4 >> 4) {
    uVar3 = param_2 >> 4;
  }
  lVar5 = 0;
  do {
    pbVar1 = (byte *)(param_1 + lVar5);
    bVar7 = *pbVar1 + DAT_00183f60;
    bVar9 = pbVar1[1] + UNK_00183f61;
    bVar11 = pbVar1[2] + UNK_00183f62;
    bVar13 = pbVar1[3] + UNK_00183f63;
    bVar15 = pbVar1[4] + UNK_00183f64;
    bVar17 = pbVar1[5] + UNK_00183f65;
    bVar19 = pbVar1[6] + UNK_00183f66;
    bVar21 = pbVar1[7] + UNK_00183f67;
    bVar23 = pbVar1[8] + UNK_00183f68;
    bVar25 = pbVar1[9] + UNK_00183f69;
    bVar27 = pbVar1[10] + UNK_00183f6a;
    bVar29 = pbVar1[0xb] + UNK_00183f6b;
    bVar31 = pbVar1[0xc] + UNK_00183f6c;
    bVar33 = pbVar1[0xd] + UNK_00183f6d;
    bVar35 = pbVar1[0xe] + UNK_00183f6e;
    bVar37 = pbVar1[0xf] + UNK_00183f6f;
    pbVar2 = (byte *)(param_3 + lVar5);
    bVar8 = *pbVar2 + DAT_00183f60;
    bVar10 = pbVar2[1] + UNK_00183f61;
    bVar12 = pbVar2[2] + UNK_00183f62;
    bVar14 = pbVar2[3] + UNK_00183f63;
    bVar16 = pbVar2[4] + UNK_00183f64;
    bVar18 = pbVar2[5] + UNK_00183f65;
    bVar20 = pbVar2[6] + UNK_00183f66;
    bVar22 = pbVar2[7] + UNK_00183f67;
    bVar24 = pbVar2[8] + UNK_00183f68;
    bVar26 = pbVar2[9] + UNK_00183f69;
    bVar28 = pbVar2[10] + UNK_00183f6a;
    bVar30 = pbVar2[0xb] + UNK_00183f6b;
    bVar32 = pbVar2[0xc] + UNK_00183f6c;
    bVar34 = pbVar2[0xd] + UNK_00183f6d;
    bVar36 = pbVar2[0xe] + UNK_00183f6e;
    bVar38 = pbVar2[0xf] + UNK_00183f6f;
    auVar39[0] = -((byte)(-((byte)((DAT_00183030 < bVar8) * DAT_00183030 |
                                  (DAT_00183030 >= bVar8) * bVar8) == bVar8) & DAT_00184830 |
                         *pbVar2) ==
                  (byte)(-((byte)((DAT_00183030 < bVar7) * DAT_00183030 |
                                 (DAT_00183030 >= bVar7) * bVar7) == bVar7) & DAT_00184830 | *pbVar1
                        ));
    auVar39[1] = -((byte)(-((byte)((UNK_00183031 < bVar10) * UNK_00183031 |
                                  (UNK_00183031 >= bVar10) * bVar10) == bVar10) & UNK_00184831 |
                         pbVar2[1]) ==
                  (byte)(-((byte)((UNK_00183031 < bVar9) * UNK_00183031 |
                                 (UNK_00183031 >= bVar9) * bVar9) == bVar9) & UNK_00184831 |
                        pbVar1[1]));
    auVar39[2] = -((byte)(-((byte)((UNK_00183032 < bVar12) * UNK_00183032 |
                                  (UNK_00183032 >= bVar12) * bVar12) == bVar12) & UNK_00184832 |
                         pbVar2[2]) ==
                  (byte)(-((byte)((UNK_00183032 < bVar11) * UNK_00183032 |
                                 (UNK_00183032 >= bVar11) * bVar11) == bVar11) & UNK_00184832 |
                        pbVar1[2]));
    auVar39[3] = -((byte)(-((byte)((UNK_00183033 < bVar14) * UNK_00183033 |
                                  (UNK_00183033 >= bVar14) * bVar14) == bVar14) & UNK_00184833 |
                         pbVar2[3]) ==
                  (byte)(-((byte)((UNK_00183033 < bVar13) * UNK_00183033 |
                                 (UNK_00183033 >= bVar13) * bVar13) == bVar13) & UNK_00184833 |
                        pbVar1[3]));
    auVar39[4] = -((byte)(-((byte)((UNK_00183034 < bVar16) * UNK_00183034 |
                                  (UNK_00183034 >= bVar16) * bVar16) == bVar16) & UNK_00184834 |
                         pbVar2[4]) ==
                  (byte)(-((byte)((UNK_00183034 < bVar15) * UNK_00183034 |
                                 (UNK_00183034 >= bVar15) * bVar15) == bVar15) & UNK_00184834 |
                        pbVar1[4]));
    auVar39[5] = -((byte)(-((byte)((UNK_00183035 < bVar18) * UNK_00183035 |
                                  (UNK_00183035 >= bVar18) * bVar18) == bVar18) & UNK_00184835 |
                         pbVar2[5]) ==
                  (byte)(-((byte)((UNK_00183035 < bVar17) * UNK_00183035 |
                                 (UNK_00183035 >= bVar17) * bVar17) == bVar17) & UNK_00184835 |
                        pbVar1[5]));
    auVar39[6] = -((byte)(-((byte)((UNK_00183036 < bVar20) * UNK_00183036 |
                                  (UNK_00183036 >= bVar20) * bVar20) == bVar20) & UNK_00184836 |
                         pbVar2[6]) ==
                  (byte)(-((byte)((UNK_00183036 < bVar19) * UNK_00183036 |
                                 (UNK_00183036 >= bVar19) * bVar19) == bVar19) & UNK_00184836 |
                        pbVar1[6]));
    auVar39[7] = -((byte)(-((byte)((UNK_00183037 < bVar22) * UNK_00183037 |
                                  (UNK_00183037 >= bVar22) * bVar22) == bVar22) & UNK_00184837 |
                         pbVar2[7]) ==
                  (byte)(-((byte)((UNK_00183037 < bVar21) * UNK_00183037 |
                                 (UNK_00183037 >= bVar21) * bVar21) == bVar21) & UNK_00184837 |
                        pbVar1[7]));
    auVar39[8] = -((byte)(-((byte)((UNK_00183038 < bVar24) * UNK_00183038 |
                                  (UNK_00183038 >= bVar24) * bVar24) == bVar24) & UNK_00184838 |
                         pbVar2[8]) ==
                  (byte)(-((byte)((UNK_00183038 < bVar23) * UNK_00183038 |
                                 (UNK_00183038 >= bVar23) * bVar23) == bVar23) & UNK_00184838 |
                        pbVar1[8]));
    auVar39[9] = -((byte)(-((byte)((UNK_00183039 < bVar26) * UNK_00183039 |
                                  (UNK_00183039 >= bVar26) * bVar26) == bVar26) & UNK_00184839 |
                         pbVar2[9]) ==
                  (byte)(-((byte)((UNK_00183039 < bVar25) * UNK_00183039 |
                                 (UNK_00183039 >= bVar25) * bVar25) == bVar25) & UNK_00184839 |
                        pbVar1[9]));
    auVar39[10] = -((byte)(-((byte)((UNK_0018303a < bVar28) * UNK_0018303a |
                                   (UNK_0018303a >= bVar28) * bVar28) == bVar28) & UNK_0018483a |
                          pbVar2[10]) ==
                   (byte)(-((byte)((UNK_0018303a < bVar27) * UNK_0018303a |
                                  (UNK_0018303a >= bVar27) * bVar27) == bVar27) & UNK_0018483a |
                         pbVar1[10]));
    auVar39[0xb] = -((byte)(-((byte)((UNK_0018303b < bVar30) * UNK_0018303b |
                                    (UNK_0018303b >= bVar30) * bVar30) == bVar30) & UNK_0018483b |
                           pbVar2[0xb]) ==
                    (byte)(-((byte)((UNK_0018303b < bVar29) * UNK_0018303b |
                                   (UNK_0018303b >= bVar29) * bVar29) == bVar29) & UNK_0018483b |
                          pbVar1[0xb]));
    auVar39[0xc] = -((byte)(-((byte)((UNK_0018303c < bVar32) * UNK_0018303c |
                                    (UNK_0018303c >= bVar32) * bVar32) == bVar32) & UNK_0018483c |
                           pbVar2[0xc]) ==
                    (byte)(-((byte)((UNK_0018303c < bVar31) * UNK_0018303c |
                                   (UNK_0018303c >= bVar31) * bVar31) == bVar31) & UNK_0018483c |
                          pbVar1[0xc]));
    auVar39[0xd] = -((byte)(-((byte)((UNK_0018303d < bVar34) * UNK_0018303d |
                                    (UNK_0018303d >= bVar34) * bVar34) == bVar34) & UNK_0018483d |
                           pbVar2[0xd]) ==
                    (byte)(-((byte)((UNK_0018303d < bVar33) * UNK_0018303d |
                                   (UNK_0018303d >= bVar33) * bVar33) == bVar33) & UNK_0018483d |
                          pbVar1[0xd]));
    auVar39[0xe] = -((byte)(-((byte)((UNK_0018303e < bVar36) * UNK_0018303e |
                                    (UNK_0018303e >= bVar36) * bVar36) == bVar36) & UNK_0018483e |
                           pbVar2[0xe]) ==
                    (byte)(-((byte)((UNK_0018303e < bVar35) * UNK_0018303e |
                                   (UNK_0018303e >= bVar35) * bVar35) == bVar35) & UNK_0018483e |
                          pbVar1[0xe]));
    auVar39[0xf] = -((byte)(-((byte)((UNK_0018303f < bVar38) * UNK_0018303f |
                                    (UNK_0018303f >= bVar38) * bVar38) == bVar38) & UNK_0018483f |
                           pbVar2[0xf]) ==
                    (byte)(-((byte)((UNK_0018303f < bVar37) * UNK_0018303f |
                                   (UNK_0018303f >= bVar37) * bVar37) == bVar37) & UNK_0018483f |
                          pbVar1[0xf]));
    if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
                ) != 0xffff) goto LAB_004d63f3;
    lVar5 = lVar5 + 0x10;
  } while (uVar3 * 0x10 != lVar5);
  uVar4 = CONCAT71((int7)(uVar3 * 0x10 >> 8),1);
  if ((param_2 & 0xf) != 0) {
    pbVar1 = (byte *)(param_1 + -0x10 + param_2);
    bVar23 = *pbVar1 + DAT_00183f60;
    bVar24 = pbVar1[1] + UNK_00183f61;
    bVar25 = pbVar1[2] + UNK_00183f62;
    bVar26 = pbVar1[3] + UNK_00183f63;
    bVar27 = pbVar1[4] + UNK_00183f64;
    bVar28 = pbVar1[5] + UNK_00183f65;
    bVar29 = pbVar1[6] + UNK_00183f66;
    bVar30 = pbVar1[7] + UNK_00183f67;
    bVar31 = pbVar1[8] + UNK_00183f68;
    bVar32 = pbVar1[9] + UNK_00183f69;
    bVar33 = pbVar1[10] + UNK_00183f6a;
    bVar34 = pbVar1[0xb] + UNK_00183f6b;
    bVar35 = pbVar1[0xc] + UNK_00183f6c;
    bVar36 = pbVar1[0xd] + UNK_00183f6d;
    bVar37 = pbVar1[0xe] + UNK_00183f6e;
    bVar38 = pbVar1[0xf] + UNK_00183f6f;
    pbVar2 = (byte *)(param_3 + -0x10 + param_4);
    bVar7 = DAT_00183f60 + *pbVar2;
    bVar8 = UNK_00183f61 + pbVar2[1];
    bVar9 = UNK_00183f62 + pbVar2[2];
    bVar10 = UNK_00183f63 + pbVar2[3];
    bVar11 = UNK_00183f64 + pbVar2[4];
    bVar12 = UNK_00183f65 + pbVar2[5];
    bVar13 = UNK_00183f66 + pbVar2[6];
    bVar14 = UNK_00183f67 + pbVar2[7];
    bVar15 = UNK_00183f68 + pbVar2[8];
    bVar16 = UNK_00183f69 + pbVar2[9];
    bVar17 = UNK_00183f6a + pbVar2[10];
    bVar18 = UNK_00183f6b + pbVar2[0xb];
    bVar19 = UNK_00183f6c + pbVar2[0xc];
    bVar20 = UNK_00183f6d + pbVar2[0xd];
    bVar21 = UNK_00183f6e + pbVar2[0xe];
    bVar22 = UNK_00183f6f + pbVar2[0xf];
    auVar6[0] = -((byte)(-((byte)((bVar7 < DAT_00183030) * bVar7 |
                                 (bVar7 >= DAT_00183030) * DAT_00183030) == bVar7) & DAT_00184830 |
                        *pbVar2) ==
                 (byte)(-((byte)((DAT_00183030 < bVar23) * DAT_00183030 |
                                (DAT_00183030 >= bVar23) * bVar23) == bVar23) & DAT_00184830 |
                       *pbVar1));
    auVar6[1] = -((byte)(-((byte)((bVar8 < UNK_00183031) * bVar8 |
                                 (bVar8 >= UNK_00183031) * UNK_00183031) == bVar8) & UNK_00184831 |
                        pbVar2[1]) ==
                 (byte)(-((byte)((UNK_00183031 < bVar24) * UNK_00183031 |
                                (UNK_00183031 >= bVar24) * bVar24) == bVar24) & UNK_00184831 |
                       pbVar1[1]));
    auVar6[2] = -((byte)(-((byte)((bVar9 < UNK_00183032) * bVar9 |
                                 (bVar9 >= UNK_00183032) * UNK_00183032) == bVar9) & UNK_00184832 |
                        pbVar2[2]) ==
                 (byte)(-((byte)((UNK_00183032 < bVar25) * UNK_00183032 |
                                (UNK_00183032 >= bVar25) * bVar25) == bVar25) & UNK_00184832 |
                       pbVar1[2]));
    auVar6[3] = -((byte)(-((byte)((bVar10 < UNK_00183033) * bVar10 |
                                 (bVar10 >= UNK_00183033) * UNK_00183033) == bVar10) & UNK_00184833
                        | pbVar2[3]) ==
                 (byte)(-((byte)((UNK_00183033 < bVar26) * UNK_00183033 |
                                (UNK_00183033 >= bVar26) * bVar26) == bVar26) & UNK_00184833 |
                       pbVar1[3]));
    auVar6[4] = -((byte)(-((byte)((bVar11 < UNK_00183034) * bVar11 |
                                 (bVar11 >= UNK_00183034) * UNK_00183034) == bVar11) & UNK_00184834
                        | pbVar2[4]) ==
                 (byte)(-((byte)((UNK_00183034 < bVar27) * UNK_00183034 |
                                (UNK_00183034 >= bVar27) * bVar27) == bVar27) & UNK_00184834 |
                       pbVar1[4]));
    auVar6[5] = -((byte)(-((byte)((bVar12 < UNK_00183035) * bVar12 |
                                 (bVar12 >= UNK_00183035) * UNK_00183035) == bVar12) & UNK_00184835
                        | pbVar2[5]) ==
                 (byte)(-((byte)((UNK_00183035 < bVar28) * UNK_00183035 |
                                (UNK_00183035 >= bVar28) * bVar28) == bVar28) & UNK_00184835 |
                       pbVar1[5]));
    auVar6[6] = -((byte)(-((byte)((bVar13 < UNK_00183036) * bVar13 |
                                 (bVar13 >= UNK_00183036) * UNK_00183036) == bVar13) & UNK_00184836
                        | pbVar2[6]) ==
                 (byte)(-((byte)((UNK_00183036 < bVar29) * UNK_00183036 |
                                (UNK_00183036 >= bVar29) * bVar29) == bVar29) & UNK_00184836 |
                       pbVar1[6]));
    auVar6[7] = -((byte)(-((byte)((bVar14 < UNK_00183037) * bVar14 |
                                 (bVar14 >= UNK_00183037) * UNK_00183037) == bVar14) & UNK_00184837
                        | pbVar2[7]) ==
                 (byte)(-((byte)((UNK_00183037 < bVar30) * UNK_00183037 |
                                (UNK_00183037 >= bVar30) * bVar30) == bVar30) & UNK_00184837 |
                       pbVar1[7]));
    auVar6[8] = -((byte)(-((byte)((bVar15 < UNK_00183038) * bVar15 |
                                 (bVar15 >= UNK_00183038) * UNK_00183038) == bVar15) & UNK_00184838
                        | pbVar2[8]) ==
                 (byte)(-((byte)((UNK_00183038 < bVar31) * UNK_00183038 |
                                (UNK_00183038 >= bVar31) * bVar31) == bVar31) & UNK_00184838 |
                       pbVar1[8]));
    auVar6[9] = -((byte)(-((byte)((bVar16 < UNK_00183039) * bVar16 |
                                 (bVar16 >= UNK_00183039) * UNK_00183039) == bVar16) & UNK_00184839
                        | pbVar2[9]) ==
                 (byte)(-((byte)((UNK_00183039 < bVar32) * UNK_00183039 |
                                (UNK_00183039 >= bVar32) * bVar32) == bVar32) & UNK_00184839 |
                       pbVar1[9]));
    auVar6[10] = -((byte)(-((byte)((bVar17 < UNK_0018303a) * bVar17 |
                                  (bVar17 >= UNK_0018303a) * UNK_0018303a) == bVar17) & UNK_0018483a
                         | pbVar2[10]) ==
                  (byte)(-((byte)((UNK_0018303a < bVar33) * UNK_0018303a |
                                 (UNK_0018303a >= bVar33) * bVar33) == bVar33) & UNK_0018483a |
                        pbVar1[10]));
    auVar6[0xb] = -((byte)(-((byte)((bVar18 < UNK_0018303b) * bVar18 |
                                   (bVar18 >= UNK_0018303b) * UNK_0018303b) == bVar18) &
                           UNK_0018483b | pbVar2[0xb]) ==
                   (byte)(-((byte)((UNK_0018303b < bVar34) * UNK_0018303b |
                                  (UNK_0018303b >= bVar34) * bVar34) == bVar34) & UNK_0018483b |
                         pbVar1[0xb]));
    auVar6[0xc] = -((byte)(-((byte)((bVar19 < UNK_0018303c) * bVar19 |
                                   (bVar19 >= UNK_0018303c) * UNK_0018303c) == bVar19) &
                           UNK_0018483c | pbVar2[0xc]) ==
                   (byte)(-((byte)((UNK_0018303c < bVar35) * UNK_0018303c |
                                  (UNK_0018303c >= bVar35) * bVar35) == bVar35) & UNK_0018483c |
                         pbVar1[0xc]));
    auVar6[0xd] = -((byte)(-((byte)((bVar20 < UNK_0018303d) * bVar20 |
                                   (bVar20 >= UNK_0018303d) * UNK_0018303d) == bVar20) &
                           UNK_0018483d | pbVar2[0xd]) ==
                   (byte)(-((byte)((UNK_0018303d < bVar36) * UNK_0018303d |
                                  (UNK_0018303d >= bVar36) * bVar36) == bVar36) & UNK_0018483d |
                         pbVar1[0xd]));
    auVar6[0xe] = -((byte)(-((byte)((bVar21 < UNK_0018303e) * bVar21 |
                                   (bVar21 >= UNK_0018303e) * UNK_0018303e) == bVar21) &
                           UNK_0018483e | pbVar2[0xe]) ==
                   (byte)(-((byte)((UNK_0018303e < bVar37) * UNK_0018303e |
                                  (UNK_0018303e >= bVar37) * bVar37) == bVar37) & UNK_0018483e |
                         pbVar1[0xe]));
    auVar6[0xf] = -((byte)(-((byte)((bVar22 < UNK_0018303f) * bVar22 |
                                   (bVar22 >= UNK_0018303f) * UNK_0018303f) == bVar22) &
                           UNK_0018483f | pbVar2[0xf]) ==
                   (byte)(-((byte)((UNK_0018303f < bVar38) * UNK_0018303f |
                                  (UNK_0018303f >= bVar38) * bVar38) == bVar38) & UNK_0018483f |
                         pbVar1[0xf]));
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        != 0xffff) {
LAB_004d63f3:
      uVar4 = 0;
    }
  }
  return uVar4;
}


