// 005215b0 from_model

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model */

ulonglong __rustcall <craggemini_core[66f3c71560d70857]::resume::ModelFamily>::from_model(void)

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
  undefined1 auVar43 [16];
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
  char cVar60;
  uint uVar61;
  longlong lVar62;
  ulonglong uVar63;
  ulonglong extraout_RDX;
  ulonglong uVar64;
  undefined8 unaff_RBP;
  undefined7 uVar65;
  undefined1 uVar66;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 uVar67;
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
  
  ::<str>::trim_matches::<<char>::is_whitespace>();
  uVar66 = extraout_RDX == 0;
  if (-1 < (longlong)extraout_RDX) goto LAB_005215d4;
  do {
    uVar66 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005215d4:
    uVar65 = (undefined7)((ulonglong)unaff_RBP >> 8);
    if ((bool)uVar66) {
      uVar64 = CONCAT71(uVar65,3);
      goto LAB_005217e6;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar62 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar62 == 0);
  (*(code *)PTR_memcpy_00799008)();
  bVar59 = UNK_0018483f;
  bVar58 = UNK_0018483e;
  bVar57 = UNK_0018483d;
  bVar56 = UNK_0018483c;
  bVar55 = UNK_0018483b;
  bVar54 = UNK_0018483a;
  bVar53 = UNK_00184839;
  bVar52 = UNK_00184838;
  bVar51 = UNK_00184837;
  bVar50 = UNK_00184836;
  bVar49 = UNK_00184835;
  bVar48 = UNK_00184834;
  bVar47 = UNK_00184833;
  bVar46 = UNK_00184832;
  bVar45 = UNK_00184831;
  bVar44 = DAT_00184830;
  auVar43 = _DAT_00183f60;
  bVar75 = UNK_0018303f;
  bVar74 = UNK_0018303e;
  bVar73 = UNK_0018303d;
  bVar72 = UNK_0018303c;
  bVar71 = UNK_0018303b;
  bVar70 = UNK_0018303a;
  bVar69 = UNK_00183039;
  bVar68 = UNK_00183038;
  bVar42 = UNK_00183037;
  bVar41 = UNK_00183036;
  bVar40 = UNK_00183035;
  bVar39 = UNK_00183034;
  bVar38 = UNK_00183033;
  bVar37 = UNK_00183032;
  bVar36 = UNK_00183031;
  bVar35 = DAT_00183030;
  if (extraout_RDX < 8) {
    uVar63 = 0;
  }
  else {
    if (extraout_RDX < 0x20) {
      uVar64 = 0;
LAB_005216c9:
      uVar67 = s__001846a0._0_8_;
      auVar43 = _DAT_00184160;
      bVar42 = UNK_001840c7;
      bVar41 = UNK_001840c6;
      bVar40 = UNK_001840c5;
      bVar39 = UNK_001840c4;
      bVar38 = UNK_001840c3;
      bVar37 = UNK_001840c2;
      bVar36 = UNK_001840c1;
      bVar35 = DAT_001840c0;
      uVar63 = extraout_RDX & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)(lVar62 + uVar64);
        bVar68 = (char)uVar3 + auVar43[0];
        bVar69 = (char)(uVar3 >> 8) + auVar43[1];
        bVar70 = (char)(uVar3 >> 0x10) + auVar43[2];
        bVar71 = (char)(uVar3 >> 0x18) + auVar43[3];
        bVar72 = (char)(uVar3 >> 0x20) + auVar43[4];
        bVar73 = (char)(uVar3 >> 0x28) + auVar43[5];
        bVar74 = (char)(uVar3 >> 0x30) + auVar43[6];
        bVar75 = (char)(uVar3 >> 0x38) + auVar43[7];
        *(ulonglong *)(lVar62 + uVar64) =
             ~CONCAT17(-((byte)((bVar75 < bVar42) * bVar42 | (bVar75 >= bVar42) * bVar75) == bVar75)
                       ,CONCAT16(-((byte)((bVar74 < bVar41) * bVar41 | (bVar74 >= bVar41) * bVar74)
                                  == bVar74),
                                 CONCAT15(-((byte)((bVar73 < bVar40) * bVar40 |
                                                  (bVar73 >= bVar40) * bVar73) == bVar73),
                                          CONCAT14(-((byte)((bVar72 < bVar39) * bVar39 |
                                                           (bVar72 >= bVar39) * bVar72) == bVar72),
                                                   CONCAT13(-((byte)((bVar71 < bVar38) * bVar38 |
                                                                    (bVar71 >= bVar38) * bVar71) ==
                                                             bVar71),CONCAT12(-((byte)((bVar70 < 
                                                  bVar37) * bVar37 | (bVar70 >= bVar37) * bVar70) ==
                                                  bVar70),CONCAT11(-((byte)((bVar69 < bVar36) *
                                                                            bVar36 | (bVar69 >=
                                                                                     bVar36) * 
                                                  bVar69) == bVar69),
                                                  -((byte)((bVar68 < bVar35) * bVar35 |
                                                          (bVar68 >= bVar35) * bVar68) == bVar68))))
                                                  )))) & uVar67 | uVar3;
        uVar64 = uVar64 + 8;
        if (uVar63 == uVar64) goto LAB_0052173d;
      } while( true );
    }
    uVar63 = extraout_RDX & 0x7fffffffffffffe0;
    uVar64 = 0;
    do {
      pbVar1 = (byte *)(lVar62 + uVar64);
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
      pbVar2 = (byte *)(lVar62 + 0x10 + uVar64);
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
      bVar76 = *pbVar1 + auVar43[0];
      bVar77 = bVar4 + auVar43[1];
      bVar78 = bVar5 + auVar43[2];
      bVar79 = bVar6 + auVar43[3];
      bVar80 = bVar7 + auVar43[4];
      bVar81 = bVar8 + auVar43[5];
      bVar82 = bVar9 + auVar43[6];
      bVar83 = bVar10 + auVar43[7];
      bVar84 = bVar11 + auVar43[8];
      bVar85 = bVar12 + auVar43[9];
      bVar86 = bVar13 + auVar43[10];
      bVar87 = bVar14 + auVar43[0xb];
      bVar88 = bVar15 + auVar43[0xc];
      bVar89 = bVar16 + auVar43[0xd];
      bVar90 = bVar17 + auVar43[0xe];
      bVar91 = bVar18 + auVar43[0xf];
      bVar92 = bVar19 + auVar43[0];
      bVar93 = bVar20 + auVar43[1];
      bVar94 = bVar21 + auVar43[2];
      bVar95 = bVar22 + auVar43[3];
      bVar96 = bVar23 + auVar43[4];
      bVar97 = bVar24 + auVar43[5];
      bVar98 = bVar25 + auVar43[6];
      bVar99 = bVar26 + auVar43[7];
      bVar100 = bVar27 + auVar43[8];
      bVar101 = bVar28 + auVar43[9];
      bVar102 = bVar29 + auVar43[10];
      bVar103 = bVar30 + auVar43[0xb];
      bVar104 = bVar31 + auVar43[0xc];
      bVar105 = bVar32 + auVar43[0xd];
      bVar106 = bVar33 + auVar43[0xe];
      bVar107 = bVar34 + auVar43[0xf];
      pbVar2 = (byte *)(lVar62 + uVar64);
      *pbVar2 = -((byte)((bVar35 < bVar76) * bVar35 | (bVar35 >= bVar76) * bVar76) == bVar76) &
                bVar44 | *pbVar1;
      pbVar2[1] = -((byte)((bVar36 < bVar77) * bVar36 | (bVar36 >= bVar77) * bVar77) == bVar77) &
                  bVar45 | bVar4;
      pbVar2[2] = -((byte)((bVar37 < bVar78) * bVar37 | (bVar37 >= bVar78) * bVar78) == bVar78) &
                  bVar46 | bVar5;
      pbVar2[3] = -((byte)((bVar38 < bVar79) * bVar38 | (bVar38 >= bVar79) * bVar79) == bVar79) &
                  bVar47 | bVar6;
      pbVar2[4] = -((byte)((bVar39 < bVar80) * bVar39 | (bVar39 >= bVar80) * bVar80) == bVar80) &
                  bVar48 | bVar7;
      pbVar2[5] = -((byte)((bVar40 < bVar81) * bVar40 | (bVar40 >= bVar81) * bVar81) == bVar81) &
                  bVar49 | bVar8;
      pbVar2[6] = -((byte)((bVar41 < bVar82) * bVar41 | (bVar41 >= bVar82) * bVar82) == bVar82) &
                  bVar50 | bVar9;
      pbVar2[7] = -((byte)((bVar42 < bVar83) * bVar42 | (bVar42 >= bVar83) * bVar83) == bVar83) &
                  bVar51 | bVar10;
      pbVar2[8] = -((byte)((bVar68 < bVar84) * bVar68 | (bVar68 >= bVar84) * bVar84) == bVar84) &
                  bVar52 | bVar11;
      pbVar2[9] = -((byte)((bVar69 < bVar85) * bVar69 | (bVar69 >= bVar85) * bVar85) == bVar85) &
                  bVar53 | bVar12;
      pbVar2[10] = -((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) == bVar86) &
                   bVar54 | bVar13;
      pbVar2[0xb] = -((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) == bVar87) &
                    bVar55 | bVar14;
      pbVar2[0xc] = -((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88) &
                    bVar56 | bVar15;
      pbVar2[0xd] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89) &
                    bVar57 | bVar16;
      pbVar2[0xe] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90) &
                    bVar58 | bVar17;
      pbVar2[0xf] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91) &
                    bVar59 | bVar18;
      pbVar1 = (byte *)(lVar62 + 0x10 + uVar64);
      *pbVar1 = -((byte)((bVar35 < bVar92) * bVar35 | (bVar35 >= bVar92) * bVar92) == bVar92) &
                bVar44 | bVar19;
      pbVar1[1] = -((byte)((bVar36 < bVar93) * bVar36 | (bVar36 >= bVar93) * bVar93) == bVar93) &
                  bVar45 | bVar20;
      pbVar1[2] = -((byte)((bVar37 < bVar94) * bVar37 | (bVar37 >= bVar94) * bVar94) == bVar94) &
                  bVar46 | bVar21;
      pbVar1[3] = -((byte)((bVar38 < bVar95) * bVar38 | (bVar38 >= bVar95) * bVar95) == bVar95) &
                  bVar47 | bVar22;
      pbVar1[4] = -((byte)((bVar39 < bVar96) * bVar39 | (bVar39 >= bVar96) * bVar96) == bVar96) &
                  bVar48 | bVar23;
      pbVar1[5] = -((byte)((bVar40 < bVar97) * bVar40 | (bVar40 >= bVar97) * bVar97) == bVar97) &
                  bVar49 | bVar24;
      pbVar1[6] = -((byte)((bVar41 < bVar98) * bVar41 | (bVar41 >= bVar98) * bVar98) == bVar98) &
                  bVar50 | bVar25;
      pbVar1[7] = -((byte)((bVar42 < bVar99) * bVar42 | (bVar42 >= bVar99) * bVar99) == bVar99) &
                  bVar51 | bVar26;
      pbVar1[8] = -((byte)((bVar68 < bVar100) * bVar68 | (bVar68 >= bVar100) * bVar100) == bVar100)
                  & bVar52 | bVar27;
      pbVar1[9] = -((byte)((bVar69 < bVar101) * bVar69 | (bVar69 >= bVar101) * bVar101) == bVar101)
                  & bVar53 | bVar28;
      pbVar1[10] = -((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) == bVar102)
                   & bVar54 | bVar29;
      pbVar1[0xb] = -((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) == bVar103
                     ) & bVar55 | bVar30;
      pbVar1[0xc] = -((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) == bVar104
                     ) & bVar56 | bVar31;
      pbVar1[0xd] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) == bVar105
                     ) & bVar57 | bVar32;
      pbVar1[0xe] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) == bVar106
                     ) & bVar58 | bVar33;
      pbVar1[0xf] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) == bVar107
                     ) & bVar59 | bVar34;
      uVar64 = uVar64 + 0x20;
    } while (uVar63 != uVar64);
    if (extraout_RDX == uVar63) goto LAB_00521742;
    uVar64 = uVar63;
    if ((extraout_RDX & 0x18) != 0) goto LAB_005216c9;
  }
  do {
    *(byte *)(lVar62 + uVar63) =
         ((byte)(*(byte *)(lVar62 + uVar63) + 0xbf) < 0x1a) << 5 | *(byte *)(lVar62 + uVar63);
    uVar63 = uVar63 + 1;
LAB_0052173d:
  } while (extraout_RDX != uVar63);
LAB_00521742:
  cVar60 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                     (&anon_ec7f14c74815bf4c93b295cfd0665412_26_llvm_7806621557641746444,6,lVar62,
                      extraout_RDX);
  if (cVar60 == '\0') {
    cVar60 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       (&anon_ec7f14c74815bf4c93b295cfd0665412_27_llvm_7806621557641746444,6,lVar62,
                        extraout_RDX);
    uVar64 = CONCAT71(uVar65,1);
    uVar67 = extraout_XMM0_Qa_00;
    if ((cVar60 == '\0') &&
       (cVar60 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                           (anon_ec7f14c74815bf4c93b295cfd0665412_215_llvm_7806621557641746444,0x16,
                            lVar62,extraout_RDX), uVar67 = extraout_XMM0_Qa_01, cVar60 == '\0')) {
      cVar60 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         (&anon_ec7f14c74815bf4c93b295cfd0665412_28_llvm_7806621557641746444,6,
                          lVar62,extraout_RDX);
      uVar64 = CONCAT71(uVar65,2);
      uVar67 = extraout_XMM0_Qa_02;
      if (cVar60 == '\0') {
        uVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                           (anon_ec7f14c74815bf4c93b295cfd0665412_216_llvm_7806621557641746444,0x12,
                            lVar62,extraout_RDX);
        uVar64 = (ulonglong)uVar61 ^ 3;
        uVar67 = extraout_XMM0_Qa_03;
      }
    }
  }
  else {
    uVar64 = 0;
    uVar67 = extraout_XMM0_Qa;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar67,1);
LAB_005217e6:
  return uVar64 & 0xffffffff;
}


