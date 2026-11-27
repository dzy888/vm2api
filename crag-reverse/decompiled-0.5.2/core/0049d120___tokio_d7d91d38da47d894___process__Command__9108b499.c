// 0049d120 <tokio[d7d91d38da47d894]::process::Command>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::process::Command>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_1[0x11];
  *(undefined1 *)param_1[0x10] = 0;
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  (*(code *)PTR_drop_00799140)();
  lVar2 = 0;
  if (*param_1 != 0) {
    lVar2 = *param_1 << 3;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<std[6c98fd8553dbae28]::ffi::os_str::OsString,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::ffi::os_str::OsString>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 0xc,lVar2);
  if (((undefined1 *)param_1[0x12] != (undefined1 *)0x0) &&
     (lVar2 = param_1[0x13], *(undefined1 *)param_1[0x12] = 0, lVar2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  if (((undefined1 *)param_1[0x14] != (undefined1 *)0x0) &&
     (lVar2 = param_1[0x15], *(undefined1 *)param_1[0x14] = 0, lVar2 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(),Output=()>+core[c0acaeba6ab4c2e0]::marker::Send>>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1 + 3);
  if (param_1[3] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if ((param_1[0x16] != 0) && (param_1[0x17] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,4);
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


