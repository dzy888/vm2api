// 002e3700 clone

/* <craggemini_core[66f3c71560d70857]::binding::ParsedProxy as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::binding::ParsedProxy_as_core[c0acaeba6ab4c2e0]::clone::Clone>::
clone(undefined8 *param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined8 uVar4;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *(undefined1 *)(param_2 + 0x7a);
  (*(code *)PTR_clone_00798fd0)();
  uVar2 = *(undefined2 *)(param_2 + 0x78);
  if (*(longlong *)(param_2 + 0x48) == -1) {
    local_98 = 0xffffffffffffffff;
    lVar3 = *(longlong *)(param_2 + 0x60);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar3 = *(longlong *)(param_2 + 0x60);
    local_98 = local_90;
    local_70 = uStack_88;
    local_68 = local_80;
  }
  uVar4 = 0xffffffffffffffff;
  if (lVar3 != -1) {
    (*(code *)PTR_clone_00798fd0)();
    local_78 = uStack_88;
    unaff_RBP = local_80;
    uVar4 = local_90;
  }
  (*(code *)PTR_clone_00798fd0)();
  (*(code *)PTR_clone_00798fd0)();
  *(undefined1 *)((longlong)param_1 + 0x7a) = uVar1;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  param_1[2] = local_50;
  *(undefined2 *)(param_1 + 0xf) = uVar2;
  param_1[9] = local_98;
  param_1[10] = local_70;
  param_1[0xb] = local_68;
  param_1[0xc] = uVar4;
  param_1[0xd] = local_78;
  param_1[0xe] = unaff_RBP;
  param_1[3] = local_48;
  param_1[4] = uStack_40;
  param_1[5] = local_38;
  param_1[6] = local_90;
  param_1[7] = uStack_88;
  param_1[8] = local_80;
  return;
}


