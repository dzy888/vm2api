// 00056a80 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
    */

undefined8 * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::
<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter>>
          (undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
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
      uVar3 = deserialize_struct::
              <<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                        (&local_58,&local_38);
      if (CONCAT44(uStack_54,local_58) == -2) {
        param_1[1] = CONCAT44(uStack_4c,uStack_50);
        *param_1 = 0xfffffffffffffffd;
        local_58 = uVar3;
      }
      else {
        param_1[2] = local_48;
        param_1[3] = uStack_40;
        *(undefined4 *)param_1 = local_58;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_54;
        *(undefined4 *)(param_1 + 1) = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
      }
      (*(code *)PTR___rust_dealloc_000c3aa0)(local_58,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      deserialize_struct::
      <<agy_bridge[64a9e9deac6c45ce]::protocol::BridgeToolFilter_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                (&local_58);
      if (CONCAT44(uStack_54,local_58) == -2) {
        param_1[1] = CONCAT44(uStack_4c,uStack_50);
        *param_1 = 0xfffffffffffffffd;
        return param_1;
      }
      param_1[2] = local_48;
      param_1[3] = uStack_40;
      *param_1 = CONCAT44(uStack_54,local_58);
      param_1[1] = CONCAT44(uStack_4c,uStack_50);
      return param_1;
    }
  }
  *param_1 = 0xfffffffffffffffe;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


