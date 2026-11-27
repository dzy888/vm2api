// 00730e40 <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
          (longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong local_90 [3];
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[1];
    local_50 = param_1[2];
    local_90[1] = 0;
    local_68 = 0;
    local_90[2] = lVar1;
    local_60 = lVar1;
    local_58 = local_78;
  }
  local_90[0] = (ulonglong)(lVar1 != 0);
  local_70 = local_90[0];
  ::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
  ::dying_next(local_48,local_90);
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_48[0] != 0) {
    do {
      lVar3 = local_38;
      lVar1 = local_48[0];
      if (*(longlong *)(local_48[0] + 8 + local_38 * 0x18) != 0) {
        (*(code *)puVar2)();
      }
      if (*(longlong *)(lVar1 + lVar3 * 0x18 + 0x110) != 0) {
        (*(code *)puVar2)();
      }
      ::
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::dying_next(local_48,local_90);
    } while (local_48[0] != 0);
  }
  return;
}


