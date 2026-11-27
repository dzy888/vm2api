// 0071c300 parse_decimal

/* WARNING: Switch with 1 destination removed at 0x0071c3b9 */
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
          goto LAB_0071c3fd;
        }
        local_48[0] = 0xd;
        goto LAB_0071c4e5;
      }
      if ((0x1999999999999998 < param_4) && ((param_4 != 0x1999999999999999 || (5 < bVar8)))) {
        uVar5 = (int)param_5 - (int)lVar11;
        uVar10 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar10) goto LAB_0071ced3;
        goto LAB_0071ce90;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3 + 2 + lVar11;
      param_4 = param_4 * 10 + (ulonglong)bVar8;
      lVar11 = lVar11 + 1;
    } while (~uVar3 + uVar2 != lVar11);
    if (iVar9 != (int)uVar2) {
      uVar10 = (ulonglong)(uint)((iVar9 + (int)param_5) - (int)uVar2);
LAB_0071c3fd:
      auVar13._8_4_ = (int)(param_4 >> 0x20);
      auVar13._0_8_ = param_4;
      auVar13._12_4_ = DAT_00182b10._4_4_;
      dVar12 = (auVar13._8_8_ - _UNK_00182568) +
               ((double)CONCAT44((undefined4)DAT_00182b10,(int)param_4) - _DAT_00182560);
      uVar5 = (uint)uVar10;
      uVar4 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar4 = uVar5;
      }
      while (0x134 < uVar4) {
        if ((dVar12 == 0.0) && (!NAN(dVar12))) goto joined_r0x0071c4cf;
        if (-1 < (int)uVar10) goto LAB_0071c503;
        dVar12 = dVar12 / DAT_00185128;
        uVar5 = (int)uVar10 + 0x134;
        uVar10 = (ulonglong)uVar5;
        uVar4 = -uVar5;
        if ((int)-uVar5 < 0) {
          uVar4 = uVar5;
        }
      }
      if ((int)uVar5 < 0) {
        dVar12 = dVar12 / *(double *)(PTR_POW10_00799920 + (ulonglong)uVar4 * 8);
      }
      else {
        dVar12 = dVar12 * *(double *)(PTR_POW10_00799920 + (ulonglong)uVar4 * 8);
        if (ABS(dVar12) == INFINITY) {
LAB_0071c503:
          local_48[0] = 0xe;
          uVar7 = error(param_2,local_48);
          param_1[1] = uVar7;
          *param_1 = 1;
          return (undefined8 *)0x1;
        }
      }
joined_r0x0071c4cf:
      if (param_3 == '\0') {
        dVar12 = (double)((ulonglong)dVar12 ^ _DAT_00184280);
      }
      param_1[1] = dVar12;
      *param_1 = 0;
      return (undefined8 *)0x0;
    }
  }
  local_48[0] = 5;
LAB_0071c4e5:
  puVar6 = (undefined8 *)peek_error(param_2,local_48);
  param_1[1] = puVar6;
  *param_1 = 1;
  return puVar6;
  while (*(ulonglong *)(param_2 + 0x28) = uVar10, uVar10 != *(ulonglong *)(param_2 + 0x20)) {
LAB_0071ce90:
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
LAB_0071ced3:
  auVar14._8_4_ = (int)(param_4 >> 0x20);
  auVar14._0_8_ = param_4;
  auVar14._12_4_ = DAT_00182b10._4_4_;
  dVar12 = (auVar14._8_8_ - _UNK_00182568) +
           ((double)CONCAT44((undefined4)DAT_00182b10,(int)param_4) - _DAT_00182560);
  uVar4 = -uVar5;
  if ((int)-uVar5 < 0) {
    uVar4 = uVar5;
  }
  while (0x134 < uVar4) {
    if ((dVar12 == 0.0) && (!NAN(dVar12))) goto joined_r0x0071cf95;
    if (-1 < (int)uVar5) goto LAB_0071cf99;
    dVar12 = dVar12 / DAT_00185128;
    uVar5 = uVar5 + 0x134;
    uVar4 = -uVar5;
    if ((int)-uVar5 < 0) {
      uVar4 = uVar5;
    }
  }
  if ((int)uVar5 < 0) {
    dVar12 = dVar12 / *(double *)(PTR_POW10_00799920 + (ulonglong)uVar4 * 8);
  }
  else {
    dVar12 = dVar12 * *(double *)(PTR_POW10_00799920 + (ulonglong)uVar4 * 8);
    if (ABS(dVar12) == INFINITY) {
LAB_0071cf99:
      uVar7 = error(param_2,local_48 + 5);
      param_1[1] = uVar7;
      uVar7 = 1;
      goto LAB_0071cf83;
    }
  }
joined_r0x0071cf95:
  if (param_3 == '\0') {
    dVar12 = (double)((ulonglong)dVar12 ^ _DAT_00184280);
  }
  param_1[1] = dVar12;
  uVar7 = 0;
LAB_0071cf83:
  *param_1 = uVar7;
  return param_1;
}


