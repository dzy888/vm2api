// 001b8840 step_1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* curve25519_dalek[8828c522c30c513]::edwards::decompress::step_1 */

longlong * __rustcall
curve25519_dalek[8828c522c30c513]::edwards::decompress::step_1(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [12];
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  undefined1 auVar8 [16];
  ulonglong uVar10;
  undefined1 local_c8;
  undefined7 uStack_c7;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  uVar1 = *param_2;
  uVar2 = *(ulonglong *)((longlong)param_2 + 0xc);
  uVar7 = *(ulonglong *)((longlong)param_2 + 6) >> 3 & 0x7ffffffffffff;
  uVar3 = *(ulonglong *)((longlong)param_2 + 0x13);
  uVar4 = param_2[3];
  (*(code *)PTR_pow2k_0021a548)(uVar7,1);
  uVar9 = lStack_88 + _UNK_00114118;
  local_38 = (lStack_90 + _DAT_00114110 & _DAT_00113e40) +
             ((ulonglong)(local_98 + _DAT_00113c00) >> 0x33);
  lStack_30 = (uVar9 & _UNK_00113e48) + ((ulonglong)(lStack_90 + _UNK_00113c08) >> 0x33);
  uVar10 = local_80 + _DAT_00114110;
  local_40 = ((ulonglong)(lStack_78 + _UNK_00114118) >> 0x33) * 0x13 +
             (local_98 + _DAT_00113c00 & 0x7ffffffffffffU);
  auVar5._4_8_ = uVar9;
  auVar5._0_4_ = (int)(uVar9 >> 0x20);
  auVar8._0_8_ = auVar5._0_8_ << 0x20;
  auVar8._8_4_ = (int)uVar10;
  auVar8._12_4_ = (int)(uVar10 >> 0x20);
  local_28 = ((auVar5._0_8_ & 0xffffffff) >> 0x13) + (_DAT_00113e40 & uVar10);
  lStack_20 = (auVar8._8_8_ >> 0x33) + (_UNK_00113e48 & lStack_78 + _UNK_00114118);
  (*(code *)PTR_mul_0021a550)
            (local_40,anon_978f08ea0fb8b5e18112a63c7fe43490_17_llvm_8766988029180421303);
  local_68 = CONCAT71(uStack_c7,local_c8) + _DAT_00113d10;
  lStack_60 = lStack_c0 + _UNK_00113d18;
  local_58 = local_b8;
  lStack_50 = lStack_b0;
  local_48 = local_a8;
  <curve25519_dalek[8828c522c30c513]::backend::serial::u64::field::FieldElement51>::sqrt_ratio_i
            (&local_c8,&local_40,&local_68);
  param_1[4] = local_a0;
  param_1[2] = lStack_b0;
  param_1[3] = local_a8;
  *param_1 = lStack_c0;
  param_1[1] = local_b8;
  *(undefined1 *)(param_1 + 10) = local_c8;
  param_1[5] = uVar1 & 0x7ffffffffffff;
  param_1[6] = uVar7;
  param_1[7] = uVar2 >> 6 & 0x7ffffffffffff;
  param_1[8] = uVar3 >> 1 & 0x7ffffffffffff;
  param_1[9] = uVar4 >> 0xc & 0x7ffffffffffff;
  uVar6 = anon_978f08ea0fb8b5e18112a63c7fe43490_16_llvm_8766988029180421303._8_8_;
  param_1[0xb] = anon_978f08ea0fb8b5e18112a63c7fe43490_16_llvm_8766988029180421303._0_8_;
  param_1[0xc] = uVar6;
  uVar6 = anon_978f08ea0fb8b5e18112a63c7fe43490_16_llvm_8766988029180421303._24_8_;
  param_1[0xd] = anon_978f08ea0fb8b5e18112a63c7fe43490_16_llvm_8766988029180421303._16_8_;
  param_1[0xe] = uVar6;
  param_1[0xf] = 0;
  return param_1;
}


