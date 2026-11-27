// 003bcf20 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>,
   <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::aggregate_summary::{closure#1}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::aggregate_summary::{closure#1}>>>
::from_iter(ulonglong *param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  char *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  code *pcVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined8 local_188;
  char *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong local_150;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  ulonglong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  undefined4 *local_a0;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  uVar15 = param_3 - param_2;
  uVar13 = uVar15 * 4;
  uVar9 = param_3;
  local_a8 = param_1;
  if (uVar13 < 0x7ffffffffffffff9 && uVar15 < 0x3ffffffffffffff9) goto LAB_003bcf71;
  puVar11 = (ulonglong *)0x0;
  do {
    (*(code *)PTR_handle_error_00798ff0)();
    uVar9 = param_3;
    param_2 = uVar13;
    local_a8 = puVar11;
LAB_003bcf71:
    local_b0 = uVar15 >> 3;
    if (uVar13 == 0) {
      local_120 = 8;
      uVar13 = 0;
      if (param_2 == uVar9) goto LAB_003bdae9;
      goto LAB_003bcfd4;
    }
    param_3 = uVar9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar11 = (ulonglong *)&DAT_00000008;
    local_120 = (*(code *)PTR___rust_alloc_00799000)();
    uVar15 = local_b0;
  } while (local_120 == 0);
  uVar13 = local_b0;
  if (param_2 != uVar9) {
LAB_003bcfd4:
    local_b8 = -local_b0;
    local_a0 = (undefined4 *)(local_120 + 1);
    lVar14 = 1;
    pcVar12 = (code *)PTR___rust_alloc_00799000;
    do {
      lVar10 = *(longlong *)((param_2 - 8) + lVar14 * 8);
      local_118 = 0;
      local_108 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*pcVar12)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"subagent_id",0xb);
      local_188 = 0xb;
      local_178 = 0xb;
      lVar1 = *(longlong *)(lVar10 + 0x10);
      local_180 = pcVar8;
      if (lVar1 < 0) {
LAB_003bdb11:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bdbbe;
      }
      local_150 = lVar10;
      local_128 = param_2;
      if (lVar1 == 0) {
        uVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar9 = (*pcVar12)();
        if (uVar9 == 0) goto LAB_003bdb11;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar1);
      }
      param_2 = local_128;
      local_170 = CONCAT31(local_170._1_3_,3);
      uStack_168 = lVar1;
      local_160 = uVar9;
      uStack_158 = lVar1;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      uVar4 = s_parent_conversation_id_00192be5._12_4_;
      uVar3 = s_parent_conversation_id_00192be5._8_4_;
      uVar2 = s_parent_conversation_id_00192be5._4_4_;
      if (pcVar8 == (char *)0x0) {
LAB_003bdbb0:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003bdbbe:
                    /* WARNING: Does not return */
        pcVar12 = (code *)invalidInstructionException();
        (*pcVar12)();
      }
      *(undefined4 *)pcVar8 = s_parent_conversation_id_00192be5._0_4_;
      *(undefined4 *)(pcVar8 + 4) = uVar2;
      *(undefined4 *)(pcVar8 + 8) = uVar3;
      *(undefined4 *)(pcVar8 + 0xc) = uVar4;
      pcVar8[0xe] = 'a';
      pcVar8[0xf] = 't';
      pcVar8[0x10] = 'i';
      pcVar8[0x11] = 'o';
      pcVar8[0x12] = 'n';
      pcVar8[0x13] = '_';
      pcVar8[0x14] = 'i';
      pcVar8[0x15] = 'd';
      local_188 = 0x16;
      local_178 = 0x16;
      local_180 = pcVar8;
      if (*(longlong *)(local_150 + 0x48) == -1) {
        uVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(local_150 + 0x58);
        if (lVar10 < 0) {
LAB_003bdb25:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bdbbe;
        }
        uVar7 = 3;
        if (lVar10 == 0) {
          local_c8 = 1;
          local_c0 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar9 == 0) goto LAB_003bdb25;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar10);
          local_c8 = uVar9;
          param_2 = local_128;
          local_c0 = lVar10;
        }
      }
      local_170 = CONCAT31(local_170._1_3_,uVar7);
      uStack_168 = local_c0;
      local_160 = local_c8;
      uStack_158 = local_c0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"request_id",10);
      local_188 = 10;
      local_178 = 10;
      local_180 = pcVar8;
      if (*(longlong *)(local_150 + 0x60) == -1) {
        uVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(local_150 + 0x70);
        if (lVar10 < 0) {
LAB_003bdb36:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bdbbe;
        }
        uVar7 = 3;
        if (lVar10 == 0) {
          local_d8 = 1;
          local_d0 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar9 == 0) goto LAB_003bdb36;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar10);
          local_d8 = uVar9;
          param_2 = local_128;
          local_d0 = lVar10;
        }
      }
      local_170 = CONCAT31(local_170._1_3_,uVar7);
      uStack_168 = local_d0;
      local_160 = local_d8;
      uStack_158 = local_d0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"stream_id",9);
      local_188 = 9;
      local_178 = 9;
      if (*(int *)(local_150 + 0xa8) == 1) {
        local_e0 = (ulonglong)*(uint *)(local_150 + 0xac);
        uVar7 = 2;
      }
      else {
        uVar7 = 0;
      }
      local_170 = CONCAT31(local_170._1_3_,uVar7);
      uStack_168 = 0;
      local_180 = pcVar8;
      local_160 = local_e0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"type_name",9);
      local_188 = 9;
      local_178 = 9;
      local_180 = pcVar8;
      if (*(longlong *)(local_150 + 0x78) == -1) {
        uVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(local_150 + 0x88);
        if (lVar10 < 0) {
LAB_003bdb44:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bdbbe;
        }
        uVar7 = 3;
        if (lVar10 == 0) {
          local_f0 = 1;
          local_e8 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar9 == 0) goto LAB_003bdb44;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar10);
          local_f0 = uVar9;
          param_2 = local_128;
          local_e8 = lVar10;
        }
      }
      local_170 = CONCAT31(local_170._1_3_,uVar7);
      uStack_168 = local_e8;
      local_160 = local_f0;
      uStack_158 = local_e8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"role",4);
      local_188 = 4;
      local_178 = 4;
      local_180 = pcVar8;
      if (*(longlong *)(local_150 + 0x90) == -1) {
        uVar7 = 0;
      }
      else {
        lVar10 = *(longlong *)(local_150 + 0xa0);
        if (lVar10 < 0) {
LAB_003bdb63:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bdbbe;
        }
        uVar7 = 3;
        if (lVar10 == 0) {
          local_100 = 1;
          local_f8 = 0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          uVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (uVar9 == 0) goto LAB_003bdb63;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar10);
          local_100 = uVar9;
          param_2 = local_128;
          local_f8 = lVar10;
        }
      }
      local_170 = CONCAT31(local_170._1_3_,uVar7);
      uStack_168 = local_f8;
      local_160 = local_100;
      uStack_158 = local_f8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"status",6);
      local_188 = 6;
      local_178 = 6;
      local_180 = pcVar8;
      <craggemini_core[66f3c71560d70857]::subagents::SubagentStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                (&local_170,local_150 + 0xc0);
      if ((char)local_170 == -1) {
        local_148 = uStack_168;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_148,
                   &PTR_s_src_subagents_rs_00787dc0);
        goto LAB_003bdbbe;
      }
      local_138 = (undefined4)local_160;
      uStack_134 = local_160._4_4_;
      uStack_130 = (undefined4)uStack_158;
      uStack_12c = uStack_158._4_4_;
      local_148 = CONCAT44(uStack_16c,local_170);
      uStack_140 = (undefined4)uStack_168;
      uStack_13c = uStack_168._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_170,&local_118,&local_188,&local_148);
      if ((char)local_170 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_170);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"sse_frames",10);
      local_188 = 10;
      local_178 = 10;
      local_160 = *(ulonglong *)(local_150 + 0xb0);
      local_170 = CONCAT31(local_170._1_3_,2);
      uStack_168 = 0;
      local_180 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"sse_bytes",9);
      local_188 = 9;
      local_178 = 9;
      local_160 = *(ulonglong *)(local_150 + 0xb8);
      local_170 = CONCAT31(local_170._1_3_,2);
      uStack_168 = 0;
      local_180 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"created_at",10);
      local_188 = 10;
      local_178 = 10;
      lVar10 = *(longlong *)(local_150 + 0x28);
      local_180 = pcVar8;
      if (lVar10 < 0) {
LAB_003bdb52:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bdbbe;
      }
      if (lVar10 == 0) {
        uVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar9 = (*(code *)puVar5)();
        if (uVar9 == 0) goto LAB_003bdb52;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar10);
        param_2 = local_128;
      }
      local_170 = CONCAT31(local_170._1_3_,3);
      uStack_168 = lVar10;
      local_160 = uVar9;
      uStack_158 = lVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar5 = PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar5)();
      if (pcVar8 == (char *)0x0) goto LAB_003bdbb0;
      builtin_strncpy(pcVar8,"updated_at",10);
      local_188 = 10;
      local_178 = 10;
      lVar10 = *(longlong *)(local_150 + 0x40);
      local_180 = pcVar8;
      if (lVar10 < 0) {
LAB_003bdb71:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bdbbe;
      }
      if (lVar10 == 0) {
        uVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        uVar9 = (*(code *)puVar5)();
        if (uVar9 == 0) goto LAB_003bdb71;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,lVar10);
        param_2 = local_128;
      }
      local_170 = CONCAT31(local_170._1_3_,3);
      uStack_168 = lVar10;
      local_160 = uVar9;
      uStack_158 = lVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_188,&local_170);
      puVar6 = local_a0;
      pcVar12 = (code *)PTR___rust_alloc_00799000;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      local_38 = local_108;
      uStack_4b._3_1_ = (undefined1)local_118;
      uStack_47 = (undefined4)((ulonglong)local_118 >> 8);
      uStack_43._0_3_ = (undefined3)((ulonglong)local_118 >> 0x28);
      uStack_43._3_1_ = (undefined1)uStack_110;
      uStack_3f = (undefined7)((ulonglong)uStack_110 >> 8);
      *(undefined1 *)((longlong)puVar6 + -1) = 5;
      *puVar6 = uStack_4f;
      puVar6[1] = uStack_4b;
      puVar6[2] = uStack_47;
      puVar6[3] = uStack_43;
      *(undefined8 *)((longlong)puVar6 + 0xf) = uStack_110;
      *(undefined8 *)((longlong)puVar6 + 0x17) = local_108;
      lVar10 = local_b8 + lVar14;
      lVar14 = lVar14 + 1;
      local_a0 = puVar6 + 8;
    } while (lVar10 != 0);
  }
LAB_003bdae9:
  *local_a8 = uVar13;
  local_a8[1] = local_120;
  local_a8[2] = local_b0;
  return local_a8;
}


