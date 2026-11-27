// 007640b0 fmt

/* WARNING: Switch with 1 destination removed at 0x007640c4 */
/* WARNING: Switch with 1 destination removed at 0x007640ca */
/* WARNING: Switch with 1 destination removed at 0x007640d0 */
/* <&i16 as core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt */

void __rustcall
<&i16_as_core[c0acaeba6ab4c2e0]::fmt::Debug>::fmt(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e [2];
  undefined4 uStack_c;
  
  puVar2 = (ushort *)*param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) != 0) {
    lVar7 = 0;
    uVar4 = (uint)*puVar2;
    do {
      lVar8 = lVar7;
      uVar5 = uVar4 >> 4;
      auStack_e[lVar8 + 5] = "0123456789abcdef"[uVar4 & 0xf];
      lVar7 = lVar8 + -1;
      uVar4 = uVar5;
    } while (uVar5 != 0);
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_e + lVar8 + 5,-(lVar8 + -1));
    return;
  }
  if ((*(uint *)(param_2 + 0x10) & 0x4000000) != 0) {
    lVar7 = 0;
    uVar4 = (uint)*puVar2;
    do {
      lVar8 = lVar7;
      uVar5 = uVar4 >> 4;
      auStack_e[lVar8 + 5] = (&DAT_001829d0)[uVar4 & 0xf];
      lVar7 = lVar8 + -1;
      uVar4 = uVar5;
    } while (uVar5 != 0);
    (*(code *)PTR_pad_integral_0079b388)(2,&DAT_001c6297,auStack_e + lVar8 + 5,-(lVar8 + -1));
    return;
  }
  uVar1 = *puVar2;
  uVar3 = -uVar1;
  if ((short)-uVar1 < 0) {
    uVar3 = uVar1;
  }
  uVar5 = (uint)uVar3;
  uVar4 = (uint)uVar3;
  if (uVar4 < 1000) {
    lVar7 = 5;
    if (9 < uVar3) {
      uVar5 = (uVar3 >> 2) / 0x19;
      uStack_c = CONCAT22(*(undefined2 *)
                           (&DAT_001c26c4 + (ulonglong)(uVar4 + uVar5 * -100 & 0xffff) * 2),
                          (undefined2)uStack_c);
      lVar7 = 3;
    }
  }
  else {
    uVar5 = (uVar3 >> 4) / 0x271;
    uVar4 = uVar4 + uVar5 * -10000;
    uVar6 = (uVar4 & 0xffff) / 100;
    uStack_c = CONCAT22(*(undefined2 *)
                         (&DAT_001c26c4 + (ulonglong)(uVar4 + uVar6 * -100 & 0xffff) * 2),
                        *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar6 * 2));
    lVar7 = 1;
  }
  if (uVar1 == 0 || (short)uVar5 != 0) {
    auStack_e[lVar7] = (&DAT_001c26c5)[(ulonglong)(uVar5 & 0xf) * 2];
    lVar7 = lVar7 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_e + lVar7 + 1,5 - lVar7);
  return;
}


