// 001c27a0 bitslice

/* aes[8e0128500682d16e]::soft::fixslice::bitslice */

void __rustcall
aes[8e0128500682d16e]::soft::fixslice::bitslice
          (ulonglong *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  ulonglong uVar1;
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
  ulonglong uVar12;
  
  uVar1 = (ulonglong)param_2[0xb] << 0x38 |
          (ulonglong)param_2[10] << 0x28 |
          (ulonglong)param_2[9] << 0x18 |
          (ulonglong)param_2[8] << 8 |
          (ulonglong)param_2[3] << 0x30 |
          (ulonglong)param_2[2] << 0x20 | (ulonglong)*param_2 | (ulonglong)param_2[1] << 0x10;
  uVar7 = (ulonglong)param_2[0xf] << 0x38 |
          (ulonglong)param_2[0xe] << 0x28 |
          (ulonglong)param_2[0xd] << 0x18 |
          (ulonglong)param_2[0xc] << 8 |
          (ulonglong)param_2[7] << 0x30 |
          (ulonglong)param_2[6] << 0x20 | (ulonglong)param_2[4] | (ulonglong)param_2[5] << 0x10;
  uVar9 = (ulonglong)param_3[0xb] << 0x38 |
          (ulonglong)param_3[10] << 0x28 |
          (ulonglong)param_3[9] << 0x18 |
          (ulonglong)param_3[8] << 8 |
          (ulonglong)param_3[3] << 0x30 |
          (ulonglong)param_3[2] << 0x20 | (ulonglong)*param_3 | (ulonglong)param_3[1] << 0x10;
  uVar3 = (ulonglong)param_3[0xf] << 0x38 |
          (ulonglong)param_3[0xe] << 0x28 |
          (ulonglong)param_3[0xd] << 0x18 |
          (ulonglong)param_3[0xc] << 8 |
          (ulonglong)param_3[7] << 0x30 |
          (ulonglong)param_3[6] << 0x20 | (ulonglong)param_3[4] | (ulonglong)param_3[5] << 0x10;
  uVar10 = (ulonglong)param_4[0xb] << 0x38 |
           (ulonglong)param_4[10] << 0x28 |
           (ulonglong)param_4[9] << 0x18 |
           (ulonglong)param_4[8] << 8 |
           (ulonglong)param_4[3] << 0x30 |
           (ulonglong)param_4[2] << 0x20 | (ulonglong)*param_4 | (ulonglong)param_4[1] << 0x10;
  uVar11 = (ulonglong)param_4[0xf] << 0x38 |
           (ulonglong)param_4[0xe] << 0x28 |
           (ulonglong)param_4[0xd] << 0x18 |
           (ulonglong)param_4[0xc] << 8 |
           (ulonglong)param_4[7] << 0x30 |
           (ulonglong)param_4[6] << 0x20 | (ulonglong)param_4[4] | (ulonglong)param_4[5] << 0x10;
  uVar2 = (ulonglong)param_5[0xb] << 0x38 |
          (ulonglong)param_5[10] << 0x28 |
          (ulonglong)param_5[9] << 0x18 |
          (ulonglong)param_5[8] << 8 |
          (ulonglong)param_5[3] << 0x30 |
          (ulonglong)param_5[2] << 0x20 | (ulonglong)*param_5 | (ulonglong)param_5[1] << 0x10;
  uVar8 = (ulonglong)param_5[0xf] << 0x38 |
          (ulonglong)param_5[0xe] << 0x28 |
          (ulonglong)param_5[0xd] << 0x18 |
          (ulonglong)param_5[0xc] << 8 |
          (ulonglong)param_5[7] << 0x30 |
          (ulonglong)param_5[6] << 0x20 | (ulonglong)param_5[4] | (ulonglong)param_5[5] << 0x10;
  uVar5 = (uVar1 >> 1 ^ uVar9) & 0x5555555555555555;
  uVar9 = uVar9 ^ uVar5;
  uVar1 = uVar5 * 2 ^ uVar1;
  uVar5 = (uVar10 >> 1 ^ uVar2) & 0x5555555555555555;
  uVar2 = uVar2 ^ uVar5;
  uVar10 = uVar5 * 2 ^ uVar10;
  uVar5 = (uVar7 >> 1 ^ uVar3) & 0x5555555555555555;
  uVar3 = uVar3 ^ uVar5;
  uVar7 = uVar5 * 2 ^ uVar7;
  uVar5 = (uVar11 >> 1 ^ uVar8) & 0x5555555555555555;
  uVar8 = uVar8 ^ uVar5;
  uVar11 = uVar5 * 2 ^ uVar11;
  uVar5 = (uVar1 >> 2 ^ uVar10) & 0x3333333333333333;
  uVar10 = uVar10 ^ uVar5;
  uVar1 = uVar5 << 2 ^ uVar1;
  uVar5 = (uVar9 >> 2 ^ uVar2) & 0x3333333333333333;
  uVar2 = uVar2 ^ uVar5;
  uVar9 = uVar5 << 2 ^ uVar9;
  uVar5 = (uVar7 >> 2 ^ uVar11) & 0x3333333333333333;
  uVar11 = uVar11 ^ uVar5;
  uVar7 = uVar5 << 2 ^ uVar7;
  uVar5 = (uVar3 >> 2 ^ uVar8) & 0x3333333333333333;
  uVar8 = uVar8 ^ uVar5;
  uVar3 = uVar5 << 2 ^ uVar3;
  uVar4 = (uVar1 >> 4 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
  uVar12 = (uVar9 >> 4 ^ uVar3) & 0xf0f0f0f0f0f0f0f;
  uVar6 = (uVar10 >> 4 ^ uVar11) & 0xf0f0f0f0f0f0f0f;
  uVar5 = (uVar2 >> 4 ^ uVar8) & 0xf0f0f0f0f0f0f0f;
  *param_1 = uVar4 << 4 ^ uVar1;
  param_1[1] = uVar12 << 4 ^ uVar9;
  param_1[2] = uVar6 << 4 ^ uVar10;
  param_1[3] = uVar5 << 4 ^ uVar2;
  param_1[4] = uVar7 ^ uVar4;
  param_1[5] = uVar3 ^ uVar12;
  param_1[6] = uVar11 ^ uVar6;
  param_1[7] = uVar5 ^ uVar8;
  return;
}


