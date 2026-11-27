// 004a87c0 slot_runtime_config

/* <craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>::slot_runtime_config */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::pool::PoolGlobalConfig>::slot_runtime_config
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,longlong param_6,undefined8 param_7,longlong param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  char *pcVar24;
  undefined4 *puVar25;
  char *pcVar26;
  char *pcVar27;
  longlong lVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  longlong local_118;
  longlong local_100;
  longlong local_d8;
  longlong local_d0;
  longlong local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  (*(code *)PTR_to_path_buf_00799340)(param_4,param_4);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar24 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar12 = s_aceholder_token_0000_00196d1f._8_8_;
  if (pcVar24 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  *(undefined8 *)(pcVar24 + 0x10) = s_aceholder_token_0000_00196d1f._0_8_;
  *(undefined8 *)(pcVar24 + 0x18) = uVar12;
  uVar16 = s_slot_internal_pl_00196d0f._12_4_;
  uVar15 = s_slot_internal_pl_00196d0f._8_4_;
  uVar14 = s_slot_internal_pl_00196d0f._4_4_;
  *(undefined4 *)pcVar24 = s_slot_internal_pl_00196d0f._0_4_;
  *(undefined4 *)(pcVar24 + 4) = uVar14;
  *(undefined4 *)(pcVar24 + 8) = uVar15;
  *(undefined4 *)(pcVar24 + 0xc) = uVar16;
  pcVar24[0x20] = '0';
  pcVar24[0x21] = '0';
  pcVar24[0x22] = '0';
  pcVar24[0x23] = '0';
  if (param_6 < 0) {
LAB_004a8837:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  if (param_6 == 0) {
    local_c0 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_c0 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_c0 == 0) goto LAB_004a8837;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_6);
  }
  if (param_8 < 0) {
LAB_004a888d:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  if (param_8 == 0) {
    local_100 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_100 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_100 == 0) goto LAB_004a888d;
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,param_8);
  }
  (*(code *)PTR_clone_00798fd0)();
  uVar12 = *param_2;
  uVar18 = param_2[1];
  uVar19 = param_2[2];
  uVar20 = param_2[3];
  lVar7 = param_2[0x1e];
  uVar4 = *(uint *)(param_2 + 0x1f);
  uVar14 = *(undefined4 *)(param_2 + 0x29);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0x14c);
  uVar16 = *(undefined4 *)(param_2 + 0x2a);
  uVar17 = *(undefined4 *)((longlong)param_2 + 0x154);
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar25 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar25 == (undefined4 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  *puVar25 = 0x746f6c73;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar26 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar23 = anon_572fb51faa0db1e51baf8d00d92dd3e9_137_llvm_7677212527096675952._12_4_;
  uVar22 = anon_572fb51faa0db1e51baf8d00d92dd3e9_137_llvm_7677212527096675952._8_4_;
  uVar21 = anon_572fb51faa0db1e51baf8d00d92dd3e9_137_llvm_7677212527096675952._4_4_;
  if (pcVar26 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  *(undefined4 *)pcVar26 = anon_572fb51faa0db1e51baf8d00d92dd3e9_137_llvm_7677212527096675952._0_4_;
  *(undefined4 *)(pcVar26 + 4) = uVar21;
  *(undefined4 *)(pcVar26 + 8) = uVar22;
  *(undefined4 *)(pcVar26 + 0xc) = uVar23;
  pcVar26[0xd] = '-';
  pcVar26[0xe] = 'l';
  pcVar26[0xf] = 'i';
  pcVar26[0x10] = 'c';
  pcVar26[0x11] = 'e';
  pcVar26[0x12] = 'n';
  pcVar26[0x13] = 's';
  pcVar26[0x14] = 'e';
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar27 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  uVar23 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._12_4_;
  uVar22 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._8_4_;
  uVar21 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._4_4_;
  if (pcVar27 == (char *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004a8fc0;
  }
  *(undefined4 *)pcVar27 = anon_572fb51faa0db1e51baf8d00d92dd3e9_138_llvm_7677212527096675952._0_4_;
  *(undefined4 *)(pcVar27 + 4) = uVar21;
  *(undefined4 *)(pcVar27 + 8) = uVar22;
  *(undefined4 *)(pcVar27 + 0xc) = uVar23;
  pcVar27[0x10] = 's';
  pcVar27[0x11] = 't';
  uVar8 = param_2[0x2b];
  uVar9 = param_2[0x2c];
  lVar10 = param_2[0x20];
  uVar5 = *(uint *)(param_2 + 0x21);
  if (param_2[0x16] == -1) {
    local_118 = -1;
    lVar28 = param_2[0x19];
  }
  else {
    local_118 = param_2[0x18];
    if (local_118 < 0) {
LAB_004a8a32:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004a8fc0;
    }
    if (local_118 == 0) {
      local_d0 = 1;
      local_118 = 0;
      lVar28 = param_2[0x19];
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      local_d0 = (*(code *)PTR___rust_alloc_00799000)();
      if (local_d0 == 0) goto LAB_004a8a32;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,local_118);
      lVar28 = param_2[0x19];
    }
  }
  if (lVar28 == -1) {
    lVar28 = -1;
    goto LAB_004a8bb9;
  }
  lVar28 = param_2[0x1b];
  if (-1 < lVar28) {
    if (lVar28 == 0) {
      local_d8 = 1;
      lVar28 = 0;
LAB_004a8bb9:
      uVar1 = *(undefined1 *)(param_2 + 0x2d);
      uVar2 = *(undefined1 *)((longlong)param_2 + 0x169);
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>as_core[c0acaeba6ab4c2e0]::clone::Clone>
      ::clone(&local_48,param_2 + 0x10);
      uVar6 = *(uint *)(param_2 + 0x1d);
      lVar11 = param_2[0x1c];
      param_1[0x28] = local_98;
      param_1[0x26] = local_a8;
      param_1[0x27] = uStack_a0;
      param_1[0x29] = 0x24;
      param_1[0x2a] = pcVar24;
      param_1[0x2b] = 0x24;
      param_1[0x44] = 0xffffffffffffffff;
      param_1[0x2c] = param_6;
      param_1[0x2d] = local_c0;
      param_1[0x2e] = param_6;
      param_1[0x2f] = param_8;
      param_1[0x30] = local_100;
      param_1[0x31] = param_8;
      param_1[0x34] = local_80;
      param_1[0x32] = local_90;
      param_1[0x33] = uStack_88;
      *param_1 = uVar12;
      param_1[1] = uVar18;
      param_1[2] = uVar19;
      param_1[3] = uVar20;
      param_1[4] = 1;
      param_1[5] = lVar7 * 1000 + (ulonglong)uVar4 / 1000000;
      *(undefined4 *)(param_1 + 0x56) = uVar16;
      *(undefined4 *)((longlong)param_1 + 0x2b4) = uVar17;
      *(undefined4 *)(param_1 + 0x57) = uVar14;
      *(undefined4 *)((longlong)param_1 + 700) = uVar15;
      param_1[0x35] = 4;
      param_1[0x36] = puVar25;
      param_1[0x37] = 4;
      param_1[0x38] = 0x15;
      param_1[0x39] = pcVar26;
      param_1[0x3a] = 0x15;
      param_1[0x3b] = 0x12;
      param_1[0x3c] = pcVar27;
      param_1[0x3d] = 0x12;
      param_1[0x47] = 0xffffffffffffffff;
      param_1[6] = 1;
      param_1[7] = uVar8;
      param_1[8] = 1;
      param_1[9] = uVar9;
      param_1[10] = 1;
      param_1[0xb] = lVar10 * 1000 + (ulonglong)uVar5 / 1000000;
      param_1[0x4a] = 0xffffffffffffffff;
      param_1[0x4d] = 0xffffffffffffffff;
      param_1[0x50] = local_118;
      param_1[0x51] = local_d0;
      param_1[0x52] = local_118;
      param_1[0x53] = lVar28;
      param_1[0x54] = local_d8;
      param_1[0x55] = lVar28;
      *(undefined1 *)(param_1 + 0x58) = uVar1;
      *(undefined1 *)((longlong)param_1 + 0x2c1) = uVar2;
      param_1[0x40] = local_38;
      uVar1 = *(undefined1 *)((longlong)param_2 + 0x16a);
      param_1[0x3e] = local_48;
      param_1[0x3f] = uStack_40;
      *(undefined1 *)((longlong)param_1 + 0x2c2) = uVar1;
      param_1[0xc] = 1;
      param_1[0xd] = (ulonglong)uVar6 / 1000000 + lVar11 * 1000;
      uVar12 = param_2[0x28];
      param_1[0xe] = 1;
      param_1[0xf] = uVar12;
      uVar1 = *(undefined1 *)((longlong)param_2 + 0x16b);
      *(undefined1 *)((longlong)param_1 + 0x2c3) = 1;
      *(undefined1 *)((longlong)param_1 + 0x2c4) = uVar1;
      uVar3 = *(undefined2 *)(param_2 + 0x26);
      *(undefined2 *)((longlong)param_1 + 0x2c5) = 0;
      param_1[0x10] = 0;
      param_1[0x12] = 0;
      *(undefined2 *)(param_1 + 0x59) = uVar3;
      uVar12 = param_2[0x22];
      param_1[0x14] = 1;
      param_1[0x15] = uVar12;
      uVar12 = param_2[0x23];
      param_1[0x16] = 1;
      param_1[0x17] = uVar12;
      *(undefined1 *)((longlong)param_1 + 0x2c7) = *(undefined1 *)((longlong)param_2 + 0x132);
      uVar12 = param_2[0x24];
      param_1[0x18] = 1;
      param_1[0x19] = uVar12;
      uVar12 = param_2[0x25];
      param_1[0x1a] = 1;
      param_1[0x1b] = uVar12;
      param_1[0x1c] = 0;
      param_1[0x1e] = 0;
      param_1[0x20] = 0;
      param_1[0x22] = 0;
      param_1[0x24] = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 8;
      param_1[0x43] = 0;
      return param_1;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_d8 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_d8 != 0) {
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar28);
      goto LAB_004a8bb9;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004a8fc0:
                    /* WARNING: Does not return */
  pcVar13 = (code *)invalidInstructionException();
  (*pcVar13)();
}


