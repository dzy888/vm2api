// 005547a0 <alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>

/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  longlong lVar2;
  ulonglong local_98 [3];
  longlong local_80;
  longlong local_68;
  undefined1 local_50 [32];
  
  puVar1 = PTR___rust_dealloc_00798fc8;
  while( true ) {
    <tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
    ::pop(local_98,param_1 + 0x1a0,param_1 + 0x80);
    if (0xfffffffffffffffd < local_98[0]) break;
    if (local_98[0] != 0) {
      (*(code *)puVar1)(param_4,1);
    }
    if (local_80 != 0) {
      (*(code *)puVar1)(param_4,1);
    }
    if (local_68 != 0) {
      (*(code *)puVar1)(param_4,1);
    }
    <serde_json[dc3825464c436029]::value::Value>(local_50);
  }
  lVar2 = *(longlong *)(param_1 + 0x1a8);
  do {
    lVar2 = *(longlong *)(lVar2 + 0xd08);
    (*(code *)puVar1)(param_4,8);
  } while (lVar2 != 0);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055487c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x100) + 0x18))();
  return;
}


