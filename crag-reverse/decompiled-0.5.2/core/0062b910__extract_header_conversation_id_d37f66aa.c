// 0062b910 extract_header_conversation_id

/* craggemini_core[66f3c71560d70857]::server::extract_header_conversation_id */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::server::extract_header_conversation_id
          (longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  code *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  uint uVar10;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong extraout_RDX_01;
  longlong extraout_RDX_02;
  longlong lVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [16];
  undefined1 auVar58 [16];
  undefined1 auVar57 [16];
  undefined1 auVar56 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  byte bVar60;
  char cVar66;
  byte bVar65;
  char cVar68;
  byte bVar67;
  char cVar70;
  byte bVar69;
  char cVar72;
  byte bVar71;
  char cVar74;
  byte bVar73;
  char cVar76;
  byte bVar75;
  byte bVar77;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  byte bVar93;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
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
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  char local_38 [16];
  ulonglong local_28;
  
  uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
           <http[56314f485c23ccf6]::header::value::HeaderValue>
                     (local_38,"x-conversation-id",0x11,param_2);
  if (local_38[0] == '\0') {
LAB_0062bb04:
    uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
             <http[56314f485c23ccf6]::header::value::HeaderValue>
                       (local_38,"x-session-id",0xc,param_2);
    if (local_38[0] != '\0') {
      if (*(ulonglong *)(param_2 + 0x28) <= local_28) goto LAB_0062c11f;
      pcVar3 = *(char **)(*(longlong *)(param_2 + 0x20) + 0x20 + local_28 * 0x68);
      uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x28 + local_28 * 0x68);
      if (uVar4 != 0) {
        if (uVar4 < 8) {
          bVar13 = false;
          pcVar9 = pcVar3;
LAB_0062bc9c:
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            bVar13 = (bool)(bVar13 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
          } while (pcVar9 != pcVar3 + uVar4);
        }
        else if (uVar4 < 0x20) {
          uVar6 = 0;
          uVar10 = 0;
LAB_0062bc21:
          uVar12 = uVar4 & 0xfffffffffffffff8;
          pcVar9 = pcVar3 + uVar12;
          auVar15 = ZEXT416(uVar10);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar17._12_4_ = 0xffffffff;
          do {
            uVar14 = *(undefined8 *)(pcVar3 + uVar6);
            bVar60 = (char)uVar14 + DAT_00183cf0;
            cVar66 = (char)((ulonglong)uVar14 >> 8);
            bVar65 = cVar66 + UNK_00183cf1;
            cVar68 = (char)((ulonglong)uVar14 >> 0x10);
            bVar67 = cVar68 + UNK_00183cf2;
            cVar70 = (char)((ulonglong)uVar14 >> 0x18);
            bVar69 = cVar70 + UNK_00183cf3;
            cVar72 = (char)((ulonglong)uVar14 >> 0x20);
            bVar71 = cVar72 + UNK_00183cf4;
            cVar74 = (char)((ulonglong)uVar14 >> 0x28);
            bVar73 = cVar74 + UNK_00183cf5;
            cVar76 = (char)((ulonglong)uVar14 >> 0x30);
            cVar2 = (char)((ulonglong)uVar14 >> 0x38);
            bVar75 = cVar76 + UNK_00183cf6;
            bVar77 = cVar2 + UNK_00183cf7;
            auVar81[0] = -((byte)((bVar60 < DAT_00183660) * DAT_00183660 |
                                 (bVar60 >= DAT_00183660) * bVar60) == bVar60);
            auVar81[1] = -((byte)((bVar65 < UNK_00183661) * UNK_00183661 |
                                 (bVar65 >= UNK_00183661) * bVar65) == bVar65);
            auVar81[2] = -((byte)((bVar67 < UNK_00183662) * UNK_00183662 |
                                 (bVar67 >= UNK_00183662) * bVar67) == bVar67);
            auVar81[3] = -((byte)((bVar69 < UNK_00183663) * UNK_00183663 |
                                 (bVar69 >= UNK_00183663) * bVar69) == bVar69);
            auVar81[4] = -((byte)((bVar71 < UNK_00183664) * UNK_00183664 |
                                 (bVar71 >= UNK_00183664) * bVar71) == bVar71);
            auVar81[5] = -((byte)((bVar73 < UNK_00183665) * UNK_00183665 |
                                 (bVar73 >= UNK_00183665) * bVar73) == bVar73);
            auVar81[6] = -((byte)((bVar75 < UNK_00183666) * UNK_00183666 |
                                 (bVar75 >= UNK_00183666) * bVar75) == bVar75);
            auVar81[7] = -((byte)((bVar77 < UNK_00183667) * UNK_00183667 |
                                 (bVar77 >= UNK_00183667) * bVar77) == bVar77);
            auVar81[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                 (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
            auVar81[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                 (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
            auVar81[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                  (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
            auVar81[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                   (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
            auVar81[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                   (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
            auVar81[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                   (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
            auVar81[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                   (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
            auVar81[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                   (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
            auVar31[0] = -((char)uVar14 == s__00184760[0]);
            auVar31[1] = -(cVar66 == s__00184760[1]);
            auVar31[2] = -(cVar68 == s__00184760[2]);
            auVar31[3] = -(cVar70 == s__00184760[3]);
            auVar31[4] = -(cVar72 == s__00184760[4]);
            auVar31[5] = -(cVar74 == s__00184760[5]);
            auVar31[6] = -(cVar76 == s__00184760[6]);
            auVar31[7] = -(cVar2 == s__00184760[7]);
            auVar31[8] = -(s__00184760[8] == '\0');
            auVar31[9] = -(UNK_00184769 == '\0');
            auVar31[10] = -(UNK_0018476a == '\0');
            auVar31[0xb] = -(UNK_0018476b == '\0');
            auVar31[0xc] = -(UNK_0018476c == '\0');
            auVar31[0xd] = -(UNK_0018476d == '\0');
            auVar31[0xe] = -(UNK_0018476e == '\0');
            auVar31[0xf] = -(UNK_0018476f == '\0');
            auVar31 = auVar31 | auVar81;
            auVar39._0_14_ = auVar31._0_14_;
            auVar39[0xe] = auVar31[7];
            auVar39[0xf] = auVar31[7];
            auVar38._14_2_ = auVar39._14_2_;
            auVar38._0_13_ = auVar31._0_13_;
            auVar38[0xd] = auVar31[6];
            auVar37._13_3_ = auVar38._13_3_;
            auVar37._0_12_ = auVar31._0_12_;
            auVar37[0xc] = auVar31[6];
            auVar36._12_4_ = auVar37._12_4_;
            auVar36._0_11_ = auVar31._0_11_;
            auVar36[0xb] = auVar31[5];
            auVar35._11_5_ = auVar36._11_5_;
            auVar35._0_10_ = auVar31._0_10_;
            auVar35[10] = auVar31[5];
            auVar34._10_6_ = auVar35._10_6_;
            auVar34._0_9_ = auVar31._0_9_;
            auVar34[9] = auVar31[4];
            auVar33._9_7_ = auVar34._9_7_;
            auVar33._0_8_ = auVar31._0_8_;
            auVar33[8] = auVar31[4];
            auVar32._8_8_ = auVar33._8_8_;
            auVar32[7] = auVar31[3];
            auVar32[6] = auVar31[3];
            auVar32[5] = auVar31[2];
            auVar32[4] = auVar31[2];
            auVar32[3] = auVar31[1];
            auVar32[2] = auVar31[1];
            auVar32[0] = auVar31[0];
            auVar32[1] = auVar32[0];
            auVar15 = auVar15 | auVar32 ^ auVar17;
            uVar6 = uVar6 + 8;
          } while (uVar12 != uVar6);
          auVar15 = psllw(auVar15,7);
          bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
          if (uVar4 != uVar12) goto LAB_0062bc9c;
        }
        else {
          uVar6 = uVar4 & 0xffffffffffffffe0;
          auVar15 = (undefined1  [16])0x0;
          uVar12 = 0;
          auVar16 = (undefined1  [16])0x0;
          do {
            pcVar9 = pcVar3 + uVar12;
            pcVar1 = pcVar3 + uVar12 + 0x10;
            bVar60 = *pcVar9 + DAT_001831d0;
            bVar65 = pcVar9[1] + UNK_001831d1;
            bVar67 = pcVar9[2] + UNK_001831d2;
            bVar69 = pcVar9[3] + UNK_001831d3;
            bVar71 = pcVar9[4] + UNK_001831d4;
            bVar73 = pcVar9[5] + UNK_001831d5;
            bVar75 = pcVar9[6] + UNK_001831d6;
            bVar77 = pcVar9[7] + UNK_001831d7;
            bVar86 = pcVar9[8] + UNK_001831d8;
            bVar87 = pcVar9[9] + UNK_001831d9;
            bVar88 = pcVar9[10] + UNK_001831da;
            bVar89 = pcVar9[0xb] + UNK_001831db;
            bVar90 = pcVar9[0xc] + UNK_001831dc;
            bVar91 = pcVar9[0xd] + UNK_001831dd;
            bVar92 = pcVar9[0xe] + UNK_001831de;
            bVar93 = pcVar9[0xf] + UNK_001831df;
            bVar94 = *pcVar1 + DAT_001831d0;
            bVar95 = pcVar1[1] + UNK_001831d1;
            bVar96 = pcVar1[2] + UNK_001831d2;
            bVar97 = pcVar1[3] + UNK_001831d3;
            bVar98 = pcVar1[4] + UNK_001831d4;
            bVar99 = pcVar1[5] + UNK_001831d5;
            bVar100 = pcVar1[6] + UNK_001831d6;
            bVar101 = pcVar1[7] + UNK_001831d7;
            bVar102 = pcVar1[8] + UNK_001831d8;
            bVar103 = pcVar1[9] + UNK_001831d9;
            bVar104 = pcVar1[10] + UNK_001831da;
            bVar105 = pcVar1[0xb] + UNK_001831db;
            bVar106 = pcVar1[0xc] + UNK_001831dc;
            bVar107 = pcVar1[0xd] + UNK_001831dd;
            bVar108 = pcVar1[0xe] + UNK_001831de;
            bVar109 = pcVar1[0xf] + UNK_001831df;
            auVar111[0] = -((byte)((DAT_00182f40 < bVar60) * DAT_00182f40 |
                                  (DAT_00182f40 >= bVar60) * bVar60) == bVar60);
            auVar111[1] = -((byte)((UNK_00182f41 < bVar65) * UNK_00182f41 |
                                  (UNK_00182f41 >= bVar65) * bVar65) == bVar65);
            auVar111[2] = -((byte)((UNK_00182f42 < bVar67) * UNK_00182f42 |
                                  (UNK_00182f42 >= bVar67) * bVar67) == bVar67);
            auVar111[3] = -((byte)((UNK_00182f43 < bVar69) * UNK_00182f43 |
                                  (UNK_00182f43 >= bVar69) * bVar69) == bVar69);
            auVar111[4] = -((byte)((UNK_00182f44 < bVar71) * UNK_00182f44 |
                                  (UNK_00182f44 >= bVar71) * bVar71) == bVar71);
            auVar111[5] = -((byte)((UNK_00182f45 < bVar73) * UNK_00182f45 |
                                  (UNK_00182f45 >= bVar73) * bVar73) == bVar73);
            auVar111[6] = -((byte)((UNK_00182f46 < bVar75) * UNK_00182f46 |
                                  (UNK_00182f46 >= bVar75) * bVar75) == bVar75);
            auVar111[7] = -((byte)((UNK_00182f47 < bVar77) * UNK_00182f47 |
                                  (UNK_00182f47 >= bVar77) * bVar77) == bVar77);
            auVar111[8] = -((byte)((UNK_00182f48 < bVar86) * UNK_00182f48 |
                                  (UNK_00182f48 >= bVar86) * bVar86) == bVar86);
            auVar111[9] = -((byte)((UNK_00182f49 < bVar87) * UNK_00182f49 |
                                  (UNK_00182f49 >= bVar87) * bVar87) == bVar87);
            auVar111[10] = -((byte)((UNK_00182f4a < bVar88) * UNK_00182f4a |
                                   (UNK_00182f4a >= bVar88) * bVar88) == bVar88);
            auVar111[0xb] =
                 -((byte)((UNK_00182f4b < bVar89) * UNK_00182f4b | (UNK_00182f4b >= bVar89) * bVar89
                         ) == bVar89);
            auVar111[0xc] =
                 -((byte)((UNK_00182f4c < bVar90) * UNK_00182f4c | (UNK_00182f4c >= bVar90) * bVar90
                         ) == bVar90);
            auVar111[0xd] =
                 -((byte)((UNK_00182f4d < bVar91) * UNK_00182f4d | (UNK_00182f4d >= bVar91) * bVar91
                         ) == bVar91);
            auVar111[0xe] =
                 -((byte)((UNK_00182f4e < bVar92) * UNK_00182f4e | (UNK_00182f4e >= bVar92) * bVar92
                         ) == bVar92);
            auVar111[0xf] =
                 -((byte)((UNK_00182f4f < bVar93) * UNK_00182f4f | (UNK_00182f4f >= bVar93) * bVar93
                         ) == bVar93);
            auVar80[0] = -((byte)((DAT_00182f40 < bVar94) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar94) * bVar94) == bVar94);
            auVar80[1] = -((byte)((UNK_00182f41 < bVar95) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar95) * bVar95) == bVar95);
            auVar80[2] = -((byte)((UNK_00182f42 < bVar96) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar96) * bVar96) == bVar96);
            auVar80[3] = -((byte)((UNK_00182f43 < bVar97) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar97) * bVar97) == bVar97);
            auVar80[4] = -((byte)((UNK_00182f44 < bVar98) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar98) * bVar98) == bVar98);
            auVar80[5] = -((byte)((UNK_00182f45 < bVar99) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar99) * bVar99) == bVar99);
            auVar80[6] = -((byte)((UNK_00182f46 < bVar100) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar100) * bVar100) == bVar100);
            auVar80[7] = -((byte)((UNK_00182f47 < bVar101) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar101) * bVar101) == bVar101);
            auVar80[8] = -((byte)((UNK_00182f48 < bVar102) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar102) * bVar102) == bVar102);
            auVar80[9] = -((byte)((UNK_00182f49 < bVar103) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar103) * bVar103) == bVar103);
            auVar80[10] = -((byte)((UNK_00182f4a < bVar104) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar104) * bVar104) == bVar104);
            auVar80[0xb] = -((byte)((UNK_00182f4b < bVar105) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar105) * bVar105) == bVar105);
            auVar80[0xc] = -((byte)((UNK_00182f4c < bVar106) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar106) * bVar106) == bVar106);
            auVar80[0xd] = -((byte)((UNK_00182f4d < bVar107) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar107) * bVar107) == bVar107);
            auVar80[0xe] = -((byte)((UNK_00182f4e < bVar108) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar108) * bVar108) == bVar108);
            auVar80[0xf] = -((byte)((UNK_00182f4f < bVar109) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar109) * bVar109) == bVar109);
            auVar30[0] = -(*pcVar9 == DAT_00183900);
            auVar30[1] = -(pcVar9[1] == UNK_00183901);
            auVar30[2] = -(pcVar9[2] == UNK_00183902);
            auVar30[3] = -(pcVar9[3] == UNK_00183903);
            auVar30[4] = -(pcVar9[4] == UNK_00183904);
            auVar30[5] = -(pcVar9[5] == UNK_00183905);
            auVar30[6] = -(pcVar9[6] == UNK_00183906);
            auVar30[7] = -(pcVar9[7] == UNK_00183907);
            auVar30[8] = -(pcVar9[8] == UNK_00183908);
            auVar30[9] = -(pcVar9[9] == UNK_00183909);
            auVar30[10] = -(pcVar9[10] == UNK_0018390a);
            auVar30[0xb] = -(pcVar9[0xb] == UNK_0018390b);
            auVar30[0xc] = -(pcVar9[0xc] == UNK_0018390c);
            auVar30[0xd] = -(pcVar9[0xd] == UNK_0018390d);
            auVar30[0xe] = -(pcVar9[0xe] == UNK_0018390e);
            auVar30[0xf] = -(pcVar9[0xf] == UNK_0018390f);
            auVar16 = auVar16 | ~auVar30 & auVar111;
            auVar62[0] = -(*pcVar1 == DAT_00183900);
            auVar62[1] = -(pcVar1[1] == UNK_00183901);
            auVar62[2] = -(pcVar1[2] == UNK_00183902);
            auVar62[3] = -(pcVar1[3] == UNK_00183903);
            auVar62[4] = -(pcVar1[4] == UNK_00183904);
            auVar62[5] = -(pcVar1[5] == UNK_00183905);
            auVar62[6] = -(pcVar1[6] == UNK_00183906);
            auVar62[7] = -(pcVar1[7] == UNK_00183907);
            auVar62[8] = -(pcVar1[8] == UNK_00183908);
            auVar62[9] = -(pcVar1[9] == UNK_00183909);
            auVar62[10] = -(pcVar1[10] == UNK_0018390a);
            auVar62[0xb] = -(pcVar1[0xb] == UNK_0018390b);
            auVar62[0xc] = -(pcVar1[0xc] == UNK_0018390c);
            auVar62[0xd] = -(pcVar1[0xd] == UNK_0018390d);
            auVar62[0xe] = -(pcVar1[0xe] == UNK_0018390e);
            auVar62[0xf] = -(pcVar1[0xf] == UNK_0018390f);
            auVar15 = auVar15 | ~auVar62 & auVar80;
            uVar12 = uVar12 + 0x20;
          } while (uVar6 != uVar12);
          auVar15 = psllw(auVar15 | auVar16,7);
          bVar13 = (((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0)
                   || auVar15[0xf] < '\0';
          uVar10 = (uint)bVar13;
          if (uVar4 != uVar6) {
            if ((uVar4 & 0x18) == 0) {
              pcVar9 = pcVar3 + uVar6;
              goto LAB_0062bc9c;
            }
            goto LAB_0062bc21;
          }
        }
        if (bVar13) goto LAB_0062bce6;
      }
      ::<str>::trim_matches::<<char>::is_whitespace>();
      lVar11 = extraout_RDX_00;
      if (0xffffffffffffff7f < extraout_RDX_00 - 0x81U) goto LAB_0062c0ab;
    }
LAB_0062bce6:
    uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
             <http[56314f485c23ccf6]::header::value::HeaderValue>
                       (local_38,"x-claude-code-session-id",0x18,param_2);
    if (local_38[0] != '\0') {
      if (*(ulonglong *)(param_2 + 0x28) <= local_28) goto LAB_0062c11f;
      pcVar3 = *(char **)(*(longlong *)(param_2 + 0x20) + 0x20 + local_28 * 0x68);
      uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x28 + local_28 * 0x68);
      if (uVar4 != 0) {
        if (uVar4 < 8) {
          bVar13 = false;
          pcVar9 = pcVar3;
LAB_0062be7c:
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            bVar13 = (bool)(bVar13 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
          } while (pcVar9 != pcVar3 + uVar4);
        }
        else if (uVar4 < 0x20) {
          uVar6 = 0;
          uVar10 = 0;
LAB_0062be01:
          uVar12 = uVar4 & 0xfffffffffffffff8;
          pcVar9 = pcVar3 + uVar12;
          auVar15 = ZEXT416(uVar10);
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          do {
            uVar14 = *(undefined8 *)(pcVar3 + uVar6);
            bVar60 = (char)uVar14 + DAT_00183cf0;
            cVar66 = (char)((ulonglong)uVar14 >> 8);
            bVar65 = cVar66 + UNK_00183cf1;
            cVar68 = (char)((ulonglong)uVar14 >> 0x10);
            bVar67 = cVar68 + UNK_00183cf2;
            cVar70 = (char)((ulonglong)uVar14 >> 0x18);
            bVar69 = cVar70 + UNK_00183cf3;
            cVar72 = (char)((ulonglong)uVar14 >> 0x20);
            bVar71 = cVar72 + UNK_00183cf4;
            cVar74 = (char)((ulonglong)uVar14 >> 0x28);
            bVar73 = cVar74 + UNK_00183cf5;
            cVar76 = (char)((ulonglong)uVar14 >> 0x30);
            cVar2 = (char)((ulonglong)uVar14 >> 0x38);
            bVar75 = cVar76 + UNK_00183cf6;
            bVar77 = cVar2 + UNK_00183cf7;
            auVar83[0] = -((byte)((bVar60 < DAT_00183660) * DAT_00183660 |
                                 (bVar60 >= DAT_00183660) * bVar60) == bVar60);
            auVar83[1] = -((byte)((bVar65 < UNK_00183661) * UNK_00183661 |
                                 (bVar65 >= UNK_00183661) * bVar65) == bVar65);
            auVar83[2] = -((byte)((bVar67 < UNK_00183662) * UNK_00183662 |
                                 (bVar67 >= UNK_00183662) * bVar67) == bVar67);
            auVar83[3] = -((byte)((bVar69 < UNK_00183663) * UNK_00183663 |
                                 (bVar69 >= UNK_00183663) * bVar69) == bVar69);
            auVar83[4] = -((byte)((bVar71 < UNK_00183664) * UNK_00183664 |
                                 (bVar71 >= UNK_00183664) * bVar71) == bVar71);
            auVar83[5] = -((byte)((bVar73 < UNK_00183665) * UNK_00183665 |
                                 (bVar73 >= UNK_00183665) * bVar73) == bVar73);
            auVar83[6] = -((byte)((bVar75 < UNK_00183666) * UNK_00183666 |
                                 (bVar75 >= UNK_00183666) * bVar75) == bVar75);
            auVar83[7] = -((byte)((bVar77 < UNK_00183667) * UNK_00183667 |
                                 (bVar77 >= UNK_00183667) * bVar77) == bVar77);
            auVar83[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                 (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
            auVar83[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                 (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
            auVar83[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                  (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
            auVar83[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                   (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
            auVar83[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                   (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
            auVar83[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                   (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
            auVar83[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                   (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
            auVar83[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                   (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
            auVar41[0] = -((char)uVar14 == s__00184760[0]);
            auVar41[1] = -(cVar66 == s__00184760[1]);
            auVar41[2] = -(cVar68 == s__00184760[2]);
            auVar41[3] = -(cVar70 == s__00184760[3]);
            auVar41[4] = -(cVar72 == s__00184760[4]);
            auVar41[5] = -(cVar74 == s__00184760[5]);
            auVar41[6] = -(cVar76 == s__00184760[6]);
            auVar41[7] = -(cVar2 == s__00184760[7]);
            auVar41[8] = -(s__00184760[8] == '\0');
            auVar41[9] = -(UNK_00184769 == '\0');
            auVar41[10] = -(UNK_0018476a == '\0');
            auVar41[0xb] = -(UNK_0018476b == '\0');
            auVar41[0xc] = -(UNK_0018476c == '\0');
            auVar41[0xd] = -(UNK_0018476d == '\0');
            auVar41[0xe] = -(UNK_0018476e == '\0');
            auVar41[0xf] = -(UNK_0018476f == '\0');
            auVar41 = auVar41 | auVar83;
            auVar49._0_14_ = auVar41._0_14_;
            auVar49[0xe] = auVar41[7];
            auVar49[0xf] = auVar41[7];
            auVar48._14_2_ = auVar49._14_2_;
            auVar48._0_13_ = auVar41._0_13_;
            auVar48[0xd] = auVar41[6];
            auVar47._13_3_ = auVar48._13_3_;
            auVar47._0_12_ = auVar41._0_12_;
            auVar47[0xc] = auVar41[6];
            auVar46._12_4_ = auVar47._12_4_;
            auVar46._0_11_ = auVar41._0_11_;
            auVar46[0xb] = auVar41[5];
            auVar45._11_5_ = auVar46._11_5_;
            auVar45._0_10_ = auVar41._0_10_;
            auVar45[10] = auVar41[5];
            auVar44._10_6_ = auVar45._10_6_;
            auVar44._0_9_ = auVar41._0_9_;
            auVar44[9] = auVar41[4];
            auVar43._9_7_ = auVar44._9_7_;
            auVar43._0_8_ = auVar41._0_8_;
            auVar43[8] = auVar41[4];
            auVar42._8_8_ = auVar43._8_8_;
            auVar42[7] = auVar41[3];
            auVar42[6] = auVar41[3];
            auVar42[5] = auVar41[2];
            auVar42[4] = auVar41[2];
            auVar42[3] = auVar41[1];
            auVar42[2] = auVar41[1];
            auVar42[0] = auVar41[0];
            auVar42[1] = auVar42[0];
            auVar15 = auVar15 | auVar42 ^ auVar18;
            uVar6 = uVar6 + 8;
          } while (uVar12 != uVar6);
          auVar15 = psllw(auVar15,7);
          bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
          if (uVar4 != uVar12) goto LAB_0062be7c;
        }
        else {
          uVar6 = uVar4 & 0xffffffffffffffe0;
          auVar15 = (undefined1  [16])0x0;
          uVar12 = 0;
          auVar16 = (undefined1  [16])0x0;
          do {
            pcVar9 = pcVar3 + uVar12;
            pcVar1 = pcVar3 + uVar12 + 0x10;
            bVar60 = *pcVar9 + DAT_001831d0;
            bVar65 = pcVar9[1] + UNK_001831d1;
            bVar67 = pcVar9[2] + UNK_001831d2;
            bVar69 = pcVar9[3] + UNK_001831d3;
            bVar71 = pcVar9[4] + UNK_001831d4;
            bVar73 = pcVar9[5] + UNK_001831d5;
            bVar75 = pcVar9[6] + UNK_001831d6;
            bVar77 = pcVar9[7] + UNK_001831d7;
            bVar86 = pcVar9[8] + UNK_001831d8;
            bVar87 = pcVar9[9] + UNK_001831d9;
            bVar88 = pcVar9[10] + UNK_001831da;
            bVar89 = pcVar9[0xb] + UNK_001831db;
            bVar90 = pcVar9[0xc] + UNK_001831dc;
            bVar91 = pcVar9[0xd] + UNK_001831dd;
            bVar92 = pcVar9[0xe] + UNK_001831de;
            bVar93 = pcVar9[0xf] + UNK_001831df;
            bVar94 = *pcVar1 + DAT_001831d0;
            bVar95 = pcVar1[1] + UNK_001831d1;
            bVar96 = pcVar1[2] + UNK_001831d2;
            bVar97 = pcVar1[3] + UNK_001831d3;
            bVar98 = pcVar1[4] + UNK_001831d4;
            bVar99 = pcVar1[5] + UNK_001831d5;
            bVar100 = pcVar1[6] + UNK_001831d6;
            bVar101 = pcVar1[7] + UNK_001831d7;
            bVar102 = pcVar1[8] + UNK_001831d8;
            bVar103 = pcVar1[9] + UNK_001831d9;
            bVar104 = pcVar1[10] + UNK_001831da;
            bVar105 = pcVar1[0xb] + UNK_001831db;
            bVar106 = pcVar1[0xc] + UNK_001831dc;
            bVar107 = pcVar1[0xd] + UNK_001831dd;
            bVar108 = pcVar1[0xe] + UNK_001831de;
            bVar109 = pcVar1[0xf] + UNK_001831df;
            auVar112[0] = -((byte)((DAT_00182f40 < bVar60) * DAT_00182f40 |
                                  (DAT_00182f40 >= bVar60) * bVar60) == bVar60);
            auVar112[1] = -((byte)((UNK_00182f41 < bVar65) * UNK_00182f41 |
                                  (UNK_00182f41 >= bVar65) * bVar65) == bVar65);
            auVar112[2] = -((byte)((UNK_00182f42 < bVar67) * UNK_00182f42 |
                                  (UNK_00182f42 >= bVar67) * bVar67) == bVar67);
            auVar112[3] = -((byte)((UNK_00182f43 < bVar69) * UNK_00182f43 |
                                  (UNK_00182f43 >= bVar69) * bVar69) == bVar69);
            auVar112[4] = -((byte)((UNK_00182f44 < bVar71) * UNK_00182f44 |
                                  (UNK_00182f44 >= bVar71) * bVar71) == bVar71);
            auVar112[5] = -((byte)((UNK_00182f45 < bVar73) * UNK_00182f45 |
                                  (UNK_00182f45 >= bVar73) * bVar73) == bVar73);
            auVar112[6] = -((byte)((UNK_00182f46 < bVar75) * UNK_00182f46 |
                                  (UNK_00182f46 >= bVar75) * bVar75) == bVar75);
            auVar112[7] = -((byte)((UNK_00182f47 < bVar77) * UNK_00182f47 |
                                  (UNK_00182f47 >= bVar77) * bVar77) == bVar77);
            auVar112[8] = -((byte)((UNK_00182f48 < bVar86) * UNK_00182f48 |
                                  (UNK_00182f48 >= bVar86) * bVar86) == bVar86);
            auVar112[9] = -((byte)((UNK_00182f49 < bVar87) * UNK_00182f49 |
                                  (UNK_00182f49 >= bVar87) * bVar87) == bVar87);
            auVar112[10] = -((byte)((UNK_00182f4a < bVar88) * UNK_00182f4a |
                                   (UNK_00182f4a >= bVar88) * bVar88) == bVar88);
            auVar112[0xb] =
                 -((byte)((UNK_00182f4b < bVar89) * UNK_00182f4b | (UNK_00182f4b >= bVar89) * bVar89
                         ) == bVar89);
            auVar112[0xc] =
                 -((byte)((UNK_00182f4c < bVar90) * UNK_00182f4c | (UNK_00182f4c >= bVar90) * bVar90
                         ) == bVar90);
            auVar112[0xd] =
                 -((byte)((UNK_00182f4d < bVar91) * UNK_00182f4d | (UNK_00182f4d >= bVar91) * bVar91
                         ) == bVar91);
            auVar112[0xe] =
                 -((byte)((UNK_00182f4e < bVar92) * UNK_00182f4e | (UNK_00182f4e >= bVar92) * bVar92
                         ) == bVar92);
            auVar112[0xf] =
                 -((byte)((UNK_00182f4f < bVar93) * UNK_00182f4f | (UNK_00182f4f >= bVar93) * bVar93
                         ) == bVar93);
            auVar82[0] = -((byte)((DAT_00182f40 < bVar94) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar94) * bVar94) == bVar94);
            auVar82[1] = -((byte)((UNK_00182f41 < bVar95) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar95) * bVar95) == bVar95);
            auVar82[2] = -((byte)((UNK_00182f42 < bVar96) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar96) * bVar96) == bVar96);
            auVar82[3] = -((byte)((UNK_00182f43 < bVar97) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar97) * bVar97) == bVar97);
            auVar82[4] = -((byte)((UNK_00182f44 < bVar98) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar98) * bVar98) == bVar98);
            auVar82[5] = -((byte)((UNK_00182f45 < bVar99) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar99) * bVar99) == bVar99);
            auVar82[6] = -((byte)((UNK_00182f46 < bVar100) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar100) * bVar100) == bVar100);
            auVar82[7] = -((byte)((UNK_00182f47 < bVar101) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar101) * bVar101) == bVar101);
            auVar82[8] = -((byte)((UNK_00182f48 < bVar102) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar102) * bVar102) == bVar102);
            auVar82[9] = -((byte)((UNK_00182f49 < bVar103) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar103) * bVar103) == bVar103);
            auVar82[10] = -((byte)((UNK_00182f4a < bVar104) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar104) * bVar104) == bVar104);
            auVar82[0xb] = -((byte)((UNK_00182f4b < bVar105) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar105) * bVar105) == bVar105);
            auVar82[0xc] = -((byte)((UNK_00182f4c < bVar106) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar106) * bVar106) == bVar106);
            auVar82[0xd] = -((byte)((UNK_00182f4d < bVar107) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar107) * bVar107) == bVar107);
            auVar82[0xe] = -((byte)((UNK_00182f4e < bVar108) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar108) * bVar108) == bVar108);
            auVar82[0xf] = -((byte)((UNK_00182f4f < bVar109) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar109) * bVar109) == bVar109);
            auVar40[0] = -(*pcVar9 == DAT_00183900);
            auVar40[1] = -(pcVar9[1] == UNK_00183901);
            auVar40[2] = -(pcVar9[2] == UNK_00183902);
            auVar40[3] = -(pcVar9[3] == UNK_00183903);
            auVar40[4] = -(pcVar9[4] == UNK_00183904);
            auVar40[5] = -(pcVar9[5] == UNK_00183905);
            auVar40[6] = -(pcVar9[6] == UNK_00183906);
            auVar40[7] = -(pcVar9[7] == UNK_00183907);
            auVar40[8] = -(pcVar9[8] == UNK_00183908);
            auVar40[9] = -(pcVar9[9] == UNK_00183909);
            auVar40[10] = -(pcVar9[10] == UNK_0018390a);
            auVar40[0xb] = -(pcVar9[0xb] == UNK_0018390b);
            auVar40[0xc] = -(pcVar9[0xc] == UNK_0018390c);
            auVar40[0xd] = -(pcVar9[0xd] == UNK_0018390d);
            auVar40[0xe] = -(pcVar9[0xe] == UNK_0018390e);
            auVar40[0xf] = -(pcVar9[0xf] == UNK_0018390f);
            auVar16 = auVar16 | ~auVar40 & auVar112;
            auVar63[0] = -(*pcVar1 == DAT_00183900);
            auVar63[1] = -(pcVar1[1] == UNK_00183901);
            auVar63[2] = -(pcVar1[2] == UNK_00183902);
            auVar63[3] = -(pcVar1[3] == UNK_00183903);
            auVar63[4] = -(pcVar1[4] == UNK_00183904);
            auVar63[5] = -(pcVar1[5] == UNK_00183905);
            auVar63[6] = -(pcVar1[6] == UNK_00183906);
            auVar63[7] = -(pcVar1[7] == UNK_00183907);
            auVar63[8] = -(pcVar1[8] == UNK_00183908);
            auVar63[9] = -(pcVar1[9] == UNK_00183909);
            auVar63[10] = -(pcVar1[10] == UNK_0018390a);
            auVar63[0xb] = -(pcVar1[0xb] == UNK_0018390b);
            auVar63[0xc] = -(pcVar1[0xc] == UNK_0018390c);
            auVar63[0xd] = -(pcVar1[0xd] == UNK_0018390d);
            auVar63[0xe] = -(pcVar1[0xe] == UNK_0018390e);
            auVar63[0xf] = -(pcVar1[0xf] == UNK_0018390f);
            auVar15 = auVar15 | ~auVar63 & auVar82;
            uVar12 = uVar12 + 0x20;
          } while (uVar6 != uVar12);
          auVar15 = psllw(auVar15 | auVar16,7);
          bVar13 = (((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0)
                   || auVar15[0xf] < '\0';
          uVar10 = (uint)bVar13;
          if (uVar4 != uVar6) {
            if ((uVar4 & 0x18) == 0) {
              pcVar9 = pcVar3 + uVar6;
              goto LAB_0062be7c;
            }
            goto LAB_0062be01;
          }
        }
        if (bVar13) goto LAB_0062bec6;
      }
      ::<str>::trim_matches::<<char>::is_whitespace>();
      lVar11 = extraout_RDX_01;
      if (0xffffffffffffff7f < extraout_RDX_01 - 0x81U) goto LAB_0062c0ab;
    }
LAB_0062bec6:
    uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
             <http[56314f485c23ccf6]::header::value::HeaderValue>
                       (local_38,
                        "x-opencode-session-idmodel_not_compatible, \'contents\' must not be empty\'messages\' must not be empty\'input\' array must not be empty\'input\' must be a string or an array of input itemsrequest must include at least one non-system message\n\nsystem prompt exceeds size limit or contains disallowed control charactersrequest must provide exactly one of \'messages\', \'contents\', or \'input\'unsupported_fieldinvalid_stream"
                        ,0x15,param_2);
    if (local_38[0] != '\0') {
      if (*(ulonglong *)(param_2 + 0x28) <= local_28) goto LAB_0062c11f;
      pcVar3 = *(char **)(*(longlong *)(param_2 + 0x20) + 0x20 + local_28 * 0x68);
      uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x28 + local_28 * 0x68);
      if (uVar4 != 0) {
        if (uVar4 < 8) {
          bVar13 = false;
          pcVar9 = pcVar3;
LAB_0062c05c:
          do {
            cVar2 = *pcVar9;
            pcVar9 = pcVar9 + 1;
            bVar13 = (bool)(bVar13 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
          } while (pcVar9 != pcVar3 + uVar4);
        }
        else if (uVar4 < 0x20) {
          uVar6 = 0;
          uVar10 = 0;
LAB_0062bfe1:
          uVar12 = uVar4 & 0xfffffffffffffff8;
          pcVar9 = pcVar3 + uVar12;
          auVar15 = ZEXT416(uVar10);
          auVar19._8_4_ = 0xffffffff;
          auVar19._0_8_ = 0xffffffffffffffff;
          auVar19._12_4_ = 0xffffffff;
          do {
            uVar14 = *(undefined8 *)(pcVar3 + uVar6);
            bVar60 = (char)uVar14 + DAT_00183cf0;
            cVar66 = (char)((ulonglong)uVar14 >> 8);
            bVar65 = cVar66 + UNK_00183cf1;
            cVar68 = (char)((ulonglong)uVar14 >> 0x10);
            bVar67 = cVar68 + UNK_00183cf2;
            cVar70 = (char)((ulonglong)uVar14 >> 0x18);
            bVar69 = cVar70 + UNK_00183cf3;
            cVar72 = (char)((ulonglong)uVar14 >> 0x20);
            bVar71 = cVar72 + UNK_00183cf4;
            cVar74 = (char)((ulonglong)uVar14 >> 0x28);
            bVar73 = cVar74 + UNK_00183cf5;
            cVar76 = (char)((ulonglong)uVar14 >> 0x30);
            cVar2 = (char)((ulonglong)uVar14 >> 0x38);
            bVar75 = cVar76 + UNK_00183cf6;
            bVar77 = cVar2 + UNK_00183cf7;
            auVar85[0] = -((byte)((bVar60 < DAT_00183660) * DAT_00183660 |
                                 (bVar60 >= DAT_00183660) * bVar60) == bVar60);
            auVar85[1] = -((byte)((bVar65 < UNK_00183661) * UNK_00183661 |
                                 (bVar65 >= UNK_00183661) * bVar65) == bVar65);
            auVar85[2] = -((byte)((bVar67 < UNK_00183662) * UNK_00183662 |
                                 (bVar67 >= UNK_00183662) * bVar67) == bVar67);
            auVar85[3] = -((byte)((bVar69 < UNK_00183663) * UNK_00183663 |
                                 (bVar69 >= UNK_00183663) * bVar69) == bVar69);
            auVar85[4] = -((byte)((bVar71 < UNK_00183664) * UNK_00183664 |
                                 (bVar71 >= UNK_00183664) * bVar71) == bVar71);
            auVar85[5] = -((byte)((bVar73 < UNK_00183665) * UNK_00183665 |
                                 (bVar73 >= UNK_00183665) * bVar73) == bVar73);
            auVar85[6] = -((byte)((bVar75 < UNK_00183666) * UNK_00183666 |
                                 (bVar75 >= UNK_00183666) * bVar75) == bVar75);
            auVar85[7] = -((byte)((bVar77 < UNK_00183667) * UNK_00183667 |
                                 (bVar77 >= UNK_00183667) * bVar77) == bVar77);
            auVar85[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                 (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
            auVar85[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                 (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
            auVar85[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                  (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
            auVar85[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                   (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
            auVar85[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                   (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
            auVar85[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                   (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
            auVar85[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                   (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
            auVar85[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                   (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
            auVar51[0] = -((char)uVar14 == s__00184760[0]);
            auVar51[1] = -(cVar66 == s__00184760[1]);
            auVar51[2] = -(cVar68 == s__00184760[2]);
            auVar51[3] = -(cVar70 == s__00184760[3]);
            auVar51[4] = -(cVar72 == s__00184760[4]);
            auVar51[5] = -(cVar74 == s__00184760[5]);
            auVar51[6] = -(cVar76 == s__00184760[6]);
            auVar51[7] = -(cVar2 == s__00184760[7]);
            auVar51[8] = -(s__00184760[8] == '\0');
            auVar51[9] = -(UNK_00184769 == '\0');
            auVar51[10] = -(UNK_0018476a == '\0');
            auVar51[0xb] = -(UNK_0018476b == '\0');
            auVar51[0xc] = -(UNK_0018476c == '\0');
            auVar51[0xd] = -(UNK_0018476d == '\0');
            auVar51[0xe] = -(UNK_0018476e == '\0');
            auVar51[0xf] = -(UNK_0018476f == '\0');
            auVar51 = auVar51 | auVar85;
            auVar59._0_14_ = auVar51._0_14_;
            auVar59[0xe] = auVar51[7];
            auVar59[0xf] = auVar51[7];
            auVar58._14_2_ = auVar59._14_2_;
            auVar58._0_13_ = auVar51._0_13_;
            auVar58[0xd] = auVar51[6];
            auVar57._13_3_ = auVar58._13_3_;
            auVar57._0_12_ = auVar51._0_12_;
            auVar57[0xc] = auVar51[6];
            auVar56._12_4_ = auVar57._12_4_;
            auVar56._0_11_ = auVar51._0_11_;
            auVar56[0xb] = auVar51[5];
            auVar55._11_5_ = auVar56._11_5_;
            auVar55._0_10_ = auVar51._0_10_;
            auVar55[10] = auVar51[5];
            auVar54._10_6_ = auVar55._10_6_;
            auVar54._0_9_ = auVar51._0_9_;
            auVar54[9] = auVar51[4];
            auVar53._9_7_ = auVar54._9_7_;
            auVar53._0_8_ = auVar51._0_8_;
            auVar53[8] = auVar51[4];
            auVar52._8_8_ = auVar53._8_8_;
            auVar52[7] = auVar51[3];
            auVar52[6] = auVar51[3];
            auVar52[5] = auVar51[2];
            auVar52[4] = auVar51[2];
            auVar52[3] = auVar51[1];
            auVar52[2] = auVar51[1];
            auVar52[0] = auVar51[0];
            auVar52[1] = auVar52[0];
            auVar15 = auVar15 | auVar52 ^ auVar19;
            uVar6 = uVar6 + 8;
          } while (uVar12 != uVar6);
          auVar15 = psllw(auVar15,7);
          bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
          if (uVar4 != uVar12) goto LAB_0062c05c;
        }
        else {
          uVar6 = uVar4 & 0xffffffffffffffe0;
          auVar15 = (undefined1  [16])0x0;
          uVar12 = 0;
          auVar16 = (undefined1  [16])0x0;
          do {
            pcVar9 = pcVar3 + uVar12;
            pcVar1 = pcVar3 + uVar12 + 0x10;
            bVar60 = *pcVar9 + DAT_001831d0;
            bVar65 = pcVar9[1] + UNK_001831d1;
            bVar67 = pcVar9[2] + UNK_001831d2;
            bVar69 = pcVar9[3] + UNK_001831d3;
            bVar71 = pcVar9[4] + UNK_001831d4;
            bVar73 = pcVar9[5] + UNK_001831d5;
            bVar75 = pcVar9[6] + UNK_001831d6;
            bVar77 = pcVar9[7] + UNK_001831d7;
            bVar86 = pcVar9[8] + UNK_001831d8;
            bVar87 = pcVar9[9] + UNK_001831d9;
            bVar88 = pcVar9[10] + UNK_001831da;
            bVar89 = pcVar9[0xb] + UNK_001831db;
            bVar90 = pcVar9[0xc] + UNK_001831dc;
            bVar91 = pcVar9[0xd] + UNK_001831dd;
            bVar92 = pcVar9[0xe] + UNK_001831de;
            bVar93 = pcVar9[0xf] + UNK_001831df;
            bVar94 = *pcVar1 + DAT_001831d0;
            bVar95 = pcVar1[1] + UNK_001831d1;
            bVar96 = pcVar1[2] + UNK_001831d2;
            bVar97 = pcVar1[3] + UNK_001831d3;
            bVar98 = pcVar1[4] + UNK_001831d4;
            bVar99 = pcVar1[5] + UNK_001831d5;
            bVar100 = pcVar1[6] + UNK_001831d6;
            bVar101 = pcVar1[7] + UNK_001831d7;
            bVar102 = pcVar1[8] + UNK_001831d8;
            bVar103 = pcVar1[9] + UNK_001831d9;
            bVar104 = pcVar1[10] + UNK_001831da;
            bVar105 = pcVar1[0xb] + UNK_001831db;
            bVar106 = pcVar1[0xc] + UNK_001831dc;
            bVar107 = pcVar1[0xd] + UNK_001831dd;
            bVar108 = pcVar1[0xe] + UNK_001831de;
            bVar109 = pcVar1[0xf] + UNK_001831df;
            auVar113[0] = -((byte)((DAT_00182f40 < bVar60) * DAT_00182f40 |
                                  (DAT_00182f40 >= bVar60) * bVar60) == bVar60);
            auVar113[1] = -((byte)((UNK_00182f41 < bVar65) * UNK_00182f41 |
                                  (UNK_00182f41 >= bVar65) * bVar65) == bVar65);
            auVar113[2] = -((byte)((UNK_00182f42 < bVar67) * UNK_00182f42 |
                                  (UNK_00182f42 >= bVar67) * bVar67) == bVar67);
            auVar113[3] = -((byte)((UNK_00182f43 < bVar69) * UNK_00182f43 |
                                  (UNK_00182f43 >= bVar69) * bVar69) == bVar69);
            auVar113[4] = -((byte)((UNK_00182f44 < bVar71) * UNK_00182f44 |
                                  (UNK_00182f44 >= bVar71) * bVar71) == bVar71);
            auVar113[5] = -((byte)((UNK_00182f45 < bVar73) * UNK_00182f45 |
                                  (UNK_00182f45 >= bVar73) * bVar73) == bVar73);
            auVar113[6] = -((byte)((UNK_00182f46 < bVar75) * UNK_00182f46 |
                                  (UNK_00182f46 >= bVar75) * bVar75) == bVar75);
            auVar113[7] = -((byte)((UNK_00182f47 < bVar77) * UNK_00182f47 |
                                  (UNK_00182f47 >= bVar77) * bVar77) == bVar77);
            auVar113[8] = -((byte)((UNK_00182f48 < bVar86) * UNK_00182f48 |
                                  (UNK_00182f48 >= bVar86) * bVar86) == bVar86);
            auVar113[9] = -((byte)((UNK_00182f49 < bVar87) * UNK_00182f49 |
                                  (UNK_00182f49 >= bVar87) * bVar87) == bVar87);
            auVar113[10] = -((byte)((UNK_00182f4a < bVar88) * UNK_00182f4a |
                                   (UNK_00182f4a >= bVar88) * bVar88) == bVar88);
            auVar113[0xb] =
                 -((byte)((UNK_00182f4b < bVar89) * UNK_00182f4b | (UNK_00182f4b >= bVar89) * bVar89
                         ) == bVar89);
            auVar113[0xc] =
                 -((byte)((UNK_00182f4c < bVar90) * UNK_00182f4c | (UNK_00182f4c >= bVar90) * bVar90
                         ) == bVar90);
            auVar113[0xd] =
                 -((byte)((UNK_00182f4d < bVar91) * UNK_00182f4d | (UNK_00182f4d >= bVar91) * bVar91
                         ) == bVar91);
            auVar113[0xe] =
                 -((byte)((UNK_00182f4e < bVar92) * UNK_00182f4e | (UNK_00182f4e >= bVar92) * bVar92
                         ) == bVar92);
            auVar113[0xf] =
                 -((byte)((UNK_00182f4f < bVar93) * UNK_00182f4f | (UNK_00182f4f >= bVar93) * bVar93
                         ) == bVar93);
            auVar84[0] = -((byte)((DAT_00182f40 < bVar94) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar94) * bVar94) == bVar94);
            auVar84[1] = -((byte)((UNK_00182f41 < bVar95) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar95) * bVar95) == bVar95);
            auVar84[2] = -((byte)((UNK_00182f42 < bVar96) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar96) * bVar96) == bVar96);
            auVar84[3] = -((byte)((UNK_00182f43 < bVar97) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar97) * bVar97) == bVar97);
            auVar84[4] = -((byte)((UNK_00182f44 < bVar98) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar98) * bVar98) == bVar98);
            auVar84[5] = -((byte)((UNK_00182f45 < bVar99) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar99) * bVar99) == bVar99);
            auVar84[6] = -((byte)((UNK_00182f46 < bVar100) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar100) * bVar100) == bVar100);
            auVar84[7] = -((byte)((UNK_00182f47 < bVar101) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar101) * bVar101) == bVar101);
            auVar84[8] = -((byte)((UNK_00182f48 < bVar102) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar102) * bVar102) == bVar102);
            auVar84[9] = -((byte)((UNK_00182f49 < bVar103) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar103) * bVar103) == bVar103);
            auVar84[10] = -((byte)((UNK_00182f4a < bVar104) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar104) * bVar104) == bVar104);
            auVar84[0xb] = -((byte)((UNK_00182f4b < bVar105) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar105) * bVar105) == bVar105);
            auVar84[0xc] = -((byte)((UNK_00182f4c < bVar106) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar106) * bVar106) == bVar106);
            auVar84[0xd] = -((byte)((UNK_00182f4d < bVar107) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar107) * bVar107) == bVar107);
            auVar84[0xe] = -((byte)((UNK_00182f4e < bVar108) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar108) * bVar108) == bVar108);
            auVar84[0xf] = -((byte)((UNK_00182f4f < bVar109) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar109) * bVar109) == bVar109);
            auVar50[0] = -(*pcVar9 == DAT_00183900);
            auVar50[1] = -(pcVar9[1] == UNK_00183901);
            auVar50[2] = -(pcVar9[2] == UNK_00183902);
            auVar50[3] = -(pcVar9[3] == UNK_00183903);
            auVar50[4] = -(pcVar9[4] == UNK_00183904);
            auVar50[5] = -(pcVar9[5] == UNK_00183905);
            auVar50[6] = -(pcVar9[6] == UNK_00183906);
            auVar50[7] = -(pcVar9[7] == UNK_00183907);
            auVar50[8] = -(pcVar9[8] == UNK_00183908);
            auVar50[9] = -(pcVar9[9] == UNK_00183909);
            auVar50[10] = -(pcVar9[10] == UNK_0018390a);
            auVar50[0xb] = -(pcVar9[0xb] == UNK_0018390b);
            auVar50[0xc] = -(pcVar9[0xc] == UNK_0018390c);
            auVar50[0xd] = -(pcVar9[0xd] == UNK_0018390d);
            auVar50[0xe] = -(pcVar9[0xe] == UNK_0018390e);
            auVar50[0xf] = -(pcVar9[0xf] == UNK_0018390f);
            auVar16 = auVar16 | ~auVar50 & auVar113;
            auVar64[0] = -(*pcVar1 == DAT_00183900);
            auVar64[1] = -(pcVar1[1] == UNK_00183901);
            auVar64[2] = -(pcVar1[2] == UNK_00183902);
            auVar64[3] = -(pcVar1[3] == UNK_00183903);
            auVar64[4] = -(pcVar1[4] == UNK_00183904);
            auVar64[5] = -(pcVar1[5] == UNK_00183905);
            auVar64[6] = -(pcVar1[6] == UNK_00183906);
            auVar64[7] = -(pcVar1[7] == UNK_00183907);
            auVar64[8] = -(pcVar1[8] == UNK_00183908);
            auVar64[9] = -(pcVar1[9] == UNK_00183909);
            auVar64[10] = -(pcVar1[10] == UNK_0018390a);
            auVar64[0xb] = -(pcVar1[0xb] == UNK_0018390b);
            auVar64[0xc] = -(pcVar1[0xc] == UNK_0018390c);
            auVar64[0xd] = -(pcVar1[0xd] == UNK_0018390d);
            auVar64[0xe] = -(pcVar1[0xe] == UNK_0018390e);
            auVar64[0xf] = -(pcVar1[0xf] == UNK_0018390f);
            auVar15 = auVar15 | ~auVar64 & auVar84;
            uVar12 = uVar12 + 0x20;
          } while (uVar6 != uVar12);
          auVar15 = psllw(auVar15 | auVar16,7);
          bVar13 = (((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 ||
                                (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                               (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                              (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                             (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                            (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                           (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                          (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x4f,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0)
                   || auVar15[0xf] < '\0';
          uVar10 = (uint)bVar13;
          if (uVar4 != uVar6) {
            if ((uVar4 & 0x18) == 0) {
              pcVar9 = pcVar3 + uVar6;
              goto LAB_0062c05c;
            }
            goto LAB_0062bfe1;
          }
        }
        if (bVar13) goto LAB_0062c0a2;
      }
      ::<str>::trim_matches::<<char>::is_whitespace>();
      lVar11 = extraout_RDX_02;
      if (0xffffffffffffff7f < extraout_RDX_02 - 0x81U) goto LAB_0062c0ab;
    }
LAB_0062c0a2:
    *param_1 = -1;
  }
  else {
    if (*(ulonglong *)(param_2 + 0x28) <= local_28) {
LAB_0062c11f:
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar14,&anon_d3057478e380898db632effa827bd31f_15_llvm_2674179329317868992);
      goto LAB_0062c12c;
    }
    pcVar3 = *(char **)(*(longlong *)(param_2 + 0x20) + 0x20 + local_28 * 0x68);
    uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x28 + local_28 * 0x68);
    if (uVar4 != 0) {
      if (uVar4 < 8) {
        bVar13 = false;
        pcVar9 = pcVar3;
LAB_0062babc:
        do {
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          bVar13 = (bool)(bVar13 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
        } while (pcVar9 != pcVar3 + uVar4);
      }
      else if (uVar4 < 0x20) {
        uVar6 = 0;
        uVar10 = 0;
LAB_0062ba41:
        uVar12 = uVar4 & 0xfffffffffffffff8;
        pcVar9 = pcVar3 + uVar12;
        auVar15 = ZEXT416(uVar10);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        do {
          uVar14 = *(undefined8 *)(pcVar3 + uVar6);
          bVar60 = (char)uVar14 + DAT_00183cf0;
          cVar66 = (char)((ulonglong)uVar14 >> 8);
          bVar65 = cVar66 + UNK_00183cf1;
          cVar68 = (char)((ulonglong)uVar14 >> 0x10);
          bVar67 = cVar68 + UNK_00183cf2;
          cVar70 = (char)((ulonglong)uVar14 >> 0x18);
          bVar69 = cVar70 + UNK_00183cf3;
          cVar72 = (char)((ulonglong)uVar14 >> 0x20);
          bVar71 = cVar72 + UNK_00183cf4;
          cVar74 = (char)((ulonglong)uVar14 >> 0x28);
          bVar73 = cVar74 + UNK_00183cf5;
          cVar76 = (char)((ulonglong)uVar14 >> 0x30);
          cVar2 = (char)((ulonglong)uVar14 >> 0x38);
          bVar75 = cVar76 + UNK_00183cf6;
          bVar77 = cVar2 + UNK_00183cf7;
          auVar79[0] = -((byte)((bVar60 < DAT_00183660) * DAT_00183660 |
                               (bVar60 >= DAT_00183660) * bVar60) == bVar60);
          auVar79[1] = -((byte)((bVar65 < UNK_00183661) * UNK_00183661 |
                               (bVar65 >= UNK_00183661) * bVar65) == bVar65);
          auVar79[2] = -((byte)((bVar67 < UNK_00183662) * UNK_00183662 |
                               (bVar67 >= UNK_00183662) * bVar67) == bVar67);
          auVar79[3] = -((byte)((bVar69 < UNK_00183663) * UNK_00183663 |
                               (bVar69 >= UNK_00183663) * bVar69) == bVar69);
          auVar79[4] = -((byte)((bVar71 < UNK_00183664) * UNK_00183664 |
                               (bVar71 >= UNK_00183664) * bVar71) == bVar71);
          auVar79[5] = -((byte)((bVar73 < UNK_00183665) * UNK_00183665 |
                               (bVar73 >= UNK_00183665) * bVar73) == bVar73);
          auVar79[6] = -((byte)((bVar75 < UNK_00183666) * UNK_00183666 |
                               (bVar75 >= UNK_00183666) * bVar75) == bVar75);
          auVar79[7] = -((byte)((bVar77 < UNK_00183667) * UNK_00183667 |
                               (bVar77 >= UNK_00183667) * bVar77) == bVar77);
          auVar79[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                               (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
          auVar79[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                               (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
          auVar79[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
          auVar79[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                 (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
          auVar79[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                 (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
          auVar79[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                 (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
          auVar79[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                 (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
          auVar79[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                 (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
          auVar21[0] = -((char)uVar14 == s__00184760[0]);
          auVar21[1] = -(cVar66 == s__00184760[1]);
          auVar21[2] = -(cVar68 == s__00184760[2]);
          auVar21[3] = -(cVar70 == s__00184760[3]);
          auVar21[4] = -(cVar72 == s__00184760[4]);
          auVar21[5] = -(cVar74 == s__00184760[5]);
          auVar21[6] = -(cVar76 == s__00184760[6]);
          auVar21[7] = -(cVar2 == s__00184760[7]);
          auVar21[8] = -(s__00184760[8] == '\0');
          auVar21[9] = -(UNK_00184769 == '\0');
          auVar21[10] = -(UNK_0018476a == '\0');
          auVar21[0xb] = -(UNK_0018476b == '\0');
          auVar21[0xc] = -(UNK_0018476c == '\0');
          auVar21[0xd] = -(UNK_0018476d == '\0');
          auVar21[0xe] = -(UNK_0018476e == '\0');
          auVar21[0xf] = -(UNK_0018476f == '\0');
          auVar21 = auVar21 | auVar79;
          auVar29._0_14_ = auVar21._0_14_;
          auVar29[0xe] = auVar21[7];
          auVar29[0xf] = auVar21[7];
          auVar28._14_2_ = auVar29._14_2_;
          auVar28._0_13_ = auVar21._0_13_;
          auVar28[0xd] = auVar21[6];
          auVar27._13_3_ = auVar28._13_3_;
          auVar27._0_12_ = auVar21._0_12_;
          auVar27[0xc] = auVar21[6];
          auVar26._12_4_ = auVar27._12_4_;
          auVar26._0_11_ = auVar21._0_11_;
          auVar26[0xb] = auVar21[5];
          auVar25._11_5_ = auVar26._11_5_;
          auVar25._0_10_ = auVar21._0_10_;
          auVar25[10] = auVar21[5];
          auVar24._10_6_ = auVar25._10_6_;
          auVar24._0_9_ = auVar21._0_9_;
          auVar24[9] = auVar21[4];
          auVar23._9_7_ = auVar24._9_7_;
          auVar23._0_8_ = auVar21._0_8_;
          auVar23[8] = auVar21[4];
          auVar22._8_8_ = auVar23._8_8_;
          auVar22[7] = auVar21[3];
          auVar22[6] = auVar21[3];
          auVar22[5] = auVar21[2];
          auVar22[4] = auVar21[2];
          auVar22[3] = auVar21[1];
          auVar22[2] = auVar21[1];
          auVar22[0] = auVar21[0];
          auVar22[1] = auVar22[0];
          auVar15 = auVar15 | auVar22 ^ auVar16;
          uVar6 = uVar6 + 8;
        } while (uVar12 != uVar6);
        auVar15 = psllw(auVar15,7);
        bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
        if (uVar4 != uVar12) goto LAB_0062babc;
      }
      else {
        uVar6 = uVar4 & 0xffffffffffffffe0;
        auVar15 = (undefined1  [16])0x0;
        uVar12 = 0;
        auVar16 = (undefined1  [16])0x0;
        do {
          pcVar9 = pcVar3 + uVar12;
          pcVar1 = pcVar3 + uVar12 + 0x10;
          bVar60 = *pcVar9 + DAT_001831d0;
          bVar65 = pcVar9[1] + UNK_001831d1;
          bVar67 = pcVar9[2] + UNK_001831d2;
          bVar69 = pcVar9[3] + UNK_001831d3;
          bVar71 = pcVar9[4] + UNK_001831d4;
          bVar73 = pcVar9[5] + UNK_001831d5;
          bVar75 = pcVar9[6] + UNK_001831d6;
          bVar77 = pcVar9[7] + UNK_001831d7;
          bVar86 = pcVar9[8] + UNK_001831d8;
          bVar87 = pcVar9[9] + UNK_001831d9;
          bVar88 = pcVar9[10] + UNK_001831da;
          bVar89 = pcVar9[0xb] + UNK_001831db;
          bVar90 = pcVar9[0xc] + UNK_001831dc;
          bVar91 = pcVar9[0xd] + UNK_001831dd;
          bVar92 = pcVar9[0xe] + UNK_001831de;
          bVar93 = pcVar9[0xf] + UNK_001831df;
          bVar94 = *pcVar1 + DAT_001831d0;
          bVar95 = pcVar1[1] + UNK_001831d1;
          bVar96 = pcVar1[2] + UNK_001831d2;
          bVar97 = pcVar1[3] + UNK_001831d3;
          bVar98 = pcVar1[4] + UNK_001831d4;
          bVar99 = pcVar1[5] + UNK_001831d5;
          bVar100 = pcVar1[6] + UNK_001831d6;
          bVar101 = pcVar1[7] + UNK_001831d7;
          bVar102 = pcVar1[8] + UNK_001831d8;
          bVar103 = pcVar1[9] + UNK_001831d9;
          bVar104 = pcVar1[10] + UNK_001831da;
          bVar105 = pcVar1[0xb] + UNK_001831db;
          bVar106 = pcVar1[0xc] + UNK_001831dc;
          bVar107 = pcVar1[0xd] + UNK_001831dd;
          bVar108 = pcVar1[0xe] + UNK_001831de;
          bVar109 = pcVar1[0xf] + UNK_001831df;
          auVar110[0] = -((byte)((DAT_00182f40 < bVar60) * DAT_00182f40 |
                                (DAT_00182f40 >= bVar60) * bVar60) == bVar60);
          auVar110[1] = -((byte)((UNK_00182f41 < bVar65) * UNK_00182f41 |
                                (UNK_00182f41 >= bVar65) * bVar65) == bVar65);
          auVar110[2] = -((byte)((UNK_00182f42 < bVar67) * UNK_00182f42 |
                                (UNK_00182f42 >= bVar67) * bVar67) == bVar67);
          auVar110[3] = -((byte)((UNK_00182f43 < bVar69) * UNK_00182f43 |
                                (UNK_00182f43 >= bVar69) * bVar69) == bVar69);
          auVar110[4] = -((byte)((UNK_00182f44 < bVar71) * UNK_00182f44 |
                                (UNK_00182f44 >= bVar71) * bVar71) == bVar71);
          auVar110[5] = -((byte)((UNK_00182f45 < bVar73) * UNK_00182f45 |
                                (UNK_00182f45 >= bVar73) * bVar73) == bVar73);
          auVar110[6] = -((byte)((UNK_00182f46 < bVar75) * UNK_00182f46 |
                                (UNK_00182f46 >= bVar75) * bVar75) == bVar75);
          auVar110[7] = -((byte)((UNK_00182f47 < bVar77) * UNK_00182f47 |
                                (UNK_00182f47 >= bVar77) * bVar77) == bVar77);
          auVar110[8] = -((byte)((UNK_00182f48 < bVar86) * UNK_00182f48 |
                                (UNK_00182f48 >= bVar86) * bVar86) == bVar86);
          auVar110[9] = -((byte)((UNK_00182f49 < bVar87) * UNK_00182f49 |
                                (UNK_00182f49 >= bVar87) * bVar87) == bVar87);
          auVar110[10] = -((byte)((UNK_00182f4a < bVar88) * UNK_00182f4a |
                                 (UNK_00182f4a >= bVar88) * bVar88) == bVar88);
          auVar110[0xb] =
               -((byte)((UNK_00182f4b < bVar89) * UNK_00182f4b | (UNK_00182f4b >= bVar89) * bVar89)
                == bVar89);
          auVar110[0xc] =
               -((byte)((UNK_00182f4c < bVar90) * UNK_00182f4c | (UNK_00182f4c >= bVar90) * bVar90)
                == bVar90);
          auVar110[0xd] =
               -((byte)((UNK_00182f4d < bVar91) * UNK_00182f4d | (UNK_00182f4d >= bVar91) * bVar91)
                == bVar91);
          auVar110[0xe] =
               -((byte)((UNK_00182f4e < bVar92) * UNK_00182f4e | (UNK_00182f4e >= bVar92) * bVar92)
                == bVar92);
          auVar110[0xf] =
               -((byte)((UNK_00182f4f < bVar93) * UNK_00182f4f | (UNK_00182f4f >= bVar93) * bVar93)
                == bVar93);
          auVar78[0] = -((byte)((DAT_00182f40 < bVar94) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar94) * bVar94) == bVar94);
          auVar78[1] = -((byte)((UNK_00182f41 < bVar95) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar95) * bVar95) == bVar95);
          auVar78[2] = -((byte)((UNK_00182f42 < bVar96) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar96) * bVar96) == bVar96);
          auVar78[3] = -((byte)((UNK_00182f43 < bVar97) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar97) * bVar97) == bVar97);
          auVar78[4] = -((byte)((UNK_00182f44 < bVar98) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar98) * bVar98) == bVar98);
          auVar78[5] = -((byte)((UNK_00182f45 < bVar99) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar99) * bVar99) == bVar99);
          auVar78[6] = -((byte)((UNK_00182f46 < bVar100) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar100) * bVar100) == bVar100);
          auVar78[7] = -((byte)((UNK_00182f47 < bVar101) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar101) * bVar101) == bVar101);
          auVar78[8] = -((byte)((UNK_00182f48 < bVar102) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar102) * bVar102) == bVar102);
          auVar78[9] = -((byte)((UNK_00182f49 < bVar103) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar103) * bVar103) == bVar103);
          auVar78[10] = -((byte)((UNK_00182f4a < bVar104) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar104) * bVar104) == bVar104);
          auVar78[0xb] = -((byte)((UNK_00182f4b < bVar105) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar105) * bVar105) == bVar105);
          auVar78[0xc] = -((byte)((UNK_00182f4c < bVar106) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar106) * bVar106) == bVar106);
          auVar78[0xd] = -((byte)((UNK_00182f4d < bVar107) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar107) * bVar107) == bVar107);
          auVar78[0xe] = -((byte)((UNK_00182f4e < bVar108) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar108) * bVar108) == bVar108);
          auVar78[0xf] = -((byte)((UNK_00182f4f < bVar109) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar109) * bVar109) == bVar109);
          auVar20[0] = -(*pcVar9 == DAT_00183900);
          auVar20[1] = -(pcVar9[1] == UNK_00183901);
          auVar20[2] = -(pcVar9[2] == UNK_00183902);
          auVar20[3] = -(pcVar9[3] == UNK_00183903);
          auVar20[4] = -(pcVar9[4] == UNK_00183904);
          auVar20[5] = -(pcVar9[5] == UNK_00183905);
          auVar20[6] = -(pcVar9[6] == UNK_00183906);
          auVar20[7] = -(pcVar9[7] == UNK_00183907);
          auVar20[8] = -(pcVar9[8] == UNK_00183908);
          auVar20[9] = -(pcVar9[9] == UNK_00183909);
          auVar20[10] = -(pcVar9[10] == UNK_0018390a);
          auVar20[0xb] = -(pcVar9[0xb] == UNK_0018390b);
          auVar20[0xc] = -(pcVar9[0xc] == UNK_0018390c);
          auVar20[0xd] = -(pcVar9[0xd] == UNK_0018390d);
          auVar20[0xe] = -(pcVar9[0xe] == UNK_0018390e);
          auVar20[0xf] = -(pcVar9[0xf] == UNK_0018390f);
          auVar16 = auVar16 | ~auVar20 & auVar110;
          auVar61[0] = -(*pcVar1 == DAT_00183900);
          auVar61[1] = -(pcVar1[1] == UNK_00183901);
          auVar61[2] = -(pcVar1[2] == UNK_00183902);
          auVar61[3] = -(pcVar1[3] == UNK_00183903);
          auVar61[4] = -(pcVar1[4] == UNK_00183904);
          auVar61[5] = -(pcVar1[5] == UNK_00183905);
          auVar61[6] = -(pcVar1[6] == UNK_00183906);
          auVar61[7] = -(pcVar1[7] == UNK_00183907);
          auVar61[8] = -(pcVar1[8] == UNK_00183908);
          auVar61[9] = -(pcVar1[9] == UNK_00183909);
          auVar61[10] = -(pcVar1[10] == UNK_0018390a);
          auVar61[0xb] = -(pcVar1[0xb] == UNK_0018390b);
          auVar61[0xc] = -(pcVar1[0xc] == UNK_0018390c);
          auVar61[0xd] = -(pcVar1[0xd] == UNK_0018390d);
          auVar61[0xe] = -(pcVar1[0xe] == UNK_0018390e);
          auVar61[0xf] = -(pcVar1[0xf] == UNK_0018390f);
          auVar15 = auVar15 | ~auVar61 & auVar78;
          uVar12 = uVar12 + 0x20;
        } while (uVar6 != uVar12);
        auVar15 = psllw(auVar15 | auVar16,7);
        bVar13 = (((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar15 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0)
                 || auVar15[0xf] < '\0';
        uVar10 = (uint)bVar13;
        if (uVar4 != uVar6) {
          if ((uVar4 & 0x18) == 0) {
            pcVar9 = pcVar3 + uVar6;
            goto LAB_0062babc;
          }
          goto LAB_0062ba41;
        }
      }
      if (bVar13) goto LAB_0062bb04;
    }
    ::<str>::trim_matches::<<char>::is_whitespace>();
    lVar11 = extraout_RDX;
    if (extraout_RDX - 0x81U < 0xffffffffffffff80) goto LAB_0062bb04;
LAB_0062c0ab:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar7 == 0) {
LAB_0062c12c:
      (*(code *)PTR_handle_error_00798ff0)();
      pcVar5 = (code *)swi(3);
      plVar8 = (longlong *)(*pcVar5)();
      return plVar8;
    }
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,lVar11);
    *param_1 = lVar11;
    param_1[1] = lVar7;
    param_1[2] = lVar11;
  }
  return param_1;
}


