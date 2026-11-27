// 001bb220 sqrt_ratio_i

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::sqrt_ratio_i */

undefined1 * __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::sqrt_ratio_i
          (undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uVar20;
  undefined1 auVar21 [16];
  ulonglong local_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0 [16];
  undefined1 local_1d8 [16];
  longlong local_1c8;
  longlong lStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  undefined1 *local_150;
  ulonglong local_148;
  ulonglong uStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 local_d0 [40];
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined1 local_58 [40];
  
  puVar6 = PTR_pow2k_0021a548;
  local_150 = param_1;
  uVar14 = (*(code *)PTR_pow2k_0021a548)(param_4,1);
  puVar7 = PTR_mul_0021a550;
  uVar14 = (*(code *)PTR_mul_0021a550)(uVar14,param_3);
  uVar14 = (*(code *)puVar6)(uVar14,1);
  uVar14 = (*(code *)puVar7)(uVar14,param_3);
  uVar14 = (*(code *)puVar7)(uVar14,local_a8);
  (*(code *)puVar7)(uVar14,local_80);
  pow22501(&local_1a8,local_d0);
  local_108 = local_188;
  local_118 = local_198;
  uStack_110 = lStack_190;
  local_128 = local_1a8;
  uStack_120 = lStack_1a0;
  uVar14 = (*(code *)PTR_pow2k_0021a548)();
  uVar14 = (*(code *)puVar7)(uVar14,&local_1a8);
  uVar14 = (*(code *)puVar7)(uVar14,local_58);
  uVar14 = (*(code *)PTR_pow2k_0021a548)(uVar14,1);
  (*(code *)puVar7)(uVar14,&local_1a8);
  puVar6 = PTR_ct_eq_0021a540;
  (*(code *)PTR_ct_eq_0021a540)();
  local_1b8 = _DAT_00114110;
  uStack_1b0 = _UNK_00114118;
  lStack_1a0 = (_DAT_00114110 - param_2[1] & _DAT_00113e40) +
               ((ulonglong)(_DAT_00113bf0 - *param_2) >> 0x33);
  local_198 = (_UNK_00114118 - param_2[2] & _UNK_00113e48) +
              ((ulonglong)(_UNK_00113bf8 - param_2[1]) >> 0x33);
  local_1c8 = (_DAT_00114110 - param_2[3] & _DAT_00113e40) +
              ((ulonglong)(_DAT_00114110 - param_2[2]) >> 0x33);
  lStack_1c0 = (_UNK_00114118 - param_2[4] & _UNK_00113e48) +
               ((ulonglong)(_UNK_00114118 - param_2[3]) >> 0x33);
  lVar11 = ((ulonglong)(_UNK_00114118 - param_2[4]) >> 0x33) * 0x13 +
           (_DAT_00113bf0 - *param_2 & 0x7ffffffffffffU);
  local_1a8 = lVar11;
  lStack_190 = local_1c8;
  local_188 = lStack_1c0;
  local_1d8._0_8_ = lStack_1a0;
  local_1d8._8_8_ = local_198;
  (*(code *)puVar6)();
  lStack_1a0 = local_1d8._0_8_;
  local_198 = local_1d8._8_8_;
  lStack_190 = local_1c8;
  local_188 = lStack_1c0;
  local_1a8 = lVar11;
  (*(code *)puVar7)();
  uVar14 = (*(code *)PTR_ct_eq_0021a540)();
  (*(code *)puVar7)(uVar14,&local_208);
  puVar6 = PTR_<u8>_0021a368;
  bVar8 = (*(code *)PTR_<u8>_0021a368)();
  lVar11 = -(ulonglong)bVar8;
  auVar21._8_4_ = (int)lVar11;
  auVar21._0_8_ = lVar11;
  auVar21._12_4_ = (int)((ulonglong)lVar11 >> 0x20);
  auVar19._8_8_ = uStack_200;
  auVar19._0_8_ = local_208;
  auVar3._8_8_ = lStack_1a0;
  auVar3._0_8_ = local_1a8;
  auVar19 = auVar3 & auVar21 | ~auVar21 & auVar19;
  uVar13 = auVar19._0_8_;
  auVar1._8_8_ = uStack_1f8;
  auVar1._0_8_ = uStack_200;
  auVar4._8_8_ = local_198;
  auVar4._0_8_ = lStack_1a0;
  auVar5._8_8_ = local_188;
  auVar5._0_8_ = lStack_190;
  local_138 = auVar4 & auVar21 | ~auVar21 & auVar1;
  uVar20 = local_138._8_8_;
  uVar10 = local_138._0_8_;
  lVar11 = (uVar10 & 0x7ffffffffffff) + (uVar13 >> 0x33);
  local_1c8 = (_DAT_00113c10 - uVar10 & _DAT_00113e40) + (_DAT_00113bf0 - uVar13 >> 0x33);
  lStack_1c0 = (_UNK_00113c18 - uVar20 & _UNK_00113e48) +
               ((ulonglong)(_UNK_00113bf8 - auVar19._8_8_) >> 0x33);
  local_1d8 = ~auVar21 & local_1f0 | auVar5 & auVar21;
  uVar15 = local_1d8._8_8_;
  uVar12 = local_1d8._0_8_;
  auVar16._8_4_ = local_1d8._0_4_;
  auVar16._0_8_ = uVar20;
  auVar16._12_4_ = local_1d8._4_4_;
  local_1b8 = local_1b8 - uVar20;
  uStack_1b0 = uStack_1b0 - auVar16._8_8_;
  local_148 = _DAT_00113c10 - uVar12 & _DAT_00113e40;
  uStack_140 = _UNK_00113c18 - uVar15 & _UNK_00113e48;
  bVar8 = (*(code *)puVar6)(lVar11,(((((uVar13 & 0x7ffffffffffff) + (uVar15 >> 0x33) * 0x13 + 0x13
                                      >> 0x33) + lVar11 >> 0x33) +
                                     (uVar20 & 0x7ffffffffffff) + (uVar10 >> 0x33) >> 0x33) +
                                    (uVar12 & 0x7ffffffffffff) + (uVar20 >> 0x33) >> 0x33) +
                                   (uVar15 & 0x7ffffffffffff) + (uVar12 >> 0x33) >> 0x33);
  auVar17._0_8_ = (local_1b8 >> 0x33) + local_148;
  auVar17._8_8_ = (uStack_1b0 >> 0x33) + uStack_140;
  uVar10 = -(ulonglong)bVar8;
  local_208 = ((0x7ffffffffffff0 - uVar15 >> 0x33) * 0x13 +
               (0x7fffffffffed0 - uVar13 & 0x7ffffffffffff) ^ uVar13) & uVar10 ^ uVar13;
  auVar18._8_4_ = (int)uVar10;
  auVar18._0_8_ = uVar10;
  auVar18._12_4_ = (int)(uVar10 >> 0x20);
  auVar2._8_8_ = lStack_1c0;
  auVar2._0_8_ = local_1c8;
  auVar19 = auVar2 & auVar18 | ~auVar18 & local_138;
  uStack_200 = auVar19._0_8_;
  uStack_1f8 = auVar19._8_8_;
  local_1f0 = ~auVar18 & local_1d8 | auVar17 & auVar18;
  uVar9 = (*(code *)puVar6)();
  *local_150 = uVar9;
  *(ulonglong *)(local_150 + 8) = local_208;
  *(undefined8 *)(local_150 + 0x10) = uStack_200;
  *(undefined8 *)(local_150 + 0x18) = uStack_1f8;
  *(undefined8 *)(local_150 + 0x20) = local_1f0._0_8_;
  *(undefined8 *)(local_150 + 0x28) = local_1f0._8_8_;
  return local_150;
}


