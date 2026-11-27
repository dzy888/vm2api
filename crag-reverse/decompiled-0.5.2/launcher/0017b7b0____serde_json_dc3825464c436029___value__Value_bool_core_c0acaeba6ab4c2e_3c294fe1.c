// 0017b7b0 <(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<(serde_json[dc3825464c436029]::value::Value, bool,
   core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_78 [3];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(longlong *)(param_1 + 8) != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
      }
    }
    else if (bVar1 == 4) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      for (lVar3 = *(longlong *)(param_1 + 0x18) + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
        <serde_json[dc3825464c436029]::value::Value>(lVar2);
        lVar2 = lVar2 + 0x20;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
    }
    else {
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == 0) {
        local_38 = 0;
      }
      else {
        local_60 = *(undefined8 *)(param_1 + 0x10);
        local_38 = *(undefined8 *)(param_1 + 0x18);
        local_78[1] = 0;
        local_50 = 0;
        local_78[2] = lVar2;
        local_48 = lVar2;
        local_40 = local_60;
      }
      local_78[0] = (ulonglong)(lVar2 != 0);
      local_58 = local_78[0];
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                (local_78);
    }
  }
  if (*(int *)(param_1 + 0x28) == -1) {
    return;
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<()>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop
            (param_1 + 0x28);
  return;
}


