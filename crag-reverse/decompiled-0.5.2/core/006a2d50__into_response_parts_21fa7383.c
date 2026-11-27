// 006a2d50 into_response_parts

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <[(http[56314f485c23ccf6]::header::name::HeaderName, &str); 1usize] as
   axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>::into_response_parts
    */

undefined8 * __rustcall
<[(http[56314f485c23ccf6]::header::name::HeaderName,&str);1:usize]as_axum_core[61c49771464cda0a]::response::into_response_parts::IntoResponseParts>
::into_response_parts(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
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
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  ulonglong uVar54;
  byte *pbVar55;
  byte *pbVar56;
  ulonglong uVar57;
  bool bVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar71 [16];
  undefined1 auVar70 [16];
  undefined1 auVar69 [16];
  undefined1 auVar68 [16];
  undefined1 auVar67 [16];
  undefined1 auVar66 [16];
  undefined1 auVar65 [16];
  undefined1 auVar64 [16];
  byte bVar72;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 local_e1;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  char local_c0;
  undefined4 local_bf;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  byte *pbStack_a0;
  longlong local_98;
  longlong lStack_90;
  byte *local_88;
  ulonglong uStack_80;
  longlong local_78;
  byte *local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined4 local_37;
  
  local_b0 = 1;
  lVar12 = *param_2;
  pbVar13 = (byte *)param_2[1];
  lVar14 = param_2[2];
  lVar15 = param_2[3];
  local_88 = (byte *)param_2[4];
  uStack_80 = param_2[5];
  local_b8 = 1;
  if (local_88 == (byte *)0x0) goto LAB_006a303c;
  local_a8 = lVar12;
  pbStack_a0 = pbVar13;
  local_98 = lVar14;
  lStack_90 = lVar15;
  if (uStack_80 != 0) {
    if (uStack_80 < 8) {
      bVar58 = false;
      pbVar55 = local_88;
LAB_006a2f31:
      do {
        bVar1 = *pbVar55;
        pbVar55 = pbVar55 + 1;
        bVar58 = (bool)(bVar58 | (bVar1 != 9 && (bVar1 == 0x7f || bVar1 < 0x20)));
      } while (pbVar55 != local_88 + uStack_80);
    }
    else if (uStack_80 < 0x20) {
      uVar54 = 0;
      bVar58 = false;
LAB_006a2ea9:
      uVar57 = uStack_80 & 0xfffffffffffffff8;
      pbVar55 = local_88 + uVar57;
      auVar60 = ZEXT116(bVar58);
      auVar61._8_4_ = 0xffffffff;
      auVar61._0_8_ = 0xffffffffffffffff;
      auVar61._12_4_ = 0xffffffff;
      do {
        uVar59 = *(undefined8 *)(local_88 + uVar54);
        bVar1 = s__001846a0[0];
        bVar72 = (byte)uVar59;
        bVar3 = s__001846a0[1];
        bVar75 = (byte)((ulonglong)uVar59 >> 8);
        bVar4 = s__001846a0[2];
        bVar76 = (byte)((ulonglong)uVar59 >> 0x10);
        bVar5 = s__001846a0[3];
        bVar77 = (byte)((ulonglong)uVar59 >> 0x18);
        bVar6 = s__001846a0[4];
        bVar78 = (byte)((ulonglong)uVar59 >> 0x20);
        bVar7 = s__001846a0[5];
        bVar79 = (byte)((ulonglong)uVar59 >> 0x28);
        bVar8 = s__001846a0[6];
        bVar80 = (byte)((ulonglong)uVar59 >> 0x30);
        bVar10 = (byte)((ulonglong)uVar59 >> 0x38);
        bVar9 = s__001846a0[7];
        auVar74[0] = -((byte)((bVar72 < bVar1) * bVar1 | (bVar72 >= bVar1) * bVar72) == bVar72);
        auVar74[1] = -((byte)((bVar75 < bVar3) * bVar3 | (bVar75 >= bVar3) * bVar75) == bVar75);
        auVar74[2] = -((byte)((bVar76 < bVar4) * bVar4 | (bVar76 >= bVar4) * bVar76) == bVar76);
        auVar74[3] = -((byte)((bVar77 < bVar5) * bVar5 | (bVar77 >= bVar5) * bVar77) == bVar77);
        auVar74[4] = -((byte)((bVar78 < bVar6) * bVar6 | (bVar78 >= bVar6) * bVar78) == bVar78);
        auVar74[5] = -((byte)((bVar79 < bVar7) * bVar7 | (bVar79 >= bVar7) * bVar79) == bVar79);
        auVar74[6] = -((byte)((bVar80 < bVar8) * bVar8 | (bVar80 >= bVar8) * bVar80) == bVar80);
        auVar74[7] = -((byte)((bVar10 < bVar9) * bVar9 | (bVar10 >= bVar9) * bVar10) == bVar10);
        auVar74[8] = -((char)((s__001846a0[8] != '\0') * s__001846a0[8]) == '\0');
        auVar74[9] = -((char)((s__001846a0[9] != '\0') * s__001846a0[9]) == '\0');
        auVar74[10] = -((char)((s__001846a0[10] != '\0') * s__001846a0[10]) == '\0');
        auVar74[0xb] = -((char)((s__001846a0[0xb] != '\0') * s__001846a0[0xb]) == '\0');
        auVar74[0xc] = -((char)((s__001846a0[0xc] != '\0') * s__001846a0[0xc]) == '\0');
        auVar74[0xd] = -((char)((s__001846a0[0xd] != '\0') * s__001846a0[0xd]) == '\0');
        auVar74[0xe] = -((char)((s__001846a0[0xe] != '\0') * s__001846a0[0xe]) == '\0');
        auVar74[0xf] = -((char)((s__001846a0[0xf] != '\0') * s__001846a0[0xf]) == '\0');
        auVar83[0] = -(bVar72 == DAT_00182630);
        auVar83[1] = -(bVar75 == UNK_00182631);
        auVar83[2] = -(bVar76 == UNK_00182632);
        auVar83[3] = -(bVar77 == UNK_00182633);
        auVar83[4] = -(bVar78 == UNK_00182634);
        auVar83[5] = -(bVar79 == UNK_00182635);
        auVar83[6] = -(bVar80 == UNK_00182636);
        auVar83[7] = -(bVar10 == UNK_00182637);
        auVar83[8] = -(UNK_00182638 == '\0');
        auVar83[9] = -(UNK_00182639 == '\0');
        auVar83[10] = -(UNK_0018263a == '\0');
        auVar83[0xb] = -(UNK_0018263b == '\0');
        auVar83[0xc] = -(UNK_0018263c == '\0');
        auVar83[0xd] = -(UNK_0018263d == '\0');
        auVar83[0xe] = -(UNK_0018263e == '\0');
        auVar83[0xf] = -(UNK_0018263f == '\0');
        auVar62[0] = -(bVar72 == s__00184760[0]);
        auVar62[1] = -(bVar75 == s__00184760[1]);
        auVar62[2] = -(bVar76 == s__00184760[2]);
        auVar62[3] = -(bVar77 == s__00184760[3]);
        auVar62[4] = -(bVar78 == s__00184760[4]);
        auVar62[5] = -(bVar79 == s__00184760[5]);
        auVar62[6] = -(bVar80 == s__00184760[6]);
        auVar62[7] = -(bVar10 == s__00184760[7]);
        auVar62[8] = -(s__00184760[8] == '\0');
        auVar62[9] = -(UNK_00184769 == '\0');
        auVar62[10] = -(UNK_0018476a == '\0');
        auVar62[0xb] = -(UNK_0018476b == '\0');
        auVar62[0xc] = -(UNK_0018476c == '\0');
        auVar62[0xd] = -(UNK_0018476d == '\0');
        auVar62[0xe] = -(UNK_0018476e == '\0');
        auVar62[0xf] = -(UNK_0018476f == '\0');
        auVar63 = ~auVar62 & (auVar83 | auVar74 ^ auVar61);
        auVar71._0_14_ = auVar63._0_14_;
        auVar71[0xe] = auVar63[7];
        auVar71[0xf] = auVar63[7];
        auVar70._14_2_ = auVar71._14_2_;
        auVar70._0_13_ = auVar63._0_13_;
        auVar70[0xd] = auVar63[6];
        auVar69._13_3_ = auVar70._13_3_;
        auVar69._0_12_ = auVar63._0_12_;
        auVar69[0xc] = auVar63[6];
        auVar68._12_4_ = auVar69._12_4_;
        auVar68._0_11_ = auVar63._0_11_;
        auVar68[0xb] = auVar63[5];
        auVar67._11_5_ = auVar68._11_5_;
        auVar67._0_10_ = auVar63._0_10_;
        auVar67[10] = auVar63[5];
        auVar66._10_6_ = auVar67._10_6_;
        auVar66._0_9_ = auVar63._0_9_;
        auVar66[9] = auVar63[4];
        auVar65._9_7_ = auVar66._9_7_;
        auVar65._0_8_ = auVar63._0_8_;
        auVar65[8] = auVar63[4];
        auVar64._8_8_ = auVar65._8_8_;
        auVar64[7] = auVar63[3];
        auVar64[6] = auVar63[3];
        auVar64[5] = auVar63[2];
        auVar64[4] = auVar63[2];
        auVar64[3] = auVar63[1];
        auVar64[2] = auVar63[1];
        auVar64[0] = auVar63[0];
        auVar64[1] = auVar64[0];
        auVar60 = auVar60 | auVar64;
        uVar54 = uVar54 + 8;
      } while (uVar57 != uVar54);
      auVar60 = psllw(auVar60,7);
      bVar58 = (((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                   (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x77,0) & 1) != 0;
      if (uStack_80 != uVar57) goto LAB_006a2f31;
    }
    else {
      uVar54 = uStack_80 & 0xffffffffffffffe0;
      auVar60 = (undefined1  [16])0x0;
      uVar57 = 0;
      auVar61 = (undefined1  [16])0x0;
      do {
        pbVar55 = local_88 + uVar57;
        bVar16 = *pbVar55;
        bVar17 = pbVar55[1];
        bVar18 = pbVar55[2];
        bVar19 = pbVar55[3];
        bVar20 = pbVar55[4];
        bVar21 = pbVar55[5];
        bVar22 = pbVar55[6];
        bVar23 = pbVar55[7];
        bVar24 = pbVar55[8];
        bVar25 = pbVar55[9];
        bVar26 = pbVar55[10];
        bVar27 = pbVar55[0xb];
        bVar28 = pbVar55[0xc];
        bVar29 = pbVar55[0xd];
        bVar30 = pbVar55[0xe];
        bVar31 = pbVar55[0xf];
        pbVar55 = local_88 + uVar57 + 0x10;
        bVar32 = *pbVar55;
        bVar33 = pbVar55[1];
        bVar34 = pbVar55[2];
        bVar35 = pbVar55[3];
        bVar36 = pbVar55[4];
        bVar37 = pbVar55[5];
        bVar38 = pbVar55[6];
        bVar39 = pbVar55[7];
        bVar40 = pbVar55[8];
        bVar41 = pbVar55[9];
        bVar42 = pbVar55[10];
        bVar43 = pbVar55[0xb];
        bVar44 = pbVar55[0xc];
        bVar45 = pbVar55[0xd];
        bVar46 = pbVar55[0xe];
        bVar47 = pbVar55[0xf];
        bVar1 = DAT_00184700;
        bVar3 = DAT_00184700._1_1_;
        bVar4 = DAT_00184700._2_1_;
        bVar5 = DAT_00184700._3_1_;
        bVar6 = DAT_00184700._4_1_;
        bVar7 = DAT_00184700._5_1_;
        bVar8 = DAT_00184700._6_1_;
        bVar9 = DAT_00184700._7_1_;
        bVar10 = DAT_00184700._8_1_;
        bVar72 = DAT_00184700._9_1_;
        bVar75 = DAT_00184700._10_1_;
        bVar76 = DAT_00184700._11_1_;
        bVar77 = DAT_00184700._12_1_;
        bVar78 = DAT_00184700._13_1_;
        bVar79 = DAT_00184700._14_1_;
        bVar80 = DAT_00184700._15_1_;
        auVar81[0] = -((byte)((bVar1 < bVar16) * bVar1 | (bVar1 >= bVar16) * bVar16) == bVar16);
        auVar81[1] = -((byte)((bVar3 < bVar17) * bVar3 | (bVar3 >= bVar17) * bVar17) == bVar17);
        auVar81[2] = -((byte)((bVar4 < bVar18) * bVar4 | (bVar4 >= bVar18) * bVar18) == bVar18);
        auVar81[3] = -((byte)((bVar5 < bVar19) * bVar5 | (bVar5 >= bVar19) * bVar19) == bVar19);
        auVar81[4] = -((byte)((bVar6 < bVar20) * bVar6 | (bVar6 >= bVar20) * bVar20) == bVar20);
        auVar81[5] = -((byte)((bVar7 < bVar21) * bVar7 | (bVar7 >= bVar21) * bVar21) == bVar21);
        auVar81[6] = -((byte)((bVar8 < bVar22) * bVar8 | (bVar8 >= bVar22) * bVar22) == bVar22);
        auVar81[7] = -((byte)((bVar9 < bVar23) * bVar9 | (bVar9 >= bVar23) * bVar23) == bVar23);
        auVar81[8] = -((byte)((bVar10 < bVar24) * bVar10 | (bVar10 >= bVar24) * bVar24) == bVar24);
        auVar81[9] = -((byte)((bVar72 < bVar25) * bVar72 | (bVar72 >= bVar25) * bVar25) == bVar25);
        auVar81[10] = -((byte)((bVar75 < bVar26) * bVar75 | (bVar75 >= bVar26) * bVar26) == bVar26);
        auVar81[0xb] = -((byte)((bVar76 < bVar27) * bVar76 | (bVar76 >= bVar27) * bVar27) == bVar27)
        ;
        auVar81[0xc] = -((byte)((bVar77 < bVar28) * bVar77 | (bVar77 >= bVar28) * bVar28) == bVar28)
        ;
        auVar81[0xd] = -((byte)((bVar78 < bVar29) * bVar78 | (bVar78 >= bVar29) * bVar29) == bVar29)
        ;
        auVar81[0xe] = -((byte)((bVar79 < bVar30) * bVar79 | (bVar79 >= bVar30) * bVar30) == bVar30)
        ;
        auVar81[0xf] = -((byte)((bVar80 < bVar31) * bVar80 | (bVar80 >= bVar31) * bVar31) == bVar31)
        ;
        auVar84[0] = -((byte)((bVar1 < bVar32) * bVar1 | (bVar1 >= bVar32) * bVar32) == bVar32);
        auVar84[1] = -((byte)((bVar3 < bVar33) * bVar3 | (bVar3 >= bVar33) * bVar33) == bVar33);
        auVar84[2] = -((byte)((bVar4 < bVar34) * bVar4 | (bVar4 >= bVar34) * bVar34) == bVar34);
        auVar84[3] = -((byte)((bVar5 < bVar35) * bVar5 | (bVar5 >= bVar35) * bVar35) == bVar35);
        auVar84[4] = -((byte)((bVar6 < bVar36) * bVar6 | (bVar6 >= bVar36) * bVar36) == bVar36);
        auVar84[5] = -((byte)((bVar7 < bVar37) * bVar7 | (bVar7 >= bVar37) * bVar37) == bVar37);
        auVar84[6] = -((byte)((bVar8 < bVar38) * bVar8 | (bVar8 >= bVar38) * bVar38) == bVar38);
        auVar84[7] = -((byte)((bVar9 < bVar39) * bVar9 | (bVar9 >= bVar39) * bVar39) == bVar39);
        auVar84[8] = -((byte)((bVar10 < bVar40) * bVar10 | (bVar10 >= bVar40) * bVar40) == bVar40);
        auVar84[9] = -((byte)((bVar72 < bVar41) * bVar72 | (bVar72 >= bVar41) * bVar41) == bVar41);
        auVar84[10] = -((byte)((bVar75 < bVar42) * bVar75 | (bVar75 >= bVar42) * bVar42) == bVar42);
        auVar84[0xb] = -((byte)((bVar76 < bVar43) * bVar76 | (bVar76 >= bVar43) * bVar43) == bVar43)
        ;
        auVar84[0xc] = -((byte)((bVar77 < bVar44) * bVar77 | (bVar77 >= bVar44) * bVar44) == bVar44)
        ;
        auVar84[0xd] = -((byte)((bVar78 < bVar45) * bVar78 | (bVar78 >= bVar45) * bVar45) == bVar45)
        ;
        auVar84[0xe] = -((byte)((bVar79 < bVar46) * bVar79 | (bVar79 >= bVar46) * bVar46) == bVar46)
        ;
        auVar84[0xf] = -((byte)((bVar80 < bVar47) * bVar80 | (bVar80 >= bVar47) * bVar47) == bVar47)
        ;
        auVar85[0] = -(bVar16 == DAT_00182620);
        auVar85[1] = -(bVar17 == UNK_00182621);
        auVar85[2] = -(bVar18 == UNK_00182622);
        auVar85[3] = -(bVar19 == UNK_00182623);
        auVar85[4] = -(bVar20 == UNK_00182624);
        auVar85[5] = -(bVar21 == UNK_00182625);
        auVar85[6] = -(bVar22 == UNK_00182626);
        auVar85[7] = -(bVar23 == UNK_00182627);
        auVar85[8] = -(bVar24 == UNK_00182628);
        auVar85[9] = -(bVar25 == UNK_00182629);
        auVar85[10] = -(bVar26 == UNK_0018262a);
        auVar85[0xb] = -(bVar27 == UNK_0018262b);
        auVar85[0xc] = -(bVar28 == UNK_0018262c);
        auVar85[0xd] = -(bVar29 == UNK_0018262d);
        auVar85[0xe] = -(bVar30 == UNK_0018262e);
        auVar85[0xf] = -(bVar31 == UNK_0018262f);
        auVar82[0] = -(bVar32 == DAT_00182620);
        auVar82[1] = -(bVar33 == UNK_00182621);
        auVar82[2] = -(bVar34 == UNK_00182622);
        auVar82[3] = -(bVar35 == UNK_00182623);
        auVar82[4] = -(bVar36 == UNK_00182624);
        auVar82[5] = -(bVar37 == UNK_00182625);
        auVar82[6] = -(bVar38 == UNK_00182626);
        auVar82[7] = -(bVar39 == UNK_00182627);
        auVar82[8] = -(bVar40 == UNK_00182628);
        auVar82[9] = -(bVar41 == UNK_00182629);
        auVar82[10] = -(bVar42 == UNK_0018262a);
        auVar82[0xb] = -(bVar43 == UNK_0018262b);
        auVar82[0xc] = -(bVar44 == UNK_0018262c);
        auVar82[0xd] = -(bVar45 == UNK_0018262d);
        auVar82[0xe] = -(bVar46 == UNK_0018262e);
        auVar82[0xf] = -(bVar47 == UNK_0018262f);
        auVar63[0] = -(bVar16 == DAT_00183900);
        auVar63[1] = -(bVar17 == UNK_00183901);
        auVar63[2] = -(bVar18 == UNK_00183902);
        auVar63[3] = -(bVar19 == UNK_00183903);
        auVar63[4] = -(bVar20 == UNK_00183904);
        auVar63[5] = -(bVar21 == UNK_00183905);
        auVar63[6] = -(bVar22 == UNK_00183906);
        auVar63[7] = -(bVar23 == UNK_00183907);
        auVar63[8] = -(bVar24 == UNK_00183908);
        auVar63[9] = -(bVar25 == UNK_00183909);
        auVar63[10] = -(bVar26 == UNK_0018390a);
        auVar63[0xb] = -(bVar27 == UNK_0018390b);
        auVar63[0xc] = -(bVar28 == UNK_0018390c);
        auVar63[0xd] = -(bVar29 == UNK_0018390d);
        auVar63[0xe] = -(bVar30 == UNK_0018390e);
        auVar63[0xf] = -(bVar31 == UNK_0018390f);
        auVar61 = auVar61 | ~auVar63 & (auVar85 | auVar81);
        auVar73[0] = -(bVar32 == DAT_00183900);
        auVar73[1] = -(bVar33 == UNK_00183901);
        auVar73[2] = -(bVar34 == UNK_00183902);
        auVar73[3] = -(bVar35 == UNK_00183903);
        auVar73[4] = -(bVar36 == UNK_00183904);
        auVar73[5] = -(bVar37 == UNK_00183905);
        auVar73[6] = -(bVar38 == UNK_00183906);
        auVar73[7] = -(bVar39 == UNK_00183907);
        auVar73[8] = -(bVar40 == UNK_00183908);
        auVar73[9] = -(bVar41 == UNK_00183909);
        auVar73[10] = -(bVar42 == UNK_0018390a);
        auVar73[0xb] = -(bVar43 == UNK_0018390b);
        auVar73[0xc] = -(bVar44 == UNK_0018390c);
        auVar73[0xd] = -(bVar45 == UNK_0018390d);
        auVar73[0xe] = -(bVar46 == UNK_0018390e);
        auVar73[0xf] = -(bVar47 == UNK_0018390f);
        auVar60 = auVar60 | ~auVar73 & (auVar82 | auVar84);
        uVar57 = uVar57 + 0x20;
      } while (uVar54 != uVar57);
      auVar60 = psllw(auVar60 | auVar61,7);
      uVar11 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
      pbVar55 = (byte *)(ulonglong)uVar11;
      bVar58 = uVar11 != 0;
      if (uStack_80 != uVar54) {
        if ((uStack_80 & 0x18) == 0) {
          pbVar55 = local_88 + uVar54;
          goto LAB_006a2f31;
        }
        goto LAB_006a2ea9;
      }
    }
    if (bVar58) {
      *param_1 = 0xffffffffffffffff;
      pbVar56 = local_88;
      if (lVar12 != 0) {
        (**(code **)(lVar12 + 0x20))(pbVar55,lVar14);
        pbVar56 = pbVar13;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <http[56314f485c23ccf6]::response::Response<axum_core[61c49771464cda0a]::body::Body>>
                (param_3,pbVar56);
      return param_1;
    }
  }
  (*(code *)PTR_copy_from_slice_0079a118)();
  local_48 = local_d0;
  uStack_40 = uStack_c8;
  local_58 = local_e0;
  uStack_50 = uStack_d8;
  local_37 = local_bf;
  local_38 = 0;
  local_78 = lVar12;
  local_70 = pbVar13;
  local_68 = lVar14;
  local_60 = lVar15;
  uVar59 = <http[56314f485c23ccf6]::header::map::HeaderMap>::try_insert2::
           <http[56314f485c23ccf6]::header::name::HeaderName>(&local_e0,param_3,&local_78,&local_58)
  ;
  if (local_c0 == -1) {
    (*(code *)PTR_unwrap_failed_00799028)
              (anon_d3057478e380898db632effa827bd31f_348_llvm_2674179329317868992,&local_e1,
               &anon_d3057478e380898db632effa827bd31f_16_llvm_2674179329317868992);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (local_c0 != '\x02') {
    (**(code **)(local_e0 + 0x20))(uVar59,local_d0);
  }
LAB_006a303c:
  uVar59 = param_3[0xf];
  param_1[0xe] = param_3[0xe];
  param_1[0xf] = uVar59;
  uVar59 = param_3[0xd];
  param_1[0xc] = param_3[0xc];
  param_1[0xd] = uVar59;
  uVar59 = param_3[0xb];
  param_1[10] = param_3[10];
  param_1[0xb] = uVar59;
  uVar59 = param_3[9];
  param_1[8] = param_3[8];
  param_1[9] = uVar59;
  uVar59 = *param_3;
  uVar48 = param_3[1];
  uVar49 = param_3[2];
  uVar50 = param_3[3];
  uVar51 = param_3[4];
  uVar52 = param_3[5];
  uVar53 = param_3[7];
  param_1[6] = param_3[6];
  param_1[7] = uVar53;
  param_1[4] = uVar51;
  param_1[5] = uVar52;
  param_1[2] = uVar49;
  param_1[3] = uVar50;
  *param_1 = uVar59;
  param_1[1] = uVar48;
  return param_1;
}


