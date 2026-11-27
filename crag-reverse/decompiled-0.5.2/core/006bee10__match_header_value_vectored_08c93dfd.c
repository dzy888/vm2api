// 006bee10 match_header_value_vectored

/* httparse[622c0e90ae307373]::simd::sse42::match_header_value_vectored */

void __rustcall
httparse[622c0e90ae307373]::simd::sse42::match_header_value_vectored(longlong param_1)

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
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 (*pauVar51) [16];
  uint uVar52;
  longlong lVar53;
  uint uVar54;
  ulonglong uVar55;
  undefined1 in_XMM3 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  undefined1 auVar74 [16];
  
  bVar50 = UNK_0018483f;
  bVar49 = UNK_0018483e;
  bVar48 = UNK_0018483d;
  bVar47 = UNK_0018483c;
  bVar46 = UNK_0018483b;
  bVar45 = UNK_0018483a;
  bVar44 = UNK_00184839;
  bVar43 = UNK_00184838;
  bVar42 = UNK_00184837;
  bVar41 = UNK_00184836;
  bVar40 = UNK_00184835;
  bVar39 = UNK_00184834;
  bVar38 = UNK_00184833;
  bVar37 = UNK_00184832;
  bVar36 = UNK_00184831;
  bVar35 = DAT_00184830;
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
  bVar18 = UNK_0018390f;
  bVar17 = UNK_0018390e;
  bVar16 = UNK_0018390d;
  bVar15 = UNK_0018390c;
  bVar14 = UNK_0018390b;
  bVar13 = UNK_0018390a;
  bVar12 = UNK_00183909;
  bVar11 = UNK_00183908;
  bVar10 = UNK_00183907;
  bVar9 = UNK_00183906;
  bVar8 = UNK_00183905;
  bVar7 = UNK_00183904;
  bVar6 = UNK_00183903;
  bVar5 = UNK_00183902;
  bVar4 = UNK_00183901;
  bVar3 = DAT_00183900;
  pauVar1 = *(undefined1 (**) [16])(param_1 + 8);
  pauVar51 = *(undefined1 (**) [16])(param_1 + 0x10);
  while (0xf < (ulonglong)((longlong)pauVar1 - (longlong)pauVar51)) {
    auVar56 = lddqu(in_XMM3,*pauVar51);
    bVar58 = auVar56[0];
    bVar59 = auVar56[1];
    bVar60 = auVar56[2];
    bVar61 = auVar56[3];
    bVar62 = auVar56[4];
    bVar63 = auVar56[5];
    bVar64 = auVar56[6];
    bVar65 = auVar56[7];
    bVar66 = auVar56[8];
    bVar67 = auVar56[9];
    bVar68 = auVar56[10];
    bVar69 = auVar56[0xb];
    bVar70 = auVar56[0xc];
    bVar71 = auVar56[0xd];
    bVar72 = auVar56[0xe];
    bVar73 = auVar56[0xf];
    auVar74[0] = -(bVar58 == bVar3);
    auVar74[1] = -(bVar59 == bVar4);
    auVar74[2] = -(bVar60 == bVar5);
    auVar74[3] = -(bVar61 == bVar6);
    auVar74[4] = -(bVar62 == bVar7);
    auVar74[5] = -(bVar63 == bVar8);
    auVar74[6] = -(bVar64 == bVar9);
    auVar74[7] = -(bVar65 == bVar10);
    auVar74[8] = -(bVar66 == bVar11);
    auVar74[9] = -(bVar67 == bVar12);
    auVar74[10] = -(bVar68 == bVar13);
    auVar74[0xb] = -(bVar69 == bVar14);
    auVar74[0xc] = -(bVar70 == bVar15);
    auVar74[0xd] = -(bVar71 == bVar16);
    auVar74[0xe] = -(bVar72 == bVar17);
    auVar74[0xf] = -(bVar73 == bVar18);
    auVar56[1] = -((byte)((bVar59 < bVar36) * bVar36 | (bVar59 >= bVar36) * bVar59) == bVar59);
    auVar56[0] = -((byte)((bVar58 < bVar35) * bVar35 | (bVar58 >= bVar35) * bVar58) == bVar58);
    auVar56[2] = -((byte)((bVar60 < bVar37) * bVar37 | (bVar60 >= bVar37) * bVar60) == bVar60);
    auVar56[3] = -((byte)((bVar61 < bVar38) * bVar38 | (bVar61 >= bVar38) * bVar61) == bVar61);
    auVar56[4] = -((byte)((bVar62 < bVar39) * bVar39 | (bVar62 >= bVar39) * bVar62) == bVar62);
    auVar56[5] = -((byte)((bVar63 < bVar40) * bVar40 | (bVar63 >= bVar40) * bVar63) == bVar63);
    auVar56[6] = -((byte)((bVar64 < bVar41) * bVar41 | (bVar64 >= bVar41) * bVar64) == bVar64);
    auVar56[7] = -((byte)((bVar65 < bVar42) * bVar42 | (bVar65 >= bVar42) * bVar65) == bVar65);
    auVar56[8] = -((byte)((bVar66 < bVar43) * bVar43 | (bVar66 >= bVar43) * bVar66) == bVar66);
    auVar56[9] = -((byte)((bVar67 < bVar44) * bVar44 | (bVar67 >= bVar44) * bVar67) == bVar67);
    auVar56[10] = -((byte)((bVar68 < bVar45) * bVar45 | (bVar68 >= bVar45) * bVar68) == bVar68);
    auVar56[0xb] = -((byte)((bVar69 < bVar46) * bVar46 | (bVar69 >= bVar46) * bVar69) == bVar69);
    auVar56[0xc] = -((byte)((bVar70 < bVar47) * bVar47 | (bVar70 >= bVar47) * bVar70) == bVar70);
    auVar56[0xd] = -((byte)((bVar71 < bVar48) * bVar48 | (bVar71 >= bVar48) * bVar71) == bVar71);
    auVar56[0xe] = -((byte)((bVar72 < bVar49) * bVar49 | (bVar72 >= bVar49) * bVar72) == bVar72);
    auVar56[0xf] = -((byte)((bVar73 < bVar50) * bVar50 | (bVar73 >= bVar50) * bVar73) == bVar73);
    auVar57[0] = -(cVar19 < (char)bVar58);
    auVar57[1] = -(cVar20 < (char)bVar59);
    auVar57[2] = -(cVar21 < (char)bVar60);
    auVar57[3] = -(cVar22 < (char)bVar61);
    auVar57[4] = -(cVar23 < (char)bVar62);
    auVar57[5] = -(cVar24 < (char)bVar63);
    auVar57[6] = -(cVar25 < (char)bVar64);
    auVar57[7] = -(cVar26 < (char)bVar65);
    auVar57[8] = -(cVar27 < (char)bVar66);
    auVar57[9] = -(cVar28 < (char)bVar67);
    auVar57[10] = -(cVar29 < (char)bVar68);
    auVar57[0xb] = -(cVar30 < (char)bVar69);
    auVar57[0xc] = -(cVar31 < (char)bVar70);
    auVar57[0xd] = -(cVar32 < (char)bVar71);
    auVar57[0xe] = -(cVar33 < (char)bVar72);
    auVar57[0xf] = -(cVar34 < (char)bVar73);
    in_XMM3 = ~auVar57 & (auVar74 | auVar56);
    uVar52 = (uint)(ushort)((ushort)(SUB161(in_XMM3 >> 7,0) & 1) |
                            (ushort)(SUB161(in_XMM3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(in_XMM3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(in_XMM3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(in_XMM3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(in_XMM3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(in_XMM3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(in_XMM3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(in_XMM3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(in_XMM3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(in_XMM3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(in_XMM3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(in_XMM3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(in_XMM3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(in_XMM3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(in_XMM3[0xf] >> 7) << 0xf);
    uVar2 = 0;
    for (uVar54 = ~uVar52; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    pauVar51 = (undefined1 (*) [16])(*pauVar51 + uVar2);
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar51;
    if (uVar52 != 0xffff) {
      return;
    }
  }
  do {
    if ((ulonglong)((longlong)pauVar1 - (longlong)pauVar51) < 8) {
LAB_006bef99:
      if (pauVar1 <= pauVar51) {
        return;
      }
      if (""[(byte)(*pauVar51)[0]] != '\x01') {
        return;
      }
      pauVar51 = (undefined1 (*) [16])(*pauVar51 + 1);
    }
    else {
      uVar55 = *(ulonglong *)*pauVar51;
      uVar55 = ((uVar55 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar55 + 0xdfdfdfdfdfdfdfe0) &
               ~uVar55;
      if ((uVar55 & 0x8080808080808080) != 0) {
        if ((char)uVar55 < '\0') {
          lVar53 = 0;
        }
        else {
          lVar53 = 1;
          if (-1 < (short)uVar55) {
            lVar53 = 2;
            if (((((uVar55 & 0x800000) == 0) && (lVar53 = 3, -1 < (int)uVar55)) &&
                (lVar53 = 4, (uVar55 >> 0x27 & 1) == 0)) && (lVar53 = 5, (uVar55 >> 0x2f & 1) == 0))
            {
              lVar53 = 7 - (ulonglong)((uVar55 >> 0x37 & 1) != 0);
            }
          }
        }
        pauVar51 = (undefined1 (*) [16])(*pauVar51 + lVar53);
        *(undefined1 (**) [16])(param_1 + 0x10) = pauVar51;
        goto LAB_006bef99;
      }
      pauVar51 = (undefined1 (*) [16])(*pauVar51 + 8);
    }
    *(undefined1 (**) [16])(param_1 + 0x10) = pauVar51;
  } while( true );
}


