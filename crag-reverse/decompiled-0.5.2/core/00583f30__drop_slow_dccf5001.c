// 00583f30 drop_slow

/* WARNING: Switch with 1 destination removed at 0x00584029 */
/* <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>::drop_slow */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
::drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong local_98 [3];
  longlong local_80;
  longlong local_68;
  undefined1 local_50 [32];
  
  puVar3 = PTR___rust_dealloc_00798fc8;
  lVar2 = *param_1;
  while (<tokio[d7d91d38da47d894]::sync::mpsc::list::Rx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
         ::pop(local_98,lVar2 + 0x1a0,lVar2 + 0x80), local_98[0] < 0xfffffffffffffffe) {
    if (local_98[0] != 0) {
      (*(code *)puVar3)(param_4,1);
    }
    if (local_80 != 0) {
      (*(code *)puVar3)(param_4,1);
    }
    if (local_68 != 0) {
      (*(code *)puVar3)(param_4,1);
    }
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_50);
  }
  lVar4 = *(longlong *)(lVar2 + 0x1a8);
  do {
    lVar4 = *(longlong *)(lVar4 + 0xd08);
    (*(code *)puVar3)(param_4,8);
  } while (lVar4 != 0);
  if (*(longlong *)(lVar2 + 0x100) != 0) {
    (**(code **)(*(longlong *)(lVar2 + 0x100) + 0x18))();
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,0x80);
      return;
    }
  }
  return;
}


