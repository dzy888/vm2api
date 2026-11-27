// 006befb0 match_uri_vectored

/* httparse[622c0e90ae307373]::simd::runtime::match_uri_vectored */

void __rustcall httparse[622c0e90ae307373]::simd::runtime::match_uri_vectored(longlong param_1)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  puVar1 = PTR_CACHE_0079a260;
  bVar2 = RUNTIME_FEATURE;
  if (RUNTIME_FEATURE == 0) {
    if (*(longlong *)PTR_CACHE_0079a260 == 0) {
      sVar3 = (*(code *)PTR_detect_and_initialize_0079a268)();
    }
    else {
      sVar3 = (short)*(longlong *)PTR_CACHE_0079a260;
    }
    bVar2 = 1;
    if (-1 < sVar3) {
      uVar6 = *(ulonglong *)puVar1;
      if (uVar6 == 0) {
        uVar6 = (*(code *)PTR_detect_and_initialize_0079a268)();
      }
      bVar2 = (byte)(uVar6 >> 0xb) & 1 ^ 3;
    }
  }
  RUNTIME_FEATURE = bVar2;
  if (RUNTIME_FEATURE == 1) {
    avx2::match_uri_vectored();
    return;
  }
  if (RUNTIME_FEATURE == 2) {
    sse42::match_uri_vectored();
    return;
  }
  puVar4 = *(ulonglong **)(param_1 + 0x10);
  do {
    if ((ulonglong)((longlong)*(ulonglong **)(param_1 + 8) - (longlong)puVar4) < 8) {
LAB_006bf129:
      if ((*(ulonglong **)(param_1 + 8) <= puVar4) || (URI_MAP[(byte)*puVar4] != '\x01')) {
        return;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 1);
    }
    else {
      uVar6 = *puVar4;
      uVar6 = ((uVar6 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff | uVar6 + 0xdedededededededf) &
              ~uVar6;
      if ((uVar6 & 0x8080808080808080) != 0) {
        if ((char)uVar6 < '\0') {
          lVar5 = 0;
        }
        else {
          lVar5 = 1;
          if (-1 < (short)uVar6) {
            lVar5 = 2;
            if (((((uVar6 & 0x800000) == 0) && (lVar5 = 3, -1 < (int)uVar6)) &&
                (lVar5 = 4, (uVar6 >> 0x27 & 1) == 0)) && (lVar5 = 5, (uVar6 >> 0x2f & 1) == 0)) {
              lVar5 = 7 - (ulonglong)((uVar6 >> 0x37 & 1) != 0);
            }
          }
        }
        puVar4 = (ulonglong *)((longlong)puVar4 + lVar5);
        *(ulonglong **)(param_1 + 0x10) = puVar4;
        goto LAB_006bf129;
      }
      puVar4 = puVar4 + 1;
    }
    *(ulonglong **)(param_1 + 0x10) = puVar4;
  } while( true );
}


