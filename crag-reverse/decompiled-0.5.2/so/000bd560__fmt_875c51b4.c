// 000bd560 fmt

/* <u64 as core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt
   <usize as core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt */

void __rustcall <u64_as_core[c0acaeba6ab4c2e0]::fmt::LowerHex>::fmt(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uStack_9;
  
  uVar2 = *param_1;
  lVar1 = 0;
  do {
    lVar4 = lVar1;
    uVar3 = (uint)uVar2;
    uVar2 = uVar2 >> 4;
    (&uStack_9)[lVar4] = (&DAT_00009100)[uVar3 & 0xf];
    lVar1 = lVar4 + -1;
  } while (uVar2 != 0);
  (*(code *)PTR_pad_integral_000c4770)(2,"0x",&uStack_9 + lVar4,-(lVar4 + -1));
  return;
}


