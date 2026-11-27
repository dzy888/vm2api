// 00211c60 fmt

/* <&usize as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  char local_2c [15];
  char acStack_1d [5];
  
  uVar5 = *(ulonglong *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
      lVar1 = <u64>::_fmt_inner(uVar5,local_2c,0x14);
      lVar7 = 0x14 - lVar1;
      pcVar6 = local_2c + lVar1;
      puVar4 = (undefined *)0x1;
      uVar3 = 0;
      goto LAB_00211d39;
    }
    lVar7 = 0;
    do {
      uVar2 = (uint)uVar5;
      uVar5 = uVar5 >> 4;
      acStack_1d[lVar7] = "0123456789ABCDEF"[uVar2 & 0xf];
      lVar7 = lVar7 + -1;
    } while (uVar5 != 0);
  }
  else {
    lVar7 = 0;
    do {
      uVar2 = (uint)uVar5;
      uVar5 = uVar5 >> 4;
      acStack_1d[lVar7] =
           anon_c9247e0b0208fc9c8c019285c3882aec_112_llvm_5798562142159169407[uVar2 & 0xf];
      lVar7 = lVar7 + -1;
    } while (uVar5 != 0);
  }
  pcVar6 = acStack_1d + lVar7 + 1;
  lVar7 = -lVar7;
  puVar4 = &DAT_001312ee;
  uVar3 = 2;
LAB_00211d39:
  (*(code *)PTR_pad_integral_0021adc0)(uVar3,puVar4,pcVar6,lVar7);
  return;
}


