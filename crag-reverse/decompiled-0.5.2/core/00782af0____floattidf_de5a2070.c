// 00782af0 __floattidf

longlong __floattidf(void)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong unaff_RSI;
  ulonglong unaff_RDI;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (longlong)unaff_RSI >> 0x3f;
  uVar6 = (unaff_RDI ^ uVar2) - uVar2;
  uVar4 = ((unaff_RSI ^ uVar2) - uVar2) - (ulonglong)((unaff_RDI ^ uVar2) < uVar2);
  uVar2 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar3 = 0x3f;
  if (uVar6 != 0) {
    for (; uVar6 >> uVar3 == 0; uVar3 = uVar3 - 1) {
    }
  }
  uVar3 = (uVar3 ^ 0x3f) + 0x40;
  if (uVar4 != 0) {
    uVar3 = uVar2 ^ 0x3f;
  }
  bVar1 = (byte)uVar3 & 0x3f;
  uVar7 = uVar6 << ((byte)uVar3 & 0x3f);
  uVar8 = uVar7;
  uVar2 = uVar4 << bVar1 | uVar6 >> 0x40 - bVar1;
  if ((uVar3 & 0x40) != 0) {
    uVar8 = 0;
    uVar2 = uVar7;
  }
  uVar4 = uVar2 << 0x35 | uVar8 >> 0xb;
  lVar5 = 0x47d0000000000000 - (uVar3 << 0x34);
  if (unaff_RDI == 0 && unaff_RSI == 0) {
    lVar5 = 0;
  }
  return ((uVar2 >> 0xb | unaff_RSI & 0x8000000000000000) + lVar5) -
         ((longlong)
          ((uVar8 & 0xffffffff | uVar4) - (ulonglong)((uint)(uVar4 >> 0x3f) & ~(uint)(uVar2 >> 0xb))
          ) >> 0x3f);
}


