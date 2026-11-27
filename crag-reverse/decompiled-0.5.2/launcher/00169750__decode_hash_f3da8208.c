// 00169750 decode_hash

/* craggemini[b21da2d71f2da7a3]::license::decode_hash */

undefined2 * __rustcall
craggemini[b21da2d71f2da7a3]::license::decode_hash
          (undefined2 *param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  code *pcVar2;
  longlong lVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char cVar9;
  undefined1 local_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined7 uStack_17;
  undefined1 local_10;
  undefined7 uStack_f;
  undefined8 uStack_8;
  
  if (param_3 == 0x40) {
    lVar3 = 0;
    do {
      if (lVar3 == 0x40) {
        uStack_f = 0;
        uStack_8 = 0;
        uStack_1f = 0;
        uStack_18 = 0;
        uStack_17 = 0;
        local_10 = 0;
        if (param_2[2] < -0x40) goto LAB_00169922;
        uVar7 = (ulonglong)(*param_2 == '+');
        bVar1 = param_2[uVar7];
        uVar6 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        if (0xf < uVar6) goto LAB_001697f0;
        if (*param_2 != '+') {
          bVar1 = param_2[uVar7 + 1];
          uVar5 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (0xf < uVar5) goto LAB_001697f0;
          uVar6 = (uint)(byte)((byte)uVar5 | (char)uVar6 << 4);
        }
        local_20 = (undefined1)uVar6;
        lVar3 = 1;
        lVar8 = 4;
        goto LAB_00169855;
      }
    } while ((0xf5 < (byte)(param_2[lVar3] - 0x3aU) || 0xf9 < (byte)(param_2[lVar3] + 0x99U)) &&
            (lVar8 = lVar3 + 1, lVar3 = lVar3 + 2,
            0xf9 < (byte)(param_2[lVar8] + 0x99U) || 0xf5 < (byte)(param_2[lVar8] - 0x3aU)));
  }
  *param_1 = 0x301;
  return param_1;
LAB_00169855:
  cVar9 = param_2[lVar8 + -2];
  if (cVar9 < -0x40) {
LAB_00169909:
    (*(code *)PTR_slice_error_fail_00219da0)
              (0,lVar8 + -2,&anon_c9247e0b0208fc9c8c019285c3882aec_89_llvm_5798562142159169407);
LAB_00169922:
    (*(code *)PTR_slice_error_fail_00219da0)
              (2,0,&anon_c9247e0b0208fc9c8c019285c3882aec_89_llvm_5798562142159169407);
    pcVar2 = (code *)swi(3);
    puVar4 = (undefined2 *)(*pcVar2)();
    return puVar4;
  }
  if (lVar8 != 0x40) {
    if (param_2[lVar8] < -0x40) goto LAB_00169909;
    cVar9 = param_2[lVar8 + -2];
  }
  bVar1 = param_2[lVar8 + -2 + (ulonglong)(cVar9 == '+')];
  uVar6 = bVar1 - 0x30;
  if (0x39 < bVar1) {
    uVar6 = (bVar1 - 0x41 & 0xffffffdf) + 10;
  }
  if (0xf < uVar6) goto LAB_001697f0;
  if (cVar9 != '+') {
    bVar1 = param_2[lVar8 + -1 + (ulonglong)(cVar9 == '+')];
    uVar5 = bVar1 - 0x30;
    if (0x39 < bVar1) {
      uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
    }
    if (0xf < uVar5) {
LAB_001697f0:
      *param_1 = 0x301;
      return param_1;
    }
    uVar6 = (uint)(byte)((byte)uVar5 | (char)uVar6 << 4);
  }
  (&local_20)[lVar3] = (char)uVar6;
  lVar8 = lVar8 + 2;
  lVar3 = lVar3 + 1;
  if (lVar8 == 0x42) {
    *(ulonglong *)((longlong)param_1 + 0x11) = CONCAT71(uStack_f,local_10);
    *(undefined8 *)((longlong)param_1 + 0x19) = uStack_8;
    *(ulonglong *)((longlong)param_1 + 1) = CONCAT71(uStack_1f,local_20);
    *(ulonglong *)((longlong)param_1 + 9) = CONCAT71(uStack_17,uStack_18);
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  goto LAB_00169855;
}


