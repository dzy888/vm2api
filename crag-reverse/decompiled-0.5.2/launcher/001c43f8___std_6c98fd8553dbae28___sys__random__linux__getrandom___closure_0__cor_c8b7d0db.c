// 001c43f8 <std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},core[c0acaeba6ab4c2e0]::io::error::Error>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize::<std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},
   core[c0acaeba6ab4c2e0]::io::error::Error> */

undefined8 __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::fs::File>>::initialize::
<std[6c98fd8553dbae28]::sys::random::linux::getrandom::_closure_0_,core[c0acaeba6ab4c2e0]::io::error::Error>
          (void)

{
  undefined4 *local_30;
  undefined8 *local_28;
  undefined4 **local_20;
  undefined8 local_18;
  
  local_18 = 0;
  if (std[6c98fd8553dbae28]::sys::random::linux::getrandom::DEVICE != 0) {
    local_20 = &local_30;
    local_30 = &DAT_0021c850;
    local_28 = &local_18;
    (*(code *)PTR_call_0021a698)
              (&DAT_00217218,&local_20,&PTR_s__rustc_48a229ceaefd4985c50990b14_002171b0);
  }
  return local_18;
}


