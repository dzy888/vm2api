// 0071e030 serialize_u128

/* <serde_json[dc3825464c436029]::value::ser::Serializer as
   serde_core[48776c27239fa21f]::ser::Serializer>::serialize_u128 */

void __rustcall
<serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
::serialize_u128(undefined1 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *param_1 = 2;
    return;
  }
  uVar1 = (*(code *)PTR_syntax_00799910)(param_4,0);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *param_1 = 0xff;
  return;
}


