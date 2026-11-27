// 00251970 <core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>

/* core[c0acaeba6ab4c2e0]::mem::drop::<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::mem::drop::
<core[c0acaeba6ab4c2e0]::option::Option<tokio[d7d91d38da47d894]::sync::mutex::OwnedMutexGuard<()>>>
          (longlong *param_1)

{
  longlong *local_18;
  
  if (param_1 != (longlong *)0x0) {
    local_18 = param_1;
    (*(code *)PTR_release_00799050)();
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mutex::Mutex<()>>>::
      drop_slow(&local_18,1);
    }
  }
  return;
}


