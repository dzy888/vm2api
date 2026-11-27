// 00460f10 <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::{closure#0}>

/* <serde_json[dc3825464c436029]::error::Error>::fix_position::<<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::{closure#0}>
    */

longlong __rustcall
<serde_json[dc3825464c436029]::error::Error>::fix_position::
<<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x18) == 0) {
    param_1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
              ::error(param_2,param_1);
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  return param_1;
}


