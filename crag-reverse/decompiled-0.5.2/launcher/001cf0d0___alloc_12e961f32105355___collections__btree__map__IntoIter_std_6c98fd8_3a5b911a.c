// 001cf0d0 <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,
   std[6c98fd8553dbae28]::ffi::os_str::OsString>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_48 [2];
  longlong local_38;
  
  ::
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
  ::dying_next(local_48,param_1);
  puVar1 = PTR___rust_dealloc_00219c40;
  if (local_48[0] != 0) {
    do {
      lVar3 = local_38;
      lVar2 = local_48[0];
      if (*(longlong *)(local_48[0] + 8 + local_38 * 0x18) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x18 + 0x110) != 0) {
        (*(code *)puVar1)(param_4,1);
      }
      ::
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::dying_next(local_48,param_1);
    } while (local_48[0] != 0);
  }
  return;
}


