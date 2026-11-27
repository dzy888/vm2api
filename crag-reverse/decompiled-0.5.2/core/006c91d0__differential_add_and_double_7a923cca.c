// 006c91d0 differential_add_and_double

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* curve25519_dalek[8828c522c30c513]::montgomery::differential_add_and_double */

void __rustcall
curve25519_dalek[8828c522c30c513]::montgomery::differential_add_and_double
          (longlong *param_1,longlong *param_2)

{
  undefined1 auVar1 [12];
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  longlong local_318;
  longlong lStack_310;
  longlong lStack_308;
  longlong local_300;
  longlong lStack_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong local_190;
  longlong lStack_188;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  undefined1 local_58 [40];
  
  puVar2 = PTR_pow2k_0079a600;
  local_2f0 = param_1[5] + *param_1;
  local_2e8 = param_1[6] + param_1[1];
  local_2e0 = param_1[7] + param_1[2];
  local_2d8 = param_1[8] + param_1[3];
  local_2d0 = param_1[9] + param_1[4];
  uVar3 = (param_1[1] + 0x7ffffffffffff0) - param_1[6];
  uVar5 = (param_1[2] + 0x7ffffffffffff0) - param_1[7];
  uVar7 = (param_1[3] + 0x7ffffffffffff0) - param_1[8];
  local_2c8 = param_2[5] + *param_2;
  local_2c0 = param_2[6] + param_2[1];
  local_2b8 = param_2[7] + param_2[2];
  local_2b0 = param_2[8] + param_2[3];
  local_2a8 = param_2[9] + param_2[4];
  uVar10 = (*param_2 + 0x7ffffffffffed0) - param_2[5];
  uVar4 = (param_2[1] + 0x7ffffffffffff0) - param_2[6];
  uVar6 = (param_2[2] + 0x7ffffffffffff0) - param_2[7];
  uVar8 = (param_2[3] + 0x7ffffffffffff0) - param_2[8];
  uVar9 = (param_2[4] + 0x7ffffffffffff0) - param_2[9];
  local_298 = (uVar4 & 0x7ffffffffffff) + (uVar10 >> 0x33);
  local_290 = (uVar6 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  local_288 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
  uVar4 = uVar9 >> 0x33;
  local_280 = (uVar9 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  local_2a0 = uVar4 * 0x13 + (uVar10 & 0x7ffffffffffff);
  uVar11 = (*(code *)PTR_pow2k_0079a600)
                     (local_290,1,local_2a0,uVar4 * 9,
                      (uVar3 & 0x7ffffffffffff) +
                      ((ulonglong)((*param_1 + 0x7ffffffffffed0) - param_1[5]) >> 0x33),
                      (uVar5 & 0x7ffffffffffff) + (uVar3 >> 0x33),
                      (uVar7 & 0x7ffffffffffff) + (uVar5 >> 0x33),
                      ((param_1[4] + 0x7ffffffffffff0) - param_1[9] & 0x7ffffffffffffU) +
                      (uVar7 >> 0x33));
  (*(code *)puVar2)(uVar11,1);
  puVar2 = PTR_mul_0079a608;
  local_1b8 = local_318;
  lStack_1b0 = lStack_310;
  uVar4 = (local_1a8 - local_318) + _DAT_001833f0;
  local_1c8 = lStack_310;
  lStack_1c0 = lStack_308;
  uVar3 = (lStack_198 - lStack_308) + _UNK_001848c8;
  local_118 = ((lStack_1a0 - lStack_310) + _DAT_001848c0 & _DAT_00183e20) + (uVar4 >> 0x33);
  lStack_110 = (uVar3 & _UNK_00183e28) +
               ((ulonglong)((lStack_1a0 - lStack_310) + _UNK_001833f8) >> 0x33);
  local_1d8 = local_300;
  lStack_1d0 = lStack_2f8;
  uVar5 = (local_190 - local_300) + _DAT_001848c0;
  uVar6 = (lStack_188 - lStack_2f8) + _UNK_001848c8;
  local_120 = (uVar6 >> 0x33) * 0x13 + (uVar4 & 0x7ffffffffffff);
  auVar1._4_8_ = uVar3;
  auVar1._0_4_ = (int)(uVar3 >> 0x20);
  auVar12._0_8_ = auVar1._0_8_ << 0x20;
  auVar12._8_4_ = (int)uVar5;
  auVar12._12_4_ = (int)(uVar5 >> 0x20);
  local_108 = ((auVar1._0_8_ & 0xffffffff) >> 0x13) + (_DAT_00183e20 & uVar5);
  lStack_100 = (auVar12._8_8_ >> 0x33) + (_UNK_00183e28 & uVar6);
  uVar11 = (*(code *)PTR_mul_0079a608)(local_120,&local_2a0);
  (*(code *)puVar2)(uVar11,&local_2c8);
  puVar2 = PTR_pow2k_0079a600;
  local_228 = local_250 + local_278;
  local_220 = local_248 + local_270;
  local_218 = local_240 + local_268;
  local_210 = local_238 + local_260;
  local_208 = local_230 + local_258;
  uVar7 = (local_278 + 0x7ffffffffffed0) - local_250;
  uVar3 = (local_270 + 0x7ffffffffffff0) - local_248;
  uVar4 = (local_268 + 0x7ffffffffffff0) - local_240;
  uVar5 = (local_260 + 0x7ffffffffffff0) - local_238;
  uVar6 = (local_258 + 0x7ffffffffffff0) - local_230;
  local_1f8 = (uVar3 & 0x7ffffffffffff) + (uVar7 >> 0x33);
  local_1f0 = (uVar4 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  local_1e8 = (uVar5 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  local_1e0 = (uVar6 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  local_200 = (uVar6 >> 0x33) * 0x13 + (uVar7 & 0x7ffffffffffff);
  uVar11 = (*(code *)PTR_pow2k_0079a600)(local_1f0,1);
  uVar11 = (*(code *)puVar2)(uVar11,1);
  puVar2 = PTR_mul_0079a608;
  uVar11 = (*(code *)PTR_mul_0079a608)(uVar11,&local_120);
  (*(code *)puVar2)(uVar11,&local_318);
  local_128 = lStack_2f8 + local_158;
  local_148 = local_1b8 + local_178;
  lStack_140 = local_1c8 + lStack_170;
  local_138 = lStack_1c0 + local_168;
  lStack_130 = local_1d8 + lStack_160;
  uVar11 = (*(code *)puVar2)(local_148,&local_148);
  (*(code *)puVar2)(uVar11,local_58);
  param_1[4] = local_b0;
  param_1[2] = local_c0;
  param_1[3] = lStack_b8;
  *param_1 = local_d0;
  param_1[1] = lStack_c8;
  param_1[9] = local_88;
  param_1[7] = local_98;
  param_1[8] = lStack_90;
  param_1[5] = local_a8;
  param_1[6] = lStack_a0;
  *param_2 = local_f8;
  param_2[1] = lStack_f0;
  param_2[2] = local_e8;
  param_2[3] = lStack_e0;
  param_2[4] = local_d8;
  param_2[5] = local_80;
  param_2[6] = lStack_78;
  param_2[7] = local_70;
  param_2[8] = lStack_68;
  param_2[9] = local_60;
  return;
}


