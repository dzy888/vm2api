// 001ba900 add

/* <&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint as
   core[c0acaeba6ab4c2e0]::ops::arith::Add<&curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>::add
    */

longlong * __rustcall
<&curve25519_dalek[8828c522c30c513]::edwards::EdwardsPoint_as_core[c0acaeba6ab4c2e0]::ops::arith::Add<&curve25519_dalek[8828c522c30c513]::backend::serial::curve_models::AffineNielsPoint>>
::add(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
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
  
  puVar6 = PTR_mul_0021a550;
  (*(code *)PTR_mul_0021a550)
            (((*(longlong *)(param_2 + 0x38) - *(longlong *)(param_2 + 0x10)) + 0x7ffffffffffff0U &
             0x7ffffffffffff) +
             ((*(longlong *)(param_2 + 0x30) - *(longlong *)(param_2 + 8)) + 0x7ffffffffffff0U >>
             0x33),param_3);
  (*(code *)puVar6)();
  (*(code *)puVar6)();
  uVar8 = (local_a8 + 0x7ffffffffffed0) - local_80;
  uVar7 = (local_a0 + 0x7ffffffffffff0) - local_78;
  uVar9 = (local_98 + 0x7ffffffffffff0) - local_70;
  uVar16 = (local_90 + 0x7ffffffffffff0) - local_68;
  uVar14 = (local_88 + 0x7ffffffffffff0) - local_60;
  lVar1 = *(longlong *)(param_2 + 0x50);
  param_1[5] = local_80 + local_a8;
  lVar2 = *(longlong *)(param_2 + 0x58);
  param_1[6] = local_78 + local_a0;
  lVar3 = *(longlong *)(param_2 + 0x60);
  param_1[7] = local_70 + local_98;
  param_1[8] = local_68 + local_90;
  param_1[9] = local_60 + local_88;
  param_1[10] = local_58 + lVar1 * 2;
  param_1[0xb] = local_50 + lVar2 * 2;
  param_1[0xc] = local_48 + lVar3 * 2;
  lVar4 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = local_40 + lVar4 * 2;
  lVar5 = *(longlong *)(param_2 + 0x70);
  param_1[0xe] = local_38 + lVar5 * 2;
  uVar12 = (lVar1 * 2 + 0x7ffffffffffed0) - local_58;
  uVar10 = (lVar2 * 2 + 0x7ffffffffffff0) - local_50;
  uVar11 = (lVar3 * 2 + 0x7ffffffffffff0) - local_48;
  uVar13 = (lVar4 * 2 + 0x7ffffffffffff0) - local_40;
  uVar15 = (lVar5 * 2 + 0x7ffffffffffff0) - local_38;
  *param_1 = (uVar14 >> 0x33) * 0x13 + (uVar8 & 0x7ffffffffffff);
  param_1[1] = (uVar7 & 0x7ffffffffffff) + (uVar8 >> 0x33);
  param_1[2] = (uVar9 & 0x7ffffffffffff) + (uVar7 >> 0x33);
  param_1[3] = (uVar16 & 0x7ffffffffffff) + (uVar9 >> 0x33);
  param_1[4] = (uVar14 & 0x7ffffffffffff) + (uVar16 >> 0x33);
  param_1[0xf] = (uVar15 >> 0x33) * 0x13 + (uVar12 & 0x7ffffffffffff);
  param_1[0x10] = (uVar10 & 0x7ffffffffffff) + (uVar12 >> 0x33);
  param_1[0x11] = (uVar11 & 0x7ffffffffffff) + (uVar10 >> 0x33);
  param_1[0x12] = (uVar13 & 0x7ffffffffffff) + (uVar11 >> 0x33);
  param_1[0x13] = (uVar15 & 0x7ffffffffffff) + (uVar13 >> 0x33);
  return param_1;
}


