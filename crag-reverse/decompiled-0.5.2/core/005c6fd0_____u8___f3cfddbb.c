// 005c6fd0 <&[u8]>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,
   typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,
   typenum[22d8d9cd1d3febd5]::bit::B1>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   typenum[22d8d9cd1d3febd5]::bit::B0>, typenum[22d8d9cd1d3febd5]::bit::B0>,
   sha2[7efb180a76699f7c]::OidSha256>> as digest[f0d79a819dec3844]::digest::Digest>::digest::<&[u8]>
    */

void __rustcall
<digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
::digest::<&[u8]>(char *param_1,undefined8 param_2,ulonglong param_3)

{
  short sVar1;
  short sVar2;
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
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 auVar36 [15];
  undefined1 auVar37 [15];
  undefined1 auVar38 [15];
  undefined1 auVar39 [15];
  undefined1 auVar40 [15];
  undefined1 auVar41 [15];
  undefined1 auVar42 [15];
  undefined1 auVar43 [15];
  undefined1 auVar44 [15];
  undefined1 auVar45 [15];
  undefined1 auVar46 [15];
  undefined1 auVar47 [16];
  undefined1 auVar48 [15];
  undefined1 auVar49 [15];
  undefined1 auVar50 [15];
  undefined1 auVar51 [15];
  undefined1 auVar52 [15];
  undefined1 auVar53 [15];
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined *puVar58;
  ulonglong uVar59;
  byte bVar60;
  ulonglong uVar61;
  undefined8 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ulonglong local_128;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  byte local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  uVar57 = _UNK_0018cff8;
  uVar56 = _DAT_0018cff0;
  uVar55 = _UNK_0018cfe8;
  uVar54 = _DAT_0018cfe0;
  local_128 = 0;
  if (param_3 < 0x40) {
    uVar61 = param_3;
  }
  else {
    uVar61 = (ulonglong)((uint)param_3 & 0x3f);
    local_128 = param_3 >> 6;
    (*(code *)PTR_compress256_00799158)();
  }
  (*(code *)PTR_memcpy_00799008)();
  bVar60 = (byte)uVar61;
  local_78 = 0;
  uStack_b0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar59 = local_128 << 9;
  uVar59 = (local_128 & 0x7fffffffffffff) >> 0x2f | (uVar59 & 0xff000000000000) >> 0x28 |
           (uVar59 & 0xff0000000000) >> 0x18 | (uVar59 & 0xff00000000) >> 8 |
           (uVar59 & 0xff000000) << 8 | (uVar59 & 0xff0000) << 0x18 |
           (((uint)bVar60 * 8 | uVar59) & 0xff00) << 0x28 | (ulonglong)((uint)bVar60 * 8) << 0x38;
  local_70 = bVar60;
  local_68[(uVar61 & 0xff) - 0x48] = 0x80;
  uVar62 = uVar54;
  if (bVar60 != 0x3f) {
    uVar62 = (*(code *)PTR_memset_00799090)(uVar54,uVar61 & 0xff ^ 0x3f);
    if (7 < (bVar60 ^ 0x38)) {
      local_78 = uVar59;
      (*(code *)PTR_compress256_00799158)(uVar62,1);
      goto LAB_005c71d3;
    }
  }
  puVar58 = PTR_compress256_00799158;
  (*(code *)PTR_compress256_00799158)(uVar62,1);
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_38 = 0;
  local_30 = uVar59;
  (*(code *)puVar58)(0,1);
LAB_005c71d3:
  auVar63._8_8_ = uVar55;
  auVar63._0_8_ = uVar54;
  auVar47._8_8_ = uVar57;
  auVar47._0_8_ = uVar56;
  auVar66[1] = 0;
  auVar66[0] = (byte)uVar55;
  auVar66[2] = (char)((ulonglong)uVar55 >> 8);
  auVar66[3] = 0;
  auVar66[4] = (char)((ulonglong)uVar55 >> 0x10);
  auVar66[5] = 0;
  auVar66[6] = (char)((ulonglong)uVar55 >> 0x18);
  auVar66[7] = 0;
  auVar66[8] = (char)((ulonglong)uVar55 >> 0x20);
  auVar66[9] = 0;
  auVar66[10] = (char)((ulonglong)uVar55 >> 0x28);
  auVar66[0xb] = 0;
  auVar66[0xc] = (char)((ulonglong)uVar55 >> 0x30);
  auVar66[0xd] = 0;
  auVar66[0xe] = (char)((ulonglong)uVar55 >> 0x38);
  auVar66[0xf] = 0;
  auVar65 = pshuflw(auVar66,auVar66,0x1b);
  auVar66 = pshufhw(auVar65,auVar65,0x1b);
  auVar33[0xd] = 0;
  auVar33._0_13_ = auVar63._0_13_;
  auVar33[0xe] = (char)((ulonglong)uVar54 >> 0x38);
  auVar35[0xc] = (char)((ulonglong)uVar54 >> 0x30);
  auVar35._0_12_ = auVar63._0_12_;
  auVar35._13_2_ = auVar33._13_2_;
  auVar37[0xb] = 0;
  auVar37._0_11_ = auVar63._0_11_;
  auVar37._12_3_ = auVar35._12_3_;
  auVar39[10] = (char)((ulonglong)uVar54 >> 0x28);
  auVar39._0_10_ = auVar63._0_10_;
  auVar39._11_4_ = auVar37._11_4_;
  auVar41[9] = 0;
  auVar41._0_9_ = auVar63._0_9_;
  auVar41._10_5_ = auVar39._10_5_;
  auVar43[8] = (char)((ulonglong)uVar54 >> 0x20);
  auVar43._0_8_ = uVar54;
  auVar43._9_6_ = auVar41._9_6_;
  auVar48._7_8_ = 0;
  auVar48._0_7_ = auVar43._8_7_;
  auVar49._1_8_ = SUB158(auVar48 << 0x40,7);
  auVar49[0] = (char)((ulonglong)uVar54 >> 0x18);
  auVar49._9_6_ = 0;
  auVar50._1_10_ = SUB1510(auVar49 << 0x30,5);
  auVar50[0] = (char)((ulonglong)uVar54 >> 0x10);
  auVar50._11_4_ = 0;
  auVar45[2] = (char)((ulonglong)uVar54 >> 8);
  auVar45._0_2_ = (ushort)uVar54;
  auVar45._3_12_ = SUB1512(auVar50 << 0x20,3);
  auVar65._0_2_ = (ushort)uVar54 & 0xff;
  auVar65._2_13_ = auVar45._2_13_;
  auVar65[0xf] = 0;
  auVar63 = pshuflw(auVar65,auVar65,0x1b);
  auVar65 = pshufhw(auVar63,auVar63,0x1b);
  sVar1 = auVar65._0_2_;
  sVar3 = auVar65._2_2_;
  sVar5 = auVar65._4_2_;
  sVar7 = auVar65._6_2_;
  sVar9 = auVar65._8_2_;
  sVar11 = auVar65._10_2_;
  sVar13 = auVar65._12_2_;
  sVar15 = auVar65._14_2_;
  sVar17 = auVar66._0_2_;
  sVar19 = auVar66._2_2_;
  sVar21 = auVar66._4_2_;
  sVar23 = auVar66._6_2_;
  sVar25 = auVar66._8_2_;
  sVar27 = auVar66._10_2_;
  sVar29 = auVar66._12_2_;
  sVar31 = auVar66._14_2_;
  auVar67[1] = 0;
  auVar67[0] = (byte)uVar57;
  auVar67[2] = (char)((ulonglong)uVar57 >> 8);
  auVar67[3] = 0;
  auVar67[4] = (char)((ulonglong)uVar57 >> 0x10);
  auVar67[5] = 0;
  auVar67[6] = (char)((ulonglong)uVar57 >> 0x18);
  auVar67[7] = 0;
  auVar67[8] = (char)((ulonglong)uVar57 >> 0x20);
  auVar67[9] = 0;
  auVar67[10] = (char)((ulonglong)uVar57 >> 0x28);
  auVar67[0xb] = 0;
  auVar67[0xc] = (char)((ulonglong)uVar57 >> 0x30);
  auVar67[0xd] = 0;
  auVar67[0xe] = (char)((ulonglong)uVar57 >> 0x38);
  auVar67[0xf] = 0;
  auVar63 = pshuflw(auVar67,auVar67,0x1b);
  auVar67 = pshufhw(auVar63,auVar63,0x1b);
  auVar34[0xd] = 0;
  auVar34._0_13_ = auVar47._0_13_;
  auVar34[0xe] = (char)((ulonglong)uVar56 >> 0x38);
  auVar36[0xc] = (char)((ulonglong)uVar56 >> 0x30);
  auVar36._0_12_ = auVar47._0_12_;
  auVar36._13_2_ = auVar34._13_2_;
  auVar38[0xb] = 0;
  auVar38._0_11_ = auVar47._0_11_;
  auVar38._12_3_ = auVar36._12_3_;
  auVar40[10] = (char)((ulonglong)uVar56 >> 0x28);
  auVar40._0_10_ = auVar47._0_10_;
  auVar40._11_4_ = auVar38._11_4_;
  auVar42[9] = 0;
  auVar42._0_9_ = auVar47._0_9_;
  auVar42._10_5_ = auVar40._10_5_;
  auVar44[8] = (char)((ulonglong)uVar56 >> 0x20);
  auVar44._0_8_ = uVar56;
  auVar44._9_6_ = auVar42._9_6_;
  auVar51._7_8_ = 0;
  auVar51._0_7_ = auVar44._8_7_;
  auVar52._1_8_ = SUB158(auVar51 << 0x40,7);
  auVar52[0] = (char)((ulonglong)uVar56 >> 0x18);
  auVar52._9_6_ = 0;
  auVar53._1_10_ = SUB1510(auVar52 << 0x30,5);
  auVar53[0] = (char)((ulonglong)uVar56 >> 0x10);
  auVar53._11_4_ = 0;
  auVar46[2] = (char)((ulonglong)uVar56 >> 8);
  auVar46._0_2_ = (ushort)uVar56;
  auVar46._3_12_ = SUB1512(auVar53 << 0x20,3);
  auVar64._0_2_ = (ushort)uVar56 & 0xff;
  auVar64._2_13_ = auVar46._2_13_;
  auVar64[0xf] = 0;
  auVar63 = pshuflw((undefined1  [16])0x0,auVar64,0x1b);
  auVar63 = pshufhw(auVar63,auVar63,0x1b);
  sVar2 = auVar63._0_2_;
  sVar4 = auVar63._2_2_;
  sVar6 = auVar63._4_2_;
  sVar8 = auVar63._6_2_;
  sVar10 = auVar63._8_2_;
  sVar12 = auVar63._10_2_;
  sVar14 = auVar63._12_2_;
  sVar16 = auVar63._14_2_;
  sVar18 = auVar67._0_2_;
  sVar20 = auVar67._2_2_;
  sVar22 = auVar67._4_2_;
  sVar24 = auVar67._6_2_;
  sVar26 = auVar67._8_2_;
  sVar28 = auVar67._10_2_;
  sVar30 = auVar67._12_2_;
  sVar32 = auVar67._14_2_;
  *param_1 = (0 < sVar1) * (sVar1 < 0x100) * auVar65[0] - (0xff < sVar1);
  param_1[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar65[2] - (0xff < sVar3);
  param_1[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar65[4] - (0xff < sVar5);
  param_1[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar65[6] - (0xff < sVar7);
  param_1[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar65[8] - (0xff < sVar9);
  param_1[5] = (0 < sVar11) * (sVar11 < 0x100) * auVar65[10] - (0xff < sVar11);
  param_1[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar65[0xc] - (0xff < sVar13);
  param_1[7] = (0 < sVar15) * (sVar15 < 0x100) * auVar65[0xe] - (0xff < sVar15);
  param_1[8] = (0 < sVar17) * (sVar17 < 0x100) * auVar66[0] - (0xff < sVar17);
  param_1[9] = (0 < sVar19) * (sVar19 < 0x100) * auVar66[2] - (0xff < sVar19);
  param_1[10] = (0 < sVar21) * (sVar21 < 0x100) * auVar66[4] - (0xff < sVar21);
  param_1[0xb] = (0 < sVar23) * (sVar23 < 0x100) * auVar66[6] - (0xff < sVar23);
  param_1[0xc] = (0 < sVar25) * (sVar25 < 0x100) * auVar66[8] - (0xff < sVar25);
  param_1[0xd] = (0 < sVar27) * (sVar27 < 0x100) * auVar66[10] - (0xff < sVar27);
  param_1[0xe] = (0 < sVar29) * (sVar29 < 0x100) * auVar66[0xc] - (0xff < sVar29);
  param_1[0xf] = (0 < sVar31) * (sVar31 < 0x100) * auVar66[0xe] - (0xff < sVar31);
  param_1[0x10] = (0 < sVar2) * (sVar2 < 0x100) * auVar63[0] - (0xff < sVar2);
  param_1[0x11] = (0 < sVar4) * (sVar4 < 0x100) * auVar63[2] - (0xff < sVar4);
  param_1[0x12] = (0 < sVar6) * (sVar6 < 0x100) * auVar63[4] - (0xff < sVar6);
  param_1[0x13] = (0 < sVar8) * (sVar8 < 0x100) * auVar63[6] - (0xff < sVar8);
  param_1[0x14] = (0 < sVar10) * (sVar10 < 0x100) * auVar63[8] - (0xff < sVar10);
  param_1[0x15] = (0 < sVar12) * (sVar12 < 0x100) * auVar63[10] - (0xff < sVar12);
  param_1[0x16] = (0 < sVar14) * (sVar14 < 0x100) * auVar63[0xc] - (0xff < sVar14);
  param_1[0x17] = (0 < sVar16) * (sVar16 < 0x100) * auVar63[0xe] - (0xff < sVar16);
  param_1[0x18] = (0 < sVar18) * (sVar18 < 0x100) * auVar67[0] - (0xff < sVar18);
  param_1[0x19] = (0 < sVar20) * (sVar20 < 0x100) * auVar67[2] - (0xff < sVar20);
  param_1[0x1a] = (0 < sVar22) * (sVar22 < 0x100) * auVar67[4] - (0xff < sVar22);
  param_1[0x1b] = (0 < sVar24) * (sVar24 < 0x100) * auVar67[6] - (0xff < sVar24);
  param_1[0x1c] = (0 < sVar26) * (sVar26 < 0x100) * auVar67[8] - (0xff < sVar26);
  param_1[0x1d] = (0 < sVar28) * (sVar28 < 0x100) * auVar67[10] - (0xff < sVar28);
  param_1[0x1e] = (0 < sVar30) * (sVar30 < 0x100) * auVar67[0xc] - (0xff < sVar30);
  param_1[0x1f] = (0 < sVar32) * (sVar32 < 0x100) * auVar67[0xe] - (0xff < sVar32);
  return;
}


