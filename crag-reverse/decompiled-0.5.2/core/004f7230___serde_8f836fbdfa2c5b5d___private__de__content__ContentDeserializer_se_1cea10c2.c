// 004f7230 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <<craggemini_core[66f3c71560d70857]::protocol::FromBridge as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_some::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

void __rustcall
<<craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor_as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_some::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_29;
  undefined1 local_28;
  
  local_28 = 8;
  uVar1 = (*(code *)PTR_invalid_type_007997e8)(param_4,&DAT_0078c840);
  param_1[1] = uVar1;
  *param_1 = 0xffffffffffffffff;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2,&local_29);
  return;
}


