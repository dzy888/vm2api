// 0019c680 inv_expanded_keys

/* aes[8e0128500682d16e]::ni::aes256::inv_expanded_keys */

void __rustcall
aes[8e0128500682d16e]::ni::aes256::inv_expanded_keys(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  auVar4 = aesimc(*(undefined1 (*) [16])(param_2 + 2));
  auVar5 = aesimc(*(undefined1 (*) [16])(param_2 + 4));
  auVar6 = aesimc(*(undefined1 (*) [16])(param_2 + 6));
  auVar7 = aesimc(*(undefined1 (*) [16])(param_2 + 8));
  auVar8 = aesimc(*(undefined1 (*) [16])(param_2 + 10));
  auVar9 = aesimc(*(undefined1 (*) [16])(param_2 + 0xc));
  auVar10 = aesimc(*(undefined1 (*) [16])(param_2 + 0xe));
  auVar11 = aesimc(*(undefined1 (*) [16])(param_2 + 0x10));
  auVar12 = aesimc(*(undefined1 (*) [16])(param_2 + 0x12));
  auVar13 = aesimc(*(undefined1 (*) [16])(param_2 + 0x14));
  auVar14 = aesimc(*(undefined1 (*) [16])(param_2 + 0x16));
  auVar15 = aesimc(*(undefined1 (*) [16])(param_2 + 0x18));
  auVar16 = aesimc(*(undefined1 (*) [16])(param_2 + 0x1a));
  uVar1 = param_2[1];
  uVar2 = param_2[0x1c];
  uVar3 = param_2[0x1d];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 (*) [16])(param_1 + 2) = auVar4;
  *(undefined1 (*) [16])(param_1 + 4) = auVar5;
  *(undefined1 (*) [16])(param_1 + 6) = auVar6;
  *(undefined1 (*) [16])(param_1 + 8) = auVar7;
  *(undefined1 (*) [16])(param_1 + 10) = auVar8;
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0xe) = auVar10;
  *(undefined1 (*) [16])(param_1 + 0x10) = auVar11;
  *(undefined1 (*) [16])(param_1 + 0x12) = auVar12;
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar13;
  *(undefined1 (*) [16])(param_1 + 0x16) = auVar14;
  *(undefined1 (*) [16])(param_1 + 0x18) = auVar15;
  *(undefined1 (*) [16])(param_1 + 0x1a) = auVar16;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = uVar3;
  return;
}


