// 000a4ee0 fmt

/* WARNING: Switch with 1 destination removed at 0x000a4ef4 */
/* WARNING: Switch with 1 destination removed at 0x000a4efa */
/* WARNING: Switch with 1 destination removed at 0x000a4f00 */
/* <&i32 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&i32_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uStack_20;
  char acStack_18 [8];
  
  puVar1 = (uint *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar4 = 0;
    uVar3 = *puVar1;
    do {
      lVar6 = lVar4;
      uVar2 = uVar3 >> 4;
      acStack_18[lVar6 + 0xf] = (&DAT_00009100)[uVar3 & 0xf];
      lVar4 = lVar6 + -1;
      uVar3 = uVar2;
    } while (uVar2 != 0);
    uStack_20 = 0xbe5f9;
    (*(code *)PTR_pad_integral_000c4770)(2,"0x",acStack_18 + lVar6 + 0xf,-(lVar6 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar4 = 0;
    uVar3 = *puVar1;
    do {
      lVar6 = lVar4;
      uVar2 = uVar3 >> 4;
      acStack_18[lVar6 + 0xf] = "0123456789ABCDEF"[uVar3 & 0xf];
      lVar4 = lVar6 + -1;
      uVar3 = uVar2;
    } while (uVar2 != 0);
    uStack_20 = 0xbe6b9;
    (*(code *)PTR_pad_integral_000c4770)(2,"0x",acStack_18 + lVar6 + 0xf,-(lVar6 + -1));
    return;
  }
  uVar3 = *puVar1;
  uVar2 = -uVar3;
  if ((int)-uVar3 < 0) {
    uVar2 = uVar3;
  }
  lVar4 = 10;
  if (999 < uVar2) {
    do {
      uVar5 = uVar2;
      *(uint *)(acStack_18 + lVar4 + -6) =
           CONCAT22(*(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar5 % 10000) % 100) * 2),
                    *(undefined2 *)(&DAT_00018001 + (ulonglong)((uVar5 % 10000) / 100) * 2));
      lVar4 = lVar4 + -4;
      uVar2 = uVar5 / 10000;
    } while (9999999 < uVar5);
    uVar2 = uVar5 / 10000;
  }
  uVar5 = uVar2;
  if (9 < uVar2) {
    uVar5 = (uVar2 & 0xffff) / 100;
    *(undefined2 *)(acStack_18 + lVar4 + -4) =
         *(undefined2 *)(&DAT_00018001 + (ulonglong)(uVar2 + uVar5 * -100 & 0xffff) * 2);
    lVar4 = lVar4 + -2;
  }
  if ((uVar3 == 0) || (uVar5 != 0)) {
    acStack_18[lVar4 + -3] = (&DAT_00018002)[(ulonglong)(uVar5 & 0xf) * 2];
    lVar4 = lVar4 + -1;
  }
  (*(code *)PTR_pad_integral_000c4770)(0,1,acStack_18 + lVar4 + -2,10 - lVar4);
  return;
}


