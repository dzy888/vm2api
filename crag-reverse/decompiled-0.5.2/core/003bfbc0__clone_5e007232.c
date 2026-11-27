// 003bfbc0 clone

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>
   as core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(ulonglong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  if (uVar3 < 0x1c71c71c71c71c8) goto LAB_003bfbff;
  puVar5 = (ulonglong *)0x0;
  do {
    param_1 = puVar5;
    (*(code *)PTR_handle_error_00798ff0)();
LAB_003bfbff:
    if (uVar3 * 0x48 == 0) {
      local_e8 = 0;
      local_e0 = 8;
      goto LAB_003bfd44;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_e0 = (*(code *)PTR___rust_alloc_00799000)();
    puVar4 = PTR_clone_00798fd0;
    puVar5 = (ulonglong *)&DAT_00000008;
  } while (local_e0 == 0);
  local_e8 = uVar3;
  if (uVar3 != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      if (uVar3 * 0x48 == lVar7) break;
      (*(code *)puVar4)();
      (*(code *)puVar4)();
      (*(code *)puVar4)();
      uVar6 = uVar6 + 1;
      *(undefined8 *)(local_e0 + 0x40 + lVar7) = local_80;
      local_78 = (undefined4)local_c0;
      uStack_74 = (undefined4)((ulonglong)local_c0 >> 0x20);
      uStack_70 = (undefined4)uStack_b8;
      uStack_6c = (undefined4)((ulonglong)uStack_b8 >> 0x20);
      puVar2 = (undefined8 *)(local_e0 + 0x30 + lVar7);
      *puVar2 = local_90;
      puVar2[1] = uStack_88;
      puVar2 = (undefined8 *)(local_e0 + 0x20 + lVar7);
      *puVar2 = uStack_a0;
      puVar2[1] = local_98;
      puVar2 = (undefined8 *)(local_e0 + 0x10 + lVar7);
      *puVar2 = local_b0;
      puVar2[1] = local_a8;
      puVar1 = (undefined4 *)(local_e0 + lVar7);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uStack_70;
      puVar1[3] = uStack_6c;
      lVar7 = lVar7 + 0x48;
    } while (uVar3 != uVar6);
  }
LAB_003bfd44:
  param_1[2] = uVar3;
  *param_1 = local_e8;
  param_1[1] = local_e0;
  return;
}


