// 0065fc10 finalize_fixed_core

/* <digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   sha2[7efb180a76699f7c]::OidSha256> as
   digest[f0d79a819dec3844]::core_api::FixedOutputCore>::finalize_fixed_core */

void __rustcall
<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>as_digest[f0d79a819dec3844]::core_api::FixedOutputCore>
::finalize_fixed_core(undefined1 (*param_1) [16],longlong param_2,char *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined *puVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  
  bVar1 = *(byte *)(param_2 + 0x40);
  uVar2 = *(ulonglong *)param_1[2];
  uVar40 = uVar2 << 9;
  *(undefined1 *)(param_2 + (ulonglong)bVar1) = 0x80;
  if (bVar1 != 0x3f) {
    uVar41 = (*(code *)PTR_memset_00799090)();
    if (7 < (bVar1 ^ 0x38)) {
      *(ulonglong *)(param_2 + 0x38) =
           (uVar2 & 0x7fffffffffffff) >> 0x2f | (uVar40 & 0xff000000000000) >> 0x28 |
           (uVar40 & 0xff0000000000) >> 0x18 | (uVar40 & 0xff00000000) >> 8 |
           (uVar40 & 0xff000000) << 8 | (uVar40 & 0xff0000) << 0x18 |
           (((uint)bVar1 * 8 | uVar40) & 0xff00) << 0x28 | (ulonglong)((uint)bVar1 * 8) << 0x38;
      (*(code *)PTR_compress256_00799158)(uVar41,1);
      goto LAB_0065fcc5;
    }
  }
  puVar39 = PTR_compress256_00799158;
  (*(code *)PTR_compress256_00799158)();
  (*(code *)puVar39)();
LAB_0065fcc5:
  *(undefined1 *)(param_2 + 0x40) = 0;
  auVar42 = *param_1;
  auVar45[1] = 0;
  auVar45[0] = auVar42[8];
  auVar45[2] = auVar42[9];
  auVar45[3] = 0;
  auVar45[4] = auVar42[10];
  auVar45[5] = 0;
  auVar45[6] = auVar42[0xb];
  auVar45[7] = 0;
  auVar45[8] = auVar42[0xc];
  auVar45[9] = 0;
  auVar45[10] = auVar42[0xd];
  auVar45[0xb] = 0;
  auVar45[0xc] = auVar42[0xe];
  auVar45[0xd] = 0;
  auVar45[0xe] = auVar42[0xf];
  auVar45[0xf] = 0;
  auVar43 = pshuflw(auVar45,auVar45,0x1b);
  auVar43 = pshufhw(auVar43,auVar43,0x1b);
  auVar19[0xd] = 0;
  auVar19._0_13_ = auVar42._0_13_;
  auVar19[0xe] = auVar42[7];
  auVar21[0xc] = auVar42[6];
  auVar21._0_12_ = auVar42._0_12_;
  auVar21._13_2_ = auVar19._13_2_;
  auVar23[0xb] = 0;
  auVar23._0_11_ = auVar42._0_11_;
  auVar23._12_3_ = auVar21._12_3_;
  auVar25[10] = auVar42[5];
  auVar25._0_10_ = auVar42._0_10_;
  auVar25._11_4_ = auVar23._11_4_;
  auVar27[9] = 0;
  auVar27._0_9_ = auVar42._0_9_;
  auVar27._10_5_ = auVar25._10_5_;
  auVar29[8] = auVar42[4];
  auVar29._0_8_ = auVar42._0_8_;
  auVar29._9_6_ = auVar27._9_6_;
  auVar33._7_8_ = 0;
  auVar33._0_7_ = auVar29._8_7_;
  auVar34._1_8_ = SUB158(auVar33 << 0x40,7);
  auVar34[0] = auVar42[3];
  auVar34._9_6_ = 0;
  auVar35._1_10_ = SUB1510(auVar34 << 0x30,5);
  auVar35[0] = auVar42[2];
  auVar35._11_4_ = 0;
  auVar31[2] = auVar42[1];
  auVar31._0_2_ = auVar42._0_2_;
  auVar31._3_12_ = SUB1512(auVar35 << 0x20,3);
  auVar42._0_2_ = auVar42._0_2_ & 0xff;
  auVar42._2_13_ = auVar31._2_13_;
  auVar42[0xf] = 0;
  auVar42 = pshuflw(auVar42,auVar42,0x1b);
  auVar42 = pshufhw(auVar42,auVar42,0x1b);
  sVar3 = auVar42._0_2_;
  sVar4 = auVar42._2_2_;
  sVar5 = auVar42._4_2_;
  sVar6 = auVar42._6_2_;
  sVar7 = auVar42._8_2_;
  sVar8 = auVar42._10_2_;
  sVar9 = auVar42._12_2_;
  sVar10 = auVar42._14_2_;
  sVar11 = auVar43._0_2_;
  sVar12 = auVar43._2_2_;
  sVar13 = auVar43._4_2_;
  sVar14 = auVar43._6_2_;
  sVar15 = auVar43._8_2_;
  sVar16 = auVar43._10_2_;
  sVar17 = auVar43._12_2_;
  sVar18 = auVar43._14_2_;
  *param_3 = (0 < sVar3) * (sVar3 < 0x100) * auVar42[0] - (0xff < sVar3);
  param_3[1] = (0 < sVar4) * (sVar4 < 0x100) * auVar42[2] - (0xff < sVar4);
  param_3[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar42[4] - (0xff < sVar5);
  param_3[3] = (0 < sVar6) * (sVar6 < 0x100) * auVar42[6] - (0xff < sVar6);
  param_3[4] = (0 < sVar7) * (sVar7 < 0x100) * auVar42[8] - (0xff < sVar7);
  param_3[5] = (0 < sVar8) * (sVar8 < 0x100) * auVar42[10] - (0xff < sVar8);
  param_3[6] = (0 < sVar9) * (sVar9 < 0x100) * auVar42[0xc] - (0xff < sVar9);
  param_3[7] = (0 < sVar10) * (sVar10 < 0x100) * auVar42[0xe] - (0xff < sVar10);
  param_3[8] = (0 < sVar11) * (sVar11 < 0x100) * auVar43[0] - (0xff < sVar11);
  param_3[9] = (0 < sVar12) * (sVar12 < 0x100) * auVar43[2] - (0xff < sVar12);
  param_3[10] = (0 < sVar13) * (sVar13 < 0x100) * auVar43[4] - (0xff < sVar13);
  param_3[0xb] = (0 < sVar14) * (sVar14 < 0x100) * auVar43[6] - (0xff < sVar14);
  param_3[0xc] = (0 < sVar15) * (sVar15 < 0x100) * auVar43[8] - (0xff < sVar15);
  param_3[0xd] = (0 < sVar16) * (sVar16 < 0x100) * auVar43[10] - (0xff < sVar16);
  param_3[0xe] = (0 < sVar17) * (sVar17 < 0x100) * auVar43[0xc] - (0xff < sVar17);
  param_3[0xf] = (0 < sVar18) * (sVar18 < 0x100) * auVar43[0xe] - (0xff < sVar18);
  auVar42 = param_1[1];
  auVar44[1] = 0;
  auVar44[0] = auVar42[8];
  auVar44[2] = auVar42[9];
  auVar44[3] = 0;
  auVar44[4] = auVar42[10];
  auVar44[5] = 0;
  auVar44[6] = auVar42[0xb];
  auVar44[7] = 0;
  auVar44[8] = auVar42[0xc];
  auVar44[9] = 0;
  auVar44[10] = auVar42[0xd];
  auVar44[0xb] = 0;
  auVar44[0xc] = auVar42[0xe];
  auVar44[0xd] = 0;
  auVar44[0xe] = auVar42[0xf];
  auVar44[0xf] = 0;
  auVar43 = pshuflw(auVar44,auVar44,0x1b);
  auVar45 = pshufhw(auVar43,auVar43,0x1b);
  auVar20[0xd] = 0;
  auVar20._0_13_ = auVar42._0_13_;
  auVar20[0xe] = auVar42[7];
  auVar22[0xc] = auVar42[6];
  auVar22._0_12_ = auVar42._0_12_;
  auVar22._13_2_ = auVar20._13_2_;
  auVar24[0xb] = 0;
  auVar24._0_11_ = auVar42._0_11_;
  auVar24._12_3_ = auVar22._12_3_;
  auVar26[10] = auVar42[5];
  auVar26._0_10_ = auVar42._0_10_;
  auVar26._11_4_ = auVar24._11_4_;
  auVar28[9] = 0;
  auVar28._0_9_ = auVar42._0_9_;
  auVar28._10_5_ = auVar26._10_5_;
  auVar30[8] = auVar42[4];
  auVar30._0_8_ = auVar42._0_8_;
  auVar30._9_6_ = auVar28._9_6_;
  auVar36._7_8_ = 0;
  auVar36._0_7_ = auVar30._8_7_;
  auVar37._1_8_ = SUB158(auVar36 << 0x40,7);
  auVar37[0] = auVar42[3];
  auVar37._9_6_ = 0;
  auVar38._1_10_ = SUB1510(auVar37 << 0x30,5);
  auVar38[0] = auVar42[2];
  auVar38._11_4_ = 0;
  auVar32[2] = auVar42[1];
  auVar32._0_2_ = auVar42._0_2_;
  auVar32._3_12_ = SUB1512(auVar38 << 0x20,3);
  auVar43._0_2_ = auVar42._0_2_ & 0xff;
  auVar43._2_13_ = auVar32._2_13_;
  auVar43[0xf] = 0;
  auVar42 = pshuflw(auVar43,auVar43,0x1b);
  auVar42 = pshufhw(auVar42,auVar42,0x1b);
  sVar3 = auVar42._0_2_;
  sVar4 = auVar42._2_2_;
  sVar5 = auVar42._4_2_;
  sVar6 = auVar42._6_2_;
  sVar7 = auVar42._8_2_;
  sVar8 = auVar42._10_2_;
  sVar9 = auVar42._12_2_;
  sVar10 = auVar42._14_2_;
  sVar11 = auVar45._0_2_;
  sVar12 = auVar45._2_2_;
  sVar13 = auVar45._4_2_;
  sVar14 = auVar45._6_2_;
  sVar15 = auVar45._8_2_;
  sVar16 = auVar45._10_2_;
  sVar17 = auVar45._12_2_;
  sVar18 = auVar45._14_2_;
  param_3[0x10] = (0 < sVar3) * (sVar3 < 0x100) * auVar42[0] - (0xff < sVar3);
  param_3[0x11] = (0 < sVar4) * (sVar4 < 0x100) * auVar42[2] - (0xff < sVar4);
  param_3[0x12] = (0 < sVar5) * (sVar5 < 0x100) * auVar42[4] - (0xff < sVar5);
  param_3[0x13] = (0 < sVar6) * (sVar6 < 0x100) * auVar42[6] - (0xff < sVar6);
  param_3[0x14] = (0 < sVar7) * (sVar7 < 0x100) * auVar42[8] - (0xff < sVar7);
  param_3[0x15] = (0 < sVar8) * (sVar8 < 0x100) * auVar42[10] - (0xff < sVar8);
  param_3[0x16] = (0 < sVar9) * (sVar9 < 0x100) * auVar42[0xc] - (0xff < sVar9);
  param_3[0x17] = (0 < sVar10) * (sVar10 < 0x100) * auVar42[0xe] - (0xff < sVar10);
  param_3[0x18] = (0 < sVar11) * (sVar11 < 0x100) * auVar45[0] - (0xff < sVar11);
  param_3[0x19] = (0 < sVar12) * (sVar12 < 0x100) * auVar45[2] - (0xff < sVar12);
  param_3[0x1a] = (0 < sVar13) * (sVar13 < 0x100) * auVar45[4] - (0xff < sVar13);
  param_3[0x1b] = (0 < sVar14) * (sVar14 < 0x100) * auVar45[6] - (0xff < sVar14);
  param_3[0x1c] = (0 < sVar15) * (sVar15 < 0x100) * auVar45[8] - (0xff < sVar15);
  param_3[0x1d] = (0 < sVar16) * (sVar16 < 0x100) * auVar45[10] - (0xff < sVar16);
  param_3[0x1e] = (0 < sVar17) * (sVar17 < 0x100) * auVar45[0xc] - (0xff < sVar17);
  param_3[0x1f] = (0 < sVar18) * (sVar18 < 0x100) * auVar45[0xe] - (0xff < sVar18);
  return;
}


