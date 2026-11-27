// 006b9900 fmt

/* WARNING: Switch with 1 destination removed at 0x006b9914 */
/* WARNING: Switch with 1 destination removed at 0x006b991a */
/* WARNING: Switch with 1 destination removed at 0x006b9920 */
/* <&u64 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  
  puVar1 = (ulonglong *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    uVar2 = *puVar1;
    lVar3 = 0;
    do {
      lVar5 = lVar3;
      uVar4 = (uint)uVar2;
      uVar2 = uVar2 >> 4;
      auStack_2c[lVar5 + 0x23] = "0123456789abcdef"[uVar4 & 0xf];
      lVar3 = lVar5 + -1;
    } while (uVar2 != 0);
    uStack_20 = 0x78175b;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_2c + lVar5 + 0x23,-(lVar5 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    lVar3 = <u64>::_fmt_inner(*puVar1,auStack_2c,0x14);
    (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_2c + lVar3,0x14 - lVar3);
    return;
  }
  uVar2 = *puVar1;
  lVar3 = 0;
  do {
    lVar5 = lVar3;
    uVar4 = (uint)uVar2;
    uVar2 = uVar2 >> 4;
    auStack_2c[lVar5 + 0x23] = (&DAT_001829d0)[uVar4 & 0xf];
    lVar3 = lVar5 + -1;
  } while (uVar2 != 0);
  uStack_20 = 0x7819ab;
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_2c + lVar5 + 0x23,-(lVar5 + -1));
  return;
}


