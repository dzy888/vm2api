// 001ba4c0 sub

/* <&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint as
   core[c0acaeba6ab4c2e0]::ops::arith::Sub<&curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectiveNielsPoint>>::sub
    */

longlong * __rustcall
<&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint_as_core[c0acaeba6ab4c2e0]::ops::arith::Sub<&curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::ProjectiveNielsPoint>>
::sub(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  puVar1 = PTR_mul_0021a550;
  (*(code *)PTR_mul_0021a550)
            (((*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x10)) + 0x7ffffffffffff0U &
             0x7ffffffffffff) +
             ((*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 8)) + 0x7ffffffffffff0U >>
             0x33),param_3 + 0x28);
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  (*(code *)puVar1)();
  uVar10 = (local_d0 + 0x7ffffffffffed0) - local_a8;
  uVar3 = (local_c8 + 0x7ffffffffffff0) - local_a0;
  uVar5 = (local_c0 + 0x7ffffffffffff0) - local_98;
  uVar8 = (local_b8 + 0x7ffffffffffff0) - local_90;
  uVar7 = (local_b0 + 0x7ffffffffffff0) - local_88;
  param_1[5] = local_a8 + local_d0;
  param_1[6] = local_a0 + local_c8;
  param_1[7] = local_98 + local_c0;
  param_1[8] = local_90 + local_b8;
  param_1[9] = local_88 + local_b0;
  uVar11 = (local_58 * 2 + 0x7ffffffffffed0) - local_80;
  uVar6 = (local_50 * 2 + 0x7ffffffffffff0) - local_78;
  uVar9 = (local_48 * 2 + 0x7ffffffffffff0) - local_70;
  uVar4 = (local_40 * 2 + 0x7ffffffffffff0) - local_68;
  uVar2 = (local_38 * 2 + 0x7ffffffffffff0) - local_60;
  param_1[0xf] = local_80 + local_58 * 2;
  param_1[0x10] = local_78 + local_50 * 2;
  param_1[0x11] = local_70 + local_48 * 2;
  param_1[0x12] = local_68 + local_40 * 2;
  param_1[0x13] = local_60 + local_38 * 2;
  *param_1 = (uVar7 >> 0x33) * 0x13 + (uVar10 & 0x7ffffffffffff);
  param_1[1] = (uVar3 & 0x7ffffffffffff) + (uVar10 >> 0x33);
  param_1[2] = (uVar5 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  param_1[3] = (uVar8 & 0x7ffffffffffff) + (uVar5 >> 0x33);
  param_1[4] = (uVar7 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  param_1[10] = (uVar2 >> 0x33) * 0x13 + (uVar11 & 0x7ffffffffffff);
  param_1[0xb] = (uVar6 & 0x7ffffffffffff) + (uVar11 >> 0x33);
  param_1[0xc] = (uVar9 & 0x7ffffffffffff) + (uVar6 >> 0x33);
  param_1[0xd] = (uVar4 & 0x7ffffffffffff) + (uVar9 >> 0x33);
  param_1[0xe] = (uVar2 & 0x7ffffffffffff) + (uVar4 >> 0x33);
  return param_1;
}


