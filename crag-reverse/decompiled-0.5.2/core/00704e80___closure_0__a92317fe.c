// 00704e80 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  puVar1 = *(undefined8 **)*param_1;
  *(longlong *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  tokio[d7d91d38da47d894]::signal::registry::globals_init(&local_20);
  puVar1[2] = local_10;
  *puVar1 = local_20;
  puVar1[1] = uStack_18;
  return;
}


