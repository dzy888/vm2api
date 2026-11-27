// 004f7510 invalid_type

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>::invalid_type
    */

undefined8 __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
::invalid_type(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  serde[8f836fbdfa2c5b5d]::private::de::content::content_unexpected(auStack_38,param_1);
  uVar1 = (*(code *)PTR_invalid_type_007997e8)(param_4,param_3);
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_1,param_2);
  return uVar1;
}


