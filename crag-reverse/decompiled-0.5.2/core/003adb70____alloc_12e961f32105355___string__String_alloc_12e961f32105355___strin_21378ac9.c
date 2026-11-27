// 003adb70 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 6);
  return;
}


