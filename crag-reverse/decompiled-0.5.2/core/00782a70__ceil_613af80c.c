// 00782a70 ceil

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double ceil(double __x)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = (uint)((ulonglong)__x >> 0x34) & 0x7ff;
  if (uVar2 < 0x433) {
    if (uVar2 < 0x3ff) {
      if ((longlong)__x < 0) {
        return DAT_001852d8;
      }
      if (__x != 0.0) {
        return _s__00185250;
      }
    }
    else {
      bVar1 = (char)uVar2 + 1;
      uVar3 = 0xfffffffffffff >> (bVar1 & 0x3f);
      if ((uVar3 & (ulonglong)__x) != 0) {
        if ((longlong)__x < 0) {
          uVar3 = 0;
        }
        __x = (double)(-0x10000000000000 >> (bVar1 & 0x3f) & uVar3 + (longlong)__x);
      }
    }
  }
  return __x;
}


