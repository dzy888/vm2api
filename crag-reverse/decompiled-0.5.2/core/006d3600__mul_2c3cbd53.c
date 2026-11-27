// 006d3600 mul

/* <polyval[1df58e1208c50bb2]::backend::soft::U64x2 as core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul
    */

undefined1  [16] __rustcall
<polyval[1df58e1208c50bb2]::backend::soft::U64x2_as_core[c0acaeba6ab4c2e0]::ops::arith::Mul>::mul
          (ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

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
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  
  uVar2 = param_1 >> 0x38 | (param_1 & 0xff000000000000) >> 0x28 |
          (param_1 & 0xff0000000000) >> 0x18 | (param_1 & 0xff00000000) >> 8 |
          (param_1 & 0xff000000) << 8 | (param_1 & 0xff0000) << 0x18 | (param_1 & 0xff00) << 0x28 |
          param_1 << 0x38;
  uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f) << 4 | uVar2 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333) * 4;
  uVar9 = param_2 >> 0x38 | (param_2 & 0xff000000000000) >> 0x28 |
          (param_2 & 0xff0000000000) >> 0x18 | (param_2 & 0xff00000000) >> 8 |
          (param_2 & 0xff000000) << 8 | (param_2 & 0xff0000) << 0x18 | (param_2 & 0xff00) << 0x28 |
          param_2 << 0x38;
  uVar2 = (uVar2 >> 1 & 0x5555555555555555) + (uVar2 & 0x5555555555555555) * 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  uVar9 = (uVar9 >> 1 & 0x5555555555555555) + (uVar9 & 0x5555555555555555) * 2;
  uVar3 = param_3 >> 0x38 | (param_3 & 0xff000000000000) >> 0x28 |
          (param_3 & 0xff0000000000) >> 0x18 | (param_3 & 0xff00000000) >> 8 |
          (param_3 & 0xff000000) << 8 | (param_3 & 0xff0000) << 0x18 | (param_3 & 0xff00) << 0x28 |
          param_3 << 0x38;
  uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f) << 4 | uVar3 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333) * 4;
  uVar3 = (uVar3 >> 1 & 0x5555555555555555) + (uVar3 & 0x5555555555555555) * 2;
  uVar4 = param_4 >> 0x38 | (param_4 & 0xff000000000000) >> 0x28 |
          (param_4 & 0xff0000000000) >> 0x18 | (param_4 & 0xff00000000) >> 8 |
          (param_4 & 0xff000000) << 8 | (param_4 & 0xff0000) << 0x18 | (param_4 & 0xff00) << 0x28 |
          param_4 << 0x38;
  uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f) << 4 | uVar4 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333) * 4;
  uVar4 = (uVar4 >> 1 & 0x5555555555555555) + (uVar4 & 0x5555555555555555) * 2;
  uVar27 = param_4 ^ param_3;
  uVar7 = param_3 & 0x4444444444444444;
  uVar1 = param_3 & 0x8888888888888888;
  uVar20 = param_1 & 0x2222222222222222;
  uVar14 = param_1 & 0x4444444444444444;
  uVar12 = param_2 ^ param_1;
  uVar17 = param_3 & 0x1111111111111111;
  param_3 = param_3 & 0x2222222222222222;
  uVar10 = param_1 & 0x1111111111111111;
  param_1 = param_1 & 0x8888888888888888;
  uVar5 = (uVar1 * uVar14 ^ uVar7 * param_1 ^ param_3 * uVar10 ^ uVar17 * uVar20) &
          0x2222222222222222 |
          (param_3 * param_1 ^ uVar17 * uVar10 ^ uVar1 * uVar20 ^ uVar7 * uVar14) &
          0x1111111111111111;
  uVar8 = param_4 & 0x1111111111111111;
  uVar24 = param_4 & 0x2222222222222222;
  uVar6 = param_2 & 0x1111111111111111;
  uVar18 = param_2 & 0x8888888888888888;
  uVar19 = param_4 & 0x4444444444444444;
  param_4 = param_4 & 0x8888888888888888;
  uVar21 = param_2 & 0x2222222222222222;
  param_2 = param_2 & 0x4444444444444444;
  uVar8 = (uVar6 * param_4 ^ uVar21 * uVar19 ^ param_2 * uVar24 ^ uVar8 * uVar18) &
          0x8888888888888888 |
          (param_4 * uVar18 ^ uVar19 * uVar6 ^ uVar24 * uVar21 ^ uVar8 * param_2) &
          0x4444444444444444 |
          (param_4 * param_2 ^ uVar19 * uVar18 ^ uVar24 * uVar6 ^ uVar8 * uVar21) &
          0x2222222222222222 |
          (param_4 * uVar21 ^ uVar19 * param_2 ^ uVar24 * uVar18 ^ uVar8 * uVar6) &
          0x1111111111111111;
  uVar22 = uVar27 & 0x1111111111111111;
  uVar15 = uVar27 & 0x2222222222222222;
  uVar18 = uVar12 & 0x1111111111111111;
  uVar13 = uVar12 & 0x8888888888888888;
  uVar28 = uVar27 & 0x4444444444444444;
  uVar27 = uVar27 & 0x8888888888888888;
  uVar19 = uVar12 & 0x2222222222222222;
  uVar12 = uVar12 & 0x4444444444444444;
  uVar24 = uVar9 ^ uVar2;
  uVar25 = uVar3 & 0x1111111111111111;
  uVar23 = uVar3 & 0x2222222222222222;
  uVar21 = uVar2 & 0x1111111111111111;
  uVar6 = uVar2 & 0x8888888888888888;
  uVar11 = uVar4 ^ uVar3;
  uVar26 = uVar3 & 0x4444444444444444;
  uVar3 = uVar3 & 0x8888888888888888;
  uVar16 = uVar2 & 0x2222222222222222;
  uVar2 = uVar2 & 0x4444444444444444;
  uVar2 = (uVar21 * uVar3 ^ uVar16 * uVar26 ^ uVar2 * uVar23 ^ uVar6 * uVar25) & 0x8888888888888888
          | (uVar3 * uVar6 ^ uVar26 * uVar21 ^ uVar23 * uVar16 ^ uVar25 * uVar2) &
            0x4444444444444444 |
            (uVar3 * uVar2 ^ uVar26 * uVar6 ^ uVar23 * uVar21 ^ uVar25 * uVar16) &
            0x2222222222222222 |
            (uVar3 * uVar16 ^ uVar26 * uVar2 ^ uVar23 * uVar6 ^ uVar25 * uVar21) &
            0x1111111111111111;
  uVar25 = uVar4 & 0x1111111111111111;
  uVar16 = uVar4 & 0x2222222222222222;
  uVar3 = uVar9 & 0x1111111111111111;
  uVar6 = uVar9 & 0x8888888888888888;
  uVar23 = uVar4 & 0x4444444444444444;
  uVar4 = uVar4 & 0x8888888888888888;
  uVar21 = uVar9 & 0x2222222222222222;
  uVar9 = uVar9 & 0x4444444444444444;
  uVar4 = (uVar3 * uVar4 ^ uVar21 * uVar23 ^ uVar9 * uVar16 ^ uVar6 * uVar25) & 0x8888888888888888 |
          (uVar4 * uVar6 ^ uVar23 * uVar3 ^ uVar16 * uVar21 ^ uVar25 * uVar9) & 0x4444444444444444 |
          (uVar4 * uVar9 ^ uVar23 * uVar6 ^ uVar16 * uVar3 ^ uVar25 * uVar21) & 0x2222222222222222 |
          (uVar4 * uVar21 ^ uVar23 * uVar9 ^ uVar16 * uVar6 ^ uVar25 * uVar3) & 0x1111111111111111;
  uVar25 = uVar11 & 0x1111111111111111;
  uVar23 = uVar11 & 0x2222222222222222;
  uVar6 = uVar24 & 0x1111111111111111;
  uVar3 = uVar24 & 0x8888888888888888;
  uVar21 = uVar11 & 0x4444444444444444;
  uVar11 = uVar11 & 0x8888888888888888;
  uVar16 = uVar24 & 0x2222222222222222;
  uVar24 = uVar24 & 0x4444444444444444;
  uVar9 = uVar2 >> 0x38 | (uVar2 & 0xff000000000000) >> 0x28 | (uVar2 & 0xff0000000000) >> 0x18 |
          (uVar2 & 0xff00000000) >> 8 | (uVar2 & 0xff000000) << 8 | (uVar2 & 0xff0000) << 0x18 |
          (uVar2 & 0xff00) << 0x28 | uVar2 << 0x38;
  uVar3 = uVar2 ^ uVar4 ^
          ((uVar6 * uVar11 ^ uVar16 * uVar21 ^ uVar24 * uVar23 ^ uVar3 * uVar25) &
           0x8888888888888888 |
          (uVar11 * uVar3 ^ uVar21 * uVar6 ^ uVar23 * uVar16 ^ uVar25 * uVar24) & 0x4444444444444444
          | (uVar11 * uVar24 ^ uVar21 * uVar3 ^ uVar23 * uVar6 ^ uVar25 * uVar16) &
            0x2222222222222222 |
            (uVar11 * uVar16 ^ uVar21 * uVar24 ^ uVar23 * uVar3 ^ uVar25 * uVar6) &
            0x1111111111111111);
  uVar2 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar2 = (uVar2 >> 2 & 0x3333333333333333) + (uVar2 & 0x3333333333333333) * 4;
  uVar9 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 | (uVar4 & 0xff0000000000) >> 0x18 |
          (uVar4 & 0xff00000000) >> 8 | (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 |
          (uVar4 & 0xff00) << 0x28 | uVar4 << 0x38;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f) << 4 | uVar9 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333) * 4;
  uVar3 = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 | (uVar3 & 0xff0000000000) >> 0x18 |
          (uVar3 & 0xff00000000) >> 8 | (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
          (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38;
  uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f) << 4 | uVar3 >> 4 & 0xf0f0f0f0f0f0f0f;
  uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333) * 4;
  uVar4 = (uVar10 * uVar1 ^ uVar20 * uVar7 ^ uVar14 * param_3 ^ uVar17 * param_1) &
          0x8888888888888888 |
          (uVar1 * param_1 ^ uVar7 * uVar10 ^ param_3 * uVar20 ^ uVar17 * uVar14) &
          0x4444444444444444 | uVar5;
  uVar2 = uVar4 << 0x39 ^ uVar5 << 0x3e ^ uVar17 * uVar10 << 0x3f ^
          ((uVar18 * uVar27 ^ uVar19 * uVar28 ^ uVar12 * uVar15 ^ uVar13 * uVar22) &
           0x8888888888888888 |
          (uVar27 * uVar13 ^ uVar28 * uVar18 ^ uVar15 * uVar19 ^ uVar22 * uVar12) &
          0x4444444444444444 |
          (uVar27 * uVar12 ^ uVar28 * uVar13 ^ uVar15 * uVar18 ^ uVar22 * uVar19) &
          0x2222222222222222 |
          (uVar27 * uVar19 ^ uVar28 * uVar12 ^ uVar15 * uVar13 ^ uVar22 * uVar18) &
          0x1111111111111111) ^ uVar4 ^ uVar8 ^
          (uVar2 >> 1 & 0x5555555555555554) + (uVar2 & 0x5555555555555555) * 2 >> 1;
  auVar29._8_8_ =
       ((uVar9 >> 1 & 0x5555555555555554) + (uVar9 & 0x5555555555555555) * 2 ^ uVar2) >> 1 ^
       uVar2 >> 7 ^ uVar2 >> 2 ^ uVar2;
  auVar29._0_8_ =
       uVar2 << 0x39 ^ uVar4 ^ uVar8 ^
       uVar2 << 0x3e ^ uVar2 << 0x3f ^
       uVar4 >> 7 ^ uVar4 >> 2 ^ uVar4 >> 1 ^
       (uVar3 >> 1 & 0x5555555555555554) + (uVar3 & 0x5555555555555555) * 2 >> 1;
  return auVar29;
}


