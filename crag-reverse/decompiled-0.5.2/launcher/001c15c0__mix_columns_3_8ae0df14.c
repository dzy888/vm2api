// 001c15c0 mix_columns_3

/* aes[8e0128500682d16e]::soft::fixslice::mix_columns_3 */

void __rustcall aes[8e0128500682d16e]::soft::fixslice::mix_columns_3(ulonglong *param_1)

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
  uVar16 = uVar7 << 0x34 | uVar7 >> 0xc & 0xfff0fff0fff0fff0 |
           (uVar7 << 0x24 | uVar7 >> 0x1c) & 0xf000f000f000f;
  uVar3 = uVar11 << 0x34 | uVar11 >> 0xc & 0xfff0fff0fff0fff0 |
          (uVar11 << 0x24 | uVar11 >> 0x1c) & 0xf000f000f000f;
  uVar12 = uVar6 << 0x34 | uVar6 >> 0xc & 0xfff0fff0fff0fff0 |
           (uVar6 << 0x24 | uVar6 >> 0x1c) & 0xf000f000f000f;
  uVar5 = uVar14 << 0x34 | uVar14 >> 0xc & 0xfff0fff0fff0fff0 |
          (uVar14 << 0x24 | uVar14 >> 0x1c) & 0xf000f000f000f;
  uVar13 = uVar8 << 0x34 | uVar8 >> 0xc & 0xfff0fff0fff0fff0 |
           (uVar8 << 0x24 | uVar8 >> 0x1c) & 0xf000f000f000f;
  uVar15 = uVar9 << 0x34 | uVar9 >> 0xc & 0xfff0fff0fff0fff0 |
           (uVar9 << 0x24 | uVar9 >> 0x1c) & 0xf000f000f000f;
  uVar10 = param_1[6];
  uVar1 = uVar10 << 0x34 | uVar10 >> 0xc & 0xfff0fff0fff0fff0 |
          (uVar10 << 0x24 | uVar10 >> 0x1c) & 0xf000f000f000f;
  uVar2 = param_1[7];
  uVar4 = uVar2 << 0x34 | uVar2 >> 0xc & 0xfff0fff0fff0fff0 |
          (uVar2 << 0x24 | uVar2 >> 0x1c) & 0xf000f000f000f;
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


