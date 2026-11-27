// 00056b70 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode>>
    */

undefined2 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::
<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode>>
          (undefined2 *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar1 = *param_2;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x11') {
      puVar2 = *(undefined4 **)(param_2 + 8);
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      local_28 = puVar2[4];
      uStack_24 = puVar2[5];
      uStack_20 = puVar2[6];
      uStack_1c = puVar2[7];
      uVar3 = deserialize_enum::
              <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                        (&local_48,&local_38);
      if (local_48 != '\x01') {
        *(undefined1 *)((longlong)param_1 + 1) = local_47;
      }
      else {
        *(undefined8 *)(param_1 + 4) = local_40;
      }
      *(bool *)param_1 = local_48 == '\x01';
      (*(code *)PTR___rust_dealloc_000c3aa0)(uVar3,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      deserialize_enum::
      <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                (&local_38);
      if ((char)local_38 != '\x01') {
        *(undefined1 *)((longlong)param_1 + 1) = local_38._1_1_;
      }
      else {
        *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_2c,uStack_30);
      }
      *(bool *)param_1 = (char)local_38 == '\x01';
      return param_1;
    }
  }
  *param_1 = 0x200;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


