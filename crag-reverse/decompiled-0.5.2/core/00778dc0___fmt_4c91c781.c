// 00778dc0 _fmt

/* <u32>::_fmt */

undefined1  [16] __rustcall <u32>::_fmt(ulonglong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_1 & 0xffffffff;
  lVar3 = param_3;
  if (999 < (uint)param_1) {
    uVar1 = param_1;
    do {
      uVar4 = (uint)uVar1;
      uVar1 = (uVar1 & 0xffffffff) / 10000;
      iVar2 = uVar4 + (int)uVar1 * -10000;
      uVar5 = (uint)(iVar2 * 0x147b) >> 0x13;
      *(uint *)(param_2 + -4 + lVar3) =
           CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)(iVar2 + uVar5 * -100 & 0xffff) * 2),
                    *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar5 * 2));
      lVar3 = lVar3 + -4;
    } while (9999999 < uVar4);
  }
  uVar5 = (uint)uVar1;
  uVar4 = uVar5;
  if (9 < uVar5) {
    uVar4 = (uint)((uVar1 & 0xffff) >> 2) / 0x19;
    *(undefined2 *)(param_2 + -2 + lVar3) =
         *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(uVar5 + uVar4 * -100 & 0xffff) * 2);
    lVar3 = lVar3 + -2;
  }
  if (((uint)param_1 == 0) || (uVar4 != 0)) {
    *(undefined *)(param_2 + -1 + lVar3) = (&DAT_001c26c5)[(ulonglong)(uVar4 & 0xf) * 2];
    lVar3 = lVar3 + -1;
  }
  auVar6._8_8_ = param_3 - lVar3;
  auVar6._0_8_ = param_2 + lVar3;
  return auVar6;
}


