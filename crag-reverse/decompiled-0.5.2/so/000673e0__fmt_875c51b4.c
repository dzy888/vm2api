// 000673e0 fmt

/* WARNING: Switch with 1 destination removed at 0x000673f1 */
/* WARNING: Switch with 1 destination removed at 0x000673f7 */
/* WARNING: Switch with 1 destination removed at 0x000673fd */
/* <usize as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<usize_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(ulonglong *param_1,longlong param_2)

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
      auStack_2c[lVar4 + 0x23] = (&DAT_00009100)[uVar3 & 0xf];
      lVar2 = lVar4 + -1;
    } while (uVar1 != 0);
    uStack_20 = 0xbd5bb;
    (*(code *)PTR_pad_integral_000c4770)(2,"0x",auStack_2c + lVar4 + 0x23,-(lVar4 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
    lVar2 = <u64>::_fmt_inner(*param_1,auStack_2c,0x14);
    (*(code *)PTR_pad_integral_000c4770)(0,1,auStack_2c + lVar2,0x14 - lVar2);
    return;
  }
  uVar1 = *param_1;
  lVar2 = 0;
  do {
    lVar4 = lVar2;
    uVar3 = (uint)uVar1;
    uVar1 = uVar1 >> 4;
    auStack_2c[lVar4 + 0x23] = "0123456789ABCDEF"[uVar3 & 0xf];
    lVar2 = lVar4 + -1;
  } while (uVar1 != 0);
  uStack_20 = 0xbd79b;
  (*(code *)PTR_pad_integral_000c4770)(2,"0x",auStack_2c + lVar4 + 0x23,-(lVar4 + -1));
  return;
}


