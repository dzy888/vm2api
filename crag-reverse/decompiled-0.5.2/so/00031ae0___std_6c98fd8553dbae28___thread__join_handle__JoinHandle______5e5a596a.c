// 00031ae0 <std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::join_handle::JoinHandle<()>>
          (undefined8 *param_1)

{
  longlong *plVar1;
  
  (*(code *)PTR_drop_000c3ae8)();
  plVar1 = (longlong *)*param_1;
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_000c3af0)();
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


