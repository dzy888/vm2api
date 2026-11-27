// 006bdaa0 parse_version

/* httparse[622c0e90ae307373]::parse_version */

ulonglong __rustcall httparse[622c0e90ae307373]::parse_version(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined6 uVar6;
  uint uVar7;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar3 = *(longlong **)(param_1 + 0x10);
  uVar5 = (longlong)plVar2 - (longlong)plVar3;
  if (7 < uVar5) {
    lVar4 = *plVar3;
    *(longlong **)(param_1 + 0x10) = plVar3 + 1;
    uVar7 = 0x602;
    if (lVar4 == 0x312e312f50545448) {
      uVar7 = 0x100;
    }
    uVar5 = 0;
    if (lVar4 != 0x302e312f50545448) {
      uVar5 = (ulonglong)uVar7;
    }
    return uVar5;
  }
  if (plVar3 < plVar2) {
    lVar4 = *plVar3;
    *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 1U);
    uVar6 = (undefined6)(uVar5 >> 0x10);
    uVar5 = CONCAT62(uVar6,0x602);
    if ((char)lVar4 != 'H') {
      return uVar5;
    }
    if ((longlong *)((longlong)plVar3 + 1U) < plVar2) {
      cVar1 = *(char *)((longlong)plVar3 + 1);
      *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 2U);
      if (cVar1 != 'T') {
        return uVar5;
      }
      if ((longlong *)((longlong)plVar3 + 2U) < plVar2) {
        cVar1 = *(char *)((longlong)plVar3 + 2);
        *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 3U);
        if (cVar1 != 'T') {
          return uVar5;
        }
        if ((longlong *)((longlong)plVar3 + 3U) < plVar2) {
          cVar1 = *(char *)((longlong)plVar3 + 3);
          *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 4U);
          if (cVar1 != 'P') {
            return uVar5;
          }
          if ((longlong *)((longlong)plVar3 + 4U) < plVar2) {
            cVar1 = *(char *)((longlong)plVar3 + 4);
            *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 5U);
            if (cVar1 != '/') {
              return uVar5;
            }
            if ((longlong *)((longlong)plVar3 + 5U) < plVar2) {
              cVar1 = *(char *)((longlong)plVar3 + 5);
              *(longlong **)(param_1 + 0x10) = (longlong *)((longlong)plVar3 + 6U);
              if (cVar1 != '1') {
                return uVar5;
              }
              if (plVar2 <= (longlong *)((longlong)plVar3 + 6U)) {
                return CONCAT62(uVar6,0x601);
              }
              cVar1 = *(char *)((longlong)plVar3 + 6);
              *(char **)(param_1 + 0x10) = (char *)((longlong)plVar3 + 7);
              uVar5 = 0x602;
              if (cVar1 == '.') {
                uVar5 = 1;
              }
              return uVar5;
            }
          }
        }
      }
    }
  }
  return CONCAT62((int6)(uVar5 >> 0x10),0x601);
}


