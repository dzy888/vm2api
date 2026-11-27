// 000781b8 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::{closure#0}>::{closure#0},!>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  
  if (_DAT_000c5d38 == 0) {
    return;
  }
  local_18 = &local_30;
  local_28 = &std[6c98fd8553dbae28]::io::stdio::STDOUT;
  local_20 = &local_9;
  local_30 = param_1;
  (*(code *)PTR_call_000c3ef0)
            (&DAT_000c1278,&local_18,
             &PTR_anon_a096e19ef5e60642f162739f9e865059_1_llvm_12347187141279222813_000c1260);
  return;
}


