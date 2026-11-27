// 005cb940 sha256_hex

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::tools::InlineMedia>::sha256_hex */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::tools::InlineMedia>::sha256_hex
          (undefined8 param_1,longlong param_2)

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
  char cVar27;
  uint uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte bVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  byte local_100;
  undefined4 local_ff;
  undefined2 local_fb;
  undefined1 local_f9;
  undefined8 local_f0;
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
  byte local_d8;
  char cStack_d7;
  char cStack_d6;
  char cStack_d5;
  char cStack_d4;
  char cStack_d3;
  char cStack_d2;
  char cStack_d1;
  byte bStack_d0;
  char cStack_cf;
  char cStack_ce;
  char cStack_cd;
  char cStack_cc;
  char cStack_cb;
  char cStack_ca;
  char cStack_c9;
  ulonglong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  byte local_80;
  undefined4 local_7f;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  ulonglong local_40;
  
  uVar25 = _UNK_0018cff8;
  uVar24 = _DAT_0018cff0;
  uVar23 = _UNK_0018cfe8;
  uVar33 = _DAT_0018cfe0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  local_148 = 0;
  local_100 = 0;
  uVar29 = *(ulonglong *)(param_2 + 0x10);
  local_f0 = param_1;
  if (uVar29 < 0x40) {
    uVar32 = (*(code *)PTR_memcpy_00799008)();
    local_100 = (byte)uVar29;
    uVar30 = uVar29;
    if (uVar29 == 0x3f) goto LAB_005cba17;
  }
  else {
    uVar28 = (uint)uVar29 & 0x3f;
    uVar30 = (ulonglong)uVar28;
    local_148 = uVar29 >> 6;
    uVar32 = (*(code *)PTR_compress256_00799158)();
    uVar32 = (*(code *)PTR_memcpy_00799008)(uVar32,uVar30);
    local_100 = (byte)uVar28;
    if (uVar30 == 0x3f) {
LAB_005cba17:
      uStack_108 = CONCAT17(0x3a,(undefined7)uStack_108);
      local_148 = local_148 + 1;
      uVar32 = (*(code *)PTR_compress256_00799158)(uVar32,1);
      uVar28 = 0;
      goto LAB_005cba34;
    }
  }
  *(undefined1 *)((longlong)&uStack_140 + uVar30) = 0x3a;
  uVar28 = (int)uVar30 + 1;
LAB_005cba34:
  cVar27 = (char)uVar28;
  uVar29 = *(ulonglong *)(param_2 + 0x28);
  uVar30 = 0x40 - (ulonglong)(uVar28 & 0xff);
  local_100 = cVar27;
  if (uVar29 < uVar30) {
    (*(code *)PTR_memcpy_00799008)(uVar32,uVar29);
    bVar31 = (char)uVar29 + cVar27;
  }
  else {
    if ((ulonglong)(uVar28 & 0xff) != 0) {
      uVar32 = (*(code *)PTR_memcpy_00799008)();
      local_148 = local_148 + 1;
      uVar32 = (*(code *)PTR_compress256_00799158)(uVar32,1);
      uVar29 = uVar29 - uVar30;
    }
    uVar28 = (uint)uVar29 & 0x3f;
    bVar31 = (byte)uVar28;
    if (uVar29 >> 6 != 0) {
      local_148 = local_148 + (uVar29 >> 6);
      uVar32 = (*(code *)PTR_compress256_00799158)();
    }
    (*(code *)PTR_memcpy_00799008)(uVar32,uVar28);
  }
  local_88 = uStack_108;
  local_7f = local_ff;
  local_7b = local_fb;
  local_79 = local_f9;
  local_c8 = local_148;
  uStack_c0 = uStack_140;
  local_98 = uStack_118;
  uStack_90 = local_110;
  local_a8 = uStack_128;
  uStack_a0 = local_120;
  local_b8 = uStack_138;
  uStack_b0 = uStack_130;
  local_d8 = (byte)uVar24;
  cStack_d7 = (char)((ulonglong)uVar24 >> 8);
  cStack_d6 = (char)((ulonglong)uVar24 >> 0x10);
  cStack_d5 = (char)((ulonglong)uVar24 >> 0x18);
  cStack_d4 = (char)((ulonglong)uVar24 >> 0x20);
  cStack_d3 = (char)((ulonglong)uVar24 >> 0x28);
  cStack_d2 = (char)((ulonglong)uVar24 >> 0x30);
  cStack_d1 = (char)((ulonglong)uVar24 >> 0x38);
  bStack_d0 = (byte)uVar25;
  cStack_cf = (char)((ulonglong)uVar25 >> 8);
  cStack_ce = (char)((ulonglong)uVar25 >> 0x10);
  cStack_cd = (char)((ulonglong)uVar25 >> 0x18);
  cStack_cc = (char)((ulonglong)uVar25 >> 0x20);
  cStack_cb = (char)((ulonglong)uVar25 >> 0x28);
  cStack_ca = (char)((ulonglong)uVar25 >> 0x30);
  cStack_c9 = (char)((ulonglong)uVar25 >> 0x38);
  local_e8 = (byte)uVar33;
  cStack_e7 = (char)((ulonglong)uVar33 >> 8);
  cStack_e6 = (char)((ulonglong)uVar33 >> 0x10);
  cStack_e5 = (char)((ulonglong)uVar33 >> 0x18);
  cStack_e4 = (char)((ulonglong)uVar33 >> 0x20);
  cStack_e3 = (char)((ulonglong)uVar33 >> 0x28);
  cStack_e2 = (char)((ulonglong)uVar33 >> 0x30);
  cStack_e1 = (char)((ulonglong)uVar33 >> 0x38);
  bStack_e0 = (byte)uVar23;
  cStack_df = (char)((ulonglong)uVar23 >> 8);
  cStack_de = (char)((ulonglong)uVar23 >> 0x10);
  cStack_dd = (char)((ulonglong)uVar23 >> 0x18);
  cStack_dc = (char)((ulonglong)uVar23 >> 0x20);
  cStack_db = (char)((ulonglong)uVar23 >> 0x28);
  cStack_da = (char)((ulonglong)uVar23 >> 0x30);
  cStack_d9 = (char)((ulonglong)uVar23 >> 0x38);
  uVar29 = local_148 << 9;
  uVar29 = (local_148 & 0x7fffffffffffff) >> 0x2f | (uVar29 & 0xff000000000000) >> 0x28 |
           (uVar29 & 0xff0000000000) >> 0x18 | (uVar29 & 0xff00000000) >> 8 |
           (uVar29 & 0xff000000) << 8 | (uVar29 & 0xff0000) << 0x18 |
           (((uint)bVar31 * 8 | uVar29) & 0xff00) << 0x28 | (ulonglong)((uint)bVar31 * 8) << 0x38;
  local_80 = bVar31;
  local_78[(ulonglong)bVar31 - 0x48] = 0x80;
  local_100 = bVar31;
  if ((bVar31 == 0x3f) ||
     (uVar33 = (*(code *)PTR_memset_00799090)(uVar33,(ulonglong)bVar31 ^ 0x3f), (bVar31 ^ 0x38) < 8)
     ) {
    puVar26 = PTR_compress256_00799158;
    (*(code *)PTR_compress256_00799158)(uVar33,1);
    local_58 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_78 = (undefined1  [16])0x0;
    local_48 = 0;
    local_40 = uVar29;
    (*(code *)puVar26)(0,1);
  }
  else {
    local_88 = uVar29;
    (*(code *)PTR_compress256_00799158)(uVar33,1);
  }
  uVar33 = local_f0;
  uVar14 = CONCAT12(cStack_df,CONCAT11(bStack_e0,cStack_e1));
  uVar28 = CONCAT13(cStack_de,uVar14);
  uVar17 = CONCAT14(cStack_dd,uVar28);
  auVar21[5] = cStack_dc;
  auVar21._0_5_ = uVar17;
  uVar15 = CONCAT12(cStack_cf,CONCAT11(bStack_d0,cStack_d1));
  uVar16 = CONCAT13(cStack_ce,uVar15);
  uVar18 = CONCAT14(cStack_cd,uVar16);
  auVar22[5] = cStack_cc;
  auVar22._0_5_ = uVar18;
  auVar37[1] = 0;
  auVar37[0] = bStack_e0;
  auVar37[2] = cStack_df;
  auVar37[3] = 0;
  auVar37[4] = cStack_de;
  auVar37[5] = 0;
  auVar37[6] = cStack_dd;
  auVar37[7] = 0;
  auVar37[8] = cStack_dc;
  auVar37[9] = 0;
  auVar37[10] = cStack_db;
  auVar37[0xb] = 0;
  auVar37[0xc] = cStack_da;
  auVar37[0xd] = 0;
  auVar37[0xe] = cStack_d9;
  auVar37[0xf] = 0;
  auVar34 = pshuflw(auVar37,auVar37,0x1b);
  auVar35 = pshufhw(auVar34,auVar34,0x1b);
  auVar21._6_8_ = 0;
  auVar2[0xe] = cStack_e1;
  auVar2._0_14_ = auVar21 << 0x38;
  auVar19._4_8_ = 0;
  auVar19._0_4_ = uVar28;
  auVar4._12_3_ = (int3)(CONCAT26(auVar2._13_2_,CONCAT15(cStack_e2,uVar17)) >> 0x28);
  auVar4._0_12_ = auVar19 << 0x38;
  auVar6._10_5_ = (int5)(CONCAT44(auVar4._11_4_,CONCAT13(cStack_e3,uVar14)) >> 0x18);
  auVar6._0_10_ = (unkuint10)CONCAT11(bStack_e0,cStack_e1) << 0x38;
  auVar8._7_8_ = 0;
  auVar8._0_7_ = (uint7)(CONCAT62(auVar6._9_6_,CONCAT11(cStack_e4,cStack_e1)) >> 8);
  auVar9._1_8_ = SUB158(auVar8 << 0x40,7);
  auVar9[0] = cStack_e5;
  auVar9._9_6_ = 0;
  auVar10._1_10_ = SUB1510(auVar9 << 0x30,5);
  auVar10[0] = cStack_e6;
  auVar10._11_4_ = 0;
  auVar34._3_12_ = SUB1512(auVar10 << 0x20,3);
  auVar34[2] = cStack_e7;
  auVar34[1] = 0;
  auVar34[0] = local_e8;
  auVar34[0xf] = 0;
  auVar34 = pshuflw(auVar34,auVar34,0x1b);
  auVar34 = pshufhw(auVar34,auVar34,0x1b);
  sVar1 = auVar34._0_2_;
  local_e8 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0] - (0xff < sVar1);
  sVar1 = auVar34._2_2_;
  cStack_e7 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[2] - (0xff < sVar1);
  sVar1 = auVar34._4_2_;
  cStack_e6 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[4] - (0xff < sVar1);
  sVar1 = auVar34._6_2_;
  cStack_e5 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[6] - (0xff < sVar1);
  sVar1 = auVar34._8_2_;
  cStack_e4 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[8] - (0xff < sVar1);
  sVar1 = auVar34._10_2_;
  cStack_e3 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[10] - (0xff < sVar1);
  sVar1 = auVar34._12_2_;
  cStack_e2 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0xc] - (0xff < sVar1);
  sVar1 = auVar34._14_2_;
  cStack_e1 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0xe] - (0xff < sVar1);
  sVar1 = auVar35._0_2_;
  bStack_e0 = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1);
  sVar1 = auVar35._2_2_;
  cStack_df = (0 < sVar1) * (sVar1 < 0x100) * auVar35[2] - (0xff < sVar1);
  sVar1 = auVar35._4_2_;
  cStack_de = (0 < sVar1) * (sVar1 < 0x100) * auVar35[4] - (0xff < sVar1);
  sVar1 = auVar35._6_2_;
  cStack_dd = (0 < sVar1) * (sVar1 < 0x100) * auVar35[6] - (0xff < sVar1);
  sVar1 = auVar35._8_2_;
  cStack_dc = (0 < sVar1) * (sVar1 < 0x100) * auVar35[8] - (0xff < sVar1);
  sVar1 = auVar35._10_2_;
  cStack_db = (0 < sVar1) * (sVar1 < 0x100) * auVar35[10] - (0xff < sVar1);
  sVar1 = auVar35._12_2_;
  cStack_da = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0xc] - (0xff < sVar1);
  sVar1 = auVar35._14_2_;
  cStack_d9 = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0xe] - (0xff < sVar1);
  auVar36[1] = 0;
  auVar36[0] = bStack_d0;
  auVar36[2] = cStack_cf;
  auVar36[3] = 0;
  auVar36[4] = cStack_ce;
  auVar36[5] = 0;
  auVar36[6] = cStack_cd;
  auVar36[7] = 0;
  auVar36[8] = cStack_cc;
  auVar36[9] = 0;
  auVar36[10] = cStack_cb;
  auVar36[0xb] = 0;
  auVar36[0xc] = cStack_ca;
  auVar36[0xd] = 0;
  auVar36[0xe] = cStack_c9;
  auVar36[0xf] = 0;
  auVar34 = pshuflw(auVar36,auVar36,0x1b);
  auVar37 = pshufhw(auVar34,auVar34,0x1b);
  auVar22._6_8_ = 0;
  auVar3[0xe] = cStack_d1;
  auVar3._0_14_ = auVar22 << 0x38;
  auVar20._4_8_ = 0;
  auVar20._0_4_ = uVar16;
  auVar5._12_3_ = (int3)(CONCAT26(auVar3._13_2_,CONCAT15(cStack_d2,uVar18)) >> 0x28);
  auVar5._0_12_ = auVar20 << 0x38;
  auVar7._10_5_ = (int5)(CONCAT44(auVar5._11_4_,CONCAT13(cStack_d3,uVar15)) >> 0x18);
  auVar7._0_10_ = (unkuint10)CONCAT11(bStack_d0,cStack_d1) << 0x38;
  auVar11._7_8_ = 0;
  auVar11._0_7_ = (uint7)(CONCAT62(auVar7._9_6_,CONCAT11(cStack_d4,cStack_d1)) >> 8);
  auVar12._1_8_ = SUB158(auVar11 << 0x40,7);
  auVar12[0] = cStack_d5;
  auVar12._9_6_ = 0;
  auVar13._1_10_ = SUB1510(auVar12 << 0x30,5);
  auVar13[0] = cStack_d6;
  auVar13._11_4_ = 0;
  auVar35._3_12_ = SUB1512(auVar13 << 0x20,3);
  auVar35[2] = cStack_d7;
  auVar35[1] = 0;
  auVar35[0] = local_d8;
  auVar35[0xf] = 0;
  auVar34 = pshuflw((undefined1  [16])0x0,auVar35,0x1b);
  auVar34 = pshufhw(auVar34,auVar34,0x1b);
  sVar1 = auVar34._0_2_;
  local_d8 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0] - (0xff < sVar1);
  sVar1 = auVar34._2_2_;
  cStack_d7 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[2] - (0xff < sVar1);
  sVar1 = auVar34._4_2_;
  cStack_d6 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[4] - (0xff < sVar1);
  sVar1 = auVar34._6_2_;
  cStack_d5 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[6] - (0xff < sVar1);
  sVar1 = auVar34._8_2_;
  cStack_d4 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[8] - (0xff < sVar1);
  sVar1 = auVar34._10_2_;
  cStack_d3 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[10] - (0xff < sVar1);
  sVar1 = auVar34._12_2_;
  cStack_d2 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0xc] - (0xff < sVar1);
  sVar1 = auVar34._14_2_;
  cStack_d1 = (0 < sVar1) * (sVar1 < 0x100) * auVar34[0xe] - (0xff < sVar1);
  sVar1 = auVar37._0_2_;
  bStack_d0 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0] - (0xff < sVar1);
  sVar1 = auVar37._2_2_;
  cStack_cf = (0 < sVar1) * (sVar1 < 0x100) * auVar37[2] - (0xff < sVar1);
  sVar1 = auVar37._4_2_;
  cStack_ce = (0 < sVar1) * (sVar1 < 0x100) * auVar37[4] - (0xff < sVar1);
  sVar1 = auVar37._6_2_;
  cStack_cd = (0 < sVar1) * (sVar1 < 0x100) * auVar37[6] - (0xff < sVar1);
  sVar1 = auVar37._8_2_;
  cStack_cc = (0 < sVar1) * (sVar1 < 0x100) * auVar37[8] - (0xff < sVar1);
  sVar1 = auVar37._10_2_;
  cStack_cb = (0 < sVar1) * (sVar1 < 0x100) * auVar37[10] - (0xff < sVar1);
  sVar1 = auVar37._12_2_;
  cStack_ca = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xc] - (0xff < sVar1);
  sVar1 = auVar37._14_2_;
  cStack_c9 = (0 < sVar1) * (sVar1 < 0x100) * auVar37[0xe] - (0xff < sVar1);
  local_78._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_78._0_8_ = &local_e8;
  (*(code *)PTR_format_inner_00799048)();
  return uVar33;
}


