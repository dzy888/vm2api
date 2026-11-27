// 003b0550 forget_allocation_drop_remaining

/* <alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>::forget_allocation_drop_remaining
    */

void __rustcall
<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::mcp::McpIncomingCall>>
::forget_allocation_drop_remaining
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)param_1[1];
  lVar4 = param_1[3];
  param_1[2] = 0;
  *param_1 = 8;
  param_1[1] = 8;
  param_1[3] = 8;
  puVar2 = PTR___rust_dealloc_00798fc8;
  for (lVar4 = ((ulonglong)(lVar4 - (longlong)plVar3) >> 3) * 0x4ec4ec4ec4ec4ec5 + 1; lVar4 != 1;
      lVar4 = lVar4 + -1) {
    if (*plVar3 != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    if (plVar3[3] != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    if (plVar3[6] != 0) {
      (*(code *)puVar2)(param_4,1);
    }
    plVar1 = plVar3 + 9;
    plVar3 = plVar3 + 0xd;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(plVar1);
  }
  return;
}


