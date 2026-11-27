// 00635da0 fmt

/* WARNING: Switch with 1 destination removed at 0x00635db1 */
/* WARNING: Switch with 1 destination removed at 0x00635db7 */
/* WARNING: Switch with 1 destination removed at 0x00635dbd */
/* <u64 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<u64_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_2c [12];
  undefined8 uStack_20;
  
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    uVar1 = *param_1;
    lVar2 = 0;
    do {
      lVar4 = lVar2;
      uVar3 = (uint)uVar1;
      uVar1 = uVar1 >> 4;
      auStack_2c[lVar4 + 0x23] = "0123456789abcdef"[uVar3 & 0xf];
      lVar2 = lVar4 + -1;
    } while (uVar1 != 0);
    uStack_20 = 0x78175b;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_2c + lVar4 + 0x23,-(lVar4 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    lVar2 = <u64>::_fmt_inner(*param_1,auStack_2c,0x14);
    (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_2c + lVar2,0x14 - lVar2);
    return;
  }
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar4 = lVar2;
    uVar3 = (uint)uVar1;
    uVar1 = uVar1 >> 4;
    auStack_2c[lVar4 + 0x23] = (&DAT_001829d0)[uVar3 & 0xf];
    lVar2 = lVar4 + -1;
  } while (uVar1 != 0);
  uStack_20 = 0x7819ab;
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_2c + lVar4 + 0x23,-(lVar4 + -1));
  return;
}


