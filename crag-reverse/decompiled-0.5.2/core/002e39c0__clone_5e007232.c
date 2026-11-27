// 002e39c0 clone

/* <craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::LiveSessionState_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 uVar2;
  undefined8 unaff_R14;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(longlong *)(param_2 + 0x18) == -1) {
    local_90 = 0xffffffffffffffff;
    lVar1 = *(longlong *)(param_2 + 0x30);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar1 = *(longlong *)(param_2 + 0x30);
  }
  if (lVar1 == -1) {
    local_a0 = 0xffffffffffffffff;
    lVar1 = *(longlong *)(param_2 + 0x48);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar1 = *(longlong *)(param_2 + 0x48);
    unaff_RBX = local_68;
    local_a0 = local_78;
    local_98 = uStack_70;
  }
  uVar2 = 0xffffffffffffffff;
  if (lVar1 != -1) {
    (*(code *)PTR_clone_00798fd0)();
    unaff_RBP = uStack_70;
    uVar2 = local_78;
    unaff_R14 = local_68;
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_48,param_2);
  <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(),std[6c98fd8553dbae28]::hash::random::RandomState>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_78,param_2 + 0x60);
  param_1[0x10] = local_58;
  param_1[0x11] = uStack_50;
  param_1[0xe] = local_68;
  param_1[0xf] = uStack_60;
  param_1[0xc] = local_78;
  param_1[0xd] = uStack_70;
  param_1[5] = local_80;
  param_1[3] = local_90;
  param_1[4] = uStack_88;
  param_1[6] = local_a0;
  param_1[7] = local_98;
  param_1[8] = unaff_RBX;
  param_1[9] = uVar2;
  param_1[10] = unaff_RBP;
  param_1[0xb] = unaff_R14;
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  return;
}


