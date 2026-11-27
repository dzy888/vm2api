// 002135b0 fmt

/* <u8 as core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt */

void __rustcall <u8_as_core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt(byte *param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  char cStack_9;
  
  lVar1 = 0;
  bVar2 = *param_1;
  do {
    lVar4 = lVar1;
    bVar3 = bVar2 >> 4;
    (&cStack_9)[lVar4] = "0123456789ABCDEF"[bVar2 & 0xf];
    lVar1 = lVar4 + -1;
    bVar2 = bVar3;
  } while (bVar3 != 0);
  (*(code *)PTR_pad_integral_0021adc0)(2,&DAT_001312ee,&cStack_9 + lVar4,-(lVar4 + -1));
  return;
}


