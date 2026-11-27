// 00510490 text_has_structured_upstream_signal

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::protocol::text_has_structured_upstream_signal */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::protocol::text_has_structured_upstream_signal
          (undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  code *pcVar4;
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
  undefined1 auVar36 [16];
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
  char cVar61;
  uint uVar62;
  longlong lVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  undefined8 unaff_RBP;
  undefined7 uVar66;
  undefined8 uVar67;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
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
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  char local_60;
  undefined7 uStack_5f;
  longlong local_40;
  
  sanitize_blob_text(&local_78,param_1,param_2);
  extract_balanced_error_json(&local_60,local_70,local_68);
  uVar66 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (local_60 == -1) {
    uVar67 = parse_agy_text_error(&local_60,local_70,local_68);
    if (local_40 == -1) {
      cVar61 = has_invalid_thinking_signature(local_70,local_68);
      uVar65 = CONCAT71(uVar66,1);
      uVar67 = extraout_XMM0_Qa;
      if (cVar61 != '\0') goto LAB_005104d8;
      if ((longlong)local_68 < 0) {
LAB_00510571:
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      if (local_68 == 0) {
        lVar63 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar63 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar63 == 0) goto LAB_00510571;
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
        bVar75 = UNK_0018303f;
        bVar74 = UNK_0018303e;
        bVar73 = UNK_0018303d;
        bVar72 = UNK_0018303c;
        bVar71 = UNK_0018303b;
        bVar70 = UNK_0018303a;
        bVar69 = UNK_00183039;
        bVar68 = UNK_00183038;
        bVar44 = UNK_00183037;
        bVar43 = UNK_00183036;
        bVar42 = UNK_00183035;
        bVar41 = UNK_00183034;
        bVar40 = UNK_00183033;
        bVar39 = UNK_00183032;
        bVar38 = UNK_00183031;
        bVar37 = DAT_00183030;
        auVar36 = _DAT_00182cc0;
        if (local_68 < 8) {
          uVar64 = 0;
        }
        else {
          if (local_68 < 0x20) {
            uVar65 = 0;
LAB_0051066b:
            uVar67 = s__001846a0._0_8_;
            bVar44 = UNK_001840c7;
            bVar43 = UNK_001840c6;
            bVar42 = UNK_001840c5;
            bVar41 = UNK_001840c4;
            bVar40 = UNK_001840c3;
            bVar39 = UNK_001840c2;
            bVar38 = UNK_001840c1;
            bVar37 = DAT_001840c0;
            auVar36 = _DAT_001830d0;
            uVar64 = local_68 & 0x7ffffffffffffff8;
            do {
              uVar3 = *(ulonglong *)(lVar63 + uVar65);
              bVar68 = (char)uVar3 + auVar36[0];
              bVar69 = (char)(uVar3 >> 8) + auVar36[1];
              bVar70 = (char)(uVar3 >> 0x10) + auVar36[2];
              bVar71 = (char)(uVar3 >> 0x18) + auVar36[3];
              bVar72 = (char)(uVar3 >> 0x20) + auVar36[4];
              bVar73 = (char)(uVar3 >> 0x28) + auVar36[5];
              bVar74 = (char)(uVar3 >> 0x30) + auVar36[6];
              bVar75 = (char)(uVar3 >> 0x38) + auVar36[7];
              *(ulonglong *)(lVar63 + uVar65) =
                   ~CONCAT17(-((byte)((bVar75 < bVar44) * bVar44 | (bVar75 >= bVar44) * bVar75) ==
                              bVar75),CONCAT16(-((byte)((bVar74 < bVar43) * bVar43 |
                                                       (bVar74 >= bVar43) * bVar74) == bVar74),
                                               CONCAT15(-((byte)((bVar73 < bVar42) * bVar42 |
                                                                (bVar73 >= bVar42) * bVar73) ==
                                                         bVar73),CONCAT14(-((byte)((bVar72 < bVar41)
                                                                                   * bVar41 |
                                                                                  (bVar72 >= bVar41)
                                                                                  * bVar72) ==
                                                                           bVar72),CONCAT13(-((byte)
                                                  ((bVar71 < bVar40) * bVar40 |
                                                  (bVar71 >= bVar40) * bVar71) == bVar71),
                                                  CONCAT12(-((byte)((bVar70 < bVar39) * bVar39 |
                                                                   (bVar70 >= bVar39) * bVar70) ==
                                                            bVar70),CONCAT11(-((byte)((bVar69 < 
                                                  bVar38) * bVar38 | (bVar69 >= bVar38) * bVar69) ==
                                                  bVar69),-((byte)((bVar68 < bVar37) * bVar37 |
                                                                  (bVar68 >= bVar37) * bVar68) ==
                                                           bVar68)))))))) & uVar67 ^ uVar3;
              uVar65 = uVar65 + 8;
              if (uVar64 == uVar65) goto LAB_005106ff;
            } while( true );
          }
          uVar64 = local_68 & 0x7fffffffffffffe0;
          uVar65 = 0;
          do {
            pbVar1 = (byte *)(lVar63 + uVar65);
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
            pbVar2 = (byte *)(lVar63 + 0x10 + uVar65);
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
            bVar76 = *pbVar1 + auVar36[0];
            bVar77 = bVar5 + auVar36[1];
            bVar78 = bVar6 + auVar36[2];
            bVar79 = bVar7 + auVar36[3];
            bVar80 = bVar8 + auVar36[4];
            bVar81 = bVar9 + auVar36[5];
            bVar82 = bVar10 + auVar36[6];
            bVar83 = bVar11 + auVar36[7];
            bVar84 = bVar12 + auVar36[8];
            bVar85 = bVar13 + auVar36[9];
            bVar86 = bVar14 + auVar36[10];
            bVar87 = bVar15 + auVar36[0xb];
            bVar88 = bVar16 + auVar36[0xc];
            bVar89 = bVar17 + auVar36[0xd];
            bVar90 = bVar18 + auVar36[0xe];
            bVar91 = bVar19 + auVar36[0xf];
            bVar92 = bVar20 + auVar36[0];
            bVar93 = bVar21 + auVar36[1];
            bVar94 = bVar22 + auVar36[2];
            bVar95 = bVar23 + auVar36[3];
            bVar96 = bVar24 + auVar36[4];
            bVar97 = bVar25 + auVar36[5];
            bVar98 = bVar26 + auVar36[6];
            bVar99 = bVar27 + auVar36[7];
            bVar100 = bVar28 + auVar36[8];
            bVar101 = bVar29 + auVar36[9];
            bVar102 = bVar30 + auVar36[10];
            bVar103 = bVar31 + auVar36[0xb];
            bVar104 = bVar32 + auVar36[0xc];
            bVar105 = bVar33 + auVar36[0xd];
            bVar106 = bVar34 + auVar36[0xe];
            bVar107 = bVar35 + auVar36[0xf];
            pbVar2 = (byte *)(lVar63 + uVar65);
            *pbVar2 = -((byte)((bVar37 < bVar76) * bVar37 | (bVar37 >= bVar76) * bVar76) == bVar76)
                      & bVar45 ^ *pbVar1;
            pbVar2[1] = -((byte)((bVar38 < bVar77) * bVar38 | (bVar38 >= bVar77) * bVar77) == bVar77
                         ) & bVar46 ^ bVar5;
            pbVar2[2] = -((byte)((bVar39 < bVar78) * bVar39 | (bVar39 >= bVar78) * bVar78) == bVar78
                         ) & bVar47 ^ bVar6;
            pbVar2[3] = -((byte)((bVar40 < bVar79) * bVar40 | (bVar40 >= bVar79) * bVar79) == bVar79
                         ) & bVar48 ^ bVar7;
            pbVar2[4] = -((byte)((bVar41 < bVar80) * bVar41 | (bVar41 >= bVar80) * bVar80) == bVar80
                         ) & bVar49 ^ bVar8;
            pbVar2[5] = -((byte)((bVar42 < bVar81) * bVar42 | (bVar42 >= bVar81) * bVar81) == bVar81
                         ) & bVar50 ^ bVar9;
            pbVar2[6] = -((byte)((bVar43 < bVar82) * bVar43 | (bVar43 >= bVar82) * bVar82) == bVar82
                         ) & bVar51 ^ bVar10;
            pbVar2[7] = -((byte)((bVar44 < bVar83) * bVar44 | (bVar44 >= bVar83) * bVar83) == bVar83
                         ) & bVar52 ^ bVar11;
            pbVar2[8] = -((byte)((bVar68 < bVar84) * bVar68 | (bVar68 >= bVar84) * bVar84) == bVar84
                         ) & bVar53 ^ bVar12;
            pbVar2[9] = -((byte)((bVar69 < bVar85) * bVar69 | (bVar69 >= bVar85) * bVar85) == bVar85
                         ) & bVar54 ^ bVar13;
            pbVar2[10] = -((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) ==
                          bVar86) & bVar55 ^ bVar14;
            pbVar2[0xb] = -((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) ==
                           bVar87) & bVar56 ^ bVar15;
            pbVar2[0xc] = -((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) ==
                           bVar88) & bVar57 ^ bVar16;
            pbVar2[0xd] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) ==
                           bVar89) & bVar58 ^ bVar17;
            pbVar2[0xe] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) ==
                           bVar90) & bVar59 ^ bVar18;
            pbVar2[0xf] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) ==
                           bVar91) & bVar60 ^ bVar19;
            pbVar1 = (byte *)(lVar63 + 0x10 + uVar65);
            *pbVar1 = -((byte)((bVar37 < bVar92) * bVar37 | (bVar37 >= bVar92) * bVar92) == bVar92)
                      & bVar45 ^ bVar20;
            pbVar1[1] = -((byte)((bVar38 < bVar93) * bVar38 | (bVar38 >= bVar93) * bVar93) == bVar93
                         ) & bVar46 ^ bVar21;
            pbVar1[2] = -((byte)((bVar39 < bVar94) * bVar39 | (bVar39 >= bVar94) * bVar94) == bVar94
                         ) & bVar47 ^ bVar22;
            pbVar1[3] = -((byte)((bVar40 < bVar95) * bVar40 | (bVar40 >= bVar95) * bVar95) == bVar95
                         ) & bVar48 ^ bVar23;
            pbVar1[4] = -((byte)((bVar41 < bVar96) * bVar41 | (bVar41 >= bVar96) * bVar96) == bVar96
                         ) & bVar49 ^ bVar24;
            pbVar1[5] = -((byte)((bVar42 < bVar97) * bVar42 | (bVar42 >= bVar97) * bVar97) == bVar97
                         ) & bVar50 ^ bVar25;
            pbVar1[6] = -((byte)((bVar43 < bVar98) * bVar43 | (bVar43 >= bVar98) * bVar98) == bVar98
                         ) & bVar51 ^ bVar26;
            pbVar1[7] = -((byte)((bVar44 < bVar99) * bVar44 | (bVar44 >= bVar99) * bVar99) == bVar99
                         ) & bVar52 ^ bVar27;
            pbVar1[8] = -((byte)((bVar68 < bVar100) * bVar68 | (bVar68 >= bVar100) * bVar100) ==
                         bVar100) & bVar53 ^ bVar28;
            pbVar1[9] = -((byte)((bVar69 < bVar101) * bVar69 | (bVar69 >= bVar101) * bVar101) ==
                         bVar101) & bVar54 ^ bVar29;
            pbVar1[10] = -((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) ==
                          bVar102) & bVar55 ^ bVar30;
            pbVar1[0xb] = -((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) ==
                           bVar103) & bVar56 ^ bVar31;
            pbVar1[0xc] = -((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) ==
                           bVar104) & bVar57 ^ bVar32;
            pbVar1[0xd] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) ==
                           bVar105) & bVar58 ^ bVar33;
            pbVar1[0xe] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) ==
                           bVar106) & bVar59 ^ bVar34;
            pbVar1[0xf] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) ==
                           bVar107) & bVar60 ^ bVar35;
            uVar65 = uVar65 + 0x20;
          } while (uVar64 != uVar65);
          if (local_68 == uVar64) goto LAB_00510704;
          uVar65 = uVar64;
          if ((local_68 & 0x18) != 0) goto LAB_0051066b;
        }
        do {
          *(byte *)(lVar63 + uVar64) =
               ((byte)(*(byte *)(lVar63 + uVar64) + 0x9f) < 0x1a) << 5 ^ *(byte *)(lVar63 + uVar64);
          uVar64 = uVar64 + 1;
LAB_005106ff:
        } while (local_68 != uVar64);
      }
LAB_00510704:
      cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         ("QUOTA_EXHAUSTED",0xf,lVar63,local_68);
      uVar65 = CONCAT71(uVar66,1);
      uVar67 = extraout_XMM0_Qa_00;
      if ((((((cVar61 == '\0') &&
             (cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                 ("MODEL_CAPACITY_EXHAUSTED",0x18,lVar63,local_68),
             uVar67 = extraout_XMM0_Qa_01, cVar61 == '\0')) &&
            (cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                ("RATE_LIMIT_EXCEEDED",0x13,lVar63,local_68),
            uVar67 = extraout_XMM0_Qa_02, cVar61 == '\0')) &&
           ((cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                ("VALIDATION_REQUIRED",0x13,lVar63,local_68),
            uVar67 = extraout_XMM0_Qa_03, cVar61 == '\0' &&
            (cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                ("RESOURCE_EXHAUSTED",0x12,lVar63,local_68),
            uVar67 = extraout_XMM0_Qa_04, cVar61 == '\0')))) &&
          ((cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                               ("PERMISSION_DENIED",0x11,lVar63,local_68),
           uVar67 = extraout_XMM0_Qa_05, cVar61 == '\0' &&
           ((cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                ("UNAUTHENTICATED",0xf,lVar63,local_68),
            uVar67 = extraout_XMM0_Qa_06, cVar61 == '\0' &&
            (cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                                ("INVALID_ARGUMENToken",0x10,lVar63,local_68),
            uVar67 = extraout_XMM0_Qa_07, cVar61 == '\0')))))) &&
         (cVar61 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                             ("ACCOUNT_SUSPENDED",0x11,lVar63,local_68),
         uVar67 = extraout_XMM0_Qa_08, cVar61 == '\0')) {
        uVar62 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                           ("TOS_VIOLATION",0xd,lVar63,local_68);
        uVar65 = (ulonglong)uVar62;
        uVar67 = extraout_XMM0_Qa_09;
      }
      if (local_68 != 0) {
        uVar67 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar67,1);
      }
      goto LAB_005104d8;
    }
    if ((CONCAT71(uStack_5f,local_60) != -1) && (CONCAT71(uStack_5f,local_60) != 0)) {
      uVar67 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar67,1);
    }
    if (local_40 != 0) {
      uVar67 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar67,1);
    }
  }
  else {
    uVar67 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                       (&local_60);
  }
  uVar65 = CONCAT71(uVar66,1);
LAB_005104d8:
  if (local_78 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar67,1);
  }
  return uVar65 & 0xffffffff;
}


