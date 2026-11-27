// 006b2bc0 te_is_trailers

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hyper[c4782d5b5c5e3493]::headers::te_is_trailers */

undefined8 __rustcall hyper[c4782d5b5c5e3493]::headers::te_is_trailers(undefined8 param_1)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char *pcVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_R13;
  ulonglong unaff_R15;
  bool bVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_00;
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
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar43 [16];
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
  byte bVar67;
  undefined1 auVar68 [16];
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
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  char cVar90;
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar95;
  char cVar96;
  char cVar97;
  char cVar98;
  char cVar99;
  char cVar100;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar105;
  char cVar106;
  char cVar107;
  char cVar108;
  char cVar109;
  char cVar110;
  char cVar111;
  char cVar112;
  char cVar113;
  char cVar114;
  char cVar115;
  char cVar116;
  byte bVar117;
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
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
  char cVar133;
  char cVar134;
  char cVar135;
  char cVar136;
  char cVar137;
  char cVar138;
  char cVar139;
  char cVar140;
  char cVar141;
  char cVar142;
  char cVar143;
  char cVar144;
  char cVar145;
  char cVar146;
  char cVar147;
  char cVar148;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined8 local_98;
  ulonglong uStack_90;
  char *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined2 local_58;
  int local_48 [2];
  ulonglong local_40;
  longlong local_38;
  
  local_88 = _DAT_0018d010;
  uStack_80 = _UNK_0018d018;
  local_98 = _DAT_0018d000;
  uStack_90 = _UNK_0018d008;
  auVar150._0_8_ =
       <http[56314f485c23ccf6]::header::map::HeaderMap>::get_all::
       <http[56314f485c23ccf6]::header::name::HeaderName>(local_48,param_1,&local_98);
  auVar150._8_8_ = extraout_XMM0_Qb;
  if (local_48[0] == 1) {
    if (*(ulonglong *)(local_38 + 0x28) <= local_40) {
LAB_006b30b5:
      (*(code *)PTR_panic_bounds_check_00799520)
                (auVar150._0_8_,&anon_c85774d12d9bb44050bb90c192981910_52_llvm_14911046455123227422)
      ;
      pcVar3 = (code *)swi(3);
      auVar150._0_8_ = (*pcVar3)();
      return auVar150._0_8_;
    }
    bVar15 = (*(byte *)(*(longlong *)(local_38 + 0x20) + local_40 * 0x68) & 1) == 0;
    if (!bVar15) {
      unaff_R13 = *(ulonglong *)(*(longlong *)(local_38 + 0x20) + local_40 * 0x68 + 0x10);
    }
    cVar11 = !bVar15;
    cVar10 = '\0';
    uVar13 = local_40;
  }
  else {
    uVar13 = 0xffffffffffffffff;
    cVar11 = '\x02';
    cVar10 = '\x02';
  }
  auVar149 = _DAT_00183cf0;
  bVar69 = DAT_00183660;
  bVar70 = UNK_00183661;
  bVar71 = UNK_00183662;
  bVar72 = UNK_00183663;
  bVar73 = UNK_00183664;
  bVar74 = UNK_00183665;
  bVar75 = UNK_00183666;
  bVar76 = UNK_00183667;
  bVar77 = UNK_00183668;
  bVar78 = UNK_00183669;
  bVar79 = UNK_0018366a;
  bVar80 = UNK_0018366b;
  bVar81 = UNK_0018366c;
  bVar82 = UNK_0018366d;
  bVar83 = UNK_0018366e;
  bVar84 = UNK_0018366f;
  cVar85 = s__00184760[0];
  cVar86 = s__00184760[1];
  cVar87 = s__00184760[2];
  cVar88 = s__00184760[3];
  cVar89 = s__00184760[4];
  cVar90 = s__00184760[5];
  cVar91 = s__00184760[6];
  cVar92 = s__00184760[7];
  cVar93 = s__00184760[8];
  cVar94 = UNK_00184769;
  cVar95 = UNK_0018476a;
  cVar96 = UNK_0018476b;
  cVar97 = UNK_0018476c;
  cVar98 = UNK_0018476d;
  cVar99 = UNK_0018476e;
  cVar100 = UNK_0018476f;
  cVar101 = DAT_001831d0;
  cVar102 = UNK_001831d1;
  cVar103 = UNK_001831d2;
  cVar104 = UNK_001831d3;
  cVar105 = UNK_001831d4;
  cVar106 = UNK_001831d5;
  cVar107 = UNK_001831d6;
  cVar108 = UNK_001831d7;
  cVar109 = UNK_001831d8;
  cVar110 = UNK_001831d9;
  cVar111 = UNK_001831da;
  cVar112 = UNK_001831db;
  cVar113 = UNK_001831dc;
  cVar114 = UNK_001831dd;
  cVar115 = UNK_001831de;
  cVar116 = UNK_001831df;
  bVar117 = DAT_00182f40;
  bVar118 = UNK_00182f41;
  bVar119 = UNK_00182f42;
  bVar120 = UNK_00182f43;
  bVar121 = UNK_00182f44;
  bVar122 = UNK_00182f45;
  bVar123 = UNK_00182f46;
  bVar124 = UNK_00182f47;
  bVar125 = UNK_00182f48;
  bVar126 = UNK_00182f49;
  bVar127 = UNK_00182f4a;
  bVar128 = UNK_00182f4b;
  bVar129 = UNK_00182f4c;
  bVar130 = UNK_00182f4d;
  bVar131 = UNK_00182f4e;
  bVar132 = UNK_00182f4f;
  cVar133 = DAT_00183900;
  cVar134 = UNK_00183901;
  cVar135 = UNK_00183902;
  cVar136 = UNK_00183903;
  cVar137 = UNK_00183904;
  cVar138 = UNK_00183905;
  cVar139 = UNK_00183906;
  cVar140 = UNK_00183907;
  cVar141 = UNK_00183908;
  cVar142 = UNK_00183909;
  cVar143 = UNK_0018390a;
  cVar144 = UNK_0018390b;
  cVar145 = UNK_0018390c;
  cVar146 = UNK_0018390d;
  cVar147 = UNK_0018390e;
  cVar148 = UNK_0018390f;
  do {
    if (cVar10 == '\0') {
      if (*(ulonglong *)(local_38 + 0x28) <= uVar13) {
LAB_006b3094:
        auVar150._0_8_ =
             (*(code *)PTR_panic_bounds_check_00799520)
                       (auVar150._0_8_,
                        &anon_9036e64db263aa0aa2a972d6d60b9936_26_llvm_9907365231172608471);
        goto LAB_006b30a5;
      }
      pcVar12 = (char *)(*(longlong *)(local_38 + 0x20) + uVar13 * 0x68);
      if (cVar11 == '\0') {
        cVar11 = '\x02';
        cVar10 = '\x02';
      }
      else {
        if (*pcVar12 == '\0') {
          auVar150._0_8_ =
               (*(code *)PTR_panic_00799338)
                         (auVar150._0_8_,
                          &anon_9036e64db263aa0aa2a972d6d60b9936_28_llvm_9907365231172608471);
          goto LAB_006b3094;
        }
        unaff_R15 = *(ulonglong *)(pcVar12 + 8);
        cVar10 = '\x01';
      }
      pcVar8 = *(char **)(pcVar12 + 0x20);
      uVar6 = *(ulonglong *)(pcVar12 + 0x28);
      if (uVar6 != 0) goto LAB_006b2db7;
      goto LAB_006b2f20;
    }
    if (cVar10 == '\x02') {
      return 0;
    }
    if (*(ulonglong *)(local_38 + 0x40) <= unaff_R15) {
LAB_006b30a5:
      auVar150._0_8_ =
           (*(code *)PTR_panic_bounds_check_00799520)
                     (auVar150._0_8_,
                      &anon_9036e64db263aa0aa2a972d6d60b9936_29_llvm_9907365231172608471);
      goto LAB_006b30b5;
    }
    lVar5 = unaff_R15 * 0x48 + *(longlong *)(local_38 + 0x38);
    if (((cVar11 == '\x02') || (cVar10 != cVar11)) || (unaff_R15 != unaff_R13)) {
      cVar10 = '\x02';
      if (*(int *)(lVar5 + 0x10) == 1) {
        unaff_R15 = *(ulonglong *)(lVar5 + 0x18);
        cVar10 = '\x01';
      }
    }
    else {
      cVar11 = '\x02';
      unaff_R15 = unaff_R13;
      cVar10 = '\x02';
    }
    pcVar8 = *(char **)(lVar5 + 0x28);
    uVar6 = *(ulonglong *)(lVar5 + 0x30);
    if (uVar6 == 0) goto LAB_006b2f20;
LAB_006b2db7:
    if (uVar6 < 8) {
      bVar15 = false;
      pcVar12 = pcVar8;
LAB_006b2ee1:
      do {
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        bVar15 = (bool)(bVar15 | (cVar2 != '\t' && (byte)(cVar2 + 0x81U) < 0xa1));
      } while (pcVar12 != pcVar8 + uVar6);
    }
    else if (uVar6 < 0x20) {
      uVar9 = 0;
      bVar15 = false;
LAB_006b2e6e:
      uVar14 = uVar6 & 0xfffffffffffffff8;
      pcVar12 = pcVar8 + uVar14;
      auVar16 = ZEXT116(bVar15);
      do {
        auVar150._0_8_ = *(undefined8 *)(pcVar8 + uVar9);
        bVar26 = (char)auVar150._0_8_ + auVar149[0];
        cVar29 = (char)((ulonglong)auVar150._0_8_ >> 8);
        bVar28 = cVar29 + auVar149[1];
        cVar31 = (char)((ulonglong)auVar150._0_8_ >> 0x10);
        bVar30 = cVar31 + auVar149[2];
        cVar33 = (char)((ulonglong)auVar150._0_8_ >> 0x18);
        bVar32 = cVar33 + auVar149[3];
        cVar35 = (char)((ulonglong)auVar150._0_8_ >> 0x20);
        bVar34 = cVar35 + auVar149[4];
        cVar37 = (char)((ulonglong)auVar150._0_8_ >> 0x28);
        bVar36 = cVar37 + auVar149[5];
        cVar39 = (char)((ulonglong)auVar150._0_8_ >> 0x30);
        cVar2 = (char)((ulonglong)auVar150._0_8_ >> 0x38);
        bVar38 = cVar39 + auVar149[6];
        bVar40 = cVar2 + auVar149[7];
        bVar44 = auVar149[8];
        bVar45 = auVar149[9];
        bVar46 = auVar149[10];
        bVar47 = auVar149[0xb];
        bVar48 = auVar149[0xc];
        bVar49 = auVar149[0xd];
        bVar50 = auVar149[0xe];
        bVar51 = auVar149[0xf];
        auVar42[0] = -((byte)((bVar26 < bVar69) * bVar69 | (bVar26 >= bVar69) * bVar26) == bVar26);
        auVar42[1] = -((byte)((bVar28 < bVar70) * bVar70 | (bVar28 >= bVar70) * bVar28) == bVar28);
        auVar42[2] = -((byte)((bVar30 < bVar71) * bVar71 | (bVar30 >= bVar71) * bVar30) == bVar30);
        auVar42[3] = -((byte)((bVar32 < bVar72) * bVar72 | (bVar32 >= bVar72) * bVar32) == bVar32);
        auVar42[4] = -((byte)((bVar34 < bVar73) * bVar73 | (bVar34 >= bVar73) * bVar34) == bVar34);
        auVar42[5] = -((byte)((bVar36 < bVar74) * bVar74 | (bVar36 >= bVar74) * bVar36) == bVar36);
        auVar42[6] = -((byte)((bVar38 < bVar75) * bVar75 | (bVar38 >= bVar75) * bVar38) == bVar38);
        auVar42[7] = -((byte)((bVar40 < bVar76) * bVar76 | (bVar40 >= bVar76) * bVar40) == bVar40);
        auVar42[8] = -((byte)((bVar44 < bVar77) * bVar77 | (bVar44 >= bVar77) * bVar44) == bVar44);
        auVar42[9] = -((byte)((bVar45 < bVar78) * bVar78 | (bVar45 >= bVar78) * bVar45) == bVar45);
        auVar42[10] = -((byte)((bVar46 < bVar79) * bVar79 | (bVar46 >= bVar79) * bVar46) == bVar46);
        auVar42[0xb] = -((byte)((bVar47 < bVar80) * bVar80 | (bVar47 >= bVar80) * bVar47) == bVar47)
        ;
        auVar42[0xc] = -((byte)((bVar48 < bVar81) * bVar81 | (bVar48 >= bVar81) * bVar48) == bVar48)
        ;
        auVar42[0xd] = -((byte)((bVar49 < bVar82) * bVar82 | (bVar49 >= bVar82) * bVar49) == bVar49)
        ;
        auVar42[0xe] = -((byte)((bVar50 < bVar83) * bVar83 | (bVar50 >= bVar83) * bVar50) == bVar50)
        ;
        auVar42[0xf] = -((byte)((bVar51 < bVar84) * bVar84 | (bVar51 >= bVar84) * bVar51) == bVar51)
        ;
        auVar17[0] = -((char)auVar150._0_8_ == cVar85);
        auVar17[1] = -(cVar29 == cVar86);
        auVar17[2] = -(cVar31 == cVar87);
        auVar17[3] = -(cVar33 == cVar88);
        auVar17[4] = -(cVar35 == cVar89);
        auVar17[5] = -(cVar37 == cVar90);
        auVar17[6] = -(cVar39 == cVar91);
        auVar17[7] = -(cVar2 == cVar92);
        auVar17[8] = -(cVar93 == '\0');
        auVar17[9] = -(cVar94 == '\0');
        auVar17[10] = -(cVar95 == '\0');
        auVar17[0xb] = -(cVar96 == '\0');
        auVar17[0xc] = -(cVar97 == '\0');
        auVar17[0xd] = -(cVar98 == '\0');
        auVar17[0xe] = -(cVar99 == '\0');
        auVar17[0xf] = -(cVar100 == '\0');
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
        auVar4._8_4_ = 0xffffffff;
        auVar4._0_8_ = 0xffffffffffffffff;
        auVar4._12_4_ = 0xffffffff;
        auVar16 = auVar16 | auVar18 ^ auVar4;
        uVar9 = uVar9 + 8;
      } while (uVar14 != uVar9);
      auVar150 = psllw(auVar16,7);
      bVar15 = (((((((SUB161(auVar150 >> 7,0) & 1) != 0 || (SUB161(auVar150 >> 0x17,0) & 1) != 0) ||
                   (SUB161(auVar150 >> 0x27,0) & 1) != 0) || (SUB161(auVar150 >> 0x37,0) & 1) != 0)
                 || (SUB161(auVar150 >> 0x47,0) & 1) != 0) || (SUB161(auVar150 >> 0x57,0) & 1) != 0)
               || (SUB161(auVar150 >> 0x67,0) & 1) != 0) || (SUB161(auVar150 >> 0x77,0) & 1) != 0;
      if (uVar6 != uVar14) goto LAB_006b2ee1;
    }
    else {
      uVar9 = uVar6 & 0xffffffffffffffe0;
      auVar150 = (undefined1  [16])0x0;
      uVar14 = 0;
      auVar16 = (undefined1  [16])0x0;
      do {
        pcVar12 = pcVar8 + uVar14;
        pcVar1 = pcVar8 + uVar14 + 0x10;
        bVar26 = *pcVar12 + cVar101;
        bVar28 = pcVar12[1] + cVar102;
        bVar30 = pcVar12[2] + cVar103;
        bVar32 = pcVar12[3] + cVar104;
        bVar34 = pcVar12[4] + cVar105;
        bVar36 = pcVar12[5] + cVar106;
        bVar38 = pcVar12[6] + cVar107;
        bVar40 = pcVar12[7] + cVar108;
        bVar44 = pcVar12[8] + cVar109;
        bVar45 = pcVar12[9] + cVar110;
        bVar46 = pcVar12[10] + cVar111;
        bVar47 = pcVar12[0xb] + cVar112;
        bVar48 = pcVar12[0xc] + cVar113;
        bVar49 = pcVar12[0xd] + cVar114;
        bVar50 = pcVar12[0xe] + cVar115;
        bVar51 = pcVar12[0xf] + cVar116;
        bVar52 = *pcVar1 + cVar101;
        bVar53 = pcVar1[1] + cVar102;
        bVar54 = pcVar1[2] + cVar103;
        bVar55 = pcVar1[3] + cVar104;
        bVar56 = pcVar1[4] + cVar105;
        bVar57 = pcVar1[5] + cVar106;
        bVar58 = pcVar1[6] + cVar107;
        bVar59 = pcVar1[7] + cVar108;
        bVar60 = pcVar1[8] + cVar109;
        bVar61 = pcVar1[9] + cVar110;
        bVar62 = pcVar1[10] + cVar111;
        bVar63 = pcVar1[0xb] + cVar112;
        bVar64 = pcVar1[0xc] + cVar113;
        bVar65 = pcVar1[0xd] + cVar114;
        bVar66 = pcVar1[0xe] + cVar115;
        bVar67 = pcVar1[0xf] + cVar116;
        auVar68[0] = -((byte)((bVar117 < bVar26) * bVar117 | (bVar117 >= bVar26) * bVar26) == bVar26
                      );
        auVar68[1] = -((byte)((bVar118 < bVar28) * bVar118 | (bVar118 >= bVar28) * bVar28) == bVar28
                      );
        auVar68[2] = -((byte)((bVar119 < bVar30) * bVar119 | (bVar119 >= bVar30) * bVar30) == bVar30
                      );
        auVar68[3] = -((byte)((bVar120 < bVar32) * bVar120 | (bVar120 >= bVar32) * bVar32) == bVar32
                      );
        auVar68[4] = -((byte)((bVar121 < bVar34) * bVar121 | (bVar121 >= bVar34) * bVar34) == bVar34
                      );
        auVar68[5] = -((byte)((bVar122 < bVar36) * bVar122 | (bVar122 >= bVar36) * bVar36) == bVar36
                      );
        auVar68[6] = -((byte)((bVar123 < bVar38) * bVar123 | (bVar123 >= bVar38) * bVar38) == bVar38
                      );
        auVar68[7] = -((byte)((bVar124 < bVar40) * bVar124 | (bVar124 >= bVar40) * bVar40) == bVar40
                      );
        auVar68[8] = -((byte)((bVar125 < bVar44) * bVar125 | (bVar125 >= bVar44) * bVar44) == bVar44
                      );
        auVar68[9] = -((byte)((bVar126 < bVar45) * bVar126 | (bVar126 >= bVar45) * bVar45) == bVar45
                      );
        auVar68[10] = -((byte)((bVar127 < bVar46) * bVar127 | (bVar127 >= bVar46) * bVar46) ==
                       bVar46);
        auVar68[0xb] = -((byte)((bVar128 < bVar47) * bVar128 | (bVar128 >= bVar47) * bVar47) ==
                        bVar47);
        auVar68[0xc] = -((byte)((bVar129 < bVar48) * bVar129 | (bVar129 >= bVar48) * bVar48) ==
                        bVar48);
        auVar68[0xd] = -((byte)((bVar130 < bVar49) * bVar130 | (bVar130 >= bVar49) * bVar49) ==
                        bVar49);
        auVar68[0xe] = -((byte)((bVar131 < bVar50) * bVar131 | (bVar131 >= bVar50) * bVar50) ==
                        bVar50);
        auVar68[0xf] = -((byte)((bVar132 < bVar51) * bVar132 | (bVar132 >= bVar51) * bVar51) ==
                        bVar51);
        auVar43[0] = -((byte)((bVar117 < bVar52) * bVar117 | (bVar117 >= bVar52) * bVar52) == bVar52
                      );
        auVar43[1] = -((byte)((bVar118 < bVar53) * bVar118 | (bVar118 >= bVar53) * bVar53) == bVar53
                      );
        auVar43[2] = -((byte)((bVar119 < bVar54) * bVar119 | (bVar119 >= bVar54) * bVar54) == bVar54
                      );
        auVar43[3] = -((byte)((bVar120 < bVar55) * bVar120 | (bVar120 >= bVar55) * bVar55) == bVar55
                      );
        auVar43[4] = -((byte)((bVar121 < bVar56) * bVar121 | (bVar121 >= bVar56) * bVar56) == bVar56
                      );
        auVar43[5] = -((byte)((bVar122 < bVar57) * bVar122 | (bVar122 >= bVar57) * bVar57) == bVar57
                      );
        auVar43[6] = -((byte)((bVar123 < bVar58) * bVar123 | (bVar123 >= bVar58) * bVar58) == bVar58
                      );
        auVar43[7] = -((byte)((bVar124 < bVar59) * bVar124 | (bVar124 >= bVar59) * bVar59) == bVar59
                      );
        auVar43[8] = -((byte)((bVar125 < bVar60) * bVar125 | (bVar125 >= bVar60) * bVar60) == bVar60
                      );
        auVar43[9] = -((byte)((bVar126 < bVar61) * bVar126 | (bVar126 >= bVar61) * bVar61) == bVar61
                      );
        auVar43[10] = -((byte)((bVar127 < bVar62) * bVar127 | (bVar127 >= bVar62) * bVar62) ==
                       bVar62);
        auVar43[0xb] = -((byte)((bVar128 < bVar63) * bVar128 | (bVar128 >= bVar63) * bVar63) ==
                        bVar63);
        auVar43[0xc] = -((byte)((bVar129 < bVar64) * bVar129 | (bVar129 >= bVar64) * bVar64) ==
                        bVar64);
        auVar43[0xd] = -((byte)((bVar130 < bVar65) * bVar130 | (bVar130 >= bVar65) * bVar65) ==
                        bVar65);
        auVar43[0xe] = -((byte)((bVar131 < bVar66) * bVar131 | (bVar131 >= bVar66) * bVar66) ==
                        bVar66);
        auVar43[0xf] = -((byte)((bVar132 < bVar67) * bVar132 | (bVar132 >= bVar67) * bVar67) ==
                        bVar67);
        auVar27[0] = -(*pcVar12 == cVar133);
        auVar27[1] = -(pcVar12[1] == cVar134);
        auVar27[2] = -(pcVar12[2] == cVar135);
        auVar27[3] = -(pcVar12[3] == cVar136);
        auVar27[4] = -(pcVar12[4] == cVar137);
        auVar27[5] = -(pcVar12[5] == cVar138);
        auVar27[6] = -(pcVar12[6] == cVar139);
        auVar27[7] = -(pcVar12[7] == cVar140);
        auVar27[8] = -(pcVar12[8] == cVar141);
        auVar27[9] = -(pcVar12[9] == cVar142);
        auVar27[10] = -(pcVar12[10] == cVar143);
        auVar27[0xb] = -(pcVar12[0xb] == cVar144);
        auVar27[0xc] = -(pcVar12[0xc] == cVar145);
        auVar27[0xd] = -(pcVar12[0xd] == cVar146);
        auVar27[0xe] = -(pcVar12[0xe] == cVar147);
        auVar27[0xf] = -(pcVar12[0xf] == cVar148);
        auVar16 = auVar16 | ~auVar27 & auVar68;
        auVar41[0] = -(*pcVar1 == cVar133);
        auVar41[1] = -(pcVar1[1] == cVar134);
        auVar41[2] = -(pcVar1[2] == cVar135);
        auVar41[3] = -(pcVar1[3] == cVar136);
        auVar41[4] = -(pcVar1[4] == cVar137);
        auVar41[5] = -(pcVar1[5] == cVar138);
        auVar41[6] = -(pcVar1[6] == cVar139);
        auVar41[7] = -(pcVar1[7] == cVar140);
        auVar41[8] = -(pcVar1[8] == cVar141);
        auVar41[9] = -(pcVar1[9] == cVar142);
        auVar41[10] = -(pcVar1[10] == cVar143);
        auVar41[0xb] = -(pcVar1[0xb] == cVar144);
        auVar41[0xc] = -(pcVar1[0xc] == cVar145);
        auVar41[0xd] = -(pcVar1[0xd] == cVar146);
        auVar41[0xe] = -(pcVar1[0xe] == cVar147);
        auVar41[0xf] = -(pcVar1[0xf] == cVar148);
        auVar150 = auVar150 | ~auVar41 & auVar43;
        uVar14 = uVar14 + 0x20;
      } while (uVar9 != uVar14);
      auVar150 = psllw(auVar150 | auVar16,7);
      bVar15 = (((((((((((((((SUB161(auVar150 >> 7,0) & 1) != 0 ||
                            (SUB161(auVar150 >> 0xf,0) & 1) != 0) ||
                           (SUB161(auVar150 >> 0x17,0) & 1) != 0) ||
                          (SUB161(auVar150 >> 0x1f,0) & 1) != 0) ||
                         (SUB161(auVar150 >> 0x27,0) & 1) != 0) ||
                        (SUB161(auVar150 >> 0x2f,0) & 1) != 0) ||
                       (SUB161(auVar150 >> 0x37,0) & 1) != 0) ||
                      (SUB161(auVar150 >> 0x3f,0) & 1) != 0) ||
                     (SUB161(auVar150 >> 0x47,0) & 1) != 0) || (SUB161(auVar150 >> 0x4f,0) & 1) != 0
                    ) || (SUB161(auVar150 >> 0x57,0) & 1) != 0) ||
                  (SUB161(auVar150 >> 0x5f,0) & 1) != 0) || (SUB161(auVar150 >> 0x67,0) & 1) != 0)
                || (SUB161(auVar150 >> 0x6f,0) & 1) != 0) || (SUB161(auVar150 >> 0x77,0) & 1) != 0)
               || auVar150[0xf] < '\0';
      if (uVar6 != uVar9) {
        if ((uVar6 & 0x18) == 0) {
          pcVar12 = pcVar8 + uVar9;
          goto LAB_006b2ee1;
        }
        goto LAB_006b2e6e;
      }
    }
    if (!bVar15) {
LAB_006b2f20:
      local_98 = 0;
      local_78 = 0;
      local_68 = 0x2c0000002c;
      local_60 = 1;
      local_58 = 1;
      uStack_90 = uVar6;
      local_88 = pcVar8;
      uStack_80 = uVar6;
      local_70 = uVar6;
      while( true ) {
        auVar149 = <core[c0acaeba6ab4c2e0]::str::iter::SplitInternal<char>>::next();
        auVar150._8_8_ = extraout_XMM0_Qb_00;
        auVar150._0_8_ = extraout_XMM0_Qa;
        if (auVar149._0_8_ == 0) break;
        auVar150 = ::<str>::trim_matches::<<char>::is_whitespace>(auVar149._0_8_,auVar149._8_8_);
        pbVar7 = auVar150._0_8_;
        if (((((auVar150._8_8_ == 8) &&
              ((byte)(((byte)(*pbVar7 + 0xbf) < 0x1a) << 5 | *pbVar7) == 0x74)) &&
             (((byte)(((byte)(pbVar7[1] + 0xbf) < 0x1a) << 5 | pbVar7[1]) == 0x72 &&
              (((byte)(((byte)(pbVar7[2] + 0xbf) < 0x1a) << 5 | pbVar7[2]) == 0x61 &&
               ((byte)(((byte)(pbVar7[3] + 0xbf) < 0x1a) << 5 | pbVar7[3]) == 0x69)))))) &&
            ((byte)(((byte)(pbVar7[4] + 0xbf) < 0x1a) << 5 | pbVar7[4]) == 0x6c)) &&
           ((((byte)(((byte)(pbVar7[5] + 0xbf) < 0x1a) << 5 | pbVar7[5]) == 0x65 &&
             ((byte)(((byte)(pbVar7[6] + 0xbf) < 0x1a) << 5 | pbVar7[6]) == 0x72)) &&
            ((byte)(((byte)(pbVar7[7] + 0xbf) < 0x1a) << 5 | pbVar7[7]) == 0x73)))) {
          return 1;
        }
      }
      auVar149 = _DAT_00183cf0;
      bVar69 = DAT_00183660;
      bVar70 = UNK_00183661;
      bVar71 = UNK_00183662;
      bVar72 = UNK_00183663;
      bVar73 = UNK_00183664;
      bVar74 = UNK_00183665;
      bVar75 = UNK_00183666;
      bVar76 = UNK_00183667;
      bVar77 = UNK_00183668;
      bVar78 = UNK_00183669;
      bVar79 = UNK_0018366a;
      bVar80 = UNK_0018366b;
      bVar81 = UNK_0018366c;
      bVar82 = UNK_0018366d;
      bVar83 = UNK_0018366e;
      bVar84 = UNK_0018366f;
      cVar85 = s__00184760[0];
      cVar86 = s__00184760[1];
      cVar87 = s__00184760[2];
      cVar88 = s__00184760[3];
      cVar89 = s__00184760[4];
      cVar90 = s__00184760[5];
      cVar91 = s__00184760[6];
      cVar92 = s__00184760[7];
      cVar93 = s__00184760[8];
      cVar94 = UNK_00184769;
      cVar95 = UNK_0018476a;
      cVar96 = UNK_0018476b;
      cVar97 = UNK_0018476c;
      cVar98 = UNK_0018476d;
      cVar99 = UNK_0018476e;
      cVar100 = UNK_0018476f;
      cVar101 = DAT_001831d0;
      cVar102 = UNK_001831d1;
      cVar103 = UNK_001831d2;
      cVar104 = UNK_001831d3;
      cVar105 = UNK_001831d4;
      cVar106 = UNK_001831d5;
      cVar107 = UNK_001831d6;
      cVar108 = UNK_001831d7;
      cVar109 = UNK_001831d8;
      cVar110 = UNK_001831d9;
      cVar111 = UNK_001831da;
      cVar112 = UNK_001831db;
      cVar113 = UNK_001831dc;
      cVar114 = UNK_001831dd;
      cVar115 = UNK_001831de;
      cVar116 = UNK_001831df;
      bVar117 = DAT_00182f40;
      bVar118 = UNK_00182f41;
      bVar119 = UNK_00182f42;
      bVar120 = UNK_00182f43;
      bVar121 = UNK_00182f44;
      bVar122 = UNK_00182f45;
      bVar123 = UNK_00182f46;
      bVar124 = UNK_00182f47;
      bVar125 = UNK_00182f48;
      bVar126 = UNK_00182f49;
      bVar127 = UNK_00182f4a;
      bVar128 = UNK_00182f4b;
      bVar129 = UNK_00182f4c;
      bVar130 = UNK_00182f4d;
      bVar131 = UNK_00182f4e;
      bVar132 = UNK_00182f4f;
      cVar133 = DAT_00183900;
      cVar134 = UNK_00183901;
      cVar135 = UNK_00183902;
      cVar136 = UNK_00183903;
      cVar137 = UNK_00183904;
      cVar138 = UNK_00183905;
      cVar139 = UNK_00183906;
      cVar140 = UNK_00183907;
      cVar141 = UNK_00183908;
      cVar142 = UNK_00183909;
      cVar143 = UNK_0018390a;
      cVar144 = UNK_0018390b;
      cVar145 = UNK_0018390c;
      cVar146 = UNK_0018390d;
      cVar147 = UNK_0018390e;
      cVar148 = UNK_0018390f;
    }
  } while( true );
}


