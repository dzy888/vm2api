// 0053ed90 digest

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>::digest */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::resume::CanonicalToolResult>::digest
          (undefined8 param_1,longlong *param_2)

{
  short sVar1;
  undefined1 auVar2 [15];
  undefined1 auVar3 [15];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [15];
  undefined1 auVar13 [15];
  undefined3 uVar14;
  undefined3 uVar15;
  uint uVar16;
  undefined5 uVar17;
  undefined5 uVar18;
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [14];
  undefined1 auVar22 [14];
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puVar26;
  byte bVar27;
  byte bVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  ulonglong local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  byte local_110;
  undefined4 local_10f;
  undefined2 local_10b;
  undefined1 local_109;
  longlong local_100;
  byte local_f8;
  char cStack_f7;
  char cStack_f6;
  char cStack_f5;
  char cStack_f4;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  byte bStack_f0;
  char cStack_ef;
  char cStack_ee;
  char cStack_ed;
  char cStack_ec;
  char cStack_eb;
  char cStack_ea;
  char cStack_e9;
  byte local_e8;
  char cStack_e7;
  char cStack_e6;
  char cStack_e5;
  char cStack_e4;
  char cStack_e3;
  char cStack_e2;
  char cStack_e1;
  byte bStack_e0;
  char cStack_df;
  char cStack_de;
  char cStack_dd;
  char cStack_dc;
  char cStack_db;
  char cStack_da;
  char cStack_d9;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  byte local_90;
  undefined4 local_8f;
  undefined2 local_8b;
  undefined1 local_89;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  uVar25 = _UNK_0018cff8;
  uVar24 = _DAT_0018cff0;
  uVar23 = _UNK_0018cfe8;
  uVar36 = _DAT_0018cfe0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  local_110 = 0;
  local_158 = 0;
  uVar30 = param_2[2];
  uVar32 = 0;
  if (*param_2 != -1) {
    uVar32 = uVar30;
  }
  local_80 = param_1;
  if (0x3f < uVar32) {
    uVar32 = (ulonglong)((uint)uVar30 & 0x3f);
    if (uVar30 >> 6 != 0) {
      (*(code *)PTR_compress256_00799158)();
      local_158 = uVar30 >> 6;
    }
  }
  uVar35 = (*(code *)PTR_memcpy_00799008)();
  local_110 = (byte)uVar32;
  if (uVar32 == 0x3f) {
    uStack_118 = CONCAT17(0x7c,(undefined7)uStack_118);
    local_158 = local_158 + 1;
    uVar35 = (*(code *)PTR_compress256_00799158)(uVar35,1);
    uVar30 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_150 + uVar32) = 0x7c;
    uVar30 = (ulonglong)((int)uVar32 + 1);
  }
  local_110 = (byte)uVar30;
  uVar32 = param_2[5];
  uVar31 = 0;
  if (param_2[3] != -1) {
    uVar31 = uVar32;
  }
  uVar33 = uVar30 & 0xff;
  if (uVar31 < 0x40 - uVar33) {
    uVar35 = (*(code *)PTR_memcpy_00799008)(uVar30,uVar31);
    uVar31 = uVar31 + uVar33;
    local_110 = (byte)uVar31;
    if (uVar31 == 0x3f) goto LAB_0053eff3;
LAB_0053eedc:
    *(undefined1 *)((longlong)&uStack_150 + uVar31) = 0x7c;
    uVar29 = (int)uVar31 + 1;
    local_110 = (byte)uVar29;
    uVar30 = (ulonglong)(uVar29 & 0xff);
    if ((char)param_2[10] == '\0') {
      if (uVar31 < 0x3d) {
LAB_0053f03f:
        *(undefined2 *)((longlong)&uStack_150 + uVar30) = 0x6b6f;
        lVar34 = uVar30 + 2;
        local_110 = (byte)lVar34;
        goto joined_r0x0053f032;
      }
      lVar34 = uVar30 - 0x3e;
    }
    else {
      if (uVar31 < 0x3c) goto LAB_0053f018;
      lVar34 = uVar30 - 0x3d;
    }
    uVar35 = (*(code *)PTR_memcpy_00799008)(uVar35,0x40 - uVar30);
    local_158 = local_158 + 1;
    uVar35 = (*(code *)PTR_compress256_00799158)(uVar35,1);
    (*(code *)PTR_memcpy_00799008)(uVar35,lVar34);
  }
  else {
    if (uVar33 != 0) {
      uVar35 = (*(code *)PTR_memcpy_00799008)();
      local_158 = local_158 + 1;
      uVar35 = (*(code *)PTR_compress256_00799158)(uVar35,1);
      uVar32 = uVar31 - (0x40 - uVar33);
    }
    uVar29 = (uint)uVar32 & 0x3f;
    uVar31 = (ulonglong)uVar29;
    if (uVar32 >> 6 != 0) {
      local_158 = local_158 + (uVar32 >> 6);
      uVar35 = (*(code *)PTR_compress256_00799158)();
    }
    uVar35 = (*(code *)PTR_memcpy_00799008)(uVar35,uVar31);
    local_110 = (byte)uVar29;
    if (uVar31 != 0x3f) goto LAB_0053eedc;
LAB_0053eff3:
    uStack_118 = CONCAT17(0x7c,(undefined7)uStack_118);
    local_158 = local_158 + 1;
    uVar35 = (*(code *)PTR_compress256_00799158)(uVar35,1);
    uVar30 = 0;
    if ((char)param_2[10] == '\0') goto LAB_0053f03f;
LAB_0053f018:
    *(undefined1 *)((longlong)&uStack_150 + uVar30 + 2) = 0x72;
    *(undefined2 *)((longlong)&uStack_150 + uVar30) = 0x7265;
    lVar34 = uVar30 + 3;
    local_110 = (byte)lVar34;
joined_r0x0053f032:
    if (lVar34 == 0x3f) {
      uStack_118 = CONCAT17(0x7c,(undefined7)uStack_118);
      local_158 = local_158 + 1;
      (*(code *)PTR_compress256_00799158)(uVar35,1);
      local_110 = 0;
      goto LAB_0053f074;
    }
  }
  *(undefined1 *)((longlong)&uStack_150 + lVar34) = 0x7c;
  local_110 = (char)lVar34 + 1;
LAB_0053f074:
  local_f8 = 0;
  cStack_f7 = 0;
  cStack_f6 = 0;
  cStack_f5 = 0;
  cStack_f4 = 0;
  cStack_f3 = 0;
  cStack_f2 = 0;
  cStack_f1 = 0;
  bStack_f0 = 1;
  cStack_ef = 0;
  cStack_ee = 0;
  cStack_ed = 0;
  cStack_ec = 0;
  cStack_eb = 0;
  cStack_ea = 0;
  cStack_e9 = 0;
  local_e8 = '\0';
  cStack_e7 = 0;
  cStack_e6 = 0;
  cStack_e5 = 0;
  cStack_e4 = 0;
  cStack_e3 = 0;
  cStack_e2 = 0;
  cStack_e1 = 0;
  uVar35 = craggemini_core[66f3c71560d70857]::resume::write_canonical_json(param_2 + 6,&local_f8);
  bVar28 = local_e8;
  bVar27 = local_110;
  local_100 = CONCAT17(cStack_f1,
                       CONCAT16(cStack_f2,
                                CONCAT15(cStack_f3,
                                         CONCAT14(cStack_f4,
                                                  CONCAT13(cStack_f5,
                                                           CONCAT12(cStack_f6,
                                                                    CONCAT11(cStack_f7,local_f8)))))
                               ));
  uVar30 = CONCAT17(cStack_e1,
                    CONCAT16(cStack_e2,
                             CONCAT15(cStack_e3,
                                      CONCAT14(cStack_e4,
                                               CONCAT13(cStack_e5,
                                                        CONCAT12(cStack_e6,
                                                                 CONCAT11(cStack_e7,local_e8)))))));
  uVar32 = 0x40 - (ulonglong)local_110;
  if (uVar30 < uVar32) {
    uVar35 = (*(code *)PTR_memcpy_00799008)(uVar35,uVar30);
    local_110 = bVar28 + bVar27;
  }
  else {
    if ((ulonglong)local_110 != 0) {
      uVar35 = (*(code *)PTR_memcpy_00799008)(uVar35,uVar32);
      local_158 = local_158 + 1;
      uVar35 = (*(code *)PTR_compress256_00799158)(uVar35,1);
      uVar30 = uVar30 - uVar32;
    }
    if (uVar30 >> 6 != 0) {
      local_158 = local_158 + (uVar30 >> 6);
      uVar35 = (*(code *)PTR_compress256_00799158)();
    }
    uVar29 = (uint)uVar30 & 0x3f;
    uVar35 = (*(code *)PTR_memcpy_00799008)(uVar35,uVar29);
    local_110 = (byte)uVar29;
  }
  if (local_100 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar35,1);
  }
  bVar27 = local_110;
  local_98 = uStack_118;
  local_90 = local_110;
  local_8f = local_10f;
  local_8b = local_10b;
  local_89 = local_109;
  uStack_d0 = uStack_150;
  local_a8 = uStack_128;
  uStack_a0 = local_120;
  local_b8 = uStack_138;
  uStack_b0 = local_130;
  local_c8 = uStack_148;
  uStack_c0 = uStack_140;
  local_e8 = (byte)uVar24;
  cStack_e7 = (char)((ulonglong)uVar24 >> 8);
  cStack_e6 = (char)((ulonglong)uVar24 >> 0x10);
  cStack_e5 = (char)((ulonglong)uVar24 >> 0x18);
  cStack_e4 = (char)((ulonglong)uVar24 >> 0x20);
  cStack_e3 = (char)((ulonglong)uVar24 >> 0x28);
  cStack_e2 = (char)((ulonglong)uVar24 >> 0x30);
  cStack_e1 = (char)((ulonglong)uVar24 >> 0x38);
  bStack_e0 = (byte)uVar25;
  cStack_df = (char)((ulonglong)uVar25 >> 8);
  cStack_de = (char)((ulonglong)uVar25 >> 0x10);
  cStack_dd = (char)((ulonglong)uVar25 >> 0x18);
  cStack_dc = (char)((ulonglong)uVar25 >> 0x20);
  cStack_db = (char)((ulonglong)uVar25 >> 0x28);
  cStack_da = (char)((ulonglong)uVar25 >> 0x30);
  cStack_d9 = (char)((ulonglong)uVar25 >> 0x38);
  local_f8 = (byte)uVar36;
  cStack_f7 = (char)((ulonglong)uVar36 >> 8);
  cStack_f6 = (char)((ulonglong)uVar36 >> 0x10);
  cStack_f5 = (char)((ulonglong)uVar36 >> 0x18);
  cStack_f4 = (char)((ulonglong)uVar36 >> 0x20);
  cStack_f3 = (char)((ulonglong)uVar36 >> 0x28);
  cStack_f2 = (char)((ulonglong)uVar36 >> 0x30);
  cStack_f1 = (char)((ulonglong)uVar36 >> 0x38);
  bStack_f0 = (byte)uVar23;
  cStack_ef = (char)((ulonglong)uVar23 >> 8);
  cStack_ee = (char)((ulonglong)uVar23 >> 0x10);
  cStack_ed = (char)((ulonglong)uVar23 >> 0x18);
  cStack_ec = (char)((ulonglong)uVar23 >> 0x20);
  cStack_eb = (char)((ulonglong)uVar23 >> 0x28);
  cStack_ea = (char)((ulonglong)uVar23 >> 0x30);
  cStack_e9 = (char)((ulonglong)uVar23 >> 0x38);
  uVar30 = local_158 << 9;
  uVar30 = (local_158 & 0x7fffffffffffff) >> 0x2f | (uVar30 & 0xff000000000000) >> 0x28 |
           (uVar30 & 0xff0000000000) >> 0x18 | (uVar30 & 0xff00000000) >> 8 |
           (uVar30 & 0xff000000) << 8 | (uVar30 & 0xff0000) << 0x18 |
           (((uint)local_110 * 8 | uVar30) & 0xff00) << 0x28 |
           (ulonglong)((uint)local_110 * 8) << 0x38;
  local_78[(ulonglong)local_110 - 0x58] = 0x80;
  local_d8 = local_158;
  if ((local_110 == 0x3f) ||
     (uVar36 = (*(code *)PTR_memset_00799090)(uVar36,(ulonglong)local_110 ^ 0x3f),
     (bVar27 ^ 0x38) < 8)) {
    puVar26 = PTR_compress256_00799158;
    (*(code *)PTR_compress256_00799158)(uVar36,1);
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_48 = 0;
    local_40 = uVar30;
    (*(code *)puVar26)(0,1);
  }
  else {
    local_98 = uVar30;
    (*(code *)PTR_compress256_00799158)(uVar36,1);
  }
  uVar36 = local_80;
  uVar14 = CONCAT12(cStack_ef,CONCAT11(bStack_f0,cStack_f1));
  uVar29 = CONCAT13(cStack_ee,uVar14);
  uVar17 = CONCAT14(cStack_ed,uVar29);
  auVar21[5] = cStack_ec;
  auVar21._0_5_ = uVar17;
  uVar15 = CONCAT12(cStack_df,CONCAT11(bStack_e0,cStack_e1));
  uVar16 = CONCAT13(cStack_de,uVar15);
  uVar18 = CONCAT14(cStack_dd,uVar16);
  auVar22[5] = cStack_dc;
  auVar22._0_5_ = uVar18;
  auVar40[1] = 0;
  auVar40[0] = bStack_f0;
  auVar40[2] = cStack_ef;
  auVar40[3] = 0;
  auVar40[4] = cStack_ee;
  auVar40[5] = 0;
  auVar40[6] = cStack_ed;
  auVar40[7] = 0;
  auVar40[8] = cStack_ec;
  auVar40[9] = 0;
  auVar40[10] = cStack_eb;
  auVar40[0xb] = 0;
  auVar40[0xc] = cStack_ea;
  auVar40[0xd] = 0;
  auVar40[0xe] = cStack_e9;
  auVar40[0xf] = 0;
  auVar37 = pshuflw(auVar40,auVar40,0x1b);
  auVar38 = pshufhw(auVar37,auVar37,0x1b);
  auVar21._6_8_ = 0;
  auVar2[0xe] = cStack_f1;
  auVar2._0_14_ = auVar21 << 0x38;
  auVar19._4_8_ = 0;
  auVar19._0_4_ = uVar29;
  auVar4._12_3_ = (int3)(CONCAT26(auVar2._13_2_,CONCAT15(cStack_f2,uVar17)) >> 0x28);
  auVar4._0_12_ = auVar19 << 0x38;
  auVar6._10_5_ = (int5)(CONCAT44(auVar4._11_4_,CONCAT13(cStack_f3,uVar14)) >> 0x18);
  auVar6._0_10_ = (unkuint10)CONCAT11(bStack_f0,cStack_f1) << 0x38;
  auVar8._7_8_ = 0;
  auVar8._0_7_ = (uint7)(CONCAT62(auVar6._9_6_,CONCAT11(cStack_f4,cStack_f1)) >> 8);
  auVar9._1_8_ = SUB158(auVar8 << 0x40,7);
  auVar9[0] = cStack_f5;
  auVar9._9_6_ = 0;
  auVar10._1_10_ = SUB1510(auVar9 << 0x30,5);
  auVar10[0] = cStack_f6;
  auVar10._11_4_ = 0;
  auVar37._3_12_ = SUB1512(auVar10 << 0x20,3);
  auVar37[2] = cStack_f7;
  auVar37[1] = 0;
  auVar37[0] = local_f8;
  auVar37[0xf] = 0;
  auVar37 = pshuflw(auVar37,auVar37,0x1b);
  auVar37 = pshufhw(auVar37,auVar37,0x1b);
  sVar1 = auVar37._0_2_;
  local_f8 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0] - (0xff < sVar1);
  sVar1 = auVar37._2_2_;
  cStack_f7 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[2] - (0xff < sVar1);
  sVar1 = auVar37._4_2_;
  cStack_f6 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[4] - (0xff < sVar1);
  sVar1 = auVar37._6_2_;
  cStack_f5 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[6] - (0xff < sVar1);
  sVar1 = auVar37._8_2_;
  cStack_f4 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[8] - (0xff < sVar1);
  sVar1 = auVar37._10_2_;
  cStack_f3 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[10] - (0xff < sVar1);
  sVar1 = auVar37._12_2_;
  cStack_f2 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xc] - (0xff < sVar1);
  sVar1 = auVar37._14_2_;
  cStack_f1 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xe] - (0xff < sVar1);
  sVar1 = auVar38._0_2_;
  bStack_f0 = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1);
  sVar1 = auVar38._2_2_;
  cStack_ef = (0 < sVar1) * (sVar1 < 0x100) * auVar38[2] - (0xff < sVar1);
  sVar1 = auVar38._4_2_;
  cStack_ee = (0 < sVar1) * (sVar1 < 0x100) * auVar38[4] - (0xff < sVar1);
  sVar1 = auVar38._6_2_;
  cStack_ed = (0 < sVar1) * (sVar1 < 0x100) * auVar38[6] - (0xff < sVar1);
  sVar1 = auVar38._8_2_;
  cStack_ec = (0 < sVar1) * (sVar1 < 0x100) * auVar38[8] - (0xff < sVar1);
  sVar1 = auVar38._10_2_;
  cStack_eb = (0 < sVar1) * (sVar1 < 0x100) * auVar38[10] - (0xff < sVar1);
  sVar1 = auVar38._12_2_;
  cStack_ea = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0xc] - (0xff < sVar1);
  sVar1 = auVar38._14_2_;
  cStack_e9 = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0xe] - (0xff < sVar1);
  auVar39[1] = 0;
  auVar39[0] = bStack_e0;
  auVar39[2] = cStack_df;
  auVar39[3] = 0;
  auVar39[4] = cStack_de;
  auVar39[5] = 0;
  auVar39[6] = cStack_dd;
  auVar39[7] = 0;
  auVar39[8] = cStack_dc;
  auVar39[9] = 0;
  auVar39[10] = cStack_db;
  auVar39[0xb] = 0;
  auVar39[0xc] = cStack_da;
  auVar39[0xd] = 0;
  auVar39[0xe] = cStack_d9;
  auVar39[0xf] = 0;
  auVar37 = pshuflw(auVar39,auVar39,0x1b);
  auVar40 = pshufhw(auVar37,auVar37,0x1b);
  auVar22._6_8_ = 0;
  auVar3[0xe] = cStack_e1;
  auVar3._0_14_ = auVar22 << 0x38;
  auVar20._4_8_ = 0;
  auVar20._0_4_ = uVar16;
  auVar5._12_3_ = (int3)(CONCAT26(auVar3._13_2_,CONCAT15(cStack_e2,uVar18)) >> 0x28);
  auVar5._0_12_ = auVar20 << 0x38;
  auVar7._10_5_ = (int5)(CONCAT44(auVar5._11_4_,CONCAT13(cStack_e3,uVar15)) >> 0x18);
  auVar7._0_10_ = (unkuint10)CONCAT11(bStack_e0,cStack_e1) << 0x38;
  auVar11._7_8_ = 0;
  auVar11._0_7_ = (uint7)(CONCAT62(auVar7._9_6_,CONCAT11(cStack_e4,cStack_e1)) >> 8);
  auVar12._1_8_ = SUB158(auVar11 << 0x40,7);
  auVar12[0] = cStack_e5;
  auVar12._9_6_ = 0;
  auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
  auVar13[0] = cStack_e6;
  auVar13._11_4_ = 0;
  auVar38._3_12_ = SUB1512(auVar13 << 0x20,3);
  auVar38[2] = cStack_e7;
  auVar38[1] = 0;
  auVar38[0] = local_e8;
  auVar38[0xf] = 0;
  auVar37 = pshuflw((undefined1  [16])0x0,auVar38,0x1b);
  auVar37 = pshufhw(auVar37,auVar37,0x1b);
  sVar1 = auVar37._0_2_;
  local_e8 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0] - (0xff < sVar1);
  sVar1 = auVar37._2_2_;
  cStack_e7 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[2] - (0xff < sVar1);
  sVar1 = auVar37._4_2_;
  cStack_e6 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[4] - (0xff < sVar1);
  sVar1 = auVar37._6_2_;
  cStack_e5 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[6] - (0xff < sVar1);
  sVar1 = auVar37._8_2_;
  cStack_e4 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[8] - (0xff < sVar1);
  sVar1 = auVar37._10_2_;
  cStack_e3 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[10] - (0xff < sVar1);
  sVar1 = auVar37._12_2_;
  cStack_e2 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xc] - (0xff < sVar1);
  sVar1 = auVar37._14_2_;
  cStack_e1 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xe] - (0xff < sVar1);
  sVar1 = auVar40._0_2_;
  bStack_e0 = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0] - (0xff < sVar1);
  sVar1 = auVar40._2_2_;
  cStack_df = (0 < sVar1) * (sVar1 < 0x100) * auVar40[2] - (0xff < sVar1);
  sVar1 = auVar40._4_2_;
  cStack_de = (0 < sVar1) * (sVar1 < 0x100) * auVar40[4] - (0xff < sVar1);
  sVar1 = auVar40._6_2_;
  cStack_dd = (0 < sVar1) * (sVar1 < 0x100) * auVar40[6] - (0xff < sVar1);
  sVar1 = auVar40._8_2_;
  cStack_dc = (0 < sVar1) * (sVar1 < 0x100) * auVar40[8] - (0xff < sVar1);
  sVar1 = auVar40._10_2_;
  cStack_db = (0 < sVar1) * (sVar1 < 0x100) * auVar40[10] - (0xff < sVar1);
  sVar1 = auVar40._12_2_;
  cStack_da = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0xc] - (0xff < sVar1);
  sVar1 = auVar40._14_2_;
  cStack_d9 = (0 < sVar1) * (sVar1 < 0x100) * auVar40[0xe] - (0xff < sVar1);
  local_78._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_78._0_8_ = &local_f8;
  (*(code *)PTR_format_inner_00799048)();
  return uVar36;
}


