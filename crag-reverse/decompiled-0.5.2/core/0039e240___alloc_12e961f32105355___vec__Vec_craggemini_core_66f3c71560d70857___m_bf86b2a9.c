// 0039e240 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>

/* WARNING: Switch with 1 destination removed at 0x0039e2e8 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  plVar4 = (longlong *)param_1[1];
  for (lVar3 = param_1[2] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    if (*plVar4 != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    if (plVar4[3] != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    if (plVar4[6] != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    plVar1 = plVar4 + 9;
    plVar4 = plVar4 + 0xd;
    <serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


