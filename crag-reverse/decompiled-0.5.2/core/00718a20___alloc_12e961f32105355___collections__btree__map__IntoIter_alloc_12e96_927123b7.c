// 00718a20 <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_40 [2];
  longlong local_30;
  
  ::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(local_40,param_1);
  puVar1 = PTR___rust_dealloc_00798fc8;
  if (local_40[0] != 0) {
    do {
      lVar3 = local_30;
      lVar2 = local_40[0];
      if (*(longlong *)(local_40[0] + 0x168 + local_30 * 0x18) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      <serde_json[dc3825464c436029]::value::Value>(lVar2 + lVar3 * 0x20);
      ::
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::dying_next(local_40,param_1);
    } while (local_40[0] != 0);
  }
  return;
}


