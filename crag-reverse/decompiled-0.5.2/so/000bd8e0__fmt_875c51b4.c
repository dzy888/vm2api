// 000bd8e0 fmt

/* <i32 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <i32_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStack_1e;
  undefined1 auStack_1a [10];
  
  uVar1 = *param_1;
  uVar3 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  lVar2 = 10;
  if (999 < uVar3) {
    do {
      uVar4 = uVar3;
      *(uint *)(auStack_1a + lVar2 + -4) =
           CONCAT22(*(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar4 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar4 % 10000) / 100) * 2));
      lVar2 = lVar2 + -4;
      uVar3 = uVar4 / 10000;
    } while (9999999 < uVar4);
    uVar3 = uVar4 / 10000;
  }
  uVar4 = uVar3;
  if (9 < uVar3) {
    uVar4 = (uVar3 & 0xffff) / 100;
    *(undefined2 *)(auStack_1a + lVar2 + -2) =
         *(undefined2 *)(&DAT_00018001 + (ulonglong)(uVar3 + uVar4 * -100 & 0xffff) * 2);
    lVar2 = lVar2 + -2;
  }
  if ((uVar1 == 0) || (uVar4 != 0)) {
    auStack_1a[lVar2 + -1] = (&DAT_00018002)[(ulonglong)(uVar4 & 0xf) * 2];
    lVar2 = lVar2 + -1;
  }
  (*(code *)PTR_pad_integral_000c4770)(0,1,auStack_1a + lVar2,10 - lVar2);
  return;
}


