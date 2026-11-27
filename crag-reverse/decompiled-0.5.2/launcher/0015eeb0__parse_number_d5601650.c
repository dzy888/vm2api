// 0015eeb0 parse_number

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_number
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_number(undefined8 *param_1,longlong param_2,char param_3,double param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char local_50 [8];
  double local_48;
  undefined8 local_40;
  double local_38;
  
  uVar8 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < uVar8) {
    cVar2 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar4);
    if (cVar2 != '.') {
      if ((cVar2 == 'E') || (cVar2 == 'e')) {
        parse_exponent(&local_40,param_2,param_3,param_4,0);
        if ((char)local_40 != '\0') {
          param_1[1] = local_38;
          *param_1 = 0xffffffffffffffff;
          return;
        }
        uVar10 = 0;
        goto LAB_0015f18b;
      }
      goto LAB_0015ef14;
    }
    uVar1 = uVar4 + 1;
    *(ulonglong *)(param_2 + 0x28) = uVar1;
    if (uVar8 <= uVar1) {
LAB_0015f05e:
      local_40 = 5;
LAB_0015f159:
      local_48 = (double)peek_error(param_2);
LAB_0015f134:
      param_1[1] = local_48;
      *param_1 = 0xffffffffffffffff;
      return;
    }
    uVar5 = ((int)uVar4 - (int)uVar8) + 1;
    uVar6 = (ulonglong)uVar5;
    lVar11 = 0;
    do {
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + uVar1 + lVar11);
      bVar9 = bVar3 - 0x30;
      if (9 < bVar9) {
        if ((int)lVar11 == 0) {
          local_40 = 0xd;
          goto LAB_0015f159;
        }
        if ((bVar3 | 0x20) != 0x65) {
          uVar6 = -lVar11 & 0xffffffff;
          goto LAB_0015f06f;
        }
        parse_exponent(local_50,param_2,param_3);
LAB_0015f047:
        if (local_50[0] != '\0') goto LAB_0015f134;
        goto LAB_0015f184;
      }
      if ((0x1999999999999998 < (ulonglong)param_4) &&
         ((param_4 != 2.353437368264535e-185 || (5 < bVar9)))) {
        (*(code *)PTR_parse_decimal_overflow_00219cc0)(param_4,param_3,-(int)lVar11);
        goto LAB_0015f047;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4 + 2 + lVar11;
      param_4 = (double)((ulonglong)bVar9 + (longlong)param_4 * 10);
      lVar11 = lVar11 + 1;
    } while (~uVar4 + uVar8 != lVar11);
    if (uVar5 == 0) goto LAB_0015f05e;
LAB_0015f06f:
    auVar13._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar13._0_8_ = param_4;
    auVar13._12_4_ = _UNK_001139c4;
    local_48 = (auVar13._8_8_ - _UNK_00113858) +
               ((double)CONCAT44(_DAT_001139c0,SUB84(param_4,0)) - _DAT_00113850);
    uVar5 = (uint)uVar6;
    uVar8 = (ulonglong)-uVar5;
    if ((int)-uVar5 < 0) {
      uVar8 = uVar6;
    }
    uVar7 = (uint)uVar8;
    while (0x134 < uVar7) {
      if ((local_48 == 0.0) && (!NAN(local_48))) goto joined_r0x0015f14c;
      if (-1 < (int)uVar6) goto LAB_0015f19f;
      local_48 = local_48 / DAT_001142e8;
      uVar5 = (int)uVar6 + 0x134;
      uVar6 = (ulonglong)uVar5;
      uVar7 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar7 = uVar5;
      }
      uVar8 = (ulonglong)uVar7;
    }
    if ((int)uVar5 < 0) {
      local_48 = local_48 / *(double *)(PTR_POW10_00219cc8 + uVar8 * 8);
    }
    else {
      local_48 = local_48 * *(double *)(PTR_POW10_00219cc8 + uVar8 * 8);
      if (ABS(local_48) == INFINITY) {
LAB_0015f19f:
        local_40 = 0xe;
        local_48 = (double)error(param_2);
        goto LAB_0015f134;
      }
    }
joined_r0x0015f14c:
    if (param_3 == '\0') {
      local_48 = (double)((ulonglong)local_48 ^ _DAT_00113f70);
    }
LAB_0015f184:
    local_38 = local_48;
  }
  else {
LAB_0015ef14:
    uVar10 = 1;
    if (param_3 != '\0') {
      local_38 = param_4;
      goto LAB_0015f18b;
    }
    local_38 = (double)-(longlong)param_4;
    if ((longlong)local_38 < 0) {
      uVar10 = 2;
      goto LAB_0015f18b;
    }
    auVar12._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar12._0_8_ = param_4;
    auVar12._12_4_ = _UNK_001139c4;
    local_38 = (double)((ulonglong)
                        ((auVar12._8_8_ - _UNK_00113858) +
                        ((double)CONCAT44(_DAT_001139c0,SUB84(param_4,0)) - _DAT_00113850)) |
                       0x8000000000000000);
  }
  uVar10 = 0;
LAB_0015f18b:
  *param_1 = uVar10;
  param_1[1] = local_38;
  return;
}


