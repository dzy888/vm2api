// 00781c80 fmt

/* WARNING: Switch with 1 destination removed at 0x00781c9e */
/* <i32 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall <i32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uStack_20;
  char acStack_18 [8];
  
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
      uVar2 = *param_1;
      uVar1 = -uVar2;
      if ((int)-uVar2 < 0) {
        uVar1 = uVar2;
      }
      lVar4 = 10;
      if (999 < uVar1) {
        do {
          uVar3 = uVar1;
          *(uint *)(acStack_18 + lVar4 + -6) =
               CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar3 % 10000) % 100) * 2),
                        *(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar3 % 10000) / 100) * 2));
          lVar4 = lVar4 + -4;
          uVar1 = uVar3 / 10000;
        } while (9999999 < uVar3);
        uVar1 = uVar3 / 10000;
      }
      uVar3 = uVar1;
      if (9 < uVar1) {
        uVar3 = (uVar1 & 0xffff) / 100;
        *(undefined2 *)(acStack_18 + lVar4 + -4) =
             *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(uVar1 + uVar3 * -100 & 0xffff) * 2);
        lVar4 = lVar4 + -2;
      }
      if ((uVar2 == 0) || (uVar3 != 0)) {
        acStack_18[lVar4 + -3] = (&DAT_001c26c5)[(ulonglong)(uVar3 & 0xf) * 2];
        lVar4 = lVar4 + -1;
      }
      (*(code *)PTR_pad_integral_0079b388)(0,1,acStack_18 + lVar4 + -2,10 - lVar4);
      return;
    }
    lVar4 = 0;
    uVar2 = *param_1;
    do {
      uVar1 = uVar2 >> 4;
      acStack_18[lVar4 + 0xf] = (&DAT_001829d0)[uVar2 & 0xf];
      lVar4 = lVar4 + -1;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  else {
    lVar4 = 0;
    uVar2 = *param_1;
    do {
      uVar1 = uVar2 >> 4;
      acStack_18[lVar4 + 0xf] = "0123456789abcdef"[uVar2 & 0xf];
      lVar4 = lVar4 + -1;
      uVar2 = uVar1;
    } while (uVar1 != 0);
  }
  uStack_20 = 0x781d29;
  (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,acStack_18 + lVar4 + 0x10,-lVar4);
  return;
}


