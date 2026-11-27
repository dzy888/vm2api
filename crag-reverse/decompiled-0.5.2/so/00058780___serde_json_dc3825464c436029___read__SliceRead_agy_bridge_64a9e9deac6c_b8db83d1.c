// 00058780 <serde_json[dc3825464c436029]::read::SliceRead,agy_bridge[64a9e9deac6c45ce]::RingCancelPayload>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   agy_bridge[64a9e9deac6c45ce]::RingCancelPayload> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,agy_bridge[64a9e9deac6c45ce]::RingCancelPayload>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  longlong local_70 [3];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined8 local_30 [3];
  
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = *(ulonglong *)(param_2 + 4);
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  local_70[0] = 0;
  local_70[1] = 1;
  local_70[2] = 0;
  local_38 = 0x80;
  uVar5 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<agy_bridge[64a9e9deac6c45ce]::RingCancelPayload_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_70);
  lVar1 = *param_1;
  if (lVar1 != -1) {
    if (local_48 < CONCAT44(uStack_4c,uStack_50)) {
      do {
        uVar3 = local_48 + 1;
        uVar4 = (ulonglong)*(byte *)(CONCAT44(uStack_54,local_58) + -1 + uVar3);
        if ((0x20 < uVar4) || ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0)) {
          local_30[0] = 0x16;
          lVar2 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_70,local_30);
          param_1[1] = lVar2;
          *param_1 = -1;
          uVar5 = extraout_XMM0_Da;
          if (lVar1 != 0) {
            uVar5 = (*(code *)PTR___rust_dealloc_000c3aa0)(extraout_XMM0_Da,1);
          }
          break;
        }
        local_48 = uVar3;
      } while (uVar3 != CONCAT44(uStack_4c,uStack_50));
    }
  }
  if (local_70[0] != 0) {
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar5,1);
  }
  return param_1;
}


