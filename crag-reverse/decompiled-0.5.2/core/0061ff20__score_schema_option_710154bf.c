// 0061ff20 score_schema_option

/* craggemini_core[66f3c71560d70857]::schema::score_schema_option */

ulonglong __rustcall craggemini_core[66f3c71560d70857]::schema::score_schema_option(char *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ushort uVar3;
  ulonglong uVar4;
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
  int iVar76;
  uint *puVar77;
  longlong lVar78;
  byte bVar79;
  longlong lVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  ulonglong uVar83;
  ulonglong uVar84;
  ulonglong *puVar85;
  ulonglong *puVar86;
  longlong lVar87;
  longlong lVar88;
  longlong lVar89;
  bool bVar90;
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
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  ulonglong local_68;
  longlong local_60;
  uint *local_58;
  longlong local_38;
  
  if ((*param_1 != '\x05') || (lVar80 = *(longlong *)(param_1 + 8), lVar80 == 0)) {
    return 0;
  }
  local_38 = *(longlong *)(param_1 + 0x10);
  lVar88 = lVar80;
  local_60 = local_38;
  while( true ) {
    uVar3 = *(ushort *)(lVar88 + 0x272);
    uVar82 = (ulonglong)((uint)uVar3 * 8);
    lVar89 = uVar82 * 3;
    uVar84 = 0xffffffffffffffff;
    lVar78 = lVar88 + 0x168;
    puVar86 = (ulonglong *)(lVar88 + -8);
    do {
      puVar85 = puVar86;
      if (lVar89 == 0) {
        uVar84 = (ulonglong)uVar3;
        goto LAB_0061fff5;
      }
      uVar81 = *(ulonglong *)(lVar78 + 0x10);
      lVar87 = uVar81 - 4;
      if (3 < uVar81) {
        uVar81 = 4;
      }
      iVar76 = (*(code *)PTR_memcmp_00799528)(uVar82,uVar81);
      lVar87 = -lVar87;
      if (iVar76 != 0) {
        lVar87 = (longlong)iVar76;
      }
      bVar79 = (0 < lVar87) - (lVar87 < 0);
      uVar82 = (ulonglong)bVar79;
      puVar86 = puVar85 + 4;
      uVar84 = uVar84 + 1;
      lVar89 = lVar89 + -0x18;
      lVar78 = lVar78 + 0x18;
    } while (bVar79 == 1);
    if (bVar79 == 0) break;
LAB_0061fff5:
    bVar90 = local_60 == 0;
    local_60 = local_60 + -1;
    if (bVar90) goto LAB_0062003a;
    lVar88 = *(longlong *)(lVar88 + 0x278 + uVar84 * 8);
  }
  if ((char)puVar85[1] == '\x03') {
    local_68 = *puVar86;
    if (-1 < (longlong)local_68) {
      if (local_68 == 0) {
        local_58 = (uint *)0x1;
        local_68 = 0;
        goto LAB_00620042;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar77 = (uint *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar77 == (uint *)0x0) goto LAB_0062002e;
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
      bVar98 = UNK_0018303f;
      bVar97 = UNK_0018303e;
      bVar96 = UNK_0018303d;
      bVar95 = UNK_0018303c;
      bVar94 = UNK_0018303b;
      bVar93 = UNK_0018303a;
      bVar92 = UNK_00183039;
      bVar91 = UNK_00183038;
      bVar42 = UNK_00183037;
      bVar41 = UNK_00183036;
      bVar40 = UNK_00183035;
      bVar39 = UNK_00183034;
      bVar38 = UNK_00183033;
      bVar37 = UNK_00183032;
      bVar36 = UNK_00183031;
      bVar79 = DAT_00183030;
      if (local_68 < 8) {
        uVar84 = 0;
        goto LAB_006204f2;
      }
      if (local_68 < 0x20) {
        uVar82 = 0;
        goto LAB_0062036d;
      }
      uVar84 = local_68 & 0x7fffffffffffffe0;
      uVar82 = 0;
      do {
        pbVar1 = (byte *)((longlong)puVar77 + uVar82);
        bVar5 = pbVar1[1];
        bVar6 = pbVar1[2];
        bVar7 = pbVar1[3];
        bVar8 = pbVar1[4];
        bVar9 = pbVar1[5];
        bVar10 = pbVar1[6];
        bVar11 = pbVar1[7];
        bVar12 = pbVar1[8];
        bVar13 = pbVar1[9];
        bVar14 = pbVar1[10];
        bVar15 = pbVar1[0xb];
        bVar16 = pbVar1[0xc];
        bVar17 = pbVar1[0xd];
        bVar18 = pbVar1[0xe];
        bVar19 = pbVar1[0xf];
        pbVar2 = (byte *)((longlong)puVar77 + uVar82 + 0x10);
        bVar20 = *pbVar2;
        bVar21 = pbVar2[1];
        bVar22 = pbVar2[2];
        bVar23 = pbVar2[3];
        bVar24 = pbVar2[4];
        bVar25 = pbVar2[5];
        bVar26 = pbVar2[6];
        bVar27 = pbVar2[7];
        bVar28 = pbVar2[8];
        bVar29 = pbVar2[9];
        bVar30 = pbVar2[10];
        bVar31 = pbVar2[0xb];
        bVar32 = pbVar2[0xc];
        bVar33 = pbVar2[0xd];
        bVar34 = pbVar2[0xe];
        bVar35 = pbVar2[0xf];
        bVar99 = *pbVar1 + cVar43;
        bVar100 = bVar5 + cVar44;
        bVar101 = bVar6 + cVar45;
        bVar102 = bVar7 + cVar46;
        bVar103 = bVar8 + cVar47;
        bVar104 = bVar9 + cVar48;
        bVar105 = bVar10 + cVar49;
        bVar106 = bVar11 + cVar50;
        bVar107 = bVar12 + cVar51;
        bVar108 = bVar13 + cVar52;
        bVar109 = bVar14 + cVar53;
        bVar110 = bVar15 + cVar54;
        bVar111 = bVar16 + cVar55;
        bVar112 = bVar17 + cVar56;
        bVar113 = bVar18 + cVar57;
        bVar114 = bVar19 + cVar58;
        bVar115 = bVar20 + cVar43;
        bVar116 = bVar21 + cVar44;
        bVar117 = bVar22 + cVar45;
        bVar118 = bVar23 + cVar46;
        bVar119 = bVar24 + cVar47;
        bVar120 = bVar25 + cVar48;
        bVar121 = bVar26 + cVar49;
        bVar122 = bVar27 + cVar50;
        bVar123 = bVar28 + cVar51;
        bVar124 = bVar29 + cVar52;
        bVar125 = bVar30 + cVar53;
        bVar126 = bVar31 + cVar54;
        bVar127 = bVar32 + cVar55;
        bVar128 = bVar33 + cVar56;
        bVar129 = bVar34 + cVar57;
        bVar130 = bVar35 + cVar58;
        pbVar2 = (byte *)((longlong)puVar77 + uVar82);
        *pbVar2 = -((byte)((bVar79 < bVar99) * bVar79 | (bVar79 >= bVar99) * bVar99) == bVar99) &
                  bVar60 | *pbVar1;
        pbVar2[1] = -((byte)((bVar36 < bVar100) * bVar36 | (bVar36 >= bVar100) * bVar100) == bVar100
                     ) & bVar61 | bVar5;
        pbVar2[2] = -((byte)((bVar37 < bVar101) * bVar37 | (bVar37 >= bVar101) * bVar101) == bVar101
                     ) & bVar62 | bVar6;
        pbVar2[3] = -((byte)((bVar38 < bVar102) * bVar38 | (bVar38 >= bVar102) * bVar102) == bVar102
                     ) & bVar63 | bVar7;
        pbVar2[4] = -((byte)((bVar39 < bVar103) * bVar39 | (bVar39 >= bVar103) * bVar103) == bVar103
                     ) & bVar64 | bVar8;
        pbVar2[5] = -((byte)((bVar40 < bVar104) * bVar40 | (bVar40 >= bVar104) * bVar104) == bVar104
                     ) & bVar65 | bVar9;
        pbVar2[6] = -((byte)((bVar41 < bVar105) * bVar41 | (bVar41 >= bVar105) * bVar105) == bVar105
                     ) & bVar66 | bVar10;
        pbVar2[7] = -((byte)((bVar42 < bVar106) * bVar42 | (bVar42 >= bVar106) * bVar106) == bVar106
                     ) & bVar67 | bVar11;
        pbVar2[8] = -((byte)((bVar91 < bVar107) * bVar91 | (bVar91 >= bVar107) * bVar107) == bVar107
                     ) & bVar68 | bVar12;
        pbVar2[9] = -((byte)((bVar92 < bVar108) * bVar92 | (bVar92 >= bVar108) * bVar108) == bVar108
                     ) & bVar69 | bVar13;
        pbVar2[10] = -((byte)((bVar93 < bVar109) * bVar93 | (bVar93 >= bVar109) * bVar109) ==
                      bVar109) & bVar70 | bVar14;
        pbVar2[0xb] = -((byte)((bVar94 < bVar110) * bVar94 | (bVar94 >= bVar110) * bVar110) ==
                       bVar110) & bVar71 | bVar15;
        pbVar2[0xc] = -((byte)((bVar95 < bVar111) * bVar95 | (bVar95 >= bVar111) * bVar111) ==
                       bVar111) & bVar72 | bVar16;
        pbVar2[0xd] = -((byte)((bVar96 < bVar112) * bVar96 | (bVar96 >= bVar112) * bVar112) ==
                       bVar112) & bVar73 | bVar17;
        pbVar2[0xe] = -((byte)((bVar97 < bVar113) * bVar97 | (bVar97 >= bVar113) * bVar113) ==
                       bVar113) & bVar74 | bVar18;
        pbVar2[0xf] = -((byte)((bVar98 < bVar114) * bVar98 | (bVar98 >= bVar114) * bVar114) ==
                       bVar114) & bVar75 | bVar19;
        pbVar1 = (byte *)((longlong)puVar77 + uVar82 + 0x10);
        *pbVar1 = -((byte)((bVar79 < bVar115) * bVar79 | (bVar79 >= bVar115) * bVar115) == bVar115)
                  & bVar60 | bVar20;
        pbVar1[1] = -((byte)((bVar36 < bVar116) * bVar36 | (bVar36 >= bVar116) * bVar116) == bVar116
                     ) & bVar61 | bVar21;
        pbVar1[2] = -((byte)((bVar37 < bVar117) * bVar37 | (bVar37 >= bVar117) * bVar117) == bVar117
                     ) & bVar62 | bVar22;
        pbVar1[3] = -((byte)((bVar38 < bVar118) * bVar38 | (bVar38 >= bVar118) * bVar118) == bVar118
                     ) & bVar63 | bVar23;
        pbVar1[4] = -((byte)((bVar39 < bVar119) * bVar39 | (bVar39 >= bVar119) * bVar119) == bVar119
                     ) & bVar64 | bVar24;
        pbVar1[5] = -((byte)((bVar40 < bVar120) * bVar40 | (bVar40 >= bVar120) * bVar120) == bVar120
                     ) & bVar65 | bVar25;
        pbVar1[6] = -((byte)((bVar41 < bVar121) * bVar41 | (bVar41 >= bVar121) * bVar121) == bVar121
                     ) & bVar66 | bVar26;
        pbVar1[7] = -((byte)((bVar42 < bVar122) * bVar42 | (bVar42 >= bVar122) * bVar122) == bVar122
                     ) & bVar67 | bVar27;
        pbVar1[8] = -((byte)((bVar91 < bVar123) * bVar91 | (bVar91 >= bVar123) * bVar123) == bVar123
                     ) & bVar68 | bVar28;
        pbVar1[9] = -((byte)((bVar92 < bVar124) * bVar92 | (bVar92 >= bVar124) * bVar124) == bVar124
                     ) & bVar69 | bVar29;
        pbVar1[10] = -((byte)((bVar93 < bVar125) * bVar93 | (bVar93 >= bVar125) * bVar125) ==
                      bVar125) & bVar70 | bVar30;
        pbVar1[0xb] = -((byte)((bVar94 < bVar126) * bVar94 | (bVar94 >= bVar126) * bVar126) ==
                       bVar126) & bVar71 | bVar31;
        pbVar1[0xc] = -((byte)((bVar95 < bVar127) * bVar95 | (bVar95 >= bVar127) * bVar127) ==
                       bVar127) & bVar72 | bVar32;
        pbVar1[0xd] = -((byte)((bVar96 < bVar128) * bVar96 | (bVar96 >= bVar128) * bVar128) ==
                       bVar128) & bVar73 | bVar33;
        pbVar1[0xe] = -((byte)((bVar97 < bVar129) * bVar97 | (bVar97 >= bVar129) * bVar129) ==
                       bVar129) & bVar74 | bVar34;
        pbVar1[0xf] = -((byte)((bVar98 < bVar130) * bVar98 | (bVar98 >= bVar130) * bVar130) ==
                       bVar130) & bVar75 | bVar35;
        uVar82 = uVar82 + 0x20;
      } while (uVar84 != uVar82);
      if (local_68 != uVar84) {
        uVar82 = uVar84;
        if ((local_68 & 0x18) == 0) goto LAB_006204f2;
LAB_0062036d:
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
        bVar79 = DAT_001840c0;
        uVar84 = local_68 & 0x7ffffffffffffff8;
        do {
          uVar81 = *(ulonglong *)((longlong)puVar77 + uVar82);
          bVar91 = (char)uVar81 + cVar43;
          bVar92 = (char)(uVar81 >> 8) + cVar44;
          bVar93 = (char)(uVar81 >> 0x10) + cVar45;
          bVar94 = (char)(uVar81 >> 0x18) + cVar46;
          bVar95 = (char)(uVar81 >> 0x20) + cVar47;
          bVar96 = (char)(uVar81 >> 0x28) + cVar48;
          bVar97 = (char)(uVar81 >> 0x30) + cVar49;
          bVar98 = (char)(uVar81 >> 0x38) + cVar50;
          *(ulonglong *)((longlong)puVar77 + uVar82) =
               ~CONCAT17(-((byte)((bVar98 < bVar42) * bVar42 | (bVar98 >= bVar42) * bVar98) ==
                          bVar98),CONCAT16(-((byte)((bVar97 < bVar41) * bVar41 |
                                                   (bVar97 >= bVar41) * bVar97) == bVar97),
                                           CONCAT15(-((byte)((bVar96 < bVar40) * bVar40 |
                                                            (bVar96 >= bVar40) * bVar96) == bVar96),
                                                    CONCAT14(-((byte)((bVar95 < bVar39) * bVar39 |
                                                                     (bVar95 >= bVar39) * bVar95) ==
                                                              bVar95),CONCAT13(-((byte)((bVar94 < 
                                                  bVar38) * bVar38 | (bVar94 >= bVar38) * bVar94) ==
                                                  bVar94),CONCAT12(-((byte)((bVar93 < bVar37) *
                                                                            bVar37 | (bVar93 >=
                                                                                     bVar37) * 
                                                  bVar93) == bVar93),
                                                  CONCAT11(-((byte)((bVar92 < bVar36) * bVar36 |
                                                                   (bVar92 >= bVar36) * bVar92) ==
                                                            bVar92),-((byte)((bVar91 < bVar79) *
                                                                             bVar79 | (bVar91 >=
                                                                                      bVar79) * 
                                                  bVar91) == bVar91)))))))) & uVar59 | uVar81;
          uVar82 = uVar82 + 8;
        } while (uVar84 != uVar82);
        for (; local_68 != uVar84; uVar84 = uVar84 + 1) {
LAB_006204f2:
          *(byte *)((longlong)puVar77 + uVar84) =
               ((byte)(*(byte *)((longlong)puVar77 + uVar84) + 0xbf) < 0x1a) << 5 |
               *(byte *)((longlong)puVar77 + uVar84);
        }
      }
      local_58 = puVar77;
      if (local_68 == 6) {
        if ((short)puVar77[1] == 0x7463 && (*puVar77 ^ 0x656a626f) == 0) {
          uVar84 = CONCAT71((uint7)(uint3)((*puVar77 ^ 0x656a626f) >> 8),3);
          lVar80 = 0;
          goto LAB_00620139;
        }
        local_68 = 6;
      }
      goto LAB_00620042;
    }
LAB_0062002e:
    (*(code *)PTR_handle_error_00798ff0)();
  }
LAB_0062003a:
  local_68 = 0xffffffffffffffff;
LAB_00620042:
  lVar88 = lVar80;
  local_60 = local_38;
  do {
    uVar3 = *(ushort *)(lVar88 + 0x272);
    uVar82 = (ulonglong)((uint)uVar3 * 8);
    lVar89 = uVar82 * 3;
    uVar84 = 0xffffffffffffffff;
    lVar78 = lVar88 + 0x168;
    do {
      if (lVar89 == 0) {
        uVar84 = (ulonglong)uVar3;
        goto LAB_006200f5;
      }
      uVar81 = *(ulonglong *)(lVar78 + 0x10);
      lVar87 = uVar81 - 10;
      if (9 < uVar81) {
        uVar81 = 10;
      }
      iVar76 = (*(code *)PTR_memcmp_00799528)(uVar82,uVar81);
      lVar87 = -lVar87;
      if (iVar76 != 0) {
        lVar87 = (longlong)iVar76;
      }
      bVar79 = (0 < lVar87) - (lVar87 < 0);
      uVar82 = (ulonglong)bVar79;
      uVar84 = uVar84 + 1;
      lVar89 = lVar89 + -0x18;
      lVar78 = lVar78 + 0x18;
    } while (bVar79 == 1);
    if (bVar79 == 0) {
      uVar84 = 3;
      goto LAB_0062011d;
    }
LAB_006200f5:
    bVar90 = local_60 == 0;
    local_60 = local_60 + -1;
    if (bVar90) goto LAB_006201ca;
    lVar88 = *(longlong *)(lVar88 + 0x278 + uVar84 * 8);
  } while( true );
LAB_006203e9:
  if ((local_68 == 0xffffffffffffffff) ||
     ((uVar84 = 0xffffffffffffff01, local_68 == 4 && (*local_58 == 0x6c6c756e)))) {
    while( true ) {
      uVar84 = (ulonglong)*(ushort *)(lVar80 + 0x272);
      uVar82 = (ulonglong)((uint)*(ushort *)(lVar80 + 0x272) * 8);
      lVar88 = uVar82 * 3;
      uVar81 = 0xffffffffffffffff;
      lVar89 = lVar80 + 0x168;
      do {
        if (lVar88 == 0) goto LAB_00620422;
        uVar4 = *(ulonglong *)(lVar89 + 0x10);
        uVar83 = 4;
        if (uVar4 < 4) {
          uVar83 = uVar4;
        }
        iVar76 = (*(code *)PTR_memcmp_00799528)(uVar82,uVar83);
        lVar78 = -(uVar4 - 4);
        if (iVar76 != 0) {
          lVar78 = (longlong)iVar76;
        }
        bVar79 = (0 < lVar78) - (lVar78 < 0);
        uVar82 = (ulonglong)bVar79;
        uVar81 = uVar81 + 1;
        lVar88 = lVar88 + -0x18;
        lVar89 = lVar89 + 0x18;
      } while (bVar79 == 1);
      uVar84 = uVar81;
      if (bVar79 == 0) break;
LAB_00620422:
      bVar90 = local_38 == 0;
      local_38 = local_38 + -1;
      if (bVar90) {
        if (local_68 - 1 < 0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar82,1);
          return 0;
        }
        return 0;
      }
      lVar80 = *(longlong *)(lVar80 + 0x278 + uVar84 * 8);
    }
    uVar84 = 1;
LAB_0062011d:
    lVar80 = 0;
    if (local_68 == 0xffffffffffffffff) {
      return uVar84;
    }
  }
  goto LAB_00620130;
LAB_006201ca:
  if ((local_68 != 5) || ((char)local_58[1] != 'y' || (*local_58 ^ 0x61727261) != 0)) {
    lVar88 = lVar80;
    local_60 = local_38;
    do {
      uVar3 = *(ushort *)(lVar88 + 0x272);
      uVar82 = (ulonglong)((uint)uVar3 * 8);
      lVar89 = uVar82 * 3;
      uVar84 = 0xffffffffffffffff;
      lVar78 = lVar88 + 0x168;
      do {
        if (lVar89 == 0) {
          uVar84 = (ulonglong)uVar3;
          goto LAB_006202ac;
        }
        uVar81 = *(ulonglong *)(lVar78 + 0x10);
        lVar87 = uVar81 - 5;
        if (4 < uVar81) {
          uVar81 = 5;
        }
        iVar76 = (*(code *)PTR_memcmp_00799528)(uVar82,uVar81);
        lVar87 = -lVar87;
        if (iVar76 != 0) {
          lVar87 = (longlong)iVar76;
        }
        bVar79 = (0 < lVar87) - (lVar87 < 0);
        uVar82 = (ulonglong)bVar79;
        uVar84 = uVar84 + 1;
        lVar89 = lVar89 + -0x18;
        lVar78 = lVar78 + 0x18;
      } while (bVar79 == 1);
      if (bVar79 == 0) {
        uVar84 = 2;
        goto LAB_0062011d;
      }
LAB_006202ac:
      bVar90 = local_60 == 0;
      local_60 = local_60 + -1;
      if (bVar90) goto LAB_006203e9;
      lVar88 = *(longlong *)(lVar88 + 0x278 + uVar84 * 8);
    } while( true );
  }
  uVar84 = CONCAT71((uint7)(uint3)((*local_58 ^ 0x61727261) >> 8),2);
  lVar80 = 0;
LAB_00620130:
  if (local_68 == 0) {
    return uVar84;
  }
LAB_00620139:
  (*(code *)PTR___rust_dealloc_00798fc8)(lVar80,1);
  return uVar84 & 0xffffffff;
}


