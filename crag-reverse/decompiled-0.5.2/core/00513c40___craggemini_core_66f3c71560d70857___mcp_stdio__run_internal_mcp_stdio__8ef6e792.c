// 00513c40 <craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#6}>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::{closure#6}>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<craggemini_core[66f3c71560d70857]::mcp_stdio::run_internal_mcp_stdio::_closure_6_>
          (longlong param_1)

{
  longlong *plVar1;
  
  LOCK();
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  plVar1 = *(longlong **)(param_1 + 0x60);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    (*(code *)PTR_drop_slow_00799c60)();
  }
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x20);
  <serde_json[dc3825464c436029]::value::Value>(param_1 + 0x40);
  plVar1 = *(longlong **)(param_1 + 0x68);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<std[6c98fd8553dbae28]::sync::poison::mutex::Mutex<std[6c98fd8553dbae28]::collections::hash::map::HashMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String>>>>
    ::drop_slow(param_1 + 0x68);
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp_stdio::McpBridgeFileConfig>>
    ::drop_slow(param_1 + 0x70);
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    <alloc[12e961f32105355]::sync::Arc<core[c0acaeba6ab4c2e0]::option::Option<alloc[12e961f32105355]::string::String>>>
    ::drop_slow(param_1 + 0x78);
  }
  <std[6c98fd8553dbae28]::sync::mpmc::Sender<(serde_json[dc3825464c436029]::value::Value,bool,core[c0acaeba6ab4c2e0]::option::Option<std[6c98fd8553dbae28]::sync::mpsc::SyncSender<()>>)>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
  ::drop(param_1);
  return;
}


