// 000bc6f0 fmt

/* <&usize as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
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
      pcVar4 = "ELF\x02\x01\x01";
      uVar3 = 0;
      goto LAB_000bc7c9;
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
      acStack_1d[lVar7] = (&DAT_00009100)[uVar2 & 0xf];
      lVar7 = lVar7 + -1;
    } while (uVar5 != 0);
  }
  pcVar6 = acStack_1d + lVar7 + 1;
  lVar7 = -lVar7;
  pcVar4 = "0x";
  uVar3 = 2;
LAB_000bc7c9:
  (*(code *)PTR_pad_integral_000c4770)(uVar3,pcVar4,pcVar6,lVar7);
  return;
}


