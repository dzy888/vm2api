// 004f8e20 from_ascii_radix

/* <i64>::from_ascii_radix */

void __rustcall <i64>::from_ascii_radix(undefined1 *param_1,char *param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_3 == 1) {
    cVar1 = *param_2;
    if ((cVar1 == '-') || (cVar1 == '+')) {
LAB_004f8e41:
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    cVar1 = *param_2;
  }
  if (cVar1 == '-') {
    if (param_3 < 0x11) {
      if (param_3 == 1) {
        *(undefined8 *)(param_1 + 8) = 0;
        *param_1 = 0;
        return;
      }
      uVar4 = 1;
      lVar3 = 0;
      do {
        if (9 < (byte)param_2[uVar4] - 0x30) goto LAB_004f8e41;
        lVar3 = lVar3 * 10 - (ulonglong)((byte)param_2[uVar4] - 0x30);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
    else {
      uVar4 = 1;
      lVar3 = 0;
      do {
        lVar2 = lVar3 * 10;
        if (SEXT816(lVar2) != SEXT816(lVar3) * SEXT816(10)) {
          if ((byte)(param_2[uVar4] - 0x30U) < 10) {
LAB_004f8f9e:
            param_1[1] = 3;
            *param_1 = 1;
            return;
          }
          goto LAB_004f8e41;
        }
        uVar5 = (byte)param_2[uVar4] - 0x30;
        if (9 < uVar5) goto LAB_004f8e41;
        lVar3 = lVar2 - (ulonglong)uVar5;
        if (SBORROW8(lVar2,(ulonglong)uVar5)) goto LAB_004f8f9e;
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
  }
  else {
    if (cVar1 == '+') {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
    }
    lVar3 = 0;
    if (param_3 < 0x10) {
      if (param_3 != 0) {
        uVar4 = 0;
        do {
          if (9 < (byte)param_2[uVar4] - 0x30) goto LAB_004f8e41;
          lVar3 = (ulonglong)((byte)param_2[uVar4] - 0x30) + lVar3 * 10;
          uVar4 = uVar4 + 1;
        } while (param_3 != uVar4);
      }
    }
    else {
      uVar4 = 0;
      do {
        lVar2 = lVar3 * 10;
        if (SEXT816(lVar2) != SEXT816(lVar3) * SEXT816(10)) {
          if ((byte)(param_2[uVar4] - 0x30U) < 10) {
LAB_004f8f87:
            param_1[1] = 2;
            *param_1 = 1;
            return;
          }
          goto LAB_004f8e41;
        }
        uVar5 = (byte)param_2[uVar4] - 0x30;
        if (9 < uVar5) goto LAB_004f8e41;
        lVar3 = lVar2 + (ulonglong)uVar5;
        if (SCARRY8(lVar2,(ulonglong)uVar5)) goto LAB_004f8f87;
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
  }
  *(longlong *)(param_1 + 8) = lVar3;
  *param_1 = 0;
  return;
}


