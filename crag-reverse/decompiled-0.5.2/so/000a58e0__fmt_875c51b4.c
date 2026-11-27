// 000a58e0 fmt

/* WARNING: Switch with 1 destination removed at 0x000a58f1 */
/* WARNING: Switch with 1 destination removed at 0x000a58f7 */
/* WARNING: Switch with 1 destination removed at 0x000a58fd */
/* <u32 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall <u32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(uint *param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uStack_20;
  char acStack_18 [8];
  
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar3 = 0;
    uVar2 = *param_1;
    do {
      lVar7 = lVar3;
      uVar6 = uVar2 >> 4;
      acStack_18[lVar7 + 0xf] = (&DAT_00009100)[uVar2 & 0xf];
      lVar3 = lVar7 + -1;
      uVar2 = uVar6;
    } while (uVar6 != 0);
    uStack_20 = 0xbe599;
    (*(code *)PTR_pad_integral_000c4770)(2,"0x",acStack_18 + lVar7 + 0xf,-(lVar7 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar3 = 0;
    uVar2 = *param_1;
    do {
      lVar7 = lVar3;
      uVar6 = uVar2 >> 4;
      acStack_18[lVar7 + 0xf] = "0123456789ABCDEF"[uVar2 & 0xf];
      lVar3 = lVar7 + -1;
      uVar2 = uVar6;
    } while (uVar6 != 0);
    uStack_20 = 0xbe659;
    (*(code *)PTR_pad_integral_000c4770)(2,"0x",acStack_18 + lVar7 + 0xf,-(lVar7 + -1));
    return;
  }
  uVar2 = *param_1;
  lVar3 = 10;
  uVar5 = (ulonglong)uVar2;
  if (999 < uVar2) {
    uVar6 = uVar2;
    do {
      uVar5 = (ulonglong)uVar6 / 10000;
      *(uint *)(acStack_18 + lVar3 + -6) =
           CONCAT22(*(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar6 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar6 % 10000) / 100) * 2));
      lVar3 = lVar3 + -4;
      bVar1 = 9999999 < uVar6;
      uVar6 = uVar6 / 10000;
    } while (bVar1);
  }
  uVar4 = (uint)uVar5;
  uVar6 = uVar4;
  if (9 < uVar4) {
    uVar6 = (uint)((uVar5 & 0xffff) >> 2) / 0x19;
    *(undefined2 *)(acStack_18 + lVar3 + -4) =
         *(undefined2 *)(&DAT_00018001 + (ulonglong)(uVar4 + uVar6 * -100 & 0xffff) * 2);
    lVar3 = lVar3 + -2;
  }
  if ((uVar2 == 0) || (uVar6 != 0)) {
    acStack_18[lVar3 + -3] = (&DAT_00018002)[(ulonglong)(uVar6 & 0xf) * 2];
    lVar3 = lVar3 + -1;
  }
  (*(code *)PTR_pad_integral_000c4770)(0,1,acStack_18 + lVar3 + -2,10 - lVar3);
  return;
}


