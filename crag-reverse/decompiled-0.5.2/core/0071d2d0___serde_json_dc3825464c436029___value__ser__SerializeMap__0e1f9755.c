// 0071d2d0 <serde_json[dc3825464c436029]::value::ser::SerializeMap>

/* WARNING: Switch with 1 destination removed at 0x0071d318 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    if ((char)param_1[1] != -1) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
      return;
    }
  }
  else {
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(param_1 + 3);
    if (0 < lVar1) {
      (*(code *)PTR_free_0079adc8)(param_4,1);
      return;
    }
  }
  return;
}


