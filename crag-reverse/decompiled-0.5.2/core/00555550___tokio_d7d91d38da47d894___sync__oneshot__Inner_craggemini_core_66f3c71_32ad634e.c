// 00555550 <tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>

/* WARNING: Switch with 1 destination removed at 0x005555d5 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[8];
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if ((uVar1 & 8) != 0) {
    (*(code *)PTR_drop_task_00799060)();
  }
  if (*param_1 != -1) {
    lVar2 = param_1[1];
    for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
      <serde_json[dc3825464c436029]::value::Value>(lVar2);
      lVar2 = lVar2 + 0x20;
    }
    if (*param_1 != 0) {
      (*(code *)PTR_free_0079adc8)(param_4,8);
      return;
    }
  }
  return;
}


