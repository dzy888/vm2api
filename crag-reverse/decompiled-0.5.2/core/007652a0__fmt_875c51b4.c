// 007652a0 fmt

/* WARNING: Switch with 1 destination removed at 0x007652b1 */
/* WARNING: Switch with 1 destination removed at 0x007652b7 */
/* WARNING: Switch with 1 destination removed at 0x007652bd */
/* <i32 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall <i32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uStack_20;
  char acStack_18 [8];
  
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar3 = 0;
    uVar2 = *param_1;
    do {
      lVar5 = lVar3;
      uVar1 = uVar2 >> 4;
      acStack_18[lVar5 + 0xf] = "0123456789abcdef"[uVar2 & 0xf];
      lVar3 = lVar5 + -1;
      uVar2 = uVar1;
    } while (uVar1 != 0);
    uStack_20 = 0x7828e9;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,acStack_18 + lVar5 + 0xf,-(lVar5 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar3 = 0;
    uVar2 = *param_1;
    do {
      lVar5 = lVar3;
      uVar1 = uVar2 >> 4;
      acStack_18[lVar5 + 0xf] = (&DAT_001829d0)[uVar2 & 0xf];
      lVar3 = lVar5 + -1;
      uVar2 = uVar1;
    } while (uVar1 != 0);
    uStack_20 = 0x7829a9;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,acStack_18 + lVar5 + 0xf,-(lVar5 + -1));
    return;
  }
  uVar2 = *param_1;
  uVar1 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar1 = uVar2;
  }
  lVar3 = 10;
  if (999 < uVar1) {
    do {
      uVar4 = uVar1;
      *(uint *)(acStack_18 + lVar3 + -6) =
           CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar4 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar4 % 10000) / 100) * 2));
      lVar3 = lVar3 + -4;
      uVar1 = uVar4 / 10000;
    } while (9999999 < uVar4);
    uVar1 = uVar4 / 10000;
  }
  uVar4 = uVar1;
  if (9 < uVar1) {
    uVar4 = (uVar1 & 0xffff) / 100;
    *(undefined2 *)(acStack_18 + lVar3 + -4) =
         *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(uVar1 + uVar4 * -100 & 0xffff) * 2);
    lVar3 = lVar3 + -2;
  }
  if ((uVar2 == 0) || (uVar4 != 0)) {
    acStack_18[lVar3 + -3] = (&DAT_001c26c5)[(ulonglong)(uVar4 & 0xf) * 2];
    lVar3 = lVar3 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,acStack_18 + lVar3 + -2,10 - lVar3);
  return;
}


