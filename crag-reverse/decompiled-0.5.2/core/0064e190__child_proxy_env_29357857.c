// 0064e190 child_proxy_env

/* <craggemini_core[66f3c71560d70857]::binding::BoundAccount>::child_proxy_env */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::binding::BoundAccount>::child_proxy_env
          (undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong local_f8;
  code *pcStack_f0;
  undefined8 *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  lVar1 = *(longlong *)(param_2 + 0x310);
  if (lVar1 == 0) {
    puVar10 = (undefined8 *)&DAT_00000008;
    uVar11 = 0;
LAB_0064e54c:
    *param_1 = uVar11;
    param_1[1] = puVar10;
    param_1[2] = uVar11;
    return param_1;
  }
  local_f8 = lVar1 + 0x10;
  puVar8 = (undefined2 *)(lVar1 + 0xdc);
  if (*(char *)(lVar1 + 0xc0) == '\0') {
    puVar8 = (undefined2 *)(lVar1 + 0xc6);
  }
  local_70 = CONCAT62(local_70._2_6_,*puVar8);
  pcStack_f0 = <alloc[12e961f32105355]::string::String_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
  ;
  local_e8 = &local_70;
  local_e0 = PTR_fmt_00799c28;
  (*(code *)PTR_format_inner_00799048)(local_f8,&local_f8);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar9 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar5 = s_127_0_0_1_localhost___1_001a2eef._12_4_;
  uVar4 = s_127_0_0_1_localhost___1_001a2eef._8_4_;
  uVar3 = s_127_0_0_1_localhost___1_001a2eef._4_4_;
  if (pcVar9 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *(undefined4 *)pcVar9 = s_127_0_0_1_localhost___1_001a2eef._0_4_;
    *(undefined4 *)(pcVar9 + 4) = uVar3;
    *(undefined4 *)(pcVar9 + 8) = uVar4;
    *(undefined4 *)(pcVar9 + 0xc) = uVar5;
    pcVar9[0xf] = 'h';
    pcVar9[0x10] = 'o';
    pcVar9[0x11] = 's';
    pcVar9[0x12] = 't';
    pcVar9[0x13] = ',';
    pcVar9[0x14] = ':';
    pcVar9[0x15] = ':';
    pcVar9[0x16] = '1';
    local_70 = 0x17;
    local_60 = 0x17;
    pcStack_68 = pcVar9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar10 != (undefined8 *)0x0) {
      local_58 = pcVar9;
      (*(code *)PTR_clone_00798fd0)();
      puVar6 = local_e8;
      local_b8 = local_f8;
      local_78 = pcStack_f0;
      (*(code *)PTR_clone_00798fd0)();
      local_c0 = local_f8;
      local_38 = local_e8;
      local_80 = pcStack_f0;
      (*(code *)PTR_clone_00798fd0)();
      local_c8 = local_f8;
      local_88 = pcStack_f0;
      local_40 = local_e8;
      (*(code *)PTR_clone_00798fd0)();
      local_d0 = local_f8;
      local_90 = pcStack_f0;
      local_48 = local_e8;
      (*(code *)PTR_clone_00798fd0)();
      puVar7 = local_e8;
      pcVar2 = pcStack_f0;
      lVar1 = local_f8;
      local_d8 = local_b0;
      local_98 = local_a8;
      local_50 = local_a0;
      (*(code *)PTR_clone_00798fd0)();
      puVar10[0x22] = local_e8;
      puVar10[0x20] = local_f8;
      puVar10[0x21] = pcStack_f0;
      puVar10[0x27] = local_60;
      puVar10[0x25] = local_70;
      puVar10[0x26] = pcStack_68;
      *puVar10 = "HTTP_PROXY";
      puVar10[1] = 10;
      puVar10[2] = local_b8;
      puVar10[3] = local_78;
      puVar10[4] = puVar6;
      puVar10[5] = "HTTPS_PROXY";
      puVar10[6] = 0xb;
      puVar10[7] = local_c0;
      puVar10[8] = local_80;
      puVar10[9] = local_38;
      puVar10[10] = "ALL_PROXY";
      puVar10[0xb] = 9;
      puVar10[0xc] = local_c8;
      puVar10[0xd] = local_88;
      puVar10[0xe] = local_40;
      puVar10[0xf] = "http_proxy";
      puVar10[0x10] = 10;
      puVar10[0x11] = local_d0;
      puVar10[0x12] = local_90;
      puVar10[0x13] = local_48;
      puVar10[0x14] = "https_proxy";
      puVar10[0x15] = 0xb;
      puVar10[0x16] = lVar1;
      puVar10[0x17] = pcVar2;
      puVar10[0x18] = puVar7;
      puVar10[0x19] = "all_proxy";
      puVar10[0x1a] = 9;
      puVar10[0x1b] = local_d8;
      puVar10[0x1c] = local_98;
      puVar10[0x1d] = local_50;
      puVar10[0x1e] = "NO_PROXY";
      puVar10[0x1f] = 8;
      puVar10[0x23] = &DAT_001851e0;
      puVar10[0x24] = 8;
      uVar11 = 8;
      goto LAB_0064e54c;
    }
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


