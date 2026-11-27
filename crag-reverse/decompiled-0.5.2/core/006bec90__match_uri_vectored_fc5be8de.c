// 006bec90 match_uri_vectored

/* httparse[622c0e90ae307373]::simd::sse42::match_uri_vectored */

void __rustcall httparse[622c0e90ae307373]::simd::sse42::match_uri_vectored(longlong param_1)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
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
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  ulonglong uVar39;
  undefined1 in_XMM2 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  byte bVar42;
  byte bVar43;
  byte bVar44;
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
  
  cVar34 = UNK_00183f0f;
  cVar33 = UNK_00183f0e;
  cVar32 = UNK_00183f0d;
  cVar31 = UNK_00183f0c;
  cVar30 = UNK_00183f0b;
  cVar29 = UNK_00183f0a;
  cVar28 = UNK_00183f09;
  cVar27 = UNK_00183f08;
  cVar26 = UNK_00183f07;
  cVar25 = UNK_00183f06;
  cVar24 = UNK_00183f05;
  cVar23 = UNK_00183f04;
  cVar22 = UNK_00183f03;
  cVar21 = UNK_00183f02;
  cVar20 = UNK_00183f01;
  cVar19 = DAT_00183f00;
  bVar18 = UNK_001828ff;
  bVar17 = UNK_001828fe;
  bVar16 = UNK_001828fd;
  bVar15 = UNK_001828fc;
  bVar14 = UNK_001828fb;
  bVar13 = UNK_001828fa;
  bVar12 = UNK_001828f9;
  bVar11 = UNK_001828f8;
  bVar10 = UNK_001828f7;
  bVar9 = UNK_001828f6;
  bVar8 = UNK_001828f5;
  bVar7 = UNK_001828f4;
  bVar6 = UNK_001828f3;
  bVar5 = UNK_001828f2;
  bVar4 = UNK_001828f1;
  bVar3 = DAT_001828f0;
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  pauVar35 = *(undefined1 (**) [16])(param_1 + 0x10);
  while (0xf < (ulonglong)((longlong)pauVar1 - (longlong)pauVar35)) {
    auVar40 = lddqu(in_XMM2,*pauVar35);
    bVar42 = auVar40[0];
    bVar43 = auVar40[1];
    bVar44 = auVar40[2];
    bVar45 = auVar40[3];
    bVar46 = auVar40[4];
    bVar47 = auVar40[5];
    bVar48 = auVar40[6];
    bVar49 = auVar40[7];
    bVar50 = auVar40[8];
    bVar51 = auVar40[9];
    bVar52 = auVar40[10];
    bVar53 = auVar40[0xb];
    bVar54 = auVar40[0xc];
    bVar55 = auVar40[0xd];
    bVar56 = auVar40[0xe];
    bVar57 = auVar40[0xf];
    auVar41[0] = -(cVar19 < (char)bVar42);
    auVar41[1] = -(cVar20 < (char)bVar43);
    auVar41[2] = -(cVar21 < (char)bVar44);
    auVar41[3] = -(cVar22 < (char)bVar45);
    auVar41[4] = -(cVar23 < (char)bVar46);
    auVar41[5] = -(cVar24 < (char)bVar47);
    auVar41[6] = -(cVar25 < (char)bVar48);
    auVar41[7] = -(cVar26 < (char)bVar49);
    auVar41[8] = -(cVar27 < (char)bVar50);
    auVar41[9] = -(cVar28 < (char)bVar51);
    auVar41[10] = -(cVar29 < (char)bVar52);
    auVar41[0xb] = -(cVar30 < (char)bVar53);
    auVar41[0xc] = -(cVar31 < (char)bVar54);
    auVar41[0xd] = -(cVar32 < (char)bVar55);
    auVar41[0xe] = -(cVar33 < (char)bVar56);
    auVar41[0xf] = -(cVar34 < (char)bVar57);
    auVar40[1] = -((byte)((bVar43 < bVar4) * bVar4 | (bVar43 >= bVar4) * bVar43) == bVar43);
    auVar40[0] = -((byte)((bVar42 < bVar3) * bVar3 | (bVar42 >= bVar3) * bVar42) == bVar42);
    auVar40[2] = -((byte)((bVar44 < bVar5) * bVar5 | (bVar44 >= bVar5) * bVar44) == bVar44);
    auVar40[3] = -((byte)((bVar45 < bVar6) * bVar6 | (bVar45 >= bVar6) * bVar45) == bVar45);
    auVar40[4] = -((byte)((bVar46 < bVar7) * bVar7 | (bVar46 >= bVar7) * bVar46) == bVar46);
    auVar40[5] = -((byte)((bVar47 < bVar8) * bVar8 | (bVar47 >= bVar8) * bVar47) == bVar47);
    auVar40[6] = -((byte)((bVar48 < bVar9) * bVar9 | (bVar48 >= bVar9) * bVar48) == bVar48);
    auVar40[7] = -((byte)((bVar49 < bVar10) * bVar10 | (bVar49 >= bVar10) * bVar49) == bVar49);
    auVar40[8] = -((byte)((bVar50 < bVar11) * bVar11 | (bVar50 >= bVar11) * bVar50) == bVar50);
    auVar40[9] = -((byte)((bVar51 < bVar12) * bVar12 | (bVar51 >= bVar12) * bVar51) == bVar51);
    auVar40[10] = -((byte)((bVar52 < bVar13) * bVar13 | (bVar52 >= bVar13) * bVar52) == bVar52);
    auVar40[0xb] = -((byte)((bVar53 < bVar14) * bVar14 | (bVar53 >= bVar14) * bVar53) == bVar53);
    auVar40[0xc] = -((byte)((bVar54 < bVar15) * bVar15 | (bVar54 >= bVar15) * bVar54) == bVar54);
    auVar40[0xd] = -((byte)((bVar55 < bVar16) * bVar16 | (bVar55 >= bVar16) * bVar55) == bVar55);
    auVar40[0xe] = -((byte)((bVar56 < bVar17) * bVar17 | (bVar56 >= bVar17) * bVar56) == bVar56);
    auVar40[0xf] = -((byte)((bVar57 < bVar18) * bVar18 | (bVar57 >= bVar18) * bVar57) == bVar57);
    in_XMM2 = ~auVar41 & auVar40;
    uVar36 = (uint)(ushort)((ushort)(SUB161(in_XMM2 >> 7,0) & 1) |
                            (ushort)(SUB161(in_XMM2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(in_XMM2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(in_XMM2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(in_XMM2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(in_XMM2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(in_XMM2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(in_XMM2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(in_XMM2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(in_XMM2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(in_XMM2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(in_XMM2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(in_XMM2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(in_XMM2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(in_XMM2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(in_XMM2[0xf] >> 7) << 0xf);
    uVar2 = 0;
    for (uVar38 = ~uVar36; (uVar38 & 1) == 0; uVar38 = uVar38 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    pauVar35 = (undefined1 (*) [16])(*pauVar35 + uVar2);
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar35;
    if (uVar36 != 0xffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar35) < 8) {
LAB_006bedf9:
      if (pauVar1 <= pauVar35) {
        return;
      }
      if (URI_MAP[(byte)(*pauVar35)[0]] != '\x01') {
        return;
      }
      pauVar35 = (undefined1 (*) [16])(*pauVar35 + 1);
    }
    else {
      uVar39 = *(ulonglong *)*pauVar35;
      uVar39 = ((uVar39 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar39 + 0xdedededededededf) &
               ~uVar39;
      if ((uVar39 & 0x8080808080808080) != 0) {
        if ((char)uVar39 < '\0') {
          lVar37 = 0;
        }
        else {
          lVar37 = 1;
          if (-1 < (short)uVar39) {
            lVar37 = 2;
            if (((((uVar39 & 0x800000) == 0) && (lVar37 = 3, -1 < (int)uVar39)) &&
                (lVar37 = 4, (uVar39 >> 0x27 & 1) == 0)) && (lVar37 = 5, (uVar39 >> 0x2f & 1) == 0))
            {
              lVar37 = 7 - (ulonglong)((uVar39 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar35 = (undefined1 (*) [16])(*pauVar35 + lVar37);
        *(undefined1 (**) [16])(param_1 + 0x10) = pauVar35;
        goto LAB_006bedf9;
      }
      pauVar35 = (undefined1 (*) [16])(*pauVar35 + 8);
    }
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar35;
  } while( true );
}


