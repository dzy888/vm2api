// 000b8470 memchr_aligned

/* core[c0acaeba6ab4c2e0]::slice::memchr::memchr_aligned */

undefined1  [16] __rustcall
core[c0acaeba6ab4c2e0]::slice::memchr::memchr_aligned
          (byte param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = (param_2 + 7U & 0xfffffffffffffff8) - param_2;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        if (*(byte *)(param_2 + uVar3) == param_1) {
          auVar6._8_8_ = uVar3;
          auVar6._0_8_ = 1;
          return auVar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar2 != uVar3);
    }
    if (param_3 - 0x10 < uVar2) goto joined_r0x000b851a;
  }
  do {
    uVar3 = *(ulonglong *)(param_2 + uVar2) ^ (ulonglong)param_1 * 0x101010101010101;
    uVar4 = *(ulonglong *)(param_2 + 8 + uVar2) ^ (ulonglong)param_1 * 0x101010101010101;
    if (((0x101010101010100 - uVar3 | uVar3) & 0x8080808080808080 &
        (0x101010101010100 - uVar4 | uVar4)) != 0x8080808080808080) break;
    uVar2 = uVar2 + 0x10;
  } while (uVar2 <= param_3 - 0x10);
joined_r0x000b851a:
  while( true ) {
    if (param_3 == uVar2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2;
      return auVar1 << 0x40;
    }
    if (*(byte *)(param_2 + uVar2) == param_1) break;
    uVar2 = uVar2 + 1;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = 1;
  return auVar5;
}


