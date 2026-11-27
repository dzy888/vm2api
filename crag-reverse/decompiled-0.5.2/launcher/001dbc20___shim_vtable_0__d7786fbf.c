// 001dbc20 {shim:vtable#0}

/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},
   core[c0acaeba6ab4c2e0]::io::error::Error>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},core[c0acaeba6ab4c2e0]::io::error::Error>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_10;
  
  local_10 = *param_1;
  <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
  <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},core[c0acaeba6ab4c2e0]::io::error::Error>::{closure#0}>
  ::_closure_0_(&local_10);
  return;
}


