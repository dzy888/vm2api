// 006b6580 decode_trailers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hyper[c4782d5b5c5e3493]::proto::h1::decode::decode_trailers */

longlong * __rustcall
hyper[c4782d5b5c5e3493]::proto::h1::decode::decode_trailers
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  byte bVar9;
  ushort uVar10;
  byte *pbVar11;
  code *pcVar12;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  char cVar48;
  int iVar49;
  undefined1 (*pauVar50) [16];
  ulonglong uVar51;
  longlong lVar52;
  longlong **pplVar53;
  longlong lVar54;
  uint uVar55;
  byte *pbVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  longlong lVar60;
  longlong lVar61;
  int *piVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  ulonglong uVar65;
  int *piVar66;
  char *pcVar67;
  ushort uVar68;
  uint uVar69;
  undefined1 (*pauVar70) [16];
  bool bVar71;
  undefined8 uVar72;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar79 [16];
  undefined1 auVar78 [16];
  undefined1 auVar77 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  byte bVar87;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  undefined1 auVar88 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  char local_208;
  longlong local_1f8;
  undefined1 local_1a9;
  undefined1 (*local_1a8) [16];
  int *local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  longlong local_148;
  longlong **pplStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  ushort local_128;
  undefined6 uStack_126;
  longlong *local_120;
  code *local_118;
  longlong local_110;
  longlong lStack_108;
  longlong lStack_100;
  int *piStack_f8;
  longlong local_f0;
  undefined1 auStack_e8 [16];
  longlong lStack_d8;
  ulonglong local_d0;
  longlong lStack_c8;
  ulonglong local_c0;
  ushort uStack_b8;
  undefined6 uStack_b6;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  char local_80;
  byte local_7f;
  longlong local_70;
  longlong local_68;
  longlong *local_60 [3];
  longlong *local_48 [3];
  
  uStack_b8 = 0;
  lStack_c8 = 2;
  local_c0 = 0;
  piStack_f8 = (int *)0x0;
  local_f0 = 8;
  auStack_e8 = (undefined1  [16])0x0;
  lStack_d8 = 8;
  local_d0 = 0;
  local_110 = 0;
  if (0x7ffffffffffffff8 < param_3 * 0x20 || param_3 >> 0x3b != 0) {
LAB_006b6624:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_006b76ba:
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  if (param_3 * 0x20 == 0) {
    pauVar50 = (undefined1 (*) [16])&DAT_00000008;
    uVar65 = 0;
    pauVar70 = pauVar50;
    if (1 < param_3) goto LAB_006b667f;
LAB_006b6727:
    pauVar70 = pauVar50;
    if (param_3 == 0) goto LAB_006b6746;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pauVar50 = (undefined1 (*) [16])(*(code *)PTR___rust_alloc_00799000)();
    if (pauVar50 == (undefined1 (*) [16])0x0) goto LAB_006b6624;
    uVar65 = param_3;
    pauVar70 = pauVar50;
    if (param_3 < 2) goto LAB_006b6727;
LAB_006b667f:
    uVar41 = _UNK_0018cf18;
    uVar72 = _DAT_0018cf10;
    uVar51 = (ulonglong)((uint)(param_3 - 1) & 3);
    pauVar50 = pauVar70;
    if (2 < param_3 - 2) {
      uVar58 = param_3 - 1 & 0xfffffffffffffffc;
      auVar37._8_8_ = _UNK_0018cf08;
      auVar37._0_8_ = _DAT_0018cf00;
      do {
        *(undefined8 *)pauVar50[1] = uVar72;
        *(undefined8 *)(pauVar50[1] + 8) = uVar41;
        *pauVar50 = auVar37;
        pauVar50[2] = auVar37;
        *(undefined8 *)pauVar50[3] = uVar72;
        *(undefined8 *)(pauVar50[3] + 8) = uVar41;
        pauVar50[4] = auVar37;
        *(undefined8 *)pauVar50[5] = uVar72;
        *(undefined8 *)(pauVar50[5] + 8) = uVar41;
        pauVar50[6] = auVar37;
        *(undefined8 *)pauVar50[7] = uVar72;
        *(undefined8 *)(pauVar50[7] + 8) = uVar41;
        pauVar50 = pauVar50 + 8;
        uVar58 = uVar58 - 4;
      } while (uVar58 != 0);
      if (uVar51 == 0) goto LAB_006b672f;
    }
    uVar41 = _UNK_0018cf18;
    uVar72 = _DAT_0018cf10;
    auVar73._8_8_ = _UNK_0018cf08;
    auVar73._0_8_ = _DAT_0018cf00;
    do {
      *(undefined8 *)pauVar50[1] = uVar72;
      *(undefined8 *)(pauVar50[1] + 8) = uVar41;
      *pauVar50 = auVar73;
      pauVar50 = pauVar50 + 2;
      uVar51 = uVar51 - 1;
    } while (uVar51 != 0);
  }
LAB_006b672f:
  uVar72 = _UNK_0018cf18;
  *(undefined8 *)pauVar50[1] = _DAT_0018cf10;
  *(undefined8 *)(pauVar50[1] + 8) = uVar72;
  uVar72 = _UNK_0018cf08;
  *(undefined8 *)*pauVar50 = _DAT_0018cf00;
  *(undefined8 *)(*pauVar50 + 8) = uVar72;
  pauVar50 = pauVar70;
LAB_006b6746:
  uVar72 = (*(code *)PTR_parse_headers_0079a4a8)(pauVar50,*(undefined8 *)(param_2 + 8),param_3);
  if (local_80 == '\x01') {
    pcVar67 = (char *)(ulonglong)local_7f;
    lVar52 = (*(code *)PTR_<httparse[622c0e90ae307373]::Error>_0079a488)();
    uVar72 = extraout_XMM0_Qa;
  }
  else {
    if (local_70 != 0) {
      if (local_68 == 0) {
LAB_006b74b0:
        param_1[10] = local_c0;
        param_1[0xb] = CONCAT62(uStack_b6,uStack_b8);
        param_1[8] = local_d0;
        param_1[9] = lStack_c8;
        param_1[6] = auStack_e8._8_8_;
        param_1[7] = lStack_d8;
        param_1[4] = local_f0;
        param_1[5] = auStack_e8._0_8_;
        param_1[2] = lStack_100;
        param_1[3] = (longlong)piStack_f8;
        *param_1 = local_110;
        param_1[1] = lStack_108;
        if (uVar65 == 0) {
          return param_1;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(local_110,8);
        return param_1;
      }
      local_198 = local_68 * 0x20 + local_70;
      lVar52 = local_70;
      local_1a8 = pauVar50;
      local_b0 = param_1;
LAB_006b67d5:
      local_a8 = lVar52;
      uVar72 = (*(code *)PTR_from_bytes_0079a470)(uVar72,*(undefined8 *)(lVar52 + 8));
      auVar37 = local_178;
      if (local_188._0_4_ == 1) {
        local_120 = &local_a8;
        local_118 = <&httparse[622c0e90ae307373]::Header_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
        ;
        (*(code *)PTR_format_inner_00799048)(uVar72,&local_120);
        pcVar67 = (char *)local_60;
        lVar52 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
        uVar72 = extraout_XMM0_Qa_03;
        goto LAB_006b7469;
      }
      local_1f8 = local_188._8_8_;
      uVar41 = local_178._0_8_;
      uVar45 = local_178._8_8_;
      uVar47 = local_168._0_8_;
      pbVar11 = *(byte **)(local_a8 + 0x10);
      uVar51 = *(ulonglong *)(local_a8 + 0x18);
      if (uVar51 != 0) {
        if (uVar51 < 8) {
          bVar71 = false;
          pbVar56 = pbVar11;
LAB_006b69a1:
          do {
            bVar9 = *pbVar56;
            pbVar56 = pbVar56 + 1;
            bVar71 = (bool)(bVar71 | (bVar9 != 9 && (bVar9 == 0x7f || bVar9 < 0x20)));
          } while (pbVar56 != pbVar11 + uVar51);
        }
        else if (uVar51 < 0x20) {
          uVar58 = 0;
          bVar71 = false;
LAB_006b6915:
          uVar57 = uVar51 & 0xfffffffffffffff8;
          pbVar56 = pbVar11 + uVar57;
          auVar73 = ZEXT116(bVar71);
          auVar74._8_4_ = 0xffffffff;
          auVar74._0_8_ = 0xffffffffffffffff;
          auVar74._12_4_ = 0xffffffff;
          do {
            uVar72 = *(undefined8 *)(pbVar11 + uVar58);
            bVar87 = (byte)uVar72;
            bVar89 = (byte)((ulonglong)uVar72 >> 8);
            bVar90 = (byte)((ulonglong)uVar72 >> 0x10);
            bVar91 = (byte)((ulonglong)uVar72 >> 0x18);
            bVar92 = (byte)((ulonglong)uVar72 >> 0x20);
            bVar93 = (byte)((ulonglong)uVar72 >> 0x28);
            bVar94 = (byte)((ulonglong)uVar72 >> 0x30);
            bVar9 = (byte)((ulonglong)uVar72 >> 0x38);
            auVar88[0] = -((byte)((bVar87 < (byte)s__001846a0[0]) * s__001846a0[0] |
                                 (bVar87 >= (byte)s__001846a0[0]) * bVar87) == bVar87);
            auVar88[1] = -((byte)((bVar89 < (byte)s__001846a0[1]) * s__001846a0[1] |
                                 (bVar89 >= (byte)s__001846a0[1]) * bVar89) == bVar89);
            auVar88[2] = -((byte)((bVar90 < (byte)s__001846a0[2]) * s__001846a0[2] |
                                 (bVar90 >= (byte)s__001846a0[2]) * bVar90) == bVar90);
            auVar88[3] = -((byte)((bVar91 < (byte)s__001846a0[3]) * s__001846a0[3] |
                                 (bVar91 >= (byte)s__001846a0[3]) * bVar91) == bVar91);
            auVar88[4] = -((byte)((bVar92 < (byte)s__001846a0[4]) * s__001846a0[4] |
                                 (bVar92 >= (byte)s__001846a0[4]) * bVar92) == bVar92);
            auVar88[5] = -((byte)((bVar93 < (byte)s__001846a0[5]) * s__001846a0[5] |
                                 (bVar93 >= (byte)s__001846a0[5]) * bVar93) == bVar93);
            auVar88[6] = -((byte)((bVar94 < (byte)s__001846a0[6]) * s__001846a0[6] |
                                 (bVar94 >= (byte)s__001846a0[6]) * bVar94) == bVar94);
            auVar88[7] = -((byte)((bVar9 < (byte)s__001846a0[7]) * s__001846a0[7] |
                                 (bVar9 >= (byte)s__001846a0[7]) * bVar9) == bVar9);
            auVar88[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
            auVar88[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
            auVar88[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
            auVar88[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
            auVar88[0xc] = -((char)((UNK_001846ac != '\0') * UNK_001846ac) == '\0');
            auVar88[0xd] = -((char)((UNK_001846ad != '\0') * UNK_001846ad) == '\0');
            auVar88[0xe] = -((char)((UNK_001846ae != '\0') * UNK_001846ae) == '\0');
            auVar88[0xf] = -((char)((UNK_001846af != '\0') * UNK_001846af) == '\0');
            auVar96[0] = -(bVar87 == DAT_00182630);
            auVar96[1] = -(bVar89 == UNK_00182631);
            auVar96[2] = -(bVar90 == UNK_00182632);
            auVar96[3] = -(bVar91 == UNK_00182633);
            auVar96[4] = -(bVar92 == UNK_00182634);
            auVar96[5] = -(bVar93 == UNK_00182635);
            auVar96[6] = -(bVar94 == UNK_00182636);
            auVar96[7] = -(bVar9 == UNK_00182637);
            auVar96[8] = -(UNK_00182638 == '\0');
            auVar96[9] = -(UNK_00182639 == '\0');
            auVar96[10] = -(UNK_0018263a == '\0');
            auVar96[0xb] = -(UNK_0018263b == '\0');
            auVar96[0xc] = -(UNK_0018263c == '\0');
            auVar96[0xd] = -(UNK_0018263d == '\0');
            auVar96[0xe] = -(UNK_0018263e == '\0');
            auVar96[0xf] = -(UNK_0018263f == '\0');
            auVar75[0] = -(bVar87 == s__00184760[0]);
            auVar75[1] = -(bVar89 == s__00184760[1]);
            auVar75[2] = -(bVar90 == s__00184760[2]);
            auVar75[3] = -(bVar91 == s__00184760[3]);
            auVar75[4] = -(bVar92 == s__00184760[4]);
            auVar75[5] = -(bVar93 == s__00184760[5]);
            auVar75[6] = -(bVar94 == s__00184760[6]);
            auVar75[7] = -(bVar9 == s__00184760[7]);
            auVar75[8] = -(s__00184760[8] == '\0');
            auVar75[9] = -(UNK_00184769 == '\0');
            auVar75[10] = -(UNK_0018476a == '\0');
            auVar75[0xb] = -(UNK_0018476b == '\0');
            auVar75[0xc] = -(UNK_0018476c == '\0');
            auVar75[0xd] = -(UNK_0018476d == '\0');
            auVar75[0xe] = -(UNK_0018476e == '\0');
            auVar75[0xf] = -(UNK_0018476f == '\0');
            auVar76 = ~auVar75 & (auVar96 | auVar88 ^ auVar74);
            auVar84._0_14_ = auVar76._0_14_;
            auVar84[0xe] = auVar76[7];
            auVar84[0xf] = auVar76[7];
            auVar83._14_2_ = auVar84._14_2_;
            auVar83._0_13_ = auVar76._0_13_;
            auVar83[0xd] = auVar76[6];
            auVar82._13_3_ = auVar83._13_3_;
            auVar82._0_12_ = auVar76._0_12_;
            auVar82[0xc] = auVar76[6];
            auVar81._12_4_ = auVar82._12_4_;
            auVar81._0_11_ = auVar76._0_11_;
            auVar81[0xb] = auVar76[5];
            auVar80._11_5_ = auVar81._11_5_;
            auVar80._0_10_ = auVar76._0_10_;
            auVar80[10] = auVar76[5];
            auVar79._10_6_ = auVar80._10_6_;
            auVar79._0_9_ = auVar76._0_9_;
            auVar79[9] = auVar76[4];
            auVar78._9_7_ = auVar79._9_7_;
            auVar78._0_8_ = auVar76._0_8_;
            auVar78[8] = auVar76[4];
            auVar77._8_8_ = auVar78._8_8_;
            auVar77[7] = auVar76[3];
            auVar77[6] = auVar76[3];
            auVar77[5] = auVar76[2];
            auVar77[4] = auVar76[2];
            auVar77[3] = auVar76[1];
            auVar77[2] = auVar76[1];
            auVar77[0] = auVar76[0];
            auVar77[1] = auVar77[0];
            auVar73 = auVar73 | auVar77;
            uVar58 = uVar58 + 8;
          } while (uVar57 != uVar58);
          auVar73 = psllw(auVar73,7);
          bVar71 = (((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar73 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar73 >> 0x77,0) & 1) != 0;
          if (uVar51 != uVar57) goto LAB_006b69a1;
        }
        else {
          uVar58 = uVar51 & 0xffffffffffffffe0;
          auVar73 = (undefined1  [16])0x0;
          uVar57 = 0;
          auVar74 = (undefined1  [16])0x0;
          do {
            pbVar56 = pbVar11 + uVar57;
            bVar9 = *pbVar56;
            bVar87 = pbVar56[1];
            bVar89 = pbVar56[2];
            bVar90 = pbVar56[3];
            bVar91 = pbVar56[4];
            bVar92 = pbVar56[5];
            bVar93 = pbVar56[6];
            bVar94 = pbVar56[7];
            bVar13 = pbVar56[8];
            bVar14 = pbVar56[9];
            bVar15 = pbVar56[10];
            bVar16 = pbVar56[0xb];
            bVar17 = pbVar56[0xc];
            bVar18 = pbVar56[0xd];
            bVar19 = pbVar56[0xe];
            bVar20 = pbVar56[0xf];
            pbVar56 = pbVar11 + uVar57 + 0x10;
            bVar21 = *pbVar56;
            bVar22 = pbVar56[1];
            bVar23 = pbVar56[2];
            bVar24 = pbVar56[3];
            bVar25 = pbVar56[4];
            bVar26 = pbVar56[5];
            bVar27 = pbVar56[6];
            bVar28 = pbVar56[7];
            bVar29 = pbVar56[8];
            bVar30 = pbVar56[9];
            bVar31 = pbVar56[10];
            bVar32 = pbVar56[0xb];
            bVar33 = pbVar56[0xc];
            bVar34 = pbVar56[0xd];
            bVar35 = pbVar56[0xe];
            bVar36 = pbVar56[0xf];
            auVar97[0] = -((byte)((DAT_00184700 < bVar9) * DAT_00184700 |
                                 (DAT_00184700 >= bVar9) * bVar9) == bVar9);
            auVar97[1] = -((byte)((UNK_00184701 < bVar87) * UNK_00184701 |
                                 (UNK_00184701 >= bVar87) * bVar87) == bVar87);
            auVar97[2] = -((byte)((UNK_00184702 < bVar89) * UNK_00184702 |
                                 (UNK_00184702 >= bVar89) * bVar89) == bVar89);
            auVar97[3] = -((byte)((UNK_00184703 < bVar90) * UNK_00184703 |
                                 (UNK_00184703 >= bVar90) * bVar90) == bVar90);
            auVar97[4] = -((byte)((UNK_00184704 < bVar91) * UNK_00184704 |
                                 (UNK_00184704 >= bVar91) * bVar91) == bVar91);
            auVar97[5] = -((byte)((UNK_00184705 < bVar92) * UNK_00184705 |
                                 (UNK_00184705 >= bVar92) * bVar92) == bVar92);
            auVar97[6] = -((byte)((UNK_00184706 < bVar93) * UNK_00184706 |
                                 (UNK_00184706 >= bVar93) * bVar93) == bVar93);
            auVar97[7] = -((byte)((UNK_00184707 < bVar94) * UNK_00184707 |
                                 (UNK_00184707 >= bVar94) * bVar94) == bVar94);
            auVar97[8] = -((byte)((UNK_00184708 < bVar13) * UNK_00184708 |
                                 (UNK_00184708 >= bVar13) * bVar13) == bVar13);
            auVar97[9] = -((byte)((UNK_00184709 < bVar14) * UNK_00184709 |
                                 (UNK_00184709 >= bVar14) * bVar14) == bVar14);
            auVar97[10] = -((byte)((UNK_0018470a < bVar15) * UNK_0018470a |
                                  (UNK_0018470a >= bVar15) * bVar15) == bVar15);
            auVar97[0xb] = -((byte)((UNK_0018470b < bVar16) * UNK_0018470b |
                                   (UNK_0018470b >= bVar16) * bVar16) == bVar16);
            auVar97[0xc] = -((byte)((UNK_0018470c < bVar17) * UNK_0018470c |
                                   (UNK_0018470c >= bVar17) * bVar17) == bVar17);
            auVar97[0xd] = -((byte)((UNK_0018470d < bVar18) * UNK_0018470d |
                                   (UNK_0018470d >= bVar18) * bVar18) == bVar18);
            auVar97[0xe] = -((byte)((UNK_0018470e < bVar19) * UNK_0018470e |
                                   (UNK_0018470e >= bVar19) * bVar19) == bVar19);
            auVar97[0xf] = -((byte)((UNK_0018470f < bVar20) * UNK_0018470f |
                                   (UNK_0018470f >= bVar20) * bVar20) == bVar20);
            auVar99[0] = -((byte)((DAT_00184700 < bVar21) * DAT_00184700 |
                                 (DAT_00184700 >= bVar21) * bVar21) == bVar21);
            auVar99[1] = -((byte)((UNK_00184701 < bVar22) * UNK_00184701 |
                                 (UNK_00184701 >= bVar22) * bVar22) == bVar22);
            auVar99[2] = -((byte)((UNK_00184702 < bVar23) * UNK_00184702 |
                                 (UNK_00184702 >= bVar23) * bVar23) == bVar23);
            auVar99[3] = -((byte)((UNK_00184703 < bVar24) * UNK_00184703 |
                                 (UNK_00184703 >= bVar24) * bVar24) == bVar24);
            auVar99[4] = -((byte)((UNK_00184704 < bVar25) * UNK_00184704 |
                                 (UNK_00184704 >= bVar25) * bVar25) == bVar25);
            auVar99[5] = -((byte)((UNK_00184705 < bVar26) * UNK_00184705 |
                                 (UNK_00184705 >= bVar26) * bVar26) == bVar26);
            auVar99[6] = -((byte)((UNK_00184706 < bVar27) * UNK_00184706 |
                                 (UNK_00184706 >= bVar27) * bVar27) == bVar27);
            auVar99[7] = -((byte)((UNK_00184707 < bVar28) * UNK_00184707 |
                                 (UNK_00184707 >= bVar28) * bVar28) == bVar28);
            auVar99[8] = -((byte)((UNK_00184708 < bVar29) * UNK_00184708 |
                                 (UNK_00184708 >= bVar29) * bVar29) == bVar29);
            auVar99[9] = -((byte)((UNK_00184709 < bVar30) * UNK_00184709 |
                                 (UNK_00184709 >= bVar30) * bVar30) == bVar30);
            auVar99[10] = -((byte)((UNK_0018470a < bVar31) * UNK_0018470a |
                                  (UNK_0018470a >= bVar31) * bVar31) == bVar31);
            auVar99[0xb] = -((byte)((UNK_0018470b < bVar32) * UNK_0018470b |
                                   (UNK_0018470b >= bVar32) * bVar32) == bVar32);
            auVar99[0xc] = -((byte)((UNK_0018470c < bVar33) * UNK_0018470c |
                                   (UNK_0018470c >= bVar33) * bVar33) == bVar33);
            auVar99[0xd] = -((byte)((UNK_0018470d < bVar34) * UNK_0018470d |
                                   (UNK_0018470d >= bVar34) * bVar34) == bVar34);
            auVar99[0xe] = -((byte)((UNK_0018470e < bVar35) * UNK_0018470e |
                                   (UNK_0018470e >= bVar35) * bVar35) == bVar35);
            auVar99[0xf] = -((byte)((UNK_0018470f < bVar36) * UNK_0018470f |
                                   (UNK_0018470f >= bVar36) * bVar36) == bVar36);
            auVar100[0] = -(bVar9 == DAT_00182620);
            auVar100[1] = -(bVar87 == UNK_00182621);
            auVar100[2] = -(bVar89 == UNK_00182622);
            auVar100[3] = -(bVar90 == UNK_00182623);
            auVar100[4] = -(bVar91 == UNK_00182624);
            auVar100[5] = -(bVar92 == UNK_00182625);
            auVar100[6] = -(bVar93 == UNK_00182626);
            auVar100[7] = -(bVar94 == UNK_00182627);
            auVar100[8] = -(bVar13 == UNK_00182628);
            auVar100[9] = -(bVar14 == UNK_00182629);
            auVar100[10] = -(bVar15 == UNK_0018262a);
            auVar100[0xb] = -(bVar16 == UNK_0018262b);
            auVar100[0xc] = -(bVar17 == UNK_0018262c);
            auVar100[0xd] = -(bVar18 == UNK_0018262d);
            auVar100[0xe] = -(bVar19 == UNK_0018262e);
            auVar100[0xf] = -(bVar20 == UNK_0018262f);
            auVar98[0] = -(bVar21 == DAT_00182620);
            auVar98[1] = -(bVar22 == UNK_00182621);
            auVar98[2] = -(bVar23 == UNK_00182622);
            auVar98[3] = -(bVar24 == UNK_00182623);
            auVar98[4] = -(bVar25 == UNK_00182624);
            auVar98[5] = -(bVar26 == UNK_00182625);
            auVar98[6] = -(bVar27 == UNK_00182626);
            auVar98[7] = -(bVar28 == UNK_00182627);
            auVar98[8] = -(bVar29 == UNK_00182628);
            auVar98[9] = -(bVar30 == UNK_00182629);
            auVar98[10] = -(bVar31 == UNK_0018262a);
            auVar98[0xb] = -(bVar32 == UNK_0018262b);
            auVar98[0xc] = -(bVar33 == UNK_0018262c);
            auVar98[0xd] = -(bVar34 == UNK_0018262d);
            auVar98[0xe] = -(bVar35 == UNK_0018262e);
            auVar98[0xf] = -(bVar36 == UNK_0018262f);
            auVar76[0] = -(bVar9 == DAT_00183900);
            auVar76[1] = -(bVar87 == UNK_00183901);
            auVar76[2] = -(bVar89 == UNK_00183902);
            auVar76[3] = -(bVar90 == UNK_00183903);
            auVar76[4] = -(bVar91 == UNK_00183904);
            auVar76[5] = -(bVar92 == UNK_00183905);
            auVar76[6] = -(bVar93 == UNK_00183906);
            auVar76[7] = -(bVar94 == UNK_00183907);
            auVar76[8] = -(bVar13 == UNK_00183908);
            auVar76[9] = -(bVar14 == UNK_00183909);
            auVar76[10] = -(bVar15 == UNK_0018390a);
            auVar76[0xb] = -(bVar16 == UNK_0018390b);
            auVar76[0xc] = -(bVar17 == UNK_0018390c);
            auVar76[0xd] = -(bVar18 == UNK_0018390d);
            auVar76[0xe] = -(bVar19 == UNK_0018390e);
            auVar76[0xf] = -(bVar20 == UNK_0018390f);
            auVar74 = auVar74 | ~auVar76 & (auVar100 | auVar97);
            auVar95[0] = -(bVar21 == DAT_00183900);
            auVar95[1] = -(bVar22 == UNK_00183901);
            auVar95[2] = -(bVar23 == UNK_00183902);
            auVar95[3] = -(bVar24 == UNK_00183903);
            auVar95[4] = -(bVar25 == UNK_00183904);
            auVar95[5] = -(bVar26 == UNK_00183905);
            auVar95[6] = -(bVar27 == UNK_00183906);
            auVar95[7] = -(bVar28 == UNK_00183907);
            auVar95[8] = -(bVar29 == UNK_00183908);
            auVar95[9] = -(bVar30 == UNK_00183909);
            auVar95[10] = -(bVar31 == UNK_0018390a);
            auVar95[0xb] = -(bVar32 == UNK_0018390b);
            auVar95[0xc] = -(bVar33 == UNK_0018390c);
            auVar95[0xd] = -(bVar34 == UNK_0018390d);
            auVar95[0xe] = -(bVar35 == UNK_0018390e);
            auVar95[0xf] = -(bVar36 == UNK_0018390f);
            auVar73 = auVar73 | ~auVar95 & (auVar98 | auVar99);
            uVar57 = uVar57 + 0x20;
          } while (uVar58 != uVar57);
          auVar73 = psllw(auVar73 | auVar74,7);
          uVar68 = (ushort)(SUB161(auVar73 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar73[0xf] >> 7) << 0xf;
          pbVar56 = (byte *)(ulonglong)uVar68;
          bVar71 = uVar68 != 0;
          if (uVar51 != uVar58) {
            if ((uVar51 & 0x18) == 0) {
              pbVar56 = pbVar11 + uVar58;
              goto LAB_006b69a1;
            }
            goto LAB_006b6915;
          }
        }
        if (bVar71) {
          local_120 = &local_a8;
          local_118 = <&httparse[622c0e90ae307373]::Header_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::
                      fmt;
          (*(code *)PTR_format_inner_00799048)(pbVar56,&local_120);
          lVar52 = (*(code *)PTR_<alloc[12e961f32105355]::string::String>_00799238)();
          param_1[1] = lVar52;
          *param_1 = -1;
          pcVar67 = (char *)local_48;
          uVar72 = extraout_XMM0_Qa_04;
          if (local_1f8 != 0) {
            uVar72 = (**(code **)(local_1f8 + 0x20))(extraout_XMM0_Qa_04,uVar45);
            pcVar67 = (char *)uVar41;
          }
          goto LAB_006b7474;
        }
      }
      (*(code *)PTR_copy_from_slice_0079a118)();
      auVar38[0xf] = 0;
      auVar38._0_15_ = local_168._1_15_;
      local_168 = auVar38 << 8;
      uVar42 = local_188._0_8_;
      uVar43 = local_188._8_8_;
      uVar44 = local_178._0_8_;
      uVar46 = local_178._8_8_;
      local_190 = local_168._0_8_;
      cVar48 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_reserve_one(&local_110);
      if (cVar48 == '\0') {
        local_a0 = local_110;
        local_208 = auVar37[0];
        if (local_110 == 2) {
          local_168._8_8_ = lStack_100;
          local_168._0_8_ = lStack_108;
          auVar85._8_4_ = (int)lStack_108;
          auVar85._0_8_ = lStack_108;
          auVar85._12_4_ = (int)((ulonglong)lStack_108 >> 0x20);
          local_188 = auVar85 ^ _DAT_00183170;
          auVar86._8_4_ = (int)lStack_100;
          auVar86._0_8_ = lStack_100;
          auVar86._12_4_ = (int)((ulonglong)lStack_100 >> 0x20);
          local_178 = auVar86 ^ _DAT_00182bf0;
          local_158 = (undefined1  [16])0x0;
          local_148 = 0;
          local_120 = (longlong *)(ulonglong)(local_1f8 != 0);
          pplVar53 = &local_120;
          <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>
          ::write(local_188,pplVar53,8);
          if (local_1f8 == 0) {
            local_120 = (longlong *)(ulonglong)(byte)auVar37[0];
            uVar51 = 8;
          }
          else {
            uVar51 = uVar45;
            pplVar53 = (longlong **)uVar41;
          }
          uVar72 = <std[6c98fd8553dbae28]::hash::random::DefaultHasher_as_core[c0acaeba6ab4c2e0]::hash::Hasher>
                   ::write(local_188,pplVar53,uVar51);
          uVar64 = local_158._0_8_ << 0x38 | local_158._8_8_;
          uVar58 = local_178._8_8_ ^ uVar64;
          uVar63 = local_188._0_8_ + local_178._0_8_;
          uVar51 = (local_178._0_8_ << 0xd | (ulonglong)local_178._0_8_ >> 0x33) ^ uVar63;
          uVar57 = (uVar58 << 0x10 | uVar58 >> 0x30) ^ local_188._8_8_ + uVar58;
          uVar59 = local_188._8_8_ + uVar58 + uVar51;
          uVar63 = (uVar63 << 0x20 | uVar63 >> 0x20) + uVar57;
          uVar51 = (uVar51 << 0x11 | uVar51 >> 0x2f) ^ uVar59;
          uVar58 = (uVar57 << 0x15 | uVar57 >> 0x2b) ^ uVar63;
          uVar63 = (uVar63 ^ uVar64) + uVar51;
          uVar57 = ((uVar59 << 0x20 | uVar59 >> 0x20) ^ 0xff) + uVar58;
          uVar51 = (uVar51 << 0xd | uVar51 >> 0x33) ^ uVar63;
          uVar58 = (uVar58 << 0x10 | uVar58 >> 0x30) ^ uVar57;
          uVar57 = uVar57 + uVar51;
          uVar59 = (uVar63 << 0x20 | uVar63 >> 0x20) + uVar58;
          uVar51 = (uVar51 << 0x11 | uVar51 >> 0x2f) ^ uVar57;
          uVar58 = (uVar58 << 0x15 | uVar58 >> 0x2b) ^ uVar59;
          uVar59 = uVar59 + uVar51;
          uVar57 = (uVar57 << 0x20 | uVar57 >> 0x20) + uVar58;
          uVar51 = (uVar51 << 0xd | uVar51 >> 0x33) ^ uVar59;
          uVar58 = (uVar58 << 0x10 | uVar58 >> 0x30) ^ uVar57;
          uVar57 = uVar57 + uVar51;
          uVar59 = (uVar59 << 0x20 | uVar59 >> 0x20) + uVar58;
          uVar51 = (uVar51 << 0x11 | uVar51 >> 0x2f) ^ uVar57;
          uVar58 = (uVar58 << 0x15 | uVar58 >> 0x2b) ^ uVar59;
          lVar60 = (uVar57 << 0x20 | uVar57 >> 0x20) + uVar58;
          uVar51 = (uVar51 << 0xd | uVar51 >> 0x33) ^ uVar59 + uVar51;
          lVar61 = lVar60 + uVar51;
          uVar69 = (uint)((ulonglong)lVar61 >> 0x20) ^ (uint)lVar61 ^
                   ((uint)(uVar58 >> 0x10) ^ (uint)((ulonglong)lVar60 >> 0x20)) >> 0xb ^
                   (uint)(uVar51 >> 0x2f);
        }
        else {
          uVar69 = (local_1f8 != 0 ^ 0x84222325) * 0xaef4a21;
          uVar72 = extraout_XMM0_Qa_00;
          if (local_1f8 == 0) {
            uVar69 = (auVar37._0_4_ & 0xff ^ 0x281a39c5) * 0xaef4a21;
            local_1f8 = 0;
            goto LAB_006b6d10;
          }
          if (uVar45 == 0) {
            goto LAB_006b6d10;
          }
          uVar51 = (ulonglong)(byte)auVar37[8] & 7;
          pplVar53 = (longlong **)uVar41;
          if (uVar51 != 0) {
            do {
              bVar9 = *(byte *)pplVar53;
              pplVar53 = (longlong **)((longlong)pplVar53 + 1);
              uVar69 = (bVar9 ^ uVar69) * 0x1b3;
              uVar51 = uVar51 - 1;
            } while (uVar51 != 0);
          }
          if ((ulonglong)uVar45 < 8) goto LAB_006b6d10;
          do {
            bVar9 = *(byte *)pplVar53;
            pbVar11 = (byte *)((longlong)pplVar53 + 1);
            pbVar56 = (byte *)((longlong)pplVar53 + 2);
            pbVar1 = (byte *)((longlong)pplVar53 + 3);
            pbVar2 = (byte *)((longlong)pplVar53 + 4);
            pbVar3 = (byte *)((longlong)pplVar53 + 5);
            pbVar4 = (byte *)((longlong)pplVar53 + 6);
            pbVar5 = (byte *)((longlong)pplVar53 + 7);
            pplVar53 = pplVar53 + 1;
            uVar69 = ((uint)*pbVar5 ^
                     ((uint)*pbVar4 ^
                     ((uint)*pbVar3 ^
                     ((uint)*pbVar2 ^
                     ((uint)*pbVar1 ^
                     ((uint)*pbVar56 ^ ((uint)*pbVar11 ^ (bVar9 ^ uVar69) * 0x1b3) * 0x1b3) * 0x1b3)
                     * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
          } while (pplVar53 != (longlong **)(uVar41 + uVar45));
        }
LAB_006b6d10:
        lVar60 = lStack_c8;
        lVar52 = lVar52 + 0x20;
        uVar69 = uVar69 & 0x7fff;
        uVar57 = (ulonglong)uStack_b8;
        uVar51 = (ulonglong)(uVar69 & uStack_b8);
        local_1a0 = (int *)auStack_e8._0_8_;
        uVar59 = 0;
        uVar58 = local_c0;
        lVar61 = local_f0;
        do {
          param_1 = local_b0;
          lVar54 = local_198;
          piVar66 = local_1a0;
          bVar71 = uVar51 < uVar58;
          if (!bVar71) {
            uVar51 = 0;
          }
          if (!bVar71 && uVar58 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          piVar62 = (int *)(ulonglong)*(ushort *)(lVar60 + uVar51 * 4);
          uVar68 = (ushort)uVar69;
          if (piVar62 == (int *)0xffff) {
            if ((int *)0x7fff < local_1a0) {
              uVar72 = (**(code **)(uVar42 + 0x20))(bVar71 || uVar58 != 0,uVar44);
              goto joined_r0x006b766b;
            }
            local_148 = local_1f8;
            pplStack_140 = (longlong **)uVar41;
            local_138 = uVar45;
            uStack_130 = uVar47;
            local_178._8_8_ = uVar42;
            local_168._8_8_ = uVar44;
            local_168._0_8_ = uVar43;
            local_158._8_8_ = local_190;
            local_158._0_8_ = uVar46;
            auVar39._8_8_ = 0;
            auVar39._0_8_ = local_188._8_8_;
            local_188 = auVar39 << 0x40;
            local_128 = uVar68;
            if (local_1a0 == piStack_f8) {
              (*(code *)PTR_grow_one_0079a448)();
              uVar58 = local_c0;
              lVar61 = local_f0;
            }
            lVar60 = (longlong)piVar66 * 0x68;
            *(ulonglong *)(lVar61 + 0x60 + lVar60) = CONCAT62(uStack_126,local_128);
            puVar6 = (ulonglong *)(lVar61 + 0x50 + lVar60);
            *puVar6 = local_138;
            puVar6[1] = uStack_130;
            plVar7 = (longlong *)(lVar61 + 0x40 + lVar60);
            *plVar7 = local_148;
            plVar7[1] = (longlong)pplStack_140;
            puVar8 = (undefined8 *)(lVar61 + 0x30 + lVar60);
            *puVar8 = local_158._0_8_;
            puVar8[1] = local_158._8_8_;
            puVar8 = (undefined8 *)(lVar61 + 0x20 + lVar60);
            *puVar8 = local_168._0_8_;
            puVar8[1] = local_168._8_8_;
            *(undefined1 (*) [16])(lVar61 + 0x10 + lVar60) = local_178;
            *(undefined8 *)(lVar61 + lVar60) = local_188._0_8_;
            ((undefined8 *)(lVar61 + lVar60))[1] = local_188._8_8_;
            auStack_e8._0_8_ = (longlong)piVar66 + 1;
            if (uVar58 <= uVar51) {
              (*(code *)PTR_panic_bounds_check_00799520)
                        (CONCAT62(uStack_126,local_128),
                         &
                         PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007925d8
                        );
              goto LAB_006b76ba;
            }
            *(short *)(lStack_c8 + uVar51 * 4) = (short)piVar66;
            *(ushort *)(lStack_c8 + 2 + uVar51 * 4) = uVar68;
            uVar72 = local_188._0_8_;
            goto LAB_006b70ae;
          }
          uVar10 = *(ushort *)(lVar60 + 2 + uVar51 * 4);
          uVar55 = (uint)uVar10 & (uint)uVar57;
          if (((int)uVar51 - uVar55 & (uint)uVar57) < uVar59) {
            bVar71 = (int)local_a0 != 2;
            if (local_1a0 < (int *)0x8000) {
              local_148 = local_1f8;
              pplStack_140 = (longlong **)uVar41;
              local_138 = uVar45;
              uStack_130 = uVar47;
              local_178._8_8_ = uVar42;
              local_168._8_8_ = uVar44;
              local_168._0_8_ = uVar43;
              local_158._8_8_ = local_190;
              local_158._0_8_ = uVar46;
              auVar40._8_8_ = 0;
              auVar40._0_8_ = local_188._8_8_;
              local_188 = auVar40 << 0x40;
              local_128 = uVar68;
              if (local_1a0 == piStack_f8) {
                (*(code *)PTR_grow_one_0079a448)();
                lVar60 = lStack_c8;
                uVar58 = local_c0;
                lVar61 = local_f0;
              }
              lVar54 = (longlong)piVar66 * 0x68;
              *(ulonglong *)(lVar61 + 0x60 + lVar54) = CONCAT62(uStack_126,local_128);
              puVar6 = (ulonglong *)(lVar61 + 0x50 + lVar54);
              *puVar6 = local_138;
              puVar6[1] = uStack_130;
              plVar7 = (longlong *)(lVar61 + 0x40 + lVar54);
              *plVar7 = local_148;
              plVar7[1] = (longlong)pplStack_140;
              puVar8 = (undefined8 *)(lVar61 + 0x30 + lVar54);
              *puVar8 = local_158._0_8_;
              puVar8[1] = local_158._8_8_;
              puVar8 = (undefined8 *)(lVar61 + 0x20 + lVar54);
              *puVar8 = local_168._0_8_;
              puVar8[1] = local_168._8_8_;
              *(undefined1 (*) [16])(lVar61 + 0x10 + lVar54) = local_178;
              *(undefined8 *)(lVar61 + lVar54) = local_188._0_8_;
              ((undefined8 *)(lVar61 + lVar54))[1] = local_188._8_8_;
              auStack_e8._0_8_ = (longlong)piVar66 + 1;
              uVar57 = 0;
              while( true ) {
                if ((uVar58 <= uVar51) && (uVar51 = 0, uVar58 == 0)) {
                  do {
                    /* WARNING: Do nothing block with infinite loop */
                  } while( true );
                }
                uVar68 = *(ushort *)(lVar60 + uVar51 * 4);
                if (uVar68 == 0xffff) break;
                uVar57 = uVar57 + 1;
                uVar10 = *(ushort *)(lVar60 + 2 + uVar51 * 4);
                *(short *)(lVar60 + uVar51 * 4) = (short)piVar66;
                *(short *)(lVar60 + 2 + uVar51 * 4) = (short)uVar69;
                uVar51 = uVar51 + 1;
                uVar69 = (uint)uVar10;
                piVar66 = (int *)(ulonglong)uVar68;
              }
              *(short *)(lVar60 + uVar51 * 4) = (short)piVar66;
              *(short *)(lVar60 + 2 + uVar51 * 4) = (short)uVar69;
              param_1 = local_b0;
              lVar54 = local_198;
              uVar72 = local_188._0_8_;
              if ((bVar71 && 0x1ff < uVar59 || 0x7f < uVar57) && (local_110 == 0)) {
                local_110 = 1;
              }
              goto LAB_006b70ae;
            }
            uVar72 = (**(code **)(uVar42 + 0x20))();
            goto joined_r0x006b766b;
          }
          if (uVar10 == uVar68) {
            if (local_1a0 <= piVar62) {
              (*(code *)PTR_panic_bounds_check_00799520)
                        (uVar55,&
                                PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_007925c0
                        );
              goto LAB_006b76ba;
            }
            lVar54 = *(longlong *)(lVar61 + 0x40 + (longlong)piVar62 * 0x68);
            if ((local_1f8 == 0) != (lVar54 != 0)) {
              piVar66 = (int *)((longlong)piVar62 * 0x68 + lVar61);
              if (lVar54 == 0) {
                if ((char)piVar66[0x12] == local_208) goto LAB_006b6e56;
              }
              else if (*(ulonglong *)(piVar66 + 0x14) == uVar45) {
                local_98 = uVar57;
                local_90 = lVar61;
                local_88 = uVar58;
                iVar49 = (*(code *)PTR_bcmp_00799020)
                                   (CONCAT31((int3)(uVar55 >> 8),local_1f8 == 0),uVar45);
                uVar58 = local_88;
                lVar61 = local_90;
                uVar57 = local_98;
                uVar72 = extraout_XMM0_Qa_01;
                if (iVar49 == 0) goto LAB_006b6e56;
              }
            }
          }
          uVar59 = uVar59 + 1;
          uVar51 = uVar51 + 1;
        } while( true );
      }
      uVar72 = (**(code **)(uVar42 + 0x20))(extraout_XMM0_Qa_00,uVar44);
joined_r0x006b766b:
      if (local_1f8 != 0) {
        (**(code **)(local_1f8 + 0x20))(uVar72,uVar45);
      }
      (*(code *)PTR_unwrap_failed_00799028)
                (&DAT_00792650,&local_1a9,
                 &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792670);
      goto LAB_006b76ba;
    }
    pcVar67 = "Partial header";
    lVar52 = (*(code *)PTR_<&str>_007991e8)(uVar72,0xe);
    uVar72 = extraout_XMM0_Qa_02;
  }
LAB_006b7469:
  param_1[1] = lVar52;
  *param_1 = -1;
LAB_006b7474:
  if (uVar65 != 0) {
    pcVar67 = (char *)(uVar65 << 5);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar72,8);
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<http[56314f485c23ccf6]::header::map::HeaderMap>
            (&local_110,pcVar67);
  return param_1;
LAB_006b6e56:
  uVar51 = local_d0;
  if (*piVar66 == 1) {
    uVar58 = *(ulonglong *)(piVar66 + 4);
    local_1a0 = piVar66;
    if (local_d0 == auStack_e8._8_8_) {
      uVar72 = (*(code *)PTR_grow_one_0079a440)();
    }
    *(undefined8 *)(lStack_d8 + uVar51 * 0x48) = 1;
    *(ulonglong *)(lStack_d8 + 8 + uVar51 * 0x48) = uVar58;
    *(undefined8 *)(lStack_d8 + 0x10 + uVar51 * 0x48) = 0;
    *(int **)(lStack_d8 + 0x18 + uVar51 * 0x48) = piVar62;
    *(undefined8 *)(lStack_d8 + 0x20 + uVar51 * 0x48) = uVar42;
    *(undefined8 *)(lStack_d8 + 0x28 + uVar51 * 0x48) = uVar43;
    *(undefined8 *)(lStack_d8 + 0x30 + uVar51 * 0x48) = uVar44;
    *(undefined8 *)(lStack_d8 + 0x38 + uVar51 * 0x48) = uVar46;
    *(undefined8 *)(lStack_d8 + 0x40 + uVar51 * 0x48) = local_190;
    local_d0 = uVar51 + 1;
    if (uVar51 < uVar58) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar51 * 9,
                 &PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_00792638);
      goto LAB_006b76ba;
    }
    *(undefined8 *)(lStack_d8 + 0x10 + uVar58 * 0x48) = 1;
    *(ulonglong *)(lStack_d8 + 0x18 + uVar58 * 0x48) = uVar51;
    local_1a0[0] = 1;
    local_1a0[1] = 0;
    *(ulonglong *)(local_1a0 + 4) = uVar51;
  }
  else {
    if (local_d0 == auStack_e8._8_8_) {
      uVar72 = (*(code *)PTR_grow_one_0079a440)();
    }
    *(undefined8 *)(lStack_d8 + uVar51 * 0x48) = 0;
    *(int **)(lStack_d8 + 8 + uVar51 * 0x48) = piVar62;
    *(undefined8 *)(lStack_d8 + 0x10 + uVar51 * 0x48) = 0;
    *(int **)(lStack_d8 + 0x18 + uVar51 * 0x48) = piVar62;
    *(undefined8 *)(lStack_d8 + 0x20 + uVar51 * 0x48) = uVar42;
    *(undefined8 *)(lStack_d8 + 0x28 + uVar51 * 0x48) = uVar43;
    *(undefined8 *)(lStack_d8 + 0x30 + uVar51 * 0x48) = uVar44;
    *(undefined8 *)(lStack_d8 + 0x38 + uVar51 * 0x48) = uVar46;
    *(undefined8 *)(lStack_d8 + 0x40 + uVar51 * 0x48) = local_190;
    piVar66[0] = 1;
    piVar66[1] = 0;
    *(ulonglong *)(piVar66 + 2) = uVar51;
    *(ulonglong *)(piVar66 + 4) = uVar51;
    uVar58 = uVar51;
  }
  param_1 = local_b0;
  lVar54 = local_198;
  local_d0 = uVar51 + 1;
  if (local_1f8 != 0) {
    uVar72 = (**(code **)(local_1f8 + 0x20))(uVar58 * 9,uVar45);
  }
LAB_006b70ae:
  if (lVar52 == lVar54) goto LAB_006b74b0;
  goto LAB_006b67d5;
}


