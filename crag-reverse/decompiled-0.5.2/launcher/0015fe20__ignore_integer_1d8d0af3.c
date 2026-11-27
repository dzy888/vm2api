// 0015fe20 ignore_integer

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::ignore_integer
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
ignore_integer(longlong param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined8 local_18 [3];
  
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  uVar6 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 <= uVar6) {
LAB_00160055:
    local_18[0] = 0xd;
    uVar5 = error(param_1,local_18);
    return uVar5;
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  cVar1 = *(char *)(lVar4 + uVar6);
  uVar6 = uVar6 + 1;
  *(ulonglong *)(param_1 + 0x28) = uVar6;
  if (cVar1 == '0') {
    if ((uVar6 < uVar3) && ((byte)(*(char *)(lVar4 + uVar6) - 0x30U) < 10)) goto LAB_0015fe57;
  }
  else {
    if (8 < (byte)(cVar1 - 0x31U)) goto LAB_00160055;
    if (uVar6 < uVar3) {
      while ((byte)(*(char *)(lVar4 + uVar6) - 0x30U) < 10) {
        uVar6 = uVar6 + 1;
        *(ulonglong *)(param_1 + 0x28) = uVar6;
        if (uVar3 == uVar6) {
          return 0;
        }
      }
    }
  }
  if (uVar6 < uVar3) {
    cVar1 = *(char *)(lVar4 + uVar6);
    if ((cVar1 == 'e') || (cVar1 == 'E')) {
      uVar7 = uVar6 + 1;
      *(ulonglong *)(param_1 + 0x28) = uVar7;
      if ((uVar7 < uVar3) &&
         ((*(char *)(lVar4 + uVar7) == '+' || (*(char *)(lVar4 + uVar7) == '-')))) {
        uVar7 = uVar6 + 2;
        *(ulonglong *)(param_1 + 0x28) = uVar7;
      }
      if (uVar7 < uVar3) {
        cVar1 = *(char *)(lVar4 + uVar7);
        *(ulonglong *)(param_1 + 0x28) = uVar7 + 1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          if (uVar3 <= uVar7 + 1) {
            return 0;
          }
          uVar6 = uVar7 + 2;
          do {
            if (9 < (byte)(*(char *)(lVar4 + -1 + uVar6) - 0x30U)) {
              return 0;
            }
            *(ulonglong *)(param_1 + 0x28) = uVar6;
            bVar8 = uVar6 != uVar3;
            uVar6 = uVar6 + 1;
          } while (bVar8);
          return 0;
        }
      }
      goto LAB_00160055;
    }
    if (cVar1 == '.') {
      uVar7 = uVar6 + 1;
      *(ulonglong *)(param_1 + 0x28) = uVar7;
      if ((uVar3 <= uVar7) || (9 < (byte)(*(char *)(lVar4 + uVar7) - 0x30U))) {
LAB_0015fe57:
        local_18[0] = 0xd;
        uVar5 = peek_error(param_1,local_18);
        return uVar5;
      }
      uVar6 = uVar6 + 3;
      do {
        uVar7 = uVar6;
        if ((2 - uVar3) + uVar7 == 3) {
          *(ulonglong *)(param_1 + 0x28) = uVar3;
          return 0;
        }
        bVar2 = *(byte *)(lVar4 + -1 + uVar7);
        uVar6 = uVar7 + 1;
      } while ((byte)(bVar2 - 0x30) < 10);
      *(ulonglong *)(param_1 + 0x28) = uVar7 - 1;
      if ((bVar2 | 0x20) == 0x65) {
        *(ulonglong *)(param_1 + 0x28) = uVar7;
        if ((uVar7 < uVar3) &&
           ((cVar1 = *(char *)(lVar4 + -1 + uVar6), cVar1 == '+' || (cVar1 == '-')))) {
          *(ulonglong *)(param_1 + 0x28) = uVar6;
          uVar7 = uVar6;
        }
        if (uVar7 < uVar3) {
          cVar1 = *(char *)(lVar4 + uVar7);
          *(ulonglong *)(param_1 + 0x28) = uVar7 + 1;
          if ((byte)(cVar1 - 0x30U) < 10) {
            if (uVar3 <= uVar7 + 1) {
              return 0;
            }
            uVar6 = uVar7 + 2;
            do {
              if (9 < (byte)(*(char *)(lVar4 + -1 + uVar6) - 0x30U)) {
                return 0;
              }
              *(ulonglong *)(param_1 + 0x28) = uVar6;
              bVar8 = uVar6 != uVar3;
              uVar6 = uVar6 + 1;
            } while (bVar8);
            return 0;
          }
        }
        goto LAB_00160055;
      }
    }
  }
  return 0;
}


