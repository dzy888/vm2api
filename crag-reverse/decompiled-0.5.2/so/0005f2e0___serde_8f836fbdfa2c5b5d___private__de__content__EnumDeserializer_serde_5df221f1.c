// 0005f2e0 <serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_enum::<serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

undefined1 * __rustcall
<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_enum::
<serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 local_79;
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char local_38 [8];
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  <serde[8f836fbdfa2c5b5d]::private::de::content::EnumDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::EnumAccess>
  ::variant_seed::
  <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
            (local_38);
  if (local_38[0] == '\0') {
    if ((char)local_30 != -1) {
      local_78 = local_30;
      uStack_74 = uStack_2c;
      uStack_70 = uStack_28;
      uStack_6c = uStack_24;
      local_68 = local_20;
      uStack_64 = uStack_1c;
      uStack_60 = uStack_18;
      uStack_5c = uStack_14;
      if (((local_30 & 0xff) != 0x12) &&
         (((local_30 & 0xff) != 0x15 || (CONCAT44(uStack_14,uStack_18) != 0)))) {
LAB_0005f3a6:
        local_48 = local_20;
        uStack_44 = uStack_1c;
        uStack_40 = uStack_18;
        uStack_3c = uStack_14;
        local_58 = local_30;
        uStack_54 = uStack_2c;
        uStack_50 = uStack_28;
        uStack_4c = uStack_24;
        uVar2 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                ::invalid_type(&local_58,&local_79,
                               anon_2d8481ed190668a1c8db75e0b2a3e95f_47_llvm_17988842640040923845);
        goto LAB_0005f30a;
      }
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <serde_core[48776c27239fa21f]::private::content::Content>(&local_78);
    }
    param_1[1] = 0;
  }
  else {
    if (local_38[0] == '\x02') {
      uVar2 = CONCAT44(uStack_2c,local_30);
LAB_0005f30a:
      *(undefined8 *)(param_1 + 8) = uVar2;
      uVar1 = 1;
      goto LAB_0005f399;
    }
    if ((char)local_30 != -1) {
      local_78 = local_30;
      uStack_74 = uStack_2c;
      uStack_70 = uStack_28;
      uStack_6c = uStack_24;
      local_68 = local_20;
      uStack_64 = uStack_1c;
      uStack_60 = uStack_18;
      uStack_5c = uStack_14;
      if (((local_30 & 0xff) != 0x12) &&
         (((local_30 & 0xff) != 0x15 || (CONCAT44(uStack_14,uStack_18) != 0)))) goto LAB_0005f3a6;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <serde_core[48776c27239fa21f]::private::content::Content>(&local_78);
    }
    param_1[1] = 1;
  }
  uVar1 = 0;
LAB_0005f399:
  *param_1 = uVar1;
  return param_1;
}


