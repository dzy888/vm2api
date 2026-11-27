// 00764080 fmt

/* WARNING: Switch with 1 destination removed at 0x00764094 */
/* WARNING: Switch with 1 destination removed at 0x0076409a */
/* WARNING: Switch with 1 destination removed at 0x007640a0 */
/* <&u32 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&u32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uStack_20;
  char acStack_18 [8];
  
  puVar1 = (uint *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar4 = 0;
    uVar3 = *puVar1;
    do {
      lVar8 = lVar4;
      uVar7 = uVar3 >> 4;
      acStack_18[lVar8 + 0xf] = "0123456789abcdef"[uVar3 & 0xf];
      lVar4 = lVar8 + -1;
      uVar3 = uVar7;
    } while (uVar7 != 0);
    uStack_20 = 0x782889;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,acStack_18 + lVar8 + 0xf,-(lVar8 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar4 = 0;
    uVar3 = *puVar1;
    do {
      lVar8 = lVar4;
      uVar7 = uVar3 >> 4;
      acStack_18[lVar8 + 0xf] = (&DAT_001829d0)[uVar3 & 0xf];
      lVar4 = lVar8 + -1;
      uVar3 = uVar7;
    } while (uVar7 != 0);
    uStack_20 = 0x782949;
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,acStack_18 + lVar8 + 0xf,-(lVar8 + -1));
    return;
  }
  uVar3 = *puVar1;
  lVar4 = 10;
  uVar6 = (ulonglong)uVar3;
  if (999 < uVar3) {
    uVar7 = uVar3;
    do {
      uVar6 = (ulonglong)uVar7 / 10000;
      *(uint *)(acStack_18 + lVar4 + -6) =
           CONCAT22(*(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar7 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_001c26c4 + (ulonglong)((uVar7 % 10000) / 100) * 2));
      lVar4 = lVar4 + -4;
      bVar2 = 9999999 < uVar7;
      uVar7 = uVar7 / 10000;
    } while (bVar2);
  }
  uVar5 = (uint)uVar6;
  uVar7 = uVar5;
  if (9 < uVar5) {
    uVar7 = (uint)((uVar6 & 0xffff) >> 2) / 0x19;
    *(undefined2 *)(acStack_18 + lVar4 + -4) =
         *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(uVar5 + uVar7 * -100 & 0xffff) * 2);
    lVar4 = lVar4 + -2;
  }
  if ((uVar3 == 0) || (uVar7 != 0)) {
    acStack_18[lVar4 + -3] = (&DAT_001c26c5)[(ulonglong)(uVar7 & 0xf) * 2];
    lVar4 = lVar4 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,acStack_18 + lVar4 + -2,10 - lVar4);
  return;
}


