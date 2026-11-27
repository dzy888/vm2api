// 004208f0 <<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>

/* <&mut 
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_u64::<<usize as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor> */

undefined1  [16] __rustcall
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_u64::
<<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
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
LAB_004209bb:
        if ((byte)(bVar1 - 0x30) < 10) {
          <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::parse_integer(&local_18,param_1,1);
joined_r0x004209e0:
          if (local_18 == -1) {
            auVar7._8_8_ = local_10;
            auVar7._0_8_ = 1;
            return auVar7;
          }
          if ((int)local_18 == 1) {
LAB_004209b3:
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_10;
            return auVar2 << 0x40;
          }
          local_30[0]._1_7_ = (undefined7)((ulonglong)local_30[0] >> 8);
          if ((int)local_18 == 2) {
            if (-1 < (longlong)local_10) goto LAB_004209b3;
            local_30[0] = CONCAT71(local_30[0]._1_7_,2);
            uVar4 = (*(code *)PTR_invalid_value_007997e0)();
          }
          else {
            local_30[0] = CONCAT71(local_30[0]._1_7_,3);
            uVar4 = (*(code *)PTR_invalid_type_007997e8)();
          }
        }
        else {
          uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_invalid_type(param_1,&local_31,&DAT_00789c08);
        }
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (uVar4,param_1);
        goto LAB_0042095f;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x2d) goto LAB_004209bb;
        *(ulonglong *)(param_1 + 0x28) = uVar3;
        <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
        ::parse_integer(&local_18,param_1,0);
        goto joined_r0x004209e0;
      }
      *(ulonglong *)(param_1 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_1 + 0x20));
  }
  local_30[0] = 5;
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_1,local_30);
LAB_0042095f:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = 1;
  return auVar6;
}


