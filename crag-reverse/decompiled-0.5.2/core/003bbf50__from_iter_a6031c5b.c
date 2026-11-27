// 003bbf50 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,
   <craggemini_core[66f3c71560d70857]::pool::AccountPool>::conversations_summary::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,<craggemini_core[66f3c71560d70857]::pool::AccountPool>::conversations_summary::{closure#0}>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  code *pcVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong unaff_R15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 uVar21;
  longlong local_188;
  undefined8 local_180;
  char *local_178;
  undefined8 local_170;
  char local_168;
  undefined1 uStack_167;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 uStack_15c;
  undefined2 uStack_15b;
  undefined1 uStack_159;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined1 uStack_13c;
  undefined2 uStack_13b;
  undefined1 uStack_139;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
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
  
  local_a0 = *param_2;
  uVar13 = (ulonglong)(param_2[1] - local_a0) >> 7;
  lVar19 = uVar13 * -0x3333333333333333;
  local_c0 = param_1;
  if (param_2[1] == local_a0) {
    local_b8 = 0;
    lVar9 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_100 = uVar13 * -0x6666666666666660;
    lVar9 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar9 == 0) {
      uVar21 = (*(code *)PTR_handle_error_00798ff0)();
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
      if (local_118 != 0) {
        local_98[1] = 0;
        local_98[2] = local_118;
        local_80 = uStack_110;
        local_70 = 0;
        local_68 = local_118;
        local_60 = uStack_110;
      }
      else {
        local_108 = 0;
      }
      local_98[0] = (ulonglong)(local_118 != 0);
      local_78 = local_98[0];
      local_58 = local_108;
      uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                         (local_98,0xc);
      for (; unaff_R15 != 1; unaff_R15 = unaff_R15 + -1) {
        uVar21 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(local_188);
        local_188 = local_188 + 0x20;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_a8 = param_2[2];
    local_b0 = (longlong *)param_2[3];
    local_f0 = 0;
    pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    local_b8 = lVar19;
    do {
      puVar7 = PTR___rust_alloc_00799000;
      local_118 = 0;
      local_108 = 0;
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)puVar7)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      lVar16 = local_f0 * 0x280 + local_a0;
      builtin_strncpy(pcVar10,"account_id",10);
      local_180 = 10;
      local_170 = 10;
      lVar19 = *(longlong *)(local_a8 + 0x10);
      local_178 = pcVar10;
      if (lVar19 < 0) {
LAB_003bcc84:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bcd61;
      }
      local_120 = lVar16;
      if (lVar19 == 0) {
        lVar16 = 1;
      }
      else {
        (*pcVar18)();
        lVar16 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar16 == 0) goto LAB_003bcc84;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar19);
      }
      lVar11 = local_120;
      local_168 = '\x03';
      uStack_160 = (undefined4)lVar19;
      uStack_15c = (undefined1)((ulonglong)lVar19 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)lVar19 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)lVar19 >> 0x38);
      local_158 = lVar16;
      uStack_150 = lVar19;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      puVar7 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)puVar7)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"conversation_id",0xf);
      local_180 = 0xf;
      local_170 = 0xf;
      lVar19 = *(longlong *)(lVar11 + 0x10);
      local_178 = pcVar10;
      if (lVar19 < 0) {
LAB_003bcc97:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bcd61;
      }
      if (lVar19 == 0) {
        lVar16 = 1;
      }
      else {
        (*(code *)puVar7)();
        lVar16 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar16 == 0) goto LAB_003bcc97;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar19);
        lVar11 = local_120;
      }
      local_168 = '\x03';
      uStack_160 = (undefined4)lVar19;
      uStack_15c = (undefined1)((ulonglong)lVar19 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)lVar19 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)lVar19 >> 0x38);
      local_158 = lVar16;
      uStack_150 = lVar19;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar6 = s_native_conversation_id_00192bbd._12_4_;
      uVar5 = s_native_conversation_id_00192bbd._8_4_;
      uVar4 = s_native_conversation_id_00192bbd._4_4_;
      uVar21 = s_native_conversation_id_00192bbd._0_4_;
      if (pcVar10 == (char *)0x0) {
LAB_003bcd53:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003bcd61:
                    /* WARNING: Does not return */
        pcVar18 = (code *)invalidInstructionException();
        (*pcVar18)();
      }
      *(undefined4 *)pcVar10 = s_native_conversation_id_00192bbd._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar4;
      *(undefined4 *)(pcVar10 + 8) = uVar5;
      *(undefined4 *)(pcVar10 + 0xc) = uVar6;
      pcVar10[0xe] = 'a';
      pcVar10[0xf] = 't';
      pcVar10[0x10] = 'i';
      pcVar10[0x11] = 'o';
      pcVar10[0x12] = 'n';
      pcVar10[0x13] = '_';
      pcVar10[0x14] = 'i';
      pcVar10[0x15] = 'd';
      local_180 = 0x16;
      local_170 = 0x16;
      local_178 = pcVar10;
      if (*(longlong *)(lVar11 + 0x128) == -1) {
        cVar17 = '\0';
      }
      else {
        lVar19 = *(longlong *)(lVar11 + 0x138);
        if (lVar19 < 0) {
LAB_003bccbd:
          (*(code *)PTR_handle_error_00798ff0)(uVar21,lVar19);
          goto LAB_003bcd61;
        }
        cVar17 = '\x03';
        if (lVar19 == 0) {
          local_d8 = 1;
          local_d0 = 0;
        }
        else {
          (*pcVar18)();
          lVar16 = (*(code *)PTR___rust_alloc_00799000)();
          uVar21 = extraout_XMM0_Da_01;
          if (lVar16 == 0) goto LAB_003bccbd;
          (*(code *)PTR_memcpy_00799008)();
          local_d0 = lVar19;
          local_d8 = lVar16;
          pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        }
      }
      uStack_160 = (undefined4)local_d0;
      uStack_15c = (undefined1)((ulonglong)local_d0 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)local_d0 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)local_d0 >> 0x38);
      local_168 = cVar17;
      local_158 = local_d8;
      uStack_150 = local_d0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      lVar19 = local_120;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"model",5);
      local_180 = 5;
      local_170 = 5;
      lVar16 = *(longlong *)(lVar19 + 0x28);
      local_178 = pcVar10;
      if (lVar16 < 0) {
LAB_003bccaa:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bcd61;
      }
      if (lVar16 == 0) {
        lVar11 = 1;
      }
      else {
        (*pcVar18)();
        lVar11 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar11 == 0) goto LAB_003bccaa;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar16);
        lVar19 = local_120;
      }
      local_168 = '\x03';
      uStack_160 = (undefined4)lVar16;
      uStack_15c = (undefined1)((ulonglong)lVar16 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)lVar16 >> 0x38);
      local_158 = lVar11;
      uStack_150 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      puVar7 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)puVar7)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"status",6);
      local_180 = 6;
      local_170 = 6;
      local_178 = pcVar10;
      <craggemini_core[66f3c71560d70857]::resume::ConversationStatus_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_168,lVar19 + 0x27a)
      ;
      if (local_168 == -1) {
        local_148 = uStack_160;
        uStack_144 = (undefined4)
                     (CONCAT17(uStack_159,CONCAT25(uStack_15b,CONCAT14(uStack_15c,uStack_160))) >>
                     0x20);
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_148,
                   &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00787dd8);
        goto LAB_003bcd61;
      }
      local_148 = CONCAT22(uStack_166,CONCAT11(uStack_167,local_168));
      local_138 = (undefined4)local_158;
      uStack_134 = local_158._4_4_;
      uStack_130 = (undefined4)uStack_150;
      uStack_12c = uStack_150._4_4_;
      uStack_144 = uStack_164;
      uStack_140 = uStack_160;
      uStack_13c = uStack_15c;
      uStack_13b = uStack_15b;
      uStack_139 = uStack_159;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_118,&local_180,&local_148);
      if (local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*(code *)puVar7)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"turn_count",10);
      local_180 = 10;
      local_170 = 10;
      local_158 = *(longlong *)(lVar19 + 0x268);
      local_168 = '\x02';
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_15b = 0;
      uStack_159 = 0;
      local_178 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)puVar7)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"created_at",10);
      local_180 = 10;
      local_170 = 10;
      lVar16 = *(longlong *)(lVar19 + 0x58);
      local_178 = pcVar10;
      if (lVar16 < 0) {
LAB_003bccd0:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bcd61;
      }
      if (lVar16 == 0) {
        lVar11 = 1;
      }
      else {
        (*(code *)puVar7)();
        lVar11 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar11 == 0) goto LAB_003bccd0;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar16);
        lVar19 = local_120;
      }
      local_168 = '\x03';
      uStack_160 = (undefined4)lVar16;
      uStack_15c = (undefined1)((ulonglong)lVar16 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)lVar16 >> 0x38);
      local_158 = lVar11;
      uStack_150 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      puVar7 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*(code *)puVar7)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"updated_at",10);
      local_180 = 10;
      local_170 = 10;
      lVar16 = *(longlong *)(lVar19 + 0x70);
      local_178 = pcVar10;
      if (lVar16 < 0) {
LAB_003bcce3:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bcd61;
      }
      if (lVar16 == 0) {
        lVar11 = 1;
      }
      else {
        (*(code *)puVar7)();
        lVar11 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar11 == 0) goto LAB_003bcce3;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar16);
        lVar19 = local_120;
      }
      local_168 = '\x03';
      uStack_160 = (undefined4)lVar16;
      uStack_15c = (undefined1)((ulonglong)lVar16 >> 0x20);
      uStack_15b = (undefined2)((ulonglong)lVar16 >> 0x28);
      uStack_159 = (undefined1)((ulonglong)lVar16 >> 0x38);
      local_158 = lVar11;
      uStack_150 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"last_used_ms",0xc);
      local_180 = 0xc;
      local_170 = 0xc;
      local_158 = *(longlong *)(lVar19 + 0x260);
      local_168 = '\x02';
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_15b = 0;
      uStack_159 = 0;
      local_178 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"has_resume_cut",0xe);
      local_180 = 0xe;
      local_170 = 0xe;
      uStack_167 = *(longlong *)(lVar19 + 0x158) != -1;
      local_168 = '\x01';
      local_178 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"has_warm_slot",0xd);
      local_180 = 0xd;
      local_170 = 0xd;
      lVar16 = *local_b0;
      local_178 = pcVar10;
      if (lVar16 != 0) {
        local_c8 = *(undefined8 *)(lVar19 + 8);
        uVar13 = *(ulonglong *)(lVar19 + 0x10);
        local_f8 = local_b0[1];
        do {
          local_e8 = (ulonglong)*(ushort *)(lVar16 + 0x112);
          uVar14 = (ulonglong)((uint)*(ushort *)(lVar16 + 0x112) * 8);
          lVar19 = uVar14 * 3;
          uVar20 = 0xffffffffffffffff;
          lVar11 = lVar16 + 8;
          local_e0 = lVar16;
          do {
            if (lVar19 == 0) {
              uVar20 = local_e8;
              goto LAB_003bc95c;
            }
            uVar3 = *(ulonglong *)(lVar11 + 0x10);
            uVar15 = uVar3;
            if (uVar13 < uVar3) {
              uVar15 = uVar13;
            }
            iVar8 = (*(code *)PTR_memcmp_00799528)(uVar14,uVar15);
            lVar16 = uVar13 - uVar3;
            if (iVar8 != 0) {
              lVar16 = (longlong)iVar8;
            }
            bVar12 = (0 < lVar16) - (lVar16 < 0);
            uVar14 = (ulonglong)bVar12;
            uVar20 = uVar20 + 1;
            lVar19 = lVar19 + -0x18;
            lVar11 = lVar11 + 0x18;
          } while (bVar12 == 1);
          if (bVar12 == 0) {
            uStack_167 = 1;
            lVar19 = local_120;
            pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
            goto LAB_003bc9ad;
          }
LAB_003bc95c:
          lVar19 = local_120;
          pcVar18 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
          if (local_f8 == 0) break;
          lVar16 = *(longlong *)(local_e0 + 0x118 + uVar20 * 8);
          local_f8 = local_f8 + -1;
        } while( true );
      }
      uStack_167 = 0;
LAB_003bc9ad:
      local_168 = '\x01';
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar5 = s_pending_tool_calls_00192bd3._12_4_;
      uVar4 = s_pending_tool_calls_00192bd3._8_4_;
      uVar21 = s_pending_tool_calls_00192bd3._4_4_;
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      *(undefined4 *)pcVar10 = s_pending_tool_calls_00192bd3._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar21;
      *(undefined4 *)(pcVar10 + 8) = uVar4;
      *(undefined4 *)(pcVar10 + 0xc) = uVar5;
      pcVar10[0x10] = 'l';
      pcVar10[0x11] = 's';
      local_180 = 0x12;
      local_170 = 0x12;
      local_158 = *(longlong *)(lVar19 + 0xd0);
      local_168 = '\x02';
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_15b = 0;
      uStack_159 = 0;
      local_178 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
      if ((char)local_148 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_148);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"interruption",0xc);
      local_180 = 0xc;
      local_170 = 0xc;
      local_178 = pcVar10;
      if (*(longlong *)(lVar19 + 0x1d8) == -1) {
        local_168 = '\0';
      }
      else {
        <craggemini_core[66f3c71560d70857]::resume::InterruptionMeta_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                  (&local_168,lVar19 + 0x1d8);
        if (local_168 == -1) {
          local_148 = uStack_160;
          uStack_144 = (undefined4)
                       (CONCAT17(uStack_159,CONCAT25(uStack_15b,CONCAT14(uStack_15c,uStack_160))) >>
                       0x20);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_148,
                     &PTR_anon_572fb51faa0db1e51baf8d00d92dd3e9_2_llvm_7677212527096675952_00787dd8)
          ;
          goto LAB_003bcd61;
        }
      }
      local_138 = (undefined4)local_158;
      uStack_134 = local_158._4_4_;
      uStack_130 = (undefined4)uStack_150;
      uStack_12c = uStack_150._4_4_;
      local_148 = CONCAT31(CONCAT21(uStack_166,uStack_167),local_168);
      uStack_144 = uStack_164;
      uStack_140 = uStack_160;
      uStack_13c = uStack_15c;
      uStack_13b = uStack_15b;
      uStack_139 = uStack_159;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_118,&local_180,&local_148);
      if (local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*pcVar18)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar10 == (char *)0x0) goto LAB_003bcd53;
      builtin_strncpy(pcVar10,"subagent_count",0xe);
      local_180 = 0xe;
      local_170 = 0xe;
      local_158 = *(longlong *)(lVar19 + 0x108);
      local_168 = '\x02';
      uStack_160 = 0;
      uStack_15c = 0;
      uStack_15b = 0;
      uStack_159 = 0;
      local_178 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_148,&local_118,&local_180,&local_168);
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
      lVar19 = local_f0 * 0x20;
      *(undefined1 *)(lVar9 + lVar19) = 5;
      puVar1 = (undefined4 *)(lVar9 + 1 + lVar19);
      *puVar1 = uStack_4f;
      puVar1[1] = uStack_4b;
      puVar1[2] = uStack_47;
      puVar1[3] = uStack_43;
      puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar19);
      *puVar2 = uStack_110;
      puVar2[1] = local_108;
      local_f0 = local_f0 + 1;
    } while (local_f0 != local_b8);
    lVar19 = local_b8;
  }
  *local_c0 = local_b8;
  local_c0[1] = lVar9;
  local_c0[2] = lVar19;
  return local_c0;
}


