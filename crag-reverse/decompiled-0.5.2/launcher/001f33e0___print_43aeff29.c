// 001f33e0 _print

/* std[6c98fd8553dbae28]::io::stdio::_print */

void __rustcall
std[6c98fd8553dbae28]::io::stdio::_print
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  char cVar2;
  undefined *local_58;
  undefined8 local_50;
  undefined8 **local_48;
  code *local_40;
  longlong *local_38;
  undefined *local_30;
  undefined8 *local_28;
  longlong local_20;
  
  local_58 = &DAT_0012eab2;
  local_50 = 6;
  cVar2 = print_to_buffer_if_capture_used();
  if (cVar2 == '\0') {
    if (DAT_0021beb8 != 0) {
      <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>
      ::initialize::
      <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::_closure_0_>::_closure_0_,_>
                ();
    }
    local_28 = &STDOUT;
    local_48 = &local_28;
    local_20 = (*(code *)PTR_write_fmt_0021aac8)(param_4,param_2);
    if (local_20 != 0) {
      local_48 = (undefined8 **)&local_58;
      local_40 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
      local_38 = &local_20;
      local_30 = PTR_fmt_00219ec8;
      (*(code *)PTR_panic_fmt_0021a010)(param_4,&PTR_s__rustc_48a229ceaefd4985c50990b14_00217548);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}


