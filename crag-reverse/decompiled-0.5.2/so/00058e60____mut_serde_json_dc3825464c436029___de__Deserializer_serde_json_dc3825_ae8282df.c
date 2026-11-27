// 00058e60 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::Command as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

void __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 local_39;
  char local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < uVar2) {
    do {
      uVar4 = uVar4 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x22) {
          *(ulonglong *)(param_2 + 0x28) = uVar4;
          *(undefined8 *)(param_2 + 0x10) = 0;
          (*(code *)PTR_parse_str_000c3b10)(-uVar2,param_2);
          if ((int)local_28 == 2) {
            *(undefined8 *)(param_1 + 8) = local_20;
            goto LAB_00058f12;
          }
          <<agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_38,local_20,local_18);
          if (local_38 != '\x01') {
            param_1[1] = local_37;
            uVar3 = 0;
            goto LAB_00058f3d;
          }
        }
        else {
          local_30 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_invalid_type(param_2,&local_39,&DAT_000c0138);
        }
        uVar5 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_30,param_2);
        *(undefined8 *)(param_1 + 8) = uVar5;
        uVar3 = 1;
LAB_00058f3d:
        *param_1 = uVar3;
        return;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != uVar2);
  }
  local_28 = 5;
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_28);
  *(undefined8 *)(param_1 + 8) = uVar5;
LAB_00058f12:
  *param_1 = 1;
  return;
}


