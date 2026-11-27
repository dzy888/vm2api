// 00393fa0 drop

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong local_78 [2];
  longlong local_68;
  ulonglong local_60 [3];
  longlong local_48;
  ulonglong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_48 = param_1[1];
    local_20 = param_1[2];
    local_60[1] = 0;
    local_38 = 0;
    local_60[2] = lVar1;
    local_30 = lVar1;
    local_28 = local_48;
  }
  local_60[0] = (ulonglong)(lVar1 != 0);
  local_40 = local_60[0];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
  ::dying_next(local_78,local_60);
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_78[0] != 0) {
    do {
      if (*(longlong *)(local_78[0] + 8 + local_68 * 0x18) != 0) {
        (*(code *)puVar2)(local_68 * 3,1);
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
      ::dying_next(local_78,local_60);
    } while (local_78[0] != 0);
  }
  return;
}


