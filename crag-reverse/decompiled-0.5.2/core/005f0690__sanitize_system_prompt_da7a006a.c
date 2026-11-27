// 005f0690 sanitize_system_prompt

/* craggemini_core[66f3c71560d70857]::tools::sanitize_system_prompt */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::tools::sanitize_system_prompt
          (longlong *param_1,longlong param_2,longlong param_3)

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
  longlong lVar36;
  longlong lVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
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
  char cVar59;
  char cVar60;
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
  byte bVar76;
  char cVar77;
  char *pcVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  longlong lVar81;
  ulonglong extraout_RDX;
  longlong extraout_RDX_00;
  longlong lVar82;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar83;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar84 [16];
  byte bVar85;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  undefined1 auVar86 [16];
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
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_50;
  int local_48 [4];
  longlong local_38;
  
  local_b0 = 0;
  local_a8 = 8;
  local_a0 = 0;
  local_90 = 0;
  local_70 = 0;
  local_60 = 0xa0000000a;
  local_58 = 1;
  local_50 = 0;
  local_98 = param_1;
  local_88 = param_3;
  local_80 = param_2;
  local_78 = param_3;
  local_68 = param_3;
  do {
    lVar36 = local_80;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_48,&local_80);
    if (local_48[0] == 1) {
      lVar82 = local_38 - local_90;
      lVar37 = local_38;
    }
    else {
      if (local_50._1_1_ != '\0') break;
      local_50 = CONCAT11(1,(byte)local_50);
      lVar82 = local_88 - local_90;
      lVar37 = local_90;
      lVar36 = local_80;
      if ((lVar82 != 0 | (byte)local_50) != 1) break;
    }
    lVar36 = local_90 + lVar36;
    if ((lVar82 != 0) && (*(char *)(lVar36 + -1 + lVar82) == '\n')) {
      if (lVar82 + -1 == 0) {
        lVar82 = 0;
      }
      else if (*(char *)(lVar36 + -2 + lVar82) == '\r') {
        lVar82 = lVar82 + -2;
      }
      else {
        lVar82 = lVar82 + -1;
      }
    }
    local_90 = lVar37;
    ::<str>::trim_matches::<<char>::is_whitespace>(lVar36,lVar82);
    if ((longlong)extraout_RDX < 0) {
LAB_005f0a60:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f0a6c;
    }
    if (extraout_RDX == 0) {
      pcVar78 = (char *)0x1;
LAB_005f097e:
      cVar77 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         ("cc_version=",0xb,pcVar78,extraout_RDX);
      if ((cVar77 == '\0') ||
         (cVar77 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                             (&DAT_0018e040,4,pcVar78,extraout_RDX), cVar77 == '\0')) {
        lVar37 = local_a0;
        if (local_a0 == local_b0) {
          <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
          ::grow_one(&local_b0);
        }
        lVar81 = lVar37 * 0x10;
        *(longlong *)(local_a8 + lVar81) = lVar36;
        *(longlong *)(local_a8 + 8 + lVar81) = lVar82;
        local_a0 = lVar37 + 1;
      }
      if (extraout_RDX != 0) goto LAB_005f09ec;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar78 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar78 == (char *)0x0) goto LAB_005f0a60;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,extraout_RDX);
      bVar76 = UNK_0018483f;
      bVar75 = UNK_0018483e;
      bVar74 = UNK_0018483d;
      bVar73 = UNK_0018483c;
      bVar72 = UNK_0018483b;
      bVar71 = UNK_0018483a;
      bVar70 = UNK_00184839;
      bVar69 = UNK_00184838;
      bVar68 = UNK_00184837;
      bVar67 = UNK_00184836;
      bVar66 = UNK_00184835;
      bVar65 = UNK_00184834;
      bVar64 = UNK_00184833;
      bVar63 = UNK_00184832;
      bVar62 = UNK_00184831;
      bVar61 = DAT_00184830;
      cVar60 = UNK_00183f6f;
      cVar59 = UNK_00183f6e;
      cVar58 = UNK_00183f6d;
      cVar57 = UNK_00183f6c;
      cVar56 = UNK_00183f6b;
      cVar55 = UNK_00183f6a;
      cVar54 = UNK_00183f69;
      cVar53 = UNK_00183f68;
      cVar52 = UNK_00183f67;
      cVar51 = UNK_00183f66;
      cVar50 = UNK_00183f65;
      cVar49 = UNK_00183f64;
      cVar48 = UNK_00183f63;
      cVar47 = UNK_00183f62;
      cVar46 = UNK_00183f61;
      cVar77 = DAT_00183f60;
      bVar93 = UNK_0018303f;
      bVar92 = UNK_0018303e;
      bVar91 = UNK_0018303d;
      bVar90 = UNK_0018303c;
      bVar89 = UNK_0018303b;
      bVar88 = UNK_0018303a;
      bVar87 = UNK_00183039;
      bVar85 = UNK_00183038;
      bVar45 = UNK_00183037;
      bVar44 = UNK_00183036;
      bVar43 = UNK_00183035;
      bVar42 = UNK_00183034;
      bVar41 = UNK_00183033;
      bVar40 = UNK_00183032;
      bVar39 = UNK_00183031;
      bVar38 = DAT_00183030;
      if (extraout_RDX < 8) {
        uVar79 = 0;
LAB_005f0930:
        do {
          pcVar78[uVar79] = ((byte)(pcVar78[uVar79] + 0xbfU) < 0x1a) << 5 | pcVar78[uVar79];
          uVar79 = uVar79 + 1;
LAB_005f094a:
        } while (extraout_RDX != uVar79);
      }
      else {
        if (extraout_RDX < 0x20) {
          uVar80 = 0;
LAB_005f08b8:
          uVar83 = s__001846a0._0_8_;
          cVar52 = UNK_00184167;
          cVar51 = UNK_00184166;
          cVar50 = UNK_00184165;
          cVar49 = UNK_00184164;
          cVar48 = UNK_00184163;
          cVar47 = UNK_00184162;
          cVar46 = UNK_00184161;
          cVar77 = DAT_00184160;
          bVar45 = UNK_001840c7;
          bVar44 = UNK_001840c6;
          bVar43 = UNK_001840c5;
          bVar42 = UNK_001840c4;
          bVar41 = UNK_001840c3;
          bVar40 = UNK_001840c2;
          bVar39 = UNK_001840c1;
          bVar38 = DAT_001840c0;
          uVar79 = extraout_RDX & 0x7ffffffffffffff8;
          do {
            uVar3 = *(ulonglong *)(pcVar78 + uVar80);
            bVar85 = (char)uVar3 + cVar77;
            bVar87 = (char)(uVar3 >> 8) + cVar46;
            bVar88 = (char)(uVar3 >> 0x10) + cVar47;
            bVar89 = (char)(uVar3 >> 0x18) + cVar48;
            bVar90 = (char)(uVar3 >> 0x20) + cVar49;
            bVar91 = (char)(uVar3 >> 0x28) + cVar50;
            bVar92 = (char)(uVar3 >> 0x30) + cVar51;
            bVar93 = (char)(uVar3 >> 0x38) + cVar52;
            *(ulonglong *)(pcVar78 + uVar80) =
                 ~CONCAT17(-((byte)((bVar93 < bVar45) * bVar45 | (bVar93 >= bVar45) * bVar93) ==
                            bVar93),CONCAT16(-((byte)((bVar92 < bVar44) * bVar44 |
                                                     (bVar92 >= bVar44) * bVar92) == bVar92),
                                             CONCAT15(-((byte)((bVar91 < bVar43) * bVar43 |
                                                              (bVar91 >= bVar43) * bVar91) == bVar91
                                                       ),CONCAT14(-((byte)((bVar90 < bVar42) *
                                                                           bVar42 | (bVar90 >=
                                                                                    bVar42) * bVar90
                                                                          ) == bVar90),
                                                                  CONCAT13(-((byte)((bVar89 < bVar41
                                                                                    ) * bVar41 |
                                                                                   (bVar89 >= bVar41
                                                                                   ) * bVar89) ==
                                                                            bVar89),CONCAT12(-((byte
                                                  )((bVar88 < bVar40) * bVar40 |
                                                   (bVar88 >= bVar40) * bVar88) == bVar88),
                                                  CONCAT11(-((byte)((bVar87 < bVar39) * bVar39 |
                                                                   (bVar87 >= bVar39) * bVar87) ==
                                                            bVar87),-((byte)((bVar85 < bVar38) *
                                                                             bVar38 | (bVar85 >=
                                                                                      bVar38) * 
                                                  bVar85) == bVar85)))))))) & uVar83 | uVar3;
            uVar80 = uVar80 + 8;
            if (uVar79 == uVar80) goto LAB_005f094a;
          } while( true );
        }
        uVar79 = extraout_RDX & 0x7fffffffffffffe0;
        uVar80 = 0;
        do {
          pbVar2 = (byte *)(pcVar78 + uVar80);
          bVar5 = pbVar2[1];
          bVar6 = pbVar2[2];
          bVar7 = pbVar2[3];
          bVar8 = pbVar2[4];
          bVar9 = pbVar2[5];
          bVar10 = pbVar2[6];
          bVar11 = pbVar2[7];
          bVar12 = pbVar2[8];
          bVar13 = pbVar2[9];
          bVar14 = pbVar2[10];
          bVar15 = pbVar2[0xb];
          bVar16 = pbVar2[0xc];
          bVar17 = pbVar2[0xd];
          bVar18 = pbVar2[0xe];
          bVar19 = pbVar2[0xf];
          pbVar1 = (byte *)(pcVar78 + uVar80 + 0x10);
          bVar20 = *pbVar1;
          bVar21 = pbVar1[1];
          bVar22 = pbVar1[2];
          bVar23 = pbVar1[3];
          bVar24 = pbVar1[4];
          bVar25 = pbVar1[5];
          bVar26 = pbVar1[6];
          bVar27 = pbVar1[7];
          bVar28 = pbVar1[8];
          bVar29 = pbVar1[9];
          bVar30 = pbVar1[10];
          bVar31 = pbVar1[0xb];
          bVar32 = pbVar1[0xc];
          bVar33 = pbVar1[0xd];
          bVar34 = pbVar1[0xe];
          bVar35 = pbVar1[0xf];
          bVar94 = *pbVar2 + cVar77;
          bVar95 = bVar5 + cVar46;
          bVar96 = bVar6 + cVar47;
          bVar97 = bVar7 + cVar48;
          bVar98 = bVar8 + cVar49;
          bVar99 = bVar9 + cVar50;
          bVar100 = bVar10 + cVar51;
          bVar101 = bVar11 + cVar52;
          bVar102 = bVar12 + cVar53;
          bVar103 = bVar13 + cVar54;
          bVar104 = bVar14 + cVar55;
          bVar105 = bVar15 + cVar56;
          bVar106 = bVar16 + cVar57;
          bVar107 = bVar17 + cVar58;
          bVar108 = bVar18 + cVar59;
          bVar109 = bVar19 + cVar60;
          bVar110 = bVar20 + cVar77;
          bVar111 = bVar21 + cVar46;
          bVar112 = bVar22 + cVar47;
          bVar113 = bVar23 + cVar48;
          bVar114 = bVar24 + cVar49;
          bVar115 = bVar25 + cVar50;
          bVar116 = bVar26 + cVar51;
          bVar117 = bVar27 + cVar52;
          bVar118 = bVar28 + cVar53;
          bVar119 = bVar29 + cVar54;
          bVar120 = bVar30 + cVar55;
          bVar121 = bVar31 + cVar56;
          bVar122 = bVar32 + cVar57;
          bVar123 = bVar33 + cVar58;
          bVar124 = bVar34 + cVar59;
          bVar125 = bVar35 + cVar60;
          pbVar1 = (byte *)(pcVar78 + uVar80);
          *pbVar1 = -((byte)((bVar38 < bVar94) * bVar38 | (bVar38 >= bVar94) * bVar94) == bVar94) &
                    bVar61 | *pbVar2;
          pbVar1[1] = -((byte)((bVar39 < bVar95) * bVar39 | (bVar39 >= bVar95) * bVar95) == bVar95)
                      & bVar62 | bVar5;
          pbVar1[2] = -((byte)((bVar40 < bVar96) * bVar40 | (bVar40 >= bVar96) * bVar96) == bVar96)
                      & bVar63 | bVar6;
          pbVar1[3] = -((byte)((bVar41 < bVar97) * bVar41 | (bVar41 >= bVar97) * bVar97) == bVar97)
                      & bVar64 | bVar7;
          pbVar1[4] = -((byte)((bVar42 < bVar98) * bVar42 | (bVar42 >= bVar98) * bVar98) == bVar98)
                      & bVar65 | bVar8;
          pbVar1[5] = -((byte)((bVar43 < bVar99) * bVar43 | (bVar43 >= bVar99) * bVar99) == bVar99)
                      & bVar66 | bVar9;
          pbVar1[6] = -((byte)((bVar44 < bVar100) * bVar44 | (bVar44 >= bVar100) * bVar100) ==
                       bVar100) & bVar67 | bVar10;
          pbVar1[7] = -((byte)((bVar45 < bVar101) * bVar45 | (bVar45 >= bVar101) * bVar101) ==
                       bVar101) & bVar68 | bVar11;
          pbVar1[8] = -((byte)((bVar85 < bVar102) * bVar85 | (bVar85 >= bVar102) * bVar102) ==
                       bVar102) & bVar69 | bVar12;
          pbVar1[9] = -((byte)((bVar87 < bVar103) * bVar87 | (bVar87 >= bVar103) * bVar103) ==
                       bVar103) & bVar70 | bVar13;
          pbVar1[10] = -((byte)((bVar88 < bVar104) * bVar88 | (bVar88 >= bVar104) * bVar104) ==
                        bVar104) & bVar71 | bVar14;
          pbVar1[0xb] = -((byte)((bVar89 < bVar105) * bVar89 | (bVar89 >= bVar105) * bVar105) ==
                         bVar105) & bVar72 | bVar15;
          pbVar1[0xc] = -((byte)((bVar90 < bVar106) * bVar90 | (bVar90 >= bVar106) * bVar106) ==
                         bVar106) & bVar73 | bVar16;
          pbVar1[0xd] = -((byte)((bVar91 < bVar107) * bVar91 | (bVar91 >= bVar107) * bVar107) ==
                         bVar107) & bVar74 | bVar17;
          pbVar1[0xe] = -((byte)((bVar92 < bVar108) * bVar92 | (bVar92 >= bVar108) * bVar108) ==
                         bVar108) & bVar75 | bVar18;
          pbVar1[0xf] = -((byte)((bVar93 < bVar109) * bVar93 | (bVar93 >= bVar109) * bVar109) ==
                         bVar109) & bVar76 | bVar19;
          pbVar1 = (byte *)(pcVar78 + uVar80 + 0x10);
          *pbVar1 = -((byte)((bVar38 < bVar110) * bVar38 | (bVar38 >= bVar110) * bVar110) == bVar110
                     ) & bVar61 | bVar20;
          pbVar1[1] = -((byte)((bVar39 < bVar111) * bVar39 | (bVar39 >= bVar111) * bVar111) ==
                       bVar111) & bVar62 | bVar21;
          pbVar1[2] = -((byte)((bVar40 < bVar112) * bVar40 | (bVar40 >= bVar112) * bVar112) ==
                       bVar112) & bVar63 | bVar22;
          pbVar1[3] = -((byte)((bVar41 < bVar113) * bVar41 | (bVar41 >= bVar113) * bVar113) ==
                       bVar113) & bVar64 | bVar23;
          pbVar1[4] = -((byte)((bVar42 < bVar114) * bVar42 | (bVar42 >= bVar114) * bVar114) ==
                       bVar114) & bVar65 | bVar24;
          pbVar1[5] = -((byte)((bVar43 < bVar115) * bVar43 | (bVar43 >= bVar115) * bVar115) ==
                       bVar115) & bVar66 | bVar25;
          pbVar1[6] = -((byte)((bVar44 < bVar116) * bVar44 | (bVar44 >= bVar116) * bVar116) ==
                       bVar116) & bVar67 | bVar26;
          pbVar1[7] = -((byte)((bVar45 < bVar117) * bVar45 | (bVar45 >= bVar117) * bVar117) ==
                       bVar117) & bVar68 | bVar27;
          pbVar1[8] = -((byte)((bVar85 < bVar118) * bVar85 | (bVar85 >= bVar118) * bVar118) ==
                       bVar118) & bVar69 | bVar28;
          pbVar1[9] = -((byte)((bVar87 < bVar119) * bVar87 | (bVar87 >= bVar119) * bVar119) ==
                       bVar119) & bVar70 | bVar29;
          pbVar1[10] = -((byte)((bVar88 < bVar120) * bVar88 | (bVar88 >= bVar120) * bVar120) ==
                        bVar120) & bVar71 | bVar30;
          pbVar1[0xb] = -((byte)((bVar89 < bVar121) * bVar89 | (bVar89 >= bVar121) * bVar121) ==
                         bVar121) & bVar72 | bVar31;
          pbVar1[0xc] = -((byte)((bVar90 < bVar122) * bVar90 | (bVar90 >= bVar122) * bVar122) ==
                         bVar122) & bVar73 | bVar32;
          pbVar1[0xd] = -((byte)((bVar91 < bVar123) * bVar91 | (bVar91 >= bVar123) * bVar123) ==
                         bVar123) & bVar74 | bVar33;
          pbVar1[0xe] = -((byte)((bVar92 < bVar124) * bVar92 | (bVar92 >= bVar124) * bVar124) ==
                         bVar124) & bVar75 | bVar34;
          pbVar1[0xf] = -((byte)((bVar93 < bVar125) * bVar93 | (bVar93 >= bVar125) * bVar125) ==
                         bVar125) & bVar76 | bVar35;
          uVar80 = uVar80 + 0x20;
        } while (uVar79 != uVar80);
        if (extraout_RDX != uVar79) {
          uVar80 = uVar79;
          if ((extraout_RDX & 0x18) != 0) goto LAB_005f08b8;
          goto LAB_005f0930;
        }
      }
      if ((extraout_RDX < 0x1b) ||
         (auVar84[0] = -(*pcVar78 == s_x_anthropic_bill_001828c0[0]),
         auVar84[1] = -(pcVar78[1] == s_x_anthropic_bill_001828c0[1]),
         auVar84[2] = -(pcVar78[2] == s_x_anthropic_bill_001828c0[2]),
         auVar84[3] = -(pcVar78[3] == s_x_anthropic_bill_001828c0[3]),
         auVar84[4] = -(pcVar78[4] == s_x_anthropic_bill_001828c0[4]),
         auVar84[5] = -(pcVar78[5] == s_x_anthropic_bill_001828c0[5]),
         auVar84[6] = -(pcVar78[6] == s_x_anthropic_bill_001828c0[6]),
         auVar84[7] = -(pcVar78[7] == s_x_anthropic_bill_001828c0[7]),
         auVar84[8] = -(pcVar78[8] == s_x_anthropic_bill_001828c0[8]),
         auVar84[9] = -(pcVar78[9] == s_x_anthropic_bill_001828c0[9]),
         auVar84[10] = -(pcVar78[10] == s_x_anthropic_bill_001828c0[10]),
         auVar84[0xb] = -(pcVar78[0xb] == s_x_anthropic_bill_001828c0[0xb]),
         auVar84[0xc] = -(pcVar78[0xc] == s_x_anthropic_bill_001828c0[0xc]),
         auVar84[0xd] = -(pcVar78[0xd] == s_x_anthropic_bill_001828c0[0xd]),
         auVar84[0xe] = -(pcVar78[0xe] == s_x_anthropic_bill_001828c0[0xe]),
         auVar84[0xf] = -(pcVar78[0xf] == s_x_anthropic_bill_001828c0[0xf]),
         auVar86[0] = -(pcVar78[0xb] == DAT_001841b0), auVar86[1] = -(pcVar78[0xc] == UNK_001841b1),
         auVar86[2] = -(pcVar78[0xd] == UNK_001841b2), auVar86[3] = -(pcVar78[0xe] == UNK_001841b3),
         auVar86[4] = -(pcVar78[0xf] == UNK_001841b4), auVar86[5] = -(pcVar78[0x10] == UNK_001841b5)
         , auVar86[6] = -(pcVar78[0x11] == UNK_001841b6),
         auVar86[7] = -(pcVar78[0x12] == UNK_001841b7),
         auVar86[8] = -(pcVar78[0x13] == UNK_001841b8),
         auVar86[9] = -(pcVar78[0x14] == UNK_001841b9),
         auVar86[10] = -(pcVar78[0x15] == UNK_001841ba),
         auVar86[0xb] = -(pcVar78[0x16] == UNK_001841bb),
         auVar86[0xc] = -(pcVar78[0x17] == UNK_001841bc),
         auVar86[0xd] = -(pcVar78[0x18] == UNK_001841bd),
         auVar86[0xe] = -(pcVar78[0x19] == UNK_001841be),
         auVar86[0xf] = -(pcVar78[0x1a] == UNK_001841bf), auVar86 = auVar86 & auVar84,
         (ushort)((ushort)(SUB161(auVar86 >> 7,0) & 1) | (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar86[0xf] >> 7) << 0xf) != 0xffff)) goto LAB_005f097e;
LAB_005f09ec:
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  } while (local_50._1_1_ == '\0');
  alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
            (&local_90,local_a8,local_a0,&DAT_0019ed35,1);
  lVar36 = local_90;
  uVar83 = ::<str>::trim_matches::<<char>::is_whitespace>(local_88,local_80);
  if (extraout_RDX_00 < 0) {
LAB_005f0a4f:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_005f0a6c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (extraout_RDX_00 == 0) {
    lVar82 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar82 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar82 == 0) goto LAB_005f0a4f;
    uVar83 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_00,extraout_RDX_00);
  }
  *local_98 = extraout_RDX_00;
  local_98[1] = lVar82;
  local_98[2] = extraout_RDX_00;
  if (lVar36 != 0) {
    uVar83 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar83,1);
  }
  if (local_b0 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar83,8);
  }
  return local_98;
}


