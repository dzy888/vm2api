// 004d6200 <[char;2:usize]>

/* <str>::rfind::<[char; 2usize]> */

bool __rustcall <str>::rfind::<[char_2:usize]>(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar5 = param_2 + param_1;
  while (lVar4 = lVar5, param_1 != lVar4) {
    uVar3 = (uint)*(char *)(lVar4 + -1);
    if ((int)uVar3 < 0) {
      bVar1 = *(byte *)(lVar4 + -2);
      if ((char)bVar1 < -0x40) {
        bVar2 = *(byte *)(lVar4 + -3);
        if ((char)bVar2 < -0x40) {
          lVar5 = lVar4 + -4;
          uVar6 = bVar2 & 0x3f | (*(byte *)(lVar4 + -4) & 7) << 6;
        }
        else {
          lVar5 = lVar4 + -3;
          uVar6 = bVar2 & 0xf;
        }
        uVar6 = bVar1 & 0x3f | uVar6 << 6;
      }
      else {
        lVar5 = lVar4 + -2;
        uVar6 = bVar1 & 0x1f;
      }
      uVar3 = uVar3 & 0x3f | uVar6 << 6;
    }
    else {
      lVar5 = lVar4 + -1;
    }
    if ((uVar3 == 0x2d) || (uVar3 == 0x2b)) break;
  }
  return param_1 != lVar4;
}


