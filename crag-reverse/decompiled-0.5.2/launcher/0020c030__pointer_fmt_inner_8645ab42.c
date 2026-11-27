// 0020c030 pointer_fmt_inner

/* core[c0acaeba6ab4c2e0]::fmt::pointer_fmt_inner */

void __rustcall core[c0acaeba6ab4c2e0]::fmt::pointer_fmt_inner(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uStack_19;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar3 = (uint)uVar1;
  if ((uVar1 & 0x800000) != 0) {
    if ((uVar1 & 0x8000000) == 0) {
      uVar3 = uVar3 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar3 = uVar3 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar3 | 0x800000;
  lVar2 = 0;
  do {
    lVar4 = lVar2;
    uVar3 = (uint)param_1;
    param_1 = param_1 >> 4;
    (&uStack_19)[lVar4] =
         anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407[uVar3 & 0xf];
    lVar2 = lVar4 + -1;
  } while (param_1 != 0);
  (*(code *)PTR_pad_integral_0021adc0)(2,&DAT_001312ee,&uStack_19 + lVar4,-(lVar4 + -1));
  *(ulonglong *)(param_2 + 0x10) = uVar1;
  return;
}


