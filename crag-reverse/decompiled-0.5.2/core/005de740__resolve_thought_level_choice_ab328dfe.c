// 005de740 resolve_thought_level_choice

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::acp_backend::resolve_thought_level_choice */

ulonglong * __rustcall
craggemini_core[66f3c71560d70857]::acp_backend::resolve_thought_level_choice
          (ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
          longlong param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  byte bVar43;
  byte bVar44;
  undefined1 auVar45 [16];
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
  byte bVar61;
  char cVar62;
  longlong *plVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  undefined *puVar66;
  ulonglong extraout_RDX;
  ulonglong *puVar67;
  longlong lVar68;
  ulonglong *puVar69;
  undefined **ppuVar70;
  undefined1 uVar71;
  undefined8 uVar72;
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
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  ulonglong *local_38;
  
  ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  uVar71 = extraout_RDX == 0;
  if (-1 < (longlong)extraout_RDX) goto LAB_005de778;
  puVar67 = (ulonglong *)0x0;
  puVar69 = param_1;
  do {
    uVar71 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_4 = puVar67;
    param_1 = puVar69;
LAB_005de778:
    if ((bool)uVar71) {
      if (param_5 != 0) {
        local_38 = param_4 + param_5 * 3;
        plVar63 = (longlong *)0x1;
        goto LAB_005de9b4;
      }
      plVar63 = (longlong *)0x1;
      goto LAB_005deafb;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar67 = (ulonglong *)0x1;
    plVar63 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    puVar69 = param_4;
  } while (plVar63 == (longlong *)0x0);
  (*(code *)PTR_memcpy_00799008)();
  bVar61 = UNK_0018483f;
  bVar60 = UNK_0018483e;
  bVar59 = UNK_0018483d;
  bVar58 = UNK_0018483c;
  bVar57 = UNK_0018483b;
  bVar56 = UNK_0018483a;
  bVar55 = UNK_00184839;
  bVar54 = UNK_00184838;
  bVar53 = UNK_00184837;
  bVar52 = UNK_00184836;
  bVar51 = UNK_00184835;
  bVar50 = UNK_00184834;
  bVar49 = UNK_00184833;
  bVar48 = UNK_00184832;
  bVar47 = UNK_00184831;
  bVar46 = DAT_00184830;
  auVar45 = _DAT_00183f60;
  bVar80 = UNK_0018303f;
  bVar79 = UNK_0018303e;
  bVar78 = UNK_0018303d;
  bVar77 = UNK_0018303c;
  bVar76 = UNK_0018303b;
  bVar75 = UNK_0018303a;
  bVar74 = UNK_00183039;
  bVar73 = UNK_00183038;
  bVar44 = UNK_00183037;
  bVar43 = UNK_00183036;
  bVar42 = UNK_00183035;
  bVar41 = UNK_00183034;
  bVar40 = UNK_00183033;
  bVar39 = UNK_00183032;
  bVar38 = UNK_00183031;
  bVar4 = DAT_00183030;
  if (extraout_RDX < 8) {
    uVar64 = 0;
LAB_005de8fe:
    do {
      *(byte *)((longlong)plVar63 + uVar64) =
           ((byte)(*(byte *)((longlong)plVar63 + uVar64) + 0xbf) < 0x1a) << 5 |
           *(byte *)((longlong)plVar63 + uVar64);
      uVar64 = uVar64 + 1;
LAB_005de918:
    } while (extraout_RDX != uVar64);
  }
  else {
    if (extraout_RDX < 0x20) {
      uVar65 = 0;
LAB_005de899:
      uVar72 = s__001846a0._0_8_;
      auVar45 = _DAT_00184160;
      bVar44 = UNK_001840c7;
      bVar43 = UNK_001840c6;
      bVar42 = UNK_001840c5;
      bVar41 = UNK_001840c4;
      bVar40 = UNK_001840c3;
      bVar39 = UNK_001840c2;
      bVar38 = UNK_001840c1;
      bVar4 = DAT_001840c0;
      uVar64 = extraout_RDX & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)((longlong)plVar63 + uVar65);
        bVar73 = (char)uVar3 + auVar45[0];
        bVar74 = (char)(uVar3 >> 8) + auVar45[1];
        bVar75 = (char)(uVar3 >> 0x10) + auVar45[2];
        bVar76 = (char)(uVar3 >> 0x18) + auVar45[3];
        bVar77 = (char)(uVar3 >> 0x20) + auVar45[4];
        bVar78 = (char)(uVar3 >> 0x28) + auVar45[5];
        bVar79 = (char)(uVar3 >> 0x30) + auVar45[6];
        bVar80 = (char)(uVar3 >> 0x38) + auVar45[7];
        *(ulonglong *)((longlong)plVar63 + uVar65) =
             ~CONCAT17(-((byte)((bVar80 < bVar44) * bVar44 | (bVar80 >= bVar44) * bVar80) == bVar80)
                       ,CONCAT16(-((byte)((bVar79 < bVar43) * bVar43 | (bVar79 >= bVar43) * bVar79)
                                  == bVar79),
                                 CONCAT15(-((byte)((bVar78 < bVar42) * bVar42 |
                                                  (bVar78 >= bVar42) * bVar78) == bVar78),
                                          CONCAT14(-((byte)((bVar77 < bVar41) * bVar41 |
                                                           (bVar77 >= bVar41) * bVar77) == bVar77),
                                                   CONCAT13(-((byte)((bVar76 < bVar40) * bVar40 |
                                                                    (bVar76 >= bVar40) * bVar76) ==
                                                             bVar76),CONCAT12(-((byte)((bVar75 < 
                                                  bVar39) * bVar39 | (bVar75 >= bVar39) * bVar75) ==
                                                  bVar75),CONCAT11(-((byte)((bVar74 < bVar38) *
                                                                            bVar38 | (bVar74 >=
                                                                                     bVar38) * 
                                                  bVar74) == bVar74),
                                                  -((byte)((bVar73 < bVar4) * bVar4 |
                                                          (bVar73 >= bVar4) * bVar73) == bVar73)))))
                                         ))) & uVar72 | uVar3;
        uVar65 = uVar65 + 8;
        if (uVar64 == uVar65) goto LAB_005de918;
      } while( true );
    }
    uVar64 = extraout_RDX & 0x7fffffffffffffe0;
    uVar65 = 0;
    do {
      pbVar1 = (byte *)((longlong)plVar63 + uVar65);
      bVar7 = pbVar1[1];
      bVar8 = pbVar1[2];
      bVar9 = pbVar1[3];
      bVar10 = pbVar1[4];
      bVar11 = pbVar1[5];
      bVar12 = pbVar1[6];
      bVar13 = pbVar1[7];
      bVar14 = pbVar1[8];
      bVar15 = pbVar1[9];
      bVar16 = pbVar1[10];
      bVar17 = pbVar1[0xb];
      bVar18 = pbVar1[0xc];
      bVar19 = pbVar1[0xd];
      bVar20 = pbVar1[0xe];
      bVar21 = pbVar1[0xf];
      pbVar2 = (byte *)((longlong)plVar63 + uVar65 + 0x10);
      bVar22 = *pbVar2;
      bVar23 = pbVar2[1];
      bVar24 = pbVar2[2];
      bVar25 = pbVar2[3];
      bVar26 = pbVar2[4];
      bVar27 = pbVar2[5];
      bVar28 = pbVar2[6];
      bVar29 = pbVar2[7];
      bVar30 = pbVar2[8];
      bVar31 = pbVar2[9];
      bVar32 = pbVar2[10];
      bVar33 = pbVar2[0xb];
      bVar34 = pbVar2[0xc];
      bVar35 = pbVar2[0xd];
      bVar36 = pbVar2[0xe];
      bVar37 = pbVar2[0xf];
      bVar81 = *pbVar1 + auVar45[0];
      bVar82 = bVar7 + auVar45[1];
      bVar83 = bVar8 + auVar45[2];
      bVar84 = bVar9 + auVar45[3];
      bVar85 = bVar10 + auVar45[4];
      bVar86 = bVar11 + auVar45[5];
      bVar87 = bVar12 + auVar45[6];
      bVar88 = bVar13 + auVar45[7];
      bVar89 = bVar14 + auVar45[8];
      bVar90 = bVar15 + auVar45[9];
      bVar91 = bVar16 + auVar45[10];
      bVar92 = bVar17 + auVar45[0xb];
      bVar93 = bVar18 + auVar45[0xc];
      bVar94 = bVar19 + auVar45[0xd];
      bVar95 = bVar20 + auVar45[0xe];
      bVar96 = bVar21 + auVar45[0xf];
      bVar97 = bVar22 + auVar45[0];
      bVar98 = bVar23 + auVar45[1];
      bVar99 = bVar24 + auVar45[2];
      bVar100 = bVar25 + auVar45[3];
      bVar101 = bVar26 + auVar45[4];
      bVar102 = bVar27 + auVar45[5];
      bVar103 = bVar28 + auVar45[6];
      bVar104 = bVar29 + auVar45[7];
      bVar105 = bVar30 + auVar45[8];
      bVar106 = bVar31 + auVar45[9];
      bVar107 = bVar32 + auVar45[10];
      bVar108 = bVar33 + auVar45[0xb];
      bVar109 = bVar34 + auVar45[0xc];
      bVar110 = bVar35 + auVar45[0xd];
      bVar111 = bVar36 + auVar45[0xe];
      bVar112 = bVar37 + auVar45[0xf];
      pbVar2 = (byte *)((longlong)plVar63 + uVar65);
      *pbVar2 = -((byte)((bVar4 < bVar81) * bVar4 | (bVar4 >= bVar81) * bVar81) == bVar81) & bVar46
                | *pbVar1;
      pbVar2[1] = -((byte)((bVar38 < bVar82) * bVar38 | (bVar38 >= bVar82) * bVar82) == bVar82) &
                  bVar47 | bVar7;
      pbVar2[2] = -((byte)((bVar39 < bVar83) * bVar39 | (bVar39 >= bVar83) * bVar83) == bVar83) &
                  bVar48 | bVar8;
      pbVar2[3] = -((byte)((bVar40 < bVar84) * bVar40 | (bVar40 >= bVar84) * bVar84) == bVar84) &
                  bVar49 | bVar9;
      pbVar2[4] = -((byte)((bVar41 < bVar85) * bVar41 | (bVar41 >= bVar85) * bVar85) == bVar85) &
                  bVar50 | bVar10;
      pbVar2[5] = -((byte)((bVar42 < bVar86) * bVar42 | (bVar42 >= bVar86) * bVar86) == bVar86) &
                  bVar51 | bVar11;
      pbVar2[6] = -((byte)((bVar43 < bVar87) * bVar43 | (bVar43 >= bVar87) * bVar87) == bVar87) &
                  bVar52 | bVar12;
      pbVar2[7] = -((byte)((bVar44 < bVar88) * bVar44 | (bVar44 >= bVar88) * bVar88) == bVar88) &
                  bVar53 | bVar13;
      pbVar2[8] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89) &
                  bVar54 | bVar14;
      pbVar2[9] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90) &
                  bVar55 | bVar15;
      pbVar2[10] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91) &
                   bVar56 | bVar16;
      pbVar2[0xb] = -((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92) &
                    bVar57 | bVar17;
      pbVar2[0xc] = -((byte)((bVar77 < bVar93) * bVar77 | (bVar77 >= bVar93) * bVar93) == bVar93) &
                    bVar58 | bVar18;
      pbVar2[0xd] = -((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94) &
                    bVar59 | bVar19;
      pbVar2[0xe] = -((byte)((bVar79 < bVar95) * bVar79 | (bVar79 >= bVar95) * bVar95) == bVar95) &
                    bVar60 | bVar20;
      pbVar2[0xf] = -((byte)((bVar80 < bVar96) * bVar80 | (bVar80 >= bVar96) * bVar96) == bVar96) &
                    bVar61 | bVar21;
      pbVar1 = (byte *)((longlong)plVar63 + uVar65 + 0x10);
      *pbVar1 = -((byte)((bVar4 < bVar97) * bVar4 | (bVar4 >= bVar97) * bVar97) == bVar97) & bVar46
                | bVar22;
      pbVar1[1] = -((byte)((bVar38 < bVar98) * bVar38 | (bVar38 >= bVar98) * bVar98) == bVar98) &
                  bVar47 | bVar23;
      pbVar1[2] = -((byte)((bVar39 < bVar99) * bVar39 | (bVar39 >= bVar99) * bVar99) == bVar99) &
                  bVar48 | bVar24;
      pbVar1[3] = -((byte)((bVar40 < bVar100) * bVar40 | (bVar40 >= bVar100) * bVar100) == bVar100)
                  & bVar49 | bVar25;
      pbVar1[4] = -((byte)((bVar41 < bVar101) * bVar41 | (bVar41 >= bVar101) * bVar101) == bVar101)
                  & bVar50 | bVar26;
      pbVar1[5] = -((byte)((bVar42 < bVar102) * bVar42 | (bVar42 >= bVar102) * bVar102) == bVar102)
                  & bVar51 | bVar27;
      pbVar1[6] = -((byte)((bVar43 < bVar103) * bVar43 | (bVar43 >= bVar103) * bVar103) == bVar103)
                  & bVar52 | bVar28;
      pbVar1[7] = -((byte)((bVar44 < bVar104) * bVar44 | (bVar44 >= bVar104) * bVar104) == bVar104)
                  & bVar53 | bVar29;
      pbVar1[8] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) == bVar105)
                  & bVar54 | bVar30;
      pbVar1[9] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) == bVar106)
                  & bVar55 | bVar31;
      pbVar1[10] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) == bVar107)
                   & bVar56 | bVar32;
      pbVar1[0xb] = -((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) == bVar108
                     ) & bVar57 | bVar33;
      pbVar1[0xc] = -((byte)((bVar77 < bVar109) * bVar77 | (bVar77 >= bVar109) * bVar109) == bVar109
                     ) & bVar58 | bVar34;
      pbVar1[0xd] = -((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) == bVar110
                     ) & bVar59 | bVar35;
      pbVar1[0xe] = -((byte)((bVar79 < bVar111) * bVar79 | (bVar79 >= bVar111) * bVar111) == bVar111
                     ) & bVar60 | bVar36;
      pbVar1[0xf] = -((byte)((bVar80 < bVar112) * bVar80 | (bVar80 >= bVar112) * bVar112) == bVar112
                     ) & bVar61 | bVar37;
      uVar65 = uVar65 + 0x20;
    } while (uVar64 != uVar65);
    if (extraout_RDX != uVar64) {
      uVar65 = uVar64;
      if ((extraout_RDX & 0x18) != 0) goto LAB_005de899;
      goto LAB_005de8fe;
    }
  }
  if (param_5 == 0) goto switchD_005dea42_caseD_6;
  lVar68 = param_5 * 0x18;
  local_38 = param_4 + param_5 * 3;
  if (extraout_RDX < 0x10) {
LAB_005de9b4:
    puVar69 = param_4;
    do {
      if (puVar69[2] == extraout_RDX) {
        uVar65 = 0;
        do {
          if (extraout_RDX == uVar65) goto LAB_005de97f;
          pbVar1 = (byte *)(puVar69[1] + uVar65);
          pbVar2 = (byte *)((longlong)plVar63 + uVar65);
          uVar65 = uVar65 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(*pbVar2 + 0xbf) < 0x1a) << 5 | *pbVar2));
      }
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  else {
    do {
      if ((puVar69[2] == extraout_RDX) &&
         (cVar62 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                             (puVar69[1],extraout_RDX,plVar63,extraout_RDX), cVar62 != '\0'))
      goto LAB_005de97f;
      puVar69 = puVar69 + 3;
      lVar68 = lVar68 + -0x18;
    } while (lVar68 != 0);
  }
  switch(extraout_RDX) {
  case 3:
    if (*(char *)((longlong)plVar63 + 2) == 'x' && (short)*plVar63 == 0x616d) goto LAB_005deaad;
    if (*(char *)((longlong)plVar63 + 2) != 'f' || (short)*plVar63 != 0x666f)
    goto switchD_005dea42_caseD_6;
    break;
  case 4:
    if ((int)*plVar63 != 0x656e6f6e) goto switchD_005dea42_caseD_6;
    break;
  case 5:
    if (*(char *)((longlong)plVar63 + 4) != 'h' || (int)*plVar63 != 0x67696878)
    goto switchD_005dea42_caseD_6;
    goto LAB_005deaad;
  default:
    goto switchD_005dea42_caseD_6;
  case 7:
    if (*(int *)((longlong)plVar63 + 3) != 0x6c616d69 || (int)*plVar63 != 0x696e696d)
    goto switchD_005dea42_caseD_6;
    ppuVar70 = &PTR_DAT_0078e678;
    goto LAB_005deb23;
  case 8:
    if (*plVar63 != 0x64656c6261736964) goto switchD_005dea42_caseD_6;
    break;
  case 10:
    if ((short)plVar63[1] != 0x6867 || *plVar63 != 0x69685f6172747865)
    goto switchD_005dea42_caseD_6;
LAB_005deaad:
    ppuVar70 = &PTR_DAT_0078e6f8;
    goto LAB_005deb23;
  }
  ppuVar70 = &PTR_DAT_0078e6b8;
LAB_005deb23:
  puVar5 = *ppuVar70;
  puVar6 = ppuVar70[1];
  if (puVar6 < (undefined *)0x10) {
    puVar69 = param_4;
    do {
      if ((undefined *)puVar69[2] == puVar6) {
        puVar66 = (undefined *)0x0;
        do {
          if (puVar6 == puVar66) goto LAB_005de97f;
          pbVar1 = puVar66 + puVar69[1];
          bVar4 = puVar5[(longlong)puVar66];
          puVar66 = puVar66 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4));
      }
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  else {
    puVar69 = param_4;
    do {
      if (((undefined *)puVar69[2] == puVar6) &&
         (cVar62 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(puVar69[1],puVar6,puVar5),
         cVar62 != '\0')) goto LAB_005de97f;
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  puVar5 = ppuVar70[2];
  puVar6 = ppuVar70[3];
  if (puVar6 < (undefined *)0x10) {
    puVar69 = param_4;
    do {
      if ((undefined *)puVar69[2] == puVar6) {
        puVar66 = (undefined *)0x0;
        do {
          if (puVar6 == puVar66) goto LAB_005de97f;
          pbVar1 = puVar66 + puVar69[1];
          bVar4 = puVar5[(longlong)puVar66];
          puVar66 = puVar66 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4));
      }
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  else {
    puVar69 = param_4;
    do {
      if (((undefined *)puVar69[2] == puVar6) &&
         (cVar62 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(puVar69[1],puVar6,puVar5),
         cVar62 != '\0')) goto LAB_005de97f;
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  puVar5 = ppuVar70[4];
  puVar6 = ppuVar70[5];
  if (puVar6 < (undefined *)0x10) {
    puVar69 = param_4;
    do {
      if ((undefined *)puVar69[2] == puVar6) {
        puVar66 = (undefined *)0x0;
        do {
          if (puVar6 == puVar66) goto LAB_005de97f;
          pbVar1 = puVar66 + puVar69[1];
          bVar4 = puVar5[(longlong)puVar66];
          puVar66 = puVar66 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4));
      }
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  else {
    puVar69 = param_4;
    do {
      if (((undefined *)puVar69[2] == puVar6) &&
         (cVar62 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(puVar69[1],puVar6,puVar5),
         cVar62 != '\0')) goto LAB_005de97f;
      puVar69 = puVar69 + 3;
    } while (puVar69 != local_38);
  }
  puVar5 = ppuVar70[6];
  puVar6 = ppuVar70[7];
  if (puVar6 < (undefined *)0x10) {
    do {
      if ((undefined *)param_4[2] == puVar6) {
        puVar66 = (undefined *)0x0;
        do {
          if (puVar6 == puVar66) goto LAB_005de97f;
          pbVar1 = puVar66 + param_4[1];
          bVar4 = puVar5[(longlong)puVar66];
          puVar66 = puVar66 + 1;
        } while ((byte)(((byte)(*pbVar1 + 0xbf) < 0x1a) << 5 | *pbVar1) ==
                 (byte)(((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4));
      }
      param_4 = param_4 + 3;
    } while (param_4 != local_38);
  }
  else {
    do {
      if (((undefined *)param_4[2] == puVar6) &&
         (cVar62 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(param_4[1],puVar6,puVar5,puVar6),
         cVar62 != '\0')) {
LAB_005de97f:
        uVar72 = (*(code *)PTR_clone_00798fd0)();
        if (extraout_RDX == 0) {
          return param_1;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar72,1);
        return param_1;
      }
      param_4 = param_4 + 3;
    } while (param_4 != local_38);
  }
switchD_005dea42_caseD_6:
LAB_005deafb:
  *param_1 = extraout_RDX;
  param_1[1] = (ulonglong)plVar63;
  param_1[2] = extraout_RDX;
  return param_1;
}


