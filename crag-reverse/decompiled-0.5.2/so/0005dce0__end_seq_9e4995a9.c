// 0005dce0 end_seq

/* <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::end_seq
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::
end_seq(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 local_18 [3];
  
  uVar3 = *(ulonglong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x28) < uVar3) {
    uVar4 = *(ulonglong *)(param_1 + 0x28);
    do {
      uVar5 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + uVar5);
      uVar8 = (ulonglong)bVar2;
      if (0x2c < uVar8) {
LAB_0005dd85:
        if (bVar2 == 0x5d) {
          *(ulonglong *)(param_1 + 0x28) = uVar5;
          return 0;
        }
        goto LAB_0005ddb0;
      }
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) {
        if (uVar8 != 0x2c) goto LAB_0005dd85;
        *(ulonglong *)(param_1 + 0x28) = uVar5;
        if (uVar3 <= uVar5) goto LAB_0005ddb0;
        lVar7 = uVar4 + 2;
        goto LAB_0005dd5e;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar5;
      uVar4 = uVar5;
    } while (uVar5 != uVar3);
  }
  local_18[0] = 2;
  uVar6 = peek_error(param_1,local_18);
  return uVar6;
LAB_0005dd5e:
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + lVar7);
  if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    if (bVar2 == 0x5d) {
      local_18[0] = 0x15;
      uVar6 = peek_error(param_1,local_18);
      return uVar6;
    }
    goto LAB_0005ddb0;
  }
  *(longlong *)(param_1 + 0x28) = lVar7;
  lVar1 = (1 - uVar3) + lVar7;
  lVar7 = lVar7 + 1;
  if (lVar1 == 1) {
LAB_0005ddb0:
    local_18[0] = 0x16;
    uVar6 = peek_error(param_1,local_18);
    return uVar6;
  }
  goto LAB_0005dd5e;
}


