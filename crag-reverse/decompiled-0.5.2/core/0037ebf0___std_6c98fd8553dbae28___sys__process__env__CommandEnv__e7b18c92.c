// 0037ebf0 <std[6c98fd8553dbae28]::sys::process::env::CommandEnv>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::process::env::CommandEnv> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::sys::process::env::CommandEnv>
          (longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong local_88 [2];
  longlong local_78;
  ulonglong local_70 [3];
  longlong local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    local_30 = 0;
  }
  else {
    local_58 = param_1[1];
    local_30 = param_1[2];
    local_70[1] = 0;
    local_48 = 0;
    local_70[2] = lVar1;
    local_40 = lVar1;
    local_38 = local_58;
  }
  local_70[0] = (ulonglong)(lVar1 != 0);
  local_50 = local_70[0];
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
  ::dying_next(local_88,local_70);
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_88[0] != 0) {
    do {
      lVar3 = local_78;
      lVar1 = local_88[0];
      if (*(longlong *)(local_88[0] + 8 + local_78 * 0x18) != 0) {
        (*(code *)puVar2)();
      }
      lVar1 = *(longlong *)(lVar1 + lVar3 * 0x18 + 0x110);
      if ((lVar1 != -1) && (lVar1 != 0)) {
        (*(code *)puVar2)();
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
      ::dying_next(local_88,local_70);
    } while (local_88[0] != 0);
  }
  return;
}


