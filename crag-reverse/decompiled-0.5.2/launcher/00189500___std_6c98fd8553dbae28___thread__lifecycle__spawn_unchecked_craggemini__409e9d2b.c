// 00189500 <std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},()>::{closure#1}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::{closure#2},
   ()>::{closure#1}> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<std[6c98fd8553dbae28]::thread::lifecycle::spawn_unchecked<craggemini[b21da2d71f2da7a3]::mcp_stdio::run_internal_mcp_stdio::_closure_2_,()>::_closure_1_>
          (longlong param_1)

{
  longlong *plVar1;
  
  <std[6c98fd8553dbae28]::sync::mpmc::Receiver<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop();
  <std[6c98fd8553dbae28]::thread::spawnhook::ChildSpawnHooks>(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::thread::lifecycle::Packet<()>>>::
    drop_slow(param_1 + 0x30);
    return;
  }
  return;
}


