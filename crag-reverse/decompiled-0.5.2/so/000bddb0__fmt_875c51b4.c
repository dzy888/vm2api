// 000bddb0 fmt

/* <u8 as core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt */

void __rustcall <u8_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt(byte *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  undefined1 uStack_9;
  
  lVar1 = 0;
  bVar2 = *param_1;
  do {
    lVar4 = lVar1;
    bVar3 = bVar2 >> 4;
    (&uStack_9)[lVar4] = (&DAT_00009100)[bVar2 & 0xf];
    lVar1 = lVar4 + -1;
    bVar2 = bVar3;
  } while (bVar3 != 0);
  (*(code *)PTR_pad_integral_000c4770)(2,"0x",&uStack_9 + lVar4,-(lVar4 + -1));
  return;
}


