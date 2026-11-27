// 006d4260 inv_bitslice

/* aes[8e0128500682d16e]::soft::fixslice::inv_bitslice */

void __rustcall
aes[8e0128500682d16e]::soft::fixslice::inv_bitslice(undefined1 *param_1,ulonglong *param_2)

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
  
  uVar1 = (*param_2 >> 1 ^ param_2[1]) & 0x5555555555555555;
  uVar8 = param_2[1] ^ uVar1;
  uVar2 = uVar1 * 2 ^ *param_2;
  uVar1 = (param_2[2] >> 1 ^ param_2[3]) & 0x5555555555555555;
  uVar9 = param_2[3] ^ uVar1;
  uVar5 = uVar1 * 2 ^ param_2[2];
  uVar1 = (param_2[4] >> 1 ^ param_2[5]) & 0x5555555555555555;
  uVar6 = param_2[5] ^ uVar1;
  uVar7 = uVar1 * 2 ^ param_2[4];
  uVar3 = (param_2[6] >> 1 ^ param_2[7]) & 0x5555555555555555;
  uVar1 = param_2[7] ^ uVar3;
  uVar4 = uVar3 * 2 ^ param_2[6];
  uVar3 = (uVar2 >> 2 ^ uVar5) & 0x3333333333333333;
  uVar5 = uVar5 ^ uVar3;
  uVar2 = uVar3 << 2 ^ uVar2;
  uVar3 = (uVar7 >> 2 ^ uVar4) & 0x3333333333333333;
  uVar4 = uVar4 ^ uVar3;
  uVar7 = uVar3 << 2 ^ uVar7;
  uVar3 = (uVar2 >> 4 ^ uVar7) & 0xf0f0f0f0f0f0f0f;
  uVar7 = uVar7 ^ uVar3;
  uVar2 = uVar3 << 4 ^ uVar2;
  *param_1 = (char)uVar2;
  param_1[1] = (char)(uVar2 >> 0x10);
  param_1[2] = (char)(uVar2 >> 0x20);
  param_1[3] = (char)(uVar2 >> 0x30);
  param_1[4] = (char)uVar7;
  param_1[5] = (char)(uVar7 >> 0x10);
  param_1[6] = (char)(uVar7 >> 0x20);
  param_1[7] = (char)(uVar7 >> 0x30);
  param_1[8] = (char)(uVar2 >> 8);
  uVar3 = (uVar8 >> 2 ^ uVar9) & 0x3333333333333333;
  uVar9 = uVar9 ^ uVar3;
  uVar8 = uVar3 << 2 ^ uVar8;
  param_1[9] = (char)(uVar2 >> 0x18);
  param_1[10] = (char)(uVar2 >> 0x28);
  param_1[0xb] = (char)(uVar2 >> 0x38);
  param_1[0xc] = (char)(uVar7 >> 8);
  uVar3 = (uVar6 >> 2 ^ uVar1) & 0x3333333333333333;
  uVar1 = uVar1 ^ uVar3;
  uVar6 = uVar3 << 2 ^ uVar6;
  uVar3 = (uVar8 >> 4 ^ uVar6) & 0xf0f0f0f0f0f0f0f;
  uVar6 = uVar6 ^ uVar3;
  uVar8 = uVar3 << 4 ^ uVar8;
  param_1[0xd] = (char)(uVar7 >> 0x18);
  param_1[0xe] = (char)(uVar7 >> 0x28);
  param_1[0xf] = (char)(uVar7 >> 0x38);
  param_1[0x10] = (char)uVar8;
  param_1[0x11] = (char)(uVar8 >> 0x10);
  param_1[0x12] = (char)(uVar8 >> 0x20);
  param_1[0x13] = (char)(uVar8 >> 0x30);
  param_1[0x14] = (char)uVar6;
  param_1[0x15] = (char)(uVar6 >> 0x10);
  param_1[0x16] = (char)(uVar6 >> 0x20);
  param_1[0x17] = (char)(uVar6 >> 0x30);
  param_1[0x18] = (char)(uVar8 >> 8);
  param_1[0x19] = (char)(uVar8 >> 0x18);
  param_1[0x1a] = (char)(uVar8 >> 0x28);
  param_1[0x1b] = (char)(uVar8 >> 0x38);
  param_1[0x1c] = (char)(uVar6 >> 8);
  uVar3 = (uVar5 >> 4 ^ uVar4) & 0xf0f0f0f0f0f0f0f;
  uVar4 = uVar4 ^ uVar3;
  uVar5 = uVar3 << 4 ^ uVar5;
  param_1[0x1d] = (char)(uVar6 >> 0x18);
  param_1[0x1e] = (char)(uVar6 >> 0x28);
  param_1[0x1f] = (char)(uVar6 >> 0x38);
  param_1[0x20] = (char)uVar5;
  param_1[0x21] = (char)(uVar5 >> 0x10);
  param_1[0x22] = (char)(uVar5 >> 0x20);
  param_1[0x23] = (char)(uVar5 >> 0x30);
  param_1[0x24] = (char)uVar4;
  param_1[0x25] = (char)(uVar4 >> 0x10);
  param_1[0x26] = (char)(uVar4 >> 0x20);
  param_1[0x27] = (char)(uVar4 >> 0x30);
  param_1[0x28] = (char)(uVar5 >> 8);
  param_1[0x29] = (char)(uVar5 >> 0x18);
  param_1[0x2a] = (char)(uVar5 >> 0x28);
  param_1[0x2b] = (char)(uVar5 >> 0x38);
  param_1[0x2c] = (char)(uVar4 >> 8);
  uVar3 = (uVar9 >> 4 ^ uVar1) & 0xf0f0f0f0f0f0f0f;
  uVar1 = uVar1 ^ uVar3;
  uVar9 = uVar3 << 4 ^ uVar9;
  param_1[0x2d] = (char)(uVar4 >> 0x18);
  param_1[0x2e] = (char)(uVar4 >> 0x28);
  param_1[0x2f] = (char)(uVar4 >> 0x38);
  param_1[0x30] = (char)uVar9;
  param_1[0x31] = (char)(uVar9 >> 0x10);
  param_1[0x32] = (char)(uVar9 >> 0x20);
  param_1[0x33] = (char)(uVar9 >> 0x30);
  param_1[0x34] = (char)uVar1;
  param_1[0x35] = (char)(uVar1 >> 0x10);
  param_1[0x36] = (char)(uVar1 >> 0x20);
  param_1[0x37] = (char)(uVar1 >> 0x30);
  param_1[0x38] = (char)(uVar9 >> 8);
  param_1[0x39] = (char)(uVar9 >> 0x18);
  param_1[0x3a] = (char)(uVar9 >> 0x28);
  param_1[0x3b] = (char)(uVar9 >> 0x38);
  param_1[0x3c] = (char)(uVar1 >> 8);
  param_1[0x3d] = (char)(uVar1 >> 0x18);
  param_1[0x3e] = (char)(uVar1 >> 0x28);
  param_1[0x3f] = (char)(uVar1 >> 0x38);
  return;
}


