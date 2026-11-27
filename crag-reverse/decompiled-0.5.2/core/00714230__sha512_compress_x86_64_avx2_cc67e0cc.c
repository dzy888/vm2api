// 00714230 sha512_compress_x86_64_avx2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sha2[7efb180a76699f7c]::sha512::x86::sha512_compress_x86_64_avx2 */

void __rustcall
sha2[7efb180a76699f7c]::sha512::x86::sha512_compress_x86_64_avx2
          (ulonglong *param_1,undefined1 (*param_2) [16],ulonglong param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [64];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [16];
  undefined1 auVar54 [64];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [64];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  ulonglong local_3b0;
  ulonglong local_3a8;
  ulonglong local_3a0;
  longlong local_338 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar33 = 0;
  if ((param_3 & 1) != 0) {
    uVar26 = *param_1;
    uVar36 = param_1[1];
    uVar18 = param_1[2];
    uVar38 = param_1[3];
    uVar14 = param_1[4];
    uVar29 = param_1[5];
    auVar3 = vpshufb_avx(*param_2,_DAT_001827b0);
    local_2b8 = vpaddq_avx(auVar3,_DAT_00184220);
    uVar13 = param_1[6];
    auVar4 = vpshufb_avx(param_2[1],_DAT_001827b0);
    local_2a8 = vpaddq_avx(auVar4,_DAT_00182900);
    auVar41 = vpshufb_avx(param_2[2],_DAT_001827b0);
    local_298 = vpaddq_avx(auVar41,_DAT_001843c0);
    auVar48 = vpshufb_avx(param_2[3],_DAT_001827b0);
    auVar46 = ZEXT1664(auVar48);
    local_288 = vpaddq_avx(auVar48,_DAT_00183b90);
    auVar48 = vpshufb_avx(param_2[4],_DAT_001827b0);
    auVar47 = ZEXT1664(auVar48);
    local_278 = vpaddq_avx(auVar48,_DAT_00183600);
    auVar48 = vpshufb_avx(param_2[5],_DAT_001827b0);
    local_268 = vpaddq_avx(auVar48,_DAT_00184030);
    auVar5 = vpshufb_avx(param_2[6],_DAT_001827b0);
    auVar50 = ZEXT1664(auVar5);
    local_258 = vpaddq_avx(auVar5,_DAT_00182690);
    auVar5 = vpshufb_avx(param_2[7],_DAT_001827b0);
    auVar54 = ZEXT1664(auVar5);
    local_248 = vpaddq_avx(auVar5,_DAT_00183420);
    uVar15 = param_1[7];
    lVar19 = 0x10;
    uVar12 = uVar29;
    uVar21 = uVar38;
    uVar23 = uVar15;
    uVar16 = uVar18;
    uVar24 = uVar26;
    uVar30 = uVar14;
    uVar37 = uVar36;
    uVar28 = uVar13;
    do {
      uVar32 = (int)uVar33 + 1;
      uVar33 = (ulonglong)uVar32;
      lVar27 = 0;
      uVar22 = uVar23;
      uVar25 = uVar28;
      uVar34 = uVar21;
      uVar39 = uVar16;
      auVar56 = auVar4;
      auVar5 = auVar48;
      auVar53 = auVar3;
      do {
        auVar4 = auVar41;
        auVar3 = auVar56;
        uVar21 = uVar37;
        uVar28 = uVar30;
        uVar16 = uVar24;
        uVar23 = uVar12;
        if (0x4f < (ulonglong)(lVar27 + lVar19)) {
          (*(code *)PTR_panic_bounds_check_00799520)
                    (uVar34,&PTR_s__vendor_sha2_0_10_9_src_sha512_x_00795a50);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        auVar48 = auVar50._0_16_;
        auVar41 = auVar46._0_16_;
        auVar64 = auVar54._0_16_;
        auVar50 = ZEXT1664(auVar64);
        auVar55 = auVar47._0_16_;
        auVar46 = ZEXT1664(auVar55);
        auVar47 = ZEXT1664(auVar5);
        auVar56 = vpalignr_avx(auVar3,auVar53,8);
        auVar5 = vpalignr_avx(auVar5,auVar55,8);
        auVar58 = vpsrlq_avx(auVar56,1);
        auVar5 = vpaddq_avx(auVar53,auVar5);
        auVar55 = vpsrlq_avx(auVar56,7);
        auVar60 = vpsllq_avx(auVar56,0x38);
        auVar61 = vpsrlq_avx(auVar56,8);
        auVar53 = vpsllq_avx(auVar56,0x3f);
        auVar56 = vpsrlq_avx(auVar64,6);
        auVar59 = vpsllq_avx(auVar64,3);
        auVar62 = vpsrlq_avx(auVar64,0x13);
        auVar63 = vpsllq_avx(auVar64,0x2d);
        auVar64 = vpsrlq_avx(auVar64,0x3d);
        auVar5 = vpaddq_avx(auVar5,auVar59 ^ auVar62 ^ auVar63 ^ auVar64 ^ auVar56);
        auVar5 = vpaddq_avx(auVar5,auVar55 ^ auVar58 ^ auVar60 ^ auVar61 ^ auVar53);
        auVar54 = ZEXT1664(auVar5);
        auVar5 = vpaddq_avx(auVar5,*(undefined1 (*) [16])(&DAT_001b8150 + lVar19 * 8 + lVar27 * 8));
        lVar11 = ((uVar25 ^ uVar23) & uVar28 ^ uVar25) + uVar22 +
                 ((uVar28 << 0x17 | uVar28 >> 0x29) ^
                 (uVar28 << 0x2e | uVar28 >> 0x12) ^ (uVar28 << 0x32 | uVar28 >> 0xe)) +
                 *(longlong *)(local_2b8 + lVar27 * 8);
        uVar37 = (uVar21 & uVar39 ^ (uVar21 ^ uVar39) & uVar16) +
                 ((uVar16 << 0x19 | uVar16 >> 0x27) ^
                 (uVar16 << 0x1e | uVar16 >> 0x22) ^ (uVar16 << 0x24 | uVar16 >> 0x1c)) + lVar11;
        uVar12 = lVar11 + uVar34;
        lVar11 = uVar25 + *(longlong *)(local_2b8 + lVar27 * 8 + 8) +
                 ((uVar28 ^ uVar23) & uVar12 ^ uVar23) +
                 ((uVar12 * 0x800000 | uVar12 >> 0x29) ^
                 (uVar12 << 0x2e | uVar12 >> 0x12) ^ (uVar12 << 0x32 | uVar12 >> 0xe));
        uVar24 = (uVar16 & uVar21 ^ (uVar16 ^ uVar21) & uVar37) +
                 ((uVar37 * 0x2000000 | uVar37 >> 0x27) ^
                 (uVar37 * 0x40000000 | uVar37 >> 0x22) ^ (uVar37 << 0x24 | uVar37 >> 0x1c)) +
                 lVar11;
        uVar30 = lVar11 + uVar39;
        *(undefined1 (*) [16])(local_2b8 + lVar27 * 8) = auVar5;
        lVar27 = lVar27 + 2;
        uVar22 = uVar23;
        uVar25 = uVar28;
        uVar34 = uVar21;
        uVar39 = uVar16;
        auVar56 = auVar4;
        auVar5 = auVar48;
        auVar53 = auVar3;
      } while (lVar27 != 0x10);
      lVar19 = lVar19 + 0x10;
    } while (uVar32 != 4);
    lVar19 = 0;
    do {
      uVar34 = uVar28;
      uVar25 = uVar37;
      uVar22 = uVar30;
      uVar37 = uVar24;
      uVar33 = uVar16;
      uVar28 = uVar12;
      lVar27 = ((uVar28 ^ uVar34) & uVar22 ^ uVar34) + uVar23 +
               ((uVar22 << 0x17 | uVar22 >> 0x29) ^
               (uVar22 << 0x2e | uVar22 >> 0x12) ^ (uVar22 << 0x32 | uVar22 >> 0xe)) +
               *(longlong *)(local_2b8 + lVar19 * 8);
      uVar24 = (uVar33 & uVar25 ^ (uVar33 ^ uVar25) & uVar37) +
               ((uVar37 << 0x19 | uVar37 >> 0x27) ^
               (uVar37 << 0x1e | uVar37 >> 0x22) ^ (uVar37 << 0x24 | uVar37 >> 0x1c)) + lVar27;
      uVar30 = lVar27 + uVar21;
      lVar19 = lVar19 + 1;
      uVar12 = uVar22;
      uVar21 = uVar33;
      uVar23 = uVar34;
      uVar16 = uVar25;
    } while (lVar19 != 0x10);
    *param_1 = uVar24 + uVar26;
    param_1[1] = uVar37 + uVar36;
    param_1[2] = uVar25 + uVar18;
    param_1[3] = uVar33 + uVar38;
    param_1[4] = uVar30 + uVar14;
    param_1[5] = uVar22 + uVar29;
    param_1[6] = uVar28 + uVar13;
    param_1[7] = uVar34 + uVar15;
    uVar33 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  local_138 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  local_158 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  uStack_1a8 = 0;
  uStack_1a0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  uVar26 = 0;
  if (uVar33 <= param_3) {
    uVar26 = param_3 - uVar33;
  }
  local_238 = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  uStack_220 = 0;
  lVar19 = uVar26 - (uVar26 >> 1);
  if (lVar19 != 0) {
    uVar26 = *param_1;
    uVar36 = param_1[2];
    uVar18 = param_1[3];
    uVar38 = param_1[4];
    uVar14 = param_1[5];
    local_3a8 = param_1[6];
    uVar29 = param_1[7];
    local_3b0 = param_1[1];
    do {
      auVar42._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 8];
      auVar42._0_16_ = ZEXT116(1) * param_2[uVar33 * 8];
      auVar42 = vpshufb_avx2(auVar42,_DAT_0018d540);
      auVar47 = ZEXT3264(auVar42);
      local_338[0] = auVar42._0_8_ + _DAT_0018cdc0;
      local_338[1] = auVar42._8_8_ + _UNK_0018cdc8;
      local_2b8._8_8_ = auVar42._24_8_ + _UNK_0018cdd8;
      local_2b8._0_8_ = auVar42._16_8_ + _UNK_0018cdd0;
      auVar43._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 9];
      auVar43._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 1];
      auVar42 = vpshufb_avx2(auVar43,_DAT_0018d540);
      local_338[2] = auVar42._0_8_ + _DAT_0018d480;
      local_338[3] = auVar42._8_8_ + _UNK_0018d488;
      local_2a8._8_8_ = auVar42._24_8_ + _UNK_0018d498;
      local_2a8._0_8_ = auVar42._16_8_ + _UNK_0018d490;
      auVar44._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 10];
      auVar44._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 2];
      auVar43 = vpshufb_avx2(auVar44,_DAT_0018d540);
      local_338[4] = auVar43._0_8_ + _DAT_0018d220;
      local_338[5] = auVar43._8_8_ + _UNK_0018d228;
      auVar49._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 0xb];
      auVar49._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 3];
      local_298._8_8_ = auVar43._24_8_ + _UNK_0018d238;
      local_298._0_8_ = auVar43._16_8_ + _UNK_0018d230;
      auVar44 = vpshufb_avx2(auVar49,_DAT_0018d540);
      auVar50 = ZEXT3264(auVar44);
      local_338[6] = auVar44._0_8_ + _DAT_0018d240;
      local_338[7] = auVar44._8_8_ + _UNK_0018d248;
      local_288._8_8_ = auVar44._24_8_ + _UNK_0018d258;
      local_288._0_8_ = auVar44._16_8_ + _UNK_0018d250;
      auVar52._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 0xc];
      auVar52._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 4];
      auVar44 = vpshufb_avx2(auVar52,_DAT_0018d540);
      auVar54 = ZEXT3264(auVar44);
      local_338[8] = auVar44._0_8_ + _DAT_0018d260;
      local_338[9] = auVar44._8_8_ + _UNK_0018d268;
      local_278._8_8_ = auVar44._24_8_ + _UNK_0018d278;
      local_278._0_8_ = auVar44._16_8_ + _UNK_0018d270;
      auVar45._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 0xd];
      auVar45._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 5];
      auVar44 = vpshufb_avx2(auVar45,_DAT_0018d540);
      local_338[10] = auVar44._0_8_ + _DAT_0018cfc0;
      local_338[0xb] = auVar44._8_8_ + _UNK_0018cfc8;
      local_268._8_8_ = auVar44._24_8_ + _UNK_0018cfd8;
      local_268._0_8_ = auVar44._16_8_ + _UNK_0018cfd0;
      auVar65._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 0xe];
      auVar65._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 6];
      auVar52 = vpshufb_avx2(auVar65,_DAT_0018d540);
      auVar66 = ZEXT3264(auVar52);
      local_338[0xc] = auVar52._0_8_ + _DAT_0018d4a0;
      local_338[0xd] = auVar52._8_8_ + _UNK_0018d4a8;
      auVar51._16_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 0xf];
      auVar51._0_16_ = ZEXT116(1) * param_2[uVar33 * 8 + 7];
      local_258._8_8_ = auVar52._24_8_ + _UNK_0018d4b8;
      local_258._0_8_ = auVar52._16_8_ + _UNK_0018d4b0;
      auVar52 = vpshufb_avx2(auVar51,_DAT_0018d540);
      auVar46 = ZEXT3264(auVar52);
      local_338[0xe] = _DAT_0018d0a0 + auVar52._0_8_;
      local_338[0xf] = _UNK_0018d0a8 + auVar52._8_8_;
      local_248._8_8_ = _UNK_0018d0b8 + auVar52._24_8_;
      local_248._0_8_ = _UNK_0018d0b0 + auVar52._16_8_;
      lVar11 = 1;
      lVar27 = 0x10;
      puVar17 = &local_238;
      uVar13 = uVar29;
      uVar15 = uVar26;
      uVar12 = local_3b0;
      uVar21 = uVar14;
      uVar23 = uVar38;
      uVar16 = uVar36;
      uVar24 = local_3a8;
      uVar30 = uVar18;
      do {
        lVar40 = 0;
        uVar37 = uVar16;
        uVar28 = uVar13;
        uVar22 = uVar24;
        uVar25 = uVar30;
        auVar57 = auVar47;
        auVar52 = auVar42;
        auVar45 = auVar44;
        do {
          auVar42 = auVar43;
          uVar24 = uVar23;
          uVar13 = uVar21;
          uVar30 = uVar12;
          uVar16 = uVar15;
          auVar44 = auVar66._0_32_;
          auVar43 = auVar50._0_32_;
          auVar65 = auVar46._0_32_;
          auVar66 = ZEXT3264(auVar65);
          auVar49 = auVar54._0_32_;
          auVar50 = ZEXT3264(auVar49);
          auVar54 = ZEXT3264(auVar45);
          auVar47 = ZEXT3264(auVar52);
          lVar1 = lVar27 * 8 + lVar40 * 8;
          lVar9 = *(longlong *)(&DAT_001b8150 + lVar1);
          lVar10 = *(longlong *)(&UNK_001b8158 + lVar1);
          auVar52 = vpalignr_avx2(auVar52,auVar57._0_32_,8);
          auVar45 = vpalignr_avx2(auVar45,auVar49,8);
          auVar49 = vpsrlq_avx2(auVar52,1);
          auVar67 = vpsrlq_avx2(auVar52,7);
          auVar68 = vpsllq_avx2(auVar52,0x38);
          auVar51 = vpsrlq_avx2(auVar52,8);
          auVar52 = vpsllq_avx2(auVar52,0x3f);
          auVar52 = auVar67 ^ auVar49 ^ auVar68 ^ auVar51 ^ auVar52;
          auVar49 = vpsrlq_avx2(auVar65,6);
          auVar51 = vpsllq_avx2(auVar65,3);
          auVar67 = vpsrlq_avx2(auVar65,0x13);
          auVar68 = vpsllq_avx2(auVar65,0x2d);
          auVar65 = vpsrlq_avx2(auVar65,0x3d);
          auVar65 = auVar65 ^ auVar67 ^ auVar68 ^ auVar51 ^ auVar49;
          lVar1 = auVar45._0_8_ + auVar57._0_8_ + auVar65._0_8_ + auVar52._0_8_;
          lVar6 = auVar45._8_8_ + auVar57._8_8_ + auVar65._8_8_ + auVar52._8_8_;
          lVar7 = auVar45._16_8_ + auVar57._16_8_ + auVar65._16_8_ + auVar52._16_8_;
          lVar8 = auVar45._24_8_ + auVar57._24_8_ + auVar65._24_8_ + auVar52._24_8_;
          auVar46 = ZEXT3264(CONCAT824(lVar8,CONCAT816(lVar7,CONCAT88(lVar6,lVar1))));
          lVar20 = ((uVar13 ^ uVar22) & uVar24 ^ uVar22) + uVar28 +
                   ((uVar24 << 0x17 | uVar24 >> 0x29) ^
                   (uVar24 << 0x2e | uVar24 >> 0x12) ^ (uVar24 << 0x32 | uVar24 >> 0xe)) +
                   local_338[lVar40];
          uVar12 = (uVar37 & uVar30 ^ (uVar37 ^ uVar30) & uVar16) +
                   ((uVar16 << 0x19 | uVar16 >> 0x27) ^
                   (uVar16 << 0x1e | uVar16 >> 0x22) ^ (uVar16 << 0x24 | uVar16 >> 0x1c)) + lVar20;
          uVar21 = lVar20 + uVar25;
          lVar20 = uVar22 + local_338[lVar40 + 1] + ((uVar13 ^ uVar24) & uVar21 ^ uVar13) +
                   ((uVar21 * 0x800000 | uVar21 >> 0x29) ^
                   (uVar21 << 0x2e | uVar21 >> 0x12) ^ (uVar21 << 0x32 | uVar21 >> 0xe));
          uVar15 = (uVar30 & uVar16 ^ (uVar30 ^ uVar16) & uVar12) +
                   ((uVar12 * 0x2000000 | uVar12 >> 0x27) ^
                   (uVar12 * 0x40000000 | uVar12 >> 0x22) ^ (uVar12 << 0x24 | uVar12 >> 0x1c)) +
                   lVar20;
          uVar23 = lVar20 + uVar37;
          local_338[lVar40] = lVar1 + lVar9;
          local_338[lVar40 + 1] = lVar6 + lVar10;
          puVar17[lVar40] = lVar7 + lVar9;
          (puVar17 + lVar40)[1] = lVar8 + lVar10;
          lVar40 = lVar40 + 2;
          uVar37 = uVar16;
          uVar28 = uVar13;
          uVar22 = uVar24;
          uVar25 = uVar30;
          auVar57 = auVar47;
          auVar52 = auVar42;
          auVar45 = auVar44;
        } while (lVar40 != 0x10);
        lVar11 = lVar11 + 1;
        lVar27 = lVar27 + 0x10;
        puVar17 = puVar17 + 0x10;
      } while (lVar11 != 5);
      lVar27 = 0;
      do {
        uVar22 = uVar24;
        uVar28 = uVar16;
        uVar37 = uVar23;
        uVar24 = uVar21;
        uVar16 = uVar12;
        uVar12 = uVar15;
        lVar11 = ((uVar24 ^ uVar22) & uVar37 ^ uVar22) + uVar13 +
                 ((uVar37 << 0x17 | uVar37 >> 0x29) ^
                 (uVar37 << 0x2e | uVar37 >> 0x12) ^ (uVar37 << 0x32 | uVar37 >> 0xe)) +
                 local_338[lVar27];
        uVar15 = (uVar28 & uVar16 ^ (uVar28 ^ uVar16) & uVar12) +
                 ((uVar12 << 0x19 | uVar12 >> 0x27) ^
                 (uVar12 << 0x1e | uVar12 >> 0x22) ^ (uVar12 << 0x24 | uVar12 >> 0x1c)) + lVar11;
        uVar23 = lVar11 + uVar30;
        lVar27 = lVar27 + 1;
        uVar13 = uVar22;
        uVar21 = uVar37;
        uVar30 = uVar28;
      } while (lVar27 != 0x10);
      uVar15 = uVar15 + uVar26;
      uVar12 = uVar12 + local_3b0;
      uVar23 = uVar23 + uVar38;
      lVar27 = 0;
      uVar21 = uVar28 + uVar18;
      uVar26 = uVar15;
      uVar30 = uVar24 + local_3a8;
      uVar25 = uVar22 + uVar29;
      uVar34 = uVar16 + uVar36;
      uVar38 = uVar23;
      uVar13 = uVar12;
      uVar39 = uVar37 + uVar14;
      do {
        local_3a0 = uVar39;
        local_3b0 = uVar13;
        uVar39 = uVar38;
        uVar35 = uVar34;
        uVar31 = uVar30;
        uVar13 = uVar26;
        lVar11 = ((local_3a0 ^ uVar31) & uVar39 ^ uVar31) + uVar25 +
                 ((uVar39 << 0x17 | uVar39 >> 0x29) ^
                 (uVar39 << 0x2e | uVar39 >> 0x12) ^ (uVar39 << 0x32 | uVar39 >> 0xe)) +
                 *(longlong *)(local_2b8 + lVar27);
        lVar27 = lVar27 + 8;
        uVar26 = (uVar35 & local_3b0 ^ (uVar35 ^ local_3b0) & uVar13) +
                 ((uVar13 << 0x19 | uVar13 >> 0x27) ^
                 (uVar13 << 0x1e | uVar13 >> 0x22) ^ (uVar13 << 0x24 | uVar13 >> 0x1c)) + lVar11;
        uVar38 = lVar11 + uVar21;
        uVar21 = uVar35;
        uVar30 = local_3a0;
        uVar25 = uVar31;
        uVar34 = local_3b0;
      } while (lVar27 != 0x280);
      uVar26 = uVar26 + uVar15;
      uVar13 = uVar13 + uVar12;
      uVar36 = local_3b0 + uVar16 + uVar36;
      uVar18 = uVar35 + uVar28 + uVar18;
      uVar38 = uVar38 + uVar23;
      uVar14 = uVar39 + uVar37 + uVar14;
      local_3a8 = local_3a0 + uVar24 + local_3a8;
      uVar29 = uVar31 + uVar22 + uVar29;
      uVar33 = uVar33 + 2;
      lVar19 = lVar19 + -1;
      local_3b0 = uVar13;
    } while (lVar19 != 0);
    *param_1 = uVar26;
    param_1[1] = uVar13;
    param_1[2] = uVar36;
    param_1[3] = uVar18;
    param_1[4] = uVar38;
    param_1[5] = uVar14;
    param_1[6] = local_3a8;
    param_1[7] = uVar29;
  }
  return;
}


