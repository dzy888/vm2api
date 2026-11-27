// 0071cd00 parse_long_integer

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_long_integer
    */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_long_integer(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 local_28 [3];
  
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar4 = 0;
  if (uVar2 < uVar7) {
    uVar4 = (ulonglong)(uint)((int)uVar7 - (int)uVar2);
    uVar8 = 0;
    do {
      cVar1 = *(char *)(uVar2 + *(longlong *)(param_2 + 0x18) + uVar8);
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 == '.') {
          parse_decimal(param_1,param_2,param_3);
        }
        else {
          if ((cVar1 != 'E') && (cVar1 != 'e')) {
            uVar4 = uVar8 & 0xffffffff;
            break;
          }
          parse_exponent(param_1,param_2,param_3);
        }
        return param_1;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar7 - uVar2 != uVar8);
  }
  auVar10._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar10._0_8_ = param_4;
  auVar10._12_4_ = DAT_00182b10._4_4_;
  dVar9 = (auVar10._8_8_ - _UNK_00182568) +
          ((double)CONCAT44((undefined4)DAT_00182b10,(int)param_4) - _DAT_00182560);
  uVar3 = (uint)uVar4;
  uVar7 = (ulonglong)-uVar3;
  if ((int)-uVar3 < 0) {
    uVar7 = uVar4;
  }
  uVar6 = (uint)uVar7;
  while (0x134 < uVar6) {
    if ((dVar9 == 0.0) && (!NAN(dVar9))) goto joined_r0x0071ce42;
    if (-1 < (int)uVar4) goto LAB_0071ce46;
    dVar9 = dVar9 / DAT_00185128;
    uVar3 = (int)uVar4 + 0x134;
    uVar4 = (ulonglong)uVar3;
    uVar6 = -uVar3;
    if ((int)-uVar3 < 0) {
      uVar6 = uVar3;
    }
    uVar7 = (ulonglong)uVar6;
  }
  if ((int)uVar3 < 0) {
    dVar9 = dVar9 / *(double *)(PTR_POW10_00799920 + uVar7 * 8);
  }
  else {
    dVar9 = dVar9 * *(double *)(PTR_POW10_00799920 + uVar7 * 8);
    if (ABS(dVar9) == INFINITY) {
LAB_0071ce46:
      local_28[0] = 0xe;
      uVar5 = error(param_2,local_28);
      param_1[1] = uVar5;
      uVar5 = 1;
      goto LAB_0071ce2f;
    }
  }
joined_r0x0071ce42:
  if (param_3 == '\0') {
    dVar9 = (double)((ulonglong)dVar9 ^ _DAT_00184280);
  }
  param_1[1] = dVar9;
  uVar5 = 0;
LAB_0071ce2f:
  *param_1 = uVar5;
  return param_1;
}


