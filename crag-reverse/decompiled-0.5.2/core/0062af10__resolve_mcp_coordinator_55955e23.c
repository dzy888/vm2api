// 0062af10 resolve_mcp_coordinator

/* craggemini_core[66f3c71560d70857]::server::resolve_mcp_coordinator */

longlong * __rustcall
craggemini_core[66f3c71560d70857]::server::resolve_mcp_coordinator
          (longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,longlong param_5)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  code *pcVar4;
  byte *pbVar5;
  longlong lVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar20 [16];
  undefined1 auVar19 [16];
  undefined1 auVar18 [16];
  byte bVar26;
  char cVar29;
  byte bVar28;
  char cVar31;
  byte bVar30;
  char cVar33;
  byte bVar32;
  char cVar35;
  byte bVar34;
  char cVar37;
  byte bVar36;
  char cVar39;
  byte bVar38;
  byte bVar40;
  undefined1 auVar27 [16];
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
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
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  longlong local_90;
  longlong lStack_88;
  ulonglong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  int local_48 [2];
  longlong local_40;
  longlong local_38;
  
  uVar14 = <&str_as_http[56314f485c23ccf6]::header::map::as_header_name::Sealed>::find::
           <http[56314f485c23ccf6]::header::value::HeaderValue>
                     (&local_90,"x-craggemini-slot-id",0x14,param_3);
  if ((char)local_90 != '\0') {
    if (*(ulonglong *)(param_3 + 0x28) <= local_80) {
      (*(code *)PTR_panic_bounds_check_00799520)
                (uVar14,&anon_d3057478e380898db632effa827bd31f_15_llvm_2674179329317868992);
      pcVar4 = (code *)swi(3);
      plVar12 = (longlong *)(*pcVar4)();
      return plVar12;
    }
    pcVar3 = *(char **)(*(longlong *)(param_3 + 0x20) + 0x20 + local_80 * 0x68);
    uVar9 = *(ulonglong *)(*(longlong *)(param_3 + 0x20) + 0x28 + local_80 * 0x68);
    if (uVar9 != 0) {
      if (uVar9 < 8) {
        bVar13 = false;
        pcVar7 = pcVar3;
LAB_0062b0cc:
        do {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          bVar13 = (bool)(bVar13 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
        } while (pcVar7 != pcVar3 + uVar9);
      }
      else if (uVar9 < 0x20) {
        uVar10 = 0;
        uVar8 = 0;
LAB_0062b051:
        uVar11 = uVar9 & 0xfffffffffffffff8;
        pcVar7 = pcVar3 + uVar11;
        auVar68 = ZEXT416(uVar8);
        auVar15._8_4_ = 0xffffffff;
        auVar15._0_8_ = 0xffffffffffffffff;
        auVar15._12_4_ = 0xffffffff;
        do {
          uVar14 = *(undefined8 *)(pcVar3 + uVar10);
          bVar26 = (char)uVar14 + DAT_00183cf0;
          cVar29 = (char)((ulonglong)uVar14 >> 8);
          bVar28 = cVar29 + UNK_00183cf1;
          cVar31 = (char)((ulonglong)uVar14 >> 0x10);
          bVar30 = cVar31 + UNK_00183cf2;
          cVar33 = (char)((ulonglong)uVar14 >> 0x18);
          bVar32 = cVar33 + UNK_00183cf3;
          cVar35 = (char)((ulonglong)uVar14 >> 0x20);
          bVar34 = cVar35 + UNK_00183cf4;
          cVar37 = (char)((ulonglong)uVar14 >> 0x28);
          bVar36 = cVar37 + UNK_00183cf5;
          cVar39 = (char)((ulonglong)uVar14 >> 0x30);
          cVar2 = (char)((ulonglong)uVar14 >> 0x38);
          bVar38 = cVar39 + UNK_00183cf6;
          bVar40 = cVar2 + UNK_00183cf7;
          auVar42[0] = -((byte)((bVar26 < DAT_00183660) * DAT_00183660 |
                               (bVar26 >= DAT_00183660) * bVar26) == bVar26);
          auVar42[1] = -((byte)((bVar28 < UNK_00183661) * UNK_00183661 |
                               (bVar28 >= UNK_00183661) * bVar28) == bVar28);
          auVar42[2] = -((byte)((bVar30 < UNK_00183662) * UNK_00183662 |
                               (bVar30 >= UNK_00183662) * bVar30) == bVar30);
          auVar42[3] = -((byte)((bVar32 < UNK_00183663) * UNK_00183663 |
                               (bVar32 >= UNK_00183663) * bVar32) == bVar32);
          auVar42[4] = -((byte)((bVar34 < UNK_00183664) * UNK_00183664 |
                               (bVar34 >= UNK_00183664) * bVar34) == bVar34);
          auVar42[5] = -((byte)((bVar36 < UNK_00183665) * UNK_00183665 |
                               (bVar36 >= UNK_00183665) * bVar36) == bVar36);
          auVar42[6] = -((byte)((bVar38 < UNK_00183666) * UNK_00183666 |
                               (bVar38 >= UNK_00183666) * bVar38) == bVar38);
          auVar42[7] = -((byte)((bVar40 < UNK_00183667) * UNK_00183667 |
                               (bVar40 >= UNK_00183667) * bVar40) == bVar40);
          auVar42[8] = -((byte)((UNK_00183cf8 < UNK_00183668) * UNK_00183668 |
                               (UNK_00183cf8 >= UNK_00183668) * UNK_00183cf8) == UNK_00183cf8);
          auVar42[9] = -((byte)((UNK_00183cf9 < UNK_00183669) * UNK_00183669 |
                               (UNK_00183cf9 >= UNK_00183669) * UNK_00183cf9) == UNK_00183cf9);
          auVar42[10] = -((byte)((UNK_00183cfa < UNK_0018366a) * UNK_0018366a |
                                (UNK_00183cfa >= UNK_0018366a) * UNK_00183cfa) == UNK_00183cfa);
          auVar42[0xb] = -((byte)((UNK_00183cfb < UNK_0018366b) * UNK_0018366b |
                                 (UNK_00183cfb >= UNK_0018366b) * UNK_00183cfb) == UNK_00183cfb);
          auVar42[0xc] = -((byte)((UNK_00183cfc < UNK_0018366c) * UNK_0018366c |
                                 (UNK_00183cfc >= UNK_0018366c) * UNK_00183cfc) == UNK_00183cfc);
          auVar42[0xd] = -((byte)((UNK_00183cfd < UNK_0018366d) * UNK_0018366d |
                                 (UNK_00183cfd >= UNK_0018366d) * UNK_00183cfd) == UNK_00183cfd);
          auVar42[0xe] = -((byte)((UNK_00183cfe < UNK_0018366e) * UNK_0018366e |
                                 (UNK_00183cfe >= UNK_0018366e) * UNK_00183cfe) == UNK_00183cfe);
          auVar42[0xf] = -((byte)((UNK_00183cff < UNK_0018366f) * UNK_0018366f |
                                 (UNK_00183cff >= UNK_0018366f) * UNK_00183cff) == UNK_00183cff);
          auVar17[0] = -((char)uVar14 == s__00184760[0]);
          auVar17[1] = -(cVar29 == s__00184760[1]);
          auVar17[2] = -(cVar31 == s__00184760[2]);
          auVar17[3] = -(cVar33 == s__00184760[3]);
          auVar17[4] = -(cVar35 == s__00184760[4]);
          auVar17[5] = -(cVar37 == s__00184760[5]);
          auVar17[6] = -(cVar39 == s__00184760[6]);
          auVar17[7] = -(cVar2 == s__00184760[7]);
          auVar17[8] = -(s__00184760[8] == '\0');
          auVar17[9] = -(UNK_00184769 == '\0');
          auVar17[10] = -(UNK_0018476a == '\0');
          auVar17[0xb] = -(UNK_0018476b == '\0');
          auVar17[0xc] = -(UNK_0018476c == '\0');
          auVar17[0xd] = -(UNK_0018476d == '\0');
          auVar17[0xe] = -(UNK_0018476e == '\0');
          auVar17[0xf] = -(UNK_0018476f == '\0');
          auVar17 = auVar17 | auVar42;
          auVar25._0_14_ = auVar17._0_14_;
          auVar25[0xe] = auVar17[7];
          auVar25[0xf] = auVar17[7];
          auVar24._14_2_ = auVar25._14_2_;
          auVar24._0_13_ = auVar17._0_13_;
          auVar24[0xd] = auVar17[6];
          auVar23._13_3_ = auVar24._13_3_;
          auVar23._0_12_ = auVar17._0_12_;
          auVar23[0xc] = auVar17[6];
          auVar22._12_4_ = auVar23._12_4_;
          auVar22._0_11_ = auVar17._0_11_;
          auVar22[0xb] = auVar17[5];
          auVar21._11_5_ = auVar22._11_5_;
          auVar21._0_10_ = auVar17._0_10_;
          auVar21[10] = auVar17[5];
          auVar20._10_6_ = auVar21._10_6_;
          auVar20._0_9_ = auVar17._0_9_;
          auVar20[9] = auVar17[4];
          auVar19._9_7_ = auVar20._9_7_;
          auVar19._0_8_ = auVar17._0_8_;
          auVar19[8] = auVar17[4];
          auVar18._8_8_ = auVar19._8_8_;
          auVar18[7] = auVar17[3];
          auVar18[6] = auVar17[3];
          auVar18[5] = auVar17[2];
          auVar18[4] = auVar17[2];
          auVar18[3] = auVar17[1];
          auVar18[2] = auVar17[1];
          auVar18[0] = auVar17[0];
          auVar18[1] = auVar18[0];
          auVar68 = auVar68 | auVar18 ^ auVar15;
          uVar10 = uVar10 + 8;
        } while (uVar11 != uVar10);
        auVar68 = psllw(auVar68,7);
        bVar13 = (((((((SUB161(auVar68 >> 7,0) & 1) != 0 || (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar68 >> 0x27,0) & 1) != 0) || (SUB161(auVar68 >> 0x37,0) & 1) != 0)
                   || (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x57,0) & 1) != 0)
                 || (SUB161(auVar68 >> 0x67,0) & 1) != 0) || (SUB161(auVar68 >> 0x77,0) & 1) != 0;
        if (uVar9 != uVar11) goto LAB_0062b0cc;
      }
      else {
        uVar10 = uVar9 & 0xffffffffffffffe0;
        auVar68 = (undefined1  [16])0x0;
        uVar11 = 0;
        auVar15 = (undefined1  [16])0x0;
        do {
          pcVar7 = pcVar3 + uVar11;
          pcVar1 = pcVar3 + uVar11 + 0x10;
          bVar26 = *pcVar7 + DAT_001831d0;
          bVar28 = pcVar7[1] + UNK_001831d1;
          bVar30 = pcVar7[2] + UNK_001831d2;
          bVar32 = pcVar7[3] + UNK_001831d3;
          bVar34 = pcVar7[4] + UNK_001831d4;
          bVar36 = pcVar7[5] + UNK_001831d5;
          bVar38 = pcVar7[6] + UNK_001831d6;
          bVar40 = pcVar7[7] + UNK_001831d7;
          bVar43 = pcVar7[8] + UNK_001831d8;
          bVar44 = pcVar7[9] + UNK_001831d9;
          bVar45 = pcVar7[10] + UNK_001831da;
          bVar46 = pcVar7[0xb] + UNK_001831db;
          bVar47 = pcVar7[0xc] + UNK_001831dc;
          bVar48 = pcVar7[0xd] + UNK_001831dd;
          bVar49 = pcVar7[0xe] + UNK_001831de;
          bVar50 = pcVar7[0xf] + UNK_001831df;
          bVar51 = *pcVar1 + DAT_001831d0;
          bVar52 = pcVar1[1] + UNK_001831d1;
          bVar53 = pcVar1[2] + UNK_001831d2;
          bVar54 = pcVar1[3] + UNK_001831d3;
          bVar55 = pcVar1[4] + UNK_001831d4;
          bVar56 = pcVar1[5] + UNK_001831d5;
          bVar57 = pcVar1[6] + UNK_001831d6;
          bVar58 = pcVar1[7] + UNK_001831d7;
          bVar59 = pcVar1[8] + UNK_001831d8;
          bVar60 = pcVar1[9] + UNK_001831d9;
          bVar61 = pcVar1[10] + UNK_001831da;
          bVar62 = pcVar1[0xb] + UNK_001831db;
          bVar63 = pcVar1[0xc] + UNK_001831dc;
          bVar64 = pcVar1[0xd] + UNK_001831dd;
          bVar65 = pcVar1[0xe] + UNK_001831de;
          bVar66 = pcVar1[0xf] + UNK_001831df;
          auVar67[0] = -((byte)((DAT_00182f40 < bVar26) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar26) * bVar26) == bVar26);
          auVar67[1] = -((byte)((UNK_00182f41 < bVar28) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar28) * bVar28) == bVar28);
          auVar67[2] = -((byte)((UNK_00182f42 < bVar30) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar30) * bVar30) == bVar30);
          auVar67[3] = -((byte)((UNK_00182f43 < bVar32) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar32) * bVar32) == bVar32);
          auVar67[4] = -((byte)((UNK_00182f44 < bVar34) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar34) * bVar34) == bVar34);
          auVar67[5] = -((byte)((UNK_00182f45 < bVar36) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar36) * bVar36) == bVar36);
          auVar67[6] = -((byte)((UNK_00182f46 < bVar38) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar38) * bVar38) == bVar38);
          auVar67[7] = -((byte)((UNK_00182f47 < bVar40) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar40) * bVar40) == bVar40);
          auVar67[8] = -((byte)((UNK_00182f48 < bVar43) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar43) * bVar43) == bVar43);
          auVar67[9] = -((byte)((UNK_00182f49 < bVar44) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar44) * bVar44) == bVar44);
          auVar67[10] = -((byte)((UNK_00182f4a < bVar45) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar45) * bVar45) == bVar45);
          auVar67[0xb] = -((byte)((UNK_00182f4b < bVar46) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar46) * bVar46) == bVar46);
          auVar67[0xc] = -((byte)((UNK_00182f4c < bVar47) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar47) * bVar47) == bVar47);
          auVar67[0xd] = -((byte)((UNK_00182f4d < bVar48) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar48) * bVar48) == bVar48);
          auVar67[0xe] = -((byte)((UNK_00182f4e < bVar49) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar49) * bVar49) == bVar49);
          auVar67[0xf] = -((byte)((UNK_00182f4f < bVar50) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar50) * bVar50) == bVar50);
          auVar41[0] = -((byte)((DAT_00182f40 < bVar51) * DAT_00182f40 |
                               (DAT_00182f40 >= bVar51) * bVar51) == bVar51);
          auVar41[1] = -((byte)((UNK_00182f41 < bVar52) * UNK_00182f41 |
                               (UNK_00182f41 >= bVar52) * bVar52) == bVar52);
          auVar41[2] = -((byte)((UNK_00182f42 < bVar53) * UNK_00182f42 |
                               (UNK_00182f42 >= bVar53) * bVar53) == bVar53);
          auVar41[3] = -((byte)((UNK_00182f43 < bVar54) * UNK_00182f43 |
                               (UNK_00182f43 >= bVar54) * bVar54) == bVar54);
          auVar41[4] = -((byte)((UNK_00182f44 < bVar55) * UNK_00182f44 |
                               (UNK_00182f44 >= bVar55) * bVar55) == bVar55);
          auVar41[5] = -((byte)((UNK_00182f45 < bVar56) * UNK_00182f45 |
                               (UNK_00182f45 >= bVar56) * bVar56) == bVar56);
          auVar41[6] = -((byte)((UNK_00182f46 < bVar57) * UNK_00182f46 |
                               (UNK_00182f46 >= bVar57) * bVar57) == bVar57);
          auVar41[7] = -((byte)((UNK_00182f47 < bVar58) * UNK_00182f47 |
                               (UNK_00182f47 >= bVar58) * bVar58) == bVar58);
          auVar41[8] = -((byte)((UNK_00182f48 < bVar59) * UNK_00182f48 |
                               (UNK_00182f48 >= bVar59) * bVar59) == bVar59);
          auVar41[9] = -((byte)((UNK_00182f49 < bVar60) * UNK_00182f49 |
                               (UNK_00182f49 >= bVar60) * bVar60) == bVar60);
          auVar41[10] = -((byte)((UNK_00182f4a < bVar61) * UNK_00182f4a |
                                (UNK_00182f4a >= bVar61) * bVar61) == bVar61);
          auVar41[0xb] = -((byte)((UNK_00182f4b < bVar62) * UNK_00182f4b |
                                 (UNK_00182f4b >= bVar62) * bVar62) == bVar62);
          auVar41[0xc] = -((byte)((UNK_00182f4c < bVar63) * UNK_00182f4c |
                                 (UNK_00182f4c >= bVar63) * bVar63) == bVar63);
          auVar41[0xd] = -((byte)((UNK_00182f4d < bVar64) * UNK_00182f4d |
                                 (UNK_00182f4d >= bVar64) * bVar64) == bVar64);
          auVar41[0xe] = -((byte)((UNK_00182f4e < bVar65) * UNK_00182f4e |
                                 (UNK_00182f4e >= bVar65) * bVar65) == bVar65);
          auVar41[0xf] = -((byte)((UNK_00182f4f < bVar66) * UNK_00182f4f |
                                 (UNK_00182f4f >= bVar66) * bVar66) == bVar66);
          auVar16[0] = -(*pcVar7 == DAT_00183900);
          auVar16[1] = -(pcVar7[1] == UNK_00183901);
          auVar16[2] = -(pcVar7[2] == UNK_00183902);
          auVar16[3] = -(pcVar7[3] == UNK_00183903);
          auVar16[4] = -(pcVar7[4] == UNK_00183904);
          auVar16[5] = -(pcVar7[5] == UNK_00183905);
          auVar16[6] = -(pcVar7[6] == UNK_00183906);
          auVar16[7] = -(pcVar7[7] == UNK_00183907);
          auVar16[8] = -(pcVar7[8] == UNK_00183908);
          auVar16[9] = -(pcVar7[9] == UNK_00183909);
          auVar16[10] = -(pcVar7[10] == UNK_0018390a);
          auVar16[0xb] = -(pcVar7[0xb] == UNK_0018390b);
          auVar16[0xc] = -(pcVar7[0xc] == UNK_0018390c);
          auVar16[0xd] = -(pcVar7[0xd] == UNK_0018390d);
          auVar16[0xe] = -(pcVar7[0xe] == UNK_0018390e);
          auVar16[0xf] = -(pcVar7[0xf] == UNK_0018390f);
          auVar15 = auVar15 | ~auVar16 & auVar67;
          auVar27[0] = -(*pcVar1 == DAT_00183900);
          auVar27[1] = -(pcVar1[1] == UNK_00183901);
          auVar27[2] = -(pcVar1[2] == UNK_00183902);
          auVar27[3] = -(pcVar1[3] == UNK_00183903);
          auVar27[4] = -(pcVar1[4] == UNK_00183904);
          auVar27[5] = -(pcVar1[5] == UNK_00183905);
          auVar27[6] = -(pcVar1[6] == UNK_00183906);
          auVar27[7] = -(pcVar1[7] == UNK_00183907);
          auVar27[8] = -(pcVar1[8] == UNK_00183908);
          auVar27[9] = -(pcVar1[9] == UNK_00183909);
          auVar27[10] = -(pcVar1[10] == UNK_0018390a);
          auVar27[0xb] = -(pcVar1[0xb] == UNK_0018390b);
          auVar27[0xc] = -(pcVar1[0xc] == UNK_0018390c);
          auVar27[0xd] = -(pcVar1[0xd] == UNK_0018390d);
          auVar27[0xe] = -(pcVar1[0xe] == UNK_0018390e);
          auVar27[0xf] = -(pcVar1[0xf] == UNK_0018390f);
          auVar68 = auVar68 | ~auVar27 & auVar41;
          uVar11 = uVar11 + 0x20;
        } while (uVar10 != uVar11);
        auVar68 = psllw(auVar68 | auVar15,7);
        bVar13 = (((((((((((((((SUB161(auVar68 >> 7,0) & 1) != 0 ||
                              (SUB161(auVar68 >> 0xf,0) & 1) != 0) ||
                             (SUB161(auVar68 >> 0x17,0) & 1) != 0) ||
                            (SUB161(auVar68 >> 0x1f,0) & 1) != 0) ||
                           (SUB161(auVar68 >> 0x27,0) & 1) != 0) ||
                          (SUB161(auVar68 >> 0x2f,0) & 1) != 0) ||
                         (SUB161(auVar68 >> 0x37,0) & 1) != 0) ||
                        (SUB161(auVar68 >> 0x3f,0) & 1) != 0) ||
                       (SUB161(auVar68 >> 0x47,0) & 1) != 0) || (SUB161(auVar68 >> 0x4f,0) & 1) != 0
                      ) || (SUB161(auVar68 >> 0x57,0) & 1) != 0) ||
                    (SUB161(auVar68 >> 0x5f,0) & 1) != 0) || (SUB161(auVar68 >> 0x67,0) & 1) != 0)
                  || (SUB161(auVar68 >> 0x6f,0) & 1) != 0) || (SUB161(auVar68 >> 0x77,0) & 1) != 0)
                 || auVar68[0xf] < '\0';
        uVar8 = (uint)bVar13;
        if (uVar9 != uVar10) {
          if ((uVar9 & 0x18) == 0) {
            pcVar7 = pcVar3 + uVar10;
            goto LAB_0062b0cc;
          }
          goto LAB_0062b051;
        }
      }
      if (bVar13) goto LAB_0062b109;
    }
    auVar68 = ::<str>::trim_matches::<<char>::is_whitespace>();
    if (auVar68._8_8_ != 0) {
LAB_0062b21a:
      uVar9 = auVar68._8_8_;
      pbVar5 = auVar68._0_8_;
      if ((0x80 < uVar9) ||
         ((9 < (byte)(*pbVar5 - 0x30) && (0x19 < (byte)((*pbVar5 & 0xdf) + 0xbf))))) {
LAB_0062b31a:
        <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
                  (&local_90,400,"invalid_slot_id",0xf,
                   "invalid X-Craggemini-Slot-Id for MCP bridgesystem prompt string must not be emptysystem block array must not be emptysystem blocks contained no non-empty textsystem instruction \'parts\' array must not be emptysystem instruction text must not be emptymust be a non-empty string, Gemini parts object, or text block array"
                   ,0x2b);
        param_1[4] = local_70;
        param_1[5] = lStack_68;
        param_1[2] = local_80;
        param_1[3] = lStack_78;
        *param_1 = local_90;
        param_1[1] = lStack_88;
        param_1[6] = local_60;
        *(undefined2 *)(param_1 + 7) = local_58;
        *(undefined2 *)((longlong)param_1 + 0x3a) = 0x700;
        *(undefined4 *)((longlong)param_1 + 0x3c) = local_54;
        return param_1;
      }
      uVar10 = 0;
      do {
        bVar26 = pbVar5[uVar10];
        if (((9 < (byte)(bVar26 - 0x30)) && (0x19 < (byte)((bVar26 & 0xdf) + 0xbf))) &&
           ((0x32 < bVar26 - 0x2d ||
            ((0x4000000000003U >> ((ulonglong)(bVar26 - 0x2d) & 0x3f) & 1) == 0))))
        goto LAB_0062b31a;
        uVar10 = uVar10 + 1;
      } while (uVar9 != uVar10);
      if (0x40 < uVar9) goto LAB_0062b31a;
      lVar6 = <craggemini_core[66f3c71560d70857]::pool::PoolManager>::get_slot_mcp
                        (*(longlong *)(param_2 + 0x2e0) + 0x10,pbVar5);
      if (lVar6 == 0) {
        *param_1 = -1;
        param_1[1] = (longlong)"mcp_slot_not_found";
        param_1[2] = 0x12;
        param_1[3] = -1;
        param_1[4] = (longlong)"unknown or retired slot_id for MCP bridge";
        param_1[5] = 0x29;
        param_1[6] = 0;
        *(undefined4 *)(param_1 + 7) = 0x6020194;
        return param_1;
      }
      goto LAB_0062b2a6;
    }
  }
LAB_0062b109:
  if (param_4 != 0) {
    local_90 = 0;
    local_70 = 0;
    local_60 = 0x2600000026;
    local_58 = CONCAT11(local_58._1_1_,1);
    local_50 = 1;
    lStack_88 = param_5;
    local_80 = param_4;
    lStack_78 = param_5;
    lStack_68 = param_5;
    do {
      uVar9 = local_80;
      <core[c0acaeba6ab4c2e0]::str::pattern::CharSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
      ::next_match(local_48,&local_80);
      if (local_48[0] == 1) {
        uVar10 = local_40 - local_90;
        lVar6 = local_38;
      }
      else {
        if (local_50._1_1_ != '\0') break;
        local_50 = CONCAT11(1,(byte)local_50);
        uVar10 = lStack_88 - local_90;
        lVar6 = local_90;
        uVar9 = local_80;
        if ((uVar10 != 0 | (byte)local_50) != 1) break;
      }
      if ((7 < uVar10) && (plVar12 = (longlong *)(uVar9 + local_90), *plVar12 == 0x3d64695f746f6c73)
         ) {
        local_90 = lVar6;
        auVar68 = ::<str>::trim_matches::<<char>::is_whitespace>(plVar12 + 1,uVar10 - 8);
        if (auVar68._8_8_ != 0) goto LAB_0062b21a;
        break;
      }
      local_50._1_1_ = (char)((ushort)local_50 >> 8);
      bVar13 = local_50._1_1_ != '\x01';
      local_90 = lVar6;
    } while (bVar13);
  }
  plVar12 = *(longlong **)(param_2 + 0x2d8);
  LOCK();
  lVar6 = *plVar12;
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  if (*plVar12 == 0 || SCARRY8(lVar6,1) != *plVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar6 = *(longlong *)(param_2 + 0x2d8);
LAB_0062b2a6:
  param_1[1] = lVar6;
  *param_1 = -2;
  return param_1;
}


