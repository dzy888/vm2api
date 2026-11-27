// 005c3490 <16:usize>

/* <[u8]>::eq_ignore_ascii_case_chunks::<16usize> */

undefined8 __rustcall
<[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
          (longlong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
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
  byte bVar39;
  undefined1 auVar40 [16];
  
  uVar3 = param_4 >> 4;
  if (param_2 >> 4 < param_4 >> 4) {
    uVar3 = param_2 >> 4;
  }
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = uVar3 * 0x10;
    lVar6 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar6);
      bVar8 = *pbVar1 + DAT_00183f60;
      bVar10 = pbVar1[1] + UNK_00183f61;
      bVar12 = pbVar1[2] + UNK_00183f62;
      bVar14 = pbVar1[3] + UNK_00183f63;
      bVar16 = pbVar1[4] + UNK_00183f64;
      bVar18 = pbVar1[5] + UNK_00183f65;
      bVar20 = pbVar1[6] + UNK_00183f66;
      bVar22 = pbVar1[7] + UNK_00183f67;
      bVar24 = pbVar1[8] + UNK_00183f68;
      bVar26 = pbVar1[9] + UNK_00183f69;
      bVar28 = pbVar1[10] + UNK_00183f6a;
      bVar30 = pbVar1[0xb] + UNK_00183f6b;
      bVar32 = pbVar1[0xc] + UNK_00183f6c;
      bVar34 = pbVar1[0xd] + UNK_00183f6d;
      bVar36 = pbVar1[0xe] + UNK_00183f6e;
      bVar38 = pbVar1[0xf] + UNK_00183f6f;
      pbVar2 = (byte *)(param_3 + lVar6);
      bVar9 = *pbVar2 + DAT_00183f60;
      bVar11 = pbVar2[1] + UNK_00183f61;
      bVar13 = pbVar2[2] + UNK_00183f62;
      bVar15 = pbVar2[3] + UNK_00183f63;
      bVar17 = pbVar2[4] + UNK_00183f64;
      bVar19 = pbVar2[5] + UNK_00183f65;
      bVar21 = pbVar2[6] + UNK_00183f66;
      bVar23 = pbVar2[7] + UNK_00183f67;
      bVar25 = pbVar2[8] + UNK_00183f68;
      bVar27 = pbVar2[9] + UNK_00183f69;
      bVar29 = pbVar2[10] + UNK_00183f6a;
      bVar31 = pbVar2[0xb] + UNK_00183f6b;
      bVar33 = pbVar2[0xc] + UNK_00183f6c;
      bVar35 = pbVar2[0xd] + UNK_00183f6d;
      bVar37 = pbVar2[0xe] + UNK_00183f6e;
      bVar39 = pbVar2[0xf] + UNK_00183f6f;
      auVar40[0] = -((byte)(-((byte)((DAT_00183030 < bVar9) * DAT_00183030 |
                                    (DAT_00183030 >= bVar9) * bVar9) == bVar9) & DAT_00184830 |
                           *pbVar2) ==
                    (byte)(-((byte)((DAT_00183030 < bVar8) * DAT_00183030 |
                                   (DAT_00183030 >= bVar8) * bVar8) == bVar8) & DAT_00184830 |
                          *pbVar1));
      auVar40[1] = -((byte)(-((byte)((UNK_00183031 < bVar11) * UNK_00183031 |
                                    (UNK_00183031 >= bVar11) * bVar11) == bVar11) & UNK_00184831 |
                           pbVar2[1]) ==
                    (byte)(-((byte)((UNK_00183031 < bVar10) * UNK_00183031 |
                                   (UNK_00183031 >= bVar10) * bVar10) == bVar10) & UNK_00184831 |
                          pbVar1[1]));
      auVar40[2] = -((byte)(-((byte)((UNK_00183032 < bVar13) * UNK_00183032 |
                                    (UNK_00183032 >= bVar13) * bVar13) == bVar13) & UNK_00184832 |
                           pbVar2[2]) ==
                    (byte)(-((byte)((UNK_00183032 < bVar12) * UNK_00183032 |
                                   (UNK_00183032 >= bVar12) * bVar12) == bVar12) & UNK_00184832 |
                          pbVar1[2]));
      auVar40[3] = -((byte)(-((byte)((UNK_00183033 < bVar15) * UNK_00183033 |
                                    (UNK_00183033 >= bVar15) * bVar15) == bVar15) & UNK_00184833 |
                           pbVar2[3]) ==
                    (byte)(-((byte)((UNK_00183033 < bVar14) * UNK_00183033 |
                                   (UNK_00183033 >= bVar14) * bVar14) == bVar14) & UNK_00184833 |
                          pbVar1[3]));
      auVar40[4] = -((byte)(-((byte)((UNK_00183034 < bVar17) * UNK_00183034 |
                                    (UNK_00183034 >= bVar17) * bVar17) == bVar17) & UNK_00184834 |
                           pbVar2[4]) ==
                    (byte)(-((byte)((UNK_00183034 < bVar16) * UNK_00183034 |
                                   (UNK_00183034 >= bVar16) * bVar16) == bVar16) & UNK_00184834 |
                          pbVar1[4]));
      auVar40[5] = -((byte)(-((byte)((UNK_00183035 < bVar19) * UNK_00183035 |
                                    (UNK_00183035 >= bVar19) * bVar19) == bVar19) & UNK_00184835 |
                           pbVar2[5]) ==
                    (byte)(-((byte)((UNK_00183035 < bVar18) * UNK_00183035 |
                                   (UNK_00183035 >= bVar18) * bVar18) == bVar18) & UNK_00184835 |
                          pbVar1[5]));
      auVar40[6] = -((byte)(-((byte)((UNK_00183036 < bVar21) * UNK_00183036 |
                                    (UNK_00183036 >= bVar21) * bVar21) == bVar21) & UNK_00184836 |
                           pbVar2[6]) ==
                    (byte)(-((byte)((UNK_00183036 < bVar20) * UNK_00183036 |
                                   (UNK_00183036 >= bVar20) * bVar20) == bVar20) & UNK_00184836 |
                          pbVar1[6]));
      auVar40[7] = -((byte)(-((byte)((UNK_00183037 < bVar23) * UNK_00183037 |
                                    (UNK_00183037 >= bVar23) * bVar23) == bVar23) & UNK_00184837 |
                           pbVar2[7]) ==
                    (byte)(-((byte)((UNK_00183037 < bVar22) * UNK_00183037 |
                                   (UNK_00183037 >= bVar22) * bVar22) == bVar22) & UNK_00184837 |
                          pbVar1[7]));
      auVar40[8] = -((byte)(-((byte)((UNK_00183038 < bVar25) * UNK_00183038 |
                                    (UNK_00183038 >= bVar25) * bVar25) == bVar25) & UNK_00184838 |
                           pbVar2[8]) ==
                    (byte)(-((byte)((UNK_00183038 < bVar24) * UNK_00183038 |
                                   (UNK_00183038 >= bVar24) * bVar24) == bVar24) & UNK_00184838 |
                          pbVar1[8]));
      auVar40[9] = -((byte)(-((byte)((UNK_00183039 < bVar27) * UNK_00183039 |
                                    (UNK_00183039 >= bVar27) * bVar27) == bVar27) & UNK_00184839 |
                           pbVar2[9]) ==
                    (byte)(-((byte)((UNK_00183039 < bVar26) * UNK_00183039 |
                                   (UNK_00183039 >= bVar26) * bVar26) == bVar26) & UNK_00184839 |
                          pbVar1[9]));
      auVar40[10] = -((byte)(-((byte)((UNK_0018303a < bVar29) * UNK_0018303a |
                                     (UNK_0018303a >= bVar29) * bVar29) == bVar29) & UNK_0018483a |
                            pbVar2[10]) ==
                     (byte)(-((byte)((UNK_0018303a < bVar28) * UNK_0018303a |
                                    (UNK_0018303a >= bVar28) * bVar28) == bVar28) & UNK_0018483a |
                           pbVar1[10]));
      auVar40[0xb] = -((byte)(-((byte)((UNK_0018303b < bVar31) * UNK_0018303b |
                                      (UNK_0018303b >= bVar31) * bVar31) == bVar31) & UNK_0018483b |
                             pbVar2[0xb]) ==
                      (byte)(-((byte)((UNK_0018303b < bVar30) * UNK_0018303b |
                                     (UNK_0018303b >= bVar30) * bVar30) == bVar30) & UNK_0018483b |
                            pbVar1[0xb]));
      auVar40[0xc] = -((byte)(-((byte)((UNK_0018303c < bVar33) * UNK_0018303c |
                                      (UNK_0018303c >= bVar33) * bVar33) == bVar33) & UNK_0018483c |
                             pbVar2[0xc]) ==
                      (byte)(-((byte)((UNK_0018303c < bVar32) * UNK_0018303c |
                                     (UNK_0018303c >= bVar32) * bVar32) == bVar32) & UNK_0018483c |
                            pbVar1[0xc]));
      auVar40[0xd] = -((byte)(-((byte)((UNK_0018303d < bVar35) * UNK_0018303d |
                                      (UNK_0018303d >= bVar35) * bVar35) == bVar35) & UNK_0018483d |
                             pbVar2[0xd]) ==
                      (byte)(-((byte)((UNK_0018303d < bVar34) * UNK_0018303d |
                                     (UNK_0018303d >= bVar34) * bVar34) == bVar34) & UNK_0018483d |
                            pbVar1[0xd]));
      auVar40[0xe] = -((byte)(-((byte)((UNK_0018303e < bVar37) * UNK_0018303e |
                                      (UNK_0018303e >= bVar37) * bVar37) == bVar37) & UNK_0018483e |
                             pbVar2[0xe]) ==
                      (byte)(-((byte)((UNK_0018303e < bVar36) * UNK_0018303e |
                                     (UNK_0018303e >= bVar36) * bVar36) == bVar36) & UNK_0018483e |
                            pbVar1[0xe]));
      auVar40[0xf] = -((byte)(-((byte)((UNK_0018303f < bVar39) * UNK_0018303f |
                                      (UNK_0018303f >= bVar39) * bVar39) == bVar39) & UNK_0018483f |
                             pbVar2[0xf]) ==
                      (byte)(-((byte)((UNK_0018303f < bVar38) * UNK_0018303f |
                                     (UNK_0018303f >= bVar38) * bVar38) == bVar38) & UNK_0018483f |
                            pbVar1[0xf]));
      if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar40[0xf] >> 7) << 0xf) != 0xffff) goto LAB_005c35ad;
      lVar6 = lVar6 + 0x10;
    } while (lVar4 != lVar6);
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  if (0xf < param_4 && (param_2 & 0xf) != 0) {
    pbVar1 = (byte *)(param_1 + -0x10 + param_2);
    bVar24 = *pbVar1 + DAT_00183f60;
    bVar25 = pbVar1[1] + UNK_00183f61;
    bVar26 = pbVar1[2] + UNK_00183f62;
    bVar27 = pbVar1[3] + UNK_00183f63;
    bVar28 = pbVar1[4] + UNK_00183f64;
    bVar29 = pbVar1[5] + UNK_00183f65;
    bVar30 = pbVar1[6] + UNK_00183f66;
    bVar31 = pbVar1[7] + UNK_00183f67;
    bVar32 = pbVar1[8] + UNK_00183f68;
    bVar33 = pbVar1[9] + UNK_00183f69;
    bVar34 = pbVar1[10] + UNK_00183f6a;
    bVar35 = pbVar1[0xb] + UNK_00183f6b;
    bVar36 = pbVar1[0xc] + UNK_00183f6c;
    bVar37 = pbVar1[0xd] + UNK_00183f6d;
    bVar38 = pbVar1[0xe] + UNK_00183f6e;
    bVar39 = pbVar1[0xf] + UNK_00183f6f;
    pbVar2 = (byte *)(param_3 + -0x10 + param_4);
    bVar8 = DAT_00183f60 + *pbVar2;
    bVar9 = UNK_00183f61 + pbVar2[1];
    bVar10 = UNK_00183f62 + pbVar2[2];
    bVar11 = UNK_00183f63 + pbVar2[3];
    bVar12 = UNK_00183f64 + pbVar2[4];
    bVar13 = UNK_00183f65 + pbVar2[5];
    bVar14 = UNK_00183f66 + pbVar2[6];
    bVar15 = UNK_00183f67 + pbVar2[7];
    bVar16 = UNK_00183f68 + pbVar2[8];
    bVar17 = UNK_00183f69 + pbVar2[9];
    bVar18 = UNK_00183f6a + pbVar2[10];
    bVar19 = UNK_00183f6b + pbVar2[0xb];
    bVar20 = UNK_00183f6c + pbVar2[0xc];
    bVar21 = UNK_00183f6d + pbVar2[0xd];
    bVar22 = UNK_00183f6e + pbVar2[0xe];
    bVar23 = UNK_00183f6f + pbVar2[0xf];
    auVar7[0] = -((byte)(-((byte)((bVar8 < DAT_00183030) * bVar8 |
                                 (bVar8 >= DAT_00183030) * DAT_00183030) == bVar8) & DAT_00184830 |
                        *pbVar2) ==
                 (byte)(-((byte)((DAT_00183030 < bVar24) * DAT_00183030 |
                                (DAT_00183030 >= bVar24) * bVar24) == bVar24) & DAT_00184830 |
                       *pbVar1));
    auVar7[1] = -((byte)(-((byte)((bVar9 < UNK_00183031) * bVar9 |
                                 (bVar9 >= UNK_00183031) * UNK_00183031) == bVar9) & UNK_00184831 |
                        pbVar2[1]) ==
                 (byte)(-((byte)((UNK_00183031 < bVar25) * UNK_00183031 |
                                (UNK_00183031 >= bVar25) * bVar25) == bVar25) & UNK_00184831 |
                       pbVar1[1]));
    auVar7[2] = -((byte)(-((byte)((bVar10 < UNK_00183032) * bVar10 |
                                 (bVar10 >= UNK_00183032) * UNK_00183032) == bVar10) & UNK_00184832
                        | pbVar2[2]) ==
                 (byte)(-((byte)((UNK_00183032 < bVar26) * UNK_00183032 |
                                (UNK_00183032 >= bVar26) * bVar26) == bVar26) & UNK_00184832 |
                       pbVar1[2]));
    auVar7[3] = -((byte)(-((byte)((bVar11 < UNK_00183033) * bVar11 |
                                 (bVar11 >= UNK_00183033) * UNK_00183033) == bVar11) & UNK_00184833
                        | pbVar2[3]) ==
                 (byte)(-((byte)((UNK_00183033 < bVar27) * UNK_00183033 |
                                (UNK_00183033 >= bVar27) * bVar27) == bVar27) & UNK_00184833 |
                       pbVar1[3]));
    auVar7[4] = -((byte)(-((byte)((bVar12 < UNK_00183034) * bVar12 |
                                 (bVar12 >= UNK_00183034) * UNK_00183034) == bVar12) & UNK_00184834
                        | pbVar2[4]) ==
                 (byte)(-((byte)((UNK_00183034 < bVar28) * UNK_00183034 |
                                (UNK_00183034 >= bVar28) * bVar28) == bVar28) & UNK_00184834 |
                       pbVar1[4]));
    auVar7[5] = -((byte)(-((byte)((bVar13 < UNK_00183035) * bVar13 |
                                 (bVar13 >= UNK_00183035) * UNK_00183035) == bVar13) & UNK_00184835
                        | pbVar2[5]) ==
                 (byte)(-((byte)((UNK_00183035 < bVar29) * UNK_00183035 |
                                (UNK_00183035 >= bVar29) * bVar29) == bVar29) & UNK_00184835 |
                       pbVar1[5]));
    auVar7[6] = -((byte)(-((byte)((bVar14 < UNK_00183036) * bVar14 |
                                 (bVar14 >= UNK_00183036) * UNK_00183036) == bVar14) & UNK_00184836
                        | pbVar2[6]) ==
                 (byte)(-((byte)((UNK_00183036 < bVar30) * UNK_00183036 |
                                (UNK_00183036 >= bVar30) * bVar30) == bVar30) & UNK_00184836 |
                       pbVar1[6]));
    auVar7[7] = -((byte)(-((byte)((bVar15 < UNK_00183037) * bVar15 |
                                 (bVar15 >= UNK_00183037) * UNK_00183037) == bVar15) & UNK_00184837
                        | pbVar2[7]) ==
                 (byte)(-((byte)((UNK_00183037 < bVar31) * UNK_00183037 |
                                (UNK_00183037 >= bVar31) * bVar31) == bVar31) & UNK_00184837 |
                       pbVar1[7]));
    auVar7[8] = -((byte)(-((byte)((bVar16 < UNK_00183038) * bVar16 |
                                 (bVar16 >= UNK_00183038) * UNK_00183038) == bVar16) & UNK_00184838
                        | pbVar2[8]) ==
                 (byte)(-((byte)((UNK_00183038 < bVar32) * UNK_00183038 |
                                (UNK_00183038 >= bVar32) * bVar32) == bVar32) & UNK_00184838 |
                       pbVar1[8]));
    auVar7[9] = -((byte)(-((byte)((bVar17 < UNK_00183039) * bVar17 |
                                 (bVar17 >= UNK_00183039) * UNK_00183039) == bVar17) & UNK_00184839
                        | pbVar2[9]) ==
                 (byte)(-((byte)((UNK_00183039 < bVar33) * UNK_00183039 |
                                (UNK_00183039 >= bVar33) * bVar33) == bVar33) & UNK_00184839 |
                       pbVar1[9]));
    auVar7[10] = -((byte)(-((byte)((bVar18 < UNK_0018303a) * bVar18 |
                                  (bVar18 >= UNK_0018303a) * UNK_0018303a) == bVar18) & UNK_0018483a
                         | pbVar2[10]) ==
                  (byte)(-((byte)((UNK_0018303a < bVar34) * UNK_0018303a |
                                 (UNK_0018303a >= bVar34) * bVar34) == bVar34) & UNK_0018483a |
                        pbVar1[10]));
    auVar7[0xb] = -((byte)(-((byte)((bVar19 < UNK_0018303b) * bVar19 |
                                   (bVar19 >= UNK_0018303b) * UNK_0018303b) == bVar19) &
                           UNK_0018483b | pbVar2[0xb]) ==
                   (byte)(-((byte)((UNK_0018303b < bVar35) * UNK_0018303b |
                                  (UNK_0018303b >= bVar35) * bVar35) == bVar35) & UNK_0018483b |
                         pbVar1[0xb]));
    auVar7[0xc] = -((byte)(-((byte)((bVar20 < UNK_0018303c) * bVar20 |
                                   (bVar20 >= UNK_0018303c) * UNK_0018303c) == bVar20) &
                           UNK_0018483c | pbVar2[0xc]) ==
                   (byte)(-((byte)((UNK_0018303c < bVar36) * UNK_0018303c |
                                  (UNK_0018303c >= bVar36) * bVar36) == bVar36) & UNK_0018483c |
                         pbVar1[0xc]));
    auVar7[0xd] = -((byte)(-((byte)((bVar21 < UNK_0018303d) * bVar21 |
                                   (bVar21 >= UNK_0018303d) * UNK_0018303d) == bVar21) &
                           UNK_0018483d | pbVar2[0xd]) ==
                   (byte)(-((byte)((UNK_0018303d < bVar37) * UNK_0018303d |
                                  (UNK_0018303d >= bVar37) * bVar37) == bVar37) & UNK_0018483d |
                         pbVar1[0xd]));
    auVar7[0xe] = -((byte)(-((byte)((bVar22 < UNK_0018303e) * bVar22 |
                                   (bVar22 >= UNK_0018303e) * UNK_0018303e) == bVar22) &
                           UNK_0018483e | pbVar2[0xe]) ==
                   (byte)(-((byte)((UNK_0018303e < bVar38) * UNK_0018303e |
                                  (UNK_0018303e >= bVar38) * bVar38) == bVar38) & UNK_0018483e |
                         pbVar1[0xe]));
    auVar7[0xf] = -((byte)(-((byte)((bVar23 < UNK_0018303f) * bVar23 |
                                   (bVar23 >= UNK_0018303f) * UNK_0018303f) == bVar23) &
                           UNK_0018483f | pbVar2[0xf]) ==
                   (byte)(-((byte)((UNK_0018303f < bVar39) * UNK_0018303f |
                                  (UNK_0018303f >= bVar39) * bVar39) == bVar39) & UNK_0018483f |
                         pbVar1[0xf]));
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe | (ushort)(auVar7[0xf] >> 7) << 0xf)
        != 0xffff) {
LAB_005c35ad:
      uVar5 = 0;
    }
  }
  return uVar5;
}


