// 003b8870 from_iter

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>
   as 
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>,
   <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries::{closure#0}>>>::from_iter
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>,<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::pending_summaries::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  ulonglong local_e8;
  undefined4 *local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3 - param_2;
  uVar4 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),8);
  if ((ulonglong)(param_3 - param_2) < 0x8e38e38e38e38e31) goto LAB_003b88bb;
  puVar3 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar3;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003b88bb:
    uVar6 = uVar4 >> 6;
    if (param_3 == param_2) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_e0 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar2 = PTR_clone_00798fd0;
    puVar3 = (ulonglong *)&DAT_00000008;
    if (local_e0 != (undefined4 *)0x0) {
      uVar4 = 0;
      puVar5 = local_e0;
      do {
        (*(code *)puVar2)();
        (*(code *)puVar2)();
        (*(code *)puVar2)();
        *(undefined8 *)(puVar5 + 0x10) = local_38;
        local_98 = (undefined4)local_c8;
        uStack_94 = (undefined4)((ulonglong)local_c8 >> 0x20);
        uStack_90 = (undefined4)uStack_c0;
        uStack_8c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
        *(undefined8 *)(puVar5 + 0xc) = local_48;
        *(undefined8 *)(puVar5 + 0xe) = uStack_40;
        *(undefined8 *)(puVar5 + 8) = uStack_a8;
        *(undefined8 *)(puVar5 + 10) = local_a0;
        *(undefined8 *)(puVar5 + 4) = local_b8;
        *(undefined8 *)(puVar5 + 6) = local_b0;
        *puVar5 = local_98;
        puVar5[1] = uStack_94;
        puVar5[2] = uStack_90;
        puVar5[3] = uStack_8c;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 0x12;
        local_e8 = uVar6;
      } while (uVar6 != uVar4);
LAB_003b89ec:
      param_1[2] = uVar6;
      *param_1 = local_e8;
      param_1[1] = (ulonglong)local_e0;
      return;
    }
  }
  local_e8 = 0;
  local_e0 = (undefined4 *)&DAT_00000008;
  goto LAB_003b89ec;
}


