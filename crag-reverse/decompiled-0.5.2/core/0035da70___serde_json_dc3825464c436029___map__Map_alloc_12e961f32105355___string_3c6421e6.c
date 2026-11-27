// 0035da70 <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1)

{
  longlong lVar1;
  ulonglong local_48 [3];
  longlong local_30;
  ulonglong local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  longlong local_8;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_8 = 0;
  }
  else {
    local_30 = param_1[1];
    local_8 = param_1[2];
    local_48[1] = 0;
    local_20 = 0;
    local_48[2] = lVar1;
    local_18 = lVar1;
    local_10 = local_30;
  }
  local_48[0] = (ulonglong)(lVar1 != 0);
  local_28 = local_48[0];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            (local_48);
  return;
}


