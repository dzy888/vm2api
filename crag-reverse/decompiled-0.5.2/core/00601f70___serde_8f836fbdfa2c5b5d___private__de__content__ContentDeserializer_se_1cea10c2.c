// 00601f70 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <core[c0acaeba6ab4c2e0]::option::Option<i32> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

undefined8 * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<i32>as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar1 = *param_2;
  if (cVar1 != '\x10') {
    if (cVar1 == '\x11') {
      puVar2 = *(undefined4 **)(param_2 + 8);
      uStack_38 = *puVar2;
      uStack_34 = puVar2[1];
      uStack_30 = puVar2[2];
      uStack_2c = puVar2[3];
      uStack_28 = puVar2[4];
      uStack_24 = puVar2[5];
      uStack_20 = puVar2[6];
      uStack_1c = puVar2[7];
      uVar3 = <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32>as_serde_core[48776c27239fa21f]::de::Visitor>
              ::visit_some::
              <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                        (param_1,&uStack_38);
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar3,8);
      return param_1;
    }
    if (cVar1 != '\x12') {
      <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32>as_serde_core[48776c27239fa21f]::de::Visitor>
      ::visit_some::
      <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
                (param_1);
      return param_1;
    }
  }
  *param_1 = 0;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  return param_1;
}


