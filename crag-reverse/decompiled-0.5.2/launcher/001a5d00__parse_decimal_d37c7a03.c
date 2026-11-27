// 001a5d00 parse_decimal

/* WARNING: Switch with 1 destination removed at 0x001a5db9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_decimal
    */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_decimal(undefined8 *param_1,longlong param_2,char param_3,ulonglong param_4,ulonglong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 local_48 [3];
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  uVar10 = uVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar10;
  if (uVar10 < uVar2) {
    iVar9 = (int)uVar3 + 1;
    lVar11 = 0;
    do {
      bVar1 = *(byte *)(uVar10 + *(longlong *)(param_2 + 0x18) + lVar11);
      bVar8 = bVar1 - 0x30;
      if (9 < bVar8) {
        if ((int)lVar11 != 0) {
          uVar10 = (param_5 & 0xffffffff) - lVar11;
          if ((bVar1 | 0x20) == 0x65) {
            puVar6 = (undefined8 *)parse_exponent(param_1,param_2,param_3);
            return puVar6;
          }
          goto LAB_001a5dfd;
        }
        local_48[0] = 0xd;
        goto LAB_001a5ee5;
      }
      if ((0x1999999999999998 < param_4) && ((param_4 != 0x1999999999999999 || (5 < bVar8)))) {
        uVar5 = (int)param_5 - (int)lVar11;
        uVar10 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar10) goto LAB_001a6353;
        goto LAB_001a6310;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3 + 2 + lVar11;
      param_4 = param_4 * 10 + (ulonglong)bVar8;
      lVar11 = lVar11 + 1;
    } while (~uVar3 + uVar2 != lVar11);
    if (iVar9 != (int)uVar2) {
      uVar10 = (ulonglong)(uint)((iVar9 + (int)param_5) - (int)uVar2);
LAB_001a5dfd:
      auVar13._8_4_ = (int)(param_4 >> 0x20);
      auVar13._0_8_ = param_4;
      auVar13._12_4_ = _UNK_001139c4;
      dVar12 = (auVar13._8_8_ - _UNK_00113858) +
               ((double)CONCAT44(_DAT_001139c0,(int)param_4) - _DAT_00113850);
      uVar5 = (uint)uVar10;
      uVar4 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar4 = uVar5;
      }
      while (0x134 < uVar4) {
        if ((dVar12 == 0.0) && (!NAN(dVar12))) goto joined_r0x001a5ecf;
        if (-1 < (int)uVar10) goto LAB_001a5f03;
        dVar12 = dVar12 / DAT_001142e8;
        uVar5 = (int)uVar10 + 0x134;
        uVar10 = (ulonglong)uVar5;
        uVar4 = -uVar5;
        if ((int)-uVar5 < 0) {
          uVar4 = uVar5;
        }
      }
      if ((int)uVar5 < 0) {
        dVar12 = dVar12 / *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
      }
      else {
        dVar12 = dVar12 * *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
        if (ABS(dVar12) == INFINITY) {
LAB_001a5f03:
          local_48[0] = 0xe;
          uVar7 = error(param_2,local_48);
          param_1[1] = uVar7;
          *param_1 = 1;
          return (undefined8 *)0x1;
        }
      }
joined_r0x001a5ecf:
      if (param_3 == '\0') {
        dVar12 = (double)((ulonglong)dVar12 ^ _DAT_00113f70);
      }
      param_1[1] = dVar12;
      *param_1 = 0;
      return (undefined8 *)0x0;
    }
  }
  local_48[0] = 5;
LAB_001a5ee5:
  puVar6 = (undefined8 *)peek_error(param_2,local_48);
  param_1[1] = puVar6;
  *param_1 = 1;
  return puVar6;
  while (*(ulonglong *)(param_2 + 0x28) = uVar10, uVar10 != *(ulonglong *)(param_2 + 0x20)) {
LAB_001a6310:
    uVar10 = uVar10 + 1;
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar10);
    if (9 < (byte)(bVar1 - 0x30)) {
      if ((bVar1 | 0x20) == 0x65) {
        parse_exponent(param_1,param_2,param_3);
        return param_1;
      }
      break;
    }
  }
LAB_001a6353:
  auVar14._8_4_ = (int)(param_4 >> 0x20);
  auVar14._0_8_ = param_4;
  auVar14._12_4_ = _UNK_001139c4;
  dVar12 = (auVar14._8_8_ - _UNK_00113858) +
           ((double)CONCAT44(_DAT_001139c0,(int)param_4) - _DAT_00113850);
  uVar4 = -uVar5;
  if ((int)-uVar5 < 0) {
    uVar4 = uVar5;
  }
  while (0x134 < uVar4) {
    if ((dVar12 == 0.0) && (!NAN(dVar12))) goto joined_r0x001a6415;
    if (-1 < (int)uVar5) goto LAB_001a6419;
    dVar12 = dVar12 / DAT_001142e8;
    uVar5 = uVar5 + 0x134;
    uVar4 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar4 = uVar5;
    }
  }
  if ((int)uVar5 < 0) {
    dVar12 = dVar12 / *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
  }
  else {
    dVar12 = dVar12 * *(double *)(PTR_POW10_00219cc8 + (ulonglong)uVar4 * 8);
    if (ABS(dVar12) == INFINITY) {
LAB_001a6419:
      uVar7 = error(param_2,local_48 + 5);
      param_1[1] = uVar7;
      uVar7 = 1;
      goto LAB_001a6403;
    }
  }
joined_r0x001a6415:
  if (param_3 == '\0') {
    dVar12 = (double)((ulonglong)dVar12 ^ _DAT_00113f70);
  }
  param_1[1] = dVar12;
  uVar7 = 0;
LAB_001a6403:
  *param_1 = uVar7;
  return param_1;
}


