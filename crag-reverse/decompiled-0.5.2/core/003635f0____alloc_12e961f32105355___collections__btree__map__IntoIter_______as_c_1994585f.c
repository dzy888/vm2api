// 003635f0 <<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,
   _, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value, alloc[12e961f32105355]::alloc::Global>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<alloc[12e961f32105355]::collections::btree::map::IntoIter<_,_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::DropGuard<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::alloc::Global>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_40 [2];
  longlong local_30;
  
  uVar1 = *param_1;
  ::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
  ::dying_next(local_40,uVar1);
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_40[0] != 0) {
    do {
      lVar4 = local_30;
      lVar3 = local_40[0];
      if (*(longlong *)(local_40[0] + 0x168 + local_30 * 0x18) != 0) {
        (*(code *)puVar2)(param_4,1);
      }
      <serde_json[dc3825464c436029]::value::Value>(lVar3 + lVar4 * 0x20);
      ::
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::dying_next(local_40,uVar1);
    } while (local_40[0] != 0);
  }
  return;
}


