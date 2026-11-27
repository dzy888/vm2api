// 00213cf0 fmt

/* <u32 as core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt */

void __rustcall <u32_as_core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  char cStack_9;
  
  lVar1 = 0;
  uVar3 = *param_1;
  do {
    lVar4 = lVar1;
    uVar2 = uVar3 >> 4;
    (&cStack_9)[lVar4] = "0123456789ABCDEF"[uVar3 & 0xf];
    lVar1 = lVar4 + -1;
    uVar3 = uVar2;
  } while (uVar2 != 0);
  (*(code *)PTR_pad_integral_0021adc0)(2,&DAT_001312ee,&cStack_9 + lVar4,-(lVar4 + -1));
  return;
}


