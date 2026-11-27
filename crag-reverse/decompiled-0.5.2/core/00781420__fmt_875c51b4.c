// 00781420 fmt

/* <u16 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <u16_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_e [2];
  undefined4 local_c;
  
  uVar1 = *param_1;
  uVar2 = (uint)uVar1;
  if (uVar2 < 1000) {
    lVar4 = 5;
    if (9 < uVar1) {
      uVar2 = (uVar1 >> 2) / 0x19;
      local_c = CONCAT22(*(undefined2 *)
                          (&DAT_001c26c4 + (ulonglong)((uint)uVar1 + uVar2 * -100 & 0xffff) * 2),
                         (undefined2)local_c);
      lVar4 = 3;
    }
  }
  else {
    uVar2 = (uVar1 >> 4) / 0x271;
    uVar5 = (uint)uVar1 + uVar2 * -10000;
    uVar3 = (uVar5 & 0xffff) / 100;
    local_c = CONCAT22(*(undefined2 *)
                        (&DAT_001c26c4 + (ulonglong)(uVar5 + uVar3 * -100 & 0xffff) * 2),
                       *(undefined2 *)(&DAT_001c26c4 + (ulonglong)uVar3 * 2));
    lVar4 = 1;
  }
  if (uVar1 == 0 || (short)uVar2 != 0) {
    auStack_e[lVar4] = (&DAT_001c26c5)[(ulonglong)(uVar2 & 0xf) * 2];
    lVar4 = lVar4 + -1;
  }
  (*(code *)PTR_pad_integral_0079b388)(0,1,auStack_e + lVar4 + 1,5 - lVar4);
  return;
}


