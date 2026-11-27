// 0074c170 from_ascii_radix

/* <u64>::from_ascii_radix */

void __rustcall <u64>::from_ascii_radix(undefined1 *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  
  cVar1 = *param_2;
  if ((param_3 == 1) && ((cVar1 == '-' || (cVar1 == '+')))) {
LAB_0074c183:
    param_1[1] = 1;
    *param_1 = 1;
    return;
  }
  uVar6 = (ulonglong)(cVar1 == '+');
  if (param_3 - uVar6 < 0x11) {
    if (param_3 == uVar6) {
      *(undefined8 *)(param_1 + 8) = 0;
      *param_1 = 0;
      return;
    }
    uVar3 = 0;
    lVar4 = 0;
    do {
      bVar2 = param_2[lVar4 + uVar6];
      uVar5 = bVar2 - 0x30;
      if (0x39 < bVar2) {
        uVar5 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar5) goto LAB_0074c183;
      uVar3 = (ulonglong)uVar5 | uVar3 << 4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != param_3 + -uVar6);
  }
  else {
    uVar3 = 0;
    lVar4 = 0;
    do {
      bVar2 = param_2[lVar4 + uVar6];
      if (uVar3 >> 0x3c != 0) {
        uVar5 = bVar2 - 0x30;
        if (0x39 < bVar2) {
          uVar5 = (bVar2 - 0x41 & 0xffffffde) + 10;
        }
        if (uVar5 < 0x10) {
          param_1[1] = 2;
          *param_1 = 1;
          return;
        }
        goto LAB_0074c183;
      }
      uVar5 = bVar2 - 0x30;
      if (0x39 < bVar2) {
        uVar5 = (bVar2 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar5) goto LAB_0074c183;
      uVar3 = (ulonglong)uVar5 | uVar3 << 4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != param_3 + -uVar6);
  }
  *(ulonglong *)(param_1 + 8) = uVar3;
  *param_1 = 0;
  return;
}


