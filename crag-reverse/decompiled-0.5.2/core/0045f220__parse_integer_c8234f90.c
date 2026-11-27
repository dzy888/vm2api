// 0045f220 parse_integer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::parse_integer
    */

ulonglong * __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
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
  
  uVar4 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 <= uVar3) {
    local_20 = 5;
LAB_0045f3b3:
    local_18 = error(param_2,&local_20);
LAB_0045f3e1:
    param_1[1] = local_18;
    *param_1 = 0xffffffffffffffff;
    return param_1;
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  cVar1 = *(char *)(lVar2 + uVar3);
  uVar3 = uVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar3;
  if (cVar1 == '0') {
    if (uVar3 < uVar4) {
      cVar1 = *(char *)(lVar2 + uVar3);
      if ((byte)(cVar1 - 0x30U) < 10) {
        local_20 = 0xd;
        local_18 = peek_error(param_2,&local_20);
        goto LAB_0045f3e1;
      }
      if (cVar1 == '.') {
        parse_decimal(&local_20,param_2,param_3,0,0);
      }
      else {
        if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_0045f448;
        parse_exponent(&local_20,param_2,param_3,0,0);
      }
      if ((char)local_20 != '\0') goto LAB_0045f3e1;
      uVar4 = 0;
    }
    else {
LAB_0045f448:
      local_18 = (ulonglong)(param_3 == 0) << 0x3f;
      uVar4 = (ulonglong)param_3;
    }
    *param_1 = uVar4;
    goto LAB_0045f459;
  }
  if (8 < (byte)(cVar1 - 0x31U)) {
    local_20 = 0xd;
    goto LAB_0045f3b3;
  }
  uVar5 = (ulonglong)(byte)(cVar1 - 0x30);
  if (uVar3 < uVar4) {
    do {
      bVar6 = *(char *)(lVar2 + uVar3) - 0x30;
      if (9 < bVar6) goto LAB_0045f318;
      if ((0x1999999999999998 < uVar5) && ((uVar5 != 0x1999999999999999 || (5 < bVar6)))) {
        parse_long_integer(&local_20,param_2,param_3);
        if ((int)local_20 == 1) {
          param_1[1] = local_18;
          uVar4 = 0xffffffffffffffff;
        }
        else {
          param_1[1] = local_18;
          uVar4 = 0;
        }
        *param_1 = uVar4;
        return param_1;
      }
      uVar3 = uVar3 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar3;
      uVar5 = (ulonglong)bVar6 + uVar5 * 10;
    } while (uVar4 != uVar3);
LAB_0045f355:
    uVar4 = 1;
    if (param_3 == 0) {
      local_18 = -uVar5;
      if (-1 < (longlong)local_18) {
        auVar7._8_4_ = (int)(uVar5 >> 0x20);
        auVar7._0_8_ = uVar5;
        auVar7._12_4_ = DAT_00182b10._4_4_;
        local_18 = (ulonglong)
                   ((auVar7._8_8_ - _UNK_00182568) +
                   ((double)CONCAT44((undefined4)DAT_00182b10,(int)uVar5) - _DAT_00182560)) |
                   0x8000000000000000;
        goto LAB_0045f3fa;
      }
      uVar4 = 2;
    }
    else {
      local_18 = uVar5;
    }
  }
  else {
LAB_0045f318:
    if (uVar4 <= uVar3) goto LAB_0045f355;
    cVar1 = *(char *)(lVar2 + uVar3);
    if (cVar1 == '.') {
      parse_decimal(&local_20,param_2,param_3,uVar5,0);
    }
    else {
      if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_0045f355;
      parse_exponent(&local_20,param_2,param_3,uVar5,0);
    }
    if ((char)local_20 != '\0') goto LAB_0045f3e1;
LAB_0045f3fa:
    uVar4 = 0;
  }
  *param_1 = uVar4;
LAB_0045f459:
  param_1[1] = local_18;
  return param_1;
}


