// 001c1330 mix_columns_1

/* aes[8e0128500682d16e]::soft::fixslice::mix_columns_1 */

void __rustcall aes[8e0128500682d16e]::soft::fixslice::mix_columns_1(ulonglong *param_1)

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
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar7 = *param_1;
  uVar11 = param_1[1];
  uVar6 = param_1[2];
  uVar14 = param_1[3];
  uVar8 = param_1[4];
  uVar9 = param_1[5];
  uVar16 = uVar7 << 0x3c | uVar7 >> 4 & 0xf000f000f000f000 |
           (uVar7 << 0x2c | uVar7 >> 0x14) & 0xfff0fff0fff0fff;
  uVar3 = uVar11 << 0x3c | uVar11 >> 4 & 0xf000f000f000f000 |
          (uVar11 << 0x2c | uVar11 >> 0x14) & 0xfff0fff0fff0fff;
  uVar12 = uVar6 << 0x3c | uVar6 >> 4 & 0xf000f000f000f000 |
           (uVar6 << 0x2c | uVar6 >> 0x14) & 0xfff0fff0fff0fff;
  uVar5 = uVar14 << 0x3c | uVar14 >> 4 & 0xf000f000f000f000 |
          (uVar14 << 0x2c | uVar14 >> 0x14) & 0xfff0fff0fff0fff;
  uVar13 = uVar8 << 0x3c | uVar8 >> 4 & 0xf000f000f000f000 |
           (uVar8 << 0x2c | uVar8 >> 0x14) & 0xfff0fff0fff0fff;
  uVar15 = uVar9 << 0x3c | uVar9 >> 4 & 0xf000f000f000f000 |
           (uVar9 << 0x2c | uVar9 >> 0x14) & 0xfff0fff0fff0fff;
  uVar10 = param_1[6];
  uVar1 = uVar10 << 0x3c | uVar10 >> 4 & 0xf000f000f000f000 |
          (uVar10 << 0x2c | uVar10 >> 0x14) & 0xfff0fff0fff0fff;
  uVar2 = param_1[7];
  uVar4 = uVar2 << 0x3c | uVar2 >> 4 & 0xf000f000f000f000 |
          (uVar2 << 0x2c | uVar2 >> 0x14) & 0xfff0fff0fff0fff;
  uVar7 = uVar7 ^ uVar16;
  uVar2 = uVar2 ^ uVar4;
  *param_1 = uVar16 ^ uVar2 ^
             ((uVar7 << 0x28 | uVar7 >> 0x18) & 0xff00ff00ff00ff00 |
             (uVar7 << 0x18 | uVar7 >> 0x28) & 0xff00ff00ff00ff);
  uVar11 = uVar11 ^ uVar3;
  param_1[1] = uVar7 ^ uVar3 ^ uVar2 ^
               ((uVar11 << 0x28 | uVar11 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar11 << 0x18 | uVar11 >> 0x28) & 0xff00ff00ff00ff);
  uVar6 = uVar6 ^ uVar12;
  uVar14 = uVar14 ^ uVar5;
  param_1[2] = uVar11 ^ uVar12 ^
               ((uVar6 << 0x28 | uVar6 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar6 << 0x18 | uVar6 >> 0x28) & 0xff00ff00ff00ff);
  uVar8 = uVar8 ^ uVar13;
  param_1[3] = uVar6 ^ uVar5 ^ uVar2 ^
               ((uVar14 << 0x28 | uVar14 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar14 << 0x18 | uVar14 >> 0x28) & 0xff00ff00ff00ff);
  uVar9 = uVar9 ^ uVar15;
  param_1[4] = uVar14 ^ uVar13 ^ uVar2 ^
               ((uVar8 << 0x28 | uVar8 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar8 << 0x18 | uVar8 >> 0x28) & 0xff00ff00ff00ff);
  uVar10 = uVar10 ^ uVar1;
  param_1[5] = uVar8 ^ uVar15 ^
               ((uVar9 << 0x28 | uVar9 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar9 << 0x18 | uVar9 >> 0x28) & 0xff00ff00ff00ff);
  param_1[6] = uVar9 ^ uVar1 ^
               ((uVar10 << 0x28 | uVar10 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar10 << 0x18 | uVar10 >> 0x28) & 0xff00ff00ff00ff);
  param_1[7] = uVar10 ^ uVar4 ^
               ((uVar2 << 0x28 | uVar2 >> 0x18) & 0xff00ff00ff00ff00 |
               (uVar2 << 0x18 | uVar2 >> 0x28) & 0xff00ff00ff00ff);
  return;
}


