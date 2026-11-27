// 00189570 <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#3},()>::{closure#1}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#3},
   ()>::{closure#1}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_3_,()>::_closure_1_>
          (longlong param_1)

{
  longlong *plVar1;
  
  <craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_3_>();
  <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x60);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(param_1 + 0x60);
    return;
  }
  return;
}


