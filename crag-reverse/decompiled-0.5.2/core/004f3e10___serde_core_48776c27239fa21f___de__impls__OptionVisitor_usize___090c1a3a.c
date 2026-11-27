// 004f3e10 <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<usize>>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as 
   serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<usize>>
    */

longlong * __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_option::<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<usize>>
          (longlong *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar3 [16];
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
      auVar3 = deserialize_u64::
               <<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                         (&local_38);
      param_1[1] = auVar3._8_8_;
      *param_1 = auVar3._0_8_ + 1;
      (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      auVar3 = deserialize_u64::
               <<usize_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
                         (param_2);
      param_1[1] = auVar3._8_8_;
      *param_1 = auVar3._0_8_ + 1;
      return param_1;
    }
  }
  *param_1 = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


