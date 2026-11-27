// 00613210 to_ascii_lowercase

/* <str>::to_ascii_lowercase */

void __rustcall <str>::to_ascii_lowercase(ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
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
  byte bVar40;
  byte bVar41;
  byte bVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  undefined8 uVar59;
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
  byte bVar74;
  byte bVar75;
  ulonglong *puVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  ulonglong uVar79;
  undefined1 uVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  
  uVar80 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_00613230;
  puVar76 = (ulonglong *)0x0;
  do {
    param_1 = puVar76;
    uVar80 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_00613230:
    if ((bool)uVar80) {
      uVar77 = 1;
      goto LAB_006133a2;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar77 = (*(code *)PTR___rust_alloc_00799000)();
    puVar76 = (ulonglong *)0x1;
  } while (uVar77 == 0);
  (*(code *)PTR_memcpy_00799008)();
  bVar75 = UNK_0018483f;
  bVar74 = UNK_0018483e;
  bVar73 = UNK_0018483d;
  bVar72 = UNK_0018483c;
  bVar71 = UNK_0018483b;
  bVar70 = UNK_0018483a;
  bVar69 = UNK_00184839;
  bVar68 = UNK_00184838;
  bVar67 = UNK_00184837;
  bVar66 = UNK_00184836;
  bVar65 = UNK_00184835;
  bVar64 = UNK_00184834;
  bVar63 = UNK_00184833;
  bVar62 = UNK_00184832;
  bVar61 = UNK_00184831;
  bVar60 = DAT_00184830;
  cVar58 = UNK_00183f6f;
  cVar57 = UNK_00183f6e;
  cVar56 = UNK_00183f6d;
  cVar55 = UNK_00183f6c;
  cVar54 = UNK_00183f6b;
  cVar53 = UNK_00183f6a;
  cVar52 = UNK_00183f69;
  cVar51 = UNK_00183f68;
  cVar50 = UNK_00183f67;
  cVar49 = UNK_00183f66;
  cVar48 = UNK_00183f65;
  cVar47 = UNK_00183f64;
  cVar46 = UNK_00183f63;
  cVar45 = UNK_00183f62;
  cVar44 = UNK_00183f61;
  cVar43 = DAT_00183f60;
  bVar88 = UNK_0018303f;
  bVar87 = UNK_0018303e;
  bVar86 = UNK_0018303d;
  bVar85 = UNK_0018303c;
  bVar84 = UNK_0018303b;
  bVar83 = UNK_0018303a;
  bVar82 = UNK_00183039;
  bVar81 = UNK_00183038;
  bVar42 = UNK_00183037;
  bVar41 = UNK_00183036;
  bVar40 = UNK_00183035;
  bVar39 = UNK_00183034;
  bVar38 = UNK_00183033;
  bVar37 = UNK_00183032;
  bVar36 = UNK_00183031;
  bVar35 = DAT_00183030;
  if (param_3 < 8) {
    uVar78 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar79 = 0;
LAB_00613329:
      uVar59 = s__001846a0._0_8_;
      cVar50 = UNK_00184167;
      cVar49 = UNK_00184166;
      cVar48 = UNK_00184165;
      cVar47 = UNK_00184164;
      cVar46 = UNK_00184163;
      cVar45 = UNK_00184162;
      cVar44 = UNK_00184161;
      cVar43 = DAT_00184160;
      bVar42 = UNK_001840c7;
      bVar41 = UNK_001840c6;
      bVar40 = UNK_001840c5;
      bVar39 = UNK_001840c4;
      bVar38 = UNK_001840c3;
      bVar37 = UNK_001840c2;
      bVar36 = UNK_001840c1;
      bVar35 = DAT_001840c0;
      uVar78 = param_3 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)(uVar77 + uVar79);
        bVar81 = (char)uVar3 + cVar43;
        bVar82 = (char)(uVar3 >> 8) + cVar44;
        bVar83 = (char)(uVar3 >> 0x10) + cVar45;
        bVar84 = (char)(uVar3 >> 0x18) + cVar46;
        bVar85 = (char)(uVar3 >> 0x20) + cVar47;
        bVar86 = (char)(uVar3 >> 0x28) + cVar48;
        bVar87 = (char)(uVar3 >> 0x30) + cVar49;
        bVar88 = (char)(uVar3 >> 0x38) + cVar50;
        *(ulonglong *)(uVar77 + uVar79) =
             ~CONCAT17(-((byte)((bVar88 < bVar42) * bVar42 | (bVar88 >= bVar42) * bVar88) == bVar88)
                       ,CONCAT16(-((byte)((bVar87 < bVar41) * bVar41 | (bVar87 >= bVar41) * bVar87)
                                  == bVar87),
                                 CONCAT15(-((byte)((bVar86 < bVar40) * bVar40 |
                                                  (bVar86 >= bVar40) * bVar86) == bVar86),
                                          CONCAT14(-((byte)((bVar85 < bVar39) * bVar39 |
                                                           (bVar85 >= bVar39) * bVar85) == bVar85),
                                                   CONCAT13(-((byte)((bVar84 < bVar38) * bVar38 |
                                                                    (bVar84 >= bVar38) * bVar84) ==
                                                             bVar84),CONCAT12(-((byte)((bVar83 < 
                                                  bVar37) * bVar37 | (bVar83 >= bVar37) * bVar83) ==
                                                  bVar83),CONCAT11(-((byte)((bVar82 < bVar36) *
                                                                            bVar36 | (bVar82 >=
                                                                                     bVar36) * 
                                                  bVar82) == bVar82),
                                                  -((byte)((bVar81 < bVar35) * bVar35 |
                                                          (bVar81 >= bVar35) * bVar81) == bVar81))))
                                                  )))) & uVar59 | uVar3;
        uVar79 = uVar79 + 8;
        if (uVar78 == uVar79) goto LAB_0061339d;
      } while( true );
    }
    uVar78 = param_3 & 0x7fffffffffffffe0;
    uVar79 = 0;
    do {
      pbVar1 = (byte *)(uVar77 + uVar79);
      bVar4 = pbVar1[1];
      bVar5 = pbVar1[2];
      bVar6 = pbVar1[3];
      bVar7 = pbVar1[4];
      bVar8 = pbVar1[5];
      bVar9 = pbVar1[6];
      bVar10 = pbVar1[7];
      bVar11 = pbVar1[8];
      bVar12 = pbVar1[9];
      bVar13 = pbVar1[10];
      bVar14 = pbVar1[0xb];
      bVar15 = pbVar1[0xc];
      bVar16 = pbVar1[0xd];
      bVar17 = pbVar1[0xe];
      bVar18 = pbVar1[0xf];
      pbVar2 = (byte *)(uVar77 + 0x10 + uVar79);
      bVar19 = *pbVar2;
      bVar20 = pbVar2[1];
      bVar21 = pbVar2[2];
      bVar22 = pbVar2[3];
      bVar23 = pbVar2[4];
      bVar24 = pbVar2[5];
      bVar25 = pbVar2[6];
      bVar26 = pbVar2[7];
      bVar27 = pbVar2[8];
      bVar28 = pbVar2[9];
      bVar29 = pbVar2[10];
      bVar30 = pbVar2[0xb];
      bVar31 = pbVar2[0xc];
      bVar32 = pbVar2[0xd];
      bVar33 = pbVar2[0xe];
      bVar34 = pbVar2[0xf];
      bVar89 = *pbVar1 + cVar43;
      bVar90 = bVar4 + cVar44;
      bVar91 = bVar5 + cVar45;
      bVar92 = bVar6 + cVar46;
      bVar93 = bVar7 + cVar47;
      bVar94 = bVar8 + cVar48;
      bVar95 = bVar9 + cVar49;
      bVar96 = bVar10 + cVar50;
      bVar97 = bVar11 + cVar51;
      bVar98 = bVar12 + cVar52;
      bVar99 = bVar13 + cVar53;
      bVar100 = bVar14 + cVar54;
      bVar101 = bVar15 + cVar55;
      bVar102 = bVar16 + cVar56;
      bVar103 = bVar17 + cVar57;
      bVar104 = bVar18 + cVar58;
      bVar105 = bVar19 + cVar43;
      bVar106 = bVar20 + cVar44;
      bVar107 = bVar21 + cVar45;
      bVar108 = bVar22 + cVar46;
      bVar109 = bVar23 + cVar47;
      bVar110 = bVar24 + cVar48;
      bVar111 = bVar25 + cVar49;
      bVar112 = bVar26 + cVar50;
      bVar113 = bVar27 + cVar51;
      bVar114 = bVar28 + cVar52;
      bVar115 = bVar29 + cVar53;
      bVar116 = bVar30 + cVar54;
      bVar117 = bVar31 + cVar55;
      bVar118 = bVar32 + cVar56;
      bVar119 = bVar33 + cVar57;
      bVar120 = bVar34 + cVar58;
      pbVar2 = (byte *)(uVar77 + uVar79);
      *pbVar2 = -((byte)((bVar35 < bVar89) * bVar35 | (bVar35 >= bVar89) * bVar89) == bVar89) &
                bVar60 | *pbVar1;
      pbVar2[1] = -((byte)((bVar36 < bVar90) * bVar36 | (bVar36 >= bVar90) * bVar90) == bVar90) &
                  bVar61 | bVar4;
      pbVar2[2] = -((byte)((bVar37 < bVar91) * bVar37 | (bVar37 >= bVar91) * bVar91) == bVar91) &
                  bVar62 | bVar5;
      pbVar2[3] = -((byte)((bVar38 < bVar92) * bVar38 | (bVar38 >= bVar92) * bVar92) == bVar92) &
                  bVar63 | bVar6;
      pbVar2[4] = -((byte)((bVar39 < bVar93) * bVar39 | (bVar39 >= bVar93) * bVar93) == bVar93) &
                  bVar64 | bVar7;
      pbVar2[5] = -((byte)((bVar40 < bVar94) * bVar40 | (bVar40 >= bVar94) * bVar94) == bVar94) &
                  bVar65 | bVar8;
      pbVar2[6] = -((byte)((bVar41 < bVar95) * bVar41 | (bVar41 >= bVar95) * bVar95) == bVar95) &
                  bVar66 | bVar9;
      pbVar2[7] = -((byte)((bVar42 < bVar96) * bVar42 | (bVar42 >= bVar96) * bVar96) == bVar96) &
                  bVar67 | bVar10;
      pbVar2[8] = -((byte)((bVar81 < bVar97) * bVar81 | (bVar81 >= bVar97) * bVar97) == bVar97) &
                  bVar68 | bVar11;
      pbVar2[9] = -((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) == bVar98) &
                  bVar69 | bVar12;
      pbVar2[10] = -((byte)((bVar83 < bVar99) * bVar83 | (bVar83 >= bVar99) * bVar99) == bVar99) &
                   bVar70 | bVar13;
      pbVar2[0xb] = -((byte)((bVar84 < bVar100) * bVar84 | (bVar84 >= bVar100) * bVar100) == bVar100
                     ) & bVar71 | bVar14;
      pbVar2[0xc] = -((byte)((bVar85 < bVar101) * bVar85 | (bVar85 >= bVar101) * bVar101) == bVar101
                     ) & bVar72 | bVar15;
      pbVar2[0xd] = -((byte)((bVar86 < bVar102) * bVar86 | (bVar86 >= bVar102) * bVar102) == bVar102
                     ) & bVar73 | bVar16;
      pbVar2[0xe] = -((byte)((bVar87 < bVar103) * bVar87 | (bVar87 >= bVar103) * bVar103) == bVar103
                     ) & bVar74 | bVar17;
      pbVar2[0xf] = -((byte)((bVar88 < bVar104) * bVar88 | (bVar88 >= bVar104) * bVar104) == bVar104
                     ) & bVar75 | bVar18;
      pbVar1 = (byte *)(uVar77 + 0x10 + uVar79);
      *pbVar1 = -((byte)((bVar35 < bVar105) * bVar35 | (bVar35 >= bVar105) * bVar105) == bVar105) &
                bVar60 | bVar19;
      pbVar1[1] = -((byte)((bVar36 < bVar106) * bVar36 | (bVar36 >= bVar106) * bVar106) == bVar106)
                  & bVar61 | bVar20;
      pbVar1[2] = -((byte)((bVar37 < bVar107) * bVar37 | (bVar37 >= bVar107) * bVar107) == bVar107)
                  & bVar62 | bVar21;
      pbVar1[3] = -((byte)((bVar38 < bVar108) * bVar38 | (bVar38 >= bVar108) * bVar108) == bVar108)
                  & bVar63 | bVar22;
      pbVar1[4] = -((byte)((bVar39 < bVar109) * bVar39 | (bVar39 >= bVar109) * bVar109) == bVar109)
                  & bVar64 | bVar23;
      pbVar1[5] = -((byte)((bVar40 < bVar110) * bVar40 | (bVar40 >= bVar110) * bVar110) == bVar110)
                  & bVar65 | bVar24;
      pbVar1[6] = -((byte)((bVar41 < bVar111) * bVar41 | (bVar41 >= bVar111) * bVar111) == bVar111)
                  & bVar66 | bVar25;
      pbVar1[7] = -((byte)((bVar42 < bVar112) * bVar42 | (bVar42 >= bVar112) * bVar112) == bVar112)
                  & bVar67 | bVar26;
      pbVar1[8] = -((byte)((bVar81 < bVar113) * bVar81 | (bVar81 >= bVar113) * bVar113) == bVar113)
                  & bVar68 | bVar27;
      pbVar1[9] = -((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114) == bVar114)
                  & bVar69 | bVar28;
      pbVar1[10] = -((byte)((bVar83 < bVar115) * bVar83 | (bVar83 >= bVar115) * bVar115) == bVar115)
                   & bVar70 | bVar29;
      pbVar1[0xb] = -((byte)((bVar84 < bVar116) * bVar84 | (bVar84 >= bVar116) * bVar116) == bVar116
                     ) & bVar71 | bVar30;
      pbVar1[0xc] = -((byte)((bVar85 < bVar117) * bVar85 | (bVar85 >= bVar117) * bVar117) == bVar117
                     ) & bVar72 | bVar31;
      pbVar1[0xd] = -((byte)((bVar86 < bVar118) * bVar86 | (bVar86 >= bVar118) * bVar118) == bVar118
                     ) & bVar73 | bVar32;
      pbVar1[0xe] = -((byte)((bVar87 < bVar119) * bVar87 | (bVar87 >= bVar119) * bVar119) == bVar119
                     ) & bVar74 | bVar33;
      pbVar1[0xf] = -((byte)((bVar88 < bVar120) * bVar88 | (bVar88 >= bVar120) * bVar120) == bVar120
                     ) & bVar75 | bVar34;
      uVar79 = uVar79 + 0x20;
    } while (uVar78 != uVar79);
    if (param_3 == uVar78) goto LAB_006133a2;
    uVar79 = uVar78;
    if ((param_3 & 0x18) != 0) goto LAB_00613329;
  }
  do {
    *(byte *)(uVar77 + uVar78) =
         ((byte)(*(byte *)(uVar77 + uVar78) + 0xbf) < 0x1a) << 5 | *(byte *)(uVar77 + uVar78);
    uVar78 = uVar78 + 1;
LAB_0061339d:
  } while (param_3 != uVar78);
LAB_006133a2:
  *param_1 = param_3;
  param_1[1] = uVar77;
  param_1[2] = param_3;
  return;
}


