// 00254dc0 <alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>

/* WARNING: Switch with 1 destination removed at 0x00254ea0 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::sync::ArcInner<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  for (lVar4 = *(longlong *)(param_1 + 0x88) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    <craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>(lVar3);
    lVar3 = lVar3 + 0x80;
  }
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x78) << 7;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xa8);
    <tokio[d7d91d38da47d894]::sync::mpsc::chan::Tx<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
    ::drop(puVar1,lVar3);
    plVar2 = (longlong *)*puVar1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::mpsc::chan::Chan<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,tokio[d7d91d38da47d894]::sync::mpsc::bounded::Semaphore>>>
      ::drop_slow(puVar1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  for (lVar4 = *(longlong *)(param_1 + 0xa0) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    <craggemini_core[66f3c71560d70857]::mcp::ParkedCall>(lVar3);
    lVar3 = lVar3 + 0x50;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


