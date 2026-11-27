// 005826a0 send

/* <tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>::send
    */

longlong * __rustcall
<tokio[d7d91d38da47d894]::sync::oneshot::Sender<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
::send(undefined4 param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *local_48 [2];
  undefined8 local_38;
  
  local_38 = 0;
  if (param_3 == (longlong *)0x0) {
    (*(code *)PTR_unwrap_failed_00799278)();
LAB_005827cd:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  plVar1 = param_3 + 2;
  plVar12 = param_3;
  local_48[0] = param_3;
  if (param_3[2] != -1) {
    lVar13 = param_3[3];
    for (lVar11 = param_3[4] + 1; lVar11 != 1; lVar11 = lVar11 + -1) {
      param_1 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (lVar13);
      lVar13 = lVar13 + 0x20;
    }
    plVar12 = (longlong *)0x0;
    if (*plVar1 != 0) {
      plVar12 = (longlong *)(*plVar1 << 5);
      (*(code *)PTR___rust_dealloc_00798fc8)(param_1,8);
    }
  }
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[5];
  uVar8 = param_4[6];
  uVar9 = param_4[7];
  *(undefined4 *)(param_3 + 4) = param_4[4];
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar7;
  *(undefined4 *)(param_3 + 5) = uVar8;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar9;
  *(undefined4 *)plVar1 = uVar3;
  *(undefined4 *)((longlong)param_3 + 0x14) = uVar4;
  *(undefined4 *)(param_3 + 3) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar6;
  uVar10 = (*(code *)PTR_set_complete_00799058)();
  if ((uVar10 & 5) == 1) {
    (**(code **)(param_3[8] + 0x10))();
  }
  if ((uVar10 & 4) == 0) {
    *param_2 = -1;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar13 = *param_3;
    UNLOCK();
  }
  else {
    lVar13 = *plVar1;
    *plVar1 = -1;
    if (lVar13 == -1) {
      (*(code *)PTR_unwrap_failed_00799278)();
      goto LAB_005827cd;
    }
    param_2[3] = param_3[5];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar11 = param_3[4];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x24);
    *(int *)(param_2 + 1) = (int)param_3[3];
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    *(int *)(param_2 + 2) = (int)lVar11;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    *param_2 = lVar13;
    LOCK();
    *param_3 = *param_3 + -1;
    lVar13 = *param_3;
    UNLOCK();
  }
  if (lVar13 == 0) {
    <alloc[12e961f32105355]::sync::Arc<tokio[d7d91d38da47d894]::sync::oneshot::Inner<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>>
    ::drop_slow(local_48,plVar12);
  }
  return param_2;
}


