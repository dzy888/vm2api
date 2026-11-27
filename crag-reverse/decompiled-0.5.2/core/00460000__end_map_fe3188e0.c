// 00460000 end_map

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::end_map
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
end_map(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_18 [3];
  
  uVar2 = *(ulonglong *)(param_1 + 0x28);
  if (uVar2 < *(ulonglong *)(param_1 + 0x20)) {
    do {
      uVar2 = uVar2 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + uVar2);
      uVar4 = (ulonglong)bVar1;
      if (0x2c < uVar4) {
LAB_0046007b:
        if (bVar1 == 0x7d) {
          *(ulonglong *)(param_1 + 0x28) = uVar2;
          return 0;
        }
        local_18[0] = 0x16;
        uVar3 = peek_error(param_1,local_18);
        return uVar3;
      }
      if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) {
        if (uVar4 == 0x2c) {
          local_18[0] = 0x15;
          uVar3 = peek_error(param_1,local_18);
          return uVar3;
        }
        goto LAB_0046007b;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar2;
    } while (uVar2 != *(ulonglong *)(param_1 + 0x20));
  }
  local_18[0] = 3;
  uVar3 = peek_error(param_1,local_18);
  return uVar3;
}


