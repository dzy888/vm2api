// 00724400 fmt

/* <u16 as itoa[685bbbf940b76c0a]::Unsigned>::fmt */

longlong __rustcall <u16_as_itoa[685bbbf940b76c0a]::Unsigned>::fmt(uint param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (ushort)param_1;
  uVar5 = param_1 & 0xffff;
  if (uVar5 < 1000) {
    lVar1 = 5;
    uVar2 = uVar4;
    if (uVar4 < 10) goto LAB_00724484;
    uVar3 = uVar5 * 0x147b >> 0x13;
    uVar5 = uVar3 * -100 + uVar5;
    lVar1 = 3;
  }
  else {
    uVar3 = uVar5 / 10000;
    uVar5 = param_1 + uVar3 * -10000 & 0xffff;
    uVar6 = uVar5 * 0x147b >> 0x13;
    uVar5 = uVar6 * -100 + uVar5;
    *(undefined2 *)(param_2 + 1) =
         *(undefined2 *)(PTR_DECIMAL_PAIRS_0079ab40 + (ulonglong)uVar6 * 2);
    lVar1 = 1;
  }
  *(undefined2 *)(param_2 + 3) = *(undefined2 *)(PTR_DECIMAL_PAIRS_0079ab40 + (ulonglong)uVar5 * 2);
  uVar2 = (ushort)uVar3;
LAB_00724484:
  if ((uVar4 == 0) || (uVar2 != 0)) {
    *(byte *)(param_2 + -1 + lVar1) = (byte)uVar2 | 0x30;
    return lVar1 + -1;
  }
  return lVar1;
}


