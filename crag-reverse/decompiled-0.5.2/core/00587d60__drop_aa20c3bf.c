// 00587d60 drop

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = (*(code *)PTR_set_complete_00799058)();
    if ((uVar2 & 5) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00587d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(lVar1 + 0x40) + 0x10))();
      return;
    }
  }
  return;
}


