// 00557fb0 <tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>

/* WARNING: Switch with 1 destination removed at 0x00558019 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::loom::std::unsafe_cell::UnsafeCell<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (lVar1 != -1) {
    lVar2 = param_1[1];
    for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <serde_json[dc3825464c436029]::value::Value>(lVar2);
      lVar2 = lVar2 + 0x20;
    }
    if (lVar1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


