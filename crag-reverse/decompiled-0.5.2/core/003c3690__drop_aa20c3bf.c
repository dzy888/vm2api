// 003c3690 drop

/* WARNING: Switch with 1 destination removed at 0x003c3744 */
/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>
   as core[c0acaeba6ab4c2e0]::ops::drop::Drop>::drop */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
::drop(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  puVar2 = PTR___rust_dealloc_00798fc8;
  plVar4 = *(longlong **)(param_1 + 8);
  for (lVar3 = ((ulonglong)(*(longlong *)(param_1 + 0x18) - (longlong)plVar4) >> 3) *
               0x4ec4ec4ec4ec4ec5 + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
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
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


