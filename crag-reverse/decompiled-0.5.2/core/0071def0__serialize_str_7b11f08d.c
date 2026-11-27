// 0071def0 serialize_str

/* <serde_json[dc3825464c436029]::value::ser::RawValueEmitter as
   serde_core[48776c27239fa21f]::ser::Serializer>::serialize_str */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::ser::RawValueEmitter_as_serde_core[48776c27239fa21f]::ser::Serializer>
::serialize_str(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = param_2;
  local_30 = param_3;
  local_18 = param_2;
  local_10 = param_3;
  serde_json[dc3825464c436029]::de::from_trait::
  <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
            (param_1,&local_38);
  return param_1;
}


