// 0025ac50 <<tokio[d7d91d38da47d894]::sync::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::Child>>>::lock::{closure#0}::{closure#0}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::Child>>>::lock::{closure#0}::{closure#0}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mutex::Mutex<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::process::Child>>>::lock::_closure_0_::_closure_0_>
          (longlong param_1)

{
  if ((*(char *)(param_1 + 0x60) == '\x03') && (*(char *)(param_1 + 0x18) == '\x04')) {
    (*(code *)PTR_drop_00799100)();
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0025ac81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))();
      return;
    }
  }
  return;
}


