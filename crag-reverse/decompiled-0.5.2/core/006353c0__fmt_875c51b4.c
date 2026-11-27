// 006353c0 fmt

/* WARNING: Switch with 1 destination removed at 0x006353d4 */
/* WARNING: Switch with 1 destination removed at 0x006353da */
/* WARNING: Switch with 1 destination removed at 0x006353e0 */
/* <&u8 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&u8_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c [2];
  undefined2 uStack_a;
  
  pbVar1 = (byte *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar4 = 0;
    bVar2 = *pbVar1;
    do {
      lVar5 = lVar4;
      bVar3 = bVar2 >> 4;
      auStack_c[lVar5 + 3] = "0123456789abcdef"[bVar2 & 0xf];
      lVar4 = lVar5 + -1;
      bVar2 = bVar3;
    } while (bVar3 != 0);
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_c + lVar5 + 3,-(lVar5 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar4 = 0;
    bVar2 = *pbVar1;
    do {
      lVar5 = lVar4;
      bVar3 = bVar2 >> 4;
      auStack_c[lVar5 + 3] = (&DAT_001829d0)[bVar2 & 0xf];
      lVar4 = lVar5 + -1;
      bVar2 = bVar3;
    } while (bVar3 != 0);
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_c + lVar5 + 3,-(lVar5 + -1));
    return;
  }
  bVar2 = *pbVar1;
  lVar4 = 3;
  bVar3 = bVar2;
  if (9 < bVar2) {
    bVar3 = (byte)((uint)bVar2 + (uint)bVar2 * 0x28 >> 0xc);
    uStack_a = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(byte)(bVar2 + bVar3 * -100) * 2);
    lVar4 = 1;
  }
  if (bVar2 == 0 || bVar3 != 0) {
    auStack_c[lVar4] = (&DAT_001c26c5)[(ulonglong)bVar3 * 2];
    lVar4 = lVar4 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_c + lVar4 + 1,3 - lVar4);
  return;
}


