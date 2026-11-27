// 005906d0 <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>

/* WARNING: Switch with 1 destination removed at 0x005906fc */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


