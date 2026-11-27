// 001b41c0 double

/* <curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectivePoint>::double */

longlong * __rustcall
<curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectivePoint>::double
          (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  
  puVar1 = PTR_pow2k_0021a548;
  uVar17 = (*(code *)PTR_pow2k_0021a548)(param_4,1);
  uVar17 = (*(code *)puVar1)(uVar17,1);
  (*(code *)puVar1)(uVar17,1);
  (*(code *)puVar1)(*(undefined8 *)(param_2 + 0x10),1);
  uVar2 = (local_d0 + 0x7ffffffffffed0) - local_f8;
  uVar6 = (local_c8 + 0x7ffffffffffff0) - local_f0;
  uVar8 = (local_c0 + 0x7ffffffffffff0) - local_e8;
  uVar4 = (local_b8 + 0x7ffffffffffff0) - local_e0;
  uVar14 = (local_b0 + 0x7ffffffffffff0) - local_d8;
  lVar7 = (uVar6 & 0x7ffffffffffff) + (uVar2 >> 0x33);
  lVar9 = (uVar8 & 0x7ffffffffffff) + (uVar6 >> 0x33);
  lVar5 = (uVar4 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  lVar15 = (uVar14 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  lVar3 = (uVar14 >> 0x33) * 0x13 + (uVar2 & 0x7ffffffffffff);
  uVar8 = (local_80 - (local_f8 + local_d0)) + 0x7ffffffffffed0;
  uVar16 = (local_78 - (local_f0 + local_c8)) + 0x7ffffffffffff0;
  uVar6 = (local_70 - (local_e8 + local_c0)) + 0x7ffffffffffff0;
  uVar4 = (local_68 - (local_e0 + local_b8)) + 0x7ffffffffffff0;
  uVar2 = (local_60 - (local_d8 + local_b0)) + 0x7ffffffffffff0;
  uVar10 = (local_a0 * 2 - lVar7) + 0x7ffffffffffff0;
  uVar13 = (local_98 * 2 - lVar9) + 0x7ffffffffffff0;
  uVar12 = (local_90 * 2 - lVar5) + 0x7ffffffffffff0;
  uVar11 = (local_88 * 2 - lVar15) + 0x7ffffffffffff0;
  uVar14 = (local_a8 * 2 + 0x7ffffffffffed0) - lVar3;
  *param_1 = (uVar2 >> 0x33) * 0x13 + (uVar8 & 0x7ffffffffffff);
  param_1[1] = (uVar16 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  param_1[2] = (uVar6 & 0x7ffffffffffff) + (uVar16 >> 0x33);
  param_1[3] = (uVar4 & 0x7ffffffffffff) + (uVar6 >> 0x33);
  param_1[4] = (uVar2 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  param_1[5] = local_f8 + local_d0;
  param_1[6] = local_f0 + local_c8;
  param_1[7] = local_e8 + local_c0;
  param_1[8] = local_e0 + local_b8;
  param_1[9] = local_d8 + local_b0;
  param_1[10] = lVar3;
  param_1[0xb] = lVar7;
  param_1[0xc] = lVar9;
  param_1[0xd] = lVar5;
  param_1[0xe] = lVar15;
  param_1[0xf] = (uVar11 >> 0x33) * 0x13 + (uVar14 & 0x7ffffffffffff);
  param_1[0x10] = (uVar10 & 0x7ffffffffffff) + (uVar14 >> 0x33);
  param_1[0x11] = (uVar13 & 0x7ffffffffffff) + (uVar10 >> 0x33);
  param_1[0x12] = (uVar12 & 0x7ffffffffffff) + (uVar13 >> 0x33);
  param_1[0x13] = (uVar11 & 0x7ffffffffffff) + (uVar12 >> 0x33);
  return param_1;
}


