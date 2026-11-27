// 00551400 <<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_, _> as
   core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::{closure#0}::Guard<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<<tokio[d7d91d38da47d894]::sync::mpsc::chan::Rx<_,_>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop::_closure_0_::Guard<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong local_98 [3];
  longlong local_80;
  longlong local_68;
  undefined1 local_50 [32];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
  ::pop(local_98,uVar1,uVar2);
  puVar4 = PTR___rust_dealloc_00798fc8;
  uVar3 = local_98[0];
  while (uVar3 < 0xfffffffffffffffe) {
    local_98[0] = uVar3;
    (*(code *)PTR_add_permit_00799da0)();
    if (uVar3 != 0) {
      (*(code *)puVar4)(param_4,1);
    }
    if (local_80 != 0) {
      (*(code *)puVar4)(param_4,1);
    }
    if (local_68 != 0) {
      (*(code *)puVar4)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(local_50);
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
    ::pop(local_98,uVar1,uVar2);
    uVar3 = local_98[0];
  }
  return;
}


