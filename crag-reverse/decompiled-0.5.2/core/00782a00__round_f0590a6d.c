// 00782a00 round

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double round(double __x)

{
  ulonglong uVar1;
  uint uVar2;
  double dVar3;
  
  dVar3 = (double)(_DAT_00184280 & (ulonglong)__x | (ulonglong)DAT_001829e0) + __x;
  uVar2 = (uint)((ulonglong)dVar3 >> 0x34) & 0x7ff;
  if (uVar2 < 0x433) {
    uVar1 = 0x8000000000000000;
    if (0x3fe < uVar2) {
      uVar1 = -0x10000000000000 >> ((char)uVar2 + 1U & 0x3f);
    }
    dVar3 = (double)(uVar1 & (ulonglong)dVar3);
  }
  return dVar3;
}


