// 004fb730 resolve_model_and_thinking

/* WARNING: Removing unreachable block (ram,0x004ffb04) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::models::resolve_model_and_thinking */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::models::resolve_model_and_thinking
          (undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 *param_6)

{
  byte *pbVar1;
  ushort uVar2;
  undefined4 uVar3;
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
  undefined8 uVar26;
  bool bVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined8 uVar43;
  longlong **pplVar44;
  ulonglong uVar45;
  longlong **pplVar46;
  longlong **pplVar47;
  longlong **pplVar48;
  longlong lVar49;
  char cVar50;
  char cVar51;
  byte bVar52;
  int iVar53;
  longlong lVar54;
  longlong **pplVar55;
  ulonglong uVar56;
  longlong *plVar57;
  longlong *plVar58;
  longlong **pplVar59;
  longlong **pplVar60;
  byte *pbVar61;
  longlong **pplVar62;
  longlong **pplVar63;
  char *pcVar64;
  undefined8 *puVar65;
  byte bVar66;
  longlong *plVar67;
  longlong *plVar68;
  longlong **extraout_RDX;
  ulonglong uVar69;
  longlong **pplVar70;
  longlong lVar71;
  longlong lVar72;
  undefined8 *puVar73;
  undefined1 uVar74;
  longlong lVar75;
  longlong **pplVar76;
  ulonglong uVar77;
  ulonglong uVar78;
  longlong **pplVar79;
  longlong lVar80;
  longlong **pplVar81;
  bool bVar82;
  bool bVar83;
  bool bVar84;
  bool bVar85;
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
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  undefined8 extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 uVar86;
  undefined8 extraout_XMM0_Qa_35;
  undefined8 extraout_XMM0_Qa_36;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined8 extraout_XMM0_Qa_41;
  undefined8 extraout_XMM0_Qa_42;
  undefined8 extraout_XMM0_Qa_43;
  undefined8 extraout_XMM0_Qa_44;
  undefined8 extraout_XMM0_Qa_45;
  undefined8 extraout_XMM0_Qa_46;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  undefined8 extraout_XMM0_Qb_16;
  undefined8 extraout_XMM0_Qb_17;
  undefined8 extraout_XMM0_Qb_18;
  undefined8 extraout_XMM0_Qb_19;
  undefined8 extraout_XMM0_Qb_20;
  undefined8 extraout_XMM0_Qb_21;
  undefined8 extraout_XMM0_Qb_22;
  undefined8 extraout_XMM0_Qb_23;
  undefined8 extraout_XMM0_Qb_24;
  undefined8 extraout_XMM0_Qb_25;
  undefined8 extraout_XMM0_Qb_26;
  undefined8 extraout_XMM0_Qb_27;
  undefined8 extraout_XMM0_Qb_28;
  undefined8 extraout_XMM0_Qb_29;
  undefined8 extraout_XMM0_Qb_30;
  undefined8 extraout_XMM0_Qb_31;
  undefined8 extraout_XMM0_Qb_32;
  undefined8 extraout_XMM0_Qb_33;
  undefined8 extraout_XMM0_Qb_34;
  undefined8 extraout_XMM0_Qb_35;
  undefined8 extraout_XMM0_Qb_36;
  undefined8 extraout_XMM0_Qb_37;
  undefined8 extraout_XMM0_Qb_38;
  undefined8 extraout_XMM0_Qb_39;
  undefined8 extraout_XMM0_Qb_40;
  undefined8 extraout_XMM0_Qb_41;
  undefined8 extraout_XMM0_Qb_42;
  undefined1 auVar87 [16];
  undefined8 extraout_XMM0_Qb_43;
  undefined8 extraout_XMM0_Qb_44;
  undefined8 extraout_XMM0_Qb_45;
  undefined8 extraout_XMM0_Qb_46;
  undefined8 extraout_XMM0_Qb_47;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined8 extraout_XMM0_Qa_47;
  undefined8 extraout_XMM0_Qa_48;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  byte bVar93;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte bVar106;
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
  undefined1 auVar107 [16];
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
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  undefined1 auVar139 [16];
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  byte bVar171;
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  longlong **local_260;
  longlong **local_258;
  longlong **local_248;
  longlong **local_240;
  longlong **local_238;
  longlong **local_230;
  longlong **local_228;
  undefined8 uStack_220;
  longlong **local_210;
  longlong *local_208;
  longlong **local_200;
  ulonglong local_1e0;
  longlong **local_1d8;
  ulonglong local_1d0;
  undefined8 local_1c8;
  longlong **pplStack_1c0;
  longlong **local_1b8;
  longlong **applStack_1b0 [2];
  ulonglong uStack_1a0;
  longlong local_198;
  longlong **pplStack_190;
  ulonglong local_188;
  longlong lStack_180;
  longlong **local_178;
  longlong lStack_170;
  ulonglong local_168;
  longlong local_160;
  longlong *plStack_158;
  longlong local_150;
  undefined8 *local_148;
  longlong **local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *local_120;
  longlong *local_a8;
  undefined8 local_a0;
  longlong **local_98;
  longlong **local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong **local_48;
  longlong **local_40;
  longlong **local_38;
  
  if (param_2 == 0) {
LAB_004fb76c:
    lVar54 = ::<str>::trim_matches::<<char>::is_whitespace>(param_4,param_5);
  }
  else {
    auVar172 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
    lVar54 = auVar172._0_8_;
    if ((lVar54 == 0) || (auVar172._8_8_ == 0)) goto LAB_004fb76c;
  }
  parse_model_spec(&local_1c8,lVar54);
  lVar49 = lStack_180;
  pplVar81 = pplStack_190;
  lVar54 = local_198;
  uVar45 = uStack_1a0;
  pplVar48 = applStack_1b0[1];
  pplVar47 = applStack_1b0[0];
  pplVar46 = local_1b8;
  pplVar44 = pplStack_1c0;
  if (CONCAT44(local_1c8._4_4_,(int)local_1c8) == -1) {
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  uVar26 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
  auVar172._8_8_ = pplStack_1c0;
  auVar172._0_8_ = uVar26;
  if (-1 < (longlong)uStack_1a0) {
    if (uStack_1a0 == 0) {
      pplVar55 = (longlong **)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
      if (pplVar55 == (longlong **)0x0) goto LAB_004fb81e;
      auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)();
      bVar122 = UNK_0018483f;
      bVar121 = UNK_0018483e;
      bVar120 = UNK_0018483d;
      bVar119 = UNK_0018483c;
      bVar118 = UNK_0018483b;
      bVar117 = UNK_0018483a;
      bVar116 = UNK_00184839;
      bVar115 = UNK_00184838;
      bVar114 = UNK_00184837;
      bVar113 = UNK_00184836;
      bVar112 = UNK_00184835;
      bVar111 = UNK_00184834;
      bVar110 = UNK_00184833;
      bVar109 = UNK_00184832;
      bVar108 = UNK_00184831;
      bVar106 = DAT_00184830;
      cVar41 = UNK_00183f6f;
      cVar40 = UNK_00183f6e;
      cVar39 = UNK_00183f6d;
      cVar38 = UNK_00183f6c;
      cVar37 = UNK_00183f6b;
      cVar36 = UNK_00183f6a;
      cVar35 = UNK_00183f69;
      cVar34 = UNK_00183f68;
      cVar33 = UNK_00183f67;
      cVar32 = UNK_00183f66;
      cVar31 = UNK_00183f65;
      cVar30 = UNK_00183f64;
      cVar29 = UNK_00183f63;
      cVar28 = UNK_00183f62;
      cVar50 = UNK_00183f61;
      cVar51 = DAT_00183f60;
      bVar105 = UNK_0018303f;
      bVar104 = UNK_0018303e;
      bVar103 = UNK_0018303d;
      bVar102 = UNK_0018303c;
      bVar101 = UNK_0018303b;
      bVar100 = UNK_0018303a;
      bVar99 = UNK_00183039;
      bVar93 = UNK_00183038;
      bVar10 = UNK_00183037;
      bVar9 = UNK_00183036;
      bVar8 = UNK_00183035;
      bVar7 = UNK_00183034;
      bVar6 = UNK_00183033;
      bVar5 = UNK_00183032;
      bVar52 = UNK_00183031;
      bVar66 = DAT_00183030;
      auVar172._8_8_ = extraout_XMM0_Qb;
      if (uVar45 < 8) {
        uVar56 = 0;
      }
      else {
        if (uVar45 < 0x20) {
          uVar77 = 0;
LAB_004fb94d:
          uVar43 = s__001846a0._0_8_;
          cVar33 = UNK_00184167;
          cVar32 = UNK_00184166;
          cVar31 = UNK_00184165;
          cVar30 = UNK_00184164;
          cVar29 = UNK_00184163;
          cVar28 = UNK_00184162;
          cVar50 = UNK_00184161;
          cVar51 = DAT_00184160;
          uVar86 = _DAT_001840c0;
          uVar56 = uVar45 & 0x7ffffffffffffff8;
          auVar172[1] = UNK_00184161;
          auVar172[0] = DAT_00184160;
          auVar172[2] = UNK_00184162;
          auVar172[3] = UNK_00184163;
          auVar172[4] = UNK_00184164;
          auVar172[5] = UNK_00184165;
          auVar172[6] = UNK_00184166;
          auVar172[7] = UNK_00184167;
          auVar172[8] = UNK_00184168;
          auVar172[9] = UNK_00184169;
          auVar172[10] = UNK_0018416a;
          auVar172[0xb] = UNK_0018416b;
          auVar172[0xc] = UNK_0018416c;
          auVar172[0xd] = UNK_0018416d;
          auVar172[0xe] = UNK_0018416e;
          auVar172[0xf] = UNK_0018416f;
          do {
            uVar78 = *(ulonglong *)((longlong)pplVar55 + uVar77);
            bVar93 = (char)uVar78 + cVar51;
            bVar99 = (char)(uVar78 >> 8) + cVar50;
            bVar100 = (char)(uVar78 >> 0x10) + cVar28;
            bVar101 = (char)(uVar78 >> 0x18) + cVar29;
            bVar102 = (char)(uVar78 >> 0x20) + cVar30;
            bVar103 = (char)(uVar78 >> 0x28) + cVar31;
            bVar104 = (char)(uVar78 >> 0x30) + cVar32;
            bVar105 = (char)(uVar78 >> 0x38) + cVar33;
            bVar66 = (byte)uVar86;
            bVar52 = (byte)((ulonglong)uVar86 >> 8);
            bVar5 = (byte)((ulonglong)uVar86 >> 0x10);
            bVar6 = (byte)((ulonglong)uVar86 >> 0x18);
            bVar7 = (byte)((ulonglong)uVar86 >> 0x20);
            bVar8 = (byte)((ulonglong)uVar86 >> 0x28);
            bVar9 = (byte)((ulonglong)uVar86 >> 0x30);
            bVar10 = (byte)((ulonglong)uVar86 >> 0x38);
            *(ulonglong *)((longlong)pplVar55 + uVar77) =
                 ~CONCAT17(-((byte)((bVar105 < bVar10) * bVar10 | (bVar105 >= bVar10) * bVar105) ==
                            bVar105),
                           CONCAT16(-((byte)((bVar104 < bVar9) * bVar9 |
                                            (bVar104 >= bVar9) * bVar104) == bVar104),
                                    CONCAT15(-((byte)((bVar103 < bVar8) * bVar8 |
                                                     (bVar103 >= bVar8) * bVar103) == bVar103),
                                             CONCAT14(-((byte)((bVar102 < bVar7) * bVar7 |
                                                              (bVar102 >= bVar7) * bVar102) ==
                                                       bVar102),
                                                      CONCAT13(-((byte)((bVar101 < bVar6) * bVar6 |
                                                                       (bVar101 >= bVar6) * bVar101)
                                                                == bVar101),
                                                               CONCAT12(-((byte)((bVar100 < bVar5) *
                                                                                 bVar5 | (bVar100 >=
                                                                                         bVar5) * 
                                                  bVar100) == bVar100),
                                                  CONCAT11(-((byte)((bVar99 < bVar52) * bVar52 |
                                                                   (bVar99 >= bVar52) * bVar99) ==
                                                            bVar99),-((byte)((bVar93 < bVar66) *
                                                                             bVar66 | (bVar93 >=
                                                                                      bVar66) * 
                                                  bVar93) == bVar93)))))))) & uVar43 | uVar78;
            uVar77 = uVar77 + 8;
            if (uVar56 == uVar77) goto LAB_004fba31;
          } while( true );
        }
        uVar56 = uVar45 & 0x7fffffffffffffe0;
        uVar77 = 0;
        auVar172[1] = UNK_00183f61;
        auVar172[0] = DAT_00183f60;
        auVar172[2] = UNK_00183f62;
        auVar172[3] = UNK_00183f63;
        auVar172[4] = UNK_00183f64;
        auVar172[5] = UNK_00183f65;
        auVar172[6] = UNK_00183f66;
        auVar172[7] = UNK_00183f67;
        auVar172[8] = UNK_00183f68;
        auVar172[9] = UNK_00183f69;
        auVar172[10] = UNK_00183f6a;
        auVar172[0xb] = UNK_00183f6b;
        auVar172[0xc] = UNK_00183f6c;
        auVar172[0xd] = UNK_00183f6d;
        auVar172[0xe] = UNK_00183f6e;
        auVar172[0xf] = UNK_00183f6f;
        do {
          pbVar61 = (byte *)((longlong)pplVar55 + uVar77);
          bVar123 = pbVar61[1];
          bVar124 = pbVar61[2];
          bVar125 = pbVar61[3];
          bVar126 = pbVar61[4];
          bVar127 = pbVar61[5];
          bVar128 = pbVar61[6];
          bVar129 = pbVar61[7];
          bVar130 = pbVar61[8];
          bVar131 = pbVar61[9];
          bVar132 = pbVar61[10];
          bVar133 = pbVar61[0xb];
          bVar134 = pbVar61[0xc];
          bVar135 = pbVar61[0xd];
          bVar136 = pbVar61[0xe];
          bVar137 = pbVar61[0xf];
          pbVar1 = (byte *)((longlong)pplVar55 + uVar77 + 0x10);
          bVar138 = *pbVar1;
          bVar11 = pbVar1[1];
          bVar12 = pbVar1[2];
          bVar13 = pbVar1[3];
          bVar14 = pbVar1[4];
          bVar15 = pbVar1[5];
          bVar16 = pbVar1[6];
          bVar17 = pbVar1[7];
          bVar18 = pbVar1[8];
          bVar19 = pbVar1[9];
          bVar20 = pbVar1[10];
          bVar21 = pbVar1[0xb];
          bVar22 = pbVar1[0xc];
          bVar23 = pbVar1[0xd];
          bVar24 = pbVar1[0xe];
          bVar25 = pbVar1[0xf];
          bVar140 = *pbVar61 + cVar51;
          bVar141 = bVar123 + cVar50;
          bVar142 = bVar124 + cVar28;
          bVar143 = bVar125 + cVar29;
          bVar144 = bVar126 + cVar30;
          bVar145 = bVar127 + cVar31;
          bVar146 = bVar128 + cVar32;
          bVar147 = bVar129 + cVar33;
          bVar148 = bVar130 + cVar34;
          bVar149 = bVar131 + cVar35;
          bVar150 = bVar132 + cVar36;
          bVar151 = bVar133 + cVar37;
          bVar152 = bVar134 + cVar38;
          bVar153 = bVar135 + cVar39;
          bVar154 = bVar136 + cVar40;
          bVar155 = bVar137 + cVar41;
          bVar156 = bVar138 + cVar51;
          bVar157 = bVar11 + cVar50;
          bVar158 = bVar12 + cVar28;
          bVar159 = bVar13 + cVar29;
          bVar160 = bVar14 + cVar30;
          bVar161 = bVar15 + cVar31;
          bVar162 = bVar16 + cVar32;
          bVar163 = bVar17 + cVar33;
          bVar164 = bVar18 + cVar34;
          bVar165 = bVar19 + cVar35;
          bVar166 = bVar20 + cVar36;
          bVar167 = bVar21 + cVar37;
          bVar168 = bVar22 + cVar38;
          bVar169 = bVar23 + cVar39;
          bVar170 = bVar24 + cVar40;
          bVar171 = bVar25 + cVar41;
          pbVar1 = (byte *)((longlong)pplVar55 + uVar77);
          *pbVar1 = -((byte)((bVar66 < bVar140) * bVar66 | (bVar66 >= bVar140) * bVar140) == bVar140
                     ) & bVar106 | *pbVar61;
          pbVar1[1] = -((byte)((bVar52 < bVar141) * bVar52 | (bVar52 >= bVar141) * bVar141) ==
                       bVar141) & bVar108 | bVar123;
          pbVar1[2] = -((byte)((bVar5 < bVar142) * bVar5 | (bVar5 >= bVar142) * bVar142) == bVar142)
                      & bVar109 | bVar124;
          pbVar1[3] = -((byte)((bVar6 < bVar143) * bVar6 | (bVar6 >= bVar143) * bVar143) == bVar143)
                      & bVar110 | bVar125;
          pbVar1[4] = -((byte)((bVar7 < bVar144) * bVar7 | (bVar7 >= bVar144) * bVar144) == bVar144)
                      & bVar111 | bVar126;
          pbVar1[5] = -((byte)((bVar8 < bVar145) * bVar8 | (bVar8 >= bVar145) * bVar145) == bVar145)
                      & bVar112 | bVar127;
          pbVar1[6] = -((byte)((bVar9 < bVar146) * bVar9 | (bVar9 >= bVar146) * bVar146) == bVar146)
                      & bVar113 | bVar128;
          pbVar1[7] = -((byte)((bVar10 < bVar147) * bVar10 | (bVar10 >= bVar147) * bVar147) ==
                       bVar147) & bVar114 | bVar129;
          pbVar1[8] = -((byte)((bVar93 < bVar148) * bVar93 | (bVar93 >= bVar148) * bVar148) ==
                       bVar148) & bVar115 | bVar130;
          pbVar1[9] = -((byte)((bVar99 < bVar149) * bVar99 | (bVar99 >= bVar149) * bVar149) ==
                       bVar149) & bVar116 | bVar131;
          pbVar1[10] = -((byte)((bVar100 < bVar150) * bVar100 | (bVar100 >= bVar150) * bVar150) ==
                        bVar150) & bVar117 | bVar132;
          pbVar1[0xb] = -((byte)((bVar101 < bVar151) * bVar101 | (bVar101 >= bVar151) * bVar151) ==
                         bVar151) & bVar118 | bVar133;
          pbVar1[0xc] = -((byte)((bVar102 < bVar152) * bVar102 | (bVar102 >= bVar152) * bVar152) ==
                         bVar152) & bVar119 | bVar134;
          pbVar1[0xd] = -((byte)((bVar103 < bVar153) * bVar103 | (bVar103 >= bVar153) * bVar153) ==
                         bVar153) & bVar120 | bVar135;
          pbVar1[0xe] = -((byte)((bVar104 < bVar154) * bVar104 | (bVar104 >= bVar154) * bVar154) ==
                         bVar154) & bVar121 | bVar136;
          pbVar1[0xf] = -((byte)((bVar105 < bVar155) * bVar105 | (bVar105 >= bVar155) * bVar155) ==
                         bVar155) & bVar122 | bVar137;
          pbVar61 = (byte *)((longlong)pplVar55 + uVar77 + 0x10);
          *pbVar61 = -((byte)((bVar66 < bVar156) * bVar66 | (bVar66 >= bVar156) * bVar156) ==
                      bVar156) & bVar106 | bVar138;
          pbVar61[1] = -((byte)((bVar52 < bVar157) * bVar52 | (bVar52 >= bVar157) * bVar157) ==
                        bVar157) & bVar108 | bVar11;
          pbVar61[2] = -((byte)((bVar5 < bVar158) * bVar5 | (bVar5 >= bVar158) * bVar158) == bVar158
                        ) & bVar109 | bVar12;
          pbVar61[3] = -((byte)((bVar6 < bVar159) * bVar6 | (bVar6 >= bVar159) * bVar159) == bVar159
                        ) & bVar110 | bVar13;
          pbVar61[4] = -((byte)((bVar7 < bVar160) * bVar7 | (bVar7 >= bVar160) * bVar160) == bVar160
                        ) & bVar111 | bVar14;
          pbVar61[5] = -((byte)((bVar8 < bVar161) * bVar8 | (bVar8 >= bVar161) * bVar161) == bVar161
                        ) & bVar112 | bVar15;
          pbVar61[6] = -((byte)((bVar9 < bVar162) * bVar9 | (bVar9 >= bVar162) * bVar162) == bVar162
                        ) & bVar113 | bVar16;
          pbVar61[7] = -((byte)((bVar10 < bVar163) * bVar10 | (bVar10 >= bVar163) * bVar163) ==
                        bVar163) & bVar114 | bVar17;
          pbVar61[8] = -((byte)((bVar93 < bVar164) * bVar93 | (bVar93 >= bVar164) * bVar164) ==
                        bVar164) & bVar115 | bVar18;
          pbVar61[9] = -((byte)((bVar99 < bVar165) * bVar99 | (bVar99 >= bVar165) * bVar165) ==
                        bVar165) & bVar116 | bVar19;
          pbVar61[10] = -((byte)((bVar100 < bVar166) * bVar100 | (bVar100 >= bVar166) * bVar166) ==
                         bVar166) & bVar117 | bVar20;
          pbVar61[0xb] = -((byte)((bVar101 < bVar167) * bVar101 | (bVar101 >= bVar167) * bVar167) ==
                          bVar167) & bVar118 | bVar21;
          pbVar61[0xc] = -((byte)((bVar102 < bVar168) * bVar102 | (bVar102 >= bVar168) * bVar168) ==
                          bVar168) & bVar119 | bVar22;
          pbVar61[0xd] = -((byte)((bVar103 < bVar169) * bVar103 | (bVar103 >= bVar169) * bVar169) ==
                          bVar169) & bVar120 | bVar23;
          pbVar61[0xe] = -((byte)((bVar104 < bVar170) * bVar104 | (bVar104 >= bVar170) * bVar170) ==
                          bVar170) & bVar121 | bVar24;
          pbVar61[0xf] = -((byte)((bVar105 < bVar171) * bVar105 | (bVar105 >= bVar171) * bVar171) ==
                          bVar171) & bVar122 | bVar25;
          uVar77 = uVar77 + 0x20;
        } while (uVar56 != uVar77);
        if (uVar45 == uVar56) goto LAB_004fba36;
        uVar77 = uVar56;
        if ((uVar45 & 0x18) != 0) goto LAB_004fb94d;
      }
      do {
        *(byte *)((longlong)pplVar55 + uVar56) =
             ((byte)(*(byte *)((longlong)pplVar55 + uVar56) + 0xbf) < 0x1a) << 5 |
             *(byte *)((longlong)pplVar55 + uVar56);
        uVar56 = uVar56 + 1;
LAB_004fba31:
      } while (uVar45 != uVar56);
    }
LAB_004fba36:
    local_1e0 = uVar45;
    local_1d0 = uVar45;
    pplVar76 = (longlong **)*param_6;
    local_1d8 = pplVar55;
    local_148 = param_6;
    if (pplVar76 != (longlong **)0x0) {
      local_240 = (longlong **)param_6[1];
      local_258 = (longlong **)0x0;
      pplVar55 = pplVar76;
      local_260 = local_240;
      do {
        uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar55 + 0x272));
        local_228 = (longlong **)uVar77;
        uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar55 + 0x272) * 8);
        lVar71 = uVar56 * 3;
        uVar78 = 0xffffffffffffffff;
        pplVar70 = pplVar55 + 0x2d;
        pplVar63 = pplVar55 + -2;
        do {
          pplVar79 = pplVar63;
          if (lVar71 == 0) goto LAB_004fbb21;
          plVar67 = pplVar70[2];
          lVar75 = (longlong)plVar67 - 10;
          if ((longlong *)0x9 < plVar67) {
            plVar67 = (longlong *)0xa;
          }
          iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
          auVar172._8_8_ = extraout_XMM0_Qb_00;
          auVar172._0_8_ = extraout_XMM0_Qa;
          lVar75 = -lVar75;
          if (iVar53 != 0) {
            lVar75 = (longlong)iVar53;
          }
          bVar66 = (0 < lVar75) - (lVar75 < 0);
          uVar56 = (ulonglong)bVar66;
          uVar78 = uVar78 + 1;
          lVar71 = lVar71 + -0x18;
          pplVar70 = pplVar70 + 3;
          pplVar63 = pplVar79 + 4;
        } while (bVar66 == 1);
        uVar77 = uVar78;
        if (bVar66 == 0) {
          if (*(char *)(pplVar79 + 2) != '\x05') goto LAB_004fbf97;
          pplVar55 = (longlong **)pplVar79[3];
          if (pplVar55 == (longlong **)0x0) goto LAB_004fbf97;
          plVar67 = pplVar79[4];
          local_228 = (longlong **)plVar67;
          pplVar70 = pplVar55;
          local_258 = (longlong **)plVar67;
          goto LAB_004fbb7b;
        }
LAB_004fbb21:
        bVar82 = local_260 == (longlong **)0x0;
        local_260 = (longlong **)((longlong)local_260 + -1);
        if (bVar82) goto LAB_004fbfa0;
        pplVar55 = (longlong **)pplVar55[uVar77 + 0x4f];
      } while( true );
    }
    applStack_1b0[0] = (longlong **)0x0;
    pplVar55 = (longlong **)0x0;
    goto LAB_004fc243;
  }
LAB_004fb81e:
  (*(code *)PTR_handle_error_00798ff0)();
  goto LAB_004fba15;
LAB_004fbb7b:
  uVar77 = (ulonglong)*(ushort *)((longlong)pplVar70 + 0x272);
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  pplVar63 = pplVar70 + 0x2d;
  pplVar79 = pplVar70 + -2;
  do {
    pplVar60 = pplVar79;
    local_248 = pplVar55;
    pplVar62 = pplVar55;
    if (lVar71 == 0) goto LAB_004fbc11;
    plVar68 = pplVar63[2];
    lVar75 = (longlong)plVar68 - 6;
    if ((longlong *)0x5 < plVar68) {
      plVar68 = (longlong *)0x6;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar68);
    auVar172._8_8_ = extraout_XMM0_Qb_01;
    auVar172._0_8_ = extraout_XMM0_Qa_00;
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    pplVar63 = pplVar63 + 3;
    pplVar79 = pplVar60 + 4;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 == 0) {
    if ((*(char *)(pplVar60 + 2) == '\x05') && (plVar68 = pplVar60[3], plVar68 != (longlong *)0x0))
    {
      local_208 = pplVar60[4];
      plVar58 = plVar68;
      local_260 = (longlong **)local_208;
      goto LAB_004fbc8e;
    }
    goto LAB_004fbe42;
  }
LAB_004fbc11:
  bVar82 = local_258 == (longlong **)0x0;
  local_258 = (longlong **)((longlong)local_258 + -1);
  if (bVar82) goto LAB_004fbe42;
  pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
  goto LAB_004fbb7b;
LAB_004fbc8e:
  uVar2 = *(ushort *)((longlong)plVar58 + 0x272);
  local_258 = (longlong **)(plVar58 + -4);
  uVar56 = (ulonglong)((uint)uVar2 * 8);
  lVar71 = uVar56 * 3;
  uVar77 = 0xffffffffffffffff;
  plVar57 = plVar58 + 0x2d;
  do {
    if (lVar71 == 0) {
      uVar77 = (ulonglong)uVar2;
      goto LAB_004fbd32;
    }
    uVar78 = plVar57[2];
    lVar75 = uVar78 - 0xf;
    if (0xe < uVar78) {
      uVar78 = 0xf;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar78);
    auVar172._8_8_ = extraout_XMM0_Qb_02;
    auVar172._0_8_ = extraout_XMM0_Qa_01;
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    local_258 = local_258 + 4;
    uVar77 = uVar77 + 1;
    lVar71 = lVar71 + -0x18;
    plVar57 = plVar57 + 3;
  } while (bVar66 == 1);
  if (bVar66 == 0) goto LAB_004fbfa0;
LAB_004fbd32:
  bVar82 = local_260 == (longlong **)0x0;
  local_260 = (longlong **)((longlong)local_260 + -1);
  if (bVar82) goto LAB_004fbd60;
  plVar58 = (longlong *)plVar58[uVar77 + 0x4f];
  goto LAB_004fbc8e;
LAB_004fbd60:
  uVar2 = *(ushort *)((longlong)plVar68 + 0x272);
  local_258 = (longlong **)(plVar68 + -4);
  uVar56 = (ulonglong)((uint)uVar2 * 8);
  lVar71 = uVar56 * 3;
  uVar77 = 0xffffffffffffffff;
  plVar58 = plVar68 + 0x2d;
  do {
    if (lVar71 == 0) {
      uVar77 = (ulonglong)uVar2;
      goto LAB_004fbdf8;
    }
    uVar78 = plVar58[2];
    lVar75 = uVar78 - 0xe;
    if (0xd < uVar78) {
      uVar78 = 0xe;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar78);
    auVar172._8_8_ = extraout_XMM0_Qb_03;
    auVar172._0_8_ = extraout_XMM0_Qa_02;
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    local_258 = local_258 + 4;
    uVar77 = uVar77 + 1;
    lVar71 = lVar71 + -0x18;
    plVar58 = plVar58 + 3;
  } while (bVar66 == 1);
  if (bVar66 == 0) goto LAB_004fbfa0;
LAB_004fbdf8:
  bVar82 = local_208 == (longlong *)0x0;
  local_208 = (longlong *)((longlong)local_208 + -1);
  if (bVar82) goto LAB_004fbe42;
  plVar68 = (longlong *)plVar68[uVar77 + 0x4f];
  goto LAB_004fbd60;
LAB_004fbe42:
  uVar77 = (ulonglong)*(ushort *)((longlong)pplVar62 + 0x272);
  local_258 = pplVar62 + -4;
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar62 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  pplVar70 = pplVar62 + 0x2d;
  do {
    if (lVar71 == 0) goto LAB_004fbe2b;
    plVar68 = pplVar70[2];
    plVar58 = (longlong *)0xf;
    if (plVar68 < (longlong *)0xf) {
      plVar58 = plVar68;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar58);
    auVar172._8_8_ = extraout_XMM0_Qb_04;
    auVar172._0_8_ = extraout_XMM0_Qa_03;
    lVar75 = -((longlong)plVar68 - 0xfU);
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    local_258 = local_258 + 4;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    pplVar70 = pplVar70 + 3;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 == 0) goto LAB_004fbfa0;
LAB_004fbe2b:
  bVar82 = plVar67 == (longlong *)0x0;
  plVar67 = (longlong *)((longlong)plVar67 + -1);
  if (bVar82) goto LAB_004fbeec;
  pplVar62 = (longlong **)pplVar62[uVar77 + 0x4f];
  goto LAB_004fbe42;
LAB_004fbeec:
  do {
    uVar77 = (ulonglong)*(ushort *)((longlong)pplVar55 + 0x272);
    local_258 = pplVar55 + -4;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar55 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar70 = pplVar55 + 0x2d;
    do {
      if (lVar71 == 0) goto LAB_004fbf82;
      plVar67 = pplVar70[2];
      lVar75 = (longlong)plVar67 - 0xe;
      if ((longlong *)0xd < plVar67) {
        plVar67 = (longlong *)0xe;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_05;
      auVar172._0_8_ = extraout_XMM0_Qa_04;
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      local_258 = local_258 + 4;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar70 = pplVar70 + 3;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) goto LAB_004fbfa0;
LAB_004fbf82:
    bVar82 = local_228 == (longlong **)0x0;
    local_228 = (longlong **)((longlong)local_228 + -1);
    if (bVar82) break;
    pplVar55 = (longlong **)pplVar55[uVar77 + 0x4f];
  } while( true );
LAB_004fbf97:
  local_258 = (longlong **)0x0;
LAB_004fbfa0:
  local_238 = pplVar76;
  local_260 = local_240;
  do {
    uVar77 = CONCAT62(0,*(ushort *)((longlong)local_238 + 0x272));
    pplVar55 = local_238 + -4;
    local_228 = (longlong **)uVar77;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)local_238 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar70 = local_238 + 0x2d;
    do {
      applStack_1b0[0] = local_258;
      if (lVar71 == 0) goto LAB_004fc054;
      plVar67 = pplVar70[2];
      plVar68 = plVar67 + -2;
      if ((longlong *)0xf < plVar67) {
        plVar67 = (longlong *)0x10;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_06;
      auVar172._0_8_ = extraout_XMM0_Qa_05;
      lVar75 = -(longlong)plVar68;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      pplVar55 = pplVar55 + 4;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar70 = pplVar70 + 3;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) goto LAB_004fc144;
LAB_004fc054:
    bVar82 = local_260 == (longlong **)0x0;
    local_260 = (longlong **)((longlong)local_260 + -1);
    if (bVar82) break;
    local_238 = (longlong **)local_238[uVar77 + 0x4f];
  } while( true );
  pplVar70 = pplVar76;
  do {
    local_238 = (longlong **)(ulonglong)*(ushort *)((longlong)pplVar70 + 0x272);
    pplVar55 = pplVar70 + -4;
    uVar77 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
    lVar71 = uVar77 * 3;
    pplVar79 = (longlong **)0xffffffffffffffff;
    pplVar63 = pplVar70 + 0x2d;
    do {
      if (lVar71 == 0) {
        pplVar79 = local_238;
        goto LAB_004fc121;
      }
      plVar67 = pplVar63[2];
      lVar75 = (longlong)plVar67 - 0x11;
      if ((longlong *)0x10 < plVar67) {
        plVar67 = (longlong *)0x11;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar77,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_07;
      auVar172._0_8_ = extraout_XMM0_Qa_06;
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar77 = (ulonglong)bVar66;
      pplVar55 = pplVar55 + 4;
      pplVar79 = (longlong **)((longlong)pplVar79 + 1);
      lVar71 = lVar71 + -0x18;
      pplVar63 = pplVar63 + 3;
    } while (bVar66 == 1);
    if (bVar66 == 0) break;
LAB_004fc121:
    bVar82 = local_240 == (longlong **)0x0;
    local_240 = (longlong **)((longlong)local_240 + -1);
    if (bVar82) goto LAB_004ffc64;
    pplVar70 = (longlong **)pplVar70[(longlong)pplVar79 + 0x4f];
  } while( true );
LAB_004fc144:
  if ((*(char *)pplVar55 == '\x05') &&
     (pplVar70 = (longlong **)pplVar55[1], pplVar70 != (longlong **)0x0)) {
    local_248 = (longlong **)pplVar55[2];
    local_238 = pplVar70;
    local_260 = local_248;
    do {
      uVar78 = CONCAT62(0,*(ushort *)((longlong)local_238 + 0x272));
      pplVar55 = local_238 + -4;
      local_228 = (longlong **)uVar78;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)local_238 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar77 = 0xffffffffffffffff;
      pplVar63 = local_238 + 0x2d;
      do {
        if (lVar71 == 0) {
          uVar77 = uVar78;
          goto LAB_004fc211;
        }
        plVar67 = pplVar63[2];
        lVar75 = (longlong)plVar67 - 0xe;
        if ((longlong *)0xd < plVar67) {
          plVar67 = (longlong *)0xe;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        auVar172._8_8_ = extraout_XMM0_Qb_08;
        auVar172._0_8_ = extraout_XMM0_Qa_07;
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        pplVar55 = pplVar55 + 4;
        uVar77 = uVar77 + 1;
        lVar71 = lVar71 + -0x18;
        pplVar63 = pplVar63 + 3;
      } while (bVar66 == 1);
      if (bVar66 == 0) goto LAB_004fc23e;
LAB_004fc211:
      bVar82 = local_260 == (longlong **)0x0;
      local_260 = (longlong **)((longlong)local_260 + -1);
      if (bVar82) goto LAB_004fe0d8;
      local_238 = (longlong **)local_238[uVar77 + 0x4f];
    } while( true );
  }
  pplVar55 = (longlong **)0x0;
LAB_004fc23e:
LAB_004fc243:
  local_1c8._0_4_ = 1;
  local_1c8._4_4_ = 0;
  local_1b8 = (longlong **)0x2;
  applStack_1b0[1] = pplVar55;
  uStack_1a0 = 0;
  pplStack_190 = (longlong **)0x0;
  cVar51 = '\x02';
  local_230 = (longlong **)0xffffffffffffffff;
  lVar71 = 0;
LAB_004fc2b9:
  pplVar70 = (longlong **)(lVar71 + 1);
  pplVar63 = applStack_1b0[lVar71];
  if (applStack_1b0[lVar71] == (longlong **)0x0) {
    if (pplVar55 == (longlong **)0x0) goto LAB_004fcad6;
    bVar82 = pplVar70 == (longlong **)0x2;
    pplVar70 = (longlong **)0x2;
    pplVar63 = pplVar55;
    if (bVar82) goto LAB_004fcad6;
  }
  if ((*(char *)pplVar63 == '\x05') &&
     (pplVar79 = (longlong **)pplVar63[1], pplVar79 != (longlong **)0x0)) {
    local_210 = (longlong **)pplVar63[2];
    pplVar62 = pplVar79;
    local_260 = local_210;
    do {
      uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar62 + 0x272));
      pplVar60 = pplVar62 + -4;
      local_228 = (longlong **)uVar77;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar62 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar78 = 0xffffffffffffffff;
      pplVar59 = pplVar62 + 0x2d;
      do {
        if (lVar71 == 0) goto joined_r0x004fc3be;
        plVar67 = pplVar59[2];
        lVar75 = (longlong)plVar67 - 0xf;
        if ((longlong *)0xe < plVar67) {
          plVar67 = (longlong *)0xf;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        auVar172._8_8_ = extraout_XMM0_Qb_09;
        auVar172._0_8_ = extraout_XMM0_Qa_08;
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        pplVar60 = pplVar60 + 4;
        uVar78 = uVar78 + 1;
        lVar71 = lVar71 + -0x18;
        pplVar59 = pplVar59 + 3;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) goto LAB_004fc4a0;
joined_r0x004fc3be:
      if (local_260 == (longlong **)0x0) goto LAB_004fc3d2;
      local_260 = (longlong **)((longlong)local_260 + -1);
      pplVar62 = (longlong **)pplVar62[uVar77 + 0x4f];
    } while( true );
  }
  goto LAB_004fc2a5;
LAB_004fe0d8:
  do {
    uVar2 = *(ushort *)((longlong)pplVar70 + 0x272);
    pplVar55 = pplVar70 + -4;
    uVar56 = (ulonglong)((uint)uVar2 * 8);
    lVar71 = uVar56 * 3;
    uVar77 = 0xffffffffffffffff;
    pplVar63 = pplVar70 + 0x2d;
    do {
      if (lVar71 == 0) {
        uVar77 = (ulonglong)uVar2;
        goto LAB_004fe181;
      }
      plVar67 = pplVar63[2];
      lVar75 = (longlong)plVar67 - 0xf;
      if ((longlong *)0xe < plVar67) {
        plVar67 = (longlong *)0xf;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_41;
      auVar172._0_8_ = extraout_XMM0_Qa_37;
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      pplVar55 = pplVar55 + 4;
      uVar77 = uVar77 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar63 = pplVar63 + 3;
    } while (bVar66 == 1);
    if (bVar66 == 0) goto LAB_004fc23e;
LAB_004fe181:
    if (local_248 == (longlong **)0x0) break;
    pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
    local_248 = (longlong **)((longlong)local_248 + -1);
  } while( true );
  pplVar55 = (longlong **)0x0;
  goto LAB_004fc243;
LAB_004ffc64:
  pplVar55 = (longlong **)0x0;
  goto LAB_004fc23e;
LAB_004fc3d2:
  pplVar62 = pplVar79;
  local_260 = local_210;
  do {
    uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar62 + 0x272));
    pplVar60 = pplVar62 + -4;
    local_228 = (longlong **)uVar77;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar62 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar59 = pplVar62 + 0x2d;
    do {
      if (lVar71 == 0) goto LAB_004fc475;
      plVar67 = pplVar59[2];
      plVar68 = plVar67 + -2;
      if ((longlong *)0xf < plVar67) {
        plVar67 = (longlong *)0x10;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_10;
      auVar172._0_8_ = extraout_XMM0_Qa_09;
      lVar75 = -(longlong)plVar68;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      pplVar60 = pplVar60 + 4;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar59 = pplVar59 + 3;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) break;
LAB_004fc475:
    bVar82 = local_260 == (longlong **)0x0;
    local_260 = (longlong **)((longlong)local_260 + -1);
    if (bVar82) goto LAB_004fc4b0;
    pplVar62 = (longlong **)pplVar62[uVar77 + 0x4f];
  } while( true );
LAB_004fc4a0:
  if (*(char *)pplVar60 == '\x01') {
    cVar51 = *(char *)((longlong)pplVar60 + 1);
  }
LAB_004fc4b0:
  pplVar62 = pplVar79;
  local_260 = local_210;
  do {
    uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar62 + 0x272));
    pplVar60 = pplVar62 + -4;
    local_228 = (longlong **)uVar77;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar62 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar59 = pplVar62 + 0x2d;
    do {
      if (lVar71 == 0) goto joined_r0x004fc56e;
      plVar67 = pplVar59[2];
      lVar75 = (longlong)plVar67 - 0xe;
      if ((longlong *)0xd < plVar67) {
        plVar67 = (longlong *)0xe;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_11;
      auVar172._0_8_ = extraout_XMM0_Qa_10;
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      pplVar60 = pplVar60 + 4;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar59 = pplVar59 + 3;
    } while (bVar66 == 1);
    local_248 = pplVar79;
    uVar77 = uVar78;
    if (bVar66 == 0) goto LAB_004fc640;
joined_r0x004fc56e:
    if (local_260 == (longlong **)0x0) break;
    local_260 = (longlong **)((longlong)local_260 + -1);
    pplVar62 = (longlong **)pplVar62[uVar77 + 0x4f];
  } while( true );
LAB_004fc587:
  uVar77 = (ulonglong)*(ushort *)((longlong)pplVar79 + 0x272);
  pplVar60 = pplVar79 + -4;
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar79 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  pplVar62 = pplVar79 + 0x2d;
  do {
    local_248 = pplVar79;
    if (lVar71 == 0) goto LAB_004fc623;
    plVar67 = pplVar62[2];
    lVar75 = (longlong)plVar67 - 0xf;
    if ((longlong *)0xe < plVar67) {
      plVar67 = (longlong *)0xf;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
    auVar172._8_8_ = extraout_XMM0_Qb_12;
    auVar172._0_8_ = extraout_XMM0_Qa_11;
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    pplVar60 = pplVar60 + 4;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    pplVar62 = pplVar62 + 3;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 == 0) goto LAB_004fc640;
LAB_004fc623:
  bVar82 = local_210 == (longlong **)0x0;
  local_210 = (longlong **)((longlong)local_210 + -1);
  if (bVar82) goto LAB_004fc7ab;
  pplVar79 = (longlong **)pplVar79[uVar77 + 0x4f];
  goto LAB_004fc587;
LAB_004fc640:
  if (*(char *)pplVar60 == '\x02') {
    if (pplVar60[1] != (longlong *)0x2) {
      if ((int)pplVar60[1] == 1) {
        plVar67 = pplVar60[2];
      }
      else {
        plVar67 = pplVar60[2];
        if ((longlong)plVar67 < 0) goto LAB_004fc711;
      }
      if (plVar67 == (longlong *)0x0) {
        cVar51 = '\0';
        local_258 = (longlong **)&DAT_00000004;
      }
      else {
        local_258 = (longlong **)&DAT_00000006;
        if ((((-1 < (longlong)plVar67) &&
             (local_258 = (longlong **)&DAT_00000007, (longlong *)0x400 < plVar67)) &&
            (local_258 = (longlong **)0x3, (longlong *)0x1000 < plVar67)) &&
           (local_258 = (longlong **)&DAT_00000006, (longlong *)0x3000 < plVar67)) {
          local_258 = (longlong **)(5 - (ulonglong)(plVar67 < (longlong *)0x6001));
        }
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
      if (local_238 == (longlong **)0x0) {
LAB_004fcabe:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004fba15;
      }
      auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_12,local_258);
      auVar172._8_8_ = extraout_XMM0_Qb_13;
      if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
        auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar172._0_8_,1);
        auVar172._8_8_ = extraout_XMM0_Qb_14;
      }
      local_230 = local_258;
      goto LAB_004fc7ab;
    }
LAB_004fc711:
    pplVar60 = (longlong **)pplVar63[1];
    pplVar79 = local_248;
    pplVar62 = local_238;
  }
  else {
LAB_004fc7ab:
    pplVar60 = (longlong **)pplVar63[1];
    pplVar79 = local_248;
    pplVar62 = local_238;
  }
  local_248 = pplVar60;
  if (local_248 != (longlong **)0x0) {
    local_208 = pplVar63[2];
    pplVar63 = local_248;
    local_238 = (longlong **)local_208;
    do {
      uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar63 + 0x272));
      pplVar79 = pplVar63 + -4;
      local_228 = (longlong **)uVar77;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar63 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar78 = 0xffffffffffffffff;
      pplVar60 = pplVar63 + 0x2d;
      do {
        if (lVar71 == 0) goto joined_r0x004fc8a3;
        plVar67 = pplVar60[2];
        lVar75 = (longlong)plVar67 - 0xd;
        if ((longlong *)0xc < plVar67) {
          plVar67 = (longlong *)0xd;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        auVar172._8_8_ = extraout_XMM0_Qb_15;
        auVar172._0_8_ = extraout_XMM0_Qa_13;
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        pplVar79 = pplVar79 + 4;
        uVar78 = uVar78 + 1;
        lVar71 = lVar71 + -0x18;
        pplVar60 = pplVar60 + 3;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) goto LAB_004fc992;
joined_r0x004fc8a3:
      if (local_238 == (longlong **)0x0) goto LAB_004fc8c1;
      local_238 = (longlong **)((longlong)local_238 + -1);
      pplVar63 = (longlong **)pplVar63[uVar77 + 0x4f];
    } while( true );
  }
  local_248 = pplVar79;
  goto LAB_004fca5e;
LAB_004fc8c1:
  uVar77 = (ulonglong)*(ushort *)((longlong)local_248 + 0x272);
  pplVar79 = local_248 + -4;
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)local_248 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  pplVar63 = local_248 + 0x2d;
  do {
    if (lVar71 == 0) goto LAB_004fc95d;
    plVar67 = pplVar63[2];
    lVar75 = (longlong)plVar67 - 0xe;
    if ((longlong *)0xd < plVar67) {
      plVar67 = (longlong *)0xe;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
    auVar172._8_8_ = extraout_XMM0_Qb_16;
    auVar172._0_8_ = extraout_XMM0_Qa_14;
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    pplVar79 = pplVar79 + 4;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    pplVar63 = pplVar63 + 3;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 == 0) goto LAB_004fc992;
LAB_004fc95d:
  bVar82 = local_208 == (longlong *)0x0;
  local_208 = (longlong *)((longlong)local_208 + -1);
  if (bVar82) goto LAB_004fca95;
  local_248 = (longlong **)local_248[uVar77 + 0x4f];
  goto LAB_004fc8c1;
LAB_004fc992:
  if (*(char *)pplVar79 == '\x03') {
    auVar173 = normalize_effort_token(pplVar79[2],pplVar79[3]);
    pplVar63 = auVar173._8_8_;
    auVar172._8_8_ = extraout_XMM0_Qb_17;
    auVar172._0_8_ = extraout_XMM0_Qa_15;
    if (auVar173._0_8_ == (int *)0x0) {
      local_238 = pplVar62;
      goto LAB_004fc2a5;
    }
    if (pplVar63 == (longlong **)&DAT_00000004) {
      if (*auVar173._0_8_ == 0x656e6f6e) {
        cVar51 = '\0';
      }
LAB_004fc9e4:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
      uVar86 = extraout_XMM0_Qa_16;
      if (local_238 == (longlong **)0x0) goto LAB_004fcabe;
    }
    else {
      if ((longlong)pplVar63 < 0) goto LAB_004fcabe;
      if (pplVar63 != (longlong **)0x0) goto LAB_004fc9e4;
      local_238 = (longlong **)0x1;
      uVar86 = extraout_XMM0_Qa_15;
    }
    auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar63);
    auVar172._8_8_ = extraout_XMM0_Qb_18;
    if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
      auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar172._0_8_,1);
      auVar172._8_8_ = extraout_XMM0_Qb_19;
    }
    local_258 = pplVar63;
    local_230 = pplVar63;
    goto LAB_004fc2a5;
  }
LAB_004fca5e:
  local_238 = pplVar62;
LAB_004fc2a5:
  lVar71 = 1;
  if (pplVar70 == (longlong **)0x2) goto LAB_004fcad6;
  goto LAB_004fc2b9;
LAB_004fca95:
  local_238 = pplVar62;
  goto LAB_004fc2a5;
LAB_004fcad6:
  local_210 = local_258;
  if (pplVar76 != (longlong **)0x0) {
    local_258 = (longlong **)local_148[1];
    pplVar55 = (longlong **)0x0;
    pplVar63 = pplVar76;
    local_260 = local_258;
    while( true ) {
      uVar77 = (ulonglong)*(ushort *)((longlong)pplVar63 + 0x272);
      local_228 = pplVar63;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar63 + 0x272) * 8);
      pplVar70 = (longlong **)(uVar56 * 3);
      uVar78 = 0xffffffffffffffff;
      pplVar79 = pplVar63 + 0x2d;
      pplVar62 = pplVar63 + -2;
      do {
        pplVar60 = pplVar62;
        if (pplVar70 == (longlong **)0x0) {
          pplVar70 = (longlong **)0x0;
          goto LAB_004fcb95;
        }
        plVar67 = pplVar79[2];
        lVar71 = (longlong)plVar67 - 10;
        if ((longlong *)0x9 < plVar67) {
          plVar67 = (longlong *)0xa;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        auVar172._8_8_ = extraout_XMM0_Qb_20;
        auVar172._0_8_ = extraout_XMM0_Qa_17;
        lVar71 = -lVar71;
        if (iVar53 != 0) {
          lVar71 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar71) - (lVar71 < 0);
        uVar56 = (ulonglong)bVar66;
        uVar78 = uVar78 + 1;
        pplVar70 = pplVar70 + -3;
        pplVar79 = pplVar79 + 3;
        pplVar62 = pplVar60 + 4;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) break;
LAB_004fcb95:
      bVar82 = local_260 == (longlong **)0x0;
      local_260 = (longlong **)((longlong)local_260 + -1);
      if (bVar82) goto LAB_004fdb48;
      pplVar63 = (longlong **)pplVar63[uVar77 + 0x4f];
    }
    if (*(char *)(pplVar60 + 2) == '\x05') {
      plVar67 = pplVar60[3];
      if (plVar67 == (longlong *)0x0) goto LAB_004fdc14;
      local_260 = (longlong **)pplVar60[4];
      goto LAB_004fcbe7;
    }
    pplVar55 = (longlong **)0x0;
    goto LAB_004fdb48;
  }
  pplVar55 = (longlong **)0x0;
LAB_004fccb3:
  pplVar79 = (longlong **)0x0;
LAB_004fccb5:
  local_1c8._0_4_ = 1;
  local_1c8._4_4_ = 0;
  pplStack_1c0 = (longlong **)0x0;
  local_1b8 = (longlong **)0x2;
  applStack_1b0[0] = pplVar55;
  applStack_1b0[1] = pplVar79;
  uStack_1a0 = 0;
  pplStack_190 = (longlong **)0x0;
  bVar82 = false;
  lVar71 = 0;
LAB_004fcd39:
  lVar75 = lVar71 + 1;
  pplVar55 = applStack_1b0[lVar71];
  if (applStack_1b0[lVar71] == (longlong **)0x0) {
    if (pplVar79 != (longlong **)0x0) {
      bVar83 = lVar75 != 2;
      lVar75 = 2;
      pplVar55 = pplVar79;
      if (bVar83) goto LAB_004fcd6d;
    }
    pplVar55 = local_238;
    goto LAB_004fdc21;
  }
LAB_004fcd6d:
  if (*(char *)pplVar55 != '\x01') {
    if (*(char *)pplVar55 != '\x05') goto LAB_004fcd25;
    plVar67 = pplVar55[1];
    local_228 = (longlong **)lVar75;
    if (plVar67 == (longlong *)0x0) {
      local_248 = (longlong **)0xffffffffffffffff;
      plVar67 = pplVar55[1];
      pplVar63 = local_210;
      if (plVar67 != (longlong *)0x0) goto LAB_004fcfbe;
      goto LAB_004fdad8;
    }
    local_258 = (longlong **)pplVar55[2];
LAB_004fcda7:
    uVar2 = *(ushort *)((longlong)plVar67 + 0x272);
    uVar77 = (ulonglong)((uint)uVar2 * 8);
    lVar71 = uVar77 * 3;
    pplVar70 = (longlong **)0xffffffffffffffff;
    plVar68 = plVar67 + 0x2d;
    plVar58 = plVar67 + -1;
    do {
      plVar57 = plVar58;
      if (lVar71 == 0) {
        pplVar70 = (longlong **)(ulonglong)uVar2;
        goto LAB_004fce55;
      }
      uVar56 = plVar68[2];
      lVar72 = uVar56 - 4;
      if (3 < uVar56) {
        uVar56 = 4;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar77,uVar56);
      auVar172._8_8_ = extraout_XMM0_Qb_22;
      auVar172._0_8_ = extraout_XMM0_Qa_19;
      lVar72 = -lVar72;
      if (iVar53 != 0) {
        lVar72 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar72) - (lVar72 < 0);
      uVar77 = (ulonglong)bVar66;
      pplVar70 = (longlong **)((longlong)pplVar70 + 1);
      lVar71 = lVar71 + -0x18;
      plVar68 = plVar68 + 3;
      plVar58 = plVar57 + 4;
    } while (bVar66 == 1);
    if (bVar66 == 0) {
      if ((char)plVar57[1] != '\x03') {
        local_248 = (longlong **)0xffffffffffffffff;
        goto LAB_004fcfab;
      }
      auVar172._0_8_ = ::<str>::trim_matches::<<char>::is_whitespace>(plVar57[3],plVar57[4]);
      auVar172._8_8_ = extraout_XMM0_Qb_25;
      if ((longlong)extraout_RDX < 0) goto LAB_004fdb2f;
      pplVar70 = extraout_RDX;
      if (extraout_RDX == (longlong **)0x0) {
        local_248 = (longlong **)0x0;
        goto LAB_004fcfab;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      plVar67 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
      if (plVar67 == (longlong *)0x0) goto LAB_004fdb2f;
      auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_21,extraout_RDX);
      uVar86 = s__001846a0._0_8_;
      cVar42 = UNK_00183f6f;
      cVar41 = UNK_00183f6e;
      cVar40 = UNK_00183f6d;
      cVar39 = UNK_00183f6c;
      cVar38 = UNK_00183f6b;
      cVar37 = UNK_00183f6a;
      cVar36 = UNK_00183f69;
      cVar35 = UNK_00183f68;
      cVar34 = UNK_00183f67;
      cVar33 = UNK_00183f66;
      cVar32 = UNK_00183f65;
      cVar31 = UNK_00183f64;
      cVar30 = UNK_00183f63;
      cVar29 = UNK_00183f62;
      cVar28 = UNK_00183f61;
      cVar50 = DAT_00183f60;
      bVar105 = UNK_0018303f;
      bVar104 = UNK_0018303e;
      bVar103 = UNK_0018303d;
      bVar102 = UNK_0018303c;
      bVar101 = UNK_0018303b;
      bVar100 = UNK_0018303a;
      bVar99 = UNK_00183039;
      bVar93 = UNK_00183038;
      bVar10 = UNK_00183037;
      bVar9 = UNK_00183036;
      bVar8 = UNK_00183035;
      bVar7 = UNK_00183034;
      bVar6 = UNK_00183033;
      bVar5 = UNK_00183032;
      bVar52 = UNK_00183031;
      bVar66 = DAT_00183030;
      auVar172._8_8_ = extraout_XMM0_Qb_26;
      if (extraout_RDX < &DAT_00000008) {
        pplVar63 = (longlong **)0x0;
        goto LAB_004fd970;
      }
      auVar173[1] = UNK_00184831;
      auVar173[0] = DAT_00184830;
      auVar173[2] = UNK_00184832;
      auVar173[3] = UNK_00184833;
      auVar173[4] = UNK_00184834;
      auVar173[5] = UNK_00184835;
      auVar173[6] = UNK_00184836;
      auVar173[7] = UNK_00184837;
      auVar173[8] = UNK_00184838;
      auVar173[9] = UNK_00184839;
      auVar173[10] = UNK_0018483a;
      auVar173[0xb] = UNK_0018483b;
      auVar173[0xc] = UNK_0018483c;
      auVar173[0xd] = UNK_0018483d;
      auVar173[0xe] = UNK_0018483e;
      auVar173[0xf] = UNK_0018483f;
      if (extraout_RDX < &DAT_00000020) {
        pplVar62 = (longlong **)0x0;
        goto LAB_004fd3cc;
      }
      pplVar63 = (longlong **)((ulonglong)extraout_RDX & 0x7fffffffffffffe0);
      pplVar62 = (longlong **)0x0;
      do {
        auVar172 = *(undefined1 (*) [16])((longlong)plVar67 + (longlong)pplVar62);
        auVar87 = *(undefined1 (*) [16])((longlong)(plVar67 + 2) + (longlong)pplVar62);
        bVar106 = auVar172[0] + cVar50;
        bVar108 = auVar172[1] + cVar28;
        bVar109 = auVar172[2] + cVar29;
        bVar110 = auVar172[3] + cVar30;
        bVar111 = auVar172[4] + cVar31;
        bVar112 = auVar172[5] + cVar32;
        bVar113 = auVar172[6] + cVar33;
        bVar114 = auVar172[7] + cVar34;
        bVar115 = auVar172[8] + cVar35;
        bVar116 = auVar172[9] + cVar36;
        bVar117 = auVar172[10] + cVar37;
        bVar118 = auVar172[0xb] + cVar38;
        bVar119 = auVar172[0xc] + cVar39;
        bVar120 = auVar172[0xd] + cVar40;
        bVar121 = auVar172[0xe] + cVar41;
        bVar122 = auVar172[0xf] + cVar42;
        bVar123 = auVar87[0] + cVar50;
        bVar124 = auVar87[1] + cVar28;
        bVar125 = auVar87[2] + cVar29;
        bVar126 = auVar87[3] + cVar30;
        bVar127 = auVar87[4] + cVar31;
        bVar128 = auVar87[5] + cVar32;
        bVar129 = auVar87[6] + cVar33;
        bVar130 = auVar87[7] + cVar34;
        bVar131 = auVar87[8] + cVar35;
        bVar132 = auVar87[9] + cVar36;
        bVar133 = auVar87[10] + cVar37;
        bVar134 = auVar87[0xb] + cVar38;
        bVar135 = auVar87[0xc] + cVar39;
        bVar136 = auVar87[0xd] + cVar40;
        bVar137 = auVar87[0xe] + cVar41;
        bVar138 = auVar87[0xf] + cVar42;
        auVar139[0] = -((byte)((bVar66 < bVar106) * bVar66 | (bVar66 >= bVar106) * bVar106) ==
                       bVar106);
        auVar139[1] = -((byte)((bVar52 < bVar108) * bVar52 | (bVar52 >= bVar108) * bVar108) ==
                       bVar108);
        auVar139[2] = -((byte)((bVar5 < bVar109) * bVar5 | (bVar5 >= bVar109) * bVar109) == bVar109)
        ;
        auVar139[3] = -((byte)((bVar6 < bVar110) * bVar6 | (bVar6 >= bVar110) * bVar110) == bVar110)
        ;
        auVar139[4] = -((byte)((bVar7 < bVar111) * bVar7 | (bVar7 >= bVar111) * bVar111) == bVar111)
        ;
        auVar139[5] = -((byte)((bVar8 < bVar112) * bVar8 | (bVar8 >= bVar112) * bVar112) == bVar112)
        ;
        auVar139[6] = -((byte)((bVar9 < bVar113) * bVar9 | (bVar9 >= bVar113) * bVar113) == bVar113)
        ;
        auVar139[7] = -((byte)((bVar10 < bVar114) * bVar10 | (bVar10 >= bVar114) * bVar114) ==
                       bVar114);
        auVar139[8] = -((byte)((bVar93 < bVar115) * bVar93 | (bVar93 >= bVar115) * bVar115) ==
                       bVar115);
        auVar139[9] = -((byte)((bVar99 < bVar116) * bVar99 | (bVar99 >= bVar116) * bVar116) ==
                       bVar116);
        auVar139[10] = -((byte)((bVar100 < bVar117) * bVar100 | (bVar100 >= bVar117) * bVar117) ==
                        bVar117);
        auVar139[0xb] =
             -((byte)((bVar101 < bVar118) * bVar101 | (bVar101 >= bVar118) * bVar118) == bVar118);
        auVar139[0xc] =
             -((byte)((bVar102 < bVar119) * bVar102 | (bVar102 >= bVar119) * bVar119) == bVar119);
        auVar139[0xd] =
             -((byte)((bVar103 < bVar120) * bVar103 | (bVar103 >= bVar120) * bVar120) == bVar120);
        auVar139[0xe] =
             -((byte)((bVar104 < bVar121) * bVar104 | (bVar104 >= bVar121) * bVar121) == bVar121);
        auVar139[0xf] =
             -((byte)((bVar105 < bVar122) * bVar105 | (bVar105 >= bVar122) * bVar122) == bVar122);
        auVar107[0] = -((byte)((bVar66 < bVar123) * bVar66 | (bVar66 >= bVar123) * bVar123) ==
                       bVar123);
        auVar107[1] = -((byte)((bVar52 < bVar124) * bVar52 | (bVar52 >= bVar124) * bVar124) ==
                       bVar124);
        auVar107[2] = -((byte)((bVar5 < bVar125) * bVar5 | (bVar5 >= bVar125) * bVar125) == bVar125)
        ;
        auVar107[3] = -((byte)((bVar6 < bVar126) * bVar6 | (bVar6 >= bVar126) * bVar126) == bVar126)
        ;
        auVar107[4] = -((byte)((bVar7 < bVar127) * bVar7 | (bVar7 >= bVar127) * bVar127) == bVar127)
        ;
        auVar107[5] = -((byte)((bVar8 < bVar128) * bVar8 | (bVar8 >= bVar128) * bVar128) == bVar128)
        ;
        auVar107[6] = -((byte)((bVar9 < bVar129) * bVar9 | (bVar9 >= bVar129) * bVar129) == bVar129)
        ;
        auVar107[7] = -((byte)((bVar10 < bVar130) * bVar10 | (bVar10 >= bVar130) * bVar130) ==
                       bVar130);
        auVar107[8] = -((byte)((bVar93 < bVar131) * bVar93 | (bVar93 >= bVar131) * bVar131) ==
                       bVar131);
        auVar107[9] = -((byte)((bVar99 < bVar132) * bVar99 | (bVar99 >= bVar132) * bVar132) ==
                       bVar132);
        auVar107[10] = -((byte)((bVar100 < bVar133) * bVar100 | (bVar100 >= bVar133) * bVar133) ==
                        bVar133);
        auVar107[0xb] =
             -((byte)((bVar101 < bVar134) * bVar101 | (bVar101 >= bVar134) * bVar134) == bVar134);
        auVar107[0xc] =
             -((byte)((bVar102 < bVar135) * bVar102 | (bVar102 >= bVar135) * bVar135) == bVar135);
        auVar107[0xd] =
             -((byte)((bVar103 < bVar136) * bVar103 | (bVar103 >= bVar136) * bVar136) == bVar136);
        auVar107[0xe] =
             -((byte)((bVar104 < bVar137) * bVar104 | (bVar104 >= bVar137) * bVar137) == bVar137);
        auVar107[0xf] =
             -((byte)((bVar105 < bVar138) * bVar105 | (bVar105 >= bVar138) * bVar138) == bVar138);
        *(undefined1 (*) [16])((longlong)plVar67 + (longlong)pplVar62) =
             auVar139 & auVar173 | auVar172;
        *(undefined1 (*) [16])((longlong)(plVar67 + 2) + (longlong)pplVar62) =
             auVar107 & auVar173 | auVar87;
        pplVar62 = pplVar62 + 4;
      } while (pplVar63 != pplVar62);
      if (extraout_RDX != pplVar63) {
        pplVar62 = pplVar63;
        if (((ulonglong)extraout_RDX & 0x18) == 0) goto LAB_004fd970;
LAB_004fd3cc:
        cVar34 = UNK_00184167;
        cVar33 = UNK_00184166;
        cVar32 = UNK_00184165;
        cVar31 = UNK_00184164;
        cVar30 = UNK_00184163;
        cVar29 = UNK_00184162;
        cVar28 = UNK_00184161;
        cVar50 = DAT_00184160;
        uVar43 = _DAT_001840c0;
        pplVar63 = (longlong **)((ulonglong)extraout_RDX & 0x7ffffffffffffff8);
        do {
          uVar77 = *(ulonglong *)((longlong)plVar67 + (longlong)pplVar62);
          auVar172._8_8_ = 0;
          auVar172._0_8_ = uVar77;
          bVar93 = (char)uVar77 + cVar50;
          bVar99 = (char)(uVar77 >> 8) + cVar28;
          bVar100 = (char)(uVar77 >> 0x10) + cVar29;
          bVar101 = (char)(uVar77 >> 0x18) + cVar30;
          bVar102 = (char)(uVar77 >> 0x20) + cVar31;
          bVar103 = (char)(uVar77 >> 0x28) + cVar32;
          bVar104 = (char)(uVar77 >> 0x30) + cVar33;
          bVar105 = (char)(uVar77 >> 0x38) + cVar34;
          bVar66 = (byte)uVar43;
          bVar52 = (byte)((ulonglong)uVar43 >> 8);
          bVar5 = (byte)((ulonglong)uVar43 >> 0x10);
          bVar6 = (byte)((ulonglong)uVar43 >> 0x18);
          bVar7 = (byte)((ulonglong)uVar43 >> 0x20);
          bVar8 = (byte)((ulonglong)uVar43 >> 0x28);
          bVar9 = (byte)((ulonglong)uVar43 >> 0x30);
          bVar10 = (byte)((ulonglong)uVar43 >> 0x38);
          *(ulonglong *)((longlong)plVar67 + (longlong)pplVar62) =
               ~CONCAT17(-((byte)((bVar105 < bVar10) * bVar10 | (bVar105 >= bVar10) * bVar105) ==
                          bVar105),
                         CONCAT16(-((byte)((bVar104 < bVar9) * bVar9 | (bVar104 >= bVar9) * bVar104)
                                   == bVar104),
                                  CONCAT15(-((byte)((bVar103 < bVar8) * bVar8 |
                                                   (bVar103 >= bVar8) * bVar103) == bVar103),
                                           CONCAT14(-((byte)((bVar102 < bVar7) * bVar7 |
                                                            (bVar102 >= bVar7) * bVar102) == bVar102
                                                     ),CONCAT13(-((byte)((bVar101 < bVar6) * bVar6 |
                                                                        (bVar101 >= bVar6) * bVar101
                                                                        ) == bVar101),
                                                                CONCAT12(-((byte)((bVar100 < bVar5)
                                                                                  * bVar5 |
                                                                                 (bVar100 >= bVar5)
                                                                                 * bVar100) ==
                                                                          bVar100),
                                                                         CONCAT11(-((byte)((bVar99 <
                                                                                           bVar52) *
                                                                                           bVar52 | 
                                                  (bVar99 >= bVar52) * bVar99) == bVar99),
                                                  -((byte)((bVar93 < bVar66) * bVar66 |
                                                          (bVar93 >= bVar66) * bVar93) == bVar93))))
                                                  )))) & uVar86 | uVar77;
          pplVar62 = pplVar62 + 1;
        } while (pplVar63 != pplVar62);
        for (; extraout_RDX != pplVar63; pplVar63 = (longlong **)((longlong)pplVar63 + 1)) {
LAB_004fd970:
          *(byte *)((longlong)plVar67 + (longlong)pplVar63) =
               ((byte)(*(byte *)((longlong)plVar67 + (longlong)pplVar63) + 0xbf) < 0x1a) << 5 |
               *(byte *)((longlong)plVar67 + (longlong)pplVar63);
        }
      }
      local_248 = extraout_RDX;
      switch(extraout_RDX) {
      case (longlong **)0x3:
        if (*(char *)((longlong)plVar67 + 2) != 'f' || (short)*plVar67 != 0x666f) {
          local_248 = (longlong **)0x3;
          break;
        }
LAB_004fda49:
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
        auVar172._8_8_ = extraout_XMM0_Qb_37;
        auVar172._0_8_ = extraout_XMM0_Qa_31;
        if (local_238 != (longlong **)0x0) {
          *(undefined4 *)local_238 = 0x656e6f6e;
          local_210 = (longlong **)&DAT_00000004;
          if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
            auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(4,1);
            auVar172._8_8_ = extraout_XMM0_Qb_38;
          }
          cVar51 = '\0';
          local_230 = (longlong **)&DAT_00000004;
          plVar67 = pplVar55[1];
          goto joined_r0x004fdac8;
        }
        goto LAB_004fde0c;
      case (longlong **)0x4:
        if ((int)*plVar67 == 0x656e6f6e) goto LAB_004fda49;
        local_248 = (longlong **)&DAT_00000004;
        break;
      default:
        break;
      case (longlong **)0x7:
        if (*(int *)((longlong)plVar67 + 3) == 0x64656c62 && (int)*plVar67 == 0x62616e65) {
LAB_004fdb08:
          if (cVar51 == '\x02') {
            cVar51 = '\x01';
          }
        }
        else {
          local_248 = (longlong **)&DAT_00000007;
        }
        break;
      case (longlong **)0x8:
        if (*plVar67 == 0x64656c6261736964) goto LAB_004fda49;
        if (*plVar67 == 0x6576697470616461) goto LAB_004fdb08;
        local_248 = (longlong **)&DAT_00000008;
      }
      goto LAB_004fcfab;
    }
LAB_004fce55:
    bVar83 = local_258 != (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar83) goto code_r0x004fce69;
    local_248 = (longlong **)0xffffffffffffffff;
LAB_004fcfab:
    plVar67 = pplVar55[1];
joined_r0x004fdac8:
    pplVar63 = local_210;
    if (plVar67 == (longlong *)0x0) goto LAB_004fdad8;
LAB_004fcfbe:
    local_258 = (longlong **)pplVar55[2];
    while( true ) {
      pplVar70 = (longlong **)(ulonglong)*(ushort *)((longlong)plVar67 + 0x272);
      uVar77 = (ulonglong)((uint)*(ushort *)((longlong)plVar67 + 0x272) * 8);
      lVar71 = uVar77 * 3;
      pplVar63 = (longlong **)0xffffffffffffffff;
      plVar68 = plVar67 + 0x2d;
      plVar58 = plVar67 + -1;
      do {
        plVar57 = plVar58;
        if (lVar71 == 0) goto LAB_004fd065;
        uVar56 = plVar68[2];
        lVar72 = uVar56 - 7;
        if (6 < uVar56) {
          uVar56 = 7;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar77,uVar56);
        auVar172._8_8_ = extraout_XMM0_Qb_27;
        auVar172._0_8_ = extraout_XMM0_Qa_22;
        lVar72 = -lVar72;
        if (iVar53 != 0) {
          lVar72 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar72) - (lVar72 < 0);
        uVar77 = (ulonglong)bVar66;
        pplVar63 = (longlong **)((longlong)pplVar63 + 1);
        lVar71 = lVar71 + -0x18;
        plVar68 = plVar68 + 3;
        plVar58 = plVar57 + 4;
      } while (bVar66 == 1);
      pplVar70 = pplVar63;
      if (bVar66 == 0) break;
LAB_004fd065:
      bVar83 = local_258 == (longlong **)0x0;
      local_258 = (longlong **)((longlong)local_258 + -1);
      if (bVar83) goto LAB_004fd1a6;
      plVar67 = (longlong *)plVar67[(longlong)((longlong)pplVar70 + 0x4f)];
    }
    if ((char)plVar57[1] == '\x03') {
      auVar173 = ::<str>::trim_matches::<<char>::is_whitespace>(plVar57[3],plVar57[4]);
      pbVar61 = auVar173._0_8_;
      auVar172._8_8_ = extraout_XMM0_Qb_28;
      auVar172._0_8_ = extraout_XMM0_Qa_23;
      if (auVar173._8_8_ != 7) {
        plVar67 = pplVar55[1];
        goto joined_r0x004fd18b;
      }
      if (((((byte)(((byte)(*pbVar61 + 0xbf) < 0x1a) << 5 | *pbVar61) == 0x6f) &&
           ((byte)(((byte)(pbVar61[1] + 0xbf) < 0x1a) << 5 | pbVar61[1]) == 0x6d)) &&
          (((byte)(((byte)(pbVar61[2] + 0xbf) < 0x1a) << 5 | pbVar61[2]) == 0x69 &&
           (((byte)(((byte)(pbVar61[3] + 0xbf) < 0x1a) << 5 | pbVar61[3]) == 0x74 &&
            ((byte)(((byte)(pbVar61[4] + 0xbf) < 0x1a) << 5 | pbVar61[4]) == 0x74)))))) &&
         ((byte)(((byte)(pbVar61[5] + 0xbf) < 0x1a) << 5 | pbVar61[5]) == 0x65)) {
        if ((byte)(((byte)(pbVar61[6] + 0xbf) < 0x1a) << 5 | pbVar61[6]) == 100) {
          bVar82 = true;
        }
        plVar67 = pplVar55[1];
        goto joined_r0x004fd18b;
      }
    }
LAB_004fd1a6:
    plVar67 = pplVar55[1];
joined_r0x004fd18b:
    if (plVar67 != (longlong *)0x0) {
      local_120 = pplVar55[2];
      plVar68 = plVar67;
      local_258 = (longlong **)local_120;
      do {
        uVar77 = (ulonglong)*(ushort *)((longlong)plVar68 + 0x272);
        plVar58 = plVar68 + -4;
        uVar56 = (ulonglong)((uint)*(ushort *)((longlong)plVar68 + 0x272) * 8);
        lVar71 = uVar56 * 3;
        uVar78 = 0xffffffffffffffff;
        plVar57 = plVar68 + 0x2d;
        do {
          pplVar63 = local_210;
          if (lVar71 == 0) goto LAB_004fd268;
          uVar69 = plVar57[2];
          lVar72 = uVar69 - 0xd;
          if (0xc < uVar69) {
            uVar69 = 0xd;
          }
          iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
          auVar172._8_8_ = extraout_XMM0_Qb_29;
          auVar172._0_8_ = extraout_XMM0_Qa_24;
          lVar72 = -lVar72;
          if (iVar53 != 0) {
            lVar72 = (longlong)iVar53;
          }
          bVar66 = (0 < lVar72) - (lVar72 < 0);
          uVar56 = (ulonglong)bVar66;
          plVar58 = plVar58 + 4;
          uVar78 = uVar78 + 1;
          lVar71 = lVar71 + -0x18;
          plVar57 = plVar57 + 3;
        } while (bVar66 == 1);
        uVar77 = uVar78;
        if (bVar66 == 0) goto LAB_004fd4eb;
LAB_004fd268:
        bVar83 = local_258 == (longlong **)0x0;
        local_258 = (longlong **)((longlong)local_258 + -1);
        if (bVar83) goto LAB_004fd414;
        plVar68 = (longlong *)plVar68[uVar77 + 0x4f];
      } while( true );
    }
    goto LAB_004fdadd;
  }
  cVar51 = '\x01';
  if (*(char *)((longlong)pplVar55 + 1) != '\0') goto LAB_004fcd25;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pplVar70 = (longlong **)&DAT_00000004;
  local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
  auVar172._8_8_ = extraout_XMM0_Qb_23;
  auVar172._0_8_ = extraout_XMM0_Qa_20;
  if (local_238 == (longlong **)0x0) {
LAB_004fdb2f:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004fba15;
  }
  *(undefined4 *)local_238 = 0x656e6f6e;
  local_210 = (longlong **)&DAT_00000004;
  if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
    auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(4,1);
    auVar172._8_8_ = extraout_XMM0_Qb_24;
  }
  cVar51 = '\0';
  local_230 = (longlong **)&DAT_00000004;
  goto LAB_004fcd25;
LAB_004fcbe7:
  uVar2 = *(ushort *)((longlong)plVar67 + 0x272);
  local_228 = (longlong **)plVar67;
  pplVar55 = (longlong **)(plVar67 + -4);
  uVar56 = (ulonglong)((uint)uVar2 * 8);
  lVar71 = uVar56 * 3;
  uVar77 = 0xffffffffffffffff;
  plVar68 = plVar67 + 0x2d;
  do {
    if (lVar71 == 0) {
      uVar77 = (ulonglong)uVar2;
      goto LAB_004fcc85;
    }
    uVar78 = plVar68[2];
    lVar75 = uVar78 - 8;
    if (7 < uVar78) {
      uVar78 = 8;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar78);
    auVar172._8_8_ = extraout_XMM0_Qb_21;
    auVar172._0_8_ = extraout_XMM0_Qa_18;
    pplVar70 = (longlong **)-lVar75;
    if (iVar53 != 0) {
      pplVar70 = (longlong **)(longlong)iVar53;
    }
    bVar66 = (0 < (longlong)pplVar70) - ((longlong)pplVar70 < 0);
    uVar56 = (ulonglong)bVar66;
    pplVar55 = pplVar55 + 4;
    uVar77 = uVar77 + 1;
    lVar71 = lVar71 + -0x18;
    plVar68 = plVar68 + 3;
  } while (bVar66 == 1);
  if (bVar66 == 0) goto LAB_004fdb48;
LAB_004fcc85:
  bVar82 = local_260 == (longlong **)0x0;
  local_260 = (longlong **)((longlong)local_260 + -1);
  if (bVar82) goto LAB_004fdc14;
  plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
  goto LAB_004fcbe7;
LAB_004fdc14:
  pplVar55 = (longlong **)0x0;
LAB_004fdb48:
  pplVar63 = pplVar76;
  do {
    uVar78 = CONCAT62(0,*(ushort *)((longlong)pplVar63 + 0x272));
    pplVar79 = pplVar63 + -4;
    local_228 = (longlong **)uVar78;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar63 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar77 = 0xffffffffffffffff;
    pplVar62 = pplVar63 + 0x2d;
    do {
      if (lVar71 == 0) {
        uVar77 = uVar78;
        goto LAB_004fdbee;
      }
      pplVar70 = pplVar62 + 3;
      plVar67 = pplVar62[2];
      plVar68 = plVar67 + -1;
      if ((longlong *)0x7 < plVar67) {
        plVar67 = (longlong *)0x8;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar172._8_8_ = extraout_XMM0_Qb_40;
      auVar172._0_8_ = extraout_XMM0_Qa_32;
      lVar75 = -(longlong)plVar68;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      pplVar79 = pplVar79 + 4;
      uVar77 = uVar77 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar62 = pplVar70;
    } while (bVar66 == 1);
    if (bVar66 == 0) goto LAB_004fccb5;
LAB_004fdbee:
    bVar82 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar82) goto LAB_004fccb3;
    pplVar63 = (longlong **)pplVar63[uVar77 + 0x4f];
  } while( true );
code_r0x004fce69:
  plVar67 = (longlong *)plVar67[(longlong)((longlong)pplVar70 + 0x4f)];
  goto LAB_004fcda7;
LAB_004fd414:
  plVar68 = plVar67;
  do {
    uVar2 = *(ushort *)((longlong)plVar68 + 0x272);
    plVar58 = plVar68 + -4;
    uVar56 = (ulonglong)((uint)uVar2 * 8);
    lVar71 = uVar56 * 3;
    uVar77 = 0xffffffffffffffff;
    plVar57 = plVar68 + 0x2d;
    do {
      if (lVar71 == 0) {
        uVar77 = (ulonglong)uVar2;
        goto LAB_004fd4ba;
      }
      uVar78 = plVar57[2];
      lVar72 = uVar78 - 0xc;
      if (0xb < uVar78) {
        uVar78 = 0xc;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar78);
      auVar172._8_8_ = extraout_XMM0_Qb_30;
      auVar172._0_8_ = extraout_XMM0_Qa_25;
      lVar72 = -lVar72;
      if (iVar53 != 0) {
        lVar72 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar72) - (lVar72 < 0);
      uVar56 = (ulonglong)bVar66;
      plVar58 = plVar58 + 4;
      uVar77 = uVar77 + 1;
      lVar71 = lVar71 + -0x18;
      plVar57 = plVar57 + 3;
    } while (bVar66 == 1);
    if (bVar66 == 0) break;
LAB_004fd4ba:
    bVar83 = local_120 == (longlong *)0x0;
    local_120 = (longlong *)((longlong)local_120 + -1);
    if (bVar83) goto joined_r0x004fd546;
    plVar68 = (longlong *)plVar68[uVar77 + 0x4f];
  } while( true );
LAB_004fd4eb:
  if ((char)*plVar58 == '\x02') {
    if (plVar58[1] == 0) {
      uVar77 = plVar58[2];
      if (-1 < (longlong)uVar77) goto LAB_004fd63c;
    }
    else if ((int)plVar58[1] == 1) {
      uVar77 = plVar58[2];
LAB_004fd63c:
      if (uVar77 == 0) {
        cVar51 = '\0';
      }
      if (local_230 == (longlong **)0xffffffffffffffff) {
        if (uVar77 == 0) {
          local_230 = (longlong **)&DAT_00000004;
        }
        else {
          local_230 = (longlong **)&DAT_00000006;
          if ((((-1 < (longlong)uVar77) && (local_230 = (longlong **)&DAT_00000007, 0x400 < uVar77))
              && (local_230 = (longlong **)0x3, 0x1000 < uVar77)) &&
             (local_230 = (longlong **)&DAT_00000006, 0x3000 < uVar77)) {
            local_230 = (longlong **)(5 - (ulonglong)(uVar77 < 0x6001));
          }
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
        if (local_238 == (longlong **)0x0) {
LAB_004fde0c:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004fba15;
        }
        auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_30,local_230);
        auVar172._8_8_ = extraout_XMM0_Qb_36;
        plVar67 = pplVar55[1];
        pplVar63 = local_230;
      }
    }
  }
joined_r0x004fd546:
  if (plVar67 != (longlong *)0x0) {
    local_210 = (longlong **)pplVar55[2];
    plVar68 = plVar67;
    local_258 = local_210;
    do {
      uVar2 = *(ushort *)((longlong)plVar68 + 0x272);
      plVar58 = plVar68 + -4;
      uVar77 = (ulonglong)((uint)uVar2 * 8);
      lVar71 = uVar77 * 3;
      pplVar70 = (longlong **)0xffffffffffffffff;
      plVar57 = plVar68 + 0x2d;
      do {
        if (lVar71 == 0) {
          pplVar70 = (longlong **)(ulonglong)uVar2;
          goto LAB_004fd612;
        }
        uVar56 = plVar57[2];
        lVar72 = uVar56 - 6;
        if (5 < uVar56) {
          uVar56 = 6;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar77,uVar56);
        auVar172._8_8_ = extraout_XMM0_Qb_31;
        auVar172._0_8_ = extraout_XMM0_Qa_26;
        lVar72 = -lVar72;
        if (iVar53 != 0) {
          lVar72 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar72) - (lVar72 < 0);
        uVar77 = (ulonglong)bVar66;
        plVar58 = plVar58 + 4;
        pplVar70 = (longlong **)((longlong)pplVar70 + 1);
        lVar71 = lVar71 + -0x18;
        plVar57 = plVar57 + 3;
      } while (bVar66 == 1);
      if (bVar66 == 0) goto LAB_004fd7e8;
LAB_004fd612:
      bVar83 = local_258 == (longlong **)0x0;
      local_258 = (longlong **)((longlong)local_258 + -1);
      if (bVar83) goto LAB_004fd718;
      plVar68 = (longlong *)plVar68[(longlong)((longlong)pplVar70 + 0x4f)];
    } while( true );
  }
  pplVar70 = pplVar55;
  local_210 = pplVar63;
  goto LAB_004fdadd;
LAB_004fd718:
  uVar2 = *(ushort *)((longlong)plVar67 + 0x272);
  plVar58 = plVar67 + -4;
  uVar56 = (ulonglong)((uint)uVar2 * 8);
  lVar71 = uVar56 * 3;
  uVar77 = 0xffffffffffffffff;
  plVar68 = plVar67 + 0x2d;
  do {
    if (lVar71 == 0) {
      uVar77 = (ulonglong)uVar2;
      goto LAB_004fd7b8;
    }
    uVar78 = plVar68[2];
    lVar72 = uVar78 - 5;
    if (4 < uVar78) {
      uVar78 = 5;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar78);
    auVar172._8_8_ = extraout_XMM0_Qb_32;
    auVar172._0_8_ = extraout_XMM0_Qa_27;
    pplVar70 = (longlong **)-lVar72;
    if (iVar53 != 0) {
      pplVar70 = (longlong **)(longlong)iVar53;
    }
    bVar66 = (0 < (longlong)pplVar70) - ((longlong)pplVar70 < 0);
    uVar56 = (ulonglong)bVar66;
    plVar58 = plVar58 + 4;
    uVar77 = uVar77 + 1;
    lVar71 = lVar71 + -0x18;
    plVar68 = plVar68 + 3;
  } while (bVar66 == 1);
  if (bVar66 == 0) goto LAB_004fd7e8;
LAB_004fd7b8:
  bVar83 = local_210 == (longlong **)0x0;
  local_210 = (longlong **)((longlong)local_210 + -1);
  if (bVar83) goto LAB_004fdad8;
  plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
  goto LAB_004fd718;
LAB_004fd7e8:
  if ((char)*plVar58 == '\x03') {
    auVar173 = normalize_effort_token(plVar58[2],plVar58[3]);
    pplVar55 = auVar173._8_8_;
    auVar172._8_8_ = extraout_XMM0_Qb_33;
    auVar172._0_8_ = extraout_XMM0_Qa_28;
    if (auVar173._0_8_ != 0) {
      if ((longlong)pplVar55 < 0) goto LAB_004fde0c;
      if (pplVar55 == (longlong **)0x0) {
        local_238 = (longlong **)0x1;
        uVar86 = extraout_XMM0_Qa_28;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        local_238 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
        if (local_238 == (longlong **)0x0) goto LAB_004fde0c;
        uVar86 = extraout_XMM0_Qa_29;
      }
      auVar172._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar55);
      auVar172._8_8_ = extraout_XMM0_Qb_34;
      pcVar64 = (char *)((longlong)local_230 + -1);
      local_230 = pplVar55;
      pplVar63 = pplVar55;
      local_98 = local_238;
      if (pcVar64 < (char *)0xfffffffffffffffe) {
        auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar172._0_8_,1);
        auVar172._8_8_ = extraout_XMM0_Qb_35;
      }
    }
  }
LAB_004fdad8:
  local_210 = pplVar63;
LAB_004fdadd:
  if ((char *)((longlong)local_248 + -1) < (char *)0xfffffffffffffffe) {
    auVar172._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar172._0_8_,1);
    auVar172._8_8_ = extraout_XMM0_Qb_39;
  }
LAB_004fcd25:
  lVar71 = 1;
  pplVar55 = local_238;
  if (lVar75 == 2) goto LAB_004fdc21;
  goto LAB_004fcd39;
LAB_004fdc21:
  if (pplVar76 != (longlong **)0x0) {
    local_258 = (longlong **)local_148[1];
    pplVar63 = pplVar76;
    local_238 = local_258;
    do {
      uVar77 = (ulonglong)*(ushort *)((longlong)pplVar63 + 0x272);
      local_228 = pplVar63;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar63 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar78 = 0xffffffffffffffff;
      pplVar79 = pplVar63 + 0x2d;
      pplVar62 = pplVar63 + -2;
      do {
        pplVar60 = pplVar62;
        if (lVar71 == 0) goto LAB_004fdce1;
        pplVar70 = pplVar79 + 3;
        plVar67 = pplVar79[2];
        lVar75 = (longlong)plVar67 - 10;
        if ((longlong *)0x9 < plVar67) {
          plVar67 = (longlong *)0xa;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        uVar78 = uVar78 + 1;
        lVar71 = lVar71 + -0x18;
        pplVar79 = pplVar70;
        pplVar62 = pplVar60 + 4;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) {
        if ((*(char *)(pplVar60 + 2) != '\x05') ||
           (plVar67 = pplVar60[3], plVar67 == (longlong *)0x0)) goto LAB_004fde3c;
        local_238 = (longlong **)pplVar60[4];
        goto LAB_004fdd31;
      }
LAB_004fdce1:
      bVar83 = local_238 == (longlong **)0x0;
      local_238 = (longlong **)((longlong)local_238 + -1);
      if (bVar83) goto LAB_004fe1ac;
      pplVar63 = (longlong **)pplVar63[uVar77 + 0x4f];
    } while( true );
  }
  goto LAB_004fe1ee;
LAB_004fdd31:
  uVar77 = (ulonglong)*(ushort *)((longlong)plVar67 + 0x272);
  local_228 = (longlong **)plVar67;
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)plVar67 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  plVar68 = plVar67 + 0x2d;
  plVar58 = plVar67 + -1;
  do {
    plVar57 = plVar58;
    if (lVar71 == 0) goto LAB_004fddc1;
    uVar69 = plVar68[2];
    lVar75 = uVar69 - 0x10;
    if (0xf < uVar69) {
      uVar69 = 0x10;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
    pplVar70 = (longlong **)-lVar75;
    if (iVar53 != 0) {
      pplVar70 = (longlong **)(longlong)iVar53;
    }
    bVar66 = (0 < (longlong)pplVar70) - ((longlong)pplVar70 < 0);
    uVar56 = (ulonglong)bVar66;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    plVar68 = plVar68 + 3;
    plVar58 = plVar57 + 4;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 == 0) {
    if ((char)plVar57[1] == '\x03') {
      plVar67 = (longlong *)plVar57[3];
      local_248 = (longlong **)plVar57[4];
    }
    else {
LAB_004fde3c:
      plVar67 = (longlong *)0x0;
    }
    goto LAB_004fde43;
  }
LAB_004fddc1:
  bVar83 = local_238 == (longlong **)0x0;
  local_238 = (longlong **)((longlong)local_238 + -1);
  if (bVar83) goto LAB_004fe1ac;
  plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
  goto LAB_004fdd31;
LAB_004fe1ac:
  plVar67 = (longlong *)0x0;
LAB_004fde43:
  local_228 = (longlong **)plVar67;
  pplVar63 = pplVar76;
  while( true ) {
    uVar77 = (ulonglong)*(ushort *)((longlong)pplVar63 + 0x272);
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar63 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar79 = pplVar63 + 0x2d;
    pplVar62 = pplVar63 + -1;
    do {
      pplVar60 = pplVar62;
      if (lVar71 == 0) goto LAB_004fdef6;
      plVar68 = pplVar79[2];
      plVar58 = plVar68 + -2;
      if ((longlong *)0xf < plVar68) {
        plVar68 = (longlong *)0x10;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar68);
      pplVar70 = (longlong **)-(longlong)plVar58;
      if (iVar53 != 0) {
        pplVar70 = (longlong **)(longlong)iVar53;
      }
      bVar66 = (0 < (longlong)pplVar70) - ((longlong)pplVar70 < 0);
      uVar56 = (ulonglong)bVar66;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar79 = pplVar79 + 3;
      pplVar62 = pplVar60 + 4;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) break;
LAB_004fdef6:
    bVar83 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar83) goto joined_r0x004fdf55;
    pplVar63 = (longlong **)pplVar63[uVar77 + 0x4f];
  }
  if (*(char *)(pplVar60 + 1) == '\x03') {
    plVar68 = pplVar60[3];
    pplVar70 = (longlong **)pplVar60[4];
    if (!(plVar67 != (longlong *)0x0 || plVar68 != (longlong *)0x0)) goto LAB_004fe1ee;
    goto LAB_004fdf5b;
  }
joined_r0x004fdf55:
  plVar68 = (longlong *)0x0;
  if (plVar67 != (longlong *)0x0) {
LAB_004fdf5b:
    if (plVar67 == (longlong *)0x0) {
      local_248 = pplVar70;
      plVar58 = plVar68;
    }
    else {
      plVar58 = plVar67;
    }
    auVar172 = normalize_effort_token(plVar58,local_248);
    pplVar63 = auVar172._8_8_;
    if (auVar172._0_8_ != (int *)0x0) {
      if (pplVar63 == (longlong **)&DAT_00000004) {
        if (*auVar172._0_8_ == 0x656e6f6e) {
          cVar51 = '\0';
        }
LAB_004fdfac:
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
        if (pplVar55 != (longlong **)0x0) {
          uVar86 = extraout_XMM0_Qa_34;
LAB_004fdfd5:
          uVar86 = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar63);
          if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
          }
          local_230 = pplVar63;
          local_210 = pplVar63;
          goto LAB_004fe017;
        }
      }
      else if (-1 < (longlong)pplVar63) {
        if (pplVar63 != (longlong **)0x0) goto LAB_004fdfac;
        pplVar55 = (longlong **)0x1;
        uVar86 = extraout_XMM0_Qa_33;
        goto LAB_004fdfd5;
      }
LAB_004fe1c4:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004fba15;
    }
LAB_004fe017:
    if ((plVar67 != (longlong *)0x0) && (plVar68 != (longlong *)0x0)) {
      auVar172 = normalize_effort_token(plVar68,pplVar70);
      pplVar70 = auVar172._8_8_;
      if (auVar172._0_8_ != (int *)0x0) {
        if (pplVar70 == (longlong **)&DAT_00000004) {
          if (*auVar172._0_8_ == 0x656e6f6e) {
            cVar51 = '\0';
          }
LAB_004fe068:
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
          if (pplVar55 == (longlong **)0x0) goto LAB_004fe1c4;
          uVar86 = extraout_XMM0_Qa_36;
        }
        else {
          if ((longlong)pplVar70 < 0) goto LAB_004fe1c4;
          if (pplVar70 != (longlong **)0x0) goto LAB_004fe068;
          pplVar55 = (longlong **)0x1;
          uVar86 = extraout_XMM0_Qa_35;
        }
        uVar86 = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar70);
        if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
        }
        local_210 = pplVar70;
        local_230 = pplVar70;
      }
    }
  }
LAB_004fe1ee:
  if (pplVar76 != (longlong **)0x0) {
    local_238 = (longlong **)local_148[1];
    pplVar70 = pplVar76;
    local_258 = local_238;
    do {
      uVar77 = (ulonglong)*(ushort *)((longlong)pplVar70 + 0x272);
      local_228 = pplVar70;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar78 = 0xffffffffffffffff;
      pplVar63 = pplVar70 + 0x2d;
      pplVar79 = pplVar70 + -2;
      do {
        pplVar62 = pplVar79;
        local_240 = local_210;
        if (lVar71 == 0) goto LAB_004fe2b6;
        plVar67 = pplVar63[2];
        lVar75 = (longlong)plVar67 - 9;
        if ((longlong *)0x8 < plVar67) {
          plVar67 = (longlong *)0x9;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        pplVar79 = pplVar62 + 4;
        uVar78 = uVar78 + 1;
        lVar71 = lVar71 + -0x18;
        pplVar63 = pplVar63 + 3;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) {
        if ((*(char *)(pplVar62 + 2) == '\x05') &&
           (plVar67 = pplVar62[3], plVar67 != (longlong *)0x0)) {
          local_228 = (longlong **)*pplVar79;
          goto LAB_004fe301;
        }
        bVar83 = false;
        goto LAB_004fe656;
      }
LAB_004fe2b6:
      bVar83 = local_258 == (longlong **)0x0;
      local_258 = (longlong **)((longlong)local_258 + -1);
      if (bVar83) goto LAB_004fe4b6;
      pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
    } while( true );
  }
  bVar83 = false;
  uVar74 = 0;
  goto LAB_004ff0b3;
LAB_004fe301:
  uVar77 = (ulonglong)*(ushort *)((longlong)plVar67 + 0x272);
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)plVar67 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  plVar68 = plVar67 + 0x2d;
  plVar58 = plVar67 + -1;
  do {
    plVar57 = plVar58;
    if (lVar71 == 0) goto LAB_004fe39a;
    uVar69 = plVar68[2];
    lVar75 = uVar69 - 6;
    if (5 < uVar69) {
      uVar69 = 6;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    plVar68 = plVar68 + 3;
    plVar58 = plVar57 + 4;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 != 0) {
LAB_004fe39a:
    if (local_228 == (longlong **)0x0) goto LAB_004fe49b;
    local_228 = (longlong **)((longlong)local_228 + -1);
    plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
    goto LAB_004fe301;
  }
  if ((char)plVar57[1] == '\x03') {
    auVar172 = normalize_effort_token(plVar57[3],plVar57[4]);
    local_200 = auVar172._8_8_;
    if (auVar172._0_8_ == (int *)0x0) {
      local_200 = local_210;
      goto LAB_004fe4cd;
    }
    if (local_200 == (longlong **)&DAT_00000004) {
      if (*auVar172._0_8_ == 0x656e6f6e) {
        cVar51 = '\0';
      }
LAB_004fe439:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
      if (pplVar55 == (longlong **)0x0) goto LAB_004ff5a8;
      uVar86 = extraout_XMM0_Qa_39;
    }
    else {
      if ((longlong)local_200 < 0) goto LAB_004ff5a8;
      if (local_200 != (longlong **)0x0) goto LAB_004fe439;
      pplVar55 = (longlong **)0x1;
      uVar86 = extraout_XMM0_Qa_38;
    }
    uVar86 = (*(code *)PTR_memcpy_00799008)(uVar86,local_200);
    if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
    }
    local_230 = local_200;
    goto LAB_004fe4cd;
  }
LAB_004fe49b:
  local_200 = local_210;
LAB_004fe4cd:
  plVar67 = pplVar62[3];
  if (plVar67 != (longlong *)0x0) {
    local_258 = (longlong **)*pplVar79;
    while( true ) {
      uVar77 = CONCAT62(0,*(ushort *)((longlong)plVar67 + 0x272));
      local_228 = (longlong **)uVar77;
      uVar56 = (ulonglong)((uint)*(ushort *)((longlong)plVar67 + 0x272) * 8);
      lVar71 = uVar56 * 3;
      uVar78 = 0xffffffffffffffff;
      plVar68 = plVar67 + 0x2d;
      plVar58 = plVar67 + -1;
      do {
        plVar57 = plVar58;
        if (lVar71 == 0) goto LAB_004fe57b;
        uVar69 = plVar68[2];
        lVar75 = uVar69 - 7;
        if (6 < uVar69) {
          uVar69 = 7;
        }
        iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
        lVar75 = -lVar75;
        if (iVar53 != 0) {
          lVar75 = (longlong)iVar53;
        }
        bVar66 = (0 < lVar75) - (lVar75 < 0);
        uVar56 = (ulonglong)bVar66;
        uVar78 = uVar78 + 1;
        lVar71 = lVar71 + -0x18;
        plVar68 = plVar68 + 3;
        plVar58 = plVar57 + 4;
      } while (bVar66 == 1);
      uVar77 = uVar78;
      if (bVar66 == 0) break;
LAB_004fe57b:
      bVar83 = local_258 == (longlong **)0x0;
      local_258 = (longlong **)((longlong)local_258 + -1);
      if (bVar83) goto LAB_004fe62b;
      plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
    }
    if ((char)plVar57[1] != '\x03') {
      bVar83 = false;
      local_240 = local_200;
      goto LAB_004fe656;
    }
    auVar172 = ::<str>::trim_matches::<<char>::is_whitespace>(plVar57[3],plVar57[4]);
    pbVar61 = auVar172._0_8_;
    if ((((auVar172._8_8_ == 4) &&
         ((byte)(((byte)(*pbVar61 + 0xbf) < 0x1a) << 5 | *pbVar61) == 0x6e)) &&
        ((byte)(((byte)(pbVar61[1] + 0xbf) < 0x1a) << 5 | pbVar61[1]) == 0x6f)) &&
       ((byte)(((byte)(pbVar61[2] + 0xbf) < 0x1a) << 5 | pbVar61[2]) == 0x6e)) {
      bVar83 = (byte)(((byte)(pbVar61[3] + 0xbf) < 0x1a) << 5 | pbVar61[3]) == 0x65;
      goto LAB_004fe633;
    }
  }
LAB_004fe62b:
  bVar83 = false;
LAB_004fe633:
  local_240 = local_200;
LAB_004fe656:
  pplVar70 = pplVar76;
  local_258 = local_238;
  do {
    uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar70 + 0x272));
    local_228 = (longlong **)uVar77;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar63 = pplVar70 + 0x2d;
    pplVar79 = pplVar70 + -2;
    do {
      pplVar62 = pplVar79;
      if (lVar71 == 0) goto LAB_004fe6fb;
      plVar67 = pplVar63[2];
      lVar75 = (longlong)plVar67 - 0xd;
      if ((longlong *)0xc < plVar67) {
        plVar67 = (longlong *)0xd;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar63 = pplVar63 + 3;
      pplVar79 = pplVar62 + 4;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) {
      if ((*(char *)(pplVar62 + 2) != '\x05') || (plVar67 = pplVar62[3], plVar67 == (longlong *)0x0)
         ) goto LAB_004fe877;
      local_258 = (longlong **)pplVar62[4];
      goto LAB_004fe747;
    }
LAB_004fe6fb:
    bVar84 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar84) goto LAB_004feba4;
    pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
  } while( true );
LAB_004fe4b6:
  bVar83 = false;
  goto LAB_004fe656;
LAB_004feba4:
  local_248 = local_240;
  goto LAB_004fe886;
LAB_004ff5a8:
  (*(code *)PTR_handle_error_00798ff0)();
  goto LAB_004fba15;
LAB_004ff049:
  do {
    if (*(char *)((longlong)plVar68 + lVar71) == '\x03') {
      auVar172 = ::<str>::trim_matches::<<char>::is_whitespace>
                           (*(undefined8 *)((longlong)plVar68 + lVar71 + 0x10),
                            *(undefined8 *)((longlong)plVar68 + lVar71 + 0x18));
      pcVar64 = auVar172._0_8_;
      if ((auVar172._8_8_ == 0x1b) &&
         (auVar89[0] = -(*pcVar64 == DAT_00183250), auVar89[1] = -(pcVar64[1] == UNK_00183251),
         auVar89[2] = -(pcVar64[2] == UNK_00183252), auVar89[3] = -(pcVar64[3] == UNK_00183253),
         auVar89[4] = -(pcVar64[4] == UNK_00183254), auVar89[5] = -(pcVar64[5] == UNK_00183255),
         auVar89[6] = -(pcVar64[6] == UNK_00183256), auVar89[7] = -(pcVar64[7] == UNK_00183257),
         auVar89[8] = -(pcVar64[8] == UNK_00183258), auVar89[9] = -(pcVar64[9] == UNK_00183259),
         auVar89[10] = -(pcVar64[10] == UNK_0018325a),
         auVar89[0xb] = -(pcVar64[0xb] == UNK_0018325b),
         auVar89[0xc] = -(pcVar64[0xc] == UNK_0018325c),
         auVar89[0xd] = -(pcVar64[0xd] == UNK_0018325d),
         auVar89[0xe] = -(pcVar64[0xe] == UNK_0018325e),
         auVar89[0xf] = -(pcVar64[0xf] == UNK_0018325f),
         auVar95[0] = -(pcVar64[0xb] == s_ncrypted_content_001839c0[0]),
         auVar95[1] = -(pcVar64[0xc] == s_ncrypted_content_001839c0[1]),
         auVar95[2] = -(pcVar64[0xd] == s_ncrypted_content_001839c0[2]),
         auVar95[3] = -(pcVar64[0xe] == s_ncrypted_content_001839c0[3]),
         auVar95[4] = -(pcVar64[0xf] == s_ncrypted_content_001839c0[4]),
         auVar95[5] = -(pcVar64[0x10] == s_ncrypted_content_001839c0[5]),
         auVar95[6] = -(pcVar64[0x11] == s_ncrypted_content_001839c0[6]),
         auVar95[7] = -(pcVar64[0x12] == s_ncrypted_content_001839c0[7]),
         auVar95[8] = -(pcVar64[0x13] == s_ncrypted_content_001839c0[8]),
         auVar95[9] = -(pcVar64[0x14] == s_ncrypted_content_001839c0[9]),
         auVar95[10] = -(pcVar64[0x15] == s_ncrypted_content_001839c0[10]),
         auVar95[0xb] = -(pcVar64[0x16] == s_ncrypted_content_001839c0[0xb]),
         auVar95[0xc] = -(pcVar64[0x17] == s_ncrypted_content_001839c0[0xc]),
         auVar95[0xd] = -(pcVar64[0x18] == s_ncrypted_content_001839c0[0xd]),
         auVar95[0xe] = -(pcVar64[0x19] == s_ncrypted_content_001839c0[0xe]),
         auVar95[0xf] = -(pcVar64[0x1a] == s_ncrypted_content_001839c0[0xf]),
         auVar95 = auVar95 & auVar89,
         (ushort)((ushort)(SUB161(auVar95 >> 7,0) & 1) | (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar95 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar95 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar95 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar95 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar95 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar95 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar95 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar95 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar95 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar95 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar95 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar95 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar95 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar95[0xf] >> 7) << 0xf) == 0xffff)) {
        uVar74 = 1;
        goto LAB_004ff0b3;
      }
    }
    lVar71 = lVar71 + 0x20;
  } while ((longlong)plVar67 * 0x20 != lVar71);
LAB_004ff0a6:
  uVar74 = 0;
  goto LAB_004ff0b3;
LAB_004fe747:
  uVar77 = CONCAT62(0,*(ushort *)((longlong)plVar67 + 0x272));
  local_228 = (longlong **)uVar77;
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)plVar67 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  plVar68 = plVar67 + 0x2d;
  plVar58 = plVar67 + -1;
  do {
    plVar57 = plVar58;
    if (lVar71 == 0) goto LAB_004fe7e8;
    uVar69 = plVar68[2];
    lVar75 = uVar69 - 6;
    if (5 < uVar69) {
      uVar69 = 6;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    plVar68 = plVar68 + 3;
    plVar58 = plVar57 + 4;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 != 0) {
LAB_004fe7e8:
    bVar84 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar84) goto LAB_004fe877;
    plVar67 = (longlong *)plVar67[uVar77 + 0x4f];
    goto LAB_004fe747;
  }
  if ((char)plVar57[1] == '\x03') {
    auVar172 = normalize_effort_token(plVar57[3],plVar57[4]);
    local_248 = auVar172._8_8_;
    if (auVar172._0_8_ == 0) {
      local_248 = local_240;
      goto LAB_004fe886;
    }
    if ((longlong)local_248 < 0) goto LAB_004ff5a8;
    if (local_248 == (longlong **)0x0) {
      pplVar55 = (longlong **)0x1;
      uVar86 = extraout_XMM0_Qa_40;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
      if (pplVar55 == (longlong **)0x0) goto LAB_004ff5a8;
      uVar86 = extraout_XMM0_Qa_41;
    }
    uVar86 = (*(code *)PTR_memcpy_00799008)(uVar86,local_248);
    if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
    }
    local_230 = local_248;
    goto LAB_004fe886;
  }
LAB_004fe877:
  local_248 = local_240;
LAB_004fe886:
  pplVar70 = pplVar76;
  local_258 = local_238;
  while( true ) {
    uVar77 = CONCAT62(0,*(ushort *)((longlong)pplVar70 + 0x272));
    local_228 = (longlong **)uVar77;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar63 = pplVar70 + 0x2d;
    pplVar79 = pplVar70 + -1;
    do {
      pplVar62 = pplVar79;
      local_210 = local_248;
      if (lVar71 == 0) goto LAB_004fe92b;
      plVar67 = pplVar63[2];
      plVar68 = plVar67 + -1;
      if ((longlong *)0x7 < plVar67) {
        plVar67 = (longlong *)0x8;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      auVar87._8_8_ = extraout_XMM0_Qb_42;
      auVar87._0_8_ = extraout_XMM0_Qa_42;
      lVar75 = -(longlong)plVar68;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar63 = pplVar63 + 3;
      pplVar79 = pplVar62 + 4;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) break;
LAB_004fe92b:
    bVar84 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar84) goto LAB_004febb8;
    pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
  }
  if ((*(char *)(pplVar62 + 1) == '\x04') && (plVar67 = pplVar62[4], plVar67 != (longlong *)0x0)) {
    plVar68 = pplVar62[3];
    plVar67 = plVar68 + (longlong)plVar67 * 4;
    do {
      pcVar64 = (char *)(*(code *)PTR_index_into_00799300)(auVar87._0_8_,plVar68);
      auVar87._8_8_ = extraout_XMM0_Qb_43;
      auVar87._0_8_ = extraout_XMM0_Qa_43;
      if (((pcVar64 != (char *)0x0) && (*pcVar64 == '\x05')) &&
         (lVar71 = *(longlong *)(pcVar64 + 8), lVar71 != 0)) {
        local_228 = (longlong **)*(undefined8 *)(pcVar64 + 0x10);
        while( true ) {
          uVar77 = (ulonglong)*(ushort *)(lVar71 + 0x272);
          uVar56 = (ulonglong)((uint)*(ushort *)(lVar71 + 0x272) * 8);
          lVar75 = uVar56 * 3;
          uVar78 = 0xffffffffffffffff;
          lVar72 = lVar71 + 0x168;
          puVar65 = (undefined8 *)(lVar71 + -8);
          do {
            puVar73 = puVar65;
            if (lVar75 == 0) goto LAB_004fea7a;
            uVar69 = *(ulonglong *)(lVar72 + 0x10);
            lVar80 = uVar69 - 6;
            if (5 < uVar69) {
              uVar69 = 6;
            }
            iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,uVar69);
            auVar87._8_8_ = extraout_XMM0_Qb_44;
            auVar87._0_8_ = extraout_XMM0_Qa_44;
            lVar80 = -lVar80;
            if (iVar53 != 0) {
              lVar80 = (longlong)iVar53;
            }
            bVar66 = (0 < lVar80) - (lVar80 < 0);
            uVar56 = (ulonglong)bVar66;
            uVar78 = uVar78 + 1;
            lVar75 = lVar75 + -0x18;
            lVar72 = lVar72 + 0x18;
            puVar65 = puVar73 + 4;
          } while (bVar66 == 1);
          uVar77 = uVar78;
          if (bVar66 == 0) break;
LAB_004fea7a:
          if (local_228 == (longlong **)0x0) goto LAB_004fe98d;
          local_228 = (longlong **)((longlong)local_228 + -1);
          lVar71 = *(longlong *)(lVar71 + 0x278 + uVar77 * 8);
        }
        if (*(char *)(puVar73 + 1) == '\x03') {
          auVar172 = normalize_effort_token(puVar73[3],puVar73[4]);
          pplVar70 = auVar172._8_8_;
          auVar87._8_8_ = extraout_XMM0_Qb_45;
          auVar87._0_8_ = extraout_XMM0_Qa_45;
          if (auVar172._0_8_ != 0) {
            if ((longlong)pplVar70 < 0) goto LAB_004ff5a8;
            if (pplVar70 == (longlong **)0x0) {
              pplVar55 = (longlong **)0x1;
              uVar86 = extraout_XMM0_Qa_45;
            }
            else {
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pplVar55 = (longlong **)(*(code *)PTR___rust_alloc_00799000)();
              if (pplVar55 == (longlong **)0x0) goto LAB_004ff5a8;
              uVar86 = extraout_XMM0_Qa_46;
            }
            auVar87._0_8_ = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar70);
            auVar87._8_8_ = extraout_XMM0_Qb_46;
            if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
              auVar87._0_8_ = (*(code *)PTR___rust_dealloc_00798fc8)(auVar87._0_8_,1);
              auVar87._8_8_ = extraout_XMM0_Qb_47;
            }
            local_248 = pplVar70;
            local_230 = pplVar70;
          }
        }
      }
LAB_004fe98d:
      plVar68 = plVar68 + 4;
      local_210 = local_248;
    } while (plVar68 != plVar67);
  }
LAB_004febb8:
  pplVar70 = pplVar76;
  local_258 = local_238;
  while( true ) {
    uVar77 = (ulonglong)*(ushort *)((longlong)pplVar70 + 0x272);
    local_228 = pplVar70;
    uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar70 + 0x272) * 8);
    lVar71 = uVar56 * 3;
    uVar78 = 0xffffffffffffffff;
    pplVar63 = pplVar70 + 0x2d;
    pplVar79 = pplVar70 + -1;
    do {
      pplVar62 = pplVar79;
      if (lVar71 == 0) goto LAB_004fec80;
      plVar67 = pplVar63[2];
      lVar75 = (longlong)plVar67 - 5;
      if ((longlong *)0x4 < plVar67) {
        plVar67 = (longlong *)0x5;
      }
      iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
      lVar75 = -lVar75;
      if (iVar53 != 0) {
        lVar75 = (longlong)iVar53;
      }
      bVar66 = (0 < lVar75) - (lVar75 < 0);
      uVar56 = (ulonglong)bVar66;
      uVar78 = uVar78 + 1;
      lVar71 = lVar71 + -0x18;
      pplVar63 = pplVar63 + 3;
      pplVar79 = pplVar62 + 4;
    } while (bVar66 == 1);
    uVar77 = uVar78;
    if (bVar66 == 0) break;
LAB_004fec80:
    bVar84 = local_258 == (longlong **)0x0;
    local_258 = (longlong **)((longlong)local_258 + -1);
    if (bVar84) goto LAB_004fef59;
    pplVar70 = (longlong **)pplVar70[uVar77 + 0x4f];
  }
  if ((*(char *)(pplVar62 + 1) == '\x04') && (plVar67 = pplVar62[4], plVar67 != (longlong *)0x0)) {
    plVar68 = pplVar62[3];
    plVar67 = plVar68 + (longlong)plVar67 * 4;
    do {
      pcVar64 = (char *)(*(code *)PTR_index_into_00799300)();
      if (((pcVar64 != (char *)0x0) && (*pcVar64 == '\x03')) &&
         (*(longlong *)(pcVar64 + 0x18) == 0x14)) {
        pcVar64 = *(char **)(pcVar64 + 0x10);
        auVar88[0] = -(*pcVar64 == s_configuration_up_001835b0[0]);
        auVar88[1] = -(pcVar64[1] == s_configuration_up_001835b0[1]);
        auVar88[2] = -(pcVar64[2] == s_configuration_up_001835b0[2]);
        auVar88[3] = -(pcVar64[3] == s_configuration_up_001835b0[3]);
        auVar88[4] = -(pcVar64[4] == s_configuration_up_001835b0[4]);
        auVar88[5] = -(pcVar64[5] == s_configuration_up_001835b0[5]);
        auVar88[6] = -(pcVar64[6] == s_configuration_up_001835b0[6]);
        auVar88[7] = -(pcVar64[7] == s_configuration_up_001835b0[7]);
        auVar88[8] = -(pcVar64[8] == s_configuration_up_001835b0[8]);
        auVar88[9] = -(pcVar64[9] == s_configuration_up_001835b0[9]);
        auVar88[10] = -(pcVar64[10] == s_configuration_up_001835b0[10]);
        auVar88[0xb] = -(pcVar64[0xb] == s_configuration_up_001835b0[0xb]);
        auVar88[0xc] = -(pcVar64[0xc] == s_configuration_up_001835b0[0xc]);
        auVar88[0xd] = -(pcVar64[0xd] == s_configuration_up_001835b0[0xd]);
        auVar88[0xe] = -(pcVar64[0xe] == s_configuration_up_001835b0[0xe]);
        auVar88[0xf] = -(pcVar64[0xf] == s_configuration_up_001835b0[0xf]);
        uVar3 = *(undefined4 *)(pcVar64 + 0x10);
        auVar94[0] = -((char)uVar3 == s_date_00184300[0]);
        auVar94[1] = -((char)((uint)uVar3 >> 8) == s_date_00184300[1]);
        auVar94[2] = -((char)((uint)uVar3 >> 0x10) == s_date_00184300[2]);
        auVar94[3] = -((char)((uint)uVar3 >> 0x18) == s_date_00184300[3]);
        auVar94[4] = -(s_date_00184300[4] == '\0');
        auVar94[5] = -(s_date_00184300[5] == '\0');
        auVar94[6] = -(s_date_00184300[6] == '\0');
        auVar94[7] = -(s_date_00184300[7] == '\0');
        auVar94[8] = -(UNK_00184308 == '\0');
        auVar94[9] = -(UNK_00184309 == '\0');
        auVar94[10] = -(UNK_0018430a == '\0');
        auVar94[0xb] = -(UNK_0018430b == '\0');
        auVar94[0xc] = -(UNK_0018430c == '\0');
        auVar94[0xd] = -(UNK_0018430d == '\0');
        auVar94[0xe] = -(UNK_0018430e == '\0');
        auVar94[0xf] = -(UNK_0018430f == '\0');
        auVar94 = auVar94 & auVar88;
        if (((((ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe |
                       (ushort)(byte)(auVar94[0xf] >> 7) << 0xf) == 0xffff) &&
             (pcVar64 = (char *)(*(code *)PTR_index_into_00799300)(), pcVar64 != (char *)0x0)) &&
            (*pcVar64 == '\x05')) && (lVar71 = *(longlong *)(pcVar64 + 8), lVar71 != 0)) {
          local_228 = (longlong **)*(undefined8 *)(pcVar64 + 0x10);
          while( true ) {
            uVar77 = (ulonglong)*(ushort *)(lVar71 + 0x272);
            lVar75 = (ulonglong)((uint)*(ushort *)(lVar71 + 0x272) * 8) * 3;
            uVar56 = 0xffffffffffffffff;
            lVar72 = lVar71 + 0x168;
            puVar65 = (undefined8 *)(lVar71 + -8);
            do {
              puVar73 = puVar65;
              if (lVar75 == 0) goto LAB_004fee40;
              uVar78 = *(ulonglong *)(lVar72 + 0x10);
              lVar80 = uVar78 - 6;
              if (5 < uVar78) {
                uVar78 = 6;
              }
              iVar53 = (*(code *)PTR_memcmp_00799528)(lVar72 + 0x18,uVar78);
              lVar80 = -lVar80;
              if (iVar53 != 0) {
                lVar80 = (longlong)iVar53;
              }
              uVar56 = uVar56 + 1;
              lVar75 = lVar75 + -0x18;
              lVar72 = lVar72 + 0x18;
              puVar65 = puVar73 + 4;
            } while ((char)((0 < lVar80) - (lVar80 < 0)) == '\x01');
            uVar77 = uVar56;
            if (0 < lVar80 == lVar80 < 0) break;
LAB_004fee40:
            if (local_228 == (longlong **)0x0) goto LAB_004fed43;
            local_228 = (longlong **)((longlong)local_228 + -1);
            lVar71 = *(longlong *)(lVar71 + 0x278 + uVar77 * 8);
          }
          if (*(char *)(puVar73 + 1) != '\x03') goto LAB_004fed4b;
          auVar172 = normalize_effort_token(puVar73[3],puVar73[4]);
          pplVar70 = auVar172._8_8_;
          if (auVar172._0_8_ != 0) {
            uVar86 = <alloc[12e961f32105355]::raw_vec::RawVecInner>::try_allocate_in
                               (&local_1c8,pplVar70,0,1,1);
            pplVar55 = local_1b8;
            pplVar63 = pplStack_1c0;
            if ((int)local_1c8 == 1) goto LAB_004ff5a8;
            uVar86 = (*(code *)PTR_memcpy_00799008)(uVar86,pplVar70);
            if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
            }
            local_210 = pplVar70;
            local_230 = pplVar63;
            goto LAB_004fed4b;
          }
        }
      }
LAB_004fed43:
LAB_004fed4b:
      plVar68 = plVar68 + 4;
    } while (plVar68 != plVar67);
  }
LAB_004fef59:
  uVar77 = (ulonglong)*(ushort *)((longlong)pplVar76 + 0x272);
  uVar56 = (ulonglong)((uint)*(ushort *)((longlong)pplVar76 + 0x272) * 8);
  lVar71 = uVar56 * 3;
  uVar78 = 0xffffffffffffffff;
  pplVar70 = pplVar76 + 0x2d;
  pplVar63 = pplVar76 + -1;
  do {
    pplVar79 = pplVar63;
    if (lVar71 == 0) goto LAB_004feffb;
    plVar67 = pplVar70[2];
    lVar75 = (longlong)plVar67 - 7;
    if ((longlong *)0x6 < plVar67) {
      plVar67 = (longlong *)0x7;
    }
    iVar53 = (*(code *)PTR_memcmp_00799528)(uVar56,plVar67);
    lVar75 = -lVar75;
    if (iVar53 != 0) {
      lVar75 = (longlong)iVar53;
    }
    bVar66 = (0 < lVar75) - (lVar75 < 0);
    uVar56 = (ulonglong)bVar66;
    uVar78 = uVar78 + 1;
    lVar71 = lVar71 + -0x18;
    pplVar70 = pplVar70 + 3;
    pplVar63 = pplVar79 + 4;
  } while (bVar66 == 1);
  uVar77 = uVar78;
  if (bVar66 != 0) {
LAB_004feffb:
    bVar84 = local_238 == (longlong **)0x0;
    local_238 = (longlong **)((longlong)local_238 + -1);
    if (bVar84) goto LAB_004ff092;
    pplVar76 = (longlong **)pplVar76[uVar77 + 0x4f];
    goto LAB_004fef59;
  }
  if (*(char *)(pplVar79 + 1) == '\x04') {
    plVar67 = pplVar79[4];
    if (plVar67 == (longlong *)0x0) goto LAB_004ff0a6;
    plVar68 = pplVar79[3];
    lVar71 = 0;
    goto LAB_004ff049;
  }
LAB_004ff092:
  uVar74 = 0;
LAB_004ff0b3:
  uVar77 = lStack_170;
  pplVar76 = local_178;
  local_48 = local_230;
  local_40 = pplVar55;
  local_38 = local_210;
  if (local_198 == -1) {
    if (lStack_180 != -1) goto LAB_004ff111;
    local_60 = -1;
  }
  else {
    if (lStack_180 == -1) {
      uVar77 = local_188;
      pplVar76 = pplVar81;
    }
LAB_004ff111:
    if ((longlong)uVar77 < 0) {
LAB_004ff119:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004fba15;
    }
    if (uVar77 == 0) {
      lVar71 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar71 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar71 == 0) goto LAB_004ff119;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_47,uVar77);
    }
    local_60 = uVar77;
    local_58 = lVar71;
  }
  lVar71 = local_60;
  uVar77 = local_1d0;
  pplVar81 = local_1d8;
  cVar50 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                     ("image",5,local_1d8,local_1d0);
  if (((cVar50 == '\0') &&
      (cVar50 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                          ("imagen",6,pplVar81,uVar77), cVar50 == '\0')) &&
     (cVar50 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         ("embed",5,pplVar81,uVar77), cVar50 == '\0')) {
    if ((uVar77 < 8) ||
       (((bVar84 = true, *pplVar81 != (longlong *)0x342d696e696d6567 &&
         (*pplVar81 != (longlong *)0x332d696e696d6567)) &&
        ((uVar77 < 10 ||
         (*(short *)(pplVar81 + 1) != 0x352e || *pplVar81 != (longlong *)0x322d696e696d6567)))))) {
      cVar50 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         (&anon_1b4a85c95499e1b671cf4fa96a1b6d0f_182_llvm_10049508496007902178,8,
                          pplVar81,uVar77);
      bVar84 = true;
      if (cVar50 == '\0') {
        if (uVar77 < 7) goto LAB_004ff206;
        bVar84 = *(int *)((longlong)pplVar81 + 3) == 0x2d656475 && *(int *)pplVar81 == 0x75616c63;
      }
    }
  }
  else {
LAB_004ff206:
    bVar84 = false;
  }
  if (local_230 == (longlong **)0xffffffffffffffff) {
    if (lVar71 != -1) {
      lVar75 = -1;
      goto LAB_004ff26b;
    }
LAB_004ff3a6:
    bVar27 = true;
LAB_004ff3ac:
    if (!bVar84) {
      local_160 = -1;
      local_228 = (longlong **)0x0;
      bVar84 = true;
LAB_004ff6dc:
      if (cVar51 == '\x02') {
        cVar51 = '\x01';
        cVar50 = '\x01';
        if (bVar82 == true) goto LAB_004ff70c;
      }
      else if ((cVar51 != '\x01') || (cVar50 = '\x01', bVar82)) {
LAB_004ff70c:
        bVar83 = true;
        cVar50 = cVar51;
      }
      if (local_1d0 == 0x11) {
        auVar90[0] = -(*(char *)local_1d8 == DAT_001825e0);
        auVar90[1] = -(*(char *)((longlong)local_1d8 + 1) == UNK_001825e1);
        auVar90[2] = -(*(char *)((longlong)local_1d8 + 2) == UNK_001825e2);
        auVar90[3] = -(*(char *)((longlong)local_1d8 + 3) == UNK_001825e3);
        auVar90[4] = -(*(char *)((longlong)local_1d8 + 4) == UNK_001825e4);
        auVar90[5] = -(*(char *)((longlong)local_1d8 + 5) == UNK_001825e5);
        auVar90[6] = -(*(char *)((longlong)local_1d8 + 6) == UNK_001825e6);
        auVar90[7] = -(*(char *)((longlong)local_1d8 + 7) == UNK_001825e7);
        auVar90[8] = -(*(char *)(local_1d8 + 1) == UNK_001825e8);
        auVar90[9] = -(*(char *)((longlong)local_1d8 + 9) == UNK_001825e9);
        auVar90[10] = -(*(char *)((longlong)local_1d8 + 10) == UNK_001825ea);
        auVar90[0xb] = -(*(char *)((longlong)local_1d8 + 0xb) == UNK_001825eb);
        auVar90[0xc] = -(*(char *)((longlong)local_1d8 + 0xc) == UNK_001825ec);
        auVar90[0xd] = -(*(char *)((longlong)local_1d8 + 0xd) == UNK_001825ed);
        auVar90[0xe] = -(*(char *)((longlong)local_1d8 + 0xe) == UNK_001825ee);
        auVar90[0xf] = -(*(char *)((longlong)local_1d8 + 0xf) == UNK_001825ef);
        auVar96[0] = -(*(char *)(local_1d8 + 2) == DAT_00184730);
        auVar96[1] = -(UNK_00184731 == '\0');
        auVar96[2] = -(UNK_00184732 == '\0');
        auVar96[3] = -(UNK_00184733 == '\0');
        auVar96[4] = -(UNK_00184734 == '\0');
        auVar96[5] = -(UNK_00184735 == '\0');
        auVar96[6] = -(UNK_00184736 == '\0');
        auVar96[7] = -(UNK_00184737 == '\0');
        auVar96[8] = -(UNK_00184738 == '\0');
        auVar96[9] = -(UNK_00184739 == '\0');
        auVar96[10] = -(UNK_0018473a == '\0');
        auVar96[0xb] = -(UNK_0018473b == '\0');
        auVar96[0xc] = -(UNK_0018473c == '\0');
        auVar96[0xd] = -(UNK_0018473d == '\0');
        auVar96[0xe] = -(UNK_0018473e == '\0');
        auVar96[0xf] = -(UNK_0018473f == '\0');
        auVar96 = auVar96 & auVar90;
        bVar85 = (ushort)((ushort)(SUB161(auVar96 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar96 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar96 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar96 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar96 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar96 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar96 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar96 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar96 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar96 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar96 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar96 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar96 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar96 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar96 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar96[0xf] >> 7) << 0xf) == 0xffff;
LAB_004ff786:
        if ((!(bool)(~bVar84 & bVar85)) ||
           (local_a8 = &local_160, (bool)(bVar27 & local_230 == (longlong **)0xffffffffffffffff)))
        goto LAB_004ff7bf;
        local_1c8 = &local_1e0;
        pplStack_1c0 = (longlong **)
                       <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                       ::fmt;
        local_1b8 = &local_a8;
        applStack_1b0[0] =
             (longlong **)
             <&alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
        (*(code *)PTR_format_inner_00799048)(local_1d8,&local_1c8);
LAB_004ff95d:
      }
      else {
        if (local_1d0 == 0xf) {
          bVar85 = *(longlong *)((longlong)local_1d8 + 7) == 0x6e6f627261632d34 &&
                   *local_1d8 == (longlong *)0x342d696e696d6567;
          goto LAB_004ff786;
        }
LAB_004ff7bf:
        if (local_198 != -1) {
          if (local_1d0 == 0x11) {
            auVar91[0] = -(*(char *)local_1d8 == DAT_001825e0);
            auVar91[1] = -(*(char *)((longlong)local_1d8 + 1) == UNK_001825e1);
            auVar91[2] = -(*(char *)((longlong)local_1d8 + 2) == UNK_001825e2);
            auVar91[3] = -(*(char *)((longlong)local_1d8 + 3) == UNK_001825e3);
            auVar91[4] = -(*(char *)((longlong)local_1d8 + 4) == UNK_001825e4);
            auVar91[5] = -(*(char *)((longlong)local_1d8 + 5) == UNK_001825e5);
            auVar91[6] = -(*(char *)((longlong)local_1d8 + 6) == UNK_001825e6);
            auVar91[7] = -(*(char *)((longlong)local_1d8 + 7) == UNK_001825e7);
            auVar91[8] = -(*(char *)(local_1d8 + 1) == UNK_001825e8);
            auVar91[9] = -(*(char *)((longlong)local_1d8 + 9) == UNK_001825e9);
            auVar91[10] = -(*(char *)((longlong)local_1d8 + 10) == UNK_001825ea);
            auVar91[0xb] = -(*(char *)((longlong)local_1d8 + 0xb) == UNK_001825eb);
            auVar91[0xc] = -(*(char *)((longlong)local_1d8 + 0xc) == UNK_001825ec);
            auVar91[0xd] = -(*(char *)((longlong)local_1d8 + 0xd) == UNK_001825ed);
            auVar91[0xe] = -(*(char *)((longlong)local_1d8 + 0xe) == UNK_001825ee);
            auVar91[0xf] = -(*(char *)((longlong)local_1d8 + 0xf) == UNK_001825ef);
            auVar97[0] = -(*(char *)(local_1d8 + 2) == DAT_00184730);
            auVar97[1] = -(UNK_00184731 == '\0');
            auVar97[2] = -(UNK_00184732 == '\0');
            auVar97[3] = -(UNK_00184733 == '\0');
            auVar97[4] = -(UNK_00184734 == '\0');
            auVar97[5] = -(UNK_00184735 == '\0');
            auVar97[6] = -(UNK_00184736 == '\0');
            auVar97[7] = -(UNK_00184737 == '\0');
            auVar97[8] = -(UNK_00184738 == '\0');
            auVar97[9] = -(UNK_00184739 == '\0');
            auVar97[10] = -(UNK_0018473a == '\0');
            auVar97[0xb] = -(UNK_0018473b == '\0');
            auVar97[0xc] = -(UNK_0018473c == '\0');
            auVar97[0xd] = -(UNK_0018473d == '\0');
            auVar97[0xe] = -(UNK_0018473e == '\0');
            auVar97[0xf] = -(UNK_0018473f == '\0');
            auVar97 = auVar97 & auVar91;
            if ((ushort)((ushort)(SUB161(auVar97 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar97[0xf] >> 7) << 0xf) == 0xffff) goto LAB_004ff8d2;
          }
          else if ((local_1d0 == 0xf) &&
                  (*(longlong *)((longlong)local_1d8 + 7) == 0x6e6f627261632d34 &&
                   *local_1d8 == (longlong *)0x342d696e696d6567)) {
LAB_004ff8d2:
            local_a8 = (longlong *)"medium";
            if (!bVar84) {
              local_a8 = plStack_158;
            }
            local_a0 = 6;
            if (!bVar84) {
              local_a0 = local_150;
            }
            local_1c8 = &local_1e0;
            pplStack_1c0 = (longlong **)
                           <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>
                           ::fmt;
            local_1b8 = &local_a8;
            applStack_1b0[0] = (longlong **)<&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
            (*(code *)PTR_format_inner_00799048)(local_a8,&local_1c8);
            goto LAB_004ff95d;
          }
        }
        (*(code *)PTR_clone_00798fd0)();
        local_90 = local_138;
        uStack_88 = uStack_130;
        local_80 = local_128;
      }
      if ((local_168 & 1) != 0) {
        if (local_1d0 == 0x11) {
          auVar92[0] = -(*(char *)local_1d8 == DAT_001825e0);
          auVar92[1] = -(*(char *)((longlong)local_1d8 + 1) == UNK_001825e1);
          auVar92[2] = -(*(char *)((longlong)local_1d8 + 2) == UNK_001825e2);
          auVar92[3] = -(*(char *)((longlong)local_1d8 + 3) == UNK_001825e3);
          auVar92[4] = -(*(char *)((longlong)local_1d8 + 4) == UNK_001825e4);
          auVar92[5] = -(*(char *)((longlong)local_1d8 + 5) == UNK_001825e5);
          auVar92[6] = -(*(char *)((longlong)local_1d8 + 6) == UNK_001825e6);
          auVar92[7] = -(*(char *)((longlong)local_1d8 + 7) == UNK_001825e7);
          auVar92[8] = -(*(char *)((longlong)local_1d8 + 8) == UNK_001825e8);
          auVar92[9] = -(*(char *)((longlong)local_1d8 + 9) == UNK_001825e9);
          auVar92[10] = -(*(char *)((longlong)local_1d8 + 10) == UNK_001825ea);
          auVar92[0xb] = -(*(char *)((longlong)local_1d8 + 0xb) == UNK_001825eb);
          auVar92[0xc] = -(*(char *)((longlong)local_1d8 + 0xc) == UNK_001825ec);
          auVar92[0xd] = -(*(char *)((longlong)local_1d8 + 0xd) == UNK_001825ed);
          auVar92[0xe] = -(*(char *)((longlong)local_1d8 + 0xe) == UNK_001825ee);
          auVar92[0xf] = -(*(char *)((longlong)local_1d8 + 0xf) == UNK_001825ef);
          auVar98[0] = -(*(char *)((longlong)local_1d8 + 0x10) == DAT_00184730);
          auVar98[1] = -(UNK_00184731 == '\0');
          auVar98[2] = -(UNK_00184732 == '\0');
          auVar98[3] = -(UNK_00184733 == '\0');
          auVar98[4] = -(UNK_00184734 == '\0');
          auVar98[5] = -(UNK_00184735 == '\0');
          auVar98[6] = -(UNK_00184736 == '\0');
          auVar98[7] = -(UNK_00184737 == '\0');
          auVar98[8] = -(UNK_00184738 == '\0');
          auVar98[9] = -(UNK_00184739 == '\0');
          auVar98[10] = -(UNK_0018473a == '\0');
          auVar98[0xb] = -(UNK_0018473b == '\0');
          auVar98[0xc] = -(UNK_0018473c == '\0');
          auVar98[0xd] = -(UNK_0018473d == '\0');
          auVar98[0xe] = -(UNK_0018473e == '\0');
          auVar98[0xf] = -(UNK_0018473f == '\0');
          auVar98 = auVar98 & auVar92;
          if ((ushort)((ushort)(SUB161(auVar98 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar98 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar98 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar98 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar98 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar98 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar98 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar98 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar98 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar98 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar98 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar98 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar98 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar98 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar98 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar98[0xf] >> 7) << 0xf) == 0xffff) goto LAB_004ffc39;
        }
        else if ((local_1d0 == 0xf) &&
                (*(longlong *)((longlong)local_1d8 + 7) == 0x6e6f627261632d34 &&
                 *local_1d8 == (longlong *)0x342d696e696d6567)) {
LAB_004ffc39:
          bVar84 = true;
          (*(code *)PTR_clone_00798fd0)();
          goto LAB_004ff9f2;
        }
      }
      local_68 = pplVar46;
      uStack_70 = pplVar44;
      bVar84 = false;
      local_78 = uVar26;
LAB_004ff9f2:
      local_188 = uVar45;
      local_198 = (longlong)pplVar47;
      pplStack_190 = pplVar48;
      lStack_170 = local_150;
      lStack_180 = local_160;
      local_178 = (longlong **)plStack_158;
      local_1b8 = (longlong **)local_68;
      local_1c8._0_4_ = (int)local_78;
      local_1c8._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
      pplStack_1c0 = (longlong **)uStack_70;
      *param_1 = local_78;
      param_1[1] = uStack_70;
      param_1[4] = uStack_88;
      param_1[5] = local_80;
      param_1[6] = pplVar47;
      param_1[7] = pplVar48;
      param_1[8] = uVar45;
      param_1[9] = local_160;
      param_1[10] = plStack_158;
      param_1[0xb] = local_150;
      param_1[2] = local_68;
      param_1[3] = local_90;
      param_1[0xc] = local_228;
      *(char *)(param_1 + 0xd) = cVar50;
      *(bool *)((longlong)param_1 + 0x69) = bVar83;
      *(bool *)((longlong)param_1 + 0x6a) = bVar82;
      *(undefined1 *)((longlong)param_1 + 0x6b) = uVar74;
      if (lVar71 != 0 && !bVar27) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((char *)((longlong)local_230 + -1) < (char *)0xfffffffffffffffe) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if (local_1e0 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((bVar84) && (uVar26 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((lVar54 != -1) && (lVar54 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      if ((lVar49 != -1) && (lVar49 != 0)) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
      return param_1;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plStack_158 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plStack_158 != (longlong *)0x0) {
      *(undefined2 *)((longlong)plStack_158 + 4) = 0x6d75;
      *(int *)plStack_158 = 0x6964656d;
      local_160 = 6;
      local_150 = 6;
      if (*(short *)((longlong)plStack_158 + 4) == 0x6d75 && (int)*plStack_158 == 0x6964656d) {
        local_228 = (longlong **)DAT_00184890;
      }
      else {
        local_228 = (longlong **)0x0;
      }
      bVar84 = false;
      goto LAB_004ff6dc;
    }
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar75 = CONCAT44(local_1c8._4_4_,(int)local_1c8);
    pplVar76 = local_1b8;
    pplVar81 = pplStack_1c0;
    if (lVar71 == -1) {
      if (lVar75 == -1) goto LAB_004ff3a6;
LAB_004ff2c2:
      local_258 = pplVar81;
    }
    else {
LAB_004ff26b:
      uVar86 = (*(code *)PTR_clone_00798fd0)();
      local_258 = pplStack_1c0;
      if (lVar75 != -1) {
        if (CONCAT44(local_1c8._4_4_,(int)local_1c8) - 1U < 0xfffffffffffffffe) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar86,1);
        }
        goto LAB_004ff2c2;
      }
      bVar27 = false;
      if (CONCAT44(local_1c8._4_4_,(int)local_1c8) == -1) goto LAB_004ff3ac;
      pplVar76 = local_1b8;
    }
    uVar45 = local_1d0;
    pplVar44 = local_1d8;
    cVar51 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       (&DAT_001853e0,8,local_1d8,local_1d0);
    if (cVar51 == '\0') {
      bVar66 = 0;
    }
    else {
      bVar66 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                         ("flash",5,pplVar44,uVar45);
    }
    bVar52 = <&str_as_core[c0acaeba6ab4c2e0]::str::pattern::Pattern>::is_contained_in
                       (&DAT_00185300,8,pplVar44,uVar45);
    lVar54 = 6;
    switch(pplVar76) {
    case (longlong **)0x3:
      lVar54 = (ulonglong)
               (*(char *)((longlong)local_258 + 2) != 'w' || *(short *)local_258 != 0x6f6c) * 3 + 3;
      break;
    case (longlong **)0x4:
      if (*(int *)local_258 == 0x656e6f6e) {
        lVar54 = (ulonglong)bVar66 * 4 + 3;
      }
      else {
        lVar54 = (ulonglong)(*(int *)local_258 != 0x68676968) * 2 + 4;
      }
      break;
    case (longlong **)0x5:
      if (*(char *)((longlong)local_258 + 4) == 'h' && *(int *)local_258 == 0x67696878) {
        lVar54 = (ulonglong)bVar52 + 4;
      }
      break;
    case (longlong **)0x7:
      if (*(int *)((longlong)local_258 + 3) == 0x6c616d69 && *(int *)local_258 == 0x696e696d) {
        lVar54 = (ulonglong)bVar66 * 4 + 3;
      }
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plStack_158 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
    if (plStack_158 != (longlong *)0x0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa_48,lVar54);
      local_160 = lVar54;
      local_150 = lVar54;
                    /* WARNING: Could not recover jumptable at 0x004ff630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar65 = (undefined8 *)
                (*(code *)(&DAT_001987d8 + *(int *)(&DAT_001987d8 + (lVar54 + -3) * 4)))
                          (&DAT_001987d8 + *(int *)(&DAT_001987d8 + (lVar54 + -3) * 4));
      return puVar65;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004fba15:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


