// 002e2ea0 clone

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig as
   core[c0acaeba6ab4c2e0]::clone::Clone>::clone */

void __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpWorkerConfig_as_core[c0acaeba6ab4c2e0]::clone::Clone>
::clone(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  longlong local_190;
  undefined8 local_168;
  longlong local_158;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  (*(code *)PTR_clone_00798fd0)();
  lVar4 = param_2[7];
  if (lVar4 < 0) {
LAB_002e2ed6:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_002e31bf;
  }
  if (lVar4 == 0) {
    lVar12 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar12 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar12 == 0) goto LAB_002e2ed6;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar4);
  }
  lVar5 = param_2[10];
  if (lVar5 < 0) {
LAB_002e2f43:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_002e31bf;
  }
  if (lVar5 == 0) {
    local_190 = 1;
    lVar6 = param_2[0xd];
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_190 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_190 == 0) goto LAB_002e2f43;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar5);
    lVar6 = param_2[0xd];
  }
  if (lVar6 < 0) {
LAB_002e2faa:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_002e31bf;
  }
  if (lVar6 == 0) {
    local_140 = 1;
    lVar7 = param_2[0x10];
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_140 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_140 == 0) goto LAB_002e2faa;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar6);
    lVar7 = param_2[0x10];
  }
  if (lVar7 < 0) {
LAB_002e3023:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_002e31bf;
  }
  if (lVar7 == 0) {
    local_148 = 1;
    lVar8 = param_2[0x13];
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_148 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_148 == 0) goto LAB_002e3023;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar7);
    lVar8 = param_2[0x13];
  }
  if (lVar8 < 0) {
LAB_002e3095:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_002e31bf;
  }
  if (lVar8 == 0) {
    local_158 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_158 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_158 == 0) goto LAB_002e3095;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar8);
  }
  <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_48,param_2 + 0x14);
  if (param_2[0x1a] == -1) {
    local_168 = 0xffffffffffffffff;
  }
  else {
    (*(code *)PTR_clone_00798fd0)();
    local_168 = local_c8;
    local_138 = uStack_c0;
    local_100 = local_b8;
  }
  if (param_2[0x1d] == -1) {
    local_c8 = 0xffffffffffffffff;
    goto LAB_002e32c4;
  }
  (*(code *)PTR_clone_00798fd0)();
  lVar9 = param_2[0x22];
  if (lVar9 < 0) {
LAB_002e31b3:
    (*(code *)PTR_handle_error_00798ff0)();
LAB_002e31bf:
                    /* WARNING: Does not return */
    pcVar11 = (code *)invalidInstructionException();
    (*pcVar11)();
  }
  if (lVar9 == 0) {
    lVar13 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar13 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar13 == 0) goto LAB_002e31b3;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar9);
  }
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_130,param_2 + 0x23);
  <alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_e0,param_2 + 0x26);
  local_b8 = local_108;
  local_c8 = local_118;
  uStack_c0 = uStack_110;
  local_98 = local_130;
  uStack_90 = uStack_128;
  local_88 = local_120;
  uStack_80 = local_e0;
  uStack_7c = uStack_dc;
  uStack_78 = uStack_d8;
  uStack_74 = uStack_d4;
  local_70 = local_d0;
  lStack_b0 = lVar9;
  local_a8 = lVar13;
  lStack_a0 = lVar9;
LAB_002e32c4:
  uVar1 = *(undefined1 *)(param_2 + 0x2f);
  uVar2 = *(undefined1 *)((longlong)param_2 + 0x179);
  <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
  ::clone(&local_130,param_2 + 0x17);
  uVar10 = param_2[0x2c];
  uVar3 = *(undefined4 *)(param_2 + 0x2d);
  local_e8 = *param_2;
  local_f0 = param_2[1];
  local_f8 = param_2[0x2e];
  if (param_2[0x29] == -1) {
    uVar14 = 0xffffffffffffffff;
  }
  else {
    <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
    ::clone(&local_e0,param_2 + 0x29);
    uVar14 = CONCAT44(uStack_dc,local_e0);
    local_118 = CONCAT44(uStack_d4,uStack_d8);
    uStack_110 = local_d0;
  }
  param_1[4] = local_50;
  param_1[2] = local_60;
  param_1[3] = uStack_58;
  param_1[5] = lVar4;
  param_1[6] = lVar12;
  param_1[7] = lVar4;
  param_1[8] = lVar5;
  param_1[9] = local_190;
  param_1[10] = lVar5;
  param_1[0xb] = lVar6;
  param_1[0xc] = local_140;
  param_1[0xd] = lVar6;
  param_1[0xe] = lVar7;
  param_1[0xf] = local_148;
  param_1[0x10] = lVar7;
  param_1[0x11] = lVar8;
  param_1[0x12] = local_158;
  param_1[0x13] = lVar8;
  param_1[0x16] = local_38;
  param_1[0x14] = local_48;
  param_1[0x15] = uStack_40;
  param_1[0x1a] = local_168;
  param_1[0x1b] = local_138;
  param_1[0x1c] = local_100;
  param_1[0x27] = CONCAT44(uStack_74,uStack_78);
  param_1[0x28] = local_70;
  param_1[0x25] = local_88;
  param_1[0x26] = CONCAT44(uStack_7c,uStack_80);
  param_1[0x23] = local_98;
  param_1[0x24] = uStack_90;
  param_1[0x21] = local_a8;
  param_1[0x22] = lStack_a0;
  param_1[0x1f] = local_b8;
  param_1[0x20] = lStack_b0;
  param_1[0x1d] = local_c8;
  param_1[0x1e] = uStack_c0;
  *(undefined1 *)(param_1 + 0x2f) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x179) = uVar2;
  param_1[0x19] = local_120;
  param_1[0x17] = local_130;
  param_1[0x18] = uStack_128;
  param_1[0x2c] = uVar10;
  *(undefined4 *)(param_1 + 0x2d) = uVar3;
  *param_1 = local_e8;
  param_1[1] = local_f0;
  param_1[0x2e] = local_f8;
  param_1[0x29] = uVar14;
  param_1[0x2a] = local_118;
  param_1[0x2b] = uStack_110;
  return;
}


