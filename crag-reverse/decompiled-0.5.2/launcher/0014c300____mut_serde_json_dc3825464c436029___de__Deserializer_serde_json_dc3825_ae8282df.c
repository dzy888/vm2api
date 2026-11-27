// 0014c300 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<u64> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<u64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 local_31;
  undefined8 local_30 [3];
  longlong local_18;
  ulonglong local_10;
  
  uVar3 = *(ulonglong *)(param_1 + 0x28);
  if (uVar3 < *(ulonglong *)(param_1 + 0x20)) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x18) + -1 + uVar3);
      uVar5 = (ulonglong)bVar1;
      if (0x2d < uVar5) {
LAB_0014c3cb:
        if ((byte)(bVar1 - 0x30) < 10) {
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(&local_18,param_1,1);
joined_r0x0014c3f0:
          if (local_18 == -1) {
            auVar7._8_8_ = local_10;
            auVar7._0_8_ = 1;
            return auVar7;
          }
          if ((int)local_18 == 1) {
LAB_0014c3c3:
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_10;
            return auVar2 << 0x40;
          }
          local_30[0]._1_7_ = (undefined7)((ulonglong)local_30[0] >> 8);
          if ((int)local_18 == 2) {
            if (-1 < (longlong)local_10) goto LAB_0014c3c3;
            local_30[0] = CONCAT71(local_30[0]._1_7_,2);
            uVar4 = (*(code *)PTR_invalid_value_00219c98)();
          }
          else {
            local_30[0] = CONCAT71(local_30[0]._1_7_,3);
            uVar4 = (*(code *)PTR_invalid_type_00219c38)();
          }
        }
        else {
          uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_1,&local_31,&DAT_00214ed0);
        }
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (uVar4,param_1);
        goto LAB_0014c36f;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x2d) goto LAB_0014c3cb;
        *(ulonglong *)(param_1 + 0x28) = uVar3;
        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
        ::parse_integer(&local_18,param_1,0);
        goto joined_r0x0014c3f0;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_1 + 0x20));
  }
  local_30[0] = 5;
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_1,local_30);
LAB_0014c36f:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = 1;
  return auVar6;
}


