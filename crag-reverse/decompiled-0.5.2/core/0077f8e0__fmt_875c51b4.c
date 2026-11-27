// 0077f8e0 fmt

/* <u8 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <u8_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(byte *param_1)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auStack_c [2];
  undefined2 local_a;
  
  bVar1 = *param_1;
  lVar2 = 3;
  bVar3 = bVar1;
  if (9 < bVar1) {
    bVar3 = (byte)((uint)bVar1 + (uint)bVar1 * 0x28 >> 0xc);
    local_a = *(undefined2 *)(&DAT_001c26c4 + (ulonglong)(byte)(bVar1 + bVar3 * -100) * 2);
    lVar2 = 1;
  }
  if (bVar1 == 0 || bVar3 != 0) {
    auStack_c[lVar2] = (&DAT_001c26c5)[(ulonglong)bVar3 * 2];
    lVar2 = lVar2 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_c + lVar2 + 1,3 - lVar2);
  return;
}


