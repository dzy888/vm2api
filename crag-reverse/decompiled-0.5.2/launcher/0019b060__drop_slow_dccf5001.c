// 0019b060 drop_slow

/* WARNING: Switch with 1 destination removed at 0x0019b0e5 */
/* <alloc[12e961f32105355]::sync::Arc<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig>>::drop_slow
    */

void __rustcall
<alloc[12e961f32105355]::sync::Arc<craggemini[b21da2d71f2da7a3]::mcp_stdio::McpBridgeFileConfig>>::
drop_slow(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x10) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (*(longlong *)(lVar2 + 0x28) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if ((*(longlong *)(lVar2 + 0x58) != -1) && (*(longlong *)(lVar2 + 0x58) != 0)) {
    (*(code *)PTR___rust_dealloc_00219c40)(param_4,1);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      (*(code *)PTR_free_0021a8b8)(param_4,8);
      return;
    }
  }
  return;
}


