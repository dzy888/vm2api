// 00513b80 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#5}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#5}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_5_>
          (longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp_stdio::McpBridgeFileConfig>>
    ::drop_slow(param_1 + 0x30);
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>
    ::drop_slow(param_1 + 0x38);
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x10);
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1);
  plVar1 = *(longlong **)(param_1 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::sync::atomic::Atomic<bool>>>::
    drop_slow(param_1 + 0x40);
    return;
  }
  return;
}


