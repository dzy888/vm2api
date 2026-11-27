// 0041c0e0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<i64> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<i64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 local_31;
  undefined8 local_30 [3];
  longlong local_18;
  ulonglong local_10;
  
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if (uVar4 < *(ulonglong *)(param_1 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + uVar4);
      uVar6 = (ulonglong)bVar1;
      if (0x2d < uVar6) {
LAB_0041c1bb:
        if ((byte)(bVar1 - 0x30) < 10) {
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(&local_18,param_1,1);
          uVar5 = local_30[0];
joined_r0x0041c1e0:
          if (local_18 == -1) {
            auVar8._8_8_ = local_10;
            auVar8._0_8_ = 1;
            return auVar8;
          }
          local_30[0]._1_7_ = (undefined7)((ulonglong)uVar5 >> 8);
          if ((int)local_18 == 1) {
            if ((longlong)local_10 < 0) {
              local_30[0] = CONCAT71(local_30[0]._1_7_,1);
              local_10 = (*(code *)PTR_invalid_value_007997e0)();
              goto LAB_0041c1b1;
            }
LAB_0041c1f7:
            bVar3 = false;
            local_30[0] = uVar5;
          }
          else {
            if ((int)local_18 == 2) goto LAB_0041c1f7;
            local_30[0] = CONCAT71(local_30[0]._1_7_,3);
            local_10 = (*(code *)PTR_invalid_type_007997e8)();
LAB_0041c1b1:
            bVar3 = true;
          }
          if (!bVar3) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_10;
            return auVar2 << 0x40;
          }
        }
        else {
          local_10 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_invalid_type(param_1,&local_31,&DAT_00789c28);
        }
        uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_10,param_1);
        goto LAB_0041c14f;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x2d) goto LAB_0041c1bb;
        *(ulonglong *)(param_1 + 0x28) = uVar4;
        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
        ::parse_integer(&local_18,param_1,0);
        uVar5 = local_30[0];
        goto joined_r0x0041c1e0;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_1 + 0x20));
  }
  local_30[0] = 5;
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_1,local_30);
LAB_0041c14f:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = 1;
  return auVar7;
}


