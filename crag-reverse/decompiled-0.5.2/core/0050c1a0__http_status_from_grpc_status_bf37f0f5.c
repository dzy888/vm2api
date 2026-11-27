// 0050c1a0 http_status_from_grpc_status

/* craggemini_core[66f3c71560d70857]::protocol::http_status_from_grpc_status */

undefined1  [16] __rustcall
craggemini_core[66f3c71560d70857]::protocol::http_status_from_grpc_status(void)

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
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
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
  undefined8 uVar74;
  ulonglong *puVar75;
  uint uVar76;
  ulonglong uVar77;
  uint *puVar78;
  ulonglong uVar79;
  undefined8 unaff_RBP;
  undefined6 uVar80;
  ulonglong uVar81;
  ulonglong unaff_R15;
  undefined6 uVar82;
  undefined1 uVar83;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
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
  byte bVar131;
  byte bVar132;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  
  auVar133 = ::<str>::trim_matches::<<char>::is_whitespace>();
  auVar133._8_8_ = auVar133._8_8_;
  uVar83 = auVar133._8_8_ == 0;
  uVar81 = auVar133._8_8_;
  uVar77 = unaff_R15;
  if (-1 < (longlong)auVar133._8_8_) goto LAB_0050c1c7;
  do {
    uVar83 = 1;
    uVar74 = (*(code *)PTR_handle_error_00798ff0)();
    auVar133._8_8_ = uVar81;
    auVar133._0_8_ = uVar74;
    uVar77 = unaff_R15;
LAB_0050c1c7:
    uVar79 = auVar133._8_8_;
    unaff_R15 = auVar133._0_8_;
    if ((bool)uVar83) {
      uVar81 = 0;
      goto LAB_0050c600;
    }
    uVar81 = uVar79;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar75 = (ulonglong *)(*(code *)PTR___rust_alloc_00799000)();
  } while (puVar75 == (ulonglong *)0x0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,auVar133._8_8_);
  bVar73 = UNK_0018483f;
  bVar72 = UNK_0018483e;
  bVar71 = UNK_0018483d;
  bVar70 = UNK_0018483c;
  bVar69 = UNK_0018483b;
  bVar68 = UNK_0018483a;
  bVar67 = UNK_00184839;
  bVar66 = UNK_00184838;
  bVar65 = UNK_00184837;
  bVar64 = UNK_00184836;
  bVar63 = UNK_00184835;
  bVar62 = UNK_00184834;
  bVar61 = UNK_00184833;
  bVar60 = UNK_00184832;
  bVar59 = UNK_00184831;
  bVar58 = DAT_00184830;
  bVar100 = UNK_0018303f;
  bVar99 = UNK_0018303e;
  bVar98 = UNK_0018303d;
  bVar97 = UNK_0018303c;
  bVar96 = UNK_0018303b;
  bVar95 = UNK_0018303a;
  bVar94 = UNK_00183039;
  bVar93 = UNK_00183038;
  bVar57 = UNK_00183037;
  bVar56 = UNK_00183036;
  bVar55 = UNK_00183035;
  bVar54 = UNK_00183034;
  bVar53 = UNK_00183033;
  bVar52 = UNK_00183032;
  bVar51 = UNK_00183031;
  bVar50 = DAT_00183030;
  cVar49 = UNK_00182ccf;
  cVar48 = UNK_00182cce;
  cVar47 = UNK_00182ccd;
  cVar46 = UNK_00182ccc;
  cVar45 = UNK_00182ccb;
  cVar44 = UNK_00182cca;
  cVar43 = UNK_00182cc9;
  cVar42 = UNK_00182cc8;
  cVar41 = UNK_00182cc7;
  cVar40 = UNK_00182cc6;
  cVar39 = UNK_00182cc5;
  cVar38 = UNK_00182cc4;
  cVar37 = UNK_00182cc3;
  cVar36 = UNK_00182cc2;
  cVar35 = UNK_00182cc1;
  cVar34 = DAT_00182cc0;
  if (uVar79 < 8) {
    uVar77 = 0;
LAB_0050c313:
    do {
      *(byte *)((longlong)puVar75 + uVar77) =
           ((byte)(*(byte *)((longlong)puVar75 + uVar77) + 0x9f) < 0x1a) << 5 ^
           *(byte *)((longlong)puVar75 + uVar77);
      uVar77 = uVar77 + 1;
LAB_0050c331:
    } while (uVar79 != uVar77);
  }
  else {
    if (uVar79 < 0x20) {
      uVar81 = 0;
LAB_0050c2b8:
      uVar74 = s__001846a0._0_8_;
      bVar57 = UNK_001840c7;
      bVar56 = UNK_001840c6;
      bVar55 = UNK_001840c5;
      bVar54 = UNK_001840c4;
      bVar53 = UNK_001840c3;
      bVar52 = UNK_001840c2;
      bVar51 = UNK_001840c1;
      bVar50 = DAT_001840c0;
      cVar41 = UNK_001830d7;
      cVar40 = UNK_001830d6;
      cVar39 = UNK_001830d5;
      cVar38 = UNK_001830d4;
      cVar37 = UNK_001830d3;
      cVar36 = UNK_001830d2;
      cVar35 = UNK_001830d1;
      cVar34 = DAT_001830d0;
      uVar77 = uVar79 & 0x7ffffffffffffff8;
      do {
        auVar133._8_8_ = *(ulonglong *)((longlong)puVar75 + uVar81);
        bVar93 = (char)auVar133._8_8_ + cVar34;
        bVar94 = (char)(auVar133._8_8_ >> 8) + cVar35;
        bVar95 = (char)(auVar133._8_8_ >> 0x10) + cVar36;
        bVar96 = (char)(auVar133._8_8_ >> 0x18) + cVar37;
        bVar97 = (char)(auVar133._8_8_ >> 0x20) + cVar38;
        bVar98 = (char)(auVar133._8_8_ >> 0x28) + cVar39;
        bVar99 = (char)(auVar133._8_8_ >> 0x30) + cVar40;
        bVar100 = (char)(auVar133._8_8_ >> 0x38) + cVar41;
        *(ulonglong *)((longlong)puVar75 + uVar81) =
             ~CONCAT17(-((byte)((bVar100 < bVar57) * bVar57 | (bVar100 >= bVar57) * bVar100) ==
                        bVar100),
                       CONCAT16(-((byte)((bVar99 < bVar56) * bVar56 | (bVar99 >= bVar56) * bVar99)
                                 == bVar99),
                                CONCAT15(-((byte)((bVar98 < bVar55) * bVar55 |
                                                 (bVar98 >= bVar55) * bVar98) == bVar98),
                                         CONCAT14(-((byte)((bVar97 < bVar54) * bVar54 |
                                                          (bVar97 >= bVar54) * bVar97) == bVar97),
                                                  CONCAT13(-((byte)((bVar96 < bVar53) * bVar53 |
                                                                   (bVar96 >= bVar53) * bVar96) ==
                                                            bVar96),CONCAT12(-((byte)((bVar95 < 
                                                  bVar52) * bVar52 | (bVar95 >= bVar52) * bVar95) ==
                                                  bVar95),CONCAT11(-((byte)((bVar94 < bVar51) *
                                                                            bVar51 | (bVar94 >=
                                                                                     bVar51) * 
                                                  bVar94) == bVar94),
                                                  -((byte)((bVar93 < bVar50) * bVar50 |
                                                          (bVar93 >= bVar50) * bVar93) == bVar93))))
                                                 )))) & uVar74 ^ auVar133._8_8_;
        uVar81 = uVar81 + 8;
        if (uVar77 == uVar81) goto LAB_0050c331;
      } while( true );
    }
    uVar77 = uVar79 & 0x7fffffffffffffe0;
    uVar81 = 0;
    do {
      pbVar1 = (byte *)((longlong)puVar75 + uVar81);
      bVar3 = pbVar1[1];
      bVar4 = pbVar1[2];
      bVar5 = pbVar1[3];
      bVar6 = pbVar1[4];
      bVar7 = pbVar1[5];
      bVar8 = pbVar1[6];
      bVar9 = pbVar1[7];
      bVar10 = pbVar1[8];
      bVar11 = pbVar1[9];
      bVar12 = pbVar1[10];
      bVar13 = pbVar1[0xb];
      bVar14 = pbVar1[0xc];
      bVar15 = pbVar1[0xd];
      bVar16 = pbVar1[0xe];
      bVar17 = pbVar1[0xf];
      pbVar2 = (byte *)((longlong)puVar75 + uVar81 + 0x10);
      bVar18 = *pbVar2;
      bVar19 = pbVar2[1];
      bVar20 = pbVar2[2];
      bVar21 = pbVar2[3];
      bVar22 = pbVar2[4];
      bVar23 = pbVar2[5];
      bVar24 = pbVar2[6];
      bVar25 = pbVar2[7];
      bVar26 = pbVar2[8];
      bVar27 = pbVar2[9];
      bVar28 = pbVar2[10];
      bVar29 = pbVar2[0xb];
      bVar30 = pbVar2[0xc];
      bVar31 = pbVar2[0xd];
      bVar32 = pbVar2[0xe];
      bVar33 = pbVar2[0xf];
      bVar101 = *pbVar1 + cVar34;
      bVar102 = bVar3 + cVar35;
      bVar103 = bVar4 + cVar36;
      bVar104 = bVar5 + cVar37;
      bVar105 = bVar6 + cVar38;
      bVar106 = bVar7 + cVar39;
      bVar107 = bVar8 + cVar40;
      bVar108 = bVar9 + cVar41;
      bVar109 = bVar10 + cVar42;
      bVar110 = bVar11 + cVar43;
      bVar111 = bVar12 + cVar44;
      bVar112 = bVar13 + cVar45;
      bVar113 = bVar14 + cVar46;
      bVar114 = bVar15 + cVar47;
      bVar115 = bVar16 + cVar48;
      bVar116 = bVar17 + cVar49;
      bVar117 = bVar18 + cVar34;
      bVar118 = bVar19 + cVar35;
      bVar119 = bVar20 + cVar36;
      bVar120 = bVar21 + cVar37;
      bVar121 = bVar22 + cVar38;
      bVar122 = bVar23 + cVar39;
      bVar123 = bVar24 + cVar40;
      bVar124 = bVar25 + cVar41;
      bVar125 = bVar26 + cVar42;
      bVar126 = bVar27 + cVar43;
      bVar127 = bVar28 + cVar44;
      bVar128 = bVar29 + cVar45;
      bVar129 = bVar30 + cVar46;
      bVar130 = bVar31 + cVar47;
      bVar131 = bVar32 + cVar48;
      bVar132 = bVar33 + cVar49;
      pbVar2 = (byte *)((longlong)puVar75 + uVar81);
      *pbVar2 = -((byte)((bVar50 < bVar101) * bVar50 | (bVar50 >= bVar101) * bVar101) == bVar101) &
                bVar58 ^ *pbVar1;
      pbVar2[1] = -((byte)((bVar51 < bVar102) * bVar51 | (bVar51 >= bVar102) * bVar102) == bVar102)
                  & bVar59 ^ bVar3;
      pbVar2[2] = -((byte)((bVar52 < bVar103) * bVar52 | (bVar52 >= bVar103) * bVar103) == bVar103)
                  & bVar60 ^ bVar4;
      pbVar2[3] = -((byte)((bVar53 < bVar104) * bVar53 | (bVar53 >= bVar104) * bVar104) == bVar104)
                  & bVar61 ^ bVar5;
      pbVar2[4] = -((byte)((bVar54 < bVar105) * bVar54 | (bVar54 >= bVar105) * bVar105) == bVar105)
                  & bVar62 ^ bVar6;
      pbVar2[5] = -((byte)((bVar55 < bVar106) * bVar55 | (bVar55 >= bVar106) * bVar106) == bVar106)
                  & bVar63 ^ bVar7;
      pbVar2[6] = -((byte)((bVar56 < bVar107) * bVar56 | (bVar56 >= bVar107) * bVar107) == bVar107)
                  & bVar64 ^ bVar8;
      pbVar2[7] = -((byte)((bVar57 < bVar108) * bVar57 | (bVar57 >= bVar108) * bVar108) == bVar108)
                  & bVar65 ^ bVar9;
      pbVar2[8] = -((byte)((bVar93 < bVar109) * bVar93 | (bVar93 >= bVar109) * bVar109) == bVar109)
                  & bVar66 ^ bVar10;
      pbVar2[9] = -((byte)((bVar94 < bVar110) * bVar94 | (bVar94 >= bVar110) * bVar110) == bVar110)
                  & bVar67 ^ bVar11;
      pbVar2[10] = -((byte)((bVar95 < bVar111) * bVar95 | (bVar95 >= bVar111) * bVar111) == bVar111)
                   & bVar68 ^ bVar12;
      pbVar2[0xb] = -((byte)((bVar96 < bVar112) * bVar96 | (bVar96 >= bVar112) * bVar112) == bVar112
                     ) & bVar69 ^ bVar13;
      pbVar2[0xc] = -((byte)((bVar97 < bVar113) * bVar97 | (bVar97 >= bVar113) * bVar113) == bVar113
                     ) & bVar70 ^ bVar14;
      pbVar2[0xd] = -((byte)((bVar98 < bVar114) * bVar98 | (bVar98 >= bVar114) * bVar114) == bVar114
                     ) & bVar71 ^ bVar15;
      pbVar2[0xe] = -((byte)((bVar99 < bVar115) * bVar99 | (bVar99 >= bVar115) * bVar115) == bVar115
                     ) & bVar72 ^ bVar16;
      pbVar2[0xf] = -((byte)((bVar100 < bVar116) * bVar100 | (bVar100 >= bVar116) * bVar116) ==
                     bVar116) & bVar73 ^ bVar17;
      pbVar1 = (byte *)((longlong)puVar75 + uVar81 + 0x10);
      *pbVar1 = -((byte)((bVar50 < bVar117) * bVar50 | (bVar50 >= bVar117) * bVar117) == bVar117) &
                bVar58 ^ bVar18;
      pbVar1[1] = -((byte)((bVar51 < bVar118) * bVar51 | (bVar51 >= bVar118) * bVar118) == bVar118)
                  & bVar59 ^ bVar19;
      pbVar1[2] = -((byte)((bVar52 < bVar119) * bVar52 | (bVar52 >= bVar119) * bVar119) == bVar119)
                  & bVar60 ^ bVar20;
      pbVar1[3] = -((byte)((bVar53 < bVar120) * bVar53 | (bVar53 >= bVar120) * bVar120) == bVar120)
                  & bVar61 ^ bVar21;
      pbVar1[4] = -((byte)((bVar54 < bVar121) * bVar54 | (bVar54 >= bVar121) * bVar121) == bVar121)
                  & bVar62 ^ bVar22;
      pbVar1[5] = -((byte)((bVar55 < bVar122) * bVar55 | (bVar55 >= bVar122) * bVar122) == bVar122)
                  & bVar63 ^ bVar23;
      pbVar1[6] = -((byte)((bVar56 < bVar123) * bVar56 | (bVar56 >= bVar123) * bVar123) == bVar123)
                  & bVar64 ^ bVar24;
      pbVar1[7] = -((byte)((bVar57 < bVar124) * bVar57 | (bVar57 >= bVar124) * bVar124) == bVar124)
                  & bVar65 ^ bVar25;
      pbVar1[8] = -((byte)((bVar93 < bVar125) * bVar93 | (bVar93 >= bVar125) * bVar125) == bVar125)
                  & bVar66 ^ bVar26;
      pbVar1[9] = -((byte)((bVar94 < bVar126) * bVar94 | (bVar94 >= bVar126) * bVar126) == bVar126)
                  & bVar67 ^ bVar27;
      pbVar1[10] = -((byte)((bVar95 < bVar127) * bVar95 | (bVar95 >= bVar127) * bVar127) == bVar127)
                   & bVar68 ^ bVar28;
      pbVar1[0xb] = -((byte)((bVar96 < bVar128) * bVar96 | (bVar96 >= bVar128) * bVar128) == bVar128
                     ) & bVar69 ^ bVar29;
      pbVar1[0xc] = -((byte)((bVar97 < bVar129) * bVar97 | (bVar97 >= bVar129) * bVar129) == bVar129
                     ) & bVar70 ^ bVar30;
      pbVar1[0xd] = -((byte)((bVar98 < bVar130) * bVar98 | (bVar98 >= bVar130) * bVar130) == bVar130
                     ) & bVar71 ^ bVar31;
      pbVar1[0xe] = -((byte)((bVar99 < bVar131) * bVar99 | (bVar99 >= bVar131) * bVar131) == bVar131
                     ) & bVar72 ^ bVar32;
      pbVar1[0xf] = -((byte)((bVar100 < bVar132) * bVar100 | (bVar100 >= bVar132) * bVar132) ==
                     bVar132) & bVar73 ^ bVar33;
      uVar81 = uVar81 + 0x20;
    } while (uVar77 != uVar81);
    if (uVar79 != uVar77) {
      uVar81 = uVar77;
      if ((uVar79 & 0x18) != 0) goto LAB_0050c2b8;
      goto LAB_0050c313;
    }
  }
  puVar78 = &switchD_0050c352::switchdataD_00199044;
  uVar80 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar82 = auVar133._2_6_;
  switch(uVar79) {
  case 7:
    uVar81 = CONCAT62(uVar80,1);
    if (*(int *)((longlong)puVar75 + 3) == 0x44455452 && (uint)*puVar75 == 0x524f4241) {
      unaff_R15 = CONCAT62(uVar82,0x199);
      puVar78 = (uint *)0x0;
      goto LAB_0050c5ef;
    }
    uVar76 = *(uint *)((longlong)puVar75 + 3) ^ 0x4e574f4e | (uint)*puVar75 ^ 0x4e4b4e55;
    puVar78 = (uint *)(ulonglong)uVar76;
    if (uVar76 == 0) {
LAB_0050c42f:
      uVar81 = CONCAT62(uVar80,1);
      unaff_R15 = CONCAT62(uVar82,500);
      goto LAB_0050c5ef;
    }
    break;
  case 8:
    if (*puVar75 == 0x4c414e5245544e49) {
      unaff_R15 = CONCAT62(uVar82,500);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 9:
    uVar81 = CONCAT62(uVar80,1);
    if ((char)puVar75[1] == 'D' && *puVar75 == 0x4e554f465f544f4e) {
      unaff_R15 = CONCAT62(uVar82,0x194);
      puVar78 = (uint *)0x0;
      goto LAB_0050c5ef;
    }
    if ((char)puVar75[1] == 'D' && *puVar75 == 0x454c4c45434e4143) {
      unaff_R15 = CONCAT62(uVar82,499);
      puVar78 = (uint *)0x0;
      goto LAB_0050c5ef;
    }
    puVar78 = (uint *)((ulonglong)(byte)puVar75[1] ^ 0x53 | *puVar75 ^ 0x534f4c5f41544144);
    if (puVar78 == (uint *)0x0) goto LAB_0050c42f;
    break;
  case 0xb:
    puVar78 = (uint *)(*(ulonglong *)((longlong)puVar75 + 3) ^ 0x454c42414c494156 |
                      *puVar75 ^ 0x414c494156414e55);
    if (puVar78 == (uint *)0x0) {
      unaff_R15 = CONCAT62(uVar82,0x1f7);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 0xc:
    puVar78 = (uint *)((ulonglong)(uint)puVar75[1] ^ 0x45474e41 | *puVar75 ^ 0x525f464f5f54554f);
    if (puVar78 != (uint *)0x0) break;
    goto LAB_0050c614;
  case 0xd:
    puVar78 = (uint *)(*(ulonglong *)((longlong)puVar75 + 5) ^ 0x4445544e454d454c |
                      *puVar75 ^ 0x4d454c504d494e55);
    if (puVar78 == (uint *)0x0) {
      unaff_R15 = CONCAT62(uVar82,0x1f5);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 0xe:
    puVar78 = (uint *)(*(ulonglong *)((longlong)puVar75 + 6) ^ 0x5354534958455f59 |
                      *puVar75 ^ 0x5f59444145524c41);
    if (puVar78 == (uint *)0x0) {
      unaff_R15 = CONCAT62(uVar82,0x199);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 0xf:
    puVar78 = (uint *)(*(ulonglong *)((longlong)puVar75 + 7) ^ 0x444554414349544e |
                      *puVar75 ^ 0x4e45485455414e55);
    if (puVar78 == (uint *)0x0) {
      unaff_R15 = CONCAT62(uVar82,0x191);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 0x10:
    auVar86[0] = -((char)*puVar75 == s_INVALID_ARGUMENToken_00182de0[0]);
    auVar86[1] = -(*(char *)((longlong)puVar75 + 1) == s_INVALID_ARGUMENToken_00182de0[1]);
    auVar86[2] = -(*(char *)((longlong)puVar75 + 2) == s_INVALID_ARGUMENToken_00182de0[2]);
    auVar86[3] = -(*(char *)((longlong)puVar75 + 3) == s_INVALID_ARGUMENToken_00182de0[3]);
    auVar86[4] = -(*(char *)((longlong)puVar75 + 4) == s_INVALID_ARGUMENToken_00182de0[4]);
    auVar86[5] = -(*(char *)((longlong)puVar75 + 5) == s_INVALID_ARGUMENToken_00182de0[5]);
    auVar86[6] = -(*(char *)((longlong)puVar75 + 6) == s_INVALID_ARGUMENToken_00182de0[6]);
    auVar86[7] = -(*(char *)((longlong)puVar75 + 7) == s_INVALID_ARGUMENToken_00182de0[7]);
    auVar86[8] = -((char)puVar75[1] == s_INVALID_ARGUMENToken_00182de0[8]);
    auVar86[9] = -(*(char *)((longlong)puVar75 + 9) == s_INVALID_ARGUMENToken_00182de0[9]);
    auVar86[10] = -(*(char *)((longlong)puVar75 + 10) == s_INVALID_ARGUMENToken_00182de0[10]);
    auVar86[0xb] = -(*(char *)((longlong)puVar75 + 0xb) == s_INVALID_ARGUMENToken_00182de0[0xb]);
    auVar86[0xc] = -(*(char *)((longlong)puVar75 + 0xc) == s_INVALID_ARGUMENToken_00182de0[0xc]);
    auVar86[0xd] = -(*(char *)((longlong)puVar75 + 0xd) == s_INVALID_ARGUMENToken_00182de0[0xd]);
    auVar86[0xe] = -(*(char *)((longlong)puVar75 + 0xe) == s_INVALID_ARGUMENToken_00182de0[0xe]);
    auVar86[0xf] = -(*(char *)((longlong)puVar75 + 0xf) == s_INVALID_ARGUMENToken_00182de0[0xf]);
    goto LAB_0050c5e2;
  case 0x11:
    auVar87[0] = -((char)*puVar75 == s_PERMISSION_DENIE_001842e0[0]);
    auVar87[1] = -(*(char *)((longlong)puVar75 + 1) == s_PERMISSION_DENIE_001842e0[1]);
    auVar87[2] = -(*(char *)((longlong)puVar75 + 2) == s_PERMISSION_DENIE_001842e0[2]);
    auVar87[3] = -(*(char *)((longlong)puVar75 + 3) == s_PERMISSION_DENIE_001842e0[3]);
    auVar87[4] = -(*(char *)((longlong)puVar75 + 4) == s_PERMISSION_DENIE_001842e0[4]);
    auVar87[5] = -(*(char *)((longlong)puVar75 + 5) == s_PERMISSION_DENIE_001842e0[5]);
    auVar87[6] = -(*(char *)((longlong)puVar75 + 6) == s_PERMISSION_DENIE_001842e0[6]);
    auVar87[7] = -(*(char *)((longlong)puVar75 + 7) == s_PERMISSION_DENIE_001842e0[7]);
    auVar87[8] = -((char)puVar75[1] == s_PERMISSION_DENIE_001842e0[8]);
    auVar87[9] = -(*(char *)((longlong)puVar75 + 9) == s_PERMISSION_DENIE_001842e0[9]);
    auVar87[10] = -(*(char *)((longlong)puVar75 + 10) == s_PERMISSION_DENIE_001842e0[10]);
    auVar87[0xb] = -(*(char *)((longlong)puVar75 + 0xb) == s_PERMISSION_DENIE_001842e0[0xb]);
    auVar87[0xc] = -(*(char *)((longlong)puVar75 + 0xc) == s_PERMISSION_DENIE_001842e0[0xc]);
    auVar87[0xd] = -(*(char *)((longlong)puVar75 + 0xd) == s_PERMISSION_DENIE_001842e0[0xd]);
    auVar87[0xe] = -(*(char *)((longlong)puVar75 + 0xe) == s_PERMISSION_DENIE_001842e0[0xe]);
    auVar87[0xf] = -(*(char *)((longlong)puVar75 + 0xf) == s_PERMISSION_DENIE_001842e0[0xf]);
    auVar91[0] = -((char)puVar75[2] == s_D_001839a0[0]);
    auVar91[1] = -(s_D_001839a0[1] == '\0');
    auVar91[2] = -(s_D_001839a0[2] == '\0');
    auVar91[3] = -(s_D_001839a0[3] == '\0');
    auVar91[4] = -(UNK_001839a4 == '\0');
    auVar91[5] = -(UNK_001839a5 == '\0');
    auVar91[6] = -(UNK_001839a6 == '\0');
    auVar91[7] = -(UNK_001839a7 == '\0');
    auVar91[8] = -(UNK_001839a8 == '\0');
    auVar91[9] = -(UNK_001839a9 == '\0');
    auVar91[10] = -(UNK_001839aa == '\0');
    auVar91[0xb] = -(UNK_001839ab == '\0');
    auVar91[0xc] = -(UNK_001839ac == '\0');
    auVar91[0xd] = -(UNK_001839ad == '\0');
    auVar91[0xe] = -(UNK_001839ae == '\0');
    auVar91[0xf] = -(UNK_001839af == '\0');
    auVar91 = auVar91 & auVar87;
    uVar81 = CONCAT62(uVar80,1);
    if ((ushort)((ushort)(SUB161(auVar91 >> 7,0) & 1) | (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar91[0xf] >> 7) << 0xf) == 0xffff) {
      unaff_R15 = CONCAT62(uVar82,0x193);
      goto LAB_0050c5ef;
    }
    auVar88[0] = -((char)*puVar75 == DAT_00183b30);
    auVar88[1] = -(*(char *)((longlong)puVar75 + 1) == UNK_00183b31);
    auVar88[2] = -(*(char *)((longlong)puVar75 + 2) == UNK_00183b32);
    auVar88[3] = -(*(char *)((longlong)puVar75 + 3) == UNK_00183b33);
    auVar88[4] = -(*(char *)((longlong)puVar75 + 4) == UNK_00183b34);
    auVar88[5] = -(*(char *)((longlong)puVar75 + 5) == UNK_00183b35);
    auVar88[6] = -(*(char *)((longlong)puVar75 + 6) == UNK_00183b36);
    auVar88[7] = -(*(char *)((longlong)puVar75 + 7) == UNK_00183b37);
    auVar88[8] = -((char)puVar75[1] == UNK_00183b38);
    auVar88[9] = -(*(char *)((longlong)puVar75 + 9) == UNK_00183b39);
    auVar88[10] = -(*(char *)((longlong)puVar75 + 10) == UNK_00183b3a);
    auVar88[0xb] = -(*(char *)((longlong)puVar75 + 0xb) == UNK_00183b3b);
    auVar88[0xc] = -(*(char *)((longlong)puVar75 + 0xc) == UNK_00183b3c);
    auVar88[0xd] = -(*(char *)((longlong)puVar75 + 0xd) == UNK_00183b3d);
    auVar88[0xe] = -(*(char *)((longlong)puVar75 + 0xe) == UNK_00183b3e);
    auVar88[0xf] = -(*(char *)((longlong)puVar75 + 0xf) == UNK_00183b3f);
    auVar92[0] = -((char)puVar75[2] == s_D_001839a0[0]);
    auVar92[1] = -(s_D_001839a0[1] == '\0');
    auVar92[2] = -(s_D_001839a0[2] == '\0');
    auVar92[3] = -(s_D_001839a0[3] == '\0');
    auVar92[4] = -(UNK_001839a4 == '\0');
    auVar92[5] = -(UNK_001839a5 == '\0');
    auVar92[6] = -(UNK_001839a6 == '\0');
    auVar92[7] = -(UNK_001839a7 == '\0');
    auVar92[8] = -(UNK_001839a8 == '\0');
    auVar92[9] = -(UNK_001839a9 == '\0');
    auVar92[10] = -(UNK_001839aa == '\0');
    auVar92[0xb] = -(UNK_001839ab == '\0');
    auVar92[0xc] = -(UNK_001839ac == '\0');
    auVar92[0xd] = -(UNK_001839ad == '\0');
    auVar92[0xe] = -(UNK_001839ae == '\0');
    auVar92[0xf] = -(UNK_001839af == '\0');
    auVar92 = auVar92 & auVar88;
    if ((ushort)((ushort)(SUB161(auVar92 >> 7,0) & 1) | (ushort)(SUB161(auVar92 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar92 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar92 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar92 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar92 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar92 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar92 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar92 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar92 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar92 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar92 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar92 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar92 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar92 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar92[0xf] >> 7) << 0xf) == 0xffff) {
      unaff_R15 = CONCAT62(uVar82,0x1f8);
      goto LAB_0050c5ef;
    }
    break;
  case 0x12:
    auVar84[0] = -((char)*puVar75 == s_RESOURCE_EXHAUST_00182860[0]);
    auVar84[1] = -(*(char *)((longlong)puVar75 + 1) == s_RESOURCE_EXHAUST_00182860[1]);
    auVar84[2] = -(*(char *)((longlong)puVar75 + 2) == s_RESOURCE_EXHAUST_00182860[2]);
    auVar84[3] = -(*(char *)((longlong)puVar75 + 3) == s_RESOURCE_EXHAUST_00182860[3]);
    auVar84[4] = -(*(char *)((longlong)puVar75 + 4) == s_RESOURCE_EXHAUST_00182860[4]);
    auVar84[5] = -(*(char *)((longlong)puVar75 + 5) == s_RESOURCE_EXHAUST_00182860[5]);
    auVar84[6] = -(*(char *)((longlong)puVar75 + 6) == s_RESOURCE_EXHAUST_00182860[6]);
    auVar84[7] = -(*(char *)((longlong)puVar75 + 7) == s_RESOURCE_EXHAUST_00182860[7]);
    auVar84[8] = -((char)puVar75[1] == s_RESOURCE_EXHAUST_00182860[8]);
    auVar84[9] = -(*(char *)((longlong)puVar75 + 9) == s_RESOURCE_EXHAUST_00182860[9]);
    auVar84[10] = -(*(char *)((longlong)puVar75 + 10) == s_RESOURCE_EXHAUST_00182860[10]);
    auVar84[0xb] = -(*(char *)((longlong)puVar75 + 0xb) == s_RESOURCE_EXHAUST_00182860[0xb]);
    auVar84[0xc] = -(*(char *)((longlong)puVar75 + 0xc) == s_RESOURCE_EXHAUST_00182860[0xc]);
    auVar84[0xd] = -(*(char *)((longlong)puVar75 + 0xd) == s_RESOURCE_EXHAUST_00182860[0xd]);
    auVar84[0xe] = -(*(char *)((longlong)puVar75 + 0xe) == s_RESOURCE_EXHAUST_00182860[0xe]);
    auVar84[0xf] = -(*(char *)((longlong)puVar75 + 0xf) == s_RESOURCE_EXHAUST_00182860[0xf]);
    auVar89[0] = -((char)puVar75[2] == s_ED_001826f0[0]);
    auVar89[1] = -((char)(puVar75[2] >> 8) == s_ED_001826f0[1]);
    auVar89[2] = -(s_ED_001826f0[2] == '\0');
    auVar89[3] = -(s_ED_001826f0[3] == '\0');
    auVar89[4] = -(UNK_001826f4 == '\0');
    auVar89[5] = -(UNK_001826f5 == '\0');
    auVar89[6] = -(UNK_001826f6 == '\0');
    auVar89[7] = -(UNK_001826f7 == '\0');
    auVar89[8] = -(UNK_001826f8 == '\0');
    auVar89[9] = -(UNK_001826f9 == '\0');
    auVar89[10] = -(UNK_001826fa == '\0');
    auVar89[0xb] = -(UNK_001826fb == '\0');
    auVar89[0xc] = -(UNK_001826fc == '\0');
    auVar89[0xd] = -(UNK_001826fd == '\0');
    auVar89[0xe] = -(UNK_001826fe == '\0');
    auVar89[0xf] = -(UNK_001826ff == '\0');
    auVar89 = auVar89 & auVar84;
    if ((ushort)((ushort)(SUB161(auVar89 >> 7,0) & 1) | (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar89[0xf] >> 7) << 0xf) == 0xffff) {
      unaff_R15 = CONCAT62(uVar82,0x1ad);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
    break;
  case 0x13:
    auVar90[0] = -(*(char *)((longlong)puVar75 + 3) == s_LED_PRECONDITION_00183d70[0]);
    auVar90[1] = -(*(char *)((longlong)puVar75 + 4) == s_LED_PRECONDITION_00183d70[1]);
    auVar90[2] = -(*(char *)((longlong)puVar75 + 5) == s_LED_PRECONDITION_00183d70[2]);
    auVar90[3] = -(*(char *)((longlong)puVar75 + 6) == s_LED_PRECONDITION_00183d70[3]);
    auVar90[4] = -(*(char *)((longlong)puVar75 + 7) == s_LED_PRECONDITION_00183d70[4]);
    auVar90[5] = -((char)puVar75[1] == s_LED_PRECONDITION_00183d70[5]);
    auVar90[6] = -(*(char *)((longlong)puVar75 + 9) == s_LED_PRECONDITION_00183d70[6]);
    auVar90[7] = -(*(char *)((longlong)puVar75 + 10) == s_LED_PRECONDITION_00183d70[7]);
    auVar90[8] = -(*(char *)((longlong)puVar75 + 0xb) == s_LED_PRECONDITION_00183d70[8]);
    auVar90[9] = -(*(char *)((longlong)puVar75 + 0xc) == s_LED_PRECONDITION_00183d70[9]);
    auVar90[10] = -(*(char *)((longlong)puVar75 + 0xd) == s_LED_PRECONDITION_00183d70[10]);
    auVar90[0xb] = -(*(char *)((longlong)puVar75 + 0xe) == s_LED_PRECONDITION_00183d70[0xb]);
    auVar90[0xc] = -(*(char *)((longlong)puVar75 + 0xf) == s_LED_PRECONDITION_00183d70[0xc]);
    auVar90[0xd] = -((char)puVar75[2] == s_LED_PRECONDITION_00183d70[0xd]);
    auVar90[0xe] = -(*(char *)((longlong)puVar75 + 0x11) == s_LED_PRECONDITION_00183d70[0xe]);
    auVar90[0xf] = -(*(char *)((longlong)puVar75 + 0x12) == s_LED_PRECONDITION_00183d70[0xf]);
    auVar85[0] = -((char)*puVar75 == s_FAILED_PRECONDIT_00183d80[0]);
    auVar85[1] = -(*(char *)((longlong)puVar75 + 1) == s_FAILED_PRECONDIT_00183d80[1]);
    auVar85[2] = -(*(char *)((longlong)puVar75 + 2) == s_FAILED_PRECONDIT_00183d80[2]);
    auVar85[3] = -(*(char *)((longlong)puVar75 + 3) == s_FAILED_PRECONDIT_00183d80[3]);
    auVar85[4] = -(*(char *)((longlong)puVar75 + 4) == s_FAILED_PRECONDIT_00183d80[4]);
    auVar85[5] = -(*(char *)((longlong)puVar75 + 5) == s_FAILED_PRECONDIT_00183d80[5]);
    auVar85[6] = -(*(char *)((longlong)puVar75 + 6) == s_FAILED_PRECONDIT_00183d80[6]);
    auVar85[7] = -(*(char *)((longlong)puVar75 + 7) == s_FAILED_PRECONDIT_00183d80[7]);
    auVar85[8] = -((char)puVar75[1] == s_FAILED_PRECONDIT_00183d80[8]);
    auVar85[9] = -(*(char *)((longlong)puVar75 + 9) == s_FAILED_PRECONDIT_00183d80[9]);
    auVar85[10] = -(*(char *)((longlong)puVar75 + 10) == s_FAILED_PRECONDIT_00183d80[10]);
    auVar85[0xb] = -(*(char *)((longlong)puVar75 + 0xb) == s_FAILED_PRECONDIT_00183d80[0xb]);
    auVar85[0xc] = -(*(char *)((longlong)puVar75 + 0xc) == s_FAILED_PRECONDIT_00183d80[0xc]);
    auVar85[0xd] = -(*(char *)((longlong)puVar75 + 0xd) == s_FAILED_PRECONDIT_00183d80[0xd]);
    auVar85[0xe] = -(*(char *)((longlong)puVar75 + 0xe) == s_FAILED_PRECONDIT_00183d80[0xe]);
    auVar85[0xf] = -(*(char *)((longlong)puVar75 + 0xf) == s_FAILED_PRECONDIT_00183d80[0xf]);
    auVar86 = auVar85 & auVar90;
LAB_0050c5e2:
    if ((ushort)((ushort)(SUB161(auVar86 >> 7,0) & 1) | (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar86[0xf] >> 7) << 0xf) == 0xffff) {
LAB_0050c614:
      unaff_R15 = CONCAT62(uVar82,400);
      uVar81 = CONCAT62(uVar80,1);
      goto LAB_0050c5ef;
    }
  }
  uVar81 = 0;
LAB_0050c5ef:
  (*(code *)PTR___rust_dealloc_00798fc8)(puVar78,1);
  uVar77 = unaff_R15;
LAB_0050c600:
  auVar134._0_8_ = uVar81 & 0xffffffff;
  auVar134._8_8_ = uVar77 & 0xffffffff;
  return auVar134;
}


