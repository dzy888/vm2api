// 005f8f90 <<char>::is_whitespace>

/* <str>::trim_end_matches::<<char>::is_whitespace> */

void __rustcall <str>::trim_end_matches::<<char>::is_whitespace>(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  if (param_2 != 0) {
    param_2 = param_2 + param_1;
    do {
      uVar3 = (uint)*(char *)(param_2 + -1);
      if ((int)uVar3 < 0) {
        bVar5 = *(byte *)(param_2 + -2);
        if ((char)bVar5 < -0x40) {
          bVar1 = *(byte *)(param_2 + -3);
          if ((char)bVar1 < -0x40) {
            lVar2 = param_2 + -4;
            uVar4 = bVar1 & 0x3f | (*(byte *)(param_2 + -4) & 7) << 6;
          }
          else {
            lVar2 = param_2 + -3;
            uVar4 = bVar1 & 0xf;
          }
          uVar4 = bVar5 & 0x3f | uVar4 << 6;
        }
        else {
          lVar2 = param_2 + -2;
          uVar4 = bVar5 & 0x1f;
        }
        uVar3 = uVar3 & 0x3f | uVar4 << 6;
        param_2 = lVar2;
      }
      else {
        param_2 = param_2 + -1;
      }
      if ((4 < uVar3 - 9) && (uVar3 != 0x20)) {
        if (uVar3 < 0x85) {
          return;
        }
        uVar4 = uVar3 >> 8;
        if (uVar4 < 0x20) {
          if (uVar4 == 0) {
            bVar5 = PTR_WHITESPACE_MAP_00799868[(ulonglong)uVar3 & 0xff];
          }
          else {
            if (uVar4 != 0x16) {
              return;
            }
            bVar5 = uVar3 == 0x1680;
          }
        }
        else if (uVar4 == 0x20) {
          bVar5 = (byte)PTR_WHITESPACE_MAP_00799868[(ulonglong)uVar3 & 0xff] >> 1;
        }
        else {
          if (uVar4 != 0x30) {
            return;
          }
          bVar5 = uVar3 == 0x3000;
        }
        if ((bVar5 & 1) == 0) {
          return;
        }
      }
    } while (param_1 != param_2);
  }
  return;
}


