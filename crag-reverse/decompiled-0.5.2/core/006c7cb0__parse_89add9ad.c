// 006c7cb0 parse

/* <http[56314f485c23ccf6]::uri::scheme::Scheme2<usize>>::parse */

void __rustcall
<http[56314f485c23ccf6]::uri::scheme::Scheme2<usize>>::parse
          (undefined2 *param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_3 < 7) {
    if (param_3 < 4) goto LAB_006c7e05;
  }
  else if ((((byte)(((byte)(*param_2 + 0xbf) < 0x1a) << 5 | *param_2) == 0x68) &&
           ((byte)(((byte)(param_2[1] + 0xbf) < 0x1a) << 5 | param_2[1]) == 0x74)) &&
          ((byte)(((byte)(param_2[2] + 0xbf) < 0x1a) << 5 | param_2[2]) == 0x74)) {
    if ((((byte)(((byte)(param_2[3] + 0xbf) < 0x1a) << 5 | param_2[3]) == 0x70) &&
        ((byte)(((byte)(param_2[4] + 0xbf) < 0x1a) << 5 | param_2[4]) == 0x3a)) &&
       (((byte)(((byte)(param_2[5] + 0xbf) < 0x1a) << 5 | param_2[5]) == 0x2f &&
        ((byte)(((byte)(param_2[6] + 0xbf) < 0x1a) << 5 | param_2[6]) == 0x2f)))) {
      *param_1 = 1;
      return;
    }
    if (((param_3 != 7) && ((byte)(((byte)(param_2[3] + 0xbf) < 0x1a) << 5 | param_2[3]) == 0x70))
       && (((byte)(((byte)(param_2[4] + 0xbf) < 0x1a) << 5 | param_2[4]) == 0x73 &&
           ((((byte)(((byte)(param_2[5] + 0xbf) < 0x1a) << 5 | param_2[5]) == 0x3a &&
             ((byte)(((byte)(param_2[6] + 0xbf) < 0x1a) << 5 | param_2[6]) == 0x2f)) &&
            ((byte)(((byte)(param_2[7] + 0xbf) < 0x1a) << 5 | param_2[7]) == 0x2f)))))) {
      *param_1 = 0x101;
      return;
    }
  }
  uVar2 = 0xffffffffffffffff;
  do {
    uVar1 = uVar2;
    if ((uVar1 - param_3 == -1) || ((&DAT_001a946c)[param_2[uVar1 + 1]] == '\0')) goto LAB_006c7e05;
    uVar2 = uVar1 + 1;
  } while ((&DAT_001a946c)[param_2[uVar1 + 1]] != ':');
  if ((uVar1 + 4 <= param_3) && (*(short *)(param_2 + uVar1 + 2) == 0x2f2f)) {
    if (uVar2 < 0x41) {
      *(undefined1 *)param_1 = 2;
      *(ulonglong *)(param_1 + 4) = uVar2;
      return;
    }
    *param_1 = 0xbff;
    return;
  }
LAB_006c7e05:
  *(undefined1 *)param_1 = 0;
  return;
}


