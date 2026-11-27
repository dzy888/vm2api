// 007778a0 round

/* <core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::round */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::num::imp::dec2flt::decimal_seq::DecimalSeq>::round(ulonglong *param_1)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *param_1;
  if (uVar3 == 0) {
    return 0;
  }
  uVar2 = (uint)param_1[0x61];
  uVar6 = (ulonglong)(int)uVar2;
  if ((longlong)uVar6 < 0) {
    return 0;
  }
  if (0x12 < uVar2) {
    return -1;
  }
  if (uVar2 == 0) {
    lVar5 = 0;
    goto LAB_00777958;
  }
  if (uVar2 == 1) {
    uVar7 = 0;
    lVar5 = 0;
    if (uVar3 == 0) goto LAB_00777958;
  }
  else {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar7 = uVar4;
      lVar5 = lVar5 * 10;
      if (uVar7 < uVar3) {
        lVar5 = lVar5 + (ulonglong)*(byte *)((longlong)param_1 + uVar7 + 8);
      }
      lVar5 = lVar5 * 10;
      if (uVar7 + 1 < uVar3) {
        lVar5 = lVar5 + (ulonglong)*(byte *)((longlong)param_1 + uVar7 + 9);
      }
      uVar4 = uVar7 + 2;
    } while (uVar7 + 2 != (ulonglong)(uVar2 & 0x1e));
    if ((uVar6 & 1) == 0) goto LAB_00777958;
    uVar7 = uVar7 + 2;
    lVar5 = lVar5 * 10;
    if (uVar3 <= uVar7) goto LAB_00777958;
  }
  lVar5 = lVar5 + (ulonglong)*(byte *)((longlong)param_1 + uVar7 + 8);
LAB_00777958:
  if (uVar6 < uVar3) {
    bVar1 = *(byte *)((longlong)param_1 + uVar6 + 8);
    if (uVar6 + 1 == uVar3 && bVar1 == 5) {
      if (*(char *)((longlong)param_1 + 0x30c) == '\0') {
        if (uVar2 == 0) {
          return lVar5;
        }
        if ((*(byte *)((longlong)param_1 + uVar6 + 7) & 1) == 0) {
          return lVar5;
        }
      }
    }
    else if (bVar1 < 5) {
      return lVar5;
    }
    lVar5 = lVar5 + 1;
  }
  return lVar5;
}


