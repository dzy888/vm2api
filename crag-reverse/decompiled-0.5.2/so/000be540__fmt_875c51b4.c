// 000be540 fmt

/* <u32 as core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt */

void __rustcall <u32_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uStack_9;
  
  lVar1 = 0;
  uVar3 = *param_1;
  do {
    lVar4 = lVar1;
    uVar2 = uVar3 >> 4;
    (&uStack_9)[lVar4] = (&DAT_00009100)[uVar3 & 0xf];
    lVar1 = lVar4 + -1;
    uVar3 = uVar2;
  } while (uVar2 != 0);
  (*(code *)PTR_pad_integral_000c4770)(2,"0x",&uStack_9 + lVar4,-(lVar4 + -1));
  return;
}


