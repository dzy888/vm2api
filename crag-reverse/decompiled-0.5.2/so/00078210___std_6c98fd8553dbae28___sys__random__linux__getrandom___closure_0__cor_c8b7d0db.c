// 00078210 <std[6c98fd8553dbae28]::sys::random::linux::getrandom::{closure#0},core[c0acaeba6ab4c2e0]::io::error::Error>

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
    local_30 = &DAT_000c6694;
    local_28 = &local_18;
    (*(code *)PTR_call_000c3ef0)
              (&DAT_000c12a0,&local_20,
               &PTR_anon_a096e19ef5e60642f162739f9e865059_1_llvm_12347187141279222813_000c1260);
  }
  return local_18;
}


