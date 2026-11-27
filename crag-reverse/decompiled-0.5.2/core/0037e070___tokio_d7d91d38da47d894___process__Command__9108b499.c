// 0037e070 <tokio[d7d91d38da47d894]::process::Command>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  
  lVar2 = param_1[0x11];
  *(undefined1 *)param_1[0x10] = 0;
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_drop_00799140)();
  if (*param_1 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar2 = param_1[0xc];
  if (lVar2 == 0) {
    local_50 = 0;
  }
  else {
    local_78 = param_1[0xd];
    local_50 = param_1[0xe];
    local_88 = 0;
    local_68 = 0;
    local_80 = lVar2;
    local_60 = lVar2;
    local_58 = local_78;
  }
  local_90 = (ulonglong)(lVar2 != 0);
  local_70 = local_90;
  while (<alloc[12e961f32105355]::collections::btree::map::IntoIter<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>>
         ::dying_next(local_48,&local_90), lVar4 = local_38, lVar2 = local_48[0], local_48[0] != 0)
  {
    if (*(longlong *)(local_48[0] + 8 + local_38 * 0x18) != 0) {
      (*(code *)puVar3)();
    }
    lVar2 = *(longlong *)(lVar4 * 0x18 + 0x110 + lVar2);
    if ((lVar2 != -1) && (lVar2 != 0)) {
      (*(code *)puVar3)();
    }
  }
  if (((undefined1 *)param_1[0x12] != (undefined1 *)0x0) &&
     (lVar2 = param_1[0x13], *(undefined1 *)param_1[0x12] = 0, lVar2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if (((undefined1 *)param_1[0x14] != (undefined1 *)0x0) &&
     (lVar2 = param_1[0x15], *(undefined1 *)param_1[0x14] = 0, lVar2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 3);
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((param_1[0x16] != 0) && (param_1[0x17] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  if ((int)param_1[9] == 3) {
    (*(code *)PTR_close_00799030)();
    iVar1 = (int)param_1[10];
  }
  else {
    iVar1 = (int)param_1[10];
  }
  if (iVar1 == 3) {
    (*(code *)PTR_close_00799030)();
    iVar1 = (int)param_1[0xb];
  }
  else {
    iVar1 = (int)param_1[0xb];
  }
  if (iVar1 == 3) {
    (*(code *)PTR_close_00799030)();
    return;
  }
  return;
}


