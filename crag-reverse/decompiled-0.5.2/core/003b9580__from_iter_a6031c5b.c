// 003b9580 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>,
   <craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::tools_list_payload_with_ack::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::mcp::McpToolSpec>,<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::tools_list_payload_with_ack::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  code *pcVar13;
  longlong lVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong *local_f0;
  undefined4 *local_e8;
  undefined8 *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  uVar11 = (ulonglong)(param_3 - param_2) >> 7;
  local_100 = param_3 - param_2;
  local_f0 = param_1;
  if (local_100 == 0) {
    local_f8 = 0;
    uVar6 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar6 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar6 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_003b9b23:
      (*(code *)PTR_handle_error_00798ff0)();
LAB_003b9b33:
                    /* WARNING: Does not return */
      pcVar13 = (code *)invalidInstructionException();
      (*pcVar13)();
    }
    lVar12 = -uVar11;
    local_e8 = (undefined4 *)(uVar6 + 1);
    param_2 = param_2 + 0x60;
    lVar14 = 1;
    pcVar13 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    local_f8 = uVar11;
    do {
      puVar5 = PTR___rust_alloc_00799000;
      local_128 = 0;
      local_118 = 0;
      (*pcVar13)();
      puVar7 = (undefined8 *)(*(code *)puVar5)();
      if (puVar7 == (undefined8 *)0x0) {
LAB_003b9b05:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b9b33;
      }
      *(undefined4 *)puVar7 = 0x656d616e;
      local_148 = 4;
      uStack_138 = 4;
      lVar1 = *(longlong *)(param_2 + -0x38);
      local_140 = puVar7;
      if (lVar1 < 0) {
LAB_003b9a8c:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b9b33;
      }
      local_110 = lVar12;
      local_108 = param_2;
      if (lVar1 == 0) {
        lVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar8 == 0) goto LAB_003b9a8c;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar1);
      }
      param_2 = local_108;
      lVar12 = local_110;
      local_188 = CONCAT31(local_188._1_3_,3);
      uStack_180 = lVar1;
      local_178 = lVar8;
      uStack_170 = lVar1;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_128,&local_148,&local_188);
      puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*(code *)puVar5)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_003b9b05;
      *puVar7 = 0x7470697263736564;
      *(undefined4 *)((longlong)puVar7 + 7) = 0x6e6f6974;
      local_148 = 0xb;
      uStack_138 = 0xb;
      lVar1 = *(longlong *)(param_2 + -8);
      local_140 = puVar7;
      if (lVar1 < 0) {
LAB_003b9ac6:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b9b33;
      }
      if (lVar1 == 0) {
        lVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar8 == 0) goto LAB_003b9ac6;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar1);
        lVar12 = local_110;
        param_2 = local_108;
      }
      local_188 = CONCAT31(local_188._1_3_,3);
      uStack_180 = lVar1;
      local_178 = lVar8;
      uStack_170 = lVar1;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_128,&local_148,&local_188);
      puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*(code *)puVar5)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) goto LAB_003b9b05;
      *puVar7 = 0x6863537475706e69;
      *(undefined4 *)((longlong)puVar7 + 7) = 0x616d6568;
      local_148 = 0xb;
      uStack_138 = 0xb;
      local_140 = puVar7;
      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_188,param_2);
      puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_188 == -1) {
        local_168 = uStack_180;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_168,
                   &PTR_anon_869a44742910931491f4b62d80901a16_12_llvm_763634721200370616_00787d60);
        goto LAB_003b9b33;
      }
      local_158 = (undefined4)local_178;
      uStack_154 = local_178._4_4_;
      uStack_150 = (undefined4)uStack_170;
      uStack_14c = uStack_170._4_4_;
      local_168 = CONCAT44(uStack_184,local_188);
      uStack_160 = (undefined4)uStack_180;
      uStack_15c = uStack_180._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_188,&local_128,&local_148,&local_168);
      if ((char)local_188 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_188);
      }
      (*(code *)puVar5)();
      puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 == (undefined4 *)0x0) goto LAB_003b9b05;
      *(undefined1 *)(puVar9 + 1) = 0x61;
      *puVar9 = 0x74656d5f;
      pcVar13 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      local_c8 = 5;
      local_b8 = 5;
      local_e0 = (undefined8 *)0x0;
      local_d0 = 0;
      local_c0 = puVar9;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar4 = s_antigravity_alwaysLoad_00192b92._12_4_;
      uVar3 = s_antigravity_alwaysLoad_00192b92._8_4_;
      uVar2 = s_antigravity_alwaysLoad_00192b92._4_4_;
      if (pcVar10 == (char *)0x0) goto LAB_003b9b23;
      *(undefined4 *)pcVar10 = s_antigravity_alwaysLoad_00192b92._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar2;
      *(undefined4 *)(pcVar10 + 8) = uVar3;
      *(undefined4 *)(pcVar10 + 0xc) = uVar4;
      pcVar10[0xe] = 'w';
      pcVar10[0xf] = 'a';
      pcVar10[0x10] = 'y';
      pcVar10[0x11] = 's';
      pcVar10[0x12] = 'L';
      pcVar10[0x13] = 'o';
      pcVar10[0x14] = 'a';
      pcVar10[0x15] = 'd';
      local_b0 = 0x16;
      local_a0 = 0x16;
      local_188 = CONCAT22(local_188._2_2_,0x101);
      local_a8 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_e0,&local_b0,&local_188);
      if ((char)local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      local_130 = local_d0;
      local_140 = local_e0;
      uStack_138 = CONCAT44(uStack_d4,uStack_d8);
      local_148 = CONCAT71(local_148._1_7_,5);
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_188,&local_128,&local_c8,&local_148);
      puVar9 = local_e8;
      if ((char)local_188 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_188);
      }
      local_38 = local_118;
      uStack_4b._3_1_ = (undefined1)local_128;
      uStack_47 = (undefined4)((ulonglong)local_128 >> 8);
      uStack_43._0_3_ = (undefined3)((ulonglong)local_128 >> 0x28);
      uStack_43._3_1_ = (undefined1)uStack_120;
      uStack_3f = (undefined7)((ulonglong)uStack_120 >> 8);
      *(undefined1 *)((longlong)puVar9 + -1) = 5;
      *puVar9 = uStack_4f;
      puVar9[1] = uStack_4b;
      puVar9[2] = uStack_47;
      puVar9[3] = uStack_43;
      *(undefined8 *)((longlong)puVar9 + 0xf) = uStack_120;
      *(undefined8 *)((longlong)puVar9 + 0x17) = local_118;
      lVar1 = lVar12 + lVar14;
      lVar14 = lVar14 + 1;
      local_e8 = puVar9 + 8;
      param_2 = param_2 + 0x80;
    } while (lVar1 != 0);
    uVar11 = local_f8;
  }
  *local_f0 = local_f8;
  local_f0[1] = uVar6;
  local_f0[2] = uVar11;
  return local_f0;
}


