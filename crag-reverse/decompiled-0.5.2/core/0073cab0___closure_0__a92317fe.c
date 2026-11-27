// 0073cab0 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::cleanup::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  param_1 = (undefined8 *)*param_1;
  puVar1 = (undefined1 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  *param_1 = 0;
  if (puVar1 == (undefined1 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *puVar1 = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 1;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 6) = 0;
  return;
}


