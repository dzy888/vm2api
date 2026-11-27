// 003c98d0 <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>

/* WARNING: Switch with 1 destination removed at 0x003c9929 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = param_1[2] + 1; lVar2 != 1; lVar2 = lVar2 + -1) {
    <serde_json[dc3825464c436029]::value::Value>(lVar1);
    lVar1 = lVar1 + 0x20;
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


