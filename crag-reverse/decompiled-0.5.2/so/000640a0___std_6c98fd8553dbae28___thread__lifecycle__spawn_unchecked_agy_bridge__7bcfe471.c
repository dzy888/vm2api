// 000640a0 <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},()>::{closure#1}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::{closure#2},
   ()>::{closure#1}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<agy_bridge[64a9e9deac6c45ce]::start::_closure_2_,()>::_closure_1_>
          (longlong param_1)

{
  longlong *plVar1;
  
  <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>();
  plVar1 = *(longlong **)(param_1 + 0x20);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(param_1 + 0x20);
    return;
  }
  return;
}


