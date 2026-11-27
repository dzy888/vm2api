// 0073e7e0 {shim:vtable#0}

/* <<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::{closure#0}>::{closure#0},
   !>::{closure#0}>::{closure#0} as
   core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>::call_once::{shim:vtable#0}
    */

void __rustcall
<<std[6c98fd8553dbae28]::sync::once::Once>::call_once_force<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::initialize<<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::io::buffered::bufreader::BufReader<std[6c98fd8553dbae28]::io::stdio::StdinRaw>>>>::get_or_init<std[6c98fd8553dbae28]::io::stdio::stdin::{closure#0}>::{closure#0},!>::{closure#0}>::{closure#0}as_core[c0acaeba6ab4c2e0]::ops::function::FnOnce<(&std[6c98fd8553dbae28]::sync::once::OnceState,)>>
::call_once::_shim_vtable_0_(undefined8 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  
  puVar1 = *(undefined4 **)*param_1;
  *(undefined8 *)*param_1 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar3 != 0) {
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(longlong *)(puVar1 + 2) = lVar3;
      *(undefined8 *)(puVar1 + 4) = 0x2000;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined1 *)(puVar1 + 10) = 0;
      return;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


