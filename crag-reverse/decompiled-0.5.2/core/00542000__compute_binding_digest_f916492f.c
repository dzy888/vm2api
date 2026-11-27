// 00542000 compute_binding_digest

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::resume::compute_binding_digest */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::resume::compute_binding_digest
          (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8,undefined8 param_9
          ,char *param_10)

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
  uint7 uVar14;
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
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
  undefined3 uVar27;
  undefined3 uVar28;
  uint uVar29;
  undefined5 uVar30;
  undefined5 uVar31;
  undefined1 auVar32 [12];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [12];
  undefined1 auVar36 [14];
  undefined1 auVar37 [14];
  undefined1 auVar38 [14];
  undefined1 auVar39 [14];
  undefined *puVar40;
  char cVar41;
  undefined8 uVar42;
  ulonglong extraout_RDX;
  ulonglong extraout_RDX_00;
  ulonglong extraout_RDX_01;
  ulonglong uVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong *plVar46;
  ulonglong uVar47;
  byte bVar48;
  uint uVar49;
  ulonglong uVar50;
  byte *pbVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 local_209;
  byte *local_208;
  code *pcStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  undefined4 local_19f;
  undefined2 local_19b;
  undefined1 local_199;
  longlong local_190;
  byte *local_188;
  code *pcStack_180;
  ulonglong local_178;
  byte local_168;
  char cStack_167;
  char cStack_166;
  char cStack_165;
  char cStack_164;
  char cStack_163;
  char cStack_162;
  char cStack_161;
  byte bStack_160;
  char cStack_15f;
  char cStack_15e;
  char cStack_15d;
  char cStack_15c;
  char cStack_15b;
  char cStack_15a;
  char cStack_159;
  byte local_158;
  char cStack_157;
  char cStack_156;
  char cStack_155;
  char cStack_154;
  char cStack_153;
  char cStack_152;
  char cStack_151;
  byte bStack_150;
  char cStack_14f;
  char cStack_14e;
  char cStack_14d;
  char cStack_14c;
  char cStack_14b;
  char cStack_14a;
  char cStack_149;
  ulonglong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined1 auStack_100 [5];
  undefined2 uStack_fb;
  undefined1 uStack_f9;
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  if (param_8 == 0) {
    param_9 = 0;
  }
  lVar44 = 1;
  if (param_8 != 0) {
    lVar44 = param_8;
  }
  local_e8 = param_1;
  local_80 = param_4;
  local_78 = param_5;
  local_70 = param_2;
  local_68 = param_3;
  uVar42 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar44,param_9);
  uVar42 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
           ::digest::<&[u8]>(&local_168,uVar42);
  pcStack_200 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                ::fmt;
  local_208 = &local_168;
  (*(code *)PTR_format_inner_00799048)(uVar42,&local_208);
  if (param_10 == (char *)0x0) {
    local_188 = (byte *)0x0;
    pcStack_180 = (code *)0x1;
    local_178 = 0;
  }
  else if (*param_10 == '\x04') {
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<alloc[12e961f32105355]::string::String,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,craggemini_core[66f3c71560d70857]::resume::canonicalize_json>>>
    ::from_iter(&local_48,*(longlong *)(param_10 + 0x10),
                *(longlong *)(param_10 + 0x18) * 0x20 + *(longlong *)(param_10 + 0x10));
    if (1 < local_38) {
      if (local_38 < 0x15) {
        core[c0acaeba6ab4c2e0]::slice::sort::shared::smallsort::insertion_sort_shift_left::
        <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
                  (local_40,local_38,1,&local_209);
      }
      else {
        core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
        <alloc[12e961f32105355]::string::String,<alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt,alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                  (local_40,local_38,&local_209);
      }
    }
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    local_1a0 = 0;
    local_208 = _DAT_0018cfe0;
    pcStack_200 = (code *)_UNK_0018cfe8;
    local_1f8 = _DAT_0018cff0;
    uStack_1f0 = _UNK_0018cff8;
    local_1e8 = 0;
    local_f8 = local_40 + local_38 * 3;
    local_168 = (byte)local_40;
    cStack_167 = (char)((ulonglong)local_40 >> 8);
    cStack_166 = (char)((ulonglong)local_40 >> 0x10);
    cStack_165 = (char)((ulonglong)local_40 >> 0x18);
    cStack_164 = (char)((ulonglong)local_40 >> 0x20);
    cStack_163 = (char)((ulonglong)local_40 >> 0x28);
    cStack_162 = (char)((ulonglong)local_40 >> 0x30);
    cStack_161 = (char)((ulonglong)local_40 >> 0x38);
    local_90 = local_48;
    local_158 = (byte)local_48;
    cStack_157 = (char)((ulonglong)local_48 >> 8);
    cStack_156 = (char)((ulonglong)local_48 >> 0x10);
    cStack_155 = (char)((ulonglong)local_48 >> 0x18);
    cStack_154 = (char)((ulonglong)local_48 >> 0x20);
    cStack_153 = (char)((ulonglong)local_48 >> 0x28);
    cStack_152 = (char)((ulonglong)local_48 >> 0x30);
    cStack_151 = (char)((ulonglong)local_48 >> 0x38);
    bStack_150 = (byte)local_f8;
    cStack_14f = (char)((ulonglong)local_f8 >> 8);
    cStack_14e = (char)((ulonglong)local_f8 >> 0x10);
    cStack_14d = (char)((ulonglong)local_f8 >> 0x18);
    cStack_14c = (char)((ulonglong)local_f8 >> 0x20);
    cStack_14b = (char)((ulonglong)local_f8 >> 0x28);
    cStack_14a = (char)((ulonglong)local_f8 >> 0x30);
    cStack_149 = (char)((ulonglong)local_f8 >> 0x38);
    uVar42 = _DAT_0018cff0;
    bStack_160 = local_168;
    cStack_15f = cStack_167;
    cStack_15e = cStack_166;
    cStack_15d = cStack_165;
    cStack_15c = cStack_164;
    cStack_15b = cStack_163;
    cStack_15a = cStack_162;
    cStack_159 = cStack_161;
    local_88 = param_6;
    if (local_38 != 0) {
      local_e0 = local_40;
      plVar46 = local_40;
      do {
        plVar45 = plVar46 + 3;
        lVar44 = *plVar46;
        local_40 = plVar45;
        if (lVar44 == -1) goto LAB_005423fa;
        local_f0 = plVar46[1];
        uVar43 = plVar46[2];
        uVar50 = (ulonglong)local_1a0;
        uVar47 = 0x40 - uVar50;
        local_190 = lVar44;
        if (uVar43 < uVar47) {
          uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar43);
          uVar43 = uVar43 + uVar50;
          local_1a0 = (byte)uVar43;
          if (uVar43 == 0x3f) goto LAB_0054220b;
LAB_005422ef:
          *(undefined1 *)((longlong)&uStack_1e0 + uVar43) = 0x1e;
          local_1a0 = (char)uVar43 + 1;
        }
        else {
          if (uVar50 != 0) {
            uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar47);
            local_1e8 = local_1e8 + 1;
            (*(code *)PTR_compress256_00799158)(uVar42,1);
            uVar43 = uVar43 - uVar47;
          }
          if (uVar43 >> 6 != 0) {
            local_1e8 = local_1e8 + (uVar43 >> 6);
            (*(code *)PTR_compress256_00799158)();
          }
          uVar49 = (uint)uVar43 & 0x3f;
          uVar43 = (ulonglong)uVar49;
          uVar42 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar43);
          local_1a0 = (byte)uVar49;
          lVar44 = local_190;
          if (uVar43 != 0x3f) goto LAB_005422ef;
LAB_0054220b:
          uStack_1a8 = CONCAT17(0x1e,(undefined7)uStack_1a8);
          local_1e8 = local_1e8 + 1;
          uVar42 = (*(code *)PTR_compress256_00799158)(uVar42,1);
          local_1a0 = 0;
          lVar44 = local_190;
        }
        if (lVar44 != 0) {
          uVar42 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
        }
        plVar46 = plVar45;
      } while (plVar45 != local_f8);
      local_40 = local_f8;
LAB_005423fa:
      bStack_160 = (byte)local_40;
      cStack_15f = (char)((ulonglong)local_40 >> 8);
      cStack_15e = (char)((ulonglong)local_40 >> 0x10);
      cStack_15d = (char)((ulonglong)local_40 >> 0x18);
      cStack_15c = (char)((ulonglong)local_40 >> 0x20);
      cStack_15b = (char)((ulonglong)local_40 >> 0x28);
      cStack_15a = (char)((ulonglong)local_40 >> 0x30);
      cStack_159 = (char)((ulonglong)local_40 >> 0x38);
    }
    puVar40 = PTR___rust_dealloc_00798fc8;
    if (local_f8 != local_40) {
      uVar43 = (ulonglong)((longlong)local_f8 - (longlong)local_40) / 0x18;
      plVar46 = local_40 + 1;
      do {
        if (plVar46[-1] != 0) {
          uVar42 = (*(code *)puVar40)(uVar42,1);
        }
        plVar46 = plVar46 + 3;
        uVar43 = uVar43 - 1;
      } while (uVar43 != 0);
    }
    if (local_90 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,8);
    }
    bVar48 = local_1a0;
    uVar14 = CONCAT25(local_19b,CONCAT41(local_19f,local_1a0));
    _auStack_100 = CONCAT17(local_199,uVar14);
    local_108 = uStack_1a8;
    local_148 = local_1e8;
    uStack_140 = uStack_1e0;
    local_118 = uStack_1b8;
    uStack_110 = local_1b0;
    local_128 = uStack_1c8;
    uStack_120 = local_1c0;
    local_138 = uStack_1d8;
    uStack_130 = uStack_1d0;
    local_158 = (byte)local_1f8;
    cStack_157 = (char)((ulonglong)local_1f8 >> 8);
    cStack_156 = (char)((ulonglong)local_1f8 >> 0x10);
    cStack_155 = (char)((ulonglong)local_1f8 >> 0x18);
    cStack_154 = (char)((ulonglong)local_1f8 >> 0x20);
    cStack_153 = (char)((ulonglong)local_1f8 >> 0x28);
    cStack_152 = (char)((ulonglong)local_1f8 >> 0x30);
    cStack_151 = (char)((ulonglong)local_1f8 >> 0x38);
    bStack_150 = (byte)uStack_1f0;
    cStack_14f = (char)((ulonglong)uStack_1f0 >> 8);
    cStack_14e = (char)((ulonglong)uStack_1f0 >> 0x10);
    cStack_14d = (char)((ulonglong)uStack_1f0 >> 0x18);
    cStack_14c = (char)((ulonglong)uStack_1f0 >> 0x20);
    cStack_14b = (char)((ulonglong)uStack_1f0 >> 0x28);
    cStack_14a = (char)((ulonglong)uStack_1f0 >> 0x30);
    cStack_149 = (char)((ulonglong)uStack_1f0 >> 0x38);
    local_168 = (byte)local_208;
    cStack_167 = (char)((ulonglong)local_208 >> 8);
    cStack_166 = (char)((ulonglong)local_208 >> 0x10);
    cStack_165 = (char)((ulonglong)local_208 >> 0x18);
    cStack_164 = (char)((ulonglong)local_208 >> 0x20);
    cStack_163 = (char)((ulonglong)local_208 >> 0x28);
    cStack_162 = (char)((ulonglong)local_208 >> 0x30);
    cStack_161 = (char)((ulonglong)local_208 >> 0x38);
    bStack_160 = (byte)pcStack_200;
    cStack_15f = (char)((ulonglong)pcStack_200 >> 8);
    cStack_15e = (char)((ulonglong)pcStack_200 >> 0x10);
    cStack_15d = (char)((ulonglong)pcStack_200 >> 0x18);
    cStack_15c = (char)((ulonglong)pcStack_200 >> 0x20);
    cStack_15b = (char)((ulonglong)pcStack_200 >> 0x28);
    cStack_15a = (char)((ulonglong)pcStack_200 >> 0x30);
    cStack_159 = (char)((ulonglong)pcStack_200 >> 0x38);
    uVar50 = (ulonglong)uVar14 & 0xff;
    uVar43 = local_1e8 << 9;
    uVar43 = (local_1e8 & 0x7fffffffffffff) >> 0x2f | (uVar43 & 0xff000000000000) >> 0x28 |
             (uVar43 & 0xff0000000000) >> 0x18 | (uVar43 & 0xff00000000) >> 8 |
             (uVar43 & 0xff000000) << 8 | (uVar43 & 0xff0000) << 0x18 |
             (((uint)local_1a0 * 8 | uVar43) & 0xff00) << 0x28 |
             (ulonglong)((uint)local_1a0 * 8) << 0x38;
    auStack_100[uVar50 - 0x40] = 0x80;
    param_6 = local_88;
    pbVar51 = local_208;
    if ((local_1a0 == 0x3f) ||
       (pbVar51 = (byte *)(*(code *)PTR_memset_00799090)(local_208,uVar50 ^ 0x3f),
       (bVar48 ^ 0x38) < 8)) {
      (*(code *)PTR_compress256_00799158)(pbVar51,1);
      local_b8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_d8 = (undefined1  [16])0x0;
      local_a8 = 0;
      local_a0 = uVar43;
      (*(code *)PTR_compress256_00799158)(0,1);
    }
    else {
      local_108 = uVar43;
      (*(code *)PTR_compress256_00799158)(pbVar51,1);
    }
    uVar27 = CONCAT12(cStack_15f,CONCAT11(bStack_160,cStack_161));
    uVar49 = CONCAT13(cStack_15e,uVar27);
    uVar30 = CONCAT14(cStack_15d,uVar49);
    auVar36[5] = cStack_15c;
    auVar36._0_5_ = uVar30;
    uVar28 = CONCAT12(cStack_14f,CONCAT11(bStack_150,cStack_151));
    uVar29 = CONCAT13(cStack_14e,uVar28);
    uVar31 = CONCAT14(cStack_14d,uVar29);
    auVar37[5] = cStack_14c;
    auVar37._0_5_ = uVar31;
    auVar57[1] = 0;
    auVar57[0] = bStack_160;
    auVar57[2] = cStack_15f;
    auVar57[3] = 0;
    auVar57[4] = cStack_15e;
    auVar57[5] = 0;
    auVar57[6] = cStack_15d;
    auVar57[7] = 0;
    auVar57[8] = cStack_15c;
    auVar57[9] = 0;
    auVar57[10] = cStack_15b;
    auVar57[0xb] = 0;
    auVar57[0xc] = cStack_15a;
    auVar57[0xd] = 0;
    auVar57[0xe] = cStack_159;
    auVar57[0xf] = 0;
    auVar54 = pshuflw(auVar57,auVar57,0x1b);
    auVar55 = pshufhw(auVar54,auVar54,0x1b);
    auVar36._6_8_ = 0;
    auVar2[0xe] = cStack_161;
    auVar2._0_14_ = auVar36 << 0x38;
    auVar32._4_8_ = 0;
    auVar32._0_4_ = uVar49;
    auVar6._12_3_ = (int3)(CONCAT26(auVar2._13_2_,CONCAT15(cStack_162,uVar30)) >> 0x28);
    auVar6._0_12_ = auVar32 << 0x38;
    auVar10._10_5_ = (int5)(CONCAT44(auVar6._11_4_,CONCAT13(cStack_163,uVar27)) >> 0x18);
    auVar10._0_10_ = (unkuint10)CONCAT11(bStack_160,cStack_161) << 0x38;
    auVar15._7_8_ = 0;
    auVar15._0_7_ = (uint7)(CONCAT62(auVar10._9_6_,CONCAT11(cStack_164,cStack_161)) >> 8);
    auVar16._1_8_ = SUB158(auVar15 << 0x40,7);
    auVar16[0] = cStack_165;
    auVar16._9_6_ = 0;
    auVar17._1_10_ = SUB1510(auVar16 << 0x30,5);
    auVar17[0] = cStack_166;
    auVar17._11_4_ = 0;
    auVar54._3_12_ = SUB1512(auVar17 << 0x20,3);
    auVar54[2] = cStack_167;
    auVar54[1] = 0;
    auVar54[0] = local_168;
    auVar54[0xf] = 0;
    auVar54 = pshuflw(auVar54,auVar54,0x1b);
    auVar54 = pshufhw(auVar54,auVar54,0x1b);
    sVar1 = auVar54._0_2_;
    local_168 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0] - (0xff < sVar1);
    sVar1 = auVar54._2_2_;
    cStack_167 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[2] - (0xff < sVar1);
    sVar1 = auVar54._4_2_;
    cStack_166 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[4] - (0xff < sVar1);
    sVar1 = auVar54._6_2_;
    cStack_165 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[6] - (0xff < sVar1);
    sVar1 = auVar54._8_2_;
    cStack_164 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[8] - (0xff < sVar1);
    sVar1 = auVar54._10_2_;
    cStack_163 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[10] - (0xff < sVar1);
    sVar1 = auVar54._12_2_;
    cStack_162 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xc] - (0xff < sVar1);
    sVar1 = auVar54._14_2_;
    cStack_161 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xe] - (0xff < sVar1);
    sVar1 = auVar55._0_2_;
    bStack_160 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0] - (0xff < sVar1);
    sVar1 = auVar55._2_2_;
    cStack_15f = (0 < sVar1) * (sVar1 < 0x100) * auVar55[2] - (0xff < sVar1);
    sVar1 = auVar55._4_2_;
    cStack_15e = (0 < sVar1) * (sVar1 < 0x100) * auVar55[4] - (0xff < sVar1);
    sVar1 = auVar55._6_2_;
    cStack_15d = (0 < sVar1) * (sVar1 < 0x100) * auVar55[6] - (0xff < sVar1);
    sVar1 = auVar55._8_2_;
    cStack_15c = (0 < sVar1) * (sVar1 < 0x100) * auVar55[8] - (0xff < sVar1);
    sVar1 = auVar55._10_2_;
    cStack_15b = (0 < sVar1) * (sVar1 < 0x100) * auVar55[10] - (0xff < sVar1);
    sVar1 = auVar55._12_2_;
    cStack_15a = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xc] - (0xff < sVar1);
    sVar1 = auVar55._14_2_;
    cStack_159 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xe] - (0xff < sVar1);
    auVar56[1] = 0;
    auVar56[0] = bStack_150;
    auVar56[2] = cStack_14f;
    auVar56[3] = 0;
    auVar56[4] = cStack_14e;
    auVar56[5] = 0;
    auVar56[6] = cStack_14d;
    auVar56[7] = 0;
    auVar56[8] = cStack_14c;
    auVar56[9] = 0;
    auVar56[10] = cStack_14b;
    auVar56[0xb] = 0;
    auVar56[0xc] = cStack_14a;
    auVar56[0xd] = 0;
    auVar56[0xe] = cStack_149;
    auVar56[0xf] = 0;
    auVar54 = pshuflw(auVar56,auVar56,0x1b);
    auVar57 = pshufhw(auVar54,auVar54,0x1b);
    auVar37._6_8_ = 0;
    auVar3[0xe] = cStack_151;
    auVar3._0_14_ = auVar37 << 0x38;
    auVar33._4_8_ = 0;
    auVar33._0_4_ = uVar29;
    auVar7._12_3_ = (int3)(CONCAT26(auVar3._13_2_,CONCAT15(cStack_152,uVar31)) >> 0x28);
    auVar7._0_12_ = auVar33 << 0x38;
    auVar11._10_5_ = (int5)(CONCAT44(auVar7._11_4_,CONCAT13(cStack_153,uVar28)) >> 0x18);
    auVar11._0_10_ = (unkuint10)CONCAT11(bStack_150,cStack_151) << 0x38;
    auVar18._7_8_ = 0;
    auVar18._0_7_ = (uint7)(CONCAT62(auVar11._9_6_,CONCAT11(cStack_154,cStack_151)) >> 8);
    auVar19._1_8_ = SUB158(auVar18 << 0x40,7);
    auVar19[0] = cStack_155;
    auVar19._9_6_ = 0;
    auVar20._1_10_ = SUB1510(auVar19 << 0x30,5);
    auVar20[0] = cStack_156;
    auVar20._11_4_ = 0;
    auVar55._3_12_ = SUB1512(auVar20 << 0x20,3);
    auVar55[2] = cStack_157;
    auVar55[1] = 0;
    auVar55[0] = local_158;
    auVar55[0xf] = 0;
    auVar54 = pshuflw((undefined1  [16])0x0,auVar55,0x1b);
    auVar54 = pshufhw(auVar54,auVar54,0x1b);
    sVar1 = auVar54._0_2_;
    local_158 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0] - (0xff < sVar1);
    sVar1 = auVar54._2_2_;
    cStack_157 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[2] - (0xff < sVar1);
    sVar1 = auVar54._4_2_;
    cStack_156 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[4] - (0xff < sVar1);
    sVar1 = auVar54._6_2_;
    cStack_155 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[6] - (0xff < sVar1);
    sVar1 = auVar54._8_2_;
    cStack_154 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[8] - (0xff < sVar1);
    sVar1 = auVar54._10_2_;
    cStack_153 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[10] - (0xff < sVar1);
    sVar1 = auVar54._12_2_;
    cStack_152 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xc] - (0xff < sVar1);
    sVar1 = auVar54._14_2_;
    cStack_151 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xe] - (0xff < sVar1);
    sVar1 = auVar57._0_2_;
    bStack_150 = (0 < sVar1) * (sVar1 < 0x100) * auVar57[0] - (0xff < sVar1);
    sVar1 = auVar57._2_2_;
    cStack_14f = (0 < sVar1) * (sVar1 < 0x100) * auVar57[2] - (0xff < sVar1);
    sVar1 = auVar57._4_2_;
    cStack_14e = (0 < sVar1) * (sVar1 < 0x100) * auVar57[4] - (0xff < sVar1);
    sVar1 = auVar57._6_2_;
    cStack_14d = (0 < sVar1) * (sVar1 < 0x100) * auVar57[6] - (0xff < sVar1);
    sVar1 = auVar57._8_2_;
    cStack_14c = (0 < sVar1) * (sVar1 < 0x100) * auVar57[8] - (0xff < sVar1);
    sVar1 = auVar57._10_2_;
    cStack_14b = (0 < sVar1) * (sVar1 < 0x100) * auVar57[10] - (0xff < sVar1);
    sVar1 = auVar57._12_2_;
    cStack_14a = (0 < sVar1) * (sVar1 < 0x100) * auVar57[0xc] - (0xff < sVar1);
    sVar1 = auVar57._14_2_;
    cStack_149 = (0 < sVar1) * (sVar1 < 0x100) * auVar57[0xe] - (0xff < sVar1);
    local_188 = &local_168;
    pcStack_180 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                  ::fmt;
    (*(code *)PTR_format_inner_00799048)();
    local_188 = (byte *)local_d8._0_8_;
    pcStack_180 = (code *)local_d8._8_8_;
    local_178 = local_c8._0_8_;
  }
  else {
    local_168 = 0;
    cStack_167 = '\0';
    cStack_166 = '\0';
    cStack_165 = '\0';
    cStack_164 = '\0';
    cStack_163 = '\0';
    cStack_162 = '\0';
    cStack_161 = '\0';
    bStack_160 = '\x01';
    cStack_15f = '\0';
    cStack_15e = '\0';
    cStack_15d = '\0';
    cStack_15c = '\0';
    cStack_15b = '\0';
    cStack_15a = '\0';
    cStack_159 = '\0';
    local_158 = '\0';
    cStack_157 = '\0';
    cStack_156 = '\0';
    cStack_155 = '\0';
    cStack_154 = '\0';
    cStack_153 = '\0';
    cStack_152 = '\0';
    cStack_151 = '\0';
    write_canonical_json(param_10,&local_168);
    lVar44 = CONCAT17(cStack_161,
                      CONCAT16(cStack_162,
                               CONCAT15(cStack_163,
                                        CONCAT14(cStack_164,
                                                 CONCAT13(cStack_165,
                                                          CONCAT12(cStack_166,
                                                                   CONCAT11(cStack_167,local_168))))
                                       )));
    uVar42 = <digest[f0d79a819dec3844]::core_api::wrapper::CoreWrapper<digest[f0d79a819dec3844]::core_api::ct_variable::CtVariableCoreWrapper<sha2[7efb180a76699f7c]::core_api::Sha256VarCore,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,sha2[7efb180a76699f7c]::OidSha256>>as_digest[f0d79a819dec3844]::digest::Digest>
             ::digest::<&[u8]>(&local_168,
                               CONCAT17(cStack_159,
                                        CONCAT16(cStack_15a,
                                                 CONCAT15(cStack_15b,
                                                          CONCAT14(cStack_15c,
                                                                   CONCAT13(cStack_15d,
                                                                            CONCAT12(cStack_15e,
                                                                                     CONCAT11(
                                                  cStack_15f,bStack_160))))))),
                               CONCAT17(cStack_151,
                                        CONCAT16(cStack_152,
                                                 CONCAT15(cStack_153,
                                                          CONCAT14(cStack_154,
                                                                   CONCAT13(cStack_155,
                                                                            CONCAT12(cStack_156,
                                                                                     CONCAT11(
                                                  cStack_157,local_158))))))));
    pcStack_200 = <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
                  ::fmt;
    local_208 = &local_168;
    uVar42 = (*(code *)PTR_format_inner_00799048)(uVar42,&local_208);
    if (lVar44 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
    }
  }
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  local_1a0 = 0;
  local_208 = _DAT_0018cfe0;
  pcStack_200 = (code *)_UNK_0018cfe8;
  local_1f8 = _DAT_0018cff0;
  uStack_1f0 = _UNK_0018cff8;
  local_1e8 = 0;
  lVar44 = 1;
  if (local_70 == 0) {
    uVar42 = 0;
  }
  else {
    uVar42 = local_68;
    lVar44 = local_70;
  }
  uVar42 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar44,uVar42);
  uVar43 = (ulonglong)local_1a0;
  uVar50 = 0x40 - uVar43;
  if (extraout_RDX < uVar50) {
    uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,extraout_RDX);
    uVar43 = extraout_RDX + uVar43;
    local_1a0 = (byte)uVar43;
  }
  else {
    uVar47 = extraout_RDX;
    if (uVar43 != 0) {
      uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar50);
      local_1e8 = local_1e8 + 1;
      (*(code *)PTR_compress256_00799158)(uVar42,1);
      uVar47 = extraout_RDX - uVar50;
    }
    if (uVar47 >> 6 != 0) {
      local_1e8 = local_1e8 + (uVar47 >> 6);
      (*(code *)PTR_compress256_00799158)();
    }
    uVar49 = (uint)uVar47 & 0x3f;
    uVar43 = (ulonglong)uVar49;
    uVar42 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar43);
    local_1a0 = (byte)uVar49;
  }
  if (uVar43 == 0x3f) {
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff;
    local_1e8 = local_1e8 + 1;
    (*(code *)PTR_compress256_00799158)(uVar42,1);
    local_1a0 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_1e0 + uVar43) = 0;
    local_1a0 = (char)uVar43 + 1;
  }
  uVar42 = ::<str>::trim_matches::<<char>::is_whitespace>(local_80,local_78);
  uVar43 = (ulonglong)local_1a0;
  uVar50 = 0x40 - uVar43;
  if (extraout_RDX_00 < uVar50) {
    uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,extraout_RDX_00);
    uVar43 = extraout_RDX_00 + uVar43;
    local_1a0 = (byte)uVar43;
  }
  else {
    uVar47 = extraout_RDX_00;
    if (uVar43 != 0) {
      uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar50);
      local_1e8 = local_1e8 + 1;
      (*(code *)PTR_compress256_00799158)(uVar42,1);
      uVar47 = extraout_RDX_00 - uVar50;
    }
    if (uVar47 >> 6 != 0) {
      local_1e8 = local_1e8 + (uVar47 >> 6);
      (*(code *)PTR_compress256_00799158)();
    }
    uVar49 = (uint)uVar47 & 0x3f;
    uVar43 = (ulonglong)uVar49;
    uVar42 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar43);
    local_1a0 = (byte)uVar49;
  }
  if (uVar43 == 0x3f) {
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff;
    local_1e8 = local_1e8 + 1;
    (*(code *)PTR_compress256_00799158)(uVar42,1);
    local_1a0 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_1e0 + uVar43) = 0;
    local_1a0 = (char)uVar43 + 1;
  }
  lVar44 = 1;
  if (param_6 == 0) {
    param_7 = 0;
  }
  else {
    lVar44 = param_6;
  }
  uVar42 = ::<str>::trim_matches::<<char>::is_whitespace>(lVar44,param_7);
  uVar43 = (ulonglong)local_1a0;
  uVar50 = 0x40 - uVar43;
  if (extraout_RDX_01 < uVar50) {
    uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,extraout_RDX_01);
    uVar43 = extraout_RDX_01 + uVar43;
    local_1a0 = (byte)uVar43;
  }
  else {
    uVar47 = extraout_RDX_01;
    if (uVar43 != 0) {
      uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar50);
      local_1e8 = local_1e8 + 1;
      (*(code *)PTR_compress256_00799158)(uVar42,1);
      uVar47 = extraout_RDX_01 - uVar50;
    }
    if (uVar47 >> 6 != 0) {
      local_1e8 = local_1e8 + (uVar47 >> 6);
      (*(code *)PTR_compress256_00799158)();
    }
    uVar49 = (uint)uVar47 & 0x3f;
    uVar43 = (ulonglong)uVar49;
    uVar42 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar43);
    local_1a0 = (byte)uVar49;
  }
  if (uVar43 == 0x3f) {
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff;
    local_1e8 = local_1e8 + 1;
    uVar42 = (*(code *)PTR_compress256_00799158)(uVar42,1);
    uVar49 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_1e0 + uVar43) = 0;
    uVar49 = (int)uVar43 + 1;
  }
  local_1a0 = (byte)uVar49;
  uVar43 = (ulonglong)(uVar49 & 0xff);
  uVar50 = 0x40 - uVar43;
  local_190 = local_58;
  if (local_50 < uVar50) {
    uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,local_50);
    uVar43 = local_50 + uVar43;
    local_1a0 = (byte)uVar43;
  }
  else {
    if (uVar43 != 0) {
      uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar50);
      local_1e8 = local_1e8 + 1;
      (*(code *)PTR_compress256_00799158)(uVar42,1);
      local_50 = local_50 - uVar50;
    }
    if (local_50 >> 6 != 0) {
      local_1e8 = local_1e8 + (local_50 >> 6);
      (*(code *)PTR_compress256_00799158)();
    }
    uVar49 = (uint)local_50 & 0x3f;
    uVar43 = (ulonglong)uVar49;
    uVar42 = (*(code *)PTR_memcpy_00799008)(0x7fffffffffffffc0,uVar43);
    local_1a0 = (byte)uVar49;
  }
  if (uVar43 == 0x3f) {
    uStack_1a8 = uStack_1a8 & 0xffffffffffffff;
    local_1e8 = local_1e8 + 1;
    uVar42 = (*(code *)PTR_compress256_00799158)(uVar42,1);
    uVar49 = 0;
  }
  else {
    *(undefined1 *)((longlong)&uStack_1e0 + uVar43) = 0;
    uVar49 = (int)uVar43 + 1;
  }
  uVar43 = local_178;
  cVar41 = (char)uVar49;
  uVar47 = 0x40 - (ulonglong)(uVar49 & 0xff);
  uVar50 = local_178 - uVar47;
  local_1a0 = cVar41;
  if (local_178 < uVar47) {
    (*(code *)PTR_memcpy_00799008)(uVar42,local_178);
    bVar48 = (char)uVar43 + cVar41;
  }
  else {
    if ((ulonglong)(uVar49 & 0xff) != 0) {
      uVar42 = (*(code *)PTR_memcpy_00799008)(uVar42,uVar47);
      local_1e8 = local_1e8 + 1;
      uVar42 = (*(code *)PTR_compress256_00799158)(uVar42,1);
      uVar43 = uVar50;
    }
    if (uVar43 >> 6 != 0) {
      local_1e8 = local_1e8 + (uVar43 >> 6);
      uVar42 = (*(code *)PTR_compress256_00799158)();
    }
    uVar49 = (uint)uVar43 & 0x3f;
    bVar48 = (byte)uVar49;
    (*(code *)PTR_memcpy_00799008)(uVar42,uVar49);
  }
  local_108 = uStack_1a8;
  _auStack_100 = CONCAT25(local_19b,CONCAT41(local_19f,bVar48));
  _auStack_100 = CONCAT17(local_199,_auStack_100);
  local_148 = local_1e8;
  uStack_140 = uStack_1e0;
  local_118 = uStack_1b8;
  uStack_110 = local_1b0;
  local_128 = uStack_1c8;
  uStack_120 = local_1c0;
  local_138 = uStack_1d8;
  uStack_130 = uStack_1d0;
  local_158 = (byte)local_1f8;
  cStack_157 = (char)((ulonglong)local_1f8 >> 8);
  cStack_156 = (char)((ulonglong)local_1f8 >> 0x10);
  cStack_155 = (char)((ulonglong)local_1f8 >> 0x18);
  cStack_154 = (char)((ulonglong)local_1f8 >> 0x20);
  cStack_153 = (char)((ulonglong)local_1f8 >> 0x28);
  cStack_152 = (char)((ulonglong)local_1f8 >> 0x30);
  cStack_151 = (char)((ulonglong)local_1f8 >> 0x38);
  bStack_150 = (byte)uStack_1f0;
  cStack_14f = (char)((ulonglong)uStack_1f0 >> 8);
  cStack_14e = (char)((ulonglong)uStack_1f0 >> 0x10);
  cStack_14d = (char)((ulonglong)uStack_1f0 >> 0x18);
  cStack_14c = (char)((ulonglong)uStack_1f0 >> 0x20);
  cStack_14b = (char)((ulonglong)uStack_1f0 >> 0x28);
  cStack_14a = (char)((ulonglong)uStack_1f0 >> 0x30);
  cStack_149 = (char)((ulonglong)uStack_1f0 >> 0x38);
  local_168 = (byte)local_208;
  cStack_167 = (char)((ulonglong)local_208 >> 8);
  cStack_166 = (char)((ulonglong)local_208 >> 0x10);
  cStack_165 = (char)((ulonglong)local_208 >> 0x18);
  cStack_164 = (char)((ulonglong)local_208 >> 0x20);
  cStack_163 = (char)((ulonglong)local_208 >> 0x28);
  cStack_162 = (char)((ulonglong)local_208 >> 0x30);
  cStack_161 = (char)((ulonglong)local_208 >> 0x38);
  bStack_160 = (byte)pcStack_200;
  cStack_15f = (char)((ulonglong)pcStack_200 >> 8);
  cStack_15e = (char)((ulonglong)pcStack_200 >> 0x10);
  cStack_15d = (char)((ulonglong)pcStack_200 >> 0x18);
  cStack_15c = (char)((ulonglong)pcStack_200 >> 0x20);
  cStack_15b = (char)((ulonglong)pcStack_200 >> 0x28);
  cStack_15a = (char)((ulonglong)pcStack_200 >> 0x30);
  cStack_159 = (char)((ulonglong)pcStack_200 >> 0x38);
  uVar43 = (ulonglong)_auStack_100;
  uVar50 = local_1e8 << 9;
  uVar50 = (local_1e8 & 0x7fffffffffffff) >> 0x2f | (uVar50 & 0xff000000000000) >> 0x28 |
           (uVar50 & 0xff0000000000) >> 0x18 | (uVar50 & 0xff00000000) >> 8 |
           (uVar50 & 0xff000000) << 8 | (uVar50 & 0xff0000) << 0x18 |
           (((uint)bVar48 * 8 | uVar50) & 0xff00) << 0x28 | (ulonglong)((uint)bVar48 * 8) << 0x38;
  auStack_100[(uVar43 & 0xff) - 0x40] = 0x80;
  pbVar51 = local_208;
  local_1a0 = bVar48;
  if ((bVar48 == 0x3f) ||
     (pbVar51 = (byte *)(*(code *)PTR_memset_00799090)(local_208,uVar43 & 0xff ^ 0x3f),
     (bVar48 ^ 0x38) < 8)) {
    (*(code *)PTR_compress256_00799158)(pbVar51,1);
    local_b8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_d8 = (undefined1  [16])0x0;
    local_a8 = 0;
    local_a0 = uVar50;
    (*(code *)PTR_compress256_00799158)(0,1);
  }
  else {
    local_108 = uVar50;
    (*(code *)PTR_compress256_00799158)(pbVar51,1);
  }
  uVar27 = CONCAT12(cStack_15f,CONCAT11(bStack_160,cStack_161));
  uVar49 = CONCAT13(cStack_15e,uVar27);
  uVar30 = CONCAT14(cStack_15d,uVar49);
  auVar38[5] = cStack_15c;
  auVar38._0_5_ = uVar30;
  uVar28 = CONCAT12(cStack_14f,CONCAT11(bStack_150,cStack_151));
  uVar29 = CONCAT13(cStack_14e,uVar28);
  uVar31 = CONCAT14(cStack_14d,uVar29);
  auVar39[5] = cStack_14c;
  auVar39._0_5_ = uVar31;
  auVar58[1] = 0;
  auVar58[0] = bStack_160;
  auVar58[2] = cStack_15f;
  auVar58[3] = 0;
  auVar58[4] = cStack_15e;
  auVar58[5] = 0;
  auVar58[6] = cStack_15d;
  auVar58[7] = 0;
  auVar58[8] = cStack_15c;
  auVar58[9] = 0;
  auVar58[10] = cStack_15b;
  auVar58[0xb] = 0;
  auVar58[0xc] = cStack_15a;
  auVar58[0xd] = 0;
  auVar58[0xe] = cStack_159;
  auVar58[0xf] = 0;
  auVar54 = pshuflw(auVar58,auVar58,0x1b);
  auVar55 = pshufhw(auVar54,auVar54,0x1b);
  auVar38._6_8_ = 0;
  auVar4[0xe] = cStack_161;
  auVar4._0_14_ = auVar38 << 0x38;
  auVar34._4_8_ = 0;
  auVar34._0_4_ = uVar49;
  auVar8._12_3_ = (int3)(CONCAT26(auVar4._13_2_,CONCAT15(cStack_162,uVar30)) >> 0x28);
  auVar8._0_12_ = auVar34 << 0x38;
  auVar12._10_5_ = (int5)(CONCAT44(auVar8._11_4_,CONCAT13(cStack_163,uVar27)) >> 0x18);
  auVar12._0_10_ = (unkuint10)CONCAT11(bStack_160,cStack_161) << 0x38;
  auVar21._7_8_ = 0;
  auVar21._0_7_ = (uint7)(CONCAT62(auVar12._9_6_,CONCAT11(cStack_164,cStack_161)) >> 8);
  auVar22._1_8_ = SUB158(auVar21 << 0x40,7);
  auVar22[0] = cStack_165;
  auVar22._9_6_ = 0;
  auVar23._1_10_ = SUB1510(auVar22 << 0x30,5);
  auVar23[0] = cStack_166;
  auVar23._11_4_ = 0;
  auVar52._3_12_ = SUB1512(auVar23 << 0x20,3);
  auVar52[2] = cStack_167;
  auVar52[1] = 0;
  auVar52[0] = local_168;
  auVar52[0xf] = 0;
  auVar54 = pshuflw(auVar52,auVar52,0x1b);
  auVar54 = pshufhw(auVar54,auVar54,0x1b);
  sVar1 = auVar54._0_2_;
  local_168 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0] - (0xff < sVar1);
  sVar1 = auVar54._2_2_;
  cStack_167 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[2] - (0xff < sVar1);
  sVar1 = auVar54._4_2_;
  cStack_166 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[4] - (0xff < sVar1);
  sVar1 = auVar54._6_2_;
  cStack_165 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[6] - (0xff < sVar1);
  sVar1 = auVar54._8_2_;
  cStack_164 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[8] - (0xff < sVar1);
  sVar1 = auVar54._10_2_;
  cStack_163 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[10] - (0xff < sVar1);
  sVar1 = auVar54._12_2_;
  cStack_162 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xc] - (0xff < sVar1);
  sVar1 = auVar54._14_2_;
  cStack_161 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xe] - (0xff < sVar1);
  sVar1 = auVar55._0_2_;
  bStack_160 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0] - (0xff < sVar1);
  sVar1 = auVar55._2_2_;
  cStack_15f = (0 < sVar1) * (sVar1 < 0x100) * auVar55[2] - (0xff < sVar1);
  sVar1 = auVar55._4_2_;
  cStack_15e = (0 < sVar1) * (sVar1 < 0x100) * auVar55[4] - (0xff < sVar1);
  sVar1 = auVar55._6_2_;
  cStack_15d = (0 < sVar1) * (sVar1 < 0x100) * auVar55[6] - (0xff < sVar1);
  sVar1 = auVar55._8_2_;
  cStack_15c = (0 < sVar1) * (sVar1 < 0x100) * auVar55[8] - (0xff < sVar1);
  sVar1 = auVar55._10_2_;
  cStack_15b = (0 < sVar1) * (sVar1 < 0x100) * auVar55[10] - (0xff < sVar1);
  sVar1 = auVar55._12_2_;
  cStack_15a = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xc] - (0xff < sVar1);
  sVar1 = auVar55._14_2_;
  cStack_159 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xe] - (0xff < sVar1);
  auVar59[1] = 0;
  auVar59[0] = bStack_150;
  auVar59[2] = cStack_14f;
  auVar59[3] = 0;
  auVar59[4] = cStack_14e;
  auVar59[5] = 0;
  auVar59[6] = cStack_14d;
  auVar59[7] = 0;
  auVar59[8] = cStack_14c;
  auVar59[9] = 0;
  auVar59[10] = cStack_14b;
  auVar59[0xb] = 0;
  auVar59[0xc] = cStack_14a;
  auVar59[0xd] = 0;
  auVar59[0xe] = cStack_149;
  auVar59[0xf] = 0;
  auVar54 = pshuflw(auVar59,auVar59,0x1b);
  auVar55 = pshufhw(auVar54,auVar54,0x1b);
  auVar39._6_8_ = 0;
  auVar5[0xe] = cStack_151;
  auVar5._0_14_ = auVar39 << 0x38;
  auVar35._4_8_ = 0;
  auVar35._0_4_ = uVar29;
  auVar9._12_3_ = (int3)(CONCAT26(auVar5._13_2_,CONCAT15(cStack_152,uVar31)) >> 0x28);
  auVar9._0_12_ = auVar35 << 0x38;
  auVar13._10_5_ = (int5)(CONCAT44(auVar9._11_4_,CONCAT13(cStack_153,uVar28)) >> 0x18);
  auVar13._0_10_ = (unkuint10)CONCAT11(bStack_150,cStack_151) << 0x38;
  auVar24._7_8_ = 0;
  auVar24._0_7_ = (uint7)(CONCAT62(auVar13._9_6_,CONCAT11(cStack_154,cStack_151)) >> 8);
  auVar25._1_8_ = SUB158(auVar24 << 0x40,7);
  auVar25[0] = cStack_155;
  auVar25._9_6_ = 0;
  auVar26._1_10_ = SUB1510(auVar25 << 0x30,5);
  auVar26[0] = cStack_156;
  auVar26._11_4_ = 0;
  auVar53._3_12_ = SUB1512(auVar26 << 0x20,3);
  auVar53[2] = cStack_157;
  auVar53[1] = 0;
  auVar53[0] = local_158;
  auVar53[0xf] = 0;
  auVar54 = pshuflw((undefined1  [16])0x0,auVar53,0x1b);
  auVar54 = pshufhw(auVar54,auVar54,0x1b);
  sVar1 = auVar54._0_2_;
  local_158 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0] - (0xff < sVar1);
  sVar1 = auVar54._2_2_;
  cStack_157 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[2] - (0xff < sVar1);
  sVar1 = auVar54._4_2_;
  cStack_156 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[4] - (0xff < sVar1);
  sVar1 = auVar54._6_2_;
  cStack_155 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[6] - (0xff < sVar1);
  sVar1 = auVar54._8_2_;
  cStack_154 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[8] - (0xff < sVar1);
  sVar1 = auVar54._10_2_;
  cStack_153 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[10] - (0xff < sVar1);
  sVar1 = auVar54._12_2_;
  cStack_152 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xc] - (0xff < sVar1);
  sVar1 = auVar54._14_2_;
  cStack_151 = (0 < sVar1) * (sVar1 < 0x100) * auVar54[0xe] - (0xff < sVar1);
  sVar1 = auVar55._0_2_;
  bStack_150 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0] - (0xff < sVar1);
  sVar1 = auVar55._2_2_;
  cStack_14f = (0 < sVar1) * (sVar1 < 0x100) * auVar55[2] - (0xff < sVar1);
  sVar1 = auVar55._4_2_;
  cStack_14e = (0 < sVar1) * (sVar1 < 0x100) * auVar55[4] - (0xff < sVar1);
  sVar1 = auVar55._6_2_;
  cStack_14d = (0 < sVar1) * (sVar1 < 0x100) * auVar55[6] - (0xff < sVar1);
  sVar1 = auVar55._8_2_;
  cStack_14c = (0 < sVar1) * (sVar1 < 0x100) * auVar55[8] - (0xff < sVar1);
  sVar1 = auVar55._10_2_;
  cStack_14b = (0 < sVar1) * (sVar1 < 0x100) * auVar55[10] - (0xff < sVar1);
  sVar1 = auVar55._12_2_;
  cStack_14a = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xc] - (0xff < sVar1);
  sVar1 = auVar55._14_2_;
  cStack_149 = (0 < sVar1) * (sVar1 < 0x100) * auVar55[0xe] - (0xff < sVar1);
  local_d8._8_8_ =
       <generic_array[23c79d86a8b0a962]::GenericArray<u8,typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UInt<typenum[22d8d9cd1d3febd5]::uint::UTerm,typenum[22d8d9cd1d3febd5]::bit::B1>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>,typenum[22d8d9cd1d3febd5]::bit::B0>>as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>
       ::fmt;
  local_d8._0_8_ = &local_168;
  uVar42 = (*(code *)PTR_format_inner_00799048)();
  if (local_188 != (byte *)0x0) {
    uVar42 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
  }
  if (local_60 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar42,1);
  }
  return local_e8;
}


