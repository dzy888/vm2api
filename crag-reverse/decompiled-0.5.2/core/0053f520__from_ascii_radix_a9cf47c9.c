// 0053f520 from_ascii_radix

/* <u16>::from_ascii_radix */

int __rustcall <u16>::from_ascii_radix(char *param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  if (param_2 == 1) {
    cVar5 = *param_1;
    if (cVar5 == '+') {
      return 0x101;
    }
    if (cVar5 == '-') {
      return 0x101;
    }
  }
  else {
    if (param_2 == 0) {
      return 1;
    }
    cVar5 = *param_1;
  }
  uVar3 = (ulonglong)(cVar5 == '+');
  uVar7 = param_2 - uVar3;
  pbVar8 = (byte *)(param_1 + uVar3);
  if (uVar7 < 5) {
    if (param_2 != uVar3) {
      uVar2 = *pbVar8 - 0x30;
      if (uVar2 < 10) {
        if (uVar7 == 1) goto LAB_0053f620;
        if (pbVar8[1] - 0x30 < 10) {
          uVar2 = (short)uVar2 * 10 + (pbVar8[1] - 0x30);
          if (uVar7 == 2) goto LAB_0053f620;
          if (pbVar8[2] - 0x30 < 10) {
            uVar2 = uVar2 * 10 + (pbVar8[2] - 0x30);
            if (uVar7 == 3) goto LAB_0053f620;
            if (pbVar8[3] - 0x30 < 10) {
              return (uVar2 * 10 + (pbVar8[3] - 0x30)) * 0x10000;
            }
          }
        }
      }
      return 0x101;
    }
    uVar2 = 0;
  }
  else {
    lVar4 = 0;
    uVar2 = 0;
    while (lVar4 != param_2 - uVar3) {
      uVar1 = (ushort)(uVar2 * 10);
      if ((short)(uVar2 * 10 >> 0x10) != 0) {
        return (uint)((byte)(pbVar8[lVar4] - 0x30) < 10) * 0x100 + 0x101;
      }
      uVar2 = pbVar8[lVar4] - 0x30;
      if (9 < uVar2) {
        return 0x101;
      }
      lVar4 = lVar4 + 1;
      uVar6 = (ushort)uVar2;
      uVar2 = (uint)(ushort)(uVar1 + uVar6);
      if (CARRY2(uVar1,uVar6)) {
        return 0x201;
      }
    }
  }
LAB_0053f620:
  return uVar2 << 0x10;
}


