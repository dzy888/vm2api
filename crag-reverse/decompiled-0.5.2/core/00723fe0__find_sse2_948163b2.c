// 00723fe0 find_sse2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* memchr[cf489ff24f0213f]::arch::x86_64::memchr::count_raw::find_sse2 */

longlong __rustcall
memchr[cf489ff24f0213f]::arch::x86_64::memchr::count_raw::find_sse2
          (undefined4 param_1,char *param_2,char *param_3)

{
  undefined1 auVar1 [15];
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 uVar12;
  undefined1 uVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar22;
  undefined1 auVar11 [16];
  longlong lVar21;
  undefined1 auVar23 [16];
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auVar27 [11];
  undefined1 auVar29 [12];
  char cVar60;
  undefined1 auVar31 [13];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar28 [11];
  undefined1 auVar30 [12];
  undefined1 auVar32 [13];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar55 [16];
  undefined1 auVar54 [16];
  undefined1 auVar53 [16];
  undefined1 auVar52 [16];
  undefined1 auVar51 [16];
  undefined1 auVar50 [16];
  undefined1 auVar49 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  char cVar61;
  ushort uVar62;
  undefined4 uVar63;
  undefined6 uVar64;
  ushort uVar129;
  ushort uVar132;
  uint7 uVar65;
  undefined8 uVar66;
  undefined1 auVar67 [11];
  undefined1 auVar72 [12];
  undefined1 auVar70 [12];
  char cVar128;
  char cVar131;
  char cVar137;
  ushort uVar138;
  undefined1 auVar75 [13];
  undefined1 auVar78 [14];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar89 [16];
  undefined1 auVar88 [16];
  undefined1 auVar87 [16];
  undefined1 auVar86 [16];
  undefined1 auVar85 [16];
  undefined1 auVar84 [16];
  undefined1 auVar83 [16];
  undefined1 auVar82 [16];
  undefined1 auVar81 [16];
  undefined1 auVar80 [16];
  undefined1 auVar68 [11];
  undefined1 auVar71 [12];
  undefined1 auVar76 [13];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar101 [16];
  undefined1 auVar100 [16];
  undefined1 auVar99 [16];
  undefined1 auVar98 [16];
  undefined1 auVar97 [16];
  undefined1 auVar96 [16];
  undefined1 auVar95 [16];
  undefined1 auVar94 [16];
  undefined1 auVar93 [16];
  undefined1 auVar92 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar73 [12];
  undefined1 auVar79 [14];
  byte bVar127;
  byte bVar130;
  byte bVar133;
  char cVar134;
  byte bVar136;
  byte bVar139;
  undefined1 auVar113 [16];
  ushort uVar135;
  ushort uVar140;
  byte bVar142;
  ushort uVar141;
  byte bVar144;
  ushort uVar143;
  undefined1 auVar114 [16];
  undefined1 auVar69 [11];
  undefined1 auVar74 [12];
  undefined1 auVar77 [13];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar124 [16];
  undefined1 auVar123 [16];
  undefined1 auVar122 [16];
  undefined1 auVar121 [16];
  undefined1 auVar120 [16];
  undefined1 auVar119 [16];
  undefined1 auVar118 [16];
  undefined1 auVar117 [16];
  undefined1 auVar116 [16];
  undefined1 auVar115 [16];
  undefined1 auVar145 [11];
  undefined1 auVar146 [12];
  undefined1 auVar147 [13];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar157 [16];
  undefined1 auVar156 [16];
  undefined1 auVar155 [16];
  undefined1 auVar154 [16];
  undefined1 auVar153 [16];
  undefined1 auVar152 [16];
  undefined1 auVar151 [16];
  undefined1 auVar150 [16];
  undefined1 auVar149 [16];
  undefined1 auVar148 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  
  if (param_3 <= param_2) {
    return 0;
  }
  uVar8 = (longlong)param_3 - (longlong)param_2;
  cVar7 = (char)param_1;
  if (uVar8 < 0x10) {
    if (uVar8 < 4) {
      lVar3 = 0;
      pcVar5 = param_2;
    }
    else {
      uVar9 = (ulonglong)((uint)uVar8 & 0xc);
      pcVar5 = param_2 + uVar9;
      lVar3 = 0;
      lVar21 = 0;
      uVar2 = 0;
      lVar24 = 0;
      lVar25 = 0;
      do {
        auVar33[0] = -((char)*(undefined2 *)(param_2 + uVar2) == cVar7);
        cVar60 = -((char)((ushort)*(undefined2 *)(param_2 + uVar2) >> 8) == cVar7);
        auVar39._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar27._0_10_ = CONCAT19(0xff,auVar39._0_9_);
        auVar27[10] = 0xff;
        auVar29[0xb] = 0xff;
        auVar29._0_11_ = auVar27;
        auVar31[0xc] = 0xff;
        auVar31._0_12_ = auVar29;
        auVar104[0xd] = 0xff;
        auVar104._0_13_ = auVar31;
        auVar104[0xe] = 0xff;
        auVar104[0xf] = 0xff;
        auVar43._14_2_ = auVar104._14_2_;
        auVar43[0xd] = 0xff;
        auVar43._0_13_ = auVar31;
        auVar42._13_3_ = auVar43._13_3_;
        auVar42[0xc] = 0xff;
        auVar42._0_12_ = auVar29;
        auVar41._12_4_ = auVar42._12_4_;
        auVar41[0xb] = 0xff;
        auVar41._0_11_ = auVar27;
        auVar40._11_5_ = auVar41._11_5_;
        auVar40[10] = 0xff;
        auVar40._0_10_ = auVar27._0_10_;
        auVar39._10_6_ = auVar40._10_6_;
        auVar39[9] = 0xff;
        auVar38._9_7_ = auVar39._9_7_;
        auVar38[8] = 0xff;
        auVar38._0_8_ = 0xff00000000000000;
        auVar37._8_8_ = auVar38._8_8_;
        auVar37._0_8_ = 0xff00000000000000;
        auVar36._7_9_ = auVar37._7_9_;
        auVar36._0_7_ = 0xff000000000000;
        auVar35._6_10_ = auVar36._6_10_;
        auVar35._0_6_ = 0xff0000000000;
        auVar34._5_11_ = auVar35._5_11_;
        auVar34._0_5_ = 0xff00000000;
        auVar33._4_12_ = auVar34._4_12_;
        auVar33[3] = cVar60;
        auVar33[2] = cVar60;
        auVar33[1] = auVar33[0];
        auVar43 = pshuflw(auVar33,auVar33,0xd4);
        auVar44._12_4_ = auVar43._12_4_;
        auVar44._0_8_ = auVar43._0_8_;
        auVar44._8_4_ = auVar43._4_4_;
        auVar44 = auVar44 & _DAT_00184640;
        lVar24 = lVar24 + auVar44._0_8_;
        lVar25 = lVar25 + auVar44._8_8_;
        auVar80[0] = -((char)*(undefined2 *)(param_2 + uVar2 + 2) == cVar7);
        cVar60 = -((char)((ushort)*(undefined2 *)(param_2 + uVar2 + 2) >> 8) == cVar7);
        auVar86._0_9_ = CONCAT18(0xff,0xff00000000000000);
        auVar67._0_10_ = CONCAT19(0xff,auVar86._0_9_);
        auVar67[10] = 0xff;
        auVar70[0xb] = 0xff;
        auVar70._0_11_ = auVar67;
        auVar75[0xc] = 0xff;
        auVar75._0_12_ = auVar70;
        auVar91[0xd] = 0xff;
        auVar91._0_13_ = auVar75;
        auVar91[0xe] = 0xff;
        auVar91[0xf] = 0xff;
        auVar90._14_2_ = auVar91._14_2_;
        auVar90[0xd] = 0xff;
        auVar90._0_13_ = auVar75;
        auVar89._13_3_ = auVar90._13_3_;
        auVar89[0xc] = 0xff;
        auVar89._0_12_ = auVar70;
        auVar88._12_4_ = auVar89._12_4_;
        auVar88[0xb] = 0xff;
        auVar88._0_11_ = auVar67;
        auVar87._11_5_ = auVar88._11_5_;
        auVar87[10] = 0xff;
        auVar87._0_10_ = auVar67._0_10_;
        auVar86._10_6_ = auVar87._10_6_;
        auVar86[9] = 0xff;
        auVar85._9_7_ = auVar86._9_7_;
        auVar85[8] = 0xff;
        auVar85._0_8_ = 0xff00000000000000;
        auVar84._8_8_ = auVar85._8_8_;
        auVar84._0_8_ = 0xff00000000000000;
        auVar83._7_9_ = auVar84._7_9_;
        auVar83._0_7_ = 0xff000000000000;
        auVar82._6_10_ = auVar83._6_10_;
        auVar82._0_6_ = 0xff0000000000;
        auVar81._5_11_ = auVar82._5_11_;
        auVar81._0_5_ = 0xff00000000;
        auVar80._4_12_ = auVar81._4_12_;
        auVar80[3] = cVar60;
        auVar80[2] = cVar60;
        auVar80[1] = auVar80[0];
        auVar43 = pshuflw(auVar44,auVar80,0xd4);
        auVar45._12_4_ = auVar43._12_4_;
        auVar45._0_8_ = auVar43._0_8_;
        auVar45._8_4_ = auVar43._4_4_;
        lVar3 = lVar3 + SUB168(auVar45 & _DAT_00184640,0);
        lVar21 = lVar21 + SUB168(auVar45 & _DAT_00184640,8);
        uVar2 = uVar2 + 4;
      } while (uVar9 != uVar2);
      lVar3 = lVar21 + lVar25 + lVar3 + lVar24;
      if (uVar8 == uVar9) {
        return lVar3;
      }
    }
    do {
      lVar3 = lVar3 + (ulonglong)(*pcVar5 == cVar7);
      pcVar5 = pcVar5 + 1;
    } while (pcVar5 != param_3);
    return lVar3;
  }
  pcVar5 = (char *)(((ulonglong)param_2 & 0xfffffffffffffff0) + 0x10);
  pcVar4 = param_2 + 1;
  if (param_2 + 1 < pcVar5) {
    pcVar4 = pcVar5;
  }
  uVar15 = (undefined1)((uint)param_1 >> 0x18);
  uVar13 = (undefined1)((uint)param_1 >> 0x10);
  uVar12 = (undefined1)((uint)param_1 >> 8);
  auVar11._4_4_ =
       (int)(CONCAT35(CONCAT21(CONCAT11(uVar15,uVar15),uVar13),CONCAT14(uVar13,param_1)) >> 0x20);
  auVar11[3] = uVar12;
  auVar11[2] = uVar12;
  auVar11[1] = cVar7;
  auVar11[0] = cVar7;
  auVar11._8_8_ = 0;
  auVar43 = pshuflw(auVar11,auVar11,0);
  uVar2 = (longlong)pcVar4 - (longlong)param_2;
  if (uVar2 < 4) {
    lVar3 = 0;
    pcVar4 = param_2;
LAB_007241a0:
    do {
      lVar3 = lVar3 + (ulonglong)(*pcVar4 == cVar7);
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  else {
    uVar10 = uVar2 & 0xfffffffffffffffc;
    pcVar4 = param_2 + uVar10;
    lVar3 = 0;
    lVar21 = 0;
    uVar9 = 0;
    lVar24 = 0;
    lVar25 = 0;
    do {
      auVar92[0] = -((char)*(undefined2 *)(param_2 + uVar9) == cVar7);
      cVar60 = -((char)((ushort)*(undefined2 *)(param_2 + uVar9) >> 8) == cVar7);
      auVar98._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar68._0_10_ = CONCAT19(0xff,auVar98._0_9_);
      auVar68[10] = 0xff;
      auVar71[0xb] = 0xff;
      auVar71._0_11_ = auVar68;
      auVar76[0xc] = 0xff;
      auVar76._0_12_ = auVar71;
      auVar103[0xd] = 0xff;
      auVar103._0_13_ = auVar76;
      auVar103[0xe] = 0xff;
      auVar103[0xf] = 0xff;
      auVar102._14_2_ = auVar103._14_2_;
      auVar102[0xd] = 0xff;
      auVar102._0_13_ = auVar76;
      auVar101._13_3_ = auVar102._13_3_;
      auVar101[0xc] = 0xff;
      auVar101._0_12_ = auVar71;
      auVar100._12_4_ = auVar101._12_4_;
      auVar100[0xb] = 0xff;
      auVar100._0_11_ = auVar68;
      auVar99._11_5_ = auVar100._11_5_;
      auVar99[10] = 0xff;
      auVar99._0_10_ = auVar68._0_10_;
      auVar98._10_6_ = auVar99._10_6_;
      auVar98[9] = 0xff;
      auVar97._9_7_ = auVar98._9_7_;
      auVar97[8] = 0xff;
      auVar97._0_8_ = 0xff00000000000000;
      auVar96._8_8_ = auVar97._8_8_;
      auVar96._0_8_ = 0xff00000000000000;
      auVar95._7_9_ = auVar96._7_9_;
      auVar95._0_7_ = 0xff000000000000;
      auVar94._6_10_ = auVar95._6_10_;
      auVar94._0_6_ = 0xff0000000000;
      auVar93._5_11_ = auVar94._5_11_;
      auVar93._0_5_ = 0xff00000000;
      auVar92._4_12_ = auVar93._4_12_;
      auVar92[3] = cVar60;
      auVar92[2] = cVar60;
      auVar92[1] = auVar92[0];
      auVar104 = pshuflw(auVar92,auVar92,0xd4);
      auVar105._12_4_ = auVar104._12_4_;
      auVar105._0_8_ = auVar104._0_8_;
      auVar105._8_4_ = auVar104._4_4_;
      auVar105 = auVar105 & _DAT_00184640;
      lVar24 = lVar24 + auVar105._0_8_;
      lVar25 = lVar25 + auVar105._8_8_;
      auVar148[0] = -((char)*(undefined2 *)(param_2 + uVar9 + 2) == cVar7);
      cVar60 = -((char)((ushort)*(undefined2 *)(param_2 + uVar9 + 2) >> 8) == cVar7);
      auVar154._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar145._0_10_ = CONCAT19(0xff,auVar154._0_9_);
      auVar145[10] = 0xff;
      auVar146[0xb] = 0xff;
      auVar146._0_11_ = auVar145;
      auVar147[0xc] = 0xff;
      auVar147._0_12_ = auVar146;
      auVar159[0xd] = 0xff;
      auVar159._0_13_ = auVar147;
      auVar159[0xe] = 0xff;
      auVar159[0xf] = 0xff;
      auVar158._14_2_ = auVar159._14_2_;
      auVar158[0xd] = 0xff;
      auVar158._0_13_ = auVar147;
      auVar157._13_3_ = auVar158._13_3_;
      auVar157[0xc] = 0xff;
      auVar157._0_12_ = auVar146;
      auVar156._12_4_ = auVar157._12_4_;
      auVar156[0xb] = 0xff;
      auVar156._0_11_ = auVar145;
      auVar155._11_5_ = auVar156._11_5_;
      auVar155[10] = 0xff;
      auVar155._0_10_ = auVar145._0_10_;
      auVar154._10_6_ = auVar155._10_6_;
      auVar154[9] = 0xff;
      auVar153._9_7_ = auVar154._9_7_;
      auVar153[8] = 0xff;
      auVar153._0_8_ = 0xff00000000000000;
      auVar152._8_8_ = auVar153._8_8_;
      auVar152._0_8_ = 0xff00000000000000;
      auVar151._7_9_ = auVar152._7_9_;
      auVar151._0_7_ = 0xff000000000000;
      auVar150._6_10_ = auVar151._6_10_;
      auVar150._0_6_ = 0xff0000000000;
      auVar149._5_11_ = auVar150._5_11_;
      auVar149._0_5_ = 0xff00000000;
      auVar148._4_12_ = auVar149._4_12_;
      auVar148[3] = cVar60;
      auVar148[2] = cVar60;
      auVar148[1] = auVar148[0];
      auVar104 = pshuflw(auVar105,auVar148,0xd4);
      auVar106._12_4_ = auVar104._12_4_;
      auVar106._0_8_ = auVar104._0_8_;
      auVar106._8_4_ = auVar104._4_4_;
      lVar3 = lVar3 + SUB168(auVar106 & _DAT_00184640,0);
      lVar21 = lVar21 + SUB168(auVar106 & _DAT_00184640,8);
      uVar9 = uVar9 + 4;
    } while (uVar10 != uVar9);
    lVar3 = lVar21 + lVar25 + lVar3 + lVar24;
    if (uVar2 != uVar10) goto LAB_007241a0;
  }
  cVar60 = auVar43[0];
  cVar14 = auVar43[2];
  cVar16 = auVar43[3];
  cVar17 = auVar43[4];
  cVar18 = auVar43[5];
  cVar19 = auVar43[6];
  cVar20 = auVar43[7];
  cVar22 = auVar43[1];
  if (pcVar5 <= param_3 + -0x40 && 0x3f < uVar8) {
    do {
      auVar107[0] = -(*pcVar5 == cVar60);
      auVar107[1] = -(pcVar5[1] == cVar22);
      auVar107[2] = -(pcVar5[2] == cVar14);
      auVar107[3] = -(pcVar5[3] == cVar16);
      auVar107[4] = -(pcVar5[4] == cVar17);
      auVar107[5] = -(pcVar5[5] == cVar18);
      auVar107[6] = -(pcVar5[6] == cVar19);
      auVar107[7] = -(pcVar5[7] == cVar20);
      auVar107[8] = -(pcVar5[8] == cVar60);
      auVar107[9] = -(pcVar5[9] == cVar22);
      auVar107[10] = -(pcVar5[10] == cVar14);
      auVar107[0xb] = -(pcVar5[0xb] == cVar16);
      auVar107[0xc] = -(pcVar5[0xc] == cVar17);
      auVar107[0xd] = -(pcVar5[0xd] == cVar18);
      auVar107[0xe] = -(pcVar5[0xe] == cVar19);
      auVar107[0xf] = -(pcVar5[0xf] == cVar20);
      uVar129 = (ushort)(SUB161(auVar107 >> 7,0) & 1) | (ushort)(SUB161(auVar107 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar107 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar107 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar107 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar107 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar107 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar107 >> 0x3f,0) & 1) << 7;
      uVar62 = uVar129 | (ushort)(SUB161(auVar107 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar107 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar107 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar107 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar107 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar107 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar107 >> 0x77,0) & 1) << 0xe | (ushort)(auVar107[0xf] >> 7) << 0xf
      ;
      auVar108[0] = -(pcVar5[0x10] == cVar60);
      auVar108[1] = -(pcVar5[0x11] == cVar22);
      auVar108[2] = -(pcVar5[0x12] == cVar14);
      auVar108[3] = -(pcVar5[0x13] == cVar16);
      auVar108[4] = -(pcVar5[0x14] == cVar17);
      auVar108[5] = -(pcVar5[0x15] == cVar18);
      auVar108[6] = -(pcVar5[0x16] == cVar19);
      auVar108[7] = -(pcVar5[0x17] == cVar20);
      auVar108[8] = -(pcVar5[0x18] == cVar60);
      auVar108[9] = -(pcVar5[0x19] == cVar22);
      auVar108[10] = -(pcVar5[0x1a] == cVar14);
      auVar108[0xb] = -(pcVar5[0x1b] == cVar16);
      auVar108[0xc] = -(pcVar5[0x1c] == cVar17);
      auVar108[0xd] = -(pcVar5[0x1d] == cVar18);
      auVar108[0xe] = -(pcVar5[0x1e] == cVar19);
      auVar108[0xf] = -(pcVar5[0x1f] == cVar20);
      uVar132 = (ushort)(SUB161(auVar108 >> 7,0) & 1) | (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7;
      uVar135 = uVar132 | (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar108[0xf] >> 7) << 0xf;
      auVar109[0] = -(pcVar5[0x20] == cVar60);
      auVar109[1] = -(pcVar5[0x21] == cVar22);
      auVar109[2] = -(pcVar5[0x22] == cVar14);
      auVar109[3] = -(pcVar5[0x23] == cVar16);
      auVar109[4] = -(pcVar5[0x24] == cVar17);
      auVar109[5] = -(pcVar5[0x25] == cVar18);
      auVar109[6] = -(pcVar5[0x26] == cVar19);
      auVar109[7] = -(pcVar5[0x27] == cVar20);
      auVar109[8] = -(pcVar5[0x28] == cVar60);
      auVar109[9] = -(pcVar5[0x29] == cVar22);
      auVar109[10] = -(pcVar5[0x2a] == cVar14);
      auVar109[0xb] = -(pcVar5[0x2b] == cVar16);
      auVar109[0xc] = -(pcVar5[0x2c] == cVar17);
      auVar109[0xd] = -(pcVar5[0x2d] == cVar18);
      auVar109[0xe] = -(pcVar5[0x2e] == cVar19);
      auVar109[0xf] = -(pcVar5[0x2f] == cVar20);
      uVar138 = (ushort)(SUB161(auVar109 >> 7,0) & 1) | (ushort)(SUB161(auVar109 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar109 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar109 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar109 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar109 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar109 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar109 >> 0x3f,0) & 1) << 7;
      uVar140 = uVar138 | (ushort)(SUB161(auVar109 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar109 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar109 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar109 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar109 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar109 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar109 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar109[0xf] >> 7) << 0xf;
      auVar110[0] = -(pcVar5[0x30] == cVar60);
      auVar110[1] = -(pcVar5[0x31] == cVar22);
      auVar110[2] = -(pcVar5[0x32] == cVar14);
      auVar110[3] = -(pcVar5[0x33] == cVar16);
      auVar110[4] = -(pcVar5[0x34] == cVar17);
      auVar110[5] = -(pcVar5[0x35] == cVar18);
      auVar110[6] = -(pcVar5[0x36] == cVar19);
      auVar110[7] = -(pcVar5[0x37] == cVar20);
      auVar110[8] = -(pcVar5[0x38] == cVar60);
      auVar110[9] = -(pcVar5[0x39] == cVar22);
      auVar110[10] = -(pcVar5[0x3a] == cVar14);
      auVar110[0xb] = -(pcVar5[0x3b] == cVar16);
      auVar110[0xc] = -(pcVar5[0x3c] == cVar17);
      auVar110[0xd] = -(pcVar5[0x3d] == cVar18);
      auVar110[0xe] = -(pcVar5[0x3e] == cVar19);
      auVar110[0xf] = -(pcVar5[0x3f] == cVar20);
      uVar141 = (ushort)(SUB161(auVar110 >> 7,0) & 1) | (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7;
      uVar143 = uVar141 | (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar110[0xf] >> 7) << 0xf;
      auVar160._0_2_ = uVar62 >> 1;
      auVar160._2_2_ = uVar135 >> 1;
      auVar160._4_2_ = uVar140 >> 1;
      auVar160._6_2_ = uVar143 >> 1;
      auVar160._8_8_ = 0;
      auVar160 = auVar160 & _DAT_001829c0;
      uVar62 = CONCAT11((char)(uVar62 >> 8) - auVar160[1],(char)uVar129 - auVar160[0]);
      uVar63 = CONCAT13((char)(uVar135 >> 8) - auVar160[3],
                        CONCAT12((char)uVar132 - auVar160[2],uVar62));
      uVar64 = CONCAT15((char)(uVar140 >> 8) - auVar160[5],
                        CONCAT14((char)uVar138 - auVar160[4],uVar63));
      uVar66 = CONCAT17((char)(uVar143 >> 8) - auVar160[7],
                        CONCAT16((char)uVar141 - auVar160[6],uVar64));
      auVar72._0_10_ = CONCAT19(-auVar160[9],CONCAT18(-auVar160[8],uVar66));
      auVar72[10] = -auVar160[10];
      auVar72[0xb] = -auVar160[0xb];
      auVar78[0xc] = -auVar160[0xc];
      auVar78._0_12_ = auVar72;
      auVar78[0xd] = -auVar160[0xd];
      auVar111[0xe] = -auVar160[0xe];
      auVar111._0_14_ = auVar78;
      auVar111[0xf] = -auVar160[0xf];
      auVar43 = auVar111 & _DAT_001837f0;
      auVar112._0_2_ = uVar62 >> 2;
      auVar112._2_2_ = (ushort)((uint)uVar63 >> 0x12);
      auVar112._4_2_ = (ushort)((uint6)uVar64 >> 0x22);
      auVar112._6_2_ = (ushort)((ulonglong)uVar66 >> 0x32);
      auVar112._8_2_ = (ushort)((unkuint10)auVar72._0_10_ >> 0x42);
      auVar112._10_2_ = auVar72._10_2_ >> 2;
      auVar112._12_2_ = auVar78._12_2_ >> 2;
      auVar112._14_2_ = auVar111._14_2_ >> 2;
      auVar112 = auVar112 & _DAT_001837f0;
      cVar61 = auVar112[0] + auVar43[0];
      bVar127 = auVar112[1] + auVar43[1];
      uVar62 = CONCAT11(bVar127,cVar61);
      cVar128 = auVar112[2] + auVar43[2];
      bVar130 = auVar112[3] + auVar43[3];
      uVar63 = CONCAT13(bVar130,CONCAT12(cVar128,uVar62));
      cVar131 = auVar112[4] + auVar43[4];
      bVar133 = auVar112[5] + auVar43[5];
      uVar64 = CONCAT15(bVar133,CONCAT14(cVar131,uVar63));
      cVar134 = auVar112[6] + auVar43[6];
      bVar136 = auVar112[7] + auVar43[7];
      uVar66 = CONCAT17(bVar136,CONCAT16(cVar134,uVar64));
      cVar137 = auVar112[8] + auVar43[8];
      bVar139 = auVar112[9] + auVar43[9];
      auVar73._0_10_ = CONCAT19(bVar139,CONCAT18(cVar137,uVar66));
      auVar73[10] = auVar112[10] + auVar43[10];
      auVar73[0xb] = auVar112[0xb] + auVar43[0xb];
      auVar79[0xc] = auVar112[0xc] + auVar43[0xc];
      auVar79._0_12_ = auVar73;
      auVar79[0xd] = auVar112[0xd] + auVar43[0xd];
      auVar113[0xe] = auVar112[0xe] + auVar43[0xe];
      auVar113._0_14_ = auVar79;
      auVar113[0xf] = auVar112[0xf] + auVar43[0xf];
      auVar161[0] = (char)(uVar62 >> 4) + cVar61;
      auVar161[1] = (bVar127 >> 4) + bVar127;
      auVar161[2] = (char)((uint)uVar63 >> 0x14) + cVar128;
      auVar161[3] = (bVar130 >> 4) + bVar130;
      auVar161[4] = (char)((uint6)uVar64 >> 0x24) + cVar131;
      auVar161[5] = (bVar133 >> 4) + bVar133;
      auVar161[6] = (char)((ulonglong)uVar66 >> 0x34) + cVar134;
      auVar161[7] = (bVar136 >> 4) + bVar136;
      auVar161[8] = (char)((unkuint10)auVar73._0_10_ >> 0x44) + cVar137;
      auVar161[9] = (bVar139 >> 4) + bVar139;
      auVar161[10] = (char)(auVar73._10_2_ >> 4) + auVar73[10];
      auVar161[0xb] = (auVar73[0xb] >> 4) + auVar73[0xb];
      auVar161[0xc] = (char)(auVar79._12_2_ >> 4) + auVar79[0xc];
      auVar161[0xd] = (auVar79[0xd] >> 4) + auVar79[0xd];
      auVar161[0xe] = (char)(auVar113._14_2_ >> 4) + auVar113[0xe];
      auVar161[0xf] = (auVar113[0xf] >> 4) + auVar113[0xf];
      auVar161 = auVar161 & _DAT_001827d0;
      auVar43 = psllw(auVar161,8);
      cVar61 = auVar43[1] + auVar161[1];
      auVar1._1_14_ = auVar43._2_14_;
      auVar1[0] = cVar61;
      bVar127 = auVar43[3] + auVar161[3];
      bVar130 = auVar43[5] + auVar161[5];
      bVar133 = auVar43[7] + auVar161[7];
      bVar136 = auVar43[9] + auVar161[9];
      bVar139 = auVar43[0xb] + auVar161[0xb];
      bVar142 = auVar43[0xd] + auVar161[0xd];
      bVar144 = auVar43[0xf] + auVar161[0xf];
      uVar62 = auVar1._0_2_ & 0xff;
      uVar129 = (ushort)(((uint)bVar127 << 0x18) >> 0x18);
      uVar132 = (ushort)(((uint6)bVar130 << 0x28) >> 0x28);
      uVar135 = (ushort)(((ulonglong)bVar133 << 0x38) >> 0x38);
      uVar138 = (ushort)((uint3)((uint3)bVar136 << 0x10) >> 0x10);
      uVar140 = (ushort)(((uint5)bVar139 << 0x20) >> 0x20);
      uVar141 = (ushort)(((uint7)bVar142 << 0x30) >> 0x30);
      uVar143 = (ushort)((uint3)((uint3)bVar144 << 0x10) >> 0x10);
      uVar65 = CONCAT16((uVar141 != 0) * (uVar141 < 0x100) * bVar142 - (0xff < uVar141),
                        CONCAT15((uVar140 != 0) * (uVar140 < 0x100) * bVar139 - (0xff < uVar140),
                                 CONCAT14((uVar138 != 0) * (uVar138 < 0x100) * bVar136 -
                                          (0xff < uVar138),
                                          CONCAT13((uVar135 != 0) * (uVar135 < 0x100) * bVar133 -
                                                   (0xff < uVar135),
                                                   CONCAT12((uVar132 != 0) * (uVar132 < 0x100) *
                                                            bVar130 - (0xff < uVar132),
                                                            CONCAT11((uVar129 != 0) *
                                                                     (uVar129 < 0x100) * bVar127 -
                                                                     (0xff < uVar129),
                                                                     (uVar62 != 0) *
                                                                     (uVar62 < 0x100) * cVar61 -
                                                                     (0xff < uVar62)))))));
      auVar114._0_8_ = (ulonglong)uVar65 & 0xffffffff;
      auVar114._8_4_ =
           (int)(CONCAT17((uVar143 != 0) * (uVar143 < 0x100) * bVar144 - (0xff < uVar143),uVar65) >>
                0x20);
      auVar114._12_4_ = 0;
      auVar43 = psadbw(auVar114,(undefined1  [16])0x0);
      lVar3 = lVar3 + auVar43._0_8_;
      pcVar5 = pcVar5 + 0x40;
    } while (pcVar5 <= param_3 + -0x40);
  }
  for (; pcVar5 <= param_3 + -0x10; pcVar5 = pcVar5 + 0x10) {
    auVar23[0] = -(*pcVar5 == cVar60);
    auVar23[1] = -(pcVar5[1] == cVar22);
    auVar23[2] = -(pcVar5[2] == cVar14);
    auVar23[3] = -(pcVar5[3] == cVar16);
    auVar23[4] = -(pcVar5[4] == cVar17);
    auVar23[5] = -(pcVar5[5] == cVar18);
    auVar23[6] = -(pcVar5[6] == cVar19);
    auVar23[7] = -(pcVar5[7] == cVar20);
    auVar23[8] = -(pcVar5[8] == cVar60);
    auVar23[9] = -(pcVar5[9] == cVar22);
    auVar23[10] = -(pcVar5[10] == cVar14);
    auVar23[0xb] = -(pcVar5[0xb] == cVar16);
    auVar23[0xc] = -(pcVar5[0xc] == cVar17);
    auVar23[0xd] = -(pcVar5[0xd] == cVar18);
    auVar23[0xe] = -(pcVar5[0xe] == cVar19);
    auVar23[0xf] = -(pcVar5[0xf] == cVar20);
    uVar62 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
    uVar6 = (uint)uVar62 - (uVar62 >> 1 & 0x5555);
    uVar6 = (uVar6 >> 2 & 0x3333) + (uVar6 & 0x3333);
    uVar6 = (uVar6 >> 4) + uVar6 & 0xf0f;
    lVar3 = lVar3 + (ulonglong)((uVar6 >> 8) + uVar6 & 0xff);
  }
  if (param_3 <= pcVar5) {
    return lVar3;
  }
  uVar8 = (longlong)param_3 - (longlong)pcVar5;
  if (uVar8 < 4) {
    lVar21 = 0;
    pcVar4 = pcVar5;
  }
  else {
    uVar9 = uVar8 & 0xfffffffffffffffc;
    pcVar4 = pcVar5 + uVar9;
    lVar21 = 0;
    lVar24 = 0;
    uVar2 = 0;
    lVar25 = 0;
    lVar26 = 0;
    do {
      auVar46[0] = -((char)*(undefined2 *)(pcVar5 + uVar2) == cVar7);
      cVar60 = -((char)((ushort)*(undefined2 *)(pcVar5 + uVar2) >> 8) == cVar7);
      auVar52._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar28._0_10_ = CONCAT19(0xff,auVar52._0_9_);
      auVar28[10] = 0xff;
      auVar30[0xb] = 0xff;
      auVar30._0_11_ = auVar28;
      auVar32[0xc] = 0xff;
      auVar32._0_12_ = auVar30;
      auVar57[0xd] = 0xff;
      auVar57._0_13_ = auVar32;
      auVar57[0xe] = 0xff;
      auVar57[0xf] = 0xff;
      auVar56._14_2_ = auVar57._14_2_;
      auVar56[0xd] = 0xff;
      auVar56._0_13_ = auVar32;
      auVar55._13_3_ = auVar56._13_3_;
      auVar55[0xc] = 0xff;
      auVar55._0_12_ = auVar30;
      auVar54._12_4_ = auVar55._12_4_;
      auVar54[0xb] = 0xff;
      auVar54._0_11_ = auVar28;
      auVar53._11_5_ = auVar54._11_5_;
      auVar53[10] = 0xff;
      auVar53._0_10_ = auVar28._0_10_;
      auVar52._10_6_ = auVar53._10_6_;
      auVar52[9] = 0xff;
      auVar51._9_7_ = auVar52._9_7_;
      auVar51[8] = 0xff;
      auVar51._0_8_ = 0xff00000000000000;
      auVar50._8_8_ = auVar51._8_8_;
      auVar50._0_8_ = 0xff00000000000000;
      auVar49._7_9_ = auVar50._7_9_;
      auVar49._0_7_ = 0xff000000000000;
      auVar48._6_10_ = auVar49._6_10_;
      auVar48._0_6_ = 0xff0000000000;
      auVar47._5_11_ = auVar48._5_11_;
      auVar47._0_5_ = 0xff00000000;
      auVar46._4_12_ = auVar47._4_12_;
      auVar46[3] = cVar60;
      auVar46[2] = cVar60;
      auVar46[1] = auVar46[0];
      auVar43 = pshuflw(auVar46,auVar46,0xd4);
      auVar58._12_4_ = auVar43._12_4_;
      auVar58._0_8_ = auVar43._0_8_;
      auVar58._8_4_ = auVar43._4_4_;
      auVar58 = auVar58 & _DAT_00184640;
      lVar25 = lVar25 + auVar58._0_8_;
      lVar26 = lVar26 + auVar58._8_8_;
      auVar115[0] = -((char)*(undefined2 *)(pcVar5 + uVar2 + 2) == cVar7);
      cVar60 = -((char)((ushort)*(undefined2 *)(pcVar5 + uVar2 + 2) >> 8) == cVar7);
      auVar121._0_9_ = CONCAT18(0xff,0xff00000000000000);
      auVar69._0_10_ = CONCAT19(0xff,auVar121._0_9_);
      auVar69[10] = 0xff;
      auVar74[0xb] = 0xff;
      auVar74._0_11_ = auVar69;
      auVar77[0xc] = 0xff;
      auVar77._0_12_ = auVar74;
      auVar126[0xd] = 0xff;
      auVar126._0_13_ = auVar77;
      auVar126[0xe] = 0xff;
      auVar126[0xf] = 0xff;
      auVar125._14_2_ = auVar126._14_2_;
      auVar125[0xd] = 0xff;
      auVar125._0_13_ = auVar77;
      auVar124._13_3_ = auVar125._13_3_;
      auVar124[0xc] = 0xff;
      auVar124._0_12_ = auVar74;
      auVar123._12_4_ = auVar124._12_4_;
      auVar123[0xb] = 0xff;
      auVar123._0_11_ = auVar69;
      auVar122._11_5_ = auVar123._11_5_;
      auVar122[10] = 0xff;
      auVar122._0_10_ = auVar69._0_10_;
      auVar121._10_6_ = auVar122._10_6_;
      auVar121[9] = 0xff;
      auVar120._9_7_ = auVar121._9_7_;
      auVar120[8] = 0xff;
      auVar120._0_8_ = 0xff00000000000000;
      auVar119._8_8_ = auVar120._8_8_;
      auVar119._0_8_ = 0xff00000000000000;
      auVar118._7_9_ = auVar119._7_9_;
      auVar118._0_7_ = 0xff000000000000;
      auVar117._6_10_ = auVar118._6_10_;
      auVar117._0_6_ = 0xff0000000000;
      auVar116._5_11_ = auVar117._5_11_;
      auVar116._0_5_ = 0xff00000000;
      auVar115._4_12_ = auVar116._4_12_;
      auVar115[3] = cVar60;
      auVar115[2] = cVar60;
      auVar115[1] = auVar115[0];
      auVar43 = pshuflw(auVar58,auVar115,0xd4);
      auVar59._12_4_ = auVar43._12_4_;
      auVar59._0_8_ = auVar43._0_8_;
      auVar59._8_4_ = auVar43._4_4_;
      lVar21 = lVar21 + SUB168(auVar59 & _DAT_00184640,0);
      lVar24 = lVar24 + SUB168(auVar59 & _DAT_00184640,8);
      uVar2 = uVar2 + 4;
    } while (uVar9 != uVar2);
    lVar21 = lVar24 + lVar26 + lVar21 + lVar25;
    if (uVar8 == uVar9) goto LAB_007243f3;
  }
  do {
    lVar21 = lVar21 + (ulonglong)(*pcVar4 == cVar7);
    pcVar4 = pcVar4 + 1;
  } while (pcVar4 != param_3);
LAB_007243f3:
  return lVar21 + lVar3;
}


