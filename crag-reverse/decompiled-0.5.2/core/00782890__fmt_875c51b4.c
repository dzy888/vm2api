// 00782890 fmt

/* <i32 as core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt */

void __rustcall <i32_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt(uint *param_1)

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
    (&cStack_9)[lVar4] = "0123456789abcdef"[uVar3 & 0xf];
    lVar1 = lVar4 + -1;
    uVar3 = uVar2;
  } while (uVar2 != 0);
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,&cStack_9 + lVar4,-(lVar4 + -1));
  return;
}


