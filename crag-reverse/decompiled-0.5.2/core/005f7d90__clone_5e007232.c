// 005f7d90 clone

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpCapabilities_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_R13;
  undefined8 uVar2;
  undefined8 unaff_R15;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (*(longlong *)(param_2 + 0x30) == -1) {
    local_68 = 0xffffffffffffffff;
    lVar1 = *(longlong *)(param_2 + 0x48);
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    lVar1 = *(longlong *)(param_2 + 0x48);
  }
  if (lVar1 == -1) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    unaff_R13 = local_70;
    uVar2 = local_80;
    unaff_R15 = uStack_78;
  }
  local_38 = *(undefined8 *)(param_2 + 0x60);
  uStack_30 = 0;
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_50,param_2);
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_80,param_2 + 0x18);
  param_1[8] = local_58;
  param_1[6] = local_68;
  param_1[7] = uStack_60;
  param_1[9] = uVar2;
  param_1[10] = unaff_R15;
  param_1[0xb] = unaff_R13;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_38;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[2] = local_40;
  param_1[3] = local_80;
  param_1[4] = uStack_78;
  param_1[5] = local_70;
  return;
}


