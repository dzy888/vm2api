// 00066060 {shim:vtable#0}

/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::get_or_init<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<agy_bridge[64a9e9deac6c45ce]::Runtime>>::try_insert::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined *puVar5;
  
  param_1 = (undefined8 *)*param_1;
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)param_1[1];
  *param_1 = 0;
  if (plVar1 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_000c3b08)();
  }
  else {
    lVar3 = *plVar1;
    *plVar1 = -1;
    puVar5 = PTR_memcpy_000c3aa8;
    if (lVar3 != -1) {
      (*(code *)PTR_memcpy_000c3aa8)(param_4,0x4c8);
      *plVar2 = lVar3;
      (*(code *)puVar5)(param_4,0x4c8);
      return;
    }
  }
  (*(code *)PTR_unwrap_failed_000c3b08)();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


