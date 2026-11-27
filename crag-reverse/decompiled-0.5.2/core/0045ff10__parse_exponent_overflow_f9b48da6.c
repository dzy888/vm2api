// 0045ff10 parse_exponent_overflow

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::parse_exponent_overflow
    */

void __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
parse_exponent_overflow(undefined8 *param_1,longlong param_2,char param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 local_20 [3];
  
  if ((byte)(param_5 ^ 1 | param_4) != 1) {
    local_20[0] = 0xe;
    uVar1 = error(param_2,local_20);
    param_1[1] = uVar1;
    *param_1 = 1;
    return;
  }
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar2 = uVar2 + 1;
      if (9 < (byte)(*(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2) - 0x30U)) break;
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != *(ulonglong *)(param_2 + 0x20));
  }
  uVar1 = 0;
  if (param_3 == '\0') {
    uVar1 = DAT_001852d8;
  }
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


