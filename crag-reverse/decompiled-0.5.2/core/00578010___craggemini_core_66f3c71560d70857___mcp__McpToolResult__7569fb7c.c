// 00578010 <craggemini_core[66f3c71560d70857]::mcp::McpToolResult>

/* tokio[d7d91d38da47d894]::sync::oneshot::channel::<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>
    */

void __rustcall
tokio[d7d91d38da47d894]::sync::oneshot::channel::
<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>(void)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    plVar3[10] = 0;
    plVar3[8] = local_28;
    plVar3[9] = lStack_20;
    plVar3[6] = local_38;
    plVar3[7] = lStack_30;
    plVar3[4] = local_48;
    plVar3[5] = lStack_40;
    plVar3[2] = -1;
    plVar3[3] = lStack_50;
    *plVar3 = 1;
    plVar3[1] = 1;
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


