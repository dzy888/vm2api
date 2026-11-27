// 00492270 clone

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRecord as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRecord_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  (*(code *)PTR_clone_00798fd0)();
  if (*(longlong *)(param_2 + 0x48) == -1) {
    local_c0 = 0xffffffffffffffff;
    lVar4 = *(longlong *)(param_2 + 0x60);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar4 = *(longlong *)(param_2 + 0x60);
    local_c0 = local_e8;
    local_98 = uStack_e0;
    local_80 = local_d8;
  }
  uVar7 = 0xffffffffffffffff;
  if (lVar4 != -1) {
    (*(code *)PTR_clone_00798fd0)();
    local_a0 = uStack_e0;
    local_88 = local_d8;
    uVar7 = local_e8;
  }
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  if (*(longlong *)(param_2 + 0x78) == -1) {
    local_c8 = 0xffffffffffffffff;
    lVar4 = *(longlong *)(param_2 + 0x90);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar4 = *(longlong *)(param_2 + 0x90);
    local_c8 = local_e8;
    local_a8 = uStack_e0;
    local_90 = local_d8;
  }
  if (lVar4 == -1) {
    local_d0 = 0xffffffffffffffff;
    uVar8 = uVar7;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_d0 = local_e8;
    local_b0 = uStack_e0;
    uVar8 = local_d8;
  }
  uVar1 = *(undefined1 *)(param_2 + 0xc0);
  uVar5 = *(undefined8 *)(param_2 + 0xb0);
  uVar6 = *(undefined8 *)(param_2 + 0xb8);
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  param_1[2] = local_68;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[9] = local_c0;
  param_1[10] = local_98;
  param_1[0xb] = local_80;
  param_1[0xc] = uVar7;
  param_1[0xd] = local_a0;
  param_1[0xe] = local_88;
  *(undefined4 *)(param_1 + 0x15) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar3;
  param_1[0xf] = local_c8;
  param_1[0x10] = local_a8;
  param_1[0x11] = local_90;
  param_1[0x12] = local_d0;
  param_1[0x13] = local_b0;
  param_1[0x14] = uVar8;
  *(undefined1 *)(param_1 + 0x18) = uVar1;
  param_1[0x16] = uVar5;
  param_1[0x17] = uVar6;
  param_1[5] = local_50;
  param_1[3] = local_60;
  param_1[4] = uStack_58;
  param_1[8] = local_d8;
  param_1[6] = local_e8;
  param_1[7] = uStack_e0;
  return;
}


