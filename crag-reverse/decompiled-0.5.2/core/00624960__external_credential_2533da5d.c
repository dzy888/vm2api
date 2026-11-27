// 00624960 external_credential

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::server::external_credential */

byte * __rustcall
craggemini_core[66f3c71560d70857]::server::external_credential
          (longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong extraout_RDX;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined1 auVar31 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  byte bVar49;
  char cVar54;
  byte bVar53;
  char cVar56;
  byte bVar55;
  char cVar58;
  byte bVar57;
  char cVar60;
  byte bVar59;
  char cVar62;
  byte bVar61;
  char cVar64;
  byte bVar63;
  byte bVar65;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  byte bVar79;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  byte *local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_80;
  byte local_78;
  char cStack_77;
  int local_68 [2];
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_a8 = _DAT_0018cf50;
  uStack_a0 = _UNK_0018cf58;
  local_b8 = _DAT_0018cf40;
  uStack_b0 = _UNK_0018cf48;
  cVar4 = <http[56314f485c23ccf6]::header::map::HeaderMap>::contains_key::
          <http[56314f485c23ccf6]::header::name::HeaderName>(param_1,&local_b8);
  if (cVar4 != '\0') {
    local_a8 = _DAT_0018cf50;
    uStack_a0 = _UNK_0018cf58;
    local_b8 = _DAT_0018cf40;
    uStack_b0 = _UNK_0018cf48;
    uVar14 = <http[56314f485c23ccf6]::header::map::HeaderMap>::get_all::
             <http[56314f485c23ccf6]::header::name::HeaderName>(local_68,param_1,&local_b8);
    if (local_68[0] != 1) {
      return (byte *)0x0;
    }
    if (*(ulonglong *)(local_58 + 0x28) <= local_60) goto LAB_00625219;
    lVar1 = *(longlong *)(local_58 + 0x20) + local_60 * 0x68;
    if ((*(byte *)(*(longlong *)(local_58 + 0x20) + local_60 * 0x68) & 1) == 0) {
      local_50 = 2;
      local_40 = (byte *)0x2;
      pbVar10 = *(byte **)(lVar1 + 0x20);
      uStack_b0 = *(ulonglong *)(lVar1 + 0x28);
    }
    else {
      local_38 = *(undefined8 *)(lVar1 + 0x10);
      local_40 = (byte *)0x1;
      local_48 = *(longlong *)(lVar1 + 8);
      local_50 = 1;
      pbVar10 = *(byte **)(lVar1 + 0x20);
      uStack_b0 = *(ulonglong *)(lVar1 + 0x28);
    }
    if (uStack_b0 != 0) {
      if (uStack_b0 < 8) {
        bVar13 = false;
        pbVar5 = pbVar10;
LAB_00624e1e:
        do {
          bVar49 = *pbVar5;
          pbVar5 = pbVar5 + 1;
          bVar13 = (bool)(bVar13 | (bVar49 != 9 && (byte)(bVar49 + 0x81) < 0xa1));
        } while (pbVar5 != pbVar10 + uStack_b0);
      }
      else if (uStack_b0 < 0x20) {
        uVar8 = 0;
        bVar13 = false;
LAB_00624da0:
        uVar11 = uStack_b0 & 0xfffffffffffffff8;
        pbVar5 = pbVar10 + uVar11;
        auVar15 = ZEXT116(bVar13);
        auVar16._8_4_ = 0xffffffff;
        auVar16._0_8_ = 0xffffffffffffffff;
        auVar16._12_4_ = 0xffffffff;
        do {
          uVar14 = *(undefined8 *)(pbVar10 + uVar8);
          bVar49 = (char)uVar14 + DAT_00183cf0;
          cVar54 = (char)((ulonglong)uVar14 >> 8);
          bVar53 = cVar54 + UNK_00183cf1;
          cVar56 = (char)((ulonglong)uVar14 >> 0x10);
          bVar55 = cVar56 + UNK_00183cf2;
          cVar58 = (char)((ulonglong)uVar14 >> 0x18);
          bVar57 = cVar58 + UNK_00183cf3;
          cVar60 = (char)((ulonglong)uVar14 >> 0x20);
          bVar59 = cVar60 + UNK_00183cf4;
          cVar62 = (char)((ulonglong)uVar14 >> 0x28);
          bVar61 = cVar62 + UNK_00183cf5;
          cVar64 = (char)((ulonglong)uVar14 >> 0x30);
          cVar4 = (char)((ulonglong)uVar14 >> 0x38);
          bVar63 = cVar64 + UNK_00183cf6;
          bVar65 = cVar4 + UNK_00183cf7;
          auVar69[0] = -((byte)((bVar49 < DAT_00183660) * DAT_00183660 |
                               (bVar49 >= DAT_00183660) * bVar49) == bVar49);
          auVar69[1] = -((byte)((bVar53 < UNK_00183661) * UNK_00183661 |
                               (bVar53 >= UNK_00183661) * bVar53) == bVar53);
          auVar69[2] = -((byte)((bVar55 < UNK_00183662) * UNK_00183662 |
                               (bVar55 >= UNK_00183662) * bVar55) == bVar55);
          auVar69[3] = -((byte)((bVar57 < UNK_00183663) * UNK_00183663 |
                               (bVar57 >= UNK_00183663) * bVar57) == bVar57);
          auVar69[4] = -((byte)((bVar59 < UNK_00183664) * UNK_00183664 |
                               (bVar59 >= UNK_00183664) * bVar59) == bVar59);
          auVar69[5] = -((byte)((bVar61 < UNK_00183665) * UNK_00183665 |
                               (bVar61 >= UNK_00183665) * bVar61) == bVar61);
          auVar69[6] = -((byte)((bVar63 < UNK_00183666) * UNK_00183666 |
                               (bVar63 >= UNK_00183666) * bVar63) == bVar63);
          auVar69[7] = -((byte)((bVar65 < UNK_00183667) * UNK_00183667 |
                               (bVar65 >= UNK_00183667) * bVar65) == bVar65);
          auVar69[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                               (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
          auVar69[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                               (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
          auVar69[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
          auVar69[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                 (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
          auVar69[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                 (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
          auVar69[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                 (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
          auVar69[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                 (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
          auVar69[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                 (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
          auVar30[0] = -((char)uVar14 == s__00184760[0]);
          auVar30[1] = -(cVar54 == s__00184760[1]);
          auVar30[2] = -(cVar56 == s__00184760[2]);
          auVar30[3] = -(cVar58 == s__00184760[3]);
          auVar30[4] = -(cVar60 == s__00184760[4]);
          auVar30[5] = -(cVar62 == s__00184760[5]);
          auVar30[6] = -(cVar64 == s__00184760[6]);
          auVar30[7] = -(cVar4 == s__00184760[7]);
          auVar30[8] = -(s__00184760[8] == '\0');
          auVar30[9] = -(UNK_00184769 == '\0');
          auVar30[10] = -(UNK_0018476a == '\0');
          auVar30[0xb] = -(UNK_0018476b == '\0');
          auVar30[0xc] = -(UNK_0018476c == '\0');
          auVar30[0xd] = -(UNK_0018476d == '\0');
          auVar30[0xe] = -(UNK_0018476e == '\0');
          auVar30[0xf] = -(UNK_0018476f == '\0');
          auVar30 = auVar30 | auVar69;
          auVar38._0_14_ = auVar30._0_14_;
          auVar38[0xe] = auVar30[7];
          auVar38[0xf] = auVar30[7];
          auVar37._14_2_ = auVar38._14_2_;
          auVar37._0_13_ = auVar30._0_13_;
          auVar37[0xd] = auVar30[6];
          auVar36._13_3_ = auVar37._13_3_;
          auVar36._0_12_ = auVar30._0_12_;
          auVar36[0xc] = auVar30[6];
          auVar35._12_4_ = auVar36._12_4_;
          auVar35._0_11_ = auVar30._0_11_;
          auVar35[0xb] = auVar30[5];
          auVar34._11_5_ = auVar35._11_5_;
          auVar34._0_10_ = auVar30._0_10_;
          auVar34[10] = auVar30[5];
          auVar33._10_6_ = auVar34._10_6_;
          auVar33._0_9_ = auVar30._0_9_;
          auVar33[9] = auVar30[4];
          auVar32._9_7_ = auVar33._9_7_;
          auVar32._0_8_ = auVar30._0_8_;
          auVar32[8] = auVar30[4];
          auVar31._8_8_ = auVar32._8_8_;
          auVar31[7] = auVar30[3];
          auVar31[6] = auVar30[3];
          auVar31[5] = auVar30[2];
          auVar31[4] = auVar30[2];
          auVar31[3] = auVar30[1];
          auVar31[2] = auVar30[1];
          auVar31[0] = auVar30[0];
          auVar31[1] = auVar31[0];
          auVar15 = auVar15 | auVar31 ^ auVar16;
          uVar8 = uVar8 + 8;
        } while (uVar11 != uVar8);
        auVar15 = psllw(auVar15,7);
        bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
        if (uStack_b0 != uVar11) goto LAB_00624e1e;
      }
      else {
        uVar8 = uStack_b0 & 0xffffffffffffffe0;
        auVar15 = (undefined1  [16])0x0;
        uVar11 = 0;
        auVar16 = (undefined1  [16])0x0;
        do {
          pbVar5 = pbVar10 + uVar11;
          pbVar6 = pbVar10 + uVar11 + 0x10;
          bVar49 = *pbVar5 + DAT_001831d0;
          bVar53 = pbVar5[1] + UNK_001831d1;
          bVar55 = pbVar5[2] + UNK_001831d2;
          bVar57 = pbVar5[3] + UNK_001831d3;
          bVar59 = pbVar5[4] + UNK_001831d4;
          bVar61 = pbVar5[5] + UNK_001831d5;
          bVar63 = pbVar5[6] + UNK_001831d6;
          bVar65 = pbVar5[7] + UNK_001831d7;
          bVar72 = pbVar5[8] + UNK_001831d8;
          bVar73 = pbVar5[9] + UNK_001831d9;
          bVar74 = pbVar5[10] + UNK_001831da;
          bVar75 = pbVar5[0xb] + UNK_001831db;
          bVar76 = pbVar5[0xc] + UNK_001831dc;
          bVar77 = pbVar5[0xd] + UNK_001831dd;
          bVar78 = pbVar5[0xe] + UNK_001831de;
          bVar79 = pbVar5[0xf] + UNK_001831df;
          bVar80 = *pbVar6 + DAT_001831d0;
          bVar81 = pbVar6[1] + UNK_001831d1;
          bVar82 = pbVar6[2] + UNK_001831d2;
          bVar83 = pbVar6[3] + UNK_001831d3;
          bVar84 = pbVar6[4] + UNK_001831d4;
          bVar85 = pbVar6[5] + UNK_001831d5;
          bVar86 = pbVar6[6] + UNK_001831d6;
          bVar87 = pbVar6[7] + UNK_001831d7;
          bVar88 = pbVar6[8] + UNK_001831d8;
          bVar89 = pbVar6[9] + UNK_001831d9;
          bVar90 = pbVar6[10] + UNK_001831da;
          bVar91 = pbVar6[0xb] + UNK_001831db;
          bVar92 = pbVar6[0xc] + UNK_001831dc;
          bVar93 = pbVar6[0xd] + UNK_001831dd;
          bVar94 = pbVar6[0xe] + UNK_001831de;
          bVar95 = pbVar6[0xf] + UNK_001831df;
          auVar97[0] = -((byte)((DAT_00182f40 < bVar49) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar49) * bVar49) == bVar49);
          auVar97[1] = -((byte)((UNK_00182f41 < bVar53) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar53) * bVar53) == bVar53);
          auVar97[2] = -((byte)((UNK_00182f42 < bVar55) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar55) * bVar55) == bVar55);
          auVar97[3] = -((byte)((UNK_00182f43 < bVar57) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar57) * bVar57) == bVar57);
          auVar97[4] = -((byte)((UNK_00182f44 < bVar59) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar59) * bVar59) == bVar59);
          auVar97[5] = -((byte)((UNK_00182f45 < bVar61) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar61) * bVar61) == bVar61);
          auVar97[6] = -((byte)((UNK_00182f46 < bVar63) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar63) * bVar63) == bVar63);
          auVar97[7] = -((byte)((UNK_00182f47 < bVar65) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar65) * bVar65) == bVar65);
          auVar97[8] = -((byte)((UNK_00182f48 < bVar72) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar72) * bVar72) == bVar72);
          auVar97[9] = -((byte)((UNK_00182f49 < bVar73) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar73) * bVar73) == bVar73);
          auVar97[10] = -((byte)((UNK_00182f4a < bVar74) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar74) * bVar74) == bVar74);
          auVar97[0xb] = -((byte)((UNK_00182f4b < bVar75) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar75) * bVar75) == bVar75);
          auVar97[0xc] = -((byte)((UNK_00182f4c < bVar76) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar76) * bVar76) == bVar76);
          auVar97[0xd] = -((byte)((UNK_00182f4d < bVar77) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar77) * bVar77) == bVar77);
          auVar97[0xe] = -((byte)((UNK_00182f4e < bVar78) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar78) * bVar78) == bVar78);
          auVar97[0xf] = -((byte)((UNK_00182f4f < bVar79) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar79) * bVar79) == bVar79);
          auVar68[0] = -((byte)((DAT_00182f40 < bVar80) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar80) * bVar80) == bVar80);
          auVar68[1] = -((byte)((UNK_00182f41 < bVar81) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar81) * bVar81) == bVar81);
          auVar68[2] = -((byte)((UNK_00182f42 < bVar82) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar82) * bVar82) == bVar82);
          auVar68[3] = -((byte)((UNK_00182f43 < bVar83) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar83) * bVar83) == bVar83);
          auVar68[4] = -((byte)((UNK_00182f44 < bVar84) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar84) * bVar84) == bVar84);
          auVar68[5] = -((byte)((UNK_00182f45 < bVar85) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar85) * bVar85) == bVar85);
          auVar68[6] = -((byte)((UNK_00182f46 < bVar86) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar86) * bVar86) == bVar86);
          auVar68[7] = -((byte)((UNK_00182f47 < bVar87) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar87) * bVar87) == bVar87);
          auVar68[8] = -((byte)((UNK_00182f48 < bVar88) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar88) * bVar88) == bVar88);
          auVar68[9] = -((byte)((UNK_00182f49 < bVar89) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar89) * bVar89) == bVar89);
          auVar68[10] = -((byte)((UNK_00182f4a < bVar90) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar90) * bVar90) == bVar90);
          auVar68[0xb] = -((byte)((UNK_00182f4b < bVar91) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar91) * bVar91) == bVar91);
          auVar68[0xc] = -((byte)((UNK_00182f4c < bVar92) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar92) * bVar92) == bVar92);
          auVar68[0xd] = -((byte)((UNK_00182f4d < bVar93) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar93) * bVar93) == bVar93);
          auVar68[0xe] = -((byte)((UNK_00182f4e < bVar94) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar94) * bVar94) == bVar94);
          auVar68[0xf] = -((byte)((UNK_00182f4f < bVar95) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar95) * bVar95) == bVar95);
          auVar29[0] = -(*pbVar5 == DAT_00183900);
          auVar29[1] = -(pbVar5[1] == UNK_00183901);
          auVar29[2] = -(pbVar5[2] == UNK_00183902);
          auVar29[3] = -(pbVar5[3] == UNK_00183903);
          auVar29[4] = -(pbVar5[4] == UNK_00183904);
          auVar29[5] = -(pbVar5[5] == UNK_00183905);
          auVar29[6] = -(pbVar5[6] == UNK_00183906);
          auVar29[7] = -(pbVar5[7] == UNK_00183907);
          auVar29[8] = -(pbVar5[8] == UNK_00183908);
          auVar29[9] = -(pbVar5[9] == UNK_00183909);
          auVar29[10] = -(pbVar5[10] == UNK_0018390a);
          auVar29[0xb] = -(pbVar5[0xb] == UNK_0018390b);
          auVar29[0xc] = -(pbVar5[0xc] == UNK_0018390c);
          auVar29[0xd] = -(pbVar5[0xd] == UNK_0018390d);
          auVar29[0xe] = -(pbVar5[0xe] == UNK_0018390e);
          auVar29[0xf] = -(pbVar5[0xf] == UNK_0018390f);
          auVar16 = auVar16 | ~auVar29 & auVar97;
          auVar51[0] = -(*pbVar6 == DAT_00183900);
          auVar51[1] = -(pbVar6[1] == UNK_00183901);
          auVar51[2] = -(pbVar6[2] == UNK_00183902);
          auVar51[3] = -(pbVar6[3] == UNK_00183903);
          auVar51[4] = -(pbVar6[4] == UNK_00183904);
          auVar51[5] = -(pbVar6[5] == UNK_00183905);
          auVar51[6] = -(pbVar6[6] == UNK_00183906);
          auVar51[7] = -(pbVar6[7] == UNK_00183907);
          auVar51[8] = -(pbVar6[8] == UNK_00183908);
          auVar51[9] = -(pbVar6[9] == UNK_00183909);
          auVar51[10] = -(pbVar6[10] == UNK_0018390a);
          auVar51[0xb] = -(pbVar6[0xb] == UNK_0018390b);
          auVar51[0xc] = -(pbVar6[0xc] == UNK_0018390c);
          auVar51[0xd] = -(pbVar6[0xd] == UNK_0018390d);
          auVar51[0xe] = -(pbVar6[0xe] == UNK_0018390e);
          auVar51[0xf] = -(pbVar6[0xf] == UNK_0018390f);
          auVar15 = auVar15 | ~auVar51 & auVar68;
          uVar11 = uVar11 + 0x20;
        } while (uVar8 != uVar11);
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
        if (uStack_b0 != uVar8) {
          if ((uStack_b0 & 0x18) == 0) {
            pbVar5 = pbVar10 + uVar8;
            goto LAB_00624e1e;
          }
          goto LAB_00624da0;
        }
      }
      if (bVar13) {
        return (byte *)0x0;
      }
    }
    local_a8 = 0;
    local_90 = CONCAT71(local_90._1_7_,1);
    local_98 = 0x2000000020;
    local_b8 = pbVar10;
    uStack_a0 = uStack_b0;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(local_68,&local_b8);
    if (local_68[0] != 1) {
      return (byte *)0x0;
    }
    if (local_60 != 6) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(*pbVar10 + 0xbf) < 0x1a) << 5 | *pbVar10) != 0x62) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(pbVar10[1] + 0xbf) < 0x1a) << 5 | pbVar10[1]) != 0x65) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(pbVar10[2] + 0xbf) < 0x1a) << 5 | pbVar10[2]) != 0x61) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(pbVar10[3] + 0xbf) < 0x1a) << 5 | pbVar10[3]) != 0x72) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(pbVar10[4] + 0xbf) < 0x1a) << 5 | pbVar10[4]) != 0x65) {
      return (byte *)0x0;
    }
    if ((byte)(((byte)(pbVar10[5] + 0xbf) < 0x1a) << 5 | pbVar10[5]) != 0x72) {
      return (byte *)0x0;
    }
    pbVar10 = pbVar10 + local_58;
    pbVar5 = (byte *)<http[56314f485c23ccf6]::header::map::ValueIter<http[56314f485c23ccf6]::header::value::HeaderValue>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                     ::next(&local_50);
    pbVar6 = (byte *)0x0;
    goto LAB_006251d8;
  }
  uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
           <http[56314f485c23ccf6]::header::value::HeaderValue>(&local_b8,"x-api-key",9,param_1);
  if ((char)local_b8 != '\0') {
    if (local_a8 < *(ulonglong *)(param_1 + 0x28)) {
      pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x20 + local_a8 * 0x68);
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x28 + local_a8 * 0x68);
      if (uVar8 != 0) {
        if (uVar8 < 8) {
          bVar13 = false;
          pcVar7 = pcVar2;
LAB_00624c3c:
          do {
            cVar4 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            bVar13 = (bool)(bVar13 | (cVar4 != '\t' && (byte)(cVar4 + 0x81U) < 0xa1));
          } while (pcVar7 != pcVar2 + uVar8);
        }
        else if (uVar8 < 0x20) {
          uVar11 = 0;
          uVar9 = 0;
LAB_00624bc1:
          uVar12 = uVar8 & 0xfffffffffffffff8;
          pcVar7 = pcVar2 + uVar12;
          auVar15 = ZEXT416(uVar9);
          auVar17._8_4_ = 0xffffffff;
          auVar17._0_8_ = 0xffffffffffffffff;
          auVar17._12_4_ = 0xffffffff;
          do {
            uVar14 = *(undefined8 *)(pcVar2 + uVar11);
            bVar49 = (char)uVar14 + DAT_00183cf0;
            cVar54 = (char)((ulonglong)uVar14 >> 8);
            bVar53 = cVar54 + UNK_00183cf1;
            cVar56 = (char)((ulonglong)uVar14 >> 0x10);
            bVar55 = cVar56 + UNK_00183cf2;
            cVar58 = (char)((ulonglong)uVar14 >> 0x18);
            bVar57 = cVar58 + UNK_00183cf3;
            cVar60 = (char)((ulonglong)uVar14 >> 0x20);
            bVar59 = cVar60 + UNK_00183cf4;
            cVar62 = (char)((ulonglong)uVar14 >> 0x28);
            bVar61 = cVar62 + UNK_00183cf5;
            cVar64 = (char)((ulonglong)uVar14 >> 0x30);
            cVar4 = (char)((ulonglong)uVar14 >> 0x38);
            bVar63 = cVar64 + UNK_00183cf6;
            bVar65 = cVar4 + UNK_00183cf7;
            auVar67[0] = -((byte)((bVar49 < DAT_00183660) * DAT_00183660 |
                                 (bVar49 >= DAT_00183660) * bVar49) == bVar49);
            auVar67[1] = -((byte)((bVar53 < UNK_00183661) * UNK_00183661 |
                                 (bVar53 >= UNK_00183661) * bVar53) == bVar53);
            auVar67[2] = -((byte)((bVar55 < UNK_00183662) * UNK_00183662 |
                                 (bVar55 >= UNK_00183662) * bVar55) == bVar55);
            auVar67[3] = -((byte)((bVar57 < UNK_00183663) * UNK_00183663 |
                                 (bVar57 >= UNK_00183663) * bVar57) == bVar57);
            auVar67[4] = -((byte)((bVar59 < UNK_00183664) * UNK_00183664 |
                                 (bVar59 >= UNK_00183664) * bVar59) == bVar59);
            auVar67[5] = -((byte)((bVar61 < UNK_00183665) * UNK_00183665 |
                                 (bVar61 >= UNK_00183665) * bVar61) == bVar61);
            auVar67[6] = -((byte)((bVar63 < UNK_00183666) * UNK_00183666 |
                                 (bVar63 >= UNK_00183666) * bVar63) == bVar63);
            auVar67[7] = -((byte)((bVar65 < UNK_00183667) * UNK_00183667 |
                                 (bVar65 >= UNK_00183667) * bVar65) == bVar65);
            auVar67[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                                 (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
            auVar67[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                                 (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
            auVar67[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                  (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
            auVar67[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                   (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
            auVar67[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                   (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
            auVar67[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                   (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
            auVar67[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                   (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
            auVar67[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                   (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
            auVar20[0] = -((char)uVar14 == s__00184760[0]);
            auVar20[1] = -(cVar54 == s__00184760[1]);
            auVar20[2] = -(cVar56 == s__00184760[2]);
            auVar20[3] = -(cVar58 == s__00184760[3]);
            auVar20[4] = -(cVar60 == s__00184760[4]);
            auVar20[5] = -(cVar62 == s__00184760[5]);
            auVar20[6] = -(cVar64 == s__00184760[6]);
            auVar20[7] = -(cVar4 == s__00184760[7]);
            auVar20[8] = -(s__00184760[8] == '\0');
            auVar20[9] = -(UNK_00184769 == '\0');
            auVar20[10] = -(UNK_0018476a == '\0');
            auVar20[0xb] = -(UNK_0018476b == '\0');
            auVar20[0xc] = -(UNK_0018476c == '\0');
            auVar20[0xd] = -(UNK_0018476d == '\0');
            auVar20[0xe] = -(UNK_0018476e == '\0');
            auVar20[0xf] = -(UNK_0018476f == '\0');
            auVar20 = auVar20 | auVar67;
            auVar28._0_14_ = auVar20._0_14_;
            auVar28[0xe] = auVar20[7];
            auVar28[0xf] = auVar20[7];
            auVar27._14_2_ = auVar28._14_2_;
            auVar27._0_13_ = auVar20._0_13_;
            auVar27[0xd] = auVar20[6];
            auVar26._13_3_ = auVar27._13_3_;
            auVar26._0_12_ = auVar20._0_12_;
            auVar26[0xc] = auVar20[6];
            auVar25._12_4_ = auVar26._12_4_;
            auVar25._0_11_ = auVar20._0_11_;
            auVar25[0xb] = auVar20[5];
            auVar24._11_5_ = auVar25._11_5_;
            auVar24._0_10_ = auVar20._0_10_;
            auVar24[10] = auVar20[5];
            auVar23._10_6_ = auVar24._10_6_;
            auVar23._0_9_ = auVar20._0_9_;
            auVar23[9] = auVar20[4];
            auVar22._9_7_ = auVar23._9_7_;
            auVar22._0_8_ = auVar20._0_8_;
            auVar22[8] = auVar20[4];
            auVar21._8_8_ = auVar22._8_8_;
            auVar21[7] = auVar20[3];
            auVar21[6] = auVar20[3];
            auVar21[5] = auVar20[2];
            auVar21[4] = auVar20[2];
            auVar21[3] = auVar20[1];
            auVar21[2] = auVar20[1];
            auVar21[0] = auVar20[0];
            auVar21[1] = auVar21[0];
            auVar15 = auVar15 | auVar21 ^ auVar17;
            uVar11 = uVar11 + 8;
          } while (uVar12 != uVar11);
          auVar15 = psllw(auVar15,7);
          bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0)
                       || (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x37,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
          if (uVar8 != uVar12) goto LAB_00624c3c;
        }
        else {
          uVar11 = uVar8 & 0xffffffffffffffe0;
          auVar15 = (undefined1  [16])0x0;
          uVar12 = 0;
          auVar16 = (undefined1  [16])0x0;
          do {
            pbVar10 = (byte *)(pcVar2 + uVar12);
            pbVar5 = (byte *)(pcVar2 + uVar12 + 0x10);
            bVar49 = *pbVar10 + DAT_001831d0;
            bVar53 = pbVar10[1] + UNK_001831d1;
            bVar55 = pbVar10[2] + UNK_001831d2;
            bVar57 = pbVar10[3] + UNK_001831d3;
            bVar59 = pbVar10[4] + UNK_001831d4;
            bVar61 = pbVar10[5] + UNK_001831d5;
            bVar63 = pbVar10[6] + UNK_001831d6;
            bVar65 = pbVar10[7] + UNK_001831d7;
            bVar72 = pbVar10[8] + UNK_001831d8;
            bVar73 = pbVar10[9] + UNK_001831d9;
            bVar74 = pbVar10[10] + UNK_001831da;
            bVar75 = pbVar10[0xb] + UNK_001831db;
            bVar76 = pbVar10[0xc] + UNK_001831dc;
            bVar77 = pbVar10[0xd] + UNK_001831dd;
            bVar78 = pbVar10[0xe] + UNK_001831de;
            bVar79 = pbVar10[0xf] + UNK_001831df;
            bVar80 = *pbVar5 + DAT_001831d0;
            bVar81 = pbVar5[1] + UNK_001831d1;
            bVar82 = pbVar5[2] + UNK_001831d2;
            bVar83 = pbVar5[3] + UNK_001831d3;
            bVar84 = pbVar5[4] + UNK_001831d4;
            bVar85 = pbVar5[5] + UNK_001831d5;
            bVar86 = pbVar5[6] + UNK_001831d6;
            bVar87 = pbVar5[7] + UNK_001831d7;
            bVar88 = pbVar5[8] + UNK_001831d8;
            bVar89 = pbVar5[9] + UNK_001831d9;
            bVar90 = pbVar5[10] + UNK_001831da;
            bVar91 = pbVar5[0xb] + UNK_001831db;
            bVar92 = pbVar5[0xc] + UNK_001831dc;
            bVar93 = pbVar5[0xd] + UNK_001831dd;
            bVar94 = pbVar5[0xe] + UNK_001831de;
            bVar95 = pbVar5[0xf] + UNK_001831df;
            auVar96[0] = -((byte)((DAT_00182f40 < bVar49) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar49) * bVar49) == bVar49);
            auVar96[1] = -((byte)((UNK_00182f41 < bVar53) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar53) * bVar53) == bVar53);
            auVar96[2] = -((byte)((UNK_00182f42 < bVar55) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar55) * bVar55) == bVar55);
            auVar96[3] = -((byte)((UNK_00182f43 < bVar57) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar57) * bVar57) == bVar57);
            auVar96[4] = -((byte)((UNK_00182f44 < bVar59) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar59) * bVar59) == bVar59);
            auVar96[5] = -((byte)((UNK_00182f45 < bVar61) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar61) * bVar61) == bVar61);
            auVar96[6] = -((byte)((UNK_00182f46 < bVar63) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar63) * bVar63) == bVar63);
            auVar96[7] = -((byte)((UNK_00182f47 < bVar65) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar65) * bVar65) == bVar65);
            auVar96[8] = -((byte)((UNK_00182f48 < bVar72) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar72) * bVar72) == bVar72);
            auVar96[9] = -((byte)((UNK_00182f49 < bVar73) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar73) * bVar73) == bVar73);
            auVar96[10] = -((byte)((UNK_00182f4a < bVar74) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar74) * bVar74) == bVar74);
            auVar96[0xb] = -((byte)((UNK_00182f4b < bVar75) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar75) * bVar75) == bVar75);
            auVar96[0xc] = -((byte)((UNK_00182f4c < bVar76) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar76) * bVar76) == bVar76);
            auVar96[0xd] = -((byte)((UNK_00182f4d < bVar77) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar77) * bVar77) == bVar77);
            auVar96[0xe] = -((byte)((UNK_00182f4e < bVar78) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar78) * bVar78) == bVar78);
            auVar96[0xf] = -((byte)((UNK_00182f4f < bVar79) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar79) * bVar79) == bVar79);
            auVar66[0] = -((byte)((DAT_00182f40 < bVar80) * DAT_00182f40 |
                                 (DAT_00182f40 >= bVar80) * bVar80) == bVar80);
            auVar66[1] = -((byte)((UNK_00182f41 < bVar81) * UNK_00182f41 |
                                 (UNK_00182f41 >= bVar81) * bVar81) == bVar81);
            auVar66[2] = -((byte)((UNK_00182f42 < bVar82) * UNK_00182f42 |
                                 (UNK_00182f42 >= bVar82) * bVar82) == bVar82);
            auVar66[3] = -((byte)((UNK_00182f43 < bVar83) * UNK_00182f43 |
                                 (UNK_00182f43 >= bVar83) * bVar83) == bVar83);
            auVar66[4] = -((byte)((UNK_00182f44 < bVar84) * UNK_00182f44 |
                                 (UNK_00182f44 >= bVar84) * bVar84) == bVar84);
            auVar66[5] = -((byte)((UNK_00182f45 < bVar85) * UNK_00182f45 |
                                 (UNK_00182f45 >= bVar85) * bVar85) == bVar85);
            auVar66[6] = -((byte)((UNK_00182f46 < bVar86) * UNK_00182f46 |
                                 (UNK_00182f46 >= bVar86) * bVar86) == bVar86);
            auVar66[7] = -((byte)((UNK_00182f47 < bVar87) * UNK_00182f47 |
                                 (UNK_00182f47 >= bVar87) * bVar87) == bVar87);
            auVar66[8] = -((byte)((UNK_00182f48 < bVar88) * UNK_00182f48 |
                                 (UNK_00182f48 >= bVar88) * bVar88) == bVar88);
            auVar66[9] = -((byte)((UNK_00182f49 < bVar89) * UNK_00182f49 |
                                 (UNK_00182f49 >= bVar89) * bVar89) == bVar89);
            auVar66[10] = -((byte)((UNK_00182f4a < bVar90) * UNK_00182f4a |
                                  (UNK_00182f4a >= bVar90) * bVar90) == bVar90);
            auVar66[0xb] = -((byte)((UNK_00182f4b < bVar91) * UNK_00182f4b |
                                   (UNK_00182f4b >= bVar91) * bVar91) == bVar91);
            auVar66[0xc] = -((byte)((UNK_00182f4c < bVar92) * UNK_00182f4c |
                                   (UNK_00182f4c >= bVar92) * bVar92) == bVar92);
            auVar66[0xd] = -((byte)((UNK_00182f4d < bVar93) * UNK_00182f4d |
                                   (UNK_00182f4d >= bVar93) * bVar93) == bVar93);
            auVar66[0xe] = -((byte)((UNK_00182f4e < bVar94) * UNK_00182f4e |
                                   (UNK_00182f4e >= bVar94) * bVar94) == bVar94);
            auVar66[0xf] = -((byte)((UNK_00182f4f < bVar95) * UNK_00182f4f |
                                   (UNK_00182f4f >= bVar95) * bVar95) == bVar95);
            auVar19[0] = -(*pbVar10 == DAT_00183900);
            auVar19[1] = -(pbVar10[1] == UNK_00183901);
            auVar19[2] = -(pbVar10[2] == UNK_00183902);
            auVar19[3] = -(pbVar10[3] == UNK_00183903);
            auVar19[4] = -(pbVar10[4] == UNK_00183904);
            auVar19[5] = -(pbVar10[5] == UNK_00183905);
            auVar19[6] = -(pbVar10[6] == UNK_00183906);
            auVar19[7] = -(pbVar10[7] == UNK_00183907);
            auVar19[8] = -(pbVar10[8] == UNK_00183908);
            auVar19[9] = -(pbVar10[9] == UNK_00183909);
            auVar19[10] = -(pbVar10[10] == UNK_0018390a);
            auVar19[0xb] = -(pbVar10[0xb] == UNK_0018390b);
            auVar19[0xc] = -(pbVar10[0xc] == UNK_0018390c);
            auVar19[0xd] = -(pbVar10[0xd] == UNK_0018390d);
            auVar19[0xe] = -(pbVar10[0xe] == UNK_0018390e);
            auVar19[0xf] = -(pbVar10[0xf] == UNK_0018390f);
            auVar16 = auVar16 | ~auVar19 & auVar96;
            auVar50[0] = -(*pbVar5 == DAT_00183900);
            auVar50[1] = -(pbVar5[1] == UNK_00183901);
            auVar50[2] = -(pbVar5[2] == UNK_00183902);
            auVar50[3] = -(pbVar5[3] == UNK_00183903);
            auVar50[4] = -(pbVar5[4] == UNK_00183904);
            auVar50[5] = -(pbVar5[5] == UNK_00183905);
            auVar50[6] = -(pbVar5[6] == UNK_00183906);
            auVar50[7] = -(pbVar5[7] == UNK_00183907);
            auVar50[8] = -(pbVar5[8] == UNK_00183908);
            auVar50[9] = -(pbVar5[9] == UNK_00183909);
            auVar50[10] = -(pbVar5[10] == UNK_0018390a);
            auVar50[0xb] = -(pbVar5[0xb] == UNK_0018390b);
            auVar50[0xc] = -(pbVar5[0xc] == UNK_0018390c);
            auVar50[0xd] = -(pbVar5[0xd] == UNK_0018390d);
            auVar50[0xe] = -(pbVar5[0xe] == UNK_0018390e);
            auVar50[0xf] = -(pbVar5[0xf] == UNK_0018390f);
            auVar15 = auVar15 | ~auVar50 & auVar66;
            uVar12 = uVar12 + 0x20;
          } while (uVar11 != uVar12);
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
          uVar9 = (uint)bVar13;
          if (uVar8 != uVar11) {
            if ((uVar8 & 0x18) == 0) {
              pcVar7 = pcVar2 + uVar11;
              goto LAB_00624c3c;
            }
            goto LAB_00624bc1;
          }
        }
        if (bVar13) goto LAB_00624c79;
      }
      auVar15 = ::<str>::trim_matches::<<char>::is_whitespace>();
      if (auVar15._8_8_ != 0) {
        return auVar15._0_8_;
      }
      goto LAB_00624c79;
    }
LAB_0062520c:
    uVar14 = (*(code *)PTR_panic_bounds_check_00799520)
                       (uVar14,&anon_d3057478e380898db632effa827bd31f_15_llvm_2674179329317868992);
LAB_00625219:
    (*(code *)PTR_panic_bounds_check_00799520)
              (uVar14,&
                      PTR_anon_46ff2ae45c1d8f80bf24c96f574d7f50_0_llvm_17588019787630232746_0078f750
              );
    pcVar3 = (code *)swi(3);
    pbVar10 = (byte *)(*pcVar3)();
    return pbVar10;
  }
LAB_00624c79:
  uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
           <http[56314f485c23ccf6]::header::value::HeaderValue>
                     (&local_b8,"x-goog-api-key",0xe,param_1);
  if ((char)local_b8 != '\0') {
    if (*(ulonglong *)(param_1 + 0x28) <= local_a8) goto LAB_0062520c;
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 0x20 + local_a8 * 0x68);
    uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x28 + local_a8 * 0x68);
    if (uVar8 != 0) {
      if (uVar8 < 8) {
        bVar13 = false;
        pcVar7 = pcVar2;
LAB_0062509c:
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          bVar13 = (bool)(bVar13 | (cVar4 != '\t' && (byte)(cVar4 + 0x81U) < 0xa1));
        } while (pcVar7 != pcVar2 + uVar8);
      }
      else if (uVar8 < 0x20) {
        uVar11 = 0;
        uVar9 = 0;
LAB_00625021:
        uVar12 = uVar8 & 0xfffffffffffffff8;
        pcVar7 = pcVar2 + uVar12;
        auVar15 = ZEXT416(uVar9);
        auVar18._8_4_ = 0xffffffff;
        auVar18._0_8_ = 0xffffffffffffffff;
        auVar18._12_4_ = 0xffffffff;
        do {
          uVar14 = *(undefined8 *)(pcVar2 + uVar11);
          bVar49 = (char)uVar14 + DAT_00183cf0;
          cVar54 = (char)((ulonglong)uVar14 >> 8);
          bVar53 = cVar54 + UNK_00183cf1;
          cVar56 = (char)((ulonglong)uVar14 >> 0x10);
          bVar55 = cVar56 + UNK_00183cf2;
          cVar58 = (char)((ulonglong)uVar14 >> 0x18);
          bVar57 = cVar58 + UNK_00183cf3;
          cVar60 = (char)((ulonglong)uVar14 >> 0x20);
          bVar59 = cVar60 + UNK_00183cf4;
          cVar62 = (char)((ulonglong)uVar14 >> 0x28);
          bVar61 = cVar62 + UNK_00183cf5;
          cVar64 = (char)((ulonglong)uVar14 >> 0x30);
          cVar4 = (char)((ulonglong)uVar14 >> 0x38);
          bVar63 = cVar64 + UNK_00183cf6;
          bVar65 = cVar4 + UNK_00183cf7;
          auVar71[0] = -((byte)((bVar49 < DAT_00183660) * DAT_00183660 |
                               (bVar49 >= DAT_00183660) * bVar49) == bVar49);
          auVar71[1] = -((byte)((bVar53 < UNK_00183661) * UNK_00183661 |
                               (bVar53 >= UNK_00183661) * bVar53) == bVar53);
          auVar71[2] = -((byte)((bVar55 < UNK_00183662) * UNK_00183662 |
                               (bVar55 >= UNK_00183662) * bVar55) == bVar55);
          auVar71[3] = -((byte)((bVar57 < UNK_00183663) * UNK_00183663 |
                               (bVar57 >= UNK_00183663) * bVar57) == bVar57);
          auVar71[4] = -((byte)((bVar59 < UNK_00183664) * UNK_00183664 |
                               (bVar59 >= UNK_00183664) * bVar59) == bVar59);
          auVar71[5] = -((byte)((bVar61 < UNK_00183665) * UNK_00183665 |
                               (bVar61 >= UNK_00183665) * bVar61) == bVar61);
          auVar71[6] = -((byte)((bVar63 < UNK_00183666) * UNK_00183666 |
                               (bVar63 >= UNK_00183666) * bVar63) == bVar63);
          auVar71[7] = -((byte)((bVar65 < UNK_00183667) * UNK_00183667 |
                               (bVar65 >= UNK_00183667) * bVar65) == bVar65);
          auVar71[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                               (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
          auVar71[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                               (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
          auVar71[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
          auVar71[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                 (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
          auVar71[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                 (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
          auVar71[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                 (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
          auVar71[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                 (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
          auVar71[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                 (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
          auVar40[0] = -((char)uVar14 == s__00184760[0]);
          auVar40[1] = -(cVar54 == s__00184760[1]);
          auVar40[2] = -(cVar56 == s__00184760[2]);
          auVar40[3] = -(cVar58 == s__00184760[3]);
          auVar40[4] = -(cVar60 == s__00184760[4]);
          auVar40[5] = -(cVar62 == s__00184760[5]);
          auVar40[6] = -(cVar64 == s__00184760[6]);
          auVar40[7] = -(cVar4 == s__00184760[7]);
          auVar40[8] = -(s__00184760[8] == '\0');
          auVar40[9] = -(UNK_00184769 == '\0');
          auVar40[10] = -(UNK_0018476a == '\0');
          auVar40[0xb] = -(UNK_0018476b == '\0');
          auVar40[0xc] = -(UNK_0018476c == '\0');
          auVar40[0xd] = -(UNK_0018476d == '\0');
          auVar40[0xe] = -(UNK_0018476e == '\0');
          auVar40[0xf] = -(UNK_0018476f == '\0');
          auVar40 = auVar40 | auVar71;
          auVar48._0_14_ = auVar40._0_14_;
          auVar48[0xe] = auVar40[7];
          auVar48[0xf] = auVar40[7];
          auVar47._14_2_ = auVar48._14_2_;
          auVar47._0_13_ = auVar40._0_13_;
          auVar47[0xd] = auVar40[6];
          auVar46._13_3_ = auVar47._13_3_;
          auVar46._0_12_ = auVar40._0_12_;
          auVar46[0xc] = auVar40[6];
          auVar45._12_4_ = auVar46._12_4_;
          auVar45._0_11_ = auVar40._0_11_;
          auVar45[0xb] = auVar40[5];
          auVar44._11_5_ = auVar45._11_5_;
          auVar44._0_10_ = auVar40._0_10_;
          auVar44[10] = auVar40[5];
          auVar43._10_6_ = auVar44._10_6_;
          auVar43._0_9_ = auVar40._0_9_;
          auVar43[9] = auVar40[4];
          auVar42._9_7_ = auVar43._9_7_;
          auVar42._0_8_ = auVar40._0_8_;
          auVar42[8] = auVar40[4];
          auVar41._8_8_ = auVar42._8_8_;
          auVar41[7] = auVar40[3];
          auVar41[6] = auVar40[3];
          auVar41[5] = auVar40[2];
          auVar41[4] = auVar40[2];
          auVar41[3] = auVar40[1];
          auVar41[2] = auVar40[1];
          auVar41[0] = auVar40[0];
          auVar41[1] = auVar41[0];
          auVar15 = auVar15 | auVar41 ^ auVar18;
          uVar11 = uVar11 + 8;
        } while (uVar12 != uVar11);
        auVar15 = psllw(auVar15,7);
        bVar13 = (((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0;
        if (uVar8 != uVar12) goto LAB_0062509c;
      }
      else {
        uVar11 = uVar8 & 0xffffffffffffffe0;
        auVar15 = (undefined1  [16])0x0;
        uVar12 = 0;
        auVar16 = (undefined1  [16])0x0;
        do {
          pbVar10 = (byte *)(pcVar2 + uVar12);
          pbVar5 = (byte *)(pcVar2 + uVar12 + 0x10);
          bVar49 = *pbVar10 + DAT_001831d0;
          bVar53 = pbVar10[1] + UNK_001831d1;
          bVar55 = pbVar10[2] + UNK_001831d2;
          bVar57 = pbVar10[3] + UNK_001831d3;
          bVar59 = pbVar10[4] + UNK_001831d4;
          bVar61 = pbVar10[5] + UNK_001831d5;
          bVar63 = pbVar10[6] + UNK_001831d6;
          bVar65 = pbVar10[7] + UNK_001831d7;
          bVar72 = pbVar10[8] + UNK_001831d8;
          bVar73 = pbVar10[9] + UNK_001831d9;
          bVar74 = pbVar10[10] + UNK_001831da;
          bVar75 = pbVar10[0xb] + UNK_001831db;
          bVar76 = pbVar10[0xc] + UNK_001831dc;
          bVar77 = pbVar10[0xd] + UNK_001831dd;
          bVar78 = pbVar10[0xe] + UNK_001831de;
          bVar79 = pbVar10[0xf] + UNK_001831df;
          bVar80 = *pbVar5 + DAT_001831d0;
          bVar81 = pbVar5[1] + UNK_001831d1;
          bVar82 = pbVar5[2] + UNK_001831d2;
          bVar83 = pbVar5[3] + UNK_001831d3;
          bVar84 = pbVar5[4] + UNK_001831d4;
          bVar85 = pbVar5[5] + UNK_001831d5;
          bVar86 = pbVar5[6] + UNK_001831d6;
          bVar87 = pbVar5[7] + UNK_001831d7;
          bVar88 = pbVar5[8] + UNK_001831d8;
          bVar89 = pbVar5[9] + UNK_001831d9;
          bVar90 = pbVar5[10] + UNK_001831da;
          bVar91 = pbVar5[0xb] + UNK_001831db;
          bVar92 = pbVar5[0xc] + UNK_001831dc;
          bVar93 = pbVar5[0xd] + UNK_001831dd;
          bVar94 = pbVar5[0xe] + UNK_001831de;
          bVar95 = pbVar5[0xf] + UNK_001831df;
          auVar98[0] = -((byte)((DAT_00182f40 < bVar49) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar49) * bVar49) == bVar49);
          auVar98[1] = -((byte)((UNK_00182f41 < bVar53) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar53) * bVar53) == bVar53);
          auVar98[2] = -((byte)((UNK_00182f42 < bVar55) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar55) * bVar55) == bVar55);
          auVar98[3] = -((byte)((UNK_00182f43 < bVar57) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar57) * bVar57) == bVar57);
          auVar98[4] = -((byte)((UNK_00182f44 < bVar59) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar59) * bVar59) == bVar59);
          auVar98[5] = -((byte)((UNK_00182f45 < bVar61) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar61) * bVar61) == bVar61);
          auVar98[6] = -((byte)((UNK_00182f46 < bVar63) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar63) * bVar63) == bVar63);
          auVar98[7] = -((byte)((UNK_00182f47 < bVar65) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar65) * bVar65) == bVar65);
          auVar98[8] = -((byte)((UNK_00182f48 < bVar72) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar72) * bVar72) == bVar72);
          auVar98[9] = -((byte)((UNK_00182f49 < bVar73) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar73) * bVar73) == bVar73);
          auVar98[10] = -((byte)((UNK_00182f4a < bVar74) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar74) * bVar74) == bVar74);
          auVar98[0xb] = -((byte)((UNK_00182f4b < bVar75) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar75) * bVar75) == bVar75);
          auVar98[0xc] = -((byte)((UNK_00182f4c < bVar76) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar76) * bVar76) == bVar76);
          auVar98[0xd] = -((byte)((UNK_00182f4d < bVar77) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar77) * bVar77) == bVar77);
          auVar98[0xe] = -((byte)((UNK_00182f4e < bVar78) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar78) * bVar78) == bVar78);
          auVar98[0xf] = -((byte)((UNK_00182f4f < bVar79) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar79) * bVar79) == bVar79);
          auVar70[0] = -((byte)((DAT_00182f40 < bVar80) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar80) * bVar80) == bVar80);
          auVar70[1] = -((byte)((UNK_00182f41 < bVar81) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar81) * bVar81) == bVar81);
          auVar70[2] = -((byte)((UNK_00182f42 < bVar82) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar82) * bVar82) == bVar82);
          auVar70[3] = -((byte)((UNK_00182f43 < bVar83) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar83) * bVar83) == bVar83);
          auVar70[4] = -((byte)((UNK_00182f44 < bVar84) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar84) * bVar84) == bVar84);
          auVar70[5] = -((byte)((UNK_00182f45 < bVar85) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar85) * bVar85) == bVar85);
          auVar70[6] = -((byte)((UNK_00182f46 < bVar86) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar86) * bVar86) == bVar86);
          auVar70[7] = -((byte)((UNK_00182f47 < bVar87) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar87) * bVar87) == bVar87);
          auVar70[8] = -((byte)((UNK_00182f48 < bVar88) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar88) * bVar88) == bVar88);
          auVar70[9] = -((byte)((UNK_00182f49 < bVar89) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar89) * bVar89) == bVar89);
          auVar70[10] = -((byte)((UNK_00182f4a < bVar90) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar90) * bVar90) == bVar90);
          auVar70[0xb] = -((byte)((UNK_00182f4b < bVar91) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar91) * bVar91) == bVar91);
          auVar70[0xc] = -((byte)((UNK_00182f4c < bVar92) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar92) * bVar92) == bVar92);
          auVar70[0xd] = -((byte)((UNK_00182f4d < bVar93) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar93) * bVar93) == bVar93);
          auVar70[0xe] = -((byte)((UNK_00182f4e < bVar94) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar94) * bVar94) == bVar94);
          auVar70[0xf] = -((byte)((UNK_00182f4f < bVar95) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar95) * bVar95) == bVar95);
          auVar39[0] = -(*pbVar10 == DAT_00183900);
          auVar39[1] = -(pbVar10[1] == UNK_00183901);
          auVar39[2] = -(pbVar10[2] == UNK_00183902);
          auVar39[3] = -(pbVar10[3] == UNK_00183903);
          auVar39[4] = -(pbVar10[4] == UNK_00183904);
          auVar39[5] = -(pbVar10[5] == UNK_00183905);
          auVar39[6] = -(pbVar10[6] == UNK_00183906);
          auVar39[7] = -(pbVar10[7] == UNK_00183907);
          auVar39[8] = -(pbVar10[8] == UNK_00183908);
          auVar39[9] = -(pbVar10[9] == UNK_00183909);
          auVar39[10] = -(pbVar10[10] == UNK_0018390a);
          auVar39[0xb] = -(pbVar10[0xb] == UNK_0018390b);
          auVar39[0xc] = -(pbVar10[0xc] == UNK_0018390c);
          auVar39[0xd] = -(pbVar10[0xd] == UNK_0018390d);
          auVar39[0xe] = -(pbVar10[0xe] == UNK_0018390e);
          auVar39[0xf] = -(pbVar10[0xf] == UNK_0018390f);
          auVar16 = auVar16 | ~auVar39 & auVar98;
          auVar52[0] = -(*pbVar5 == DAT_00183900);
          auVar52[1] = -(pbVar5[1] == UNK_00183901);
          auVar52[2] = -(pbVar5[2] == UNK_00183902);
          auVar52[3] = -(pbVar5[3] == UNK_00183903);
          auVar52[4] = -(pbVar5[4] == UNK_00183904);
          auVar52[5] = -(pbVar5[5] == UNK_00183905);
          auVar52[6] = -(pbVar5[6] == UNK_00183906);
          auVar52[7] = -(pbVar5[7] == UNK_00183907);
          auVar52[8] = -(pbVar5[8] == UNK_00183908);
          auVar52[9] = -(pbVar5[9] == UNK_00183909);
          auVar52[10] = -(pbVar5[10] == UNK_0018390a);
          auVar52[0xb] = -(pbVar5[0xb] == UNK_0018390b);
          auVar52[0xc] = -(pbVar5[0xc] == UNK_0018390c);
          auVar52[0xd] = -(pbVar5[0xd] == UNK_0018390d);
          auVar52[0xe] = -(pbVar5[0xe] == UNK_0018390e);
          auVar52[0xf] = -(pbVar5[0xf] == UNK_0018390f);
          auVar15 = auVar15 | ~auVar52 & auVar70;
          uVar12 = uVar12 + 0x20;
        } while (uVar11 != uVar12);
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
        uVar9 = (uint)bVar13;
        if (uVar8 != uVar11) {
          if ((uVar8 & 0x18) == 0) {
            pcVar7 = pcVar2 + uVar11;
            goto LAB_0062509c;
          }
          goto LAB_00625021;
        }
      }
      if (bVar13) goto LAB_006250d9;
    }
    auVar15 = ::<str>::trim_matches::<<char>::is_whitespace>();
    if (auVar15._8_8_ != 0) {
      return auVar15._0_8_;
    }
  }
LAB_006250d9:
  if (param_2 == 0) {
    return (byte *)0x0;
  }
  local_b8 = (byte *)0x0;
  local_98 = 0;
  local_88 = 0x2600000026;
  local_80 = 1;
  local_78 = 1;
  cStack_77 = '\0';
  uStack_b0 = param_3;
  local_a8 = param_2;
  uStack_a0 = param_3;
  local_90 = param_3;
  do {
    uVar8 = local_a8;
    <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
    ::next_match(&local_50,&local_a8);
    if ((int)local_50 == 1) {
      uVar11 = local_48 - (longlong)local_b8;
      pbVar10 = local_40;
    }
    else {
      if (cStack_77 != '\0') break;
      cStack_77 = '\x01';
      uVar11 = uStack_b0 - (longlong)local_b8;
      pbVar10 = local_b8;
      uVar8 = local_a8;
      if ((uVar11 != 0 | local_78) != 1) break;
    }
    if ((3 < uVar11) && (pbVar5 = local_b8 + uVar8, *(int *)pbVar5 == 0x3d79656b)) {
      local_b8 = pbVar10;
      auVar15 = ::<str>::trim_matches::<<char>::is_whitespace>(pbVar5 + 4,uVar11 - 4);
      goto LAB_006251cb;
    }
    local_b8 = pbVar10;
  } while (cStack_77 == '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = extraout_RDX;
  auVar15 = auVar15 << 0x40;
LAB_006251cb:
  pbVar10 = auVar15._0_8_;
  pbVar6 = pbVar10;
  pbVar5 = pbVar10;
  if (auVar15._8_8_ == 0) {
    pbVar6 = (byte *)0x0;
  }
LAB_006251d8:
  if (pbVar5 == (byte *)0x0) {
    return pbVar10;
  }
  return pbVar6;
}


