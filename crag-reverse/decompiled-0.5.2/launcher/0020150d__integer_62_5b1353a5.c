// 0020150d integer_62

/* <rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::integer_62 */

undefined1 * __rustcall
<rustc_demangle[a2bba03bad1b7f1a]::v0::Parser>::integer_62(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  
  uVar6 = param_2[2];
  if ((uVar6 < (ulonglong)param_2[1]) && (*(char *)(*param_2 + uVar6) == '_')) {
    param_2[2] = uVar6 + 1;
    *(undefined8 *)(param_1 + 8) = 0;
LAB_002015a5:
    uVar3 = 0;
  }
  else {
    uVar5 = 0;
    while (uVar6 < (ulonglong)param_2[1]) {
      cVar1 = *(char *)(*param_2 + uVar6);
      if (cVar1 == '_') {
        param_2[2] = uVar6 + 1;
        if (uVar5 != 0xffffffffffffffff) {
          *(ulonglong *)(param_1 + 8) = uVar5 + 1;
          goto LAB_002015a5;
        }
        break;
      }
      bVar7 = cVar1 - 0x30;
      if (9 < bVar7) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          bVar7 = cVar1 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) break;
          bVar7 = cVar1 - 0x1d;
        }
      }
      uVar6 = uVar6 + 1;
      param_2[2] = uVar6;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0x3e),0);
      if ((SUB168(auVar2 * ZEXT816(0x3e),8) != 0) ||
         (uVar5 = uVar4 + bVar7, CARRY8(uVar4,(ulonglong)bVar7))) break;
    }
    param_1[1] = 0;
    uVar3 = 1;
  }
  *param_1 = uVar3;
  return param_1;
}


