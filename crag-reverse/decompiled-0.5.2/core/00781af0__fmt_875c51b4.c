// 00781af0 fmt

/* <i64 as core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt
   <isize as core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt */

void __rustcall <i64_as_core[c0acaeba6ab4c2e0]::fmt::UpperHex>::fmt(ulonglong *param_1)

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
    (&uStack_9)[lVar4] = (&DAT_001829d0)[uVar3 & 0xf];
    lVar1 = lVar4 + -1;
  } while (uVar2 != 0);
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,&uStack_9 + lVar4,-(lVar4 + -1));
  return;
}


