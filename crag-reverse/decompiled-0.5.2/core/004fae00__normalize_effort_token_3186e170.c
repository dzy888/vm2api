// 004fae00 normalize_effort_token

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::models::normalize_effort_token */

undefined1  [16] __rustcall craggemini_core[66f3c71560d70857]::models::normalize_effort_token(void)

{
  byte *pbVar1;
  byte *pbVar2;
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
  undefined8 uVar42;
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
  byte bVar58;
  ulonglong *puVar59;
  ulonglong *puVar60;
  ulonglong *puVar61;
  longlong lVar62;
  ulonglong uVar63;
  uint *puVar64;
  ulonglong *extraout_RDX;
  int iVar65;
  uint uVar66;
  longlong unaff_R12;
  char *pcVar67;
  undefined1 uVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
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
  undefined1 auVar109 [16];
  
  ::<str>::trim_matches::<<char>::is_whitespace>();
  uVar68 = extraout_RDX == (ulonglong *)0x0;
  if (-1 < (longlong)extraout_RDX) goto LAB_004fae24;
  unaff_R12 = 0;
  do {
    uVar68 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_004fae24:
    if ((bool)uVar68) {
      pcVar67 = (char *)0x0;
      goto LAB_004fb2d0;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    unaff_R12 = 1;
    puVar59 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
  } while (puVar59 == (ulonglong *)0x0);
  (*(code *)PTR_memcpy_00799008)();
  bVar58 = UNK_0018483f;
  bVar57 = UNK_0018483e;
  bVar56 = UNK_0018483d;
  bVar55 = UNK_0018483c;
  bVar54 = UNK_0018483b;
  bVar53 = UNK_0018483a;
  bVar52 = UNK_00184839;
  bVar51 = UNK_00184838;
  bVar50 = UNK_00184837;
  bVar49 = UNK_00184836;
  bVar48 = UNK_00184835;
  bVar47 = UNK_00184834;
  bVar46 = UNK_00184833;
  bVar45 = UNK_00184832;
  bVar44 = UNK_00184831;
  bVar43 = DAT_00184830;
  auVar109 = _DAT_00183f60;
  bVar76 = UNK_0018303f;
  bVar75 = UNK_0018303e;
  bVar74 = UNK_0018303d;
  bVar73 = UNK_0018303c;
  bVar72 = UNK_0018303b;
  bVar71 = UNK_0018303a;
  bVar70 = UNK_00183039;
  bVar69 = UNK_00183038;
  bVar41 = UNK_00183037;
  bVar40 = UNK_00183036;
  bVar39 = UNK_00183035;
  bVar38 = UNK_00183034;
  bVar37 = UNK_00183033;
  bVar36 = UNK_00183032;
  bVar35 = UNK_00183031;
  bVar3 = DAT_00183030;
  if (&DAT_00000007 < extraout_RDX) {
    if (extraout_RDX < &DAT_00000020) {
      puVar60 = (ulonglong *)0x0;
LAB_004faf19:
      uVar42 = s__001846a0._0_8_;
      auVar109 = _DAT_00184160;
      bVar41 = UNK_001840c7;
      bVar40 = UNK_001840c6;
      bVar39 = UNK_001840c5;
      bVar38 = UNK_001840c4;
      bVar37 = UNK_001840c3;
      bVar36 = UNK_001840c2;
      bVar35 = UNK_001840c1;
      bVar3 = DAT_001840c0;
      puVar61 = (ulonglong *)((ulonglong)extraout_RDX & 0x7ffffffffffffff8);
      do {
        uVar63 = *(ulonglong *)((longlong)puVar59 + (longlong)puVar60);
        bVar69 = (char)uVar63 + auVar109[0];
        bVar70 = (char)(uVar63 >> 8) + auVar109[1];
        bVar71 = (char)(uVar63 >> 0x10) + auVar109[2];
        bVar72 = (char)(uVar63 >> 0x18) + auVar109[3];
        bVar73 = (char)(uVar63 >> 0x20) + auVar109[4];
        bVar74 = (char)(uVar63 >> 0x28) + auVar109[5];
        bVar75 = (char)(uVar63 >> 0x30) + auVar109[6];
        bVar76 = (char)(uVar63 >> 0x38) + auVar109[7];
        *(ulonglong *)((longlong)puVar59 + (longlong)puVar60) =
             ~CONCAT17(-((byte)((bVar76 < bVar41) * bVar41 | (bVar76 >= bVar41) * bVar76) == bVar76)
                       ,CONCAT16(-((byte)((bVar75 < bVar40) * bVar40 | (bVar75 >= bVar40) * bVar75)
                                  == bVar75),
                                 CONCAT15(-((byte)((bVar74 < bVar39) * bVar39 |
                                                  (bVar74 >= bVar39) * bVar74) == bVar74),
                                          CONCAT14(-((byte)((bVar73 < bVar38) * bVar38 |
                                                           (bVar73 >= bVar38) * bVar73) == bVar73),
                                                   CONCAT13(-((byte)((bVar72 < bVar37) * bVar37 |
                                                                    (bVar72 >= bVar37) * bVar72) ==
                                                             bVar72),CONCAT12(-((byte)((bVar71 < 
                                                  bVar36) * bVar36 | (bVar71 >= bVar36) * bVar71) ==
                                                  bVar71),CONCAT11(-((byte)((bVar70 < bVar35) *
                                                                            bVar35 | (bVar70 >=
                                                                                     bVar35) * 
                                                  bVar70) == bVar70),
                                                  -((byte)((bVar69 < bVar3) * bVar3 |
                                                          (bVar69 >= bVar3) * bVar69) == bVar69)))))
                                         ))) & uVar42 | uVar63;
        puVar60 = puVar60 + 1;
        if (puVar61 == puVar60) goto LAB_004faf8d;
      } while( true );
    }
    puVar61 = (ulonglong *)((ulonglong)extraout_RDX & 0x7fffffffffffffe0);
    puVar60 = (ulonglong *)0x0;
    do {
      pbVar1 = (byte *)((longlong)puVar59 + (longlong)puVar60);
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
      pbVar2 = (byte *)((longlong)(puVar59 + 2) + (longlong)puVar60);
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
      bVar77 = *pbVar1 + auVar109[0];
      bVar78 = bVar4 + auVar109[1];
      bVar79 = bVar5 + auVar109[2];
      bVar80 = bVar6 + auVar109[3];
      bVar81 = bVar7 + auVar109[4];
      bVar82 = bVar8 + auVar109[5];
      bVar83 = bVar9 + auVar109[6];
      bVar84 = bVar10 + auVar109[7];
      bVar85 = bVar11 + auVar109[8];
      bVar86 = bVar12 + auVar109[9];
      bVar87 = bVar13 + auVar109[10];
      bVar88 = bVar14 + auVar109[0xb];
      bVar89 = bVar15 + auVar109[0xc];
      bVar90 = bVar16 + auVar109[0xd];
      bVar91 = bVar17 + auVar109[0xe];
      bVar92 = bVar18 + auVar109[0xf];
      bVar93 = bVar19 + auVar109[0];
      bVar94 = bVar20 + auVar109[1];
      bVar95 = bVar21 + auVar109[2];
      bVar96 = bVar22 + auVar109[3];
      bVar97 = bVar23 + auVar109[4];
      bVar98 = bVar24 + auVar109[5];
      bVar99 = bVar25 + auVar109[6];
      bVar100 = bVar26 + auVar109[7];
      bVar101 = bVar27 + auVar109[8];
      bVar102 = bVar28 + auVar109[9];
      bVar103 = bVar29 + auVar109[10];
      bVar104 = bVar30 + auVar109[0xb];
      bVar105 = bVar31 + auVar109[0xc];
      bVar106 = bVar32 + auVar109[0xd];
      bVar107 = bVar33 + auVar109[0xe];
      bVar108 = bVar34 + auVar109[0xf];
      pbVar2 = (byte *)((longlong)puVar59 + (longlong)puVar60);
      *pbVar2 = -((byte)((bVar3 < bVar77) * bVar3 | (bVar3 >= bVar77) * bVar77) == bVar77) & bVar43
                | *pbVar1;
      pbVar2[1] = -((byte)((bVar35 < bVar78) * bVar35 | (bVar35 >= bVar78) * bVar78) == bVar78) &
                  bVar44 | bVar4;
      pbVar2[2] = -((byte)((bVar36 < bVar79) * bVar36 | (bVar36 >= bVar79) * bVar79) == bVar79) &
                  bVar45 | bVar5;
      pbVar2[3] = -((byte)((bVar37 < bVar80) * bVar37 | (bVar37 >= bVar80) * bVar80) == bVar80) &
                  bVar46 | bVar6;
      pbVar2[4] = -((byte)((bVar38 < bVar81) * bVar38 | (bVar38 >= bVar81) * bVar81) == bVar81) &
                  bVar47 | bVar7;
      pbVar2[5] = -((byte)((bVar39 < bVar82) * bVar39 | (bVar39 >= bVar82) * bVar82) == bVar82) &
                  bVar48 | bVar8;
      pbVar2[6] = -((byte)((bVar40 < bVar83) * bVar40 | (bVar40 >= bVar83) * bVar83) == bVar83) &
                  bVar49 | bVar9;
      pbVar2[7] = -((byte)((bVar41 < bVar84) * bVar41 | (bVar41 >= bVar84) * bVar84) == bVar84) &
                  bVar50 | bVar10;
      pbVar2[8] = -((byte)((bVar69 < bVar85) * bVar69 | (bVar69 >= bVar85) * bVar85) == bVar85) &
                  bVar51 | bVar11;
      pbVar2[9] = -((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) == bVar86) &
                  bVar52 | bVar12;
      pbVar2[10] = -((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) == bVar87) &
                   bVar53 | bVar13;
      pbVar2[0xb] = -((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88) &
                    bVar54 | bVar14;
      pbVar2[0xc] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89) &
                    bVar55 | bVar15;
      pbVar2[0xd] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90) &
                    bVar56 | bVar16;
      pbVar2[0xe] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91) &
                    bVar57 | bVar17;
      pbVar2[0xf] = -((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92) &
                    bVar58 | bVar18;
      pbVar1 = (byte *)((longlong)(puVar59 + 2) + (longlong)puVar60);
      *pbVar1 = -((byte)((bVar3 < bVar93) * bVar3 | (bVar3 >= bVar93) * bVar93) == bVar93) & bVar43
                | bVar19;
      pbVar1[1] = -((byte)((bVar35 < bVar94) * bVar35 | (bVar35 >= bVar94) * bVar94) == bVar94) &
                  bVar44 | bVar20;
      pbVar1[2] = -((byte)((bVar36 < bVar95) * bVar36 | (bVar36 >= bVar95) * bVar95) == bVar95) &
                  bVar45 | bVar21;
      pbVar1[3] = -((byte)((bVar37 < bVar96) * bVar37 | (bVar37 >= bVar96) * bVar96) == bVar96) &
                  bVar46 | bVar22;
      pbVar1[4] = -((byte)((bVar38 < bVar97) * bVar38 | (bVar38 >= bVar97) * bVar97) == bVar97) &
                  bVar47 | bVar23;
      pbVar1[5] = -((byte)((bVar39 < bVar98) * bVar39 | (bVar39 >= bVar98) * bVar98) == bVar98) &
                  bVar48 | bVar24;
      pbVar1[6] = -((byte)((bVar40 < bVar99) * bVar40 | (bVar40 >= bVar99) * bVar99) == bVar99) &
                  bVar49 | bVar25;
      pbVar1[7] = -((byte)((bVar41 < bVar100) * bVar41 | (bVar41 >= bVar100) * bVar100) == bVar100)
                  & bVar50 | bVar26;
      pbVar1[8] = -((byte)((bVar69 < bVar101) * bVar69 | (bVar69 >= bVar101) * bVar101) == bVar101)
                  & bVar51 | bVar27;
      pbVar1[9] = -((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) == bVar102)
                  & bVar52 | bVar28;
      pbVar1[10] = -((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) == bVar103)
                   & bVar53 | bVar29;
      pbVar1[0xb] = -((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) == bVar104
                     ) & bVar54 | bVar30;
      pbVar1[0xc] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) == bVar105
                     ) & bVar55 | bVar31;
      pbVar1[0xd] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) == bVar106
                     ) & bVar56 | bVar32;
      pbVar1[0xe] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) == bVar107
                     ) & bVar57 | bVar33;
      pbVar1[0xf] = -((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) == bVar108
                     ) & bVar58 | bVar34;
      puVar60 = puVar60 + 4;
    } while (puVar61 != puVar60);
    if (extraout_RDX != puVar61) {
      puVar60 = puVar61;
      if (((ulonglong)extraout_RDX & 0x18) != 0) goto LAB_004faf19;
      goto LAB_004faf73;
    }
  }
  else {
    puVar61 = (ulonglong *)0x0;
LAB_004faf73:
    do {
      *(byte *)((longlong)puVar59 + (longlong)puVar61) =
           ((byte)(*(byte *)((longlong)puVar59 + (longlong)puVar61) + 0xbf) < 0x1a) << 5 |
           *(byte *)((longlong)puVar59 + (longlong)puVar61);
      puVar61 = (ulonglong *)((longlong)puVar61 + 1);
LAB_004faf8d:
    } while (extraout_RDX != puVar61);
  }
  puVar64 = &switchD_004fafae::switchdataD_00198784;
  switch((ulonglong *)((longlong)extraout_RDX + -1)) {
  case (ulonglong *)0x0:
    bVar3 = (byte)*puVar59;
    puVar64 = (uint *)(ulonglong)bVar3;
    if ((bVar3 == 0x2b) || (bVar3 == 0x2d)) {
      pcVar67 = (char *)0x0;
      goto LAB_004fb2bf;
    }
    if (bVar3 == 0x30) goto LAB_004fb2ad;
    goto LAB_004fb15a;
  case (ulonglong *)0x2:
    uVar66 = (ushort)*puVar59 ^ 0x666f;
    puVar64 = (uint *)(ulonglong)uVar66;
    if (*(byte *)((longlong)puVar59 + 2) != 0x66 || (short)uVar66 != 0) {
      uVar66 = (ushort)*puVar59 ^ 0x6f6c;
      puVar64 = (uint *)(ulonglong)uVar66;
      if (*(byte *)((longlong)puVar59 + 2) != 0x77 || (short)uVar66 != 0) {
        uVar66 = (ushort)*puVar59 ^ 0x656d;
        puVar64 = (uint *)(ulonglong)uVar66;
        if (*(byte *)((longlong)puVar59 + 2) == 100 && (short)uVar66 == 0) goto LAB_004fb23f;
        uVar66 = (ushort)*puVar59 ^ 0x616d;
        if (*(byte *)((longlong)puVar59 + 2) == 0x78 && (short)uVar66 == 0) goto LAB_004fb129;
        break;
      }
      goto LAB_004fb2f3;
    }
    goto LAB_004fb2ad;
  case (ulonglong *)0x3:
    unaff_R12 = 4;
    if ((uint)*puVar59 == 0x656e6f6e) {
      pcVar67 = &DAT_0018e03c;
      goto LAB_004fb2bf;
    }
    if ((uint)*puVar59 == 0x6f747561) goto LAB_004fb23f;
    if ((uint)*puVar59 == 0x68676968) {
      pcVar67 = &DAT_0018e05c;
      goto LAB_004fb2bf;
    }
    break;
  case (ulonglong *)0x4:
    uVar66 = (uint)*puVar59 ^ 0x67696878;
    if (*(byte *)((longlong)puVar59 + 4) == 0x68 && uVar66 == 0) {
LAB_004fb129:
      puVar64 = (uint *)(ulonglong)uVar66;
      unaff_R12 = 5;
      pcVar67 = "xhigh";
      goto LAB_004fb2bf;
    }
    break;
  case (ulonglong *)0x5:
    uVar66 = (uint)*puVar59 ^ 0x6964656d;
    puVar64 = (uint *)(ulonglong)uVar66;
    if (*(ushort *)((longlong)puVar59 + 4) == 0x6d75 && uVar66 == 0) {
LAB_004fb23f:
      unaff_R12 = 6;
      pcVar67 = "medium";
      goto LAB_004fb2bf;
    }
    break;
  case (ulonglong *)0x6:
    uVar66 = (uint)*puVar59 ^ 0x696e696d;
    puVar64 = (uint *)(ulonglong)uVar66;
    if (*(int *)((longlong)puVar59 + 3) != 0x6c616d69 || uVar66 != 0) break;
    goto LAB_004fb29e;
  case (ulonglong *)0x7:
    puVar64 = (uint *)0x64656c6261736964;
    if (*puVar59 == 0x64656c6261736964) goto LAB_004fb2ad;
    puVar64 = (uint *)0x6576697470616461;
    if (*puVar59 == 0x6576697470616461) goto LAB_004fb23f;
    break;
  case (ulonglong *)0x9:
    puVar64 = (uint *)(*puVar59 ^ 0x69685f6172747865);
    unaff_R12 = 5;
    pcVar67 = "xhigh";
    if (((ushort)puVar59[1] == 0x6867 && (ulonglong *)puVar64 == (ulonglong *)0x0) ||
       (puVar64 = (uint *)(*puVar59 ^ 0x69682d6172747865),
       (ushort)puVar59[1] == 0x6867 && (ulonglong *)puVar64 == (ulonglong *)0x0)) goto LAB_004fb2bf;
  }
  puVar64 = (uint *)(ulonglong)(byte)*puVar59;
LAB_004fb15a:
  if ((char)puVar64 == '-') {
    if (&DAT_00000010 < extraout_RDX) {
      puVar64 = (uint *)0x1;
      pcVar67 = (char *)0x0;
      uVar63 = 0;
      do {
        lVar62 = uVar63 * 10;
        if (((SEXT816(lVar62) != SEXT816((longlong)uVar63) * SEXT816(10)) ||
            (uVar66 = *(byte *)((longlong)puVar59 + (longlong)puVar64) - 0x30, 9 < uVar66)) ||
           (uVar63 = lVar62 - (ulonglong)uVar66, SBORROW8(lVar62,(ulonglong)uVar66)))
        goto LAB_004fb2bf;
        puVar64 = (uint *)((longlong)puVar64 + 1);
      } while (extraout_RDX != (ulonglong *)puVar64);
    }
    else {
      if (extraout_RDX == (ulonglong *)0x1) goto LAB_004fb2ad;
      puVar64 = (uint *)0x1;
      pcVar67 = (char *)0x0;
      uVar63 = 0;
      do {
        uVar66 = *(byte *)((longlong)puVar59 + (longlong)puVar64) - 0x30;
        if (9 < uVar66) goto LAB_004fb2bf;
        uVar63 = uVar63 * 10 - (ulonglong)uVar66;
        puVar64 = (uint *)((longlong)puVar64 + 1);
      } while (extraout_RDX != (ulonglong *)puVar64);
    }
LAB_004fb282:
    if (uVar63 != 0) {
      unaff_R12 = 6;
      pcVar67 = "medium";
      if (-1 < (longlong)uVar63) {
        if (uVar63 < 0x401) {
LAB_004fb29e:
          unaff_R12 = 7;
          pcVar67 = "minimal";
        }
        else if (uVar63 < 0x1001) {
LAB_004fb2f3:
          unaff_R12 = 3;
          pcVar67 = "low";
        }
        else if (0x3000 < uVar63) {
          unaff_R12 = 5 - (ulonglong)(uVar63 < 0x6001);
          pcVar67 = "xhigh";
          if (uVar63 < 0x6001) {
            pcVar67 = &DAT_0018e05c;
          }
        }
      }
      goto LAB_004fb2bf;
    }
  }
  else {
    iVar65 = (int)puVar64;
    puVar64 = (uint *)puVar59;
    puVar60 = extraout_RDX;
    if (iVar65 == 0x2b) {
      puVar64 = (uint *)((longlong)puVar59 + 1);
      puVar60 = (ulonglong *)((longlong)extraout_RDX + -1);
    }
    if (&DAT_0000000f < puVar60) {
      pcVar67 = (char *)0x0;
      puVar59 = (ulonglong *)0x0;
      uVar63 = 0;
      do {
        lVar62 = uVar63 * 10;
        if (((SEXT816(lVar62) != SEXT816((longlong)uVar63) * SEXT816(10)) ||
            (uVar66 = *(byte *)((longlong)puVar64 + (longlong)puVar59) - 0x30, 9 < uVar66)) ||
           (uVar63 = lVar62 + (ulonglong)uVar66, SCARRY8(lVar62,(ulonglong)uVar66)))
        goto LAB_004fb2bf;
        puVar59 = (ulonglong *)((longlong)puVar59 + 1);
      } while (puVar60 != puVar59);
      goto LAB_004fb282;
    }
    if (puVar60 != (ulonglong *)0x0) {
      pcVar67 = (char *)0x0;
      puVar59 = (ulonglong *)0x0;
      uVar63 = 0;
      do {
        uVar66 = *(byte *)((longlong)puVar64 + (longlong)puVar59) - 0x30;
        if (9 < uVar66) goto LAB_004fb2bf;
        uVar63 = (ulonglong)uVar66 + uVar63 * 10;
        puVar59 = (ulonglong *)((longlong)puVar59 + 1);
      } while (puVar60 != puVar59);
      goto LAB_004fb282;
    }
  }
LAB_004fb2ad:
  unaff_R12 = 4;
  pcVar67 = &DAT_0018e03c;
LAB_004fb2bf:
  (*(code *)PTR___rust_dealloc_00798fc8)(puVar64,1);
LAB_004fb2d0:
  auVar109._8_8_ = unaff_R12;
  auVar109._0_8_ = pcVar67;
  return auVar109;
}


