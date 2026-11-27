// 00782ba0 trunc

double trunc(double __x)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulonglong)__x >> 0x34) & 0x7ff;
  if (uVar2 < 0x433) {
    uVar1 = 0x8000000000000000;
    if (0x3fe < uVar2) {
      uVar1 = -0x10000000000000 >> ((char)uVar2 + 1U & 0x3f);
    }
    __x = (double)(uVar1 & (ulonglong)__x);
  }
  return __x;
}


