// 000bd460 fmt

/* <i16 as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

void __rustcall <i16_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 auStack_e [2];
  undefined4 local_c;
  
  uVar1 = *param_1;
  uVar2 = -uVar1;
  if ((short)-uVar1 < 0) {
    uVar2 = uVar1;
  }
  uVar4 = (uint)uVar2;
  uVar3 = (uint)uVar2;
  if (uVar3 < 1000) {
    lVar6 = 5;
    if (9 < uVar2) {
      uVar4 = (uVar2 >> 2) / 0x19;
      local_c = CONCAT22(*(undefined2 *)
                          (&DAT_00018001 + (ulonglong)(uVar3 + uVar4 * -100 & 0xffff) * 2),
                         (undefined2)local_c);
      lVar6 = 3;
    }
  }
  else {
    uVar4 = (uVar2 >> 4) / 0x271;
    uVar3 = uVar3 + uVar4 * -10000;
    uVar5 = (uVar3 & 0xffff) / 100;
    local_c = CONCAT22(*(undefined2 *)
                        (&DAT_00018001 + (ulonglong)(uVar3 + uVar5 * -100 & 0xffff) * 2),
                       *(undefined2 *)(&DAT_00018001 + (ulonglong)uVar5 * 2));
    lVar6 = 1;
  }
  if (uVar1 == 0 || (short)uVar4 != 0) {
    auStack_e[lVar6] = (&DAT_00018002)[(ulonglong)(uVar4 & 0xf) * 2];
    lVar6 = lVar6 + -1;
  }
  (*(code *)PTR_pad_integral_000c4770)(0,1,auStack_e + lVar6 + 1,5 - lVar6);
  return;
}


