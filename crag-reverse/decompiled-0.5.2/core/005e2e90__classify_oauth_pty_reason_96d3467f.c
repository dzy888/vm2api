// 005e2e90 classify_oauth_pty_reason

/* WARNING: Switch with 1 destination removed at 0x005e3660 */
/* craggemini_core[66f3c71560d70857]::oauth::classify_oauth_pty_reason */

void __rustcall
craggemini_core[66f3c71560d70857]::oauth::classify_oauth_pty_reason
          (undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
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
  byte bVar76;
  byte bVar77;
  byte bVar78;
  char cVar79;
  ulonglong uVar80;
  ulonglong uVar81;
  longlong lVar82;
  undefined8 *puVar83;
  longlong lVar84;
  undefined1 uVar85;
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
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  undefined8 local_380;
  undefined *local_378;
  undefined8 local_370;
  undefined *local_368;
  undefined8 local_360;
  undefined2 local_358;
  undefined *local_350;
  undefined8 local_348;
  undefined *local_340;
  undefined8 local_338;
  undefined *local_330;
  undefined8 local_328;
  undefined2 local_320;
  undefined *local_318;
  undefined8 local_310;
  undefined *local_308;
  undefined8 local_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  undefined2 local_2e8;
  undefined *local_2e0;
  undefined8 local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined8 local_2b8;
  undefined2 local_2b0;
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined *local_298;
  undefined8 local_290;
  undefined *local_288;
  undefined8 local_280;
  undefined2 local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined2 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined2 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined2 local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined2 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined2 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  uVar85 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_005e2eb8;
  puVar83 = (undefined8 *)0x0;
  do {
    param_1 = puVar83;
    uVar85 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005e2eb8:
    lVar82 = 1;
    if ((bool)uVar85) goto LAB_005e3048;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar82 = (*(code *)PTR___rust_alloc_00799000)();
    puVar83 = (undefined8 *)0x1;
  } while (lVar82 == 0);
  (*(code *)PTR_memcpy_00799008)();
  bVar78 = UNK_0018483f;
  bVar77 = UNK_0018483e;
  bVar76 = UNK_0018483d;
  bVar75 = UNK_0018483c;
  bVar74 = UNK_0018483b;
  bVar73 = UNK_0018483a;
  bVar72 = UNK_00184839;
  bVar71 = UNK_00184838;
  bVar70 = UNK_00184837;
  bVar69 = UNK_00184836;
  bVar68 = UNK_00184835;
  bVar67 = UNK_00184834;
  bVar66 = UNK_00184833;
  bVar65 = UNK_00184832;
  bVar64 = UNK_00184831;
  bVar63 = DAT_00184830;
  cVar62 = UNK_00183f6f;
  cVar61 = UNK_00183f6e;
  cVar60 = UNK_00183f6d;
  cVar59 = UNK_00183f6c;
  cVar58 = UNK_00183f6b;
  cVar57 = UNK_00183f6a;
  cVar56 = UNK_00183f69;
  cVar55 = UNK_00183f68;
  cVar54 = UNK_00183f67;
  cVar53 = UNK_00183f66;
  cVar52 = UNK_00183f65;
  cVar51 = UNK_00183f64;
  cVar50 = UNK_00183f63;
  cVar49 = UNK_00183f62;
  cVar48 = UNK_00183f61;
  cVar79 = DAT_00183f60;
  bVar93 = UNK_0018303f;
  bVar92 = UNK_0018303e;
  bVar91 = UNK_0018303d;
  bVar90 = UNK_0018303c;
  bVar89 = UNK_0018303b;
  bVar88 = UNK_0018303a;
  bVar87 = UNK_00183039;
  bVar86 = UNK_00183038;
  bVar47 = UNK_00183037;
  bVar46 = UNK_00183036;
  bVar45 = UNK_00183035;
  bVar44 = UNK_00183034;
  bVar43 = UNK_00183033;
  bVar42 = UNK_00183032;
  bVar41 = UNK_00183031;
  bVar40 = DAT_00183030;
  if (param_3 < 8) {
    uVar80 = 0;
  }
  else {
    if (param_3 < 0x20) {
      uVar81 = 0;
LAB_005e2fc9:
      uVar5 = s__001846a0._0_8_;
      cVar54 = UNK_00184167;
      cVar53 = UNK_00184166;
      cVar52 = UNK_00184165;
      cVar51 = UNK_00184164;
      cVar50 = UNK_00184163;
      cVar49 = UNK_00184162;
      cVar48 = UNK_00184161;
      cVar79 = DAT_00184160;
      bVar47 = UNK_001840c7;
      bVar46 = UNK_001840c6;
      bVar45 = UNK_001840c5;
      bVar44 = UNK_001840c4;
      bVar43 = UNK_001840c3;
      bVar42 = UNK_001840c2;
      bVar41 = UNK_001840c1;
      bVar40 = DAT_001840c0;
      uVar80 = param_3 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)(lVar82 + uVar81);
        bVar86 = (char)uVar3 + cVar79;
        bVar87 = (char)(uVar3 >> 8) + cVar48;
        bVar88 = (char)(uVar3 >> 0x10) + cVar49;
        bVar89 = (char)(uVar3 >> 0x18) + cVar50;
        bVar90 = (char)(uVar3 >> 0x20) + cVar51;
        bVar91 = (char)(uVar3 >> 0x28) + cVar52;
        bVar92 = (char)(uVar3 >> 0x30) + cVar53;
        bVar93 = (char)(uVar3 >> 0x38) + cVar54;
        *(ulonglong *)(lVar82 + uVar81) =
             ~CONCAT17(-((byte)((bVar93 < bVar47) * bVar47 | (bVar93 >= bVar47) * bVar93) == bVar93)
                       ,CONCAT16(-((byte)((bVar92 < bVar46) * bVar46 | (bVar92 >= bVar46) * bVar92)
                                  == bVar92),
                                 CONCAT15(-((byte)((bVar91 < bVar45) * bVar45 |
                                                  (bVar91 >= bVar45) * bVar91) == bVar91),
                                          CONCAT14(-((byte)((bVar90 < bVar44) * bVar44 |
                                                           (bVar90 >= bVar44) * bVar90) == bVar90),
                                                   CONCAT13(-((byte)((bVar89 < bVar43) * bVar43 |
                                                                    (bVar89 >= bVar43) * bVar89) ==
                                                             bVar89),CONCAT12(-((byte)((bVar88 < 
                                                  bVar42) * bVar42 | (bVar88 >= bVar42) * bVar88) ==
                                                  bVar88),CONCAT11(-((byte)((bVar87 < bVar41) *
                                                                            bVar41 | (bVar87 >=
                                                                                     bVar41) * 
                                                  bVar87) == bVar87),
                                                  -((byte)((bVar86 < bVar40) * bVar40 |
                                                          (bVar86 >= bVar40) * bVar86) == bVar86))))
                                                  )))) & uVar5 | uVar3;
        uVar81 = uVar81 + 8;
        if (uVar80 == uVar81) goto LAB_005e303d;
      } while( true );
    }
    uVar80 = param_3 & 0x7fffffffffffffe0;
    uVar81 = 0;
    do {
      pbVar1 = (byte *)(lVar82 + uVar81);
      bVar9 = pbVar1[1];
      bVar10 = pbVar1[2];
      bVar11 = pbVar1[3];
      bVar12 = pbVar1[4];
      bVar13 = pbVar1[5];
      bVar14 = pbVar1[6];
      bVar15 = pbVar1[7];
      bVar16 = pbVar1[8];
      bVar17 = pbVar1[9];
      bVar18 = pbVar1[10];
      bVar19 = pbVar1[0xb];
      bVar20 = pbVar1[0xc];
      bVar21 = pbVar1[0xd];
      bVar22 = pbVar1[0xe];
      bVar23 = pbVar1[0xf];
      pbVar2 = (byte *)(lVar82 + 0x10 + uVar81);
      bVar24 = *pbVar2;
      bVar25 = pbVar2[1];
      bVar26 = pbVar2[2];
      bVar27 = pbVar2[3];
      bVar28 = pbVar2[4];
      bVar29 = pbVar2[5];
      bVar30 = pbVar2[6];
      bVar31 = pbVar2[7];
      bVar32 = pbVar2[8];
      bVar33 = pbVar2[9];
      bVar34 = pbVar2[10];
      bVar35 = pbVar2[0xb];
      bVar36 = pbVar2[0xc];
      bVar37 = pbVar2[0xd];
      bVar38 = pbVar2[0xe];
      bVar39 = pbVar2[0xf];
      bVar94 = *pbVar1 + cVar79;
      bVar95 = bVar9 + cVar48;
      bVar96 = bVar10 + cVar49;
      bVar97 = bVar11 + cVar50;
      bVar98 = bVar12 + cVar51;
      bVar99 = bVar13 + cVar52;
      bVar100 = bVar14 + cVar53;
      bVar101 = bVar15 + cVar54;
      bVar102 = bVar16 + cVar55;
      bVar103 = bVar17 + cVar56;
      bVar104 = bVar18 + cVar57;
      bVar105 = bVar19 + cVar58;
      bVar106 = bVar20 + cVar59;
      bVar107 = bVar21 + cVar60;
      bVar108 = bVar22 + cVar61;
      bVar109 = bVar23 + cVar62;
      bVar110 = bVar24 + cVar79;
      bVar111 = bVar25 + cVar48;
      bVar112 = bVar26 + cVar49;
      bVar113 = bVar27 + cVar50;
      bVar114 = bVar28 + cVar51;
      bVar115 = bVar29 + cVar52;
      bVar116 = bVar30 + cVar53;
      bVar117 = bVar31 + cVar54;
      bVar118 = bVar32 + cVar55;
      bVar119 = bVar33 + cVar56;
      bVar120 = bVar34 + cVar57;
      bVar121 = bVar35 + cVar58;
      bVar122 = bVar36 + cVar59;
      bVar123 = bVar37 + cVar60;
      bVar124 = bVar38 + cVar61;
      bVar125 = bVar39 + cVar62;
      pbVar2 = (byte *)(lVar82 + uVar81);
      *pbVar2 = -((byte)((bVar40 < bVar94) * bVar40 | (bVar40 >= bVar94) * bVar94) == bVar94) &
                bVar63 | *pbVar1;
      pbVar2[1] = -((byte)((bVar41 < bVar95) * bVar41 | (bVar41 >= bVar95) * bVar95) == bVar95) &
                  bVar64 | bVar9;
      pbVar2[2] = -((byte)((bVar42 < bVar96) * bVar42 | (bVar42 >= bVar96) * bVar96) == bVar96) &
                  bVar65 | bVar10;
      pbVar2[3] = -((byte)((bVar43 < bVar97) * bVar43 | (bVar43 >= bVar97) * bVar97) == bVar97) &
                  bVar66 | bVar11;
      pbVar2[4] = -((byte)((bVar44 < bVar98) * bVar44 | (bVar44 >= bVar98) * bVar98) == bVar98) &
                  bVar67 | bVar12;
      pbVar2[5] = -((byte)((bVar45 < bVar99) * bVar45 | (bVar45 >= bVar99) * bVar99) == bVar99) &
                  bVar68 | bVar13;
      pbVar2[6] = -((byte)((bVar46 < bVar100) * bVar46 | (bVar46 >= bVar100) * bVar100) == bVar100)
                  & bVar69 | bVar14;
      pbVar2[7] = -((byte)((bVar47 < bVar101) * bVar47 | (bVar47 >= bVar101) * bVar101) == bVar101)
                  & bVar70 | bVar15;
      pbVar2[8] = -((byte)((bVar86 < bVar102) * bVar86 | (bVar86 >= bVar102) * bVar102) == bVar102)
                  & bVar71 | bVar16;
      pbVar2[9] = -((byte)((bVar87 < bVar103) * bVar87 | (bVar87 >= bVar103) * bVar103) == bVar103)
                  & bVar72 | bVar17;
      pbVar2[10] = -((byte)((bVar88 < bVar104) * bVar88 | (bVar88 >= bVar104) * bVar104) == bVar104)
                   & bVar73 | bVar18;
      pbVar2[0xb] = -((byte)((bVar89 < bVar105) * bVar89 | (bVar89 >= bVar105) * bVar105) == bVar105
                     ) & bVar74 | bVar19;
      pbVar2[0xc] = -((byte)((bVar90 < bVar106) * bVar90 | (bVar90 >= bVar106) * bVar106) == bVar106
                     ) & bVar75 | bVar20;
      pbVar2[0xd] = -((byte)((bVar91 < bVar107) * bVar91 | (bVar91 >= bVar107) * bVar107) == bVar107
                     ) & bVar76 | bVar21;
      pbVar2[0xe] = -((byte)((bVar92 < bVar108) * bVar92 | (bVar92 >= bVar108) * bVar108) == bVar108
                     ) & bVar77 | bVar22;
      pbVar2[0xf] = -((byte)((bVar93 < bVar109) * bVar93 | (bVar93 >= bVar109) * bVar109) == bVar109
                     ) & bVar78 | bVar23;
      pbVar1 = (byte *)(lVar82 + 0x10 + uVar81);
      *pbVar1 = -((byte)((bVar40 < bVar110) * bVar40 | (bVar40 >= bVar110) * bVar110) == bVar110) &
                bVar63 | bVar24;
      pbVar1[1] = -((byte)((bVar41 < bVar111) * bVar41 | (bVar41 >= bVar111) * bVar111) == bVar111)
                  & bVar64 | bVar25;
      pbVar1[2] = -((byte)((bVar42 < bVar112) * bVar42 | (bVar42 >= bVar112) * bVar112) == bVar112)
                  & bVar65 | bVar26;
      pbVar1[3] = -((byte)((bVar43 < bVar113) * bVar43 | (bVar43 >= bVar113) * bVar113) == bVar113)
                  & bVar66 | bVar27;
      pbVar1[4] = -((byte)((bVar44 < bVar114) * bVar44 | (bVar44 >= bVar114) * bVar114) == bVar114)
                  & bVar67 | bVar28;
      pbVar1[5] = -((byte)((bVar45 < bVar115) * bVar45 | (bVar45 >= bVar115) * bVar115) == bVar115)
                  & bVar68 | bVar29;
      pbVar1[6] = -((byte)((bVar46 < bVar116) * bVar46 | (bVar46 >= bVar116) * bVar116) == bVar116)
                  & bVar69 | bVar30;
      pbVar1[7] = -((byte)((bVar47 < bVar117) * bVar47 | (bVar47 >= bVar117) * bVar117) == bVar117)
                  & bVar70 | bVar31;
      pbVar1[8] = -((byte)((bVar86 < bVar118) * bVar86 | (bVar86 >= bVar118) * bVar118) == bVar118)
                  & bVar71 | bVar32;
      pbVar1[9] = -((byte)((bVar87 < bVar119) * bVar87 | (bVar87 >= bVar119) * bVar119) == bVar119)
                  & bVar72 | bVar33;
      pbVar1[10] = -((byte)((bVar88 < bVar120) * bVar88 | (bVar88 >= bVar120) * bVar120) == bVar120)
                   & bVar73 | bVar34;
      pbVar1[0xb] = -((byte)((bVar89 < bVar121) * bVar89 | (bVar89 >= bVar121) * bVar121) == bVar121
                     ) & bVar74 | bVar35;
      pbVar1[0xc] = -((byte)((bVar90 < bVar122) * bVar90 | (bVar90 >= bVar122) * bVar122) == bVar122
                     ) & bVar75 | bVar36;
      pbVar1[0xd] = -((byte)((bVar91 < bVar123) * bVar91 | (bVar91 >= bVar123) * bVar123) == bVar123
                     ) & bVar76 | bVar37;
      pbVar1[0xe] = -((byte)((bVar92 < bVar124) * bVar92 | (bVar92 >= bVar124) * bVar124) == bVar124
                     ) & bVar77 | bVar38;
      pbVar1[0xf] = -((byte)((bVar93 < bVar125) * bVar93 | (bVar93 >= bVar125) * bVar125) == bVar125
                     ) & bVar78 | bVar39;
      uVar81 = uVar81 + 0x20;
    } while (uVar80 != uVar81);
    if (param_3 == uVar80) goto LAB_005e3048;
    uVar81 = uVar80;
    if ((param_3 & 0x18) != 0) goto LAB_005e2fc9;
  }
  do {
    *(byte *)(lVar82 + uVar80) =
         ((byte)(*(byte *)(lVar82 + uVar80) + 0xbf) < 0x1a) << 5 | *(byte *)(lVar82 + uVar80);
    uVar80 = uVar80 + 1;
LAB_005e303d:
  } while (param_3 != uVar80);
LAB_005e3048:
  lVar84 = 1;
  puVar83 = &local_380;
  local_380 = 0xd;
  local_378 = &DAT_0019ea98;
  local_370 = 0xd;
  local_368 = &DAT_0019ea81;
  local_360 = 0x17;
  local_358 = 0x193;
  local_350 = &DAT_0019ea98;
  local_348 = 0xd;
  local_340 = &DAT_0019eaa5;
  local_338 = 0x15;
  local_330 = &DAT_0019ea81;
  local_328 = 0x17;
  local_320 = 0x199;
  local_318 = &DAT_0019eaa5;
  local_310 = 0x15;
  local_308 = &DAT_0019eaba;
  local_300 = 0xe;
  local_2f8 = &DAT_0019ea81;
  local_2f0 = 0x17;
  local_2e8 = 0x191;
  local_2e0 = &DAT_0019eaba;
  local_2d8 = 0xe;
  local_2d0 = &DAT_0019eac8;
  local_2c8 = 0xe;
  local_2c0 = &DAT_0019ea81;
  local_2b8 = 0x17;
  local_2b0 = 0x191;
  local_2a8 = &DAT_0019eac8;
  local_2a0 = 0xe;
  local_298 = &DAT_0019ead6;
  local_290 = 0x13;
  local_288 = &DAT_0019ea81;
  local_280 = 0x17;
  local_278 = 0x193;
  local_270 = &DAT_0019ead6;
  local_268 = 0x13;
  local_260 = &DAT_0019eae9;
  local_258 = 0x1a;
  local_250 = &DAT_0019ea81;
  local_248 = 0x17;
  local_240 = 0x199;
  local_238 = &DAT_0019eb03;
  local_230 = 0x1a;
  local_228 = &DAT_0019eb1d;
  local_220 = 0x12;
  local_218 = &DAT_0019ea81;
  local_210 = 0x17;
  local_208 = 0x199;
  local_200 = &DAT_0019eb2f;
  local_1f8 = 0xf;
  local_1f0 = &DAT_0019eb3e;
  local_1e8 = 0x15;
  local_1e0 = &DAT_0019ea81;
  local_1d8 = 0x17;
  local_1d0 = 0x191;
  local_1c8 = &DAT_0019eb53;
  local_1c0 = 0x15;
  local_1b8 = &DAT_0019eb68;
  local_1b0 = 0x12;
  local_1a8 = &DAT_0019eb7a;
  local_1a0 = 0x19;
  local_198 = 0x193;
  local_190 = &DAT_0019eb93;
  local_188 = 0x12;
  local_180 = &DAT_0019eba5;
  local_178 = 0x13;
  local_170 = &DAT_0019ebb8;
  local_168 = 0x24;
  local_160 = 0x193;
  local_158 = &DAT_0019ebdc;
  local_150 = 0x13;
  local_148 = &DAT_0019ebef;
  local_140 = 0x12;
  local_138 = &DAT_0019ec01;
  local_130 = 0x1b;
  local_128 = 0x193;
  local_120 = &DAT_0019ec1c;
  local_118 = 0x12;
  local_110 = &DAT_0019ec2e;
  local_108 = 0xc;
  local_100 = &DAT_0019ec3a;
  local_f8 = 0x11;
  local_f0 = 0x1f7;
  local_e8 = &DAT_0019ec4b;
  local_e0 = 0x14;
  local_d8 = &DAT_0019ec5f;
  local_d0 = 0x12;
  local_c8 = &DAT_0019ec3a;
  local_c0 = 0x11;
  local_b8 = 0x1f7;
  local_b0 = &DAT_0019ec71;
  local_a8 = 0x12;
  local_a0 = &DAT_0019ec83;
  local_98 = 0xc;
  local_90 = &DAT_0019ec3a;
  local_88 = 0x11;
  local_80 = 0x1f7;
  local_78 = &DAT_0019ec8f;
  local_70 = 0x11;
  local_68 = &DAT_0018e084;
  local_60 = 4;
  local_58 = &DAT_0019ec3a;
  local_50 = 0x11;
  local_48 = 0x1f7;
  local_40 = &DAT_0019eca0;
  local_38 = 0x14;
  while ((lVar84 != 0x11 && (puVar83[-6] != 0))) {
    uVar5 = puVar83[-4];
    uVar6 = puVar83[-3];
    uVar4 = *(undefined2 *)(puVar83 + -2);
    uVar7 = puVar83[-1];
    uVar8 = *puVar83;
    cVar79 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       (puVar83[-6],puVar83[-5],lVar82,param_3);
    lVar84 = lVar84 + 1;
    puVar83 = puVar83 + 7;
    if (cVar79 != '\0') {
      *param_1 = uVar5;
      param_1[1] = uVar6;
      *(undefined2 *)(param_1 + 2) = uVar4;
      param_1[3] = uVar7;
      param_1[4] = uVar8;
joined_r0x005e3645:
      if (param_3 == 0) {
        s__001846a0[0] = s__001846a0[0];
        s__001846a0[1] = s__001846a0[1];
        s__001846a0[2] = s__001846a0[2];
        s__001846a0[3] = s__001846a0[3];
        s__001846a0[4] = s__001846a0[4];
        s__001846a0[5] = s__001846a0[5];
        s__001846a0[6] = s__001846a0[6];
        s__001846a0[7] = s__001846a0[7];
        return;
      }
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  *param_1 = 0;
  goto joined_r0x005e3645;
}


