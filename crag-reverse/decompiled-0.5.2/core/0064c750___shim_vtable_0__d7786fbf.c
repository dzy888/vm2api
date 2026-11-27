// 0064c750 {shim:vtable#0}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>>::get_or_init<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::new>::{closure#0},!>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  puVar1 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    plVar6 = (longlong *)
             <<std[6c98fd8553dbae28]::hash::random::RandomState>::new::KEYS::{K#0}::{closure#1}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(core[c0acaeba6ab4c2e0]::option::Option<&mut_core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::cell::Cell<(u64,u64)>>>,)>>
             ::call_once(0);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = *plVar6;
      lVar4 = plVar6[1];
      *plVar6 = *plVar6 + 1;
      *puVar1 = 0x200;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
      puVar1[2] = 0;
      puVar1[3] = 8;
      puVar1[4] = 0;
      puVar1[5] = 0;
      uVar5 = _UNK_0078f4c0;
      puVar1[6] = anon_1b4a85c95499e1b671cf4fa96a1b6d0f_365_llvm_10049508496007902178;
      puVar1[7] = uVar5;
      uVar5 = _UNK_0078f4d0;
      puVar1[8] = _DAT_0078f4c8;
      puVar1[9] = uVar5;
      puVar1[10] = lVar3;
      puVar1[0xb] = lVar4;
      puVar1[0xc] = 0x708;
      *(undefined4 *)(puVar1 + 0xd) = 0;
      return;
    }
  }
  (*(code *)PTR_panic_access_error_00799458)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


