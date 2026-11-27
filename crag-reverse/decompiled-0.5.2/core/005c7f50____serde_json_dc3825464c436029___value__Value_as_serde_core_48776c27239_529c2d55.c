// 005c7f50 <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>

/* <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> as
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_any::<<serde_json[dc3825464c436029]::value::Value
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor> */

char * __rustcall
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_any::
<<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor>
          (char *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong local_a0 [3];
  longlong local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  char local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = param_2[2];
  local_a0[2] = *param_2;
  local_88 = param_2[1];
  local_a0[0] = (ulonglong)(local_a0[2] != 0);
  local_60 = lVar1;
  if (local_a0[2] == 0) {
    local_60 = 0;
  }
  local_a0[1] = 0;
  local_78 = 0;
  local_58[0] = -1;
  local_80 = local_a0[0];
  local_70 = local_a0[2];
  local_68 = local_88;
  <<serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::ValueVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
  ::visit_map::<&mut_serde_json[dc3825464c436029]::value::de::MapDeserializer>(param_1,local_a0);
  if (*param_1 == -1) {
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(local_a0);
  }
  else {
    local_38 = *(undefined4 *)param_1;
    uStack_34 = *(undefined4 *)(param_1 + 4);
    uStack_30 = *(undefined4 *)(param_1 + 8);
    uStack_2c = *(undefined4 *)(param_1 + 0xc);
    local_28 = *(undefined4 *)(param_1 + 0x10);
    uStack_24 = *(undefined4 *)(param_1 + 0x14);
    uStack_20 = *(undefined4 *)(param_1 + 0x18);
    uStack_1c = *(undefined4 *)(param_1 + 0x1c);
    if (local_60 != 0) {
      uVar2 = <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
              ::invalid_length(lVar1,&
                                     anon_30b5cef53457a6ea696e8d7e9f6273d6_75_llvm_8436237269785592069
                               ,anon_30b5cef53457a6ea696e8d7e9f6273d6_76_llvm_8436237269785592069);
      *(undefined8 *)(param_1 + 8) = uVar2;
      *param_1 = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_38);
    }
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(local_a0);
  }
  if (local_58[0] != -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_58);
  }
  return param_1;
}


