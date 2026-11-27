// 002ddfd0 eq_ignore_ascii_case

/* <str>::eq_ignore_ascii_case */

undefined8 __rustcall <str>::eq_ignore_ascii_case(byte *param_1,longlong param_2)

{
  byte bVar1;
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
  undefined1 auVar17 [16];
  
  if (param_2 == 0x11) {
    bVar1 = DAT_00183f60 + *param_1;
    bVar2 = UNK_00183f61 + param_1[1];
    bVar3 = UNK_00183f62 + param_1[2];
    bVar4 = UNK_00183f63 + param_1[3];
    bVar5 = UNK_00183f64 + param_1[4];
    bVar6 = UNK_00183f65 + param_1[5];
    bVar7 = UNK_00183f66 + param_1[6];
    bVar8 = UNK_00183f67 + param_1[7];
    bVar9 = UNK_00183f68 + param_1[8];
    bVar10 = UNK_00183f69 + param_1[9];
    bVar11 = UNK_00183f6a + param_1[10];
    bVar12 = UNK_00183f6b + param_1[0xb];
    bVar13 = UNK_00183f6c + param_1[0xc];
    bVar14 = UNK_00183f6d + param_1[0xd];
    bVar15 = UNK_00183f6e + param_1[0xe];
    bVar16 = UNK_00183f6f + param_1[0xf];
    auVar17[0] = -((byte)(-((byte)((bVar1 < DAT_00183030) * bVar1 |
                                  (bVar1 >= DAT_00183030) * DAT_00183030) == bVar1) & DAT_00184830 |
                         *param_1) == DAT_00182920);
    auVar17[1] = -((byte)(-((byte)((bVar2 < UNK_00183031) * bVar2 |
                                  (bVar2 >= UNK_00183031) * UNK_00183031) == bVar2) & UNK_00184831 |
                         param_1[1]) == UNK_00182921);
    auVar17[2] = -((byte)(-((byte)((bVar3 < UNK_00183032) * bVar3 |
                                  (bVar3 >= UNK_00183032) * UNK_00183032) == bVar3) & UNK_00184832 |
                         param_1[2]) == UNK_00182922);
    auVar17[3] = -((byte)(-((byte)((bVar4 < UNK_00183033) * bVar4 |
                                  (bVar4 >= UNK_00183033) * UNK_00183033) == bVar4) & UNK_00184833 |
                         param_1[3]) == UNK_00182923);
    auVar17[4] = -((byte)(-((byte)((bVar5 < UNK_00183034) * bVar5 |
                                  (bVar5 >= UNK_00183034) * UNK_00183034) == bVar5) & UNK_00184834 |
                         param_1[4]) == UNK_00182924);
    auVar17[5] = -((byte)(-((byte)((bVar6 < UNK_00183035) * bVar6 |
                                  (bVar6 >= UNK_00183035) * UNK_00183035) == bVar6) & UNK_00184835 |
                         param_1[5]) == UNK_00182925);
    auVar17[6] = -((byte)(-((byte)((bVar7 < UNK_00183036) * bVar7 |
                                  (bVar7 >= UNK_00183036) * UNK_00183036) == bVar7) & UNK_00184836 |
                         param_1[6]) == UNK_00182926);
    auVar17[7] = -((byte)(-((byte)((bVar8 < UNK_00183037) * bVar8 |
                                  (bVar8 >= UNK_00183037) * UNK_00183037) == bVar8) & UNK_00184837 |
                         param_1[7]) == UNK_00182927);
    auVar17[8] = -((byte)(-((byte)((bVar9 < UNK_00183038) * bVar9 |
                                  (bVar9 >= UNK_00183038) * UNK_00183038) == bVar9) & UNK_00184838 |
                         param_1[8]) == UNK_00182928);
    auVar17[9] = -((byte)(-((byte)((bVar10 < UNK_00183039) * bVar10 |
                                  (bVar10 >= UNK_00183039) * UNK_00183039) == bVar10) & UNK_00184839
                         | param_1[9]) == UNK_00182929);
    auVar17[10] = -((byte)(-((byte)((bVar11 < UNK_0018303a) * bVar11 |
                                   (bVar11 >= UNK_0018303a) * UNK_0018303a) == bVar11) &
                           UNK_0018483a | param_1[10]) == UNK_0018292a);
    auVar17[0xb] = -((byte)(-((byte)((bVar12 < UNK_0018303b) * bVar12 |
                                    (bVar12 >= UNK_0018303b) * UNK_0018303b) == bVar12) &
                            UNK_0018483b | param_1[0xb]) == UNK_0018292b);
    auVar17[0xc] = -((byte)(-((byte)((bVar13 < UNK_0018303c) * bVar13 |
                                    (bVar13 >= UNK_0018303c) * UNK_0018303c) == bVar13) &
                            UNK_0018483c | param_1[0xc]) == UNK_0018292c);
    auVar17[0xd] = -((byte)(-((byte)((bVar14 < UNK_0018303d) * bVar14 |
                                    (bVar14 >= UNK_0018303d) * UNK_0018303d) == bVar14) &
                            UNK_0018483d | param_1[0xd]) == UNK_0018292d);
    auVar17[0xe] = -((byte)(-((byte)((bVar15 < UNK_0018303e) * bVar15 |
                                    (bVar15 >= UNK_0018303e) * UNK_0018303e) == bVar15) &
                            UNK_0018483e | param_1[0xe]) == UNK_0018292e);
    auVar17[0xf] = -((byte)(-((byte)((bVar16 < UNK_0018303f) * bVar16 |
                                    (bVar16 >= UNK_0018303f) * UNK_0018303f) == bVar16) &
                            UNK_0018483f | param_1[0xf]) == UNK_0018292f);
    if (((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar17[0xf] >> 7) << 0xf) == 0xffff) &&
       ((byte)(((byte)(param_1[0x10] + 0xbf) < 0x1a) << 5 | param_1[0x10]) == 0x6d)) {
      return 1;
    }
  }
  return 0;
}


