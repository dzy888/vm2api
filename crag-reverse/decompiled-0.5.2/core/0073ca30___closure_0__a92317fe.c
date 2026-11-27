// 0073ca30 {closure#0}

/* <std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} */

void __rustcall
<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force::
<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::reentrant_lock::ReentrantLock<core[c0acaeba6ab4c2e0]::cell::RefCell<std[6c98fd8553dbae28]::io::buffered::linewriter::LineWriter<std[6c98fd8553dbae28]::io::stdio::StdoutRaw>>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdout::{closure#0}>::{closure#0},!>::{closure#0}>
::_closure_0_(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  puVar1 = *(undefined8 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 != 0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0x400;
      puVar1[4] = lVar3;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 6) = 0;
      return;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


