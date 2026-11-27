// 00212e70 fmt

/* <u32 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <u32_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 uStack_1f;
  undefined4 uStack_1e;
  undefined1 auStack_1a [10];
  
  uVar1 = *param_1;
  lVar3 = 10;
  uVar5 = (ulonglong)uVar1;
  if (999 < uVar1) {
    uVar6 = uVar1;
    do {
      uVar5 = (ulonglong)uVar6 / 10000;
      *(uint *)(auStack_1a + lVar3 + -4) =
           CONCAT22(*(undefined2 *)(&DAT_00130783 + (ulonglong)((uVar6 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_00130783 + (ulonglong)((uVar6 % 10000) / 100) * 2));
      lVar3 = lVar3 + -4;
      bVar2 = 9999999 < uVar6;
      uVar6 = uVar6 / 10000;
    } while (bVar2);
  }
  uVar4 = (uint)uVar5;
  uVar6 = uVar4;
  if (9 < uVar4) {
    uVar6 = (uint)((uVar5 & 0xffff) >> 2) / 0x19;
    *(undefined2 *)(auStack_1a + lVar3 + -2) =
         *(undefined2 *)(&DAT_00130783 + (ulonglong)(uVar4 + uVar6 * -100 & 0xffff) * 2);
    lVar3 = lVar3 + -2;
  }
  if ((uVar1 == 0) || (uVar6 != 0)) {
    auStack_1a[lVar3 + -1] = (&DAT_00130784)[(ulonglong)(uVar6 & 0xf) * 2];
    lVar3 = lVar3 + -1;
  }
  (*(code *)PTR_pad_integral_0021adc0)(0,1,auStack_1a + lVar3,10 - lVar3);
  return;
}


