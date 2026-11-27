// 00655540 parse_proxy_url

/* WARNING: Switch with 1 destination removed at 0x00655a58 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::binding::parse_proxy_url */

void __rustcall
craggemini_core[66f3c71560d70857]::binding::parse_proxy_url
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  bool bVar3;
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
  longlong lVar35;
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
  code *pcVar59;
  int *piVar60;
  ulonglong uVar61;
  undefined *puVar62;
  byte bVar63;
  ulonglong uVar64;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  ulonglong uVar65;
  code *pcVar66;
  uint uVar67;
  uint uVar68;
  undefined2 uVar69;
  longlong lVar70;
  code *pcVar71;
  int iVar72;
  byte *pbVar73;
  longlong lVar74;
  ulonglong uVar75;
  undefined8 uVar76;
  undefined8 uVar77;
  longlong extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar78 [16];
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
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined1 auVar119 [16];
  byte *local_158;
  longlong local_148;
  ulonglong local_138;
  undefined2 local_12a;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  char local_110;
  short sStack_10f;
  ushort uStack_10d;
  ushort uStack_10b;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  code *local_f8;
  undefined2 *local_f0;
  undefined *puStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  longlong local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_90;
  byte *local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  byte *pbStack_68;
  longlong local_60;
  char *local_58;
  code *local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  
  auVar119 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  local_128 = auVar119._8_8_;
  pbVar73 = auVar119._0_8_;
  if (0xffffffffffffefff < local_128 - 0x1001U) {
    if (local_128 == 5) goto LAB_006556cb;
    if ((((local_128 != 6) || ((byte)(((byte)(*pbVar73 + 0xbf) < 0x1a) << 5 | *pbVar73) != 100)) ||
        ((byte)(((byte)(pbVar73[1] + 0xbf) < 0x1a) << 5 | pbVar73[1]) != 0x69)) ||
       ((((byte)(((byte)(pbVar73[2] + 0xbf) < 0x1a) << 5 | pbVar73[2]) != 0x72 ||
         ((byte)(((byte)(pbVar73[3] + 0xbf) < 0x1a) << 5 | pbVar73[3]) != 0x65)) ||
        (((byte)(((byte)(pbVar73[4] + 0xbf) < 0x1a) << 5 | pbVar73[4]) != 99 ||
         ((byte)(((byte)(pbVar73[5] + 0xbf) < 0x1a) << 5 | pbVar73[5]) != 0x74)))))) {
      (*(code *)PTR_new_00799a18)(&DAT_001a3955,local_128,3);
      uVar76 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
               ::next_match(&local_a8,&local_110);
      if ((int)local_a8 == 1) {
        lVar74 = local_128 - local_98;
        local_158 = pbVar73 + local_98;
        uVar77 = extraout_RDX;
        if (-1 < (longlong)local_a0) goto LAB_006557ae;
        do {
          pbVar73 = (byte *)0x0;
          while( true ) {
            (*(code *)PTR_handle_error_00798ff0)();
            auVar119._8_8_ = uVar77;
            auVar119._0_8_ = local_158;
LAB_006556cb:
            local_128 = auVar119._8_8_;
            lVar70 = auVar119._0_8_;
            if ((((byte)(((byte)(*pbVar73 + 0xbf) < 0x1a) << 5 | *pbVar73) == 0x6c) &&
                ((byte)(((byte)(pbVar73[1] + 0xbf) < 0x1a) << 5 | pbVar73[1]) == 0x6f)) &&
               (((byte)(((byte)(pbVar73[2] + 0xbf) < 0x1a) << 5 | pbVar73[2]) == 99 &&
                (((byte)(((byte)(pbVar73[3] + 0xbf) < 0x1a) << 5 | pbVar73[3]) == 0x61 &&
                 ((byte)(((byte)(pbVar73[4] + 0xbf) < 0x1a) << 5 | pbVar73[4]) == 0x6c))))))
            goto LAB_00655573;
            (*(code *)PTR_new_00799a18)(&DAT_001a3955,5,3);
            uVar76 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                     ::next_match(&local_a8,&local_110);
            auVar119._8_8_ = local_128;
            auVar119._0_8_ = pbVar73;
            if ((int)local_a8 != 1) goto LAB_0065580e;
            lVar74 = 5 - local_98;
            local_158 = (byte *)(lVar70 + local_98);
            uVar77 = extraout_RDX_00;
            if ((longlong)local_a0 < 0) break;
LAB_006557ae:
            uVar75 = local_a0;
            local_128 = auVar119._8_8_;
            if (local_a0 == 0) goto LAB_006559e7;
            local_88 = (byte *)CONCAT44(local_88._4_4_,param_4);
            local_78 = auVar119._0_8_;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pbVar73 = (byte *)0x1;
            piVar60 = (int *)(*(code *)PTR___rust_alloc_00799000)();
            if (piVar60 != (int *)0x0) {
              auVar78._0_8_ = (*(code *)PTR_memcpy_00799008)();
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
              auVar119 = _DAT_00183f60;
              bVar86 = UNK_0018303f;
              bVar85 = UNK_0018303e;
              bVar84 = UNK_0018303d;
              bVar83 = UNK_0018303c;
              bVar82 = UNK_0018303b;
              bVar81 = UNK_0018303a;
              bVar80 = UNK_00183039;
              bVar79 = UNK_00183038;
              bVar42 = UNK_00183037;
              bVar41 = UNK_00183036;
              bVar40 = UNK_00183035;
              bVar39 = UNK_00183034;
              bVar38 = UNK_00183033;
              bVar37 = UNK_00183032;
              bVar36 = UNK_00183031;
              bVar63 = DAT_00183030;
              auVar78._8_8_ = extraout_XMM0_Qb;
              if (uVar75 < 8) {
                uVar61 = 0;
                auVar119 = auVar78;
                goto LAB_00655973;
              }
              uVar64 = 0x7fffffffffffffe0;
              if (uVar75 < 0x20) {
                uVar65 = 0;
                goto LAB_00655918;
              }
              uVar61 = uVar75 & 0x7fffffffffffffe0;
              uVar65 = 0;
              uVar76 = (undefined8)DAT_00183f60;
              do {
                pbVar1 = (byte *)((longlong)piVar60 + uVar65);
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
                pbVar73 = (byte *)((longlong)piVar60 + uVar65 + 0x10);
                bVar19 = *pbVar73;
                bVar20 = pbVar73[1];
                bVar21 = pbVar73[2];
                bVar22 = pbVar73[3];
                bVar23 = pbVar73[4];
                bVar24 = pbVar73[5];
                bVar25 = pbVar73[6];
                bVar26 = pbVar73[7];
                bVar27 = pbVar73[8];
                bVar28 = pbVar73[9];
                bVar29 = pbVar73[10];
                bVar30 = pbVar73[0xb];
                bVar31 = pbVar73[0xc];
                bVar32 = pbVar73[0xd];
                bVar33 = pbVar73[0xe];
                bVar34 = pbVar73[0xf];
                bVar87 = *pbVar1 + auVar119[0];
                bVar88 = bVar4 + auVar119[1];
                bVar89 = bVar5 + auVar119[2];
                bVar90 = bVar6 + auVar119[3];
                bVar91 = bVar7 + auVar119[4];
                bVar92 = bVar8 + auVar119[5];
                bVar93 = bVar9 + auVar119[6];
                bVar94 = bVar10 + auVar119[7];
                bVar95 = bVar11 + auVar119[8];
                bVar96 = bVar12 + auVar119[9];
                bVar97 = bVar13 + auVar119[10];
                bVar98 = bVar14 + auVar119[0xb];
                bVar99 = bVar15 + auVar119[0xc];
                bVar100 = bVar16 + auVar119[0xd];
                bVar101 = bVar17 + auVar119[0xe];
                bVar102 = bVar18 + auVar119[0xf];
                bVar103 = bVar19 + auVar119[0];
                bVar104 = bVar20 + auVar119[1];
                bVar105 = bVar21 + auVar119[2];
                bVar106 = bVar22 + auVar119[3];
                bVar107 = bVar23 + auVar119[4];
                bVar108 = bVar24 + auVar119[5];
                bVar109 = bVar25 + auVar119[6];
                bVar110 = bVar26 + auVar119[7];
                bVar111 = bVar27 + auVar119[8];
                bVar112 = bVar28 + auVar119[9];
                bVar113 = bVar29 + auVar119[10];
                bVar114 = bVar30 + auVar119[0xb];
                bVar115 = bVar31 + auVar119[0xc];
                bVar116 = bVar32 + auVar119[0xd];
                bVar117 = bVar33 + auVar119[0xe];
                bVar118 = bVar34 + auVar119[0xf];
                pbVar73 = (byte *)((longlong)piVar60 + uVar65);
                *pbVar73 = -((byte)((bVar63 < bVar87) * bVar63 | (bVar63 >= bVar87) * bVar87) ==
                            bVar87) & bVar43 | *pbVar1;
                pbVar73[1] = -((byte)((bVar36 < bVar88) * bVar36 | (bVar36 >= bVar88) * bVar88) ==
                              bVar88) & bVar44 | bVar4;
                pbVar73[2] = -((byte)((bVar37 < bVar89) * bVar37 | (bVar37 >= bVar89) * bVar89) ==
                              bVar89) & bVar45 | bVar5;
                pbVar73[3] = -((byte)((bVar38 < bVar90) * bVar38 | (bVar38 >= bVar90) * bVar90) ==
                              bVar90) & bVar46 | bVar6;
                pbVar73[4] = -((byte)((bVar39 < bVar91) * bVar39 | (bVar39 >= bVar91) * bVar91) ==
                              bVar91) & bVar47 | bVar7;
                pbVar73[5] = -((byte)((bVar40 < bVar92) * bVar40 | (bVar40 >= bVar92) * bVar92) ==
                              bVar92) & bVar48 | bVar8;
                pbVar73[6] = -((byte)((bVar41 < bVar93) * bVar41 | (bVar41 >= bVar93) * bVar93) ==
                              bVar93) & bVar49 | bVar9;
                pbVar73[7] = -((byte)((bVar42 < bVar94) * bVar42 | (bVar42 >= bVar94) * bVar94) ==
                              bVar94) & bVar50 | bVar10;
                pbVar73[8] = -((byte)((bVar79 < bVar95) * bVar79 | (bVar79 >= bVar95) * bVar95) ==
                              bVar95) & bVar51 | bVar11;
                pbVar73[9] = -((byte)((bVar80 < bVar96) * bVar80 | (bVar80 >= bVar96) * bVar96) ==
                              bVar96) & bVar52 | bVar12;
                pbVar73[10] = -((byte)((bVar81 < bVar97) * bVar81 | (bVar81 >= bVar97) * bVar97) ==
                               bVar97) & bVar53 | bVar13;
                pbVar73[0xb] = -((byte)((bVar82 < bVar98) * bVar82 | (bVar82 >= bVar98) * bVar98) ==
                                bVar98) & bVar54 | bVar14;
                pbVar73[0xc] = -((byte)((bVar83 < bVar99) * bVar83 | (bVar83 >= bVar99) * bVar99) ==
                                bVar99) & bVar55 | bVar15;
                pbVar73[0xd] = -((byte)((bVar84 < bVar100) * bVar84 | (bVar84 >= bVar100) * bVar100)
                                == bVar100) & bVar56 | bVar16;
                pbVar73[0xe] = -((byte)((bVar85 < bVar101) * bVar85 | (bVar85 >= bVar101) * bVar101)
                                == bVar101) & bVar57 | bVar17;
                pbVar73[0xf] = -((byte)((bVar86 < bVar102) * bVar86 | (bVar86 >= bVar102) * bVar102)
                                == bVar102) & bVar58 | bVar18;
                pbVar73 = (byte *)((longlong)piVar60 + uVar65 + 0x10);
                *pbVar73 = -((byte)((bVar63 < bVar103) * bVar63 | (bVar63 >= bVar103) * bVar103) ==
                            bVar103) & bVar43 | bVar19;
                pbVar73[1] = -((byte)((bVar36 < bVar104) * bVar36 | (bVar36 >= bVar104) * bVar104)
                              == bVar104) & bVar44 | bVar20;
                pbVar73[2] = -((byte)((bVar37 < bVar105) * bVar37 | (bVar37 >= bVar105) * bVar105)
                              == bVar105) & bVar45 | bVar21;
                pbVar73[3] = -((byte)((bVar38 < bVar106) * bVar38 | (bVar38 >= bVar106) * bVar106)
                              == bVar106) & bVar46 | bVar22;
                pbVar73[4] = -((byte)((bVar39 < bVar107) * bVar39 | (bVar39 >= bVar107) * bVar107)
                              == bVar107) & bVar47 | bVar23;
                pbVar73[5] = -((byte)((bVar40 < bVar108) * bVar40 | (bVar40 >= bVar108) * bVar108)
                              == bVar108) & bVar48 | bVar24;
                pbVar73[6] = -((byte)((bVar41 < bVar109) * bVar41 | (bVar41 >= bVar109) * bVar109)
                              == bVar109) & bVar49 | bVar25;
                pbVar73[7] = -((byte)((bVar42 < bVar110) * bVar42 | (bVar42 >= bVar110) * bVar110)
                              == bVar110) & bVar50 | bVar26;
                pbVar73[8] = -((byte)((bVar79 < bVar111) * bVar79 | (bVar79 >= bVar111) * bVar111)
                              == bVar111) & bVar51 | bVar27;
                pbVar73[9] = -((byte)((bVar80 < bVar112) * bVar80 | (bVar80 >= bVar112) * bVar112)
                              == bVar112) & bVar52 | bVar28;
                pbVar73[10] = -((byte)((bVar81 < bVar113) * bVar81 | (bVar81 >= bVar113) * bVar113)
                               == bVar113) & bVar53 | bVar29;
                pbVar73[0xb] = -((byte)((bVar82 < bVar114) * bVar82 | (bVar82 >= bVar114) * bVar114)
                                == bVar114) & bVar54 | bVar30;
                pbVar73[0xc] = -((byte)((bVar83 < bVar115) * bVar83 | (bVar83 >= bVar115) * bVar115)
                                == bVar115) & bVar55 | bVar31;
                pbVar73[0xd] = -((byte)((bVar84 < bVar116) * bVar84 | (bVar84 >= bVar116) * bVar116)
                                == bVar116) & bVar56 | bVar32;
                pbVar73[0xe] = -((byte)((bVar85 < bVar117) * bVar85 | (bVar85 >= bVar117) * bVar117)
                                == bVar117) & bVar57 | bVar33;
                pbVar73[0xf] = -((byte)((bVar86 < bVar118) * bVar86 | (bVar86 >= bVar118) * bVar118)
                                == bVar118) & bVar58 | bVar34;
                uVar65 = uVar65 + 0x20;
              } while (uVar61 != uVar65);
              if (uVar75 != uVar61) {
                uVar65 = uVar61;
                if ((uVar75 & 0x18) == 0) goto LAB_00655973;
LAB_00655918:
                uVar76 = s__001846a0._0_8_;
                auVar119 = _DAT_00184160;
                bVar42 = UNK_001840c7;
                bVar41 = UNK_001840c6;
                bVar40 = UNK_001840c5;
                bVar39 = UNK_001840c4;
                bVar38 = UNK_001840c3;
                bVar37 = UNK_001840c2;
                bVar36 = UNK_001840c1;
                bVar63 = DAT_001840c0;
                uVar64 = 0x7ffffffffffffff8;
                uVar61 = uVar75 & 0x7ffffffffffffff8;
                do {
                  uVar2 = *(ulonglong *)((longlong)piVar60 + uVar65);
                  bVar79 = (char)uVar2 + auVar119[0];
                  bVar80 = (char)(uVar2 >> 8) + auVar119[1];
                  bVar81 = (char)(uVar2 >> 0x10) + auVar119[2];
                  bVar82 = (char)(uVar2 >> 0x18) + auVar119[3];
                  bVar83 = (char)(uVar2 >> 0x20) + auVar119[4];
                  bVar84 = (char)(uVar2 >> 0x28) + auVar119[5];
                  bVar85 = (char)(uVar2 >> 0x30) + auVar119[6];
                  bVar86 = (char)(uVar2 >> 0x38) + auVar119[7];
                  *(ulonglong *)((longlong)piVar60 + uVar65) =
                       ~CONCAT17(-((byte)((bVar86 < bVar42) * bVar42 | (bVar86 >= bVar42) * bVar86)
                                  == bVar86),
                                 CONCAT16(-((byte)((bVar85 < bVar41) * bVar41 |
                                                  (bVar85 >= bVar41) * bVar85) == bVar85),
                                          CONCAT15(-((byte)((bVar84 < bVar40) * bVar40 |
                                                           (bVar84 >= bVar40) * bVar84) == bVar84),
                                                   CONCAT14(-((byte)((bVar83 < bVar39) * bVar39 |
                                                                    (bVar83 >= bVar39) * bVar83) ==
                                                             bVar83),CONCAT13(-((byte)((bVar82 < 
                                                  bVar38) * bVar38 | (bVar82 >= bVar38) * bVar82) ==
                                                  bVar82),CONCAT12(-((byte)((bVar81 < bVar37) *
                                                                            bVar37 | (bVar81 >=
                                                                                     bVar37) * 
                                                  bVar81) == bVar81),
                                                  CONCAT11(-((byte)((bVar80 < bVar36) * bVar36 |
                                                                   (bVar80 >= bVar36) * bVar80) ==
                                                            bVar80),-((byte)((bVar79 < bVar63) *
                                                                             bVar63 | (bVar79 >=
                                                                                      bVar63) * 
                                                  bVar79) == bVar79)))))))) & uVar76 | uVar2;
                  uVar65 = uVar65 + 8;
                } while (uVar61 != uVar65);
                for (; uVar76 = auVar119._0_8_, uVar75 != uVar61; uVar61 = uVar61 + 1) {
LAB_00655973:
                  bVar63 = *(byte *)((longlong)piVar60 + uVar61);
                  uVar64 = (ulonglong)bVar63;
                  *(byte *)((longlong)piVar60 + uVar61) =
                       ((byte)(bVar63 + 0xbf) < 0x1a) << 5 | bVar63;
                }
              }
              if (uVar75 != 4) {
                if (uVar75 == 6) {
                  if ((short)piVar60[1] == 0x3573 && *piVar60 == 0x6b636f73) {
                    iVar72 = 1;
                    uVar64 = 0;
                    goto LAB_00655a61;
                  }
                  goto LAB_006559e7;
                }
                if ((uVar75 != 7) ||
                   (*(int *)((longlong)piVar60 + 3) != 0x6835736b || *piVar60 != 0x6b636f73))
                goto LAB_006559e7;
                iVar72 = 0;
                uVar64 = 0;
LAB_00655a61:
                (*(code *)PTR___rust_dealloc_00798fc8)(uVar64,1);
                lVar70 = 0;
                if (lVar74 != 0) {
                  lVar70 = -(ulonglong)(local_158[lVar74 + -1] == 0x2f);
                }
                pcVar71 = (code *)(lVar70 + lVar74);
                if (pcVar71 != (code *)0x0) {
                  pbVar73 = local_158;
                  do {
                    if (pbVar73 == local_158 + (longlong)pcVar71) {
                      ::<str>::rsplit_once::<char>(&local_110,local_158,pcVar71,0x40);
                      pcVar59 = local_f8;
                      lVar74 = CONCAT17(uStack_109,
                                        CONCAT25(uStack_10b,
                                                 CONCAT23(uStack_10d,CONCAT21(sStack_10f,local_110))
                                                ));
                      if (lVar74 != 0) {
                        uVar76 = CONCAT71(uStack_107,uStack_108);
                        local_158 = (byte *)CONCAT71(uStack_ff,local_100);
                        ::<str>::split_once::<char>(&local_a8,lVar74,uVar76);
                        lVar70 = local_98;
                        if (local_a8 == 0) {
                          uVar76 = percent_decode(&local_110,lVar74,uVar76);
                          lVar74 = CONCAT17(uStack_109,
                                            CONCAT25(uStack_10b,
                                                     CONCAT23(uStack_10d,
                                                              CONCAT21(sStack_10f,local_110))));
                          uVar75 = CONCAT71(uStack_107,uStack_108);
                          local_148 = CONCAT71(uStack_ff,local_100);
                          if (lVar74 == -2) {
                            local_138 = (ulonglong)local_f8;
                            lVar70 = 1;
                            lVar74 = 0;
                            pcVar66 = (code *)0x0;
                            goto LAB_00655de5;
                          }
                        }
                        else {
                          percent_decode(&local_110,local_a8,local_a0);
                          lVar74 = CONCAT17(uStack_109,
                                            CONCAT25(uStack_10b,
                                                     CONCAT23(uStack_10d,
                                                              CONCAT21(sStack_10f,local_110))));
                          uVar75 = CONCAT71(uStack_107,uStack_108);
                          local_148 = CONCAT71(uStack_ff,local_100);
                          if (lVar74 == -2) {
                            local_138 = (ulonglong)local_f8;
                            uVar76 = percent_decode(&local_110,lVar70,local_90);
                            lVar35 = CONCAT17(uStack_109,
                                              CONCAT25(uStack_10b,
                                                       CONCAT23(uStack_10d,
                                                                CONCAT21(sStack_10f,local_110))));
                            lVar74 = CONCAT71(uStack_107,uStack_108);
                            lVar70 = CONCAT71(uStack_ff,local_100);
                            pcVar66 = local_f8;
                            if (lVar35 != -2) {
                              param_1[7] = local_e0;
                              param_1[8] = lStack_d8;
                              param_1[5] = (longlong)local_f0;
                              param_1[6] = (longlong)puStack_e8;
                              param_1[1] = lVar35;
                              param_1[2] = lVar74;
                              param_1[3] = lVar70;
                              param_1[4] = (longlong)local_f8;
                              *param_1 = -1;
                              if (uVar75 == 0) {
                                return;
                              }
                              goto LAB_0065603e;
                            }
LAB_00655de5:
                            if ((0xff < local_138) || (lVar74 != -1 && 0xffU < pcVar66)) {
                              param_1[1] = -1;
                              param_1[2] = (longlong)&DAT_001a3872;
                              param_1[3] = 0x11;
                              param_1[4] = -1;
                              param_1[5] = (longlong)&DAT_001a3a8c;
                              param_1[6] = 0x30;
                              param_1[7] = 0;
                              *(undefined4 *)(param_1 + 8) = 0x6020190;
                              *param_1 = -1;
                              if (lVar74 - 1U < 0xfffffffffffffffe) {
                                uVar76 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar76,1);
                              }
                              goto joined_r0x00655a36;
                            }
                            pcVar71 = pcVar59;
                            local_118 = lVar70;
                            local_80 = (ulonglong)pcVar66;
                            if (local_138 == 0) {
                              if ((lVar74 == -1) || (pcVar66 == (code *)0x0)) {
                                if (lVar74 - 1U < 0xfffffffffffffffe) {
                                  uVar76 = (*(code *)PTR___rust_dealloc_00798fc8)(0xffU < pcVar66,1)
                                  ;
                                }
                                if (uVar75 != 0) {
                                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar76,1);
                                }
                                local_138 = 0;
                                goto LAB_00655ca3;
                              }
                              local_138 = 0;
                            }
                            goto LAB_00655caa;
                          }
                        }
                        param_1[7] = local_e0;
                        param_1[8] = lStack_d8;
                        param_1[5] = (longlong)local_f0;
                        param_1[6] = (longlong)puStack_e8;
                        param_1[2] = uVar75;
                        param_1[3] = local_148;
                        param_1[4] = (longlong)local_f8;
                        param_1[1] = lVar74;
                        goto LAB_00655853;
                      }
LAB_00655ca3:
                      uVar75 = 0xffffffffffffffff;
                      lVar74 = -1;
LAB_00655caa:
                      if ((pcVar71 == (code *)0x0) || (*local_158 != 0x5b)) {
                        local_f0 = (undefined2 *)
                                   ::<str>::rsplit_once::<char>(&local_110,local_158,pcVar71,0x3a);
                        if (CONCAT17(uStack_109,
                                     CONCAT25(uStack_10b,
                                              CONCAT23(uStack_10d,CONCAT21(sStack_10f,local_110))))
                            == 0) {
                          param_1[1] = -1;
                          param_1[2] = (longlong)&DAT_001a3872;
                          param_1[3] = 0x11;
                          param_1[4] = -1;
                          puVar62 = &DAT_001a39c8;
                          goto LAB_00655edd;
                        }
LAB_00655d24:
                        lVar70 = CONCAT71(uStack_107,uStack_108);
                        uVar76 = CONCAT71(uStack_ff,local_100);
                        local_120 = (ulonglong)local_f8;
                        uVar77 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                                           (&local_110,lVar70,0,1,1);
                        lVar35 = CONCAT71(uStack_107,uStack_108);
                        if (local_110 != '\0') {
                          (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
                          pcVar71 = (code *)invalidInstructionException();
                          (*pcVar71)();
                        }
                        pbVar73 = (byte *)CONCAT71(uStack_ff,local_100);
                        if (lVar70 == 0) {
                          lVar70 = 0;
                        }
                        else {
                          (*(code *)PTR_memcpy_00799008)(uVar77,lVar70);
                        }
                        local_70 = lVar35;
                        pbStack_68 = pbVar73;
                        local_60 = lVar70;
                        uVar68 = <u16>::from_ascii_radix(uVar76,local_120);
                        bVar3 = uVar68 >> 0x10 == 0;
                        uVar61 = (ulonglong)(byte)(bVar3 | (byte)uVar68);
                        local_f0 = (undefined2 *)extraout_XMM0_Qa;
                        if (bVar3 || (uVar68 & 1) != 0) {
                          uVar61 = 0x1a;
                          param_1[1] = -1;
                          *(undefined2 *)(param_1 + 2) = 0x3872;
                          *(undefined2 *)((longlong)param_1 + 0x16) = 0;
                          *(undefined4 *)((longlong)param_1 + 0x12) = 0x1a;
                          param_1[3] = 0x11;
                          param_1[4] = -1;
                          puVar62 = &DAT_001a3a00;
LAB_00655fc8:
                          param_1[5] = (longlong)puVar62;
                          param_1[6] = 0x12;
                          param_1[7] = 0;
                          *(undefined4 *)(param_1 + 8) = 0x6020190;
                          *param_1 = -1;
                        }
                        else {
                          uVar69 = (undefined2)(uVar68 >> 0x10);
                          local_12a = uVar69;
                          if (lVar70 - 0xfeU < 0xffffffffffffff03) {
                            param_1[1] = -1;
                            param_1[2] = (longlong)&DAT_001a3872;
                            param_1[3] = 0x11;
                            param_1[4] = -1;
                            puVar62 = &DAT_001a3a7a;
                            goto LAB_00655fc8;
                          }
                          if ((char)local_88 != '\0') {
LAB_0065621f:
                            uVar76 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                                     ::digest::<&[u8]>(&local_110,local_78,local_128);
                            local_50 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                                       ::fmt;
                            local_58 = &local_110;
                            (*(code *)PTR_format_inner_00799048)(uVar76,&local_58);
                            uVar61 = local_a0;
                            local_128 = local_a8;
                            local_a8 = *(longlong *)
                                        ((longlong)
                                         &
                                         PTR_anon_63b06cc94833867f683611f039574387_60_llvm_6903579140370050947_007908d0
                                        + (ulonglong)(uint)(iVar72 << 3));
                            local_a0 = *(ulonglong *)(&DAT_001a41e8 + (uint)(iVar72 << 3));
                            local_110 = (char)&local_a8;
                            sStack_10f = (short)((ulonglong)&local_a8 >> 8);
                            uStack_10d = (ushort)((ulonglong)&local_a8 >> 0x18);
                            uStack_10b = (ushort)((ulonglong)&local_a8 >> 0x28);
                            uStack_109 = (undefined1)((ulonglong)&local_a8 >> 0x38);
                            uStack_108 = 0x60;
                            uStack_107 = 0x6354;
                            local_100 = SUB81(&local_70,0);
                            uStack_ff = (undefined7)((ulonglong)&local_70 >> 8);
                            local_f8 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                                       ::fmt;
                            local_f0 = &local_12a;
                            puStack_e8 = PTR_fmt_00799c28;
                            (*(code *)PTR_format_inner_00799048)(local_a8,&local_110);
                            param_1[2] = local_60;
                            *param_1 = local_70;
                            param_1[1] = (longlong)pbStack_68;
                            param_1[8] = local_38;
                            param_1[6] = local_48;
                            param_1[7] = lStack_40;
                            param_1[3] = local_128;
                            param_1[4] = uVar61;
                            param_1[5] = local_98;
                            param_1[9] = uVar75;
                            param_1[10] = local_148;
                            param_1[0xb] = local_138;
                            param_1[0xc] = lVar74;
                            param_1[0xd] = local_118;
                            param_1[0xe] = local_80;
                            *(undefined2 *)(param_1 + 0xf) = uVar69;
                            *(char *)((longlong)param_1 + 0x7a) = (char)iVar72;
                            return;
                          }
                          if (((((((lVar70 == 9) &&
                                  (bVar63 = ((byte)(*pbVar73 + 0xbf) < 0x1a) << 5 | *pbVar73,
                                  uVar61 = (ulonglong)bVar63, bVar63 == 0x6c)) &&
                                 (bVar63 = ((byte)(pbVar73[1] + 0xbf) < 0x1a) << 5 | pbVar73[1],
                                 uVar61 = (ulonglong)bVar63, bVar63 == 0x6f)) &&
                                ((bVar63 = ((byte)(pbVar73[2] + 0xbf) < 0x1a) << 5 | pbVar73[2],
                                 uVar61 = (ulonglong)bVar63, bVar63 == 99 &&
                                 (bVar63 = ((byte)(pbVar73[3] + 0xbf) < 0x1a) << 5 | pbVar73[3],
                                 uVar61 = (ulonglong)bVar63, bVar63 == 0x61)))) &&
                               ((bVar63 = ((byte)(pbVar73[4] + 0xbf) < 0x1a) << 5 | pbVar73[4],
                                uVar61 = (ulonglong)bVar63, bVar63 == 0x6c &&
                                ((bVar63 = ((byte)(pbVar73[5] + 0xbf) < 0x1a) << 5 | pbVar73[5],
                                 uVar61 = (ulonglong)bVar63, bVar63 == 0x68 &&
                                 (bVar63 = ((byte)(pbVar73[6] + 0xbf) < 0x1a) << 5 | pbVar73[6],
                                 uVar61 = (ulonglong)bVar63, bVar63 == 0x6f)))))) &&
                              (bVar63 = ((byte)(pbVar73[7] + 0xbf) < 0x1a) << 5 | pbVar73[7],
                              uVar61 = (ulonglong)bVar63, bVar63 == 0x73)) &&
                             (bVar63 = ((byte)(pbVar73[8] + 0xbf) < 0x1a) << 5 | pbVar73[8],
                             uVar61 = (ulonglong)bVar63, bVar63 == 0x74)) {
                            param_1[1] = -1;
                            param_1[2] = (longlong)&DAT_001a3872;
                            param_1[3] = 0x11;
                            param_1[4] = -1;
                            param_1[5] = (longlong)&DAT_001a3a12;
                            param_1[6] = 0x1c;
                            param_1[7] = 0;
                            *(undefined4 *)(param_1 + 8) = 0x6020190;
                            *param_1 = -1;
                            uVar61 = 0x74;
                          }
                          else {
                            local_88 = pbVar73;
                            local_f0 = (undefined2 *)(*(code *)PTR_from_str_0079a270)(uVar61,lVar70)
                            ;
                            if (local_110 == '\x02') goto LAB_0065621f;
                            uVar68 = CONCAT22(uStack_10d,sStack_10f);
                            uVar61 = (ulonglong)uStack_10d;
                            bVar63 = (byte)sStack_10f;
                            if (local_110 == '\x01') {
                              uVar61 = (ulonglong)CONCAT22(uStack_10d,sStack_10f) |
                                       (ulonglong)CONCAT11(uStack_108,uStack_109) << 0x30 |
                                       (ulonglong)uStack_10b << 0x20;
                              if (((CONCAT17(local_100,uStack_107) & 0xfeffffffffffffff) != 0 ||
                                   uVar61 != 0) && (bVar63 != 0xff)) goto LAB_0065621f;
                            }
                            else if ((((bVar63 != 0x7f) && (uVar61 = (ulonglong)uVar68, uVar68 != 0)
                                      ) && ((bVar63 & 0xf0) != 0xe0)) &&
                                    ((sStack_10f != -0x157 && (uVar68 != 0xffffffff))))
                            goto LAB_0065621f;
                            param_1[1] = -1;
                            param_1[2] = (longlong)&DAT_001a3872;
                            param_1[3] = 0x11;
                            param_1[4] = -1;
                            param_1[5] = (longlong)&DAT_001a3a2e;
                            param_1[6] = 0x4c;
                            param_1[7] = 0;
                            *(undefined4 *)(param_1 + 8) = 0x6020190;
                            *param_1 = -1;
                          }
                        }
                        if (lVar35 != 0) {
                          local_f0 = (undefined2 *)(*(code *)PTR___rust_dealloc_00798fc8)(uVar61,1);
                        }
                      }
                      else {
                        local_f0 = (undefined2 *)
                                   ::<str>::split_once::<&str>
                                             (&local_110,local_158 + 1,(longlong)pcVar71 - 1);
                        if (CONCAT17(uStack_109,
                                     CONCAT25(uStack_10b,
                                              CONCAT23(uStack_10d,CONCAT21(sStack_10f,local_110))))
                            != 0) goto LAB_00655d24;
                        param_1[1] = -1;
                        param_1[2] = (longlong)&DAT_001a3872;
                        param_1[3] = 0x11;
                        param_1[4] = -1;
                        puVar62 = &DAT_001a39e4;
LAB_00655edd:
                        param_1[5] = (longlong)puVar62;
                        param_1[6] = 0x1c;
                        param_1[7] = 0;
                        *(undefined4 *)(param_1 + 8) = 0x6020190;
                        *param_1 = -1;
                      }
                      if (lVar74 - 1U < 0xfffffffffffffffe) {
                        local_f0 = (undefined2 *)(*(code *)PTR___rust_dealloc_00798fc8)(local_f0,1);
                      }
                      if (0xfffffffffffffffd < uVar75 - 1) {
                        return;
                      }
LAB_0065603e:
                      (*(code *)PTR___rust_dealloc_00798fc8)(local_f0,1);
                      return;
                    }
                    bVar63 = *pbVar73;
                    uVar68 = (uint)bVar63;
                    if ((char)bVar63 < '\0') {
                      uVar67 = bVar63 & 0x1f;
                      pbVar1 = pbVar73 + 1;
                      if (bVar63 < 0xe0) {
                        pbVar73 = pbVar73 + 2;
                        uVar68 = uVar67 << 6 | *pbVar1 & 0x3f;
                      }
                      else {
                        uVar68 = pbVar73[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                        if (bVar63 < 0xf0) {
                          pbVar73 = pbVar73 + 3;
                          uVar68 = uVar68 | uVar67 << 0xc;
                        }
                        else {
                          pbVar1 = pbVar73 + 3;
                          pbVar73 = pbVar73 + 4;
                          uVar68 = *pbVar1 & 0x3f | uVar68 << 6 | (bVar63 & 7) << 0x12;
                        }
                      }
                    }
                    else {
                      pbVar73 = pbVar73 + 1;
                    }
                  } while (((uVar68 & 0x1fffef) != 0x2f) &&
                          ((0x23 < uVar68 || ((0x900002600U >> ((ulonglong)uVar68 & 0x3f) & 1) == 0)
                           )));
                }
                param_1[1] = -1;
                param_1[2] = (longlong)&DAT_001a3872;
                param_1[3] = 0x11;
                param_1[4] = -1;
                param_1[5] = (longlong)&DAT_001a3abc;
                param_1[6] = 0x3e;
                goto LAB_00655844;
              }
              if (*piVar60 == 0x70747468) {
                iVar72 = 2;
                goto LAB_00655a61;
              }
LAB_006559e7:
              param_1[1] = -1;
              param_1[2] = (longlong)&DAT_001a3872;
              param_1[3] = 0x11;
              param_1[4] = -1;
              param_1[5] = (longlong)&DAT_001a3997;
              param_1[6] = 0x31;
              param_1[7] = 0;
              *(undefined4 *)(param_1 + 8) = 0x6020190;
              *param_1 = -1;
joined_r0x00655a36:
              if (uVar75 == 0) {
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
              (*(code *)PTR_free_0079adc8)(uVar76,1);
              return;
            }
          }
        } while( true );
      }
LAB_0065580e:
      param_1[1] = -1;
      param_1[2] = (longlong)&DAT_001a3872;
      param_1[3] = 0x11;
      param_1[4] = -1;
      param_1[5] = (longlong)&DAT_001a3958;
      param_1[6] = 0x3f;
      goto LAB_00655844;
    }
  }
LAB_00655573:
  param_1[1] = -1;
  param_1[2] = (longlong)&DAT_001a3872;
  param_1[3] = 0x11;
  param_1[4] = -1;
  param_1[5] = (longlong)&DAT_001a3afa;
  param_1[6] = 0x37;
LAB_00655844:
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0x6020190;
LAB_00655853:
  *param_1 = -1;
  return;
}


