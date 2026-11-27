// 001c434c <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::{closure#0}>::{closure#0},!>

/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::_closure_0_>::_closure_0_,_>
          (undefined8 param_1)

{
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  undefined1 local_9;
  
  if (DAT_0021beb8 == 0) {
    return;
  }
  local_18 = &local_30;
  local_28 = &std[6c98fd8553dbae28]::io::stdio::STDOUT;
  local_20 = &local_9;
  local_30 = param_1;
  (*(code *)PTR_call_0021a698)
            (&DAT_002171c8,&local_18,&PTR_s__rustc_48a229ceaefd4985c50990b14_002171b0);
  return;
}


