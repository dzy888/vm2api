// 003bb0b0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,
   <craggemini_core[66f3c71560d70857]::resume::SessionStore>::list_summary::{closure#0}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,<craggemini_core[66f3c71560d70857]::resume::SessionStore>::list_summary::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar15;
  undefined8 local_168;
  char *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 *local_a0;
  ulonglong local_98 [3];
  undefined8 local_80;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  lVar12 = *param_2;
  uVar13 = (ulonglong)(param_2[1] - lVar12) / 0x280;
  local_b8 = param_1;
  if (param_2[1] == lVar12) {
    local_c0 = 0;
    uVar7 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_d8 = uVar13 << 5;
    uVar7 = (*(code *)PTR___rust_alloc_00799000)();
    lVar11 = local_d8;
    if (uVar7 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      if (local_100 != 0) {
        local_98[1] = 0;
        local_98[2] = local_100;
        local_80 = uStack_f8;
        local_70 = 0;
        local_68 = local_100;
        local_60 = uStack_f8;
      }
      else {
        local_f0 = 0;
      }
      local_98[0] = (ulonglong)(local_100 != 0);
      local_78 = local_98[0];
      local_58 = local_f0;
      uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                         (local_98,lVar11);
      for (; lVar12 != 1; lVar12 = lVar12 + -1) {
        uVar15 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar15,8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_a8 = param_2[2];
    local_b0 = -uVar13;
    local_a0 = (undefined4 *)(uVar7 + 1);
    lVar12 = lVar12 + 0x27a;
    lVar11 = 1;
    local_130 = uVar7;
    local_c0 = uVar13;
    do {
      puVar4 = PTR___rust_alloc_00799000;
      local_100 = 0;
      local_f0 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)puVar4)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"conversation_id",0xf);
      local_168 = 0xf;
      local_158 = 0xf;
      lVar9 = *(longlong *)(lVar12 + -0x26a);
      local_160 = pcVar8;
      if (lVar9 < 0) {
LAB_003bbc70:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bbd4c;
      }
      local_108 = lVar12;
      if (lVar9 == 0) {
        lVar12 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar12 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar12 == 0) goto LAB_003bbc70;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar9);
        uVar7 = local_130;
      }
      local_150 = CONCAT31(local_150._1_3_,3);
      uStack_148 = lVar9;
      local_140 = lVar12;
      uStack_138 = lVar9;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      lVar12 = local_108;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) {
LAB_003bbd3e:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003bbd4c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      builtin_strncpy(pcVar8,"account_id",10);
      local_168 = 10;
      local_158 = 10;
      local_160 = pcVar8;
      if (*(longlong *)(lVar12 + -0x16a) == -1) {
        uVar10 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar12 + -0x15a);
        if (lVar9 < 0) {
LAB_003bbc84:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bbd4c;
        }
        uVar10 = 3;
        if (lVar9 == 0) {
          local_c8 = 1;
          local_e0 = 0;
        }
        else {
          local_e0 = *(longlong *)(lVar12 + -0x162);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar12 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar12 == 0) goto LAB_003bbc84;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar9);
          local_e0 = lVar9;
          local_c8 = lVar12;
          lVar12 = local_108;
        }
      }
      local_150 = CONCAT31(local_150._1_3_,uVar10);
      uStack_148 = local_e0;
      local_140 = local_c8;
      uStack_138 = local_e0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = s_native_conversation_id_00192bbd._12_4_;
      uVar2 = s_native_conversation_id_00192bbd._8_4_;
      uVar15 = s_native_conversation_id_00192bbd._4_4_;
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      *(undefined4 *)pcVar8 = s_native_conversation_id_00192bbd._0_4_;
      *(undefined4 *)(pcVar8 + 4) = uVar15;
      *(undefined4 *)(pcVar8 + 8) = uVar2;
      *(undefined4 *)(pcVar8 + 0xc) = uVar3;
      pcVar8[0xe] = 'a';
      pcVar8[0xf] = 't';
      pcVar8[0x10] = 'i';
      pcVar8[0x11] = 'o';
      pcVar8[0x12] = 'n';
      pcVar8[0x13] = '_';
      pcVar8[0x14] = 'i';
      pcVar8[0x15] = 'd';
      local_168 = 0x16;
      local_158 = 0x16;
      local_160 = pcVar8;
      if (*(longlong *)(lVar12 + -0x152) == -1) {
        uVar10 = 0;
      }
      else {
        lVar9 = *(longlong *)(lVar12 + -0x142);
        if (lVar9 < 0) {
LAB_003bbca9:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003bbd4c;
        }
        uVar10 = 3;
        if (lVar9 == 0) {
          local_d0 = 1;
          local_e8 = 0;
        }
        else {
          local_e8 = *(longlong *)(lVar12 + -0x14a);
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar12 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar12 == 0) goto LAB_003bbca9;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar9);
          local_e8 = lVar9;
          local_d0 = lVar12;
          lVar12 = local_108;
        }
      }
      local_150 = CONCAT31(local_150._1_3_,uVar10);
      uStack_148 = local_e8;
      local_140 = local_d0;
      uStack_138 = local_e8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"model",5);
      local_168 = 5;
      local_158 = 5;
      lVar12 = *(longlong *)(lVar12 + -0x252);
      local_160 = pcVar8;
      if (lVar12 < 0) {
LAB_003bbc95:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bbd4c;
      }
      if (lVar12 == 0) {
        lVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) goto LAB_003bbc95;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar12);
        uVar7 = local_130;
      }
      local_150 = CONCAT31(local_150._1_3_,3);
      uStack_148 = lVar12;
      local_140 = lVar9;
      uStack_138 = lVar12;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      lVar12 = local_108;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"turn_count",10);
      local_168 = 10;
      local_158 = 10;
      local_140 = *(longlong *)(lVar12 + -0x12);
      local_150 = CONCAT31(local_150._1_3_,2);
      uStack_148 = 0;
      local_160 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"status",6);
      local_168 = 6;
      local_158 = 6;
      local_160 = pcVar8;
      <craggemini_core[66f3c71560d70857]::resume::ConversationStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_150,lVar12);
      if ((char)local_150 == -1) {
        local_128 = uStack_148;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_128,
                   &PTR_s_src_resume_rs_00787d90);
        goto LAB_003bbd4c;
      }
      local_118 = (undefined4)local_140;
      uStack_114 = local_140._4_4_;
      uStack_110 = (undefined4)uStack_138;
      uStack_10c = uStack_138._4_4_;
      local_128 = CONCAT44(uStack_14c,local_150);
      uStack_120 = (undefined4)uStack_148;
      uStack_11c = uStack_148._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_150,&local_100,&local_168,&local_128);
      if ((char)local_150 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_150);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"has_resume_cut",0xe);
      local_168 = 0xe;
      local_158 = 0xe;
      local_150._0_2_ = CONCAT11(*(longlong *)(lVar12 + -0x122) != -1,1);
      local_160 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = s_pending_tool_calls_00192bd3._12_4_;
      uVar2 = s_pending_tool_calls_00192bd3._8_4_;
      uVar15 = s_pending_tool_calls_00192bd3._4_4_;
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      *(undefined4 *)pcVar8 = s_pending_tool_calls_00192bd3._0_4_;
      *(undefined4 *)(pcVar8 + 4) = uVar15;
      *(undefined4 *)(pcVar8 + 8) = uVar2;
      *(undefined4 *)(pcVar8 + 0xc) = uVar3;
      pcVar8[0x10] = 'l';
      pcVar8[0x11] = 's';
      local_168 = 0x12;
      local_158 = 0x12;
      local_160 = pcVar8;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::
      <&alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::PendingToolCallSummary>>
                (&local_150,lVar12 + -0x1ba);
      if ((char)local_150 == -1) {
        local_128 = uStack_148;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_128,
                   &PTR_s_src_resume_rs_00787d90);
        goto LAB_003bbd4c;
      }
      local_118 = (undefined4)local_140;
      uStack_114 = local_140._4_4_;
      uStack_110 = (undefined4)uStack_138;
      uStack_10c = uStack_138._4_4_;
      local_128 = CONCAT44(uStack_14c,local_150);
      uStack_120 = (undefined4)uStack_148;
      uStack_11c = uStack_148._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_150,&local_100,&local_168,&local_128);
      if ((char)local_150 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_150);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"subagent_count",0xe);
      local_168 = 0xe;
      local_158 = 0xe;
      local_140 = *(longlong *)(lVar12 + -0x172);
      local_150 = CONCAT31(local_150._1_3_,2);
      uStack_148 = 0;
      local_160 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"created_at",10);
      local_168 = 10;
      local_158 = 10;
      lVar12 = *(longlong *)(lVar12 + -0x222);
      local_160 = pcVar8;
      if (lVar12 < 0) {
LAB_003bbcba:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bbd4c;
      }
      if (lVar12 == 0) {
        lVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) goto LAB_003bbcba;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar12);
        uVar7 = local_130;
      }
      local_150 = CONCAT31(local_150._1_3_,3);
      uStack_148 = lVar12;
      local_140 = lVar9;
      uStack_138 = lVar12;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      lVar12 = local_108;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"updated_at",10);
      local_168 = 10;
      local_158 = 10;
      lVar12 = *(longlong *)(lVar12 + -0x20a);
      local_160 = pcVar8;
      if (lVar12 < 0) {
LAB_003bbcce:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bbd4c;
      }
      if (lVar12 == 0) {
        lVar9 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar9 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar9 == 0) goto LAB_003bbcce;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar12);
        uVar7 = local_130;
      }
      local_150 = CONCAT31(local_150._1_3_,3);
      uStack_148 = lVar12;
      local_140 = lVar9;
      uStack_138 = lVar12;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      lVar12 = local_108;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"last_used_ms",0xc);
      local_168 = 0xc;
      local_158 = 0xc;
      local_140 = *(longlong *)(lVar12 + -0x1a);
      local_150 = CONCAT31(local_150._1_3_,2);
      uStack_148 = 0;
      local_160 = pcVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar8 == (char *)0x0) goto LAB_003bbd3e;
      builtin_strncpy(pcVar8,"active",6);
      local_168 = 6;
      local_158 = 6;
      local_160 = pcVar8;
      if ((*(longlong *)(local_a8 + 0x78) == -1) ||
         (*(longlong *)(local_a8 + 0x88) != *(longlong *)(lVar12 + -0x26a))) {
        bVar14 = false;
      }
      else {
        iVar6 = (*(code *)PTR_bcmp_00799020)();
        bVar14 = iVar6 == 0;
      }
      local_150._0_2_ = CONCAT11(bVar14,1);
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_100,&local_168,&local_150);
      puVar5 = local_a0;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      local_38 = local_f0;
      uStack_4b._3_1_ = (undefined1)local_100;
      uStack_47 = (undefined4)((ulonglong)local_100 >> 8);
      uStack_43._0_3_ = (undefined3)((ulonglong)local_100 >> 0x28);
      uStack_43._3_1_ = (undefined1)uStack_f8;
      uStack_3f = (undefined7)((ulonglong)uStack_f8 >> 8);
      *(undefined1 *)((longlong)puVar5 + -1) = 5;
      *puVar5 = uStack_4f;
      puVar5[1] = uStack_4b;
      puVar5[2] = uStack_47;
      puVar5[3] = uStack_43;
      *(undefined8 *)((longlong)puVar5 + 0xf) = uStack_f8;
      *(undefined8 *)((longlong)puVar5 + 0x17) = local_f0;
      lVar9 = local_b0 + lVar11;
      lVar11 = lVar11 + 1;
      local_a0 = puVar5 + 8;
      lVar12 = lVar12 + 0x280;
    } while (lVar9 != 0);
    uVar13 = local_c0;
  }
  *local_b8 = local_c0;
  local_b8[1] = uVar7;
  local_b8[2] = uVar13;
  return local_b8;
}


