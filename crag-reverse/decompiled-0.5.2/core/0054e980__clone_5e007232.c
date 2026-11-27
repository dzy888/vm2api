// 0054e980 clone

/* <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar8 = PTR_clone_00798fd0;
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)puVar8)();
  if (*(longlong *)(param_2 + 0x60) == -1) {
    local_f8 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_f8 = local_f0;
    local_c8 = local_e8;
    local_b0 = uStack_e0;
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_60,param_2 + 0x30);
  (*(code *)PTR_clone_00798fd0)();
  uVar1 = *(undefined1 *)(param_2 + 0xd5);
  uVar2 = *(undefined1 *)(param_2 + 0xd4);
  if (*(longlong *)(param_2 + 0x78) == -1) {
    local_100 = 0xffffffffffffffff;
    uVar3 = *(undefined2 *)(param_2 + 0xd0);
    uVar4 = *(undefined2 *)(param_2 + 0xd2);
    lVar5 = *(longlong *)(param_2 + 0x90);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    uVar3 = *(undefined2 *)(param_2 + 0xd0);
    uVar4 = *(undefined2 *)(param_2 + 0xd2);
    lVar5 = *(longlong *)(param_2 + 0x90);
    local_100 = local_f0;
    local_d0 = local_e8;
    local_b8 = uStack_e0;
  }
  if (lVar5 == -1) {
    lVar5 = *(longlong *)(param_2 + 0xa8);
    uVar6 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar5 = *(longlong *)(param_2 + 0xa8);
    uVar6 = local_f0;
    local_d8 = local_e8;
    local_c0 = uStack_e0;
  }
  if (lVar5 == -1) {
    local_f0 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_48 = local_e8;
    uStack_40 = uStack_e0;
  }
  param_1[2] = local_98;
  *param_1 = local_a8;
  param_1[1] = uStack_a0;
  param_1[5] = local_80;
  param_1[3] = local_90;
  param_1[4] = uStack_88;
  param_1[0xc] = local_f8;
  param_1[0xd] = local_c8;
  param_1[0xe] = local_b0;
  param_1[6] = local_60;
  param_1[7] = uStack_58;
  param_1[8] = local_50;
  param_1[0xb] = local_68;
  param_1[9] = local_78;
  param_1[10] = uStack_70;
  *(undefined1 *)((longlong)param_1 + 0xd5) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0xd4) = uVar2;
  param_1[0xf] = local_100;
  param_1[0x10] = local_d0;
  param_1[0x11] = local_b8;
  *(undefined2 *)(param_1 + 0x1a) = uVar3;
  *(undefined2 *)((longlong)param_1 + 0xd2) = uVar4;
  param_1[0x12] = uVar6;
  param_1[0x13] = local_d8;
  param_1[0x14] = local_c0;
  param_1[0x15] = local_f0;
  uVar6 = *(undefined8 *)(param_2 + 0xc0);
  uVar7 = *(undefined8 *)(param_2 + 200);
  param_1[0x16] = local_48;
  param_1[0x17] = uStack_40;
  param_1[0x18] = uVar6;
  param_1[0x19] = uVar7;
  return;
}


