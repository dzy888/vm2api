// 003ca170 <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>

/* WARNING: Switch with 1 destination removed at 0x003ca200 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,
   (alloc[12e961f32105355]::string::String, alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  puVar3 = PTR___rust_dealloc_00798fc8;
  plVar5 = (longlong *)*param_1;
  lVar2 = param_1[2];
  for (lVar4 = param_1[1] + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
    if (*plVar5 != 0) {
      (*(code *)puVar3)(param_4,1);
    }
    if (plVar5[3] != 0) {
      (*(code *)puVar3)(param_4,1);
    }
    plVar1 = plVar5 + 6;
    plVar5 = plVar5 + 10;
    <serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  if (lVar2 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


