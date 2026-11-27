// 00764020 fmt

/* WARNING: Switch with 1 destination removed at 0x00764034 */
/* WARNING: Switch with 1 destination removed at 0x0076403a */
/* WARNING: Switch with 1 destination removed at 0x00764040 */
/* <&isize as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&isize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_34 [20];
  
  puVar1 = (ulonglong *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    uVar4 = *puVar1;
    lVar2 = 0;
    do {
      lVar5 = lVar2;
      uVar3 = (uint)uVar4;
      uVar4 = uVar4 >> 4;
      auStack_34[lVar5 + 0x2b] = "0123456789abcdef"[uVar3 & 0xf];
      lVar2 = lVar5 + -1;
    } while (uVar4 != 0);
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_34 + lVar5 + 0x2b,-(lVar5 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    uVar4 = -*puVar1;
    if ((longlong)uVar4 < 0) {
      uVar4 = *puVar1;
    }
    lVar2 = <u64>::_fmt_inner(uVar4,auStack_34,0x14);
    (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_34 + lVar2,0x14 - lVar2);
    return;
  }
  uVar4 = *puVar1;
  lVar2 = 0;
  do {
    lVar5 = lVar2;
    uVar3 = (uint)uVar4;
    uVar4 = uVar4 >> 4;
    auStack_34[lVar5 + 0x2b] = (&DAT_001829d0)[uVar3 & 0xf];
    lVar2 = lVar5 + -1;
  } while (uVar4 != 0);
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_34 + lVar5 + 0x2b,-(lVar5 + -1));
  return;
}


