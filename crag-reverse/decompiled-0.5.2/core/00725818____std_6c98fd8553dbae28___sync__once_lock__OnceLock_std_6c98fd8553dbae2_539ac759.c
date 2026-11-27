// 00725818 <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::{closure#0}>::{closure#0},!>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::{closure#0}>::{closure#0},
   !> */

void __rustcall
<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
::initialize::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::_closure_0_>::_closure_0_,_>
          (void)

{
  undefined8 *local_28;
  undefined1 *local_20;
  undefined8 **local_18;
  undefined1 local_9;
  
  if (_DAT_0079c608 == 0) {
    return;
  }
  local_18 = &local_28;
  local_28 = &std[6c98fd8553dbae28]::io::stdio::STDOUT;
  local_20 = &local_9;
  (*(code *)PTR_call_0079a178)
            (&DAT_00795fa0,&local_18,
             &PTR_anon_c153c4d816f71af2accb98944a80e600_1_llvm_2617760850115737065_00795fc8);
  return;
}


