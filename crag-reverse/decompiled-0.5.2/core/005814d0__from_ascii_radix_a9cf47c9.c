// 005814d0 from_ascii_radix

/* <u32>::from_ascii_radix */

longlong __rustcall <u32>::from_ascii_radix(char *param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  if (param_2 == 1) {
    cVar4 = *param_1;
    if (cVar4 == '+') {
      return 0x101;
    }
    if (cVar4 == '-') {
      return 0x101;
    }
  }
  else {
    if (param_2 == 0) {
      return 1;
    }
    cVar4 = *param_1;
  }
  uVar2 = (ulonglong)(cVar4 == '+');
  uVar5 = param_2 - uVar2;
  pbVar7 = (byte *)(param_1 + uVar2);
  if (uVar5 < 9) {
    if (param_2 != uVar2) {
      uVar6 = *pbVar7 - 0x30;
      uVar2 = (ulonglong)uVar6;
      lVar3 = 0x101;
      if (uVar6 < 10) {
        if (uVar5 == 1) {
LAB_0058153c:
          return uVar2 << 0x20;
        }
        if (pbVar7[1] - 0x30 < 10) {
          uVar6 = (pbVar7[1] - 0x30) + uVar6 * 10;
          uVar2 = (ulonglong)uVar6;
          if (uVar5 == 2) goto LAB_0058153c;
          if (pbVar7[2] - 0x30 < 10) {
            uVar6 = (pbVar7[2] - 0x30) + uVar6 * 10;
            uVar2 = (ulonglong)uVar6;
            if (uVar5 == 3) goto LAB_0058153c;
            if (pbVar7[3] - 0x30 < 10) {
              uVar6 = (pbVar7[3] - 0x30) + uVar6 * 10;
              uVar2 = (ulonglong)uVar6;
              if (uVar5 == 4) goto LAB_0058153c;
              if (pbVar7[4] - 0x30 < 10) {
                uVar6 = (pbVar7[4] - 0x30) + uVar6 * 10;
                uVar2 = (ulonglong)uVar6;
                if (uVar5 == 5) goto LAB_0058153c;
                if (pbVar7[5] - 0x30 < 10) {
                  uVar6 = (pbVar7[5] - 0x30) + uVar6 * 10;
                  uVar2 = (ulonglong)uVar6;
                  if (uVar5 == 6) goto LAB_0058153c;
                  if (pbVar7[6] - 0x30 < 10) {
                    uVar6 = (pbVar7[6] - 0x30) + uVar6 * 10;
                    uVar2 = (ulonglong)uVar6;
                    if (uVar5 == 7) goto LAB_0058153c;
                    if (pbVar7[7] - 0x30 < 10) {
                      lVar3 = (ulonglong)((pbVar7[7] - 0x30) + uVar6 * 10) << 0x20;
                    }
                  }
                }
              }
            }
          }
        }
      }
      return lVar3;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    lVar3 = 0;
    while (lVar3 != param_2 - uVar2) {
      uVar6 = (uint)(uVar5 * 10);
      if ((int)(uVar5 * 10 >> 0x20) != 0) {
        return (ulonglong)((byte)(pbVar7[lVar3] - 0x30) < 10) * 0x100 + 0x101;
      }
      uVar1 = pbVar7[lVar3] - 0x30;
      if (9 < uVar1) {
        return 0x101;
      }
      lVar3 = lVar3 + 1;
      uVar5 = (ulonglong)(uVar1 + uVar6);
      if (CARRY4(uVar1,uVar6)) {
        return 0x201;
      }
    }
  }
  return uVar5 << 0x20;
}


