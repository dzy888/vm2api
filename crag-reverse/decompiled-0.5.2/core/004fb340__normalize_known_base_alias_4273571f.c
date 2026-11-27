// 004fb340 normalize_known_base_alias

/* WARNING: Switch with 1 destination removed at 0x004fb666 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::models::normalize_known_base_alias */

void __rustcall
craggemini_core[66f3c71560d70857]::models::normalize_known_base_alias
          (ulonglong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  code *pcVar5;
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
  byte bVar59;
  byte bVar60;
  ulonglong *puVar61;
  char *pcVar62;
  ulonglong uVar63;
  undefined8 uVar64;
  ulonglong uVar65;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar66;
  undefined8 extraout_XMM0_Qa_02;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
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
  byte bVar113;
  byte bVar114;
  
  if (-1 < (longlong)param_3) goto LAB_004fb362;
  puVar61 = (ulonglong *)0x0;
  do {
    param_1 = puVar61;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_004fb362:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    puVar61 = (ulonglong *)0x1;
  } while (pcVar62 == (char *)0x0);
  (*(code *)PTR_memcpy_00799008)();
  bVar60 = UNK_0018483f;
  bVar59 = UNK_0018483e;
  bVar58 = UNK_0018483d;
  bVar57 = UNK_0018483c;
  bVar56 = UNK_0018483b;
  bVar55 = UNK_0018483a;
  bVar54 = UNK_00184839;
  bVar53 = UNK_00184838;
  bVar52 = UNK_00184837;
  bVar51 = UNK_00184836;
  bVar50 = UNK_00184835;
  bVar49 = UNK_00184834;
  bVar48 = UNK_00184833;
  bVar47 = UNK_00184832;
  bVar46 = UNK_00184831;
  bVar45 = DAT_00184830;
  auVar70 = _DAT_00183f60;
  bVar82 = UNK_0018303f;
  bVar81 = UNK_0018303e;
  bVar80 = UNK_0018303d;
  bVar79 = UNK_0018303c;
  bVar78 = UNK_0018303b;
  bVar77 = UNK_0018303a;
  bVar76 = UNK_00183039;
  bVar75 = UNK_00183038;
  bVar44 = UNK_00183037;
  bVar43 = UNK_00183036;
  bVar42 = UNK_00183035;
  bVar41 = UNK_00183034;
  bVar40 = UNK_00183033;
  bVar39 = UNK_00183032;
  bVar38 = UNK_00183031;
  bVar37 = DAT_00183030;
  if (param_3 < 8) {
    uVar63 = 0;
LAB_004fb4a3:
    do {
      pcVar62[uVar63] = ((byte)(pcVar62[uVar63] + 0xbfU) < 0x1a) << 5 | pcVar62[uVar63];
      uVar63 = uVar63 + 1;
LAB_004fb4bd:
    } while (param_3 != uVar63);
  }
  else {
    if (param_3 < 0x20) {
      uVar65 = 0;
LAB_004fb449:
      uVar66 = s__001846a0._0_8_;
      auVar70 = _DAT_00184160;
      bVar44 = UNK_001840c7;
      bVar43 = UNK_001840c6;
      bVar42 = UNK_001840c5;
      bVar41 = UNK_001840c4;
      bVar40 = UNK_001840c3;
      bVar39 = UNK_001840c2;
      bVar38 = UNK_001840c1;
      bVar37 = DAT_001840c0;
      uVar63 = param_3 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)(pcVar62 + uVar65);
        bVar75 = (char)uVar3 + auVar70[0];
        bVar76 = (char)(uVar3 >> 8) + auVar70[1];
        bVar77 = (char)(uVar3 >> 0x10) + auVar70[2];
        bVar78 = (char)(uVar3 >> 0x18) + auVar70[3];
        bVar79 = (char)(uVar3 >> 0x20) + auVar70[4];
        bVar80 = (char)(uVar3 >> 0x28) + auVar70[5];
        bVar81 = (char)(uVar3 >> 0x30) + auVar70[6];
        bVar82 = (char)(uVar3 >> 0x38) + auVar70[7];
        *(ulonglong *)(pcVar62 + uVar65) =
             ~CONCAT17(-((byte)((bVar82 < bVar44) * bVar44 | (bVar82 >= bVar44) * bVar82) == bVar82)
                       ,CONCAT16(-((byte)((bVar81 < bVar43) * bVar43 | (bVar81 >= bVar43) * bVar81)
                                  == bVar81),
                                 CONCAT15(-((byte)((bVar80 < bVar42) * bVar42 |
                                                  (bVar80 >= bVar42) * bVar80) == bVar80),
                                          CONCAT14(-((byte)((bVar79 < bVar41) * bVar41 |
                                                           (bVar79 >= bVar41) * bVar79) == bVar79),
                                                   CONCAT13(-((byte)((bVar78 < bVar40) * bVar40 |
                                                                    (bVar78 >= bVar40) * bVar78) ==
                                                             bVar78),CONCAT12(-((byte)((bVar77 < 
                                                  bVar39) * bVar39 | (bVar77 >= bVar39) * bVar77) ==
                                                  bVar77),CONCAT11(-((byte)((bVar76 < bVar38) *
                                                                            bVar38 | (bVar76 >=
                                                                                     bVar38) * 
                                                  bVar76) == bVar76),
                                                  -((byte)((bVar75 < bVar37) * bVar37 |
                                                          (bVar75 >= bVar37) * bVar75) == bVar75))))
                                                  )))) & uVar66 | uVar3;
        uVar65 = uVar65 + 8;
        if (uVar63 == uVar65) goto LAB_004fb4bd;
      } while( true );
    }
    uVar63 = param_3 & 0x7fffffffffffffe0;
    uVar65 = 0;
    do {
      pbVar1 = (byte *)(pcVar62 + uVar65);
      bVar6 = pbVar1[1];
      bVar7 = pbVar1[2];
      bVar8 = pbVar1[3];
      bVar9 = pbVar1[4];
      bVar10 = pbVar1[5];
      bVar11 = pbVar1[6];
      bVar12 = pbVar1[7];
      bVar13 = pbVar1[8];
      bVar14 = pbVar1[9];
      bVar15 = pbVar1[10];
      bVar16 = pbVar1[0xb];
      bVar17 = pbVar1[0xc];
      bVar18 = pbVar1[0xd];
      bVar19 = pbVar1[0xe];
      bVar20 = pbVar1[0xf];
      pbVar2 = (byte *)(pcVar62 + uVar65 + 0x10);
      bVar21 = *pbVar2;
      bVar22 = pbVar2[1];
      bVar23 = pbVar2[2];
      bVar24 = pbVar2[3];
      bVar25 = pbVar2[4];
      bVar26 = pbVar2[5];
      bVar27 = pbVar2[6];
      bVar28 = pbVar2[7];
      bVar29 = pbVar2[8];
      bVar30 = pbVar2[9];
      bVar31 = pbVar2[10];
      bVar32 = pbVar2[0xb];
      bVar33 = pbVar2[0xc];
      bVar34 = pbVar2[0xd];
      bVar35 = pbVar2[0xe];
      bVar36 = pbVar2[0xf];
      bVar83 = *pbVar1 + auVar70[0];
      bVar84 = bVar6 + auVar70[1];
      bVar85 = bVar7 + auVar70[2];
      bVar86 = bVar8 + auVar70[3];
      bVar87 = bVar9 + auVar70[4];
      bVar88 = bVar10 + auVar70[5];
      bVar89 = bVar11 + auVar70[6];
      bVar90 = bVar12 + auVar70[7];
      bVar91 = bVar13 + auVar70[8];
      bVar92 = bVar14 + auVar70[9];
      bVar93 = bVar15 + auVar70[10];
      bVar94 = bVar16 + auVar70[0xb];
      bVar95 = bVar17 + auVar70[0xc];
      bVar96 = bVar18 + auVar70[0xd];
      bVar97 = bVar19 + auVar70[0xe];
      bVar98 = bVar20 + auVar70[0xf];
      bVar99 = bVar21 + auVar70[0];
      bVar100 = bVar22 + auVar70[1];
      bVar101 = bVar23 + auVar70[2];
      bVar102 = bVar24 + auVar70[3];
      bVar103 = bVar25 + auVar70[4];
      bVar104 = bVar26 + auVar70[5];
      bVar105 = bVar27 + auVar70[6];
      bVar106 = bVar28 + auVar70[7];
      bVar107 = bVar29 + auVar70[8];
      bVar108 = bVar30 + auVar70[9];
      bVar109 = bVar31 + auVar70[10];
      bVar110 = bVar32 + auVar70[0xb];
      bVar111 = bVar33 + auVar70[0xc];
      bVar112 = bVar34 + auVar70[0xd];
      bVar113 = bVar35 + auVar70[0xe];
      bVar114 = bVar36 + auVar70[0xf];
      pbVar2 = (byte *)(pcVar62 + uVar65);
      *pbVar2 = -((byte)((bVar37 < bVar83) * bVar37 | (bVar37 >= bVar83) * bVar83) == bVar83) &
                bVar45 | *pbVar1;
      pbVar2[1] = -((byte)((bVar38 < bVar84) * bVar38 | (bVar38 >= bVar84) * bVar84) == bVar84) &
                  bVar46 | bVar6;
      pbVar2[2] = -((byte)((bVar39 < bVar85) * bVar39 | (bVar39 >= bVar85) * bVar85) == bVar85) &
                  bVar47 | bVar7;
      pbVar2[3] = -((byte)((bVar40 < bVar86) * bVar40 | (bVar40 >= bVar86) * bVar86) == bVar86) &
                  bVar48 | bVar8;
      pbVar2[4] = -((byte)((bVar41 < bVar87) * bVar41 | (bVar41 >= bVar87) * bVar87) == bVar87) &
                  bVar49 | bVar9;
      pbVar2[5] = -((byte)((bVar42 < bVar88) * bVar42 | (bVar42 >= bVar88) * bVar88) == bVar88) &
                  bVar50 | bVar10;
      pbVar2[6] = -((byte)((bVar43 < bVar89) * bVar43 | (bVar43 >= bVar89) * bVar89) == bVar89) &
                  bVar51 | bVar11;
      pbVar2[7] = -((byte)((bVar44 < bVar90) * bVar44 | (bVar44 >= bVar90) * bVar90) == bVar90) &
                  bVar52 | bVar12;
      pbVar2[8] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91) &
                  bVar53 | bVar13;
      pbVar2[9] = -((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92) &
                  bVar54 | bVar14;
      pbVar2[10] = -((byte)((bVar77 < bVar93) * bVar77 | (bVar77 >= bVar93) * bVar93) == bVar93) &
                   bVar55 | bVar15;
      pbVar2[0xb] = -((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) == bVar94) &
                    bVar56 | bVar16;
      pbVar2[0xc] = -((byte)((bVar79 < bVar95) * bVar79 | (bVar79 >= bVar95) * bVar95) == bVar95) &
                    bVar57 | bVar17;
      pbVar2[0xd] = -((byte)((bVar80 < bVar96) * bVar80 | (bVar80 >= bVar96) * bVar96) == bVar96) &
                    bVar58 | bVar18;
      pbVar2[0xe] = -((byte)((bVar81 < bVar97) * bVar81 | (bVar81 >= bVar97) * bVar97) == bVar97) &
                    bVar59 | bVar19;
      pbVar2[0xf] = -((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) == bVar98) &
                    bVar60 | bVar20;
      pbVar1 = (byte *)(pcVar62 + uVar65 + 0x10);
      *pbVar1 = -((byte)((bVar37 < bVar99) * bVar37 | (bVar37 >= bVar99) * bVar99) == bVar99) &
                bVar45 | bVar21;
      pbVar1[1] = -((byte)((bVar38 < bVar100) * bVar38 | (bVar38 >= bVar100) * bVar100) == bVar100)
                  & bVar46 | bVar22;
      pbVar1[2] = -((byte)((bVar39 < bVar101) * bVar39 | (bVar39 >= bVar101) * bVar101) == bVar101)
                  & bVar47 | bVar23;
      pbVar1[3] = -((byte)((bVar40 < bVar102) * bVar40 | (bVar40 >= bVar102) * bVar102) == bVar102)
                  & bVar48 | bVar24;
      pbVar1[4] = -((byte)((bVar41 < bVar103) * bVar41 | (bVar41 >= bVar103) * bVar103) == bVar103)
                  & bVar49 | bVar25;
      pbVar1[5] = -((byte)((bVar42 < bVar104) * bVar42 | (bVar42 >= bVar104) * bVar104) == bVar104)
                  & bVar50 | bVar26;
      pbVar1[6] = -((byte)((bVar43 < bVar105) * bVar43 | (bVar43 >= bVar105) * bVar105) == bVar105)
                  & bVar51 | bVar27;
      pbVar1[7] = -((byte)((bVar44 < bVar106) * bVar44 | (bVar44 >= bVar106) * bVar106) == bVar106)
                  & bVar52 | bVar28;
      pbVar1[8] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) == bVar107)
                  & bVar53 | bVar29;
      pbVar1[9] = -((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) == bVar108)
                  & bVar54 | bVar30;
      pbVar1[10] = -((byte)((bVar77 < bVar109) * bVar77 | (bVar77 >= bVar109) * bVar109) == bVar109)
                   & bVar55 | bVar31;
      pbVar1[0xb] = -((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) == bVar110
                     ) & bVar56 | bVar32;
      pbVar1[0xc] = -((byte)((bVar79 < bVar111) * bVar79 | (bVar79 >= bVar111) * bVar111) == bVar111
                     ) & bVar57 | bVar33;
      pbVar1[0xd] = -((byte)((bVar80 < bVar112) * bVar80 | (bVar80 >= bVar112) * bVar112) == bVar112
                     ) & bVar58 | bVar34;
      pbVar1[0xe] = -((byte)((bVar81 < bVar113) * bVar81 | (bVar81 >= bVar113) * bVar113) == bVar113
                     ) & bVar59 | bVar35;
      pbVar1[0xf] = -((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114) == bVar114
                     ) & bVar60 | bVar36;
      uVar65 = uVar65 + 0x20;
    } while (uVar63 != uVar65);
    if (param_3 != uVar63) {
      uVar65 = uVar63;
      if ((param_3 & 0x18) != 0) goto LAB_004fb449;
      goto LAB_004fb4a3;
    }
  }
  if (param_3 == 0x1d) {
    auVar74[0] = -(pcVar62[0xd] == DAT_00183c30);
    auVar74[1] = -(pcVar62[0xe] == UNK_00183c31);
    auVar74[2] = -(pcVar62[0xf] == UNK_00183c32);
    auVar74[3] = -(pcVar62[0x10] == UNK_00183c33);
    auVar74[4] = -(pcVar62[0x11] == UNK_00183c34);
    auVar74[5] = -(pcVar62[0x12] == UNK_00183c35);
    auVar74[6] = -(pcVar62[0x13] == UNK_00183c36);
    auVar74[7] = -(pcVar62[0x14] == UNK_00183c37);
    auVar74[8] = -(pcVar62[0x15] == UNK_00183c38);
    auVar74[9] = -(pcVar62[0x16] == UNK_00183c39);
    auVar74[10] = -(pcVar62[0x17] == UNK_00183c3a);
    auVar74[0xb] = -(pcVar62[0x18] == UNK_00183c3b);
    auVar74[0xc] = -(pcVar62[0x19] == UNK_00183c3c);
    auVar74[0xd] = -(pcVar62[0x1a] == UNK_00183c3d);
    auVar74[0xe] = -(pcVar62[0x1b] == UNK_00183c3e);
    auVar74[0xf] = -(pcVar62[0x1c] == UNK_00183c3f);
    auVar70[0] = -(*pcVar62 == s_gemini_3_1_flash_00183ea0[0]);
    auVar70[1] = -(pcVar62[1] == s_gemini_3_1_flash_00183ea0[1]);
    auVar70[2] = -(pcVar62[2] == s_gemini_3_1_flash_00183ea0[2]);
    auVar70[3] = -(pcVar62[3] == s_gemini_3_1_flash_00183ea0[3]);
    auVar70[4] = -(pcVar62[4] == s_gemini_3_1_flash_00183ea0[4]);
    auVar70[5] = -(pcVar62[5] == s_gemini_3_1_flash_00183ea0[5]);
    auVar70[6] = -(pcVar62[6] == s_gemini_3_1_flash_00183ea0[6]);
    auVar70[7] = -(pcVar62[7] == s_gemini_3_1_flash_00183ea0[7]);
    auVar70[8] = -(pcVar62[8] == s_gemini_3_1_flash_00183ea0[8]);
    auVar70[9] = -(pcVar62[9] == s_gemini_3_1_flash_00183ea0[9]);
    auVar70[10] = -(pcVar62[10] == s_gemini_3_1_flash_00183ea0[10]);
    auVar70[0xb] = -(pcVar62[0xb] == s_gemini_3_1_flash_00183ea0[0xb]);
    auVar70[0xc] = -(pcVar62[0xc] == s_gemini_3_1_flash_00183ea0[0xc]);
    auVar70[0xd] = -(pcVar62[0xd] == s_gemini_3_1_flash_00183ea0[0xd]);
    auVar70[0xe] = -(pcVar62[0xe] == s_gemini_3_1_flash_00183ea0[0xe]);
    auVar70[0xf] = -(pcVar62[0xf] == s_gemini_3_1_flash_00183ea0[0xf]);
    auVar70 = auVar70 & auVar74;
    if ((ushort)((ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar70[0xf] >> 7) << 0xf) == 0xffff) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar64 = s_gemini_3_1_flash_lite_0019a3db._8_8_;
      uVar66 = s_gemini_3_1_flash_lite_0019a3db._0_8_;
      if (pcVar62 == (char *)0x0) goto LAB_004fb6f9;
      *(undefined8 *)pcVar62 = s_gemini_3_1_flash_lite_0019a3db._0_8_;
      *(undefined8 *)(pcVar62 + 8) = uVar64;
      pcVar62[0xd] = 'a';
      pcVar62[0xe] = 's';
      pcVar62[0xf] = 'h';
      pcVar62[0x10] = '-';
      pcVar62[0x11] = 'l';
      pcVar62[0x12] = 'i';
      pcVar62[0x13] = 't';
      pcVar62[0x14] = 'e';
      param_3 = 0x15;
      goto LAB_004fb642;
    }
  }
  else {
    if (param_3 == 0x16) {
      auVar72[0] = -(pcVar62[6] == s__3_1_pro_preview_00183fe0[0]);
      auVar72[1] = -(pcVar62[7] == s__3_1_pro_preview_00183fe0[1]);
      auVar72[2] = -(pcVar62[8] == s__3_1_pro_preview_00183fe0[2]);
      auVar72[3] = -(pcVar62[9] == s__3_1_pro_preview_00183fe0[3]);
      auVar72[4] = -(pcVar62[10] == s__3_1_pro_preview_00183fe0[4]);
      auVar72[5] = -(pcVar62[0xb] == s__3_1_pro_preview_00183fe0[5]);
      auVar72[6] = -(pcVar62[0xc] == s__3_1_pro_preview_00183fe0[6]);
      auVar72[7] = -(pcVar62[0xd] == s__3_1_pro_preview_00183fe0[7]);
      auVar72[8] = -(pcVar62[0xe] == s__3_1_pro_preview_00183fe0[8]);
      auVar72[9] = -(pcVar62[0xf] == s__3_1_pro_preview_00183fe0[9]);
      auVar72[10] = -(pcVar62[0x10] == s__3_1_pro_preview_00183fe0[10]);
      auVar72[0xb] = -(pcVar62[0x11] == s__3_1_pro_preview_00183fe0[0xb]);
      auVar72[0xc] = -(pcVar62[0x12] == s__3_1_pro_preview_00183fe0[0xc]);
      auVar72[0xd] = -(pcVar62[0x13] == s__3_1_pro_preview_00183fe0[0xd]);
      auVar72[0xe] = -(pcVar62[0x14] == s__3_1_pro_preview_00183fe0[0xe]);
      auVar72[0xf] = -(pcVar62[0x15] == s__3_1_pro_preview_00183fe0[0xf]);
      auVar68[0] = -(*pcVar62 == DAT_00183240);
      auVar68[1] = -(pcVar62[1] == UNK_00183241);
      auVar68[2] = -(pcVar62[2] == UNK_00183242);
      auVar68[3] = -(pcVar62[3] == UNK_00183243);
      auVar68[4] = -(pcVar62[4] == UNK_00183244);
      auVar68[5] = -(pcVar62[5] == UNK_00183245);
      auVar68[6] = -(pcVar62[6] == UNK_00183246);
      auVar68[7] = -(pcVar62[7] == UNK_00183247);
      auVar68[8] = -(pcVar62[8] == UNK_00183248);
      auVar68[9] = -(pcVar62[9] == UNK_00183249);
      auVar68[10] = -(pcVar62[10] == UNK_0018324a);
      auVar68[0xb] = -(pcVar62[0xb] == UNK_0018324b);
      auVar68[0xc] = -(pcVar62[0xc] == UNK_0018324c);
      auVar68[0xd] = -(pcVar62[0xd] == UNK_0018324d);
      auVar68[0xe] = -(pcVar62[0xe] == UNK_0018324e);
      auVar68[0xf] = -(pcVar62[0xf] == UNK_0018324f);
      auVar68 = auVar68 & auVar72;
      if ((ushort)((ushort)(SUB161(auVar68 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar68[0xf] >> 7) << 0xf) == 0xffff) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar62 == (char *)0x0) goto LAB_004fb6f9;
        uVar64 = 0x6f72702d312e332d;
        uVar66 = extraout_XMM0_Qa_02;
      }
      else {
        auVar73[0] = -(pcVar62[6] == s__3_flash_preview_001835a0[0]);
        auVar73[1] = -(pcVar62[7] == s__3_flash_preview_001835a0[1]);
        auVar73[2] = -(pcVar62[8] == s__3_flash_preview_001835a0[2]);
        auVar73[3] = -(pcVar62[9] == s__3_flash_preview_001835a0[3]);
        auVar73[4] = -(pcVar62[10] == s__3_flash_preview_001835a0[4]);
        auVar73[5] = -(pcVar62[0xb] == s__3_flash_preview_001835a0[5]);
        auVar73[6] = -(pcVar62[0xc] == s__3_flash_preview_001835a0[6]);
        auVar73[7] = -(pcVar62[0xd] == s__3_flash_preview_001835a0[7]);
        auVar73[8] = -(pcVar62[0xe] == s__3_flash_preview_001835a0[8]);
        auVar73[9] = -(pcVar62[0xf] == s__3_flash_preview_001835a0[9]);
        auVar73[10] = -(pcVar62[0x10] == s__3_flash_preview_001835a0[10]);
        auVar73[0xb] = -(pcVar62[0x11] == s__3_flash_preview_001835a0[0xb]);
        auVar73[0xc] = -(pcVar62[0x12] == s__3_flash_preview_001835a0[0xc]);
        auVar73[0xd] = -(pcVar62[0x13] == s__3_flash_preview_001835a0[0xd]);
        auVar73[0xe] = -(pcVar62[0x14] == s__3_flash_preview_001835a0[0xe]);
        auVar73[0xf] = -(pcVar62[0x15] == s__3_flash_preview_001835a0[0xf]);
        auVar69[0] = -(*pcVar62 == DAT_00183360);
        auVar69[1] = -(pcVar62[1] == UNK_00183361);
        auVar69[2] = -(pcVar62[2] == UNK_00183362);
        auVar69[3] = -(pcVar62[3] == UNK_00183363);
        auVar69[4] = -(pcVar62[4] == UNK_00183364);
        auVar69[5] = -(pcVar62[5] == UNK_00183365);
        auVar69[6] = -(pcVar62[6] == UNK_00183366);
        auVar69[7] = -(pcVar62[7] == UNK_00183367);
        auVar69[8] = -(pcVar62[8] == UNK_00183368);
        auVar69[9] = -(pcVar62[9] == UNK_00183369);
        auVar69[10] = -(pcVar62[10] == UNK_0018336a);
        auVar69[0xb] = -(pcVar62[0xb] == UNK_0018336b);
        auVar69[0xc] = -(pcVar62[0xc] == UNK_0018336c);
        auVar69[0xd] = -(pcVar62[0xd] == UNK_0018336d);
        auVar69[0xe] = -(pcVar62[0xe] == UNK_0018336e);
        auVar69[0xf] = -(pcVar62[0xf] == UNK_0018336f);
        auVar69 = auVar69 & auVar73;
        if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar69[0xf] >> 7) << 0xf) != 0xffff) goto LAB_004fb60d;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar62 == (char *)0x0) goto LAB_004fb6f9;
        uVar64 = 0x6873616c662d332d;
        uVar66 = extraout_XMM0_Qa_00;
      }
      *(undefined8 *)(pcVar62 + 6) = uVar64;
      pcVar62[0] = 'g';
      pcVar62[1] = 'e';
      pcVar62[2] = 'm';
      pcVar62[3] = 'i';
      pcVar62[4] = 'n';
      pcVar62[5] = 'i';
      pcVar62[6] = '-';
      pcVar62[7] = '3';
      param_3 = 0xe;
      goto LAB_004fb642;
    }
    if (param_3 == 0x14) {
      uVar4 = *(undefined4 *)(pcVar62 + 0x10);
      auVar71[0] = -((char)uVar4 == s_view_00182720[0]);
      auVar71[1] = -((char)((uint)uVar4 >> 8) == s_view_00182720[1]);
      auVar71[2] = -((char)((uint)uVar4 >> 0x10) == s_view_00182720[2]);
      auVar71[3] = -((char)((uint)uVar4 >> 0x18) == s_view_00182720[3]);
      auVar71[4] = -(s_view_00182720[4] == '\0');
      auVar71[5] = -(s_view_00182720[5] == '\0');
      auVar71[6] = -(s_view_00182720[6] == '\0');
      auVar71[7] = -(s_view_00182720[7] == '\0');
      auVar71[8] = -(UNK_00182728 == '\0');
      auVar71[9] = -(UNK_00182729 == '\0');
      auVar71[10] = -(UNK_0018272a == '\0');
      auVar71[0xb] = -(UNK_0018272b == '\0');
      auVar71[0xc] = -(UNK_0018272c == '\0');
      auVar71[0xd] = -(UNK_0018272d == '\0');
      auVar71[0xe] = -(UNK_0018272e == '\0');
      auVar71[0xf] = -(UNK_0018272f == '\0');
      auVar67[0] = -(*pcVar62 == DAT_00183b40);
      auVar67[1] = -(pcVar62[1] == UNK_00183b41);
      auVar67[2] = -(pcVar62[2] == UNK_00183b42);
      auVar67[3] = -(pcVar62[3] == UNK_00183b43);
      auVar67[4] = -(pcVar62[4] == UNK_00183b44);
      auVar67[5] = -(pcVar62[5] == UNK_00183b45);
      auVar67[6] = -(pcVar62[6] == UNK_00183b46);
      auVar67[7] = -(pcVar62[7] == UNK_00183b47);
      auVar67[8] = -(pcVar62[8] == UNK_00183b48);
      auVar67[9] = -(pcVar62[9] == UNK_00183b49);
      auVar67[10] = -(pcVar62[10] == UNK_00183b4a);
      auVar67[0xb] = -(pcVar62[0xb] == UNK_00183b4b);
      auVar67[0xc] = -(pcVar62[0xc] == UNK_00183b4c);
      auVar67[0xd] = -(pcVar62[0xd] == UNK_00183b4d);
      auVar67[0xe] = -(pcVar62[0xe] == UNK_00183b4e);
      auVar67[0xf] = -(pcVar62[0xf] == UNK_00183b4f);
      auVar67 = auVar67 & auVar71;
      if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar67[0xf] >> 7) << 0xf) == 0xffff) {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar62 != (char *)0x0) {
          builtin_strncpy(pcVar62,"gemini-3-pro",0xc);
          param_3 = 0xc;
          uVar66 = extraout_XMM0_Qa;
          goto LAB_004fb642;
        }
        goto LAB_004fb6f9;
      }
    }
  }
LAB_004fb60d:
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar62 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  if (pcVar62 == (char *)0x0) {
LAB_004fb6f9:
    (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar66 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_01,param_3);
LAB_004fb642:
  *param_1 = param_3;
  param_1[1] = (ulonglong)pcVar62;
  param_1[2] = param_3;
  (*(code *)PTR_free_0079adc8)(uVar66,1);
  return;
}


