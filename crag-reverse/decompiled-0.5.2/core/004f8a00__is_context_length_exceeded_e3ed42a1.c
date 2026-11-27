// 004f8a00 is_context_length_exceeded

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::is_context_length_exceeded */

ulonglong __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::is_context_length_exceeded(longlong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
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
  int iVar63;
  uint uVar64;
  short *psVar65;
  longlong lVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong unaff_RBP;
  undefined7 uVar70;
  undefined8 uVar71;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
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
  byte bVar109;
  byte bVar110;
  byte bVar111;
  char local_b0 [24];
  undefined1 local_98 [104];
  
  lVar5 = *(longlong *)(param_1 + 0x30);
  psVar65 = (short *)(param_1 + 0x38);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x170) != '\0')) {
    psVar65 = (short *)(lVar5 + 0x172);
  }
  if ((*psVar65 == 0x19d) || (*psVar65 == 400)) {
    uVar6 = *(ulonglong *)(param_1 + 0x28);
    if (-1 < (longlong)uVar6) {
      if (uVar6 == 0) {
        lVar66 = 1;
        goto LAB_004f8c37;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar66 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar66 != 0) {
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
        bVar79 = UNK_0018303f;
        bVar78 = UNK_0018303e;
        bVar77 = UNK_0018303d;
        bVar76 = UNK_0018303c;
        bVar75 = UNK_0018303b;
        bVar74 = UNK_0018303a;
        bVar73 = UNK_00183039;
        bVar72 = UNK_00183038;
        bVar44 = UNK_00183037;
        bVar43 = UNK_00183036;
        bVar42 = UNK_00183035;
        bVar41 = UNK_00183034;
        bVar40 = UNK_00183033;
        bVar39 = UNK_00183032;
        bVar38 = UNK_00183031;
        bVar4 = DAT_00183030;
        if (uVar6 < 8) {
          uVar67 = 0;
LAB_004f8bb3:
          do {
            bVar4 = *(byte *)(lVar66 + uVar67);
            uVar68 = (ulonglong)bVar4;
            *(byte *)(lVar66 + uVar67) = ((byte)(bVar4 + 0xbf) < 0x1a) << 5 | bVar4;
            uVar67 = uVar67 + 1;
LAB_004f8bcd:
          } while (uVar6 != uVar67);
        }
        else {
          uVar68 = 0x7fffffffffffffe0;
          if (uVar6 < 0x20) {
            uVar69 = 0;
LAB_004f8b59:
            uVar71 = s__001846a0._0_8_;
            auVar45 = _DAT_00184160;
            bVar44 = UNK_001840c7;
            bVar43 = UNK_001840c6;
            bVar42 = UNK_001840c5;
            bVar41 = UNK_001840c4;
            bVar40 = UNK_001840c3;
            bVar39 = UNK_001840c2;
            bVar38 = UNK_001840c1;
            bVar4 = DAT_001840c0;
            uVar68 = 0x7ffffffffffffff8;
            uVar67 = uVar6 & 0x7ffffffffffffff8;
            do {
              uVar3 = *(ulonglong *)(lVar66 + uVar69);
              bVar72 = (char)uVar3 + auVar45[0];
              bVar73 = (char)(uVar3 >> 8) + auVar45[1];
              bVar74 = (char)(uVar3 >> 0x10) + auVar45[2];
              bVar75 = (char)(uVar3 >> 0x18) + auVar45[3];
              bVar76 = (char)(uVar3 >> 0x20) + auVar45[4];
              bVar77 = (char)(uVar3 >> 0x28) + auVar45[5];
              bVar78 = (char)(uVar3 >> 0x30) + auVar45[6];
              bVar79 = (char)(uVar3 >> 0x38) + auVar45[7];
              *(ulonglong *)(lVar66 + uVar69) =
                   ~CONCAT17(-((byte)((bVar79 < bVar44) * bVar44 | (bVar79 >= bVar44) * bVar79) ==
                              bVar79),CONCAT16(-((byte)((bVar78 < bVar43) * bVar43 |
                                                       (bVar78 >= bVar43) * bVar78) == bVar78),
                                               CONCAT15(-((byte)((bVar77 < bVar42) * bVar42 |
                                                                (bVar77 >= bVar42) * bVar77) ==
                                                         bVar77),CONCAT14(-((byte)((bVar76 < bVar41)
                                                                                   * bVar41 |
                                                                                  (bVar76 >= bVar41)
                                                                                  * bVar76) ==
                                                                           bVar76),CONCAT13(-((byte)
                                                  ((bVar75 < bVar40) * bVar40 |
                                                  (bVar75 >= bVar40) * bVar75) == bVar75),
                                                  CONCAT12(-((byte)((bVar74 < bVar39) * bVar39 |
                                                                   (bVar74 >= bVar39) * bVar74) ==
                                                            bVar74),CONCAT11(-((byte)((bVar73 < 
                                                  bVar38) * bVar38 | (bVar73 >= bVar38) * bVar73) ==
                                                  bVar73),-((byte)((bVar72 < bVar4) * bVar4 |
                                                                  (bVar72 >= bVar4) * bVar72) ==
                                                           bVar72)))))))) & uVar71 | uVar3;
              uVar69 = uVar69 + 8;
              if (uVar67 == uVar69) goto LAB_004f8bcd;
            } while( true );
          }
          uVar67 = uVar6 & 0x7fffffffffffffe0;
          uVar69 = 0;
          do {
            pbVar1 = (byte *)(lVar66 + uVar69);
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
            pbVar2 = (byte *)(lVar66 + 0x10 + uVar69);
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
            bVar80 = *pbVar1 + auVar45[0];
            bVar81 = bVar7 + auVar45[1];
            bVar82 = bVar8 + auVar45[2];
            bVar83 = bVar9 + auVar45[3];
            bVar84 = bVar10 + auVar45[4];
            bVar85 = bVar11 + auVar45[5];
            bVar86 = bVar12 + auVar45[6];
            bVar87 = bVar13 + auVar45[7];
            bVar88 = bVar14 + auVar45[8];
            bVar89 = bVar15 + auVar45[9];
            bVar90 = bVar16 + auVar45[10];
            bVar91 = bVar17 + auVar45[0xb];
            bVar92 = bVar18 + auVar45[0xc];
            bVar93 = bVar19 + auVar45[0xd];
            bVar94 = bVar20 + auVar45[0xe];
            bVar95 = bVar21 + auVar45[0xf];
            bVar96 = bVar22 + auVar45[0];
            bVar97 = bVar23 + auVar45[1];
            bVar98 = bVar24 + auVar45[2];
            bVar99 = bVar25 + auVar45[3];
            bVar100 = bVar26 + auVar45[4];
            bVar101 = bVar27 + auVar45[5];
            bVar102 = bVar28 + auVar45[6];
            bVar103 = bVar29 + auVar45[7];
            bVar104 = bVar30 + auVar45[8];
            bVar105 = bVar31 + auVar45[9];
            bVar106 = bVar32 + auVar45[10];
            bVar107 = bVar33 + auVar45[0xb];
            bVar108 = bVar34 + auVar45[0xc];
            bVar109 = bVar35 + auVar45[0xd];
            bVar110 = bVar36 + auVar45[0xe];
            bVar111 = bVar37 + auVar45[0xf];
            pbVar2 = (byte *)(lVar66 + uVar69);
            *pbVar2 = -((byte)((bVar4 < bVar80) * bVar4 | (bVar4 >= bVar80) * bVar80) == bVar80) &
                      bVar46 | *pbVar1;
            pbVar2[1] = -((byte)((bVar38 < bVar81) * bVar38 | (bVar38 >= bVar81) * bVar81) == bVar81
                         ) & bVar47 | bVar7;
            pbVar2[2] = -((byte)((bVar39 < bVar82) * bVar39 | (bVar39 >= bVar82) * bVar82) == bVar82
                         ) & bVar48 | bVar8;
            pbVar2[3] = -((byte)((bVar40 < bVar83) * bVar40 | (bVar40 >= bVar83) * bVar83) == bVar83
                         ) & bVar49 | bVar9;
            pbVar2[4] = -((byte)((bVar41 < bVar84) * bVar41 | (bVar41 >= bVar84) * bVar84) == bVar84
                         ) & bVar50 | bVar10;
            pbVar2[5] = -((byte)((bVar42 < bVar85) * bVar42 | (bVar42 >= bVar85) * bVar85) == bVar85
                         ) & bVar51 | bVar11;
            pbVar2[6] = -((byte)((bVar43 < bVar86) * bVar43 | (bVar43 >= bVar86) * bVar86) == bVar86
                         ) & bVar52 | bVar12;
            pbVar2[7] = -((byte)((bVar44 < bVar87) * bVar44 | (bVar44 >= bVar87) * bVar87) == bVar87
                         ) & bVar53 | bVar13;
            pbVar2[8] = -((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88
                         ) & bVar54 | bVar14;
            pbVar2[9] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89
                         ) & bVar55 | bVar15;
            pbVar2[10] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) ==
                          bVar90) & bVar56 | bVar16;
            pbVar2[0xb] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) ==
                           bVar91) & bVar57 | bVar17;
            pbVar2[0xc] = -((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) ==
                           bVar92) & bVar58 | bVar18;
            pbVar2[0xd] = -((byte)((bVar77 < bVar93) * bVar77 | (bVar77 >= bVar93) * bVar93) ==
                           bVar93) & bVar59 | bVar19;
            pbVar2[0xe] = -((byte)((bVar78 < bVar94) * bVar78 | (bVar78 >= bVar94) * bVar94) ==
                           bVar94) & bVar60 | bVar20;
            pbVar2[0xf] = -((byte)((bVar79 < bVar95) * bVar79 | (bVar79 >= bVar95) * bVar95) ==
                           bVar95) & bVar61 | bVar21;
            pbVar1 = (byte *)(lVar66 + 0x10 + uVar69);
            *pbVar1 = -((byte)((bVar4 < bVar96) * bVar4 | (bVar4 >= bVar96) * bVar96) == bVar96) &
                      bVar46 | bVar22;
            pbVar1[1] = -((byte)((bVar38 < bVar97) * bVar38 | (bVar38 >= bVar97) * bVar97) == bVar97
                         ) & bVar47 | bVar23;
            pbVar1[2] = -((byte)((bVar39 < bVar98) * bVar39 | (bVar39 >= bVar98) * bVar98) == bVar98
                         ) & bVar48 | bVar24;
            pbVar1[3] = -((byte)((bVar40 < bVar99) * bVar40 | (bVar40 >= bVar99) * bVar99) == bVar99
                         ) & bVar49 | bVar25;
            pbVar1[4] = -((byte)((bVar41 < bVar100) * bVar41 | (bVar41 >= bVar100) * bVar100) ==
                         bVar100) & bVar50 | bVar26;
            pbVar1[5] = -((byte)((bVar42 < bVar101) * bVar42 | (bVar42 >= bVar101) * bVar101) ==
                         bVar101) & bVar51 | bVar27;
            pbVar1[6] = -((byte)((bVar43 < bVar102) * bVar43 | (bVar43 >= bVar102) * bVar102) ==
                         bVar102) & bVar52 | bVar28;
            pbVar1[7] = -((byte)((bVar44 < bVar103) * bVar44 | (bVar44 >= bVar103) * bVar103) ==
                         bVar103) & bVar53 | bVar29;
            pbVar1[8] = -((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) ==
                         bVar104) & bVar54 | bVar30;
            pbVar1[9] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) ==
                         bVar105) & bVar55 | bVar31;
            pbVar1[10] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                          bVar106) & bVar56 | bVar32;
            pbVar1[0xb] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) ==
                           bVar107) & bVar57 | bVar33;
            pbVar1[0xc] = -((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) ==
                           bVar108) & bVar58 | bVar34;
            pbVar1[0xd] = -((byte)((bVar77 < bVar109) * bVar77 | (bVar77 >= bVar109) * bVar109) ==
                           bVar109) & bVar59 | bVar35;
            pbVar1[0xe] = -((byte)((bVar78 < bVar110) * bVar78 | (bVar78 >= bVar110) * bVar110) ==
                           bVar110) & bVar60 | bVar36;
            pbVar1[0xf] = -((byte)((bVar79 < bVar111) * bVar79 | (bVar79 >= bVar111) * bVar111) ==
                           bVar111) & bVar61 | bVar37;
            uVar69 = uVar69 + 0x20;
          } while (uVar67 != uVar69);
          if (uVar6 != uVar67) {
            uVar69 = uVar67;
            if ((uVar6 & 0x18) != 0) goto LAB_004f8b59;
            goto LAB_004f8bb3;
          }
        }
        uVar70 = (undefined7)(unaff_RBP >> 8);
        if (uVar6 < 0x25) {
          if ((uVar6 != 0x24) || (iVar63 = (*(code *)PTR_bcmp_00799020)(uVar68,0x24), iVar63 != 0))
          goto LAB_004f8c37;
          unaff_RBP = CONCAT71(uVar70,1);
          uVar71 = extraout_XMM0_Qa;
        }
        else {
          (*(code *)PTR_new_00799a18)("exceeds the maximum number of tokens",uVar6,0x24);
          uVar71 = <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
                   ::next_match(local_b0,local_98);
          unaff_RBP = CONCAT71(uVar70,1);
          if (local_b0[0] == '\0') {
LAB_004f8c37:
            cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                               ("input token count",0x11,lVar66,uVar6);
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            uVar71 = extraout_XMM0_Qa_00;
            if (((((cVar62 == '\0') &&
                  (cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                      ("token count exceeds",0x13,lVar66,uVar6),
                  uVar71 = extraout_XMM0_Qa_01, cVar62 == '\0')) &&
                 (cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                     ("context length",0xe,lVar66,uVar6),
                 uVar71 = extraout_XMM0_Qa_02, cVar62 == '\0')) &&
                ((cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                     ("context_length_exceeded",0x17,lVar66,uVar6),
                 uVar71 = extraout_XMM0_Qa_03, cVar62 == '\0' &&
                 (cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                     ("prompt is too long",0x12,lVar66,uVar6),
                 uVar71 = extraout_XMM0_Qa_04, cVar62 == '\0')))) &&
               (cVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                   ("maximum context",0xf,lVar66,uVar6),
               uVar71 = extraout_XMM0_Qa_05, cVar62 == '\0')) {
              uVar64 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                 ("too many tokens",0xf,lVar66,uVar6);
              unaff_RBP = (ulonglong)uVar64;
              uVar71 = extraout_XMM0_Qa_06;
              if (lVar5 != 0 && (char)uVar64 == '\0') {
                if ((*(longlong *)(lVar5 + 0x28) == -1) || (*(longlong *)(lVar5 + 0x38) != 0x17)) {
                  unaff_RBP = 0;
                }
                else {
                  uVar64 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>
                                     (*(undefined8 *)(lVar5 + 0x30),0x17,"CONTEXT_LENGTH_EXCEEDED",
                                      0x17);
                  unaff_RBP = (ulonglong)uVar64;
                  uVar71 = extraout_XMM0_Qa_07;
                }
              }
            }
            if (uVar6 == 0) goto LAB_004f8d59;
          }
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar71,1);
        goto LAB_004f8d59;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  unaff_RBP = 0;
LAB_004f8d59:
  return unaff_RBP & 0xffffffff;
}


