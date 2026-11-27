// 0071ce70 parse_decimal_overflow

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::parse_decimal_overflow
    */

undefined8 * __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::StrRead>>::
parse_decimal_overflow
          (undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 local_20 [3];
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if (9 < (byte)(bVar1 - 0x30)) {
        if ((bVar1 | 0x20) == 0x65) {
          parse_exponent(param_1,param_2,param_3);
          return param_1;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  auVar6._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar6._0_8_ = param_4;
  auVar6._12_4_ = DAT_00182b10._4_4_;
  dVar5 = (auVar6._8_8_ - _UNK_00182568) +
          ((double)CONCAT44((undefined4)DAT_00182b10,(int)param_4) - _DAT_00182560);
  uVar2 = -param_5;
  if ((int)-param_5 < 0) {
    uVar2 = param_5;
  }
  while (0x134 < uVar2) {
    if ((dVar5 == 0.0) && (!NAN(dVar5))) goto joined_r0x0071cf95;
    if (-1 < (int)param_5) goto LAB_0071cf99;
    dVar5 = dVar5 / DAT_00185128;
    param_5 = param_5 + 0x134;
    uVar2 = -param_5;
    if ((int)-param_5 < 0) {
      uVar2 = param_5;
    }
  }
  if ((int)param_5 < 0) {
    dVar5 = dVar5 / *(double *)(PTR_POW10_00799920 + (ulonglong)uVar2 * 8);
  }
  else {
    dVar5 = dVar5 * *(double *)(PTR_POW10_00799920 + (ulonglong)uVar2 * 8);
    if (ABS(dVar5) == INFINITY) {
LAB_0071cf99:
      local_20[0] = 0xe;
      uVar3 = error(param_2,local_20);
      param_1[1] = uVar3;
      uVar3 = 1;
      goto LAB_0071cf83;
    }
  }
joined_r0x0071cf95:
  if (param_3 == '\0') {
    dVar5 = (double)((ulonglong)dVar5 ^ _DAT_00184280);
  }
  param_1[1] = dVar5;
  uVar3 = 0;
LAB_0071cf83:
  *param_1 = uVar3;
  return param_1;
}


