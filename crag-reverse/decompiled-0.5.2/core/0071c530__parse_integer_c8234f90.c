// 0071c530 parse_integer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_integer
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_integer(ulonglong *param_1,longlong param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 <= uVar3) {
    local_20 = 5;
LAB_0071c6c8:
    local_18 = error(param_2,&local_20);
LAB_0071c6f6:
    param_1[1] = local_18;
    *param_1 = 0xffffffffffffffff;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  cVar1 = *(char *)(lVar2 + uVar3);
  uVar3 = uVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar3;
  if (cVar1 == '0') {
    if (uVar5 <= uVar3) {
LAB_0071c75f:
      local_18 = (ulonglong)(param_3 == 0) << 0x3f;
      uVar5 = (ulonglong)param_3;
LAB_0071c76d:
      *param_1 = uVar5;
      param_1[1] = local_18;
      return;
    }
    cVar1 = *(char *)(lVar2 + uVar3);
    if ((byte)(cVar1 - 0x30U) < 10) {
      local_20 = 0xd;
      local_18 = peek_error(param_2,&local_20);
      goto LAB_0071c6f6;
    }
    if (cVar1 == '.') {
      parse_decimal(&local_20,param_2,param_3,0,0);
    }
    else {
      if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_0071c75f;
      parse_exponent(&local_20,param_2,param_3,0,0);
    }
    if ((char)local_20 == '\0') {
      uVar5 = 0;
      goto LAB_0071c76d;
    }
    goto LAB_0071c6f6;
  }
  if (8 < (byte)(cVar1 - 0x31U)) {
    local_20 = 0xd;
    goto LAB_0071c6c8;
  }
  uVar4 = (ulonglong)(byte)(cVar1 - 0x30);
  if (uVar3 < uVar5) {
    do {
      bVar6 = *(char *)(lVar2 + uVar3) - 0x30;
      if (9 < bVar6) goto LAB_0071c62d;
      if ((0x1999999999999998 < uVar4) && ((uVar4 != 0x1999999999999999 || (5 < bVar6)))) {
        (*(code *)PTR_parse_long_integer_00799928)(uVar4,param_3);
        if ((int)local_20 == 1) {
          param_1[1] = local_18;
          *param_1 = 0xffffffffffffffff;
          return;
        }
        param_1[1] = local_18;
        *param_1 = 0;
        return;
      }
      uVar3 = uVar3 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar3;
      uVar4 = (ulonglong)bVar6 + uVar4 * 10;
    } while (uVar5 != uVar3);
LAB_0071c66a:
    uVar5 = 1;
    if (param_3 != 0) {
      local_18 = uVar4;
      goto LAB_0071c70e;
    }
    local_18 = -uVar4;
    if ((longlong)local_18 < 0) {
      uVar5 = 2;
      goto LAB_0071c70e;
    }
    auVar7._8_4_ = (int)(uVar4 >> 0x20);
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = DAT_00182b10._4_4_;
    local_18 = (ulonglong)
               ((auVar7._8_8_ - _UNK_00182568) +
               ((double)CONCAT44((undefined4)DAT_00182b10,(int)uVar4) - _DAT_00182560)) |
               0x8000000000000000;
  }
  else {
LAB_0071c62d:
    if (uVar5 <= uVar3) goto LAB_0071c66a;
    cVar1 = *(char *)(lVar2 + uVar3);
    if (cVar1 == '.') {
      parse_decimal(&local_20,param_2,param_3,uVar4,0);
    }
    else {
      if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_0071c66a;
      parse_exponent(&local_20,param_2,param_3,uVar4,0);
    }
    if ((char)local_20 != '\0') goto LAB_0071c6f6;
  }
  uVar5 = 0;
LAB_0071c70e:
  *param_1 = uVar5;
  param_1[1] = local_18;
  return;
}


