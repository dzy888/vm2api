// 0070bf70 {shim:vtable#0}

/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once<<signal_hook_registry[9dd8ecc3788bb260]::GlobalData>::ensure::{closure#0}>::{closure#0}
   as 
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

undefined8 __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once<<signal_hook_registry[9dd8ecc3788bb260]::GlobalData>::ensure::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  <std[6c98fd8553dbae28]::sync::once::Once>::call_once::
  <<signal_hook_registry[9dd8ecc3788bb260]::GlobalData>::ensure::{closure#0}>::_closure_0_(&local_8)
  ;
  return local_8;
}


