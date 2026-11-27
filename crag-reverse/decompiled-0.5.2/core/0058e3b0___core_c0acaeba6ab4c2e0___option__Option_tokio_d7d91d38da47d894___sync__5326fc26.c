// 0058e3b0 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    (*(code *)PTR_release_00799050)();
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
      drop_slow(param_1,1);
      return;
    }
  }
  return;
}


