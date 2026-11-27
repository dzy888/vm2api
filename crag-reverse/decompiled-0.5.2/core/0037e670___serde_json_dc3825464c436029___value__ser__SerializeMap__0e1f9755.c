// 0037e670 <serde_json[dc3825464c436029]::value::ser::SerializeMap>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
          (longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong local_60 [3];
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    if ((char)param_1[1] != -1) {
      <serde_json[dc3825464c436029]::value::Value>(param_1 + 1);
      return;
    }
  }
  else {
    lVar2 = param_1[3];
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_48 = param_1[4];
      local_20 = param_1[5];
      local_60[1] = 0;
      local_38 = 0;
      local_60[2] = lVar2;
      local_30 = lVar2;
      local_28 = local_48;
    }
    local_60[0] = (ulonglong)(lVar2 != 0);
    local_40 = local_60[0];
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              (local_60);
    if ((lVar1 != -1) && (lVar1 != 0)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
  }
  return;
}


