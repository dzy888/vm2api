// 00754dc0 env_clear

/* <std[6c98fd8553dbae28]::process::Command>::env_clear */

longlong __rustcall <std[6c98fd8553dbae28]::process::Command>::env_clear(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  longlong lVar3;
  ulonglong local_98 [3];
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  longlong local_40;
  longlong local_38;
  
  *(undefined1 *)(param_1 + 0x78) = 1;
  lVar1 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  local_58 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar1 == 0) {
    local_58 = 0;
  }
  else {
    local_98[1] = 0;
    local_70 = 0;
    local_98[2] = lVar1;
    local_80 = *(undefined8 *)(param_1 + 0x68);
    local_68 = lVar1;
    local_60 = *(undefined8 *)(param_1 + 0x68);
  }
  local_98[0] = (ulonglong)(lVar1 != 0);
  local_78 = local_98[0];
  local_38 = param_1;
  <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
  ::dying_next(local_50,local_98);
  puVar2 = PTR___rust_dealloc_00798fc8;
  if (local_50[0] != 0) {
    do {
      lVar3 = local_40;
      lVar1 = local_50[0];
      if (*(longlong *)(local_50[0] + 8 + local_40 * 0x18) != 0) {
        (*(code *)puVar2)();
      }
      if (0 < *(longlong *)(lVar3 * 0x18 + 0x110 + lVar1)) {
        (*(code *)puVar2)();
      }
      <alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,std[6c98fd8553dbae28]::ffi::os_str::OsString>>
      ::dying_next(local_50,local_98);
    } while (local_50[0] != 0);
  }
  return local_38;
}


