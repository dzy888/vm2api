// 004d8560 <serde_json[dc3825464c436029]::value::Value>

/* <craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde_json[dc3825464c436029]::value::Value>
    */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::<serde_json[dc3825464c436029]::value::Value>(undefined1 *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char local_70 [8];
  longlong local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_2 != '\x03') {
    if (*param_2 == '\x05') {
      <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
      ::deserialize_enum::
      <<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                (param_1,param_2 + 8,
                 anon_2c3f00c6db51fc4e52b1607637b553f4_23_llvm_6489901693990513673,0x10,
                 &anon_2c3f00c6db51fc4e52b1607637b553f4_30_llvm_6489901693990513673,6);
      return param_1;
    }
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)(param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 8);
    uStack_3c = *(undefined4 *)(param_2 + 0xc);
    local_38 = *(undefined8 *)(param_2 + 0x10);
    uStack_30 = *(undefined4 *)(param_2 + 0x18);
    uStack_2c = *(undefined4 *)(param_2 + 0x1c);
    uVar2 = (*(code *)PTR_unexpected_00799c10)();
    uVar1 = (*(code *)PTR_invalid_type_007997e8)
                      (uVar2,anon_2c3f00c6db51fc4e52b1607637b553f4_103_llvm_6489901693990513673);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
              (param_2,&anon_2c3f00c6db51fc4e52b1607637b553f4_102_llvm_6489901693990513673);
    return param_1;
  }
  local_38 = *(undefined8 *)(param_2 + 0x18);
  local_48 = *(undefined4 *)(param_2 + 8);
  uStack_44 = *(undefined4 *)(param_2 + 0xc);
  uStack_40 = *(undefined4 *)(param_2 + 0x10);
  uStack_3c = *(undefined4 *)(param_2 + 0x14);
  uStack_30 = CONCAT31(uStack_30._1_3_,0xff);
  <serde_json[dc3825464c436029]::value::de::EnumDeserializer_as_serde_core[48776c27239fa21f]::de::EnumAccess>
  ::variant_seed::
  <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
            (local_70,&local_48);
  if (local_70[0] == '\0') {
    local_68 = (*(code *)PTR_unit_variant_00799c08)();
    if (local_68 == 0) {
      param_1[1] = 0;
      goto LAB_004d860c;
    }
  }
  else if ((local_70[0] != '\x02') &&
          (local_68 = (*(code *)PTR_unit_variant_00799c08)(), local_68 == 0)) {
    param_1[1] = 1;
LAB_004d860c:
    *param_1 = 0;
    return param_1;
  }
  *(longlong *)(param_1 + 8) = local_68;
  *param_1 = 1;
  return param_1;
}


