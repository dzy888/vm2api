// 006d5e50 sub_bytes

/* aes[8e0128500682d16e]::soft::fixslice::sub_bytes */

void __rustcall aes[8e0128500682d16e]::soft::fixslice::sub_bytes(ulonglong *param_1)

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
  
  uVar15 = param_1[2];
  uVar12 = param_1[4];
  uVar8 = param_1[7];
  uVar3 = uVar12 ^ uVar15;
  uVar25 = uVar8 ^ param_1[1];
  uVar9 = uVar25 ^ uVar3;
  uVar13 = param_1[3] ^ uVar9 ^ uVar15;
  uVar17 = param_1[3] ^ uVar9 ^ param_1[6];
  uVar2 = uVar8 ^ uVar12;
  uVar4 = uVar17 ^ uVar2;
  uVar15 = uVar15 ^ uVar8;
  uVar21 = param_1[6] ^ param_1[5];
  uVar14 = uVar13 ^ uVar21;
  uVar19 = (uVar14 ^ uVar4) & uVar3 ^ uVar4 & uVar2;
  uVar5 = uVar14 & uVar15 ^ uVar4 & uVar2;
  uVar1 = *param_1;
  uVar10 = uVar4 ^ uVar21;
  uVar21 = uVar21 ^ uVar1;
  uVar26 = (uVar12 ^ uVar21) & uVar1 ^ uVar15 ^ uVar14 ^ uVar13 & uVar9 ^ uVar5;
  uVar5 = uVar8 ^ uVar10 & uVar25 ^ (uVar4 ^ uVar1) & (uVar21 ^ uVar8) ^ uVar10 ^ uVar5;
  uVar6 = param_1[1] ^ uVar21;
  uVar11 = uVar6 & uVar21 ^ uVar10 ^ uVar10 & uVar25 ^ uVar25 ^ uVar19;
  uVar19 = uVar17 ^ uVar13 & uVar9 ^ (uVar13 ^ uVar1) & (uVar6 ^ uVar15) ^ uVar19;
  uVar17 = uVar11 & uVar19;
  uVar7 = (uVar5 ^ uVar11) & (uVar17 ^ uVar26);
  uVar16 = uVar7 ^ uVar5;
  uVar7 = (uVar7 ^ uVar17) & uVar5;
  uVar19 = uVar19 ^ uVar26;
  uVar26 = (uVar5 ^ uVar17) & uVar19 ^ uVar26;
  uVar19 = (uVar5 ^ uVar17 ^ uVar7) & uVar26 ^ uVar19;
  uVar10 = uVar10 & (uVar19 ^ uVar26);
  uVar25 = (uVar19 ^ uVar26) & uVar25;
  uVar7 = uVar7 ^ uVar11;
  uVar5 = uVar7 ^ uVar16;
  uVar23 = uVar19 ^ uVar5;
  uVar22 = uVar21 & uVar19 ^ uVar10;
  uVar17 = uVar26 ^ uVar16;
  uVar11 = (uVar14 ^ uVar4) & (uVar23 ^ uVar17) ^ uVar22;
  uVar24 = (uVar23 ^ uVar17) & uVar3 ^ uVar17 & uVar2;
  uVar18 = (uVar6 ^ uVar15) & uVar5 ^ uVar24;
  uVar9 = uVar18 ^ uVar7 & uVar9;
  uVar3 = uVar16 & uVar1 ^ uVar13 & uVar7;
  uVar20 = uVar4 & uVar17 ^ uVar11;
  uVar11 = uVar14 & uVar23 ^ uVar3 ^ uVar25 ^ uVar11;
  uVar10 = uVar3 ^ (uVar4 ^ uVar1) & uVar26 ^ uVar10;
  uVar24 = uVar6 & uVar19 ^ uVar10 ^ uVar24;
  uVar8 = (uVar21 ^ uVar8) & uVar26 ^ uVar11;
  *param_1 = uVar24 ^ uVar25;
  param_1[1] = uVar11 ^ uVar24;
  param_1[2] = (uVar12 ^ uVar21) & uVar16 ^ uVar18 ^ uVar8;
  uVar12 = uVar5 & (uVar13 ^ uVar1) ^ uVar13 & uVar7 ^ uVar22 ^ uVar9;
  param_1[3] = uVar10 ^ uVar12;
  param_1[4] = uVar12;
  param_1[5] = uVar17 & uVar2 ^ uVar15 & uVar23 ^ uVar20 ^ uVar8;
  param_1[6] = uVar12 ^ uVar20;
  param_1[7] = uVar9 ^ uVar20;
  return;
}


