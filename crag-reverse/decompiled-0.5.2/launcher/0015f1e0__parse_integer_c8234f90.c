// 0015f1e0 parse_integer

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_integer
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_integer(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  bool bVar9;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  if (uVar6 < uVar3) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    cVar2 = *(char *)(lVar4 + uVar6);
    uVar1 = uVar6 + 1;
    *(ulonglong *)(param_2 + 0x28) = uVar1;
    if (cVar2 == '0') {
      if ((uVar3 <= uVar1) || (9 < (byte)(*(char *)(lVar4 + uVar1) - 0x30U))) {
        parse_number(param_1,param_2,param_3,0);
        return;
      }
      local_20 = 0xd;
      uVar5 = peek_error(param_2,&local_20);
      goto LAB_0015f325;
    }
    if ((byte)(cVar2 - 0x31U) < 9) {
      uVar7 = (ulonglong)(byte)(cVar2 - 0x30);
      if (uVar1 < uVar3) {
        uVar6 = uVar6 + 2;
        do {
          bVar8 = *(char *)(lVar4 + -1 + uVar6) - 0x30;
          if (9 < bVar8) break;
          if ((0x1999999999999998 < uVar7) && ((uVar7 != 0x1999999999999999 || (5 < bVar8)))) {
            (*(code *)PTR_parse_long_integer_00219cd0)(uVar7,param_3);
            if ((int)local_20 == 1) {
              param_1[1] = local_18;
              *param_1 = 0xffffffffffffffff;
              return;
            }
            param_1[1] = local_18;
            *param_1 = 0;
            return;
          }
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          uVar7 = (ulonglong)bVar8 + uVar7 * 10;
          bVar9 = uVar6 != uVar3;
          uVar6 = uVar6 + 1;
        } while (bVar9);
      }
      parse_number(param_1,param_2,param_3);
      return;
    }
    local_20 = 0xd;
  }
  else {
    local_20 = 5;
  }
  uVar5 = error(param_2,&local_20);
LAB_0015f325:
  param_1[1] = uVar5;
  *param_1 = 0xffffffffffffffff;
  return;
}


