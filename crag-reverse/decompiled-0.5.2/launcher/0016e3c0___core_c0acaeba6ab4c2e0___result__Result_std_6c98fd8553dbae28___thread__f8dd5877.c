// 0016e3c0 <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,
   core[c0acaeba6ab4c2e0]::io::error::Error>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>,core[c0acaeba6ab4c2e0]::io::error::Error>>
          (longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 == 0) {
    if ((1 < ((uint)param_1[1] & 3) - 2) && ((param_1[1] & 3U) != 0)) {
      (*(code *)PTR_drop_00219c58)();
    }
    return;
  }
  (*(code *)PTR_drop_00219e20)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00219e28)();
  }
  plVar1 = (longlong *)param_1[1];
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(param_1 + 1);
    return;
  }
  return;
}


