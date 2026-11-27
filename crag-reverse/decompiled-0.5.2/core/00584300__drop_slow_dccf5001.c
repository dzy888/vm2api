// 00584300 drop_slow

/* WARNING: Switch with 1 destination removed at 0x005843e0 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>>::
drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x80);
  for (lVar4 = *(longlong *)(lVar2 + 0x88) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>
              (lVar3);
    lVar3 = lVar3 + 0x80;
  }
  lVar3 = 0;
  if (*(longlong *)(lVar2 + 0x78) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x78) << 7;
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (*(longlong *)(lVar2 + 0xa8) != 0) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <tokio[d7d91d38da47d894]::sync::mpsc::bounded::Sender<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
              (lVar2 + 0xa8,lVar3);
  }
  lVar3 = *(longlong *)(lVar2 + 0x98);
  for (lVar4 = *(longlong *)(lVar2 + 0xa0) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>
              (lVar3);
    lVar3 = lVar3 + 0x50;
  }
  if (*(longlong *)(lVar2 + 0x90) != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


