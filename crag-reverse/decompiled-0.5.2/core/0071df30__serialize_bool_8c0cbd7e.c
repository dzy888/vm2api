// 0071df30 serialize_bool

/* <serde_json[dc3825464c436029]::value::ser::RawValueEmitter as
   serde_core[48776c27239fa21f]::ser::Serializer>::serialize_bool */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::ser::RawValueEmitter_as_serde_core[48776c27239fa21f]::ser::Serializer>
::serialize_bool(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_syntax_00799910)(param_4,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return param_1;
}


