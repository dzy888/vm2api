// 000bdad0 fmt

/* <core[c0acaeba6ab4c2e0]::ops::range::Range<usize> as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::ops::range::Range<usize>as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt
          (ulonglong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  char local_34 [15];
  char acStack_25 [5];
  
  uVar8 = *param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
      lVar3 = 0;
      do {
        uVar6 = (uint)uVar8;
        uVar8 = uVar8 >> 4;
        acStack_25[lVar3] = "0123456789ABCDEF"[uVar6 & 0xf];
        lVar3 = lVar3 + -1;
      } while (uVar8 != 0);
      goto LAB_000bdb8a;
    }
    lVar3 = <u64>::_fmt_inner(uVar8,local_34,0x14);
    pcVar9 = local_34 + lVar3;
    pcVar7 = "ELF\x02\x01\x01";
    uVar5 = 0;
  }
  else {
    lVar3 = 0;
    do {
      uVar6 = (uint)uVar8;
      uVar8 = uVar8 >> 4;
      acStack_25[lVar3] = (&DAT_00009100)[uVar6 & 0xf];
      lVar3 = lVar3 + -1;
    } while (uVar8 != 0);
LAB_000bdb8a:
    pcVar9 = acStack_25 + lVar3 + 1;
    pcVar7 = "0x";
    uVar5 = 2;
  }
  uVar2 = (*(code *)PTR_pad_integral_000c4770)(uVar5,pcVar7,pcVar9);
  if ((char)uVar2 != '\0') {
    return 1;
  }
  cVar1 = (**(code **)(*(longlong *)(param_2 + 8) + 0x18))(uVar2,2);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar8 = param_1[1];
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
      lVar4 = <u64>::_fmt_inner(uVar8,local_34,0x14);
      lVar3 = 0x14 - lVar4;
      pcVar9 = local_34 + lVar4;
      pcVar7 = "ELF\x02\x01\x01";
      uVar5 = 0;
      goto LAB_000bdc99;
    }
    lVar3 = 0;
    do {
      uVar6 = (uint)uVar8;
      uVar8 = uVar8 >> 4;
      acStack_25[lVar3] = "0123456789ABCDEF"[uVar6 & 0xf];
      lVar3 = lVar3 + -1;
    } while (uVar8 != 0);
  }
  else {
    lVar3 = 0;
    do {
      uVar6 = (uint)uVar8;
      uVar8 = uVar8 >> 4;
      acStack_25[lVar3] = (&DAT_00009100)[uVar6 & 0xf];
      lVar3 = lVar3 + -1;
    } while (uVar8 != 0);
  }
  pcVar9 = acStack_25 + lVar3 + 1;
  lVar3 = -lVar3;
  pcVar7 = "0x";
  uVar5 = 2;
LAB_000bdc99:
  uVar5 = (*(code *)PTR_pad_integral_000c4770)(uVar5,pcVar7,pcVar9,lVar3);
  return uVar5;
}


