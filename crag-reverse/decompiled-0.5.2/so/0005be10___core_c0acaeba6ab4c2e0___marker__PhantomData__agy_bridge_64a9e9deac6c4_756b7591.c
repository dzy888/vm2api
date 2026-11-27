// 0005be10 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_39;
  char local_38;
  undefined1 local_37;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < uVar2) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      if ((0x20 < (ulonglong)bVar1) || ((0x100002600U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
        if (bVar1 == 0x22) {
          *(ulonglong *)(param_2 + 0x28) = uVar3;
          *(undefined8 *)(param_2 + 0x10) = 0;
          (*(code *)PTR_parse_str_000c3b10)(-uVar2,param_2);
          if ((int)local_28 == 2) goto LAB_0005bebd;
          <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_38,local_20,local_18);
          if (local_38 != '\x01') {
            *param_1 = local_37;
            *(longlong *)(param_1 + 8) = param_2;
            return param_1;
          }
        }
        else {
          local_30 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                     ::peek_invalid_type(param_2,&local_39,
                                         anon_1682d33f1ffa89977bb076c565204366_24_llvm_17926147656080002477
                                        );
        }
        local_20 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                   <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                             (local_30,param_2);
        goto LAB_0005bebd;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != uVar2);
  }
  local_28 = 5;
  local_20 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
             ::peek_error(param_2,&local_28);
LAB_0005bebd:
  *(undefined8 *)(param_1 + 8) = local_20;
  *param_1 = 2;
  return param_1;
}


