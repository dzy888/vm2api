// 0051fee0 from_value

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>::from_value */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::CanonicalToolCall>::from_value
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

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
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  undefined1 auVar24 [15];
  undefined1 auVar25 [15];
  undefined1 auVar26 [15];
  undefined2 *puVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [15];
  undefined1 auVar31 [15];
  undefined1 auVar32 [15];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined3 uVar36;
  uint uVar37;
  undefined5 uVar38;
  undefined1 auVar39 [12];
  undefined1 auVar40 [14];
  longlong lVar41;
  undefined2 *puVar42;
  undefined8 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *local_f8;
  code *pcStack_f0;
  undefined8 *local_e0;
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
  undefined1 auStack_c8 [16];
  undefined8 local_b8;
  undefined2 local_b0;
  char cStack_ae;
  undefined5 uStack_ad;
  undefined1 auStack_a8 [11];
  undefined1 local_9d [16];
  undefined1 local_8d [13];
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char local_50 [8];
  undefined1 local_48 [24];
  
  local_e0 = param_2;
  if (*param_4 == '\x03') {
    auVar48 = ::<str>::trim_matches::<<char>::is_whitespace>
                        (*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
    if (auVar48._8_8_ == 0) {
      auStack_c8._8_8_ = _UNK_0018cff8;
      auStack_c8._0_8_ = _DAT_0018cff0;
      local_d8 = (byte)_DAT_0018cfe0;
      cStack_d7 = (char)((ulonglong)_DAT_0018cfe0 >> 8);
      cStack_d6 = (char)((ulonglong)_DAT_0018cfe0 >> 0x10);
      cStack_d5 = (char)((ulonglong)_DAT_0018cfe0 >> 0x18);
      cStack_d4 = (char)((ulonglong)_DAT_0018cfe0 >> 0x20);
      cStack_d3 = (char)((ulonglong)_DAT_0018cfe0 >> 0x28);
      cStack_d2 = (char)((ulonglong)_DAT_0018cfe0 >> 0x30);
      cStack_d1 = (char)((ulonglong)_DAT_0018cfe0 >> 0x38);
      bStack_d0 = (byte)_UNK_0018cfe8;
      cStack_cf = (char)((ulonglong)_UNK_0018cfe8 >> 8);
      cStack_ce = (char)((ulonglong)_UNK_0018cfe8 >> 0x10);
      cStack_cd = (char)((ulonglong)_UNK_0018cfe8 >> 0x18);
      cStack_cc = (char)((ulonglong)_UNK_0018cfe8 >> 0x20);
      cStack_cb = (char)((ulonglong)_UNK_0018cfe8 >> 0x28);
      cStack_ca = (char)((ulonglong)_UNK_0018cfe8 >> 0x30);
      cStack_c9 = (char)((ulonglong)_UNK_0018cfe8 >> 0x38);
      local_b8 = 0;
      local_b0 = 0x7d7b;
      local_70 = 2;
      cStack_ae = -0x80;
      uStack_ad = 0;
      auStack_a8 = SUB1611((undefined1  [16])0x0,5);
      local_9d = (undefined1  [16])0x0;
      local_8d = SUB1613((undefined1  [16])0x0,0);
      uStack_80 = 0;
      uStack_7d = 0;
      local_78 = 0x1000000000000000;
      (*(code *)PTR_compress256_00799158)(0,1);
      uVar36 = CONCAT12(cStack_cf,CONCAT11(bStack_d0,cStack_d1));
      uVar37 = CONCAT13(cStack_ce,uVar36);
      uVar38 = CONCAT14(cStack_cd,uVar37);
      auVar40[5] = cStack_cc;
      auVar40._0_5_ = uVar38;
      auVar44[1] = 0;
      auVar44[0] = bStack_d0;
      auVar44[2] = cStack_cf;
      auVar44[3] = 0;
      auVar44[4] = cStack_ce;
      auVar44[5] = 0;
      auVar44[6] = cStack_cd;
      auVar44[7] = 0;
      auVar44[8] = cStack_cc;
      auVar44[9] = 0;
      auVar44[10] = cStack_cb;
      auVar44[0xb] = 0;
      auVar44[0xc] = cStack_ca;
      auVar44[0xd] = 0;
      auVar44[0xe] = cStack_c9;
      auVar44[0xf] = 0;
      auVar48 = pshuflw(auVar44,auVar44,0x1b);
      auVar45 = pshufhw(auVar48,auVar48,0x1b);
      auVar40._6_8_ = 0;
      auVar17[0xe] = cStack_d1;
      auVar17._0_14_ = auVar40 << 0x38;
      auVar39._4_8_ = 0;
      auVar39._0_4_ = uVar37;
      auVar20._12_3_ = (int3)(CONCAT26(auVar17._13_2_,CONCAT15(cStack_d2,uVar38)) >> 0x28);
      auVar20._0_12_ = auVar39 << 0x38;
      auVar23._10_5_ = (int5)(CONCAT44(auVar20._11_4_,CONCAT13(cStack_d3,uVar36)) >> 0x18);
      auVar23._0_10_ = (unkuint10)CONCAT11(bStack_d0,cStack_d1) << 0x38;
      auVar30._7_8_ = 0;
      auVar30._0_7_ = (uint7)(CONCAT62(auVar23._9_6_,CONCAT11(cStack_d4,cStack_d1)) >> 8);
      auVar31._1_8_ = SUB158(auVar30 << 0x40,7);
      auVar31[0] = cStack_d5;
      auVar31._9_6_ = 0;
      auVar32._1_10_ = SUB1510(auVar31 << 0x30,5);
      auVar32[0] = cStack_d6;
      auVar32._11_4_ = 0;
      auVar47._3_12_ = SUB1512(auVar32 << 0x20,3);
      auVar47[2] = cStack_d7;
      auVar47[1] = 0;
      auVar47[0] = local_d8;
      auVar47[0xf] = 0;
      auVar48 = pshuflw(auVar47,auVar47,0x1b);
      auVar48 = pshufhw(auVar48,auVar48,0x1b);
      sVar1 = auVar48._0_2_;
      local_d8 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[0] - (0xff < sVar1);
      sVar1 = auVar48._2_2_;
      cStack_d7 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[2] - (0xff < sVar1);
      sVar1 = auVar48._4_2_;
      cStack_d6 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[4] - (0xff < sVar1);
      sVar1 = auVar48._6_2_;
      cStack_d5 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[6] - (0xff < sVar1);
      sVar1 = auVar48._8_2_;
      cStack_d4 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[8] - (0xff < sVar1);
      sVar1 = auVar48._10_2_;
      cStack_d3 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[10] - (0xff < sVar1);
      sVar1 = auVar48._12_2_;
      cStack_d2 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[0xc] - (0xff < sVar1);
      sVar1 = auVar48._14_2_;
      cStack_d1 = (0 < sVar1) * (sVar1 < 0x100) * auVar48[0xe] - (0xff < sVar1);
      sVar1 = auVar45._0_2_;
      bStack_d0 = (0 < sVar1) * (sVar1 < 0x100) * auVar45[0] - (0xff < sVar1);
      sVar1 = auVar45._2_2_;
      cStack_cf = (0 < sVar1) * (sVar1 < 0x100) * auVar45[2] - (0xff < sVar1);
      sVar1 = auVar45._4_2_;
      cStack_ce = (0 < sVar1) * (sVar1 < 0x100) * auVar45[4] - (0xff < sVar1);
      sVar1 = auVar45._6_2_;
      cStack_cd = (0 < sVar1) * (sVar1 < 0x100) * auVar45[6] - (0xff < sVar1);
      sVar1 = auVar45._8_2_;
      cStack_cc = (0 < sVar1) * (sVar1 < 0x100) * auVar45[8] - (0xff < sVar1);
      sVar1 = auVar45._10_2_;
      cStack_cb = (0 < sVar1) * (sVar1 < 0x100) * auVar45[10] - (0xff < sVar1);
      sVar1 = auVar45._12_2_;
      cStack_ca = (0 < sVar1) * (sVar1 < 0x100) * auVar45[0xc] - (0xff < sVar1);
      sVar1 = auVar45._14_2_;
      cStack_c9 = (0 < sVar1) * (sVar1 < 0x100) * auVar45[0xe] - (0xff < sVar1);
      auVar46[1] = 0;
      auVar46[0] = auStack_c8[8];
      auVar46[2] = auStack_c8[9];
      auVar46[3] = 0;
      auVar46[4] = auStack_c8[10];
      auVar46[5] = 0;
      auVar46[6] = auStack_c8[0xb];
      auVar46[7] = 0;
      auVar46[8] = auStack_c8[0xc];
      auVar46[9] = 0;
      auVar46[10] = auStack_c8[0xd];
      auVar46[0xb] = 0;
      auVar46[0xc] = auStack_c8[0xe];
      auVar46[0xd] = 0;
      auVar46[0xe] = auStack_c8[0xf];
      auVar46[0xf] = 0;
      auVar48 = pshuflw(auVar46,auVar46,0x1b);
      auVar47 = pshufhw(auVar48,auVar48,0x1b);
      auVar18[0xd] = 0;
      auVar18._0_13_ = auStack_c8._0_13_;
      auVar18[0xe] = auStack_c8[7];
      auVar19[0xc] = auStack_c8[6];
      auVar19._0_12_ = auStack_c8._0_12_;
      auVar19._13_2_ = auVar18._13_2_;
      auVar21[0xb] = 0;
      auVar21._0_11_ = auStack_c8._0_11_;
      auVar21._12_3_ = auVar19._12_3_;
      auVar22[10] = auStack_c8[5];
      auVar22._0_10_ = auStack_c8._0_10_;
      auVar22._11_4_ = auVar21._11_4_;
      auVar24[9] = 0;
      auVar24._0_9_ = auStack_c8._0_9_;
      auVar24._10_5_ = auVar22._10_5_;
      auVar25[8] = auStack_c8[4];
      auVar25._0_8_ = auStack_c8._0_8_;
      auVar25._9_6_ = auVar24._9_6_;
      auVar33._7_8_ = 0;
      auVar33._0_7_ = auVar25._8_7_;
      auVar34._1_8_ = SUB158(auVar33 << 0x40,7);
      auVar34[0] = auStack_c8[3];
      auVar34._9_6_ = 0;
      auVar35._1_10_ = SUB1510(auVar34 << 0x30,5);
      auVar35[0] = auStack_c8[2];
      auVar35._11_4_ = 0;
      auVar26[2] = auStack_c8[1];
      auVar26._0_2_ = auStack_c8._0_2_;
      auVar26._3_12_ = SUB1512(auVar35 << 0x20,3);
      auVar45._0_2_ = auStack_c8._0_2_ & 0xff;
      auVar45._2_13_ = auVar26._2_13_;
      auVar45[0xf] = 0;
      auVar48 = pshuflw(auVar45,auVar45,0x1b);
      auVar48 = pshufhw(auVar48,auVar48,0x1b);
      sVar1 = auVar48._0_2_;
      sVar2 = auVar48._2_2_;
      sVar3 = auVar48._4_2_;
      sVar4 = auVar48._6_2_;
      sVar5 = auVar48._8_2_;
      sVar6 = auVar48._10_2_;
      sVar7 = auVar48._12_2_;
      sVar8 = auVar48._14_2_;
      sVar9 = auVar47._0_2_;
      sVar10 = auVar47._2_2_;
      sVar11 = auVar47._4_2_;
      sVar12 = auVar47._6_2_;
      sVar13 = auVar47._8_2_;
      sVar14 = auVar47._10_2_;
      sVar15 = auVar47._12_2_;
      sVar16 = auVar47._14_2_;
      auStack_c8[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar48[2] - (0xff < sVar2);
      auStack_c8[0] = (0 < sVar1) * (sVar1 < 0x100) * auVar48[0] - (0xff < sVar1);
      auStack_c8[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar48[4] - (0xff < sVar3);
      auStack_c8[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar48[6] - (0xff < sVar4);
      auStack_c8[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar48[8] - (0xff < sVar5);
      auStack_c8[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar48[10] - (0xff < sVar6);
      auStack_c8[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar48[0xc] - (0xff < sVar7);
      auStack_c8[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar48[0xe] - (0xff < sVar8);
      auStack_c8[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar47[0] - (0xff < sVar9);
      auStack_c8[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar47[2] - (0xff < sVar10);
      auStack_c8[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar47[4] - (0xff < sVar11);
      auStack_c8[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar47[6] - (0xff < sVar12);
      auStack_c8[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar47[8] - (0xff < sVar13);
      auStack_c8[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar47[10] - (0xff < sVar14);
      auStack_c8[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar47[0xc] - (0xff < sVar15);
      auStack_c8[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar47[0xe] - (0xff < sVar16);
      pcStack_f0 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                   ::fmt;
      local_f8 = &local_d8;
      (*(code *)PTR_format_inner_00799048)();
    }
    else {
      local_d8 = auVar48[0];
      cStack_d7 = auVar48[1];
      cStack_d6 = auVar48[2];
      cStack_d5 = auVar48[3];
      cStack_d4 = auVar48[4];
      cStack_d3 = auVar48[5];
      cStack_d2 = auVar48[6];
      cStack_d1 = auVar48[7];
      bStack_d0 = auVar48[8];
      cStack_cf = auVar48[9];
      cStack_ce = auVar48[10];
      cStack_cd = auVar48[0xb];
      cStack_cc = auVar48[0xc];
      cStack_cb = auVar48[0xd];
      cStack_ca = auVar48[0xe];
      cStack_c9 = auVar48[0xf];
      auStack_c8 = (undefined1  [16])0x0;
      local_b0 = auVar48._8_2_;
      uStack_ad = auVar48._11_5_;
      local_b8 = auVar48._0_8_;
      cStack_ae = cStack_ce;
      serde_json[dc3825464c436029]::de::from_trait::
      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                (local_50,&local_d8);
      if (local_50[0] == -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::error::Error>
                  (local_48);
        uVar43 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                 ::digest::<&[u8]>(&local_d8,auVar48._0_8_,auVar48._8_8_);
        pcStack_f0 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                     ::fmt;
        local_f8 = &local_d8;
        (*(code *)PTR_format_inner_00799048)(uVar43,&local_f8);
      }
      else {
        local_d8 = 0;
        cStack_d7 = '\0';
        cStack_d6 = '\0';
        cStack_d5 = '\0';
        cStack_d4 = '\0';
        cStack_d3 = '\0';
        cStack_d2 = '\0';
        cStack_d1 = '\0';
        bStack_d0 = '\x01';
        cStack_cf = '\0';
        cStack_ce = '\0';
        cStack_cd = '\0';
        cStack_cc = '\0';
        cStack_cb = '\0';
        cStack_ca = '\0';
        cStack_c9 = '\0';
        auVar29._8_8_ = 0;
        auVar29._0_8_ = auStack_c8._8_8_;
        auStack_c8 = auVar29 << 0x40;
        craggemini_core[66f3c71560d70857]::resume::write_canonical_json(local_50,&local_d8);
        puVar27 = (undefined2 *)
                  CONCAT17(cStack_d1,
                           CONCAT16(cStack_d2,
                                    CONCAT15(cStack_d3,
                                             CONCAT14(cStack_d4,
                                                      CONCAT13(cStack_d5,
                                                               CONCAT12(cStack_d6,
                                                                        CONCAT11(cStack_d7,local_d8)
                                                                       ))))));
        uVar43 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
                 ::digest::<&[u8]>(&local_d8,
                                   CONCAT17(cStack_c9,
                                            CONCAT16(cStack_ca,
                                                     CONCAT15(cStack_cb,
                                                              CONCAT14(cStack_cc,
                                                                       CONCAT13(cStack_cd,
                                                                                CONCAT12(cStack_ce,
                                                                                         CONCAT11(
                                                  cStack_cf,bStack_d0))))))),auStack_c8._0_8_);
        pcStack_f0 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                     ::fmt;
        local_f8 = &local_d8;
        uVar43 = (*(code *)PTR_format_inner_00799048)(uVar43,&local_f8);
        puVar42 = &anon_e1419182c2f95519b50f33ebe2147d9d_32_llvm_4643690396931717954;
        if (puVar27 != (undefined2 *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar43,1);
          puVar42 = puVar27;
        }
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_50,puVar42);
      }
    }
  }
  else {
    local_d8 = 0;
    cStack_d7 = '\0';
    cStack_d6 = '\0';
    cStack_d5 = '\0';
    cStack_d4 = '\0';
    cStack_d3 = '\0';
    cStack_d2 = '\0';
    cStack_d1 = '\0';
    bStack_d0 = '\x01';
    cStack_cf = '\0';
    cStack_ce = '\0';
    cStack_cd = '\0';
    cStack_cc = '\0';
    cStack_cb = '\0';
    cStack_ca = '\0';
    cStack_c9 = '\0';
    auVar48._8_8_ = 0;
    auVar48._0_8_ = auStack_c8._8_8_;
    auStack_c8 = auVar48 << 0x40;
    craggemini_core[66f3c71560d70857]::resume::write_canonical_json(param_4,&local_d8);
    lVar28 = CONCAT17(cStack_d1,
                      CONCAT16(cStack_d2,
                               CONCAT15(cStack_d3,
                                        CONCAT14(cStack_d4,
                                                 CONCAT13(cStack_d5,
                                                          CONCAT12(cStack_d6,
                                                                   CONCAT11(cStack_d7,local_d8))))))
                     );
    uVar43 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
             ::digest::<&[u8]>(&local_d8,
                               CONCAT17(cStack_c9,
                                        CONCAT16(cStack_ca,
                                                 CONCAT15(cStack_cb,
                                                          CONCAT14(cStack_cc,
                                                                   CONCAT13(cStack_cd,
                                                                            CONCAT12(cStack_ce,
                                                                                     CONCAT11(
                                                  cStack_cf,bStack_d0))))))),auStack_c8._0_8_);
    pcStack_f0 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                 ::fmt;
    local_f8 = &local_d8;
    uVar43 = (*(code *)PTR_format_inner_00799048)(uVar43,&local_f8);
    if (lVar28 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar43,1);
    }
  }
  uVar43 = craggemini_core[66f3c71560d70857]::resume::compact_json_preview(&local_d8,param_4,0x200);
  lVar28 = CONCAT17(cStack_d1,
                    CONCAT16(cStack_d2,
                             CONCAT15(cStack_d3,
                                      CONCAT14(cStack_d4,
                                               CONCAT13(cStack_d5,
                                                        CONCAT12(cStack_d6,
                                                                 CONCAT11(cStack_d7,local_d8)))))));
  if ((code *)auStack_c8._0_8_ == (code *)0x0) {
    lVar41 = -1;
    if (lVar28 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar43,1);
    }
  }
  else {
    local_f8 = (byte *)CONCAT17(cStack_c9,
                                CONCAT16(cStack_ca,
                                         CONCAT15(cStack_cb,
                                                  CONCAT14(cStack_cc,
                                                           CONCAT13(cStack_cd,
                                                                    CONCAT12(cStack_ce,
                                                                             CONCAT11(cStack_cf,
                                                                                      bStack_d0)))))
                                        ));
    pcStack_f0 = (code *)auStack_c8._0_8_;
    lVar41 = lVar28;
  }
  param_1[8] = local_e0[2];
  uVar43 = local_e0[1];
  param_1[6] = *local_e0;
  param_1[7] = uVar43;
  uVar43 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = uVar43;
  param_1[2] = param_3[2];
  param_1[5] = local_58;
  param_1[3] = local_68;
  param_1[4] = uStack_60;
  param_1[9] = lVar41;
  param_1[10] = local_f8;
  param_1[0xb] = pcStack_f0;
  return param_1;
}


