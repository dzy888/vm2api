// 00782780 fmt

/* <i16 as core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt */

void __rustcall <i16_as_core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt(ushort *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uStack_9;
  
  lVar1 = 0;
  uVar2 = (uint)*param_1;
  do {
    lVar4 = lVar1;
    uVar3 = uVar2 >> 4;
    (&uStack_9)[lVar4] = (&DAT_001829d0)[uVar2 & 0xf];
    lVar1 = lVar4 + -1;
    uVar2 = uVar3;
  } while (uVar3 != 0);
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,&uStack_9 + lVar4,-(lVar4 + -1));
  return;
}


