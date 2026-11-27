// 006cb880 mul

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <&curve25519_dalek[8828c522c30c513]::montgomery::MontgomeryPoint as
   core[c0acaeba6ab4c2e0]::ops::arith::Mul<&curve25519_dalek[8828c522c30c513]::scalar::Scalar>>::mul
    */

undefined8 __rustcall
<&curve25519_dalek[8828c522c30c513]::montgomery::MontgomeryPoint_as_core[c0acaeba6ab4c2e0]::ops::arith::Mul<&curve25519_dalek[8828c522c30c513]::scalar::Scalar>>
::mul(undefined8 param_1,ulonglong *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined *puVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  ulonglong local_268;
  ulonglong uStackY_260;
  undefined1 auVar22 [16];
  undefined1 local_248 [16];
  ulonglong uStack_240;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  longlong lStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  ulonglong uStack_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined1 local_58 [40];
  
  local_218 = *param_2 & 0x7ffffffffffff;
  uStack_210 = *(ulonglong *)((longlong)param_2 + 6) >> 3 & 0x7ffffffffffff;
  local_208 = *(ulonglong *)((longlong)param_2 + 0xc) >> 6 & 0x7ffffffffffff;
  uStack_200 = *(ulonglong *)((longlong)param_2 + 0x13) >> 1 & 0x7ffffffffffff;
  local_1f8 = param_2[3] >> 0xc & 0x7ffffffffffff;
  auVar22._8_8_ = _UNK_001a9700;
  auVar22._0_8_ = _DAT_001a96f8;
  local_268 = _DAT_001a96e8;
  uStackY_260 = _UNK_001a96f0;
  local_248 = ZEXT816(0);
  auStack_238 = ZEXT816(0);
  auStack_228 = ZEXT816(0);
  uStack_1f0 = _DAT_001a96e8;
  uStack_1e8 = _UNK_001a96f0;
  uStack_1e0 = _DAT_001a96f8;
  uStack_1d8 = _UNK_001a9700;
  local_1d0 = 0;
  uStack_128 = 0;
  local_120 = 0x100;
  local_1c0 = param_1;
  local_130 = param_3;
  local_e0 = local_218;
  uStack_d8 = uStack_210;
  local_d0 = local_208;
  local_c8 = uStack_200;
  local_c0 = local_1f8;
  while( true ) {
    lStack_118 = 0;
    cVar7 = <core[c0acaeba6ab4c2e0]::iter::adapters::rev::Rev<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>,<curve25519_dalek[8828c522c30c513]::scalar::Scalar>::bits_le::{closure#0}>>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
            ::nth(&local_130);
    if (cVar7 == '\x02') break;
    local_1c8 = lStack_118;
    while( true ) {
      bVar6 = (*(code *)PTR_<u8>_00799268)();
      local_160 = local_268;
      local_170 = uStackY_260;
      local_180 = auVar22._0_8_;
      local_188 = auVar22._8_8_;
      local_198 = local_248._0_8_;
      uVar8 = -(ulonglong)bVar6;
      local_138 = local_218;
      local_140 = uStack_210;
      local_1a8 = (local_218 ^ local_268) & uVar8;
      uVar19 = (uStack_210 ^ uStackY_260) & uVar8;
      local_148 = local_208;
      uVar12 = (local_208 ^ local_180) & uVar8;
      local_150 = uStack_200;
      uVar16 = (uStack_200 ^ local_188) & uVar8;
      local_158 = local_1f8;
      uVar17 = (local_1f8 ^ local_248._0_8_) & uVar8;
      local_1b0 = uStack_240;
      local_168 = uStack_1f0;
      uVar13 = (uStack_1f0 ^ uStack_240) & uVar8;
      local_178 = uStack_1e8;
      uVar18 = (uStack_1e8 ^ auStack_238._0_8_) & uVar8;
      local_190 = uStack_1e0;
      uVar15 = (uStack_1e0 ^ auStack_238._8_8_) & uVar8;
      local_1a0 = uStack_1d8;
      uVar14 = (uStack_1d8 ^ auStack_228._0_8_) & uVar8;
      local_1b8 = local_1d0;
      uVar8 = (local_1d0 ^ auStack_228._8_8_) & uVar8;
      local_268 = local_268 ^ local_1a8;
      uStackY_260 = uStackY_260 ^ uVar19;
      uVar9 = local_180 ^ uVar12;
      uVar10 = local_188 ^ uVar16;
      auVar22._8_8_ = uVar10;
      auVar22._0_8_ = uVar9;
      local_248._0_8_ = local_248._0_8_ ^ uVar17;
      uStack_240 = uStack_240 ^ uVar13;
      auStack_238._8_8_ = auStack_238._8_8_ ^ uVar15;
      auStack_238._0_8_ = auStack_238._0_8_ ^ uVar18;
      auStack_228._0_8_ = auStack_228._0_8_ ^ uVar14;
      auStack_228._8_8_ = auStack_228._8_8_ ^ uVar8;
      local_218 = local_1a8 ^ local_218;
      uStack_210 = uVar19 ^ uStack_210;
      local_208 = uVar12 ^ local_208;
      uStack_200 = uVar16 ^ uStack_200;
      local_1f8 = uVar17 ^ local_1f8;
      uStack_1f0 = uVar13 ^ uStack_1f0;
      uStack_1e8 = uVar18 ^ uStack_1e8;
      uStack_1e0 = uVar15 ^ uStack_1e0;
      uStack_1d8 = uVar14 ^ uStack_1d8;
      local_1d0 = uVar8 ^ local_1d0;
      (*(code *)PTR_differential_add_and_double_0079a638)
                (local_218,&local_e0,auStack_228._8_8_,auStack_228._0_8_,uVar9,uVar10,
                 local_248._0_8_);
      uVar8 = local_120;
      if (local_1c8 != 0) break;
      if (local_120 <= uStack_128) goto LAB_006cbcd9;
      if (0x100 < local_120) {
        local_120 = local_120 - 1;
        (*(code *)PTR_panic_bounds_check_00799520)
                  (uVar8,&PTR_s__vendor_curve25519_dalek_4_1_3_s_007932d8);
        pcVar1 = (code *)swi(3);
        uVar20 = (*pcVar1)();
        return uVar20;
      }
      local_1c8 = 0;
      local_120 = local_120 - 1;
    }
  }
LAB_006cbcd9:
  bVar6 = (*(code *)PTR_<u8>_00799268)();
  lVar11 = -(ulonglong)bVar6;
  auVar21._8_4_ = (int)lVar11;
  auVar21._0_8_ = lVar11;
  auVar21._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  auVar2._8_8_ = uStack_1f0;
  auVar2._0_8_ = local_1f8;
  local_248 = auVar2 & auVar21 | ~auVar21 & local_248;
  auVar3._8_8_ = uStack_1e0;
  auVar3._0_8_ = uStack_1e8;
  auStack_238 = auVar3 & auVar21 | ~auVar21 & auStack_238;
  auVar4._8_8_ = local_1d0;
  auVar4._0_8_ = uStack_1d8;
  auStack_228 = auVar21 & auVar4 | ~auVar21 & auStack_228;
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::pow22501
            (&local_130,&uStack_240);
  local_98 = local_110;
  local_a8 = local_120;
  lStack_a0 = lStack_118;
  local_b8 = local_130;
  uStack_b0 = uStack_128;
  local_68 = local_e8;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  local_88 = local_108;
  uStack_80 = uStack_100;
  uVar20 = (*(code *)PTR_pow2k_0079a600)();
  puVar5 = PTR_mul_0079a608;
  uVar20 = (*(code *)PTR_mul_0079a608)(uVar20,&local_88);
  (*(code *)puVar5)(uVar20,local_58);
  uVar20 = local_1c0;
  (*(code *)PTR_as_bytes_0079a610)();
  return uVar20;
}


