// 0064c640 {shim:vtable#0}

/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::get_or_init<craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::acp_backend::Sqlite3Api>>>::get_or_init<craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api>::{closure#0},!>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar1 = *(undefined8 **)*param_1;
  *(longlong *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  craggemini_core[66f3c71560d70857]::acp_backend::load_sqlite3_api(&local_58);
  puVar1[8] = local_18;
  puVar1[9] = uStack_10;
  puVar1[6] = local_28;
  puVar1[7] = uStack_20;
  puVar1[4] = local_38;
  puVar1[5] = uStack_30;
  puVar1[2] = local_48;
  puVar1[3] = uStack_40;
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  return;
}


