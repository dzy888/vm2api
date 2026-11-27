// 003ba920 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>,
   <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#1}>>>::from_iter
    */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>,<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#1}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char *pcVar8;
  code *pcVar9;
  longlong lVar10;
  longlong unaff_R13;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  longlong local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  char *local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_100 [3];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  ulonglong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 *local_98;
  longlong local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 uStack_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined7 uStack_3f;
  undefined8 local_38;
  
  uVar12 = (ulonglong)(param_3 - param_2) >> 6;
  local_148 = param_3 - param_2;
  local_b0 = param_1;
  if (local_148 == 0) {
    local_b8 = 0;
    uVar4 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar4 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar4 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      if (local_140 != 0) {
        local_100[1] = 0;
        local_100[2] = local_140;
        local_e8 = uStack_138;
        local_d8 = 0;
        local_d0 = local_140;
        local_c8 = uStack_138;
      }
      else {
        local_130 = 0;
      }
      local_100[0] = (ulonglong)(local_140 != 0);
      local_e0 = local_100[0];
      local_c0 = local_130;
      uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                         (local_100,(ulonglong)(param_3 - param_2) >> 1);
      for (; unaff_R13 != 1; unaff_R13 = unaff_R13 + -1) {
        uVar13 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(local_1a8);
        local_1a8 = local_1a8 + 0x20;
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_a0 = -uVar12;
    lVar10 = param_2 + 0x18;
    lVar11 = 1;
    local_180 = 0;
    pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    local_b8 = uVar12;
    do {
      puVar3 = PTR___rust_alloc_00799000;
      local_140 = 0;
      local_130 = 0;
      (*pcVar9)();
      puVar5 = (undefined4 *)(*(code *)puVar3)();
      if (puVar5 == (undefined4 *)0x0) {
LAB_003bae7b:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bae89;
      }
      *(undefined4 *)((longlong)puVar5 + 3) = 0x746e656d;
      *puVar5 = 0x6d676573;
      local_68 = 7;
      local_58 = 7;
      local_160 = (char *)0x0;
      local_150 = 0;
      local_98 = puVar5;
      local_90 = lVar10;
      local_60 = puVar5;
      (*pcVar9)();
      puVar6 = (undefined8 *)(*(code *)puVar3)();
      if (puVar6 == (undefined8 *)0x0) {
LAB_003bae6b:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003bae89:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      *puVar6 = 0x646e497472617473;
      *(undefined2 *)(puVar6 + 1) = 0x7865;
      local_178 = 10;
      local_168 = 10;
      local_190 = *(longlong *)(param_2 + 0x30 + local_180 * 2);
      local_1a0 = CONCAT31(local_1a0._1_3_,2);
      uStack_198 = 0;
      local_170 = puVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_160,&local_178,&local_1a0);
      puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)puVar3)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 == (undefined8 *)0x0) goto LAB_003bae6b;
      *puVar6 = 0x7865646e49646e65;
      local_178 = 8;
      local_168 = 8;
      local_190 = *(longlong *)(param_2 + 0x38 + local_180 * 2);
      local_1a0 = CONCAT31(local_1a0._1_3_,2);
      uStack_198 = 0;
      local_170 = puVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_160,&local_178,&local_1a0);
      puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)puVar3)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 == (undefined8 *)0x0) goto LAB_003bae6b;
      *(undefined4 *)puVar6 = 0x74786574;
      local_178 = 4;
      local_168 = 4;
      lVar10 = *(longlong *)(param_2 + 0x10 + local_180 * 2);
      local_170 = puVar6;
      if (lVar10 < 0) {
LAB_003badfa:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003bae89;
      }
      if (lVar10 == 0) {
        lVar7 = 1;
      }
      else {
        local_a8 = param_2;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar7 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar7 == 0) goto LAB_003badfa;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar10);
        param_2 = local_a8;
      }
      local_1a0 = CONCAT31(local_1a0._1_3_,3);
      uStack_198 = lVar10;
      local_190 = lVar7;
      uStack_188 = lVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_160,&local_178,&local_1a0);
      puVar3 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      local_70 = local_150;
      local_80 = local_160;
      uStack_78 = CONCAT44(uStack_154,uStack_158);
      local_88 = CONCAT71(local_88._1_7_,5);
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1a0,&local_140,&local_68,&local_88);
      lVar10 = local_90;
      if ((char)local_1a0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1a0);
      }
      (*(code *)puVar3)();
      pcVar8 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar2 = s_groundingChunkIndices_00192ba8._12_4_;
      uVar1 = s_groundingChunkIndices_00192ba8._8_4_;
      uVar13 = s_groundingChunkIndices_00192ba8._4_4_;
      if (pcVar8 == (char *)0x0) goto LAB_003bae7b;
      *(undefined4 *)pcVar8 = s_groundingChunkIndices_00192ba8._0_4_;
      *(undefined4 *)(pcVar8 + 4) = uVar13;
      *(undefined4 *)(pcVar8 + 8) = uVar1;
      *(undefined4 *)(pcVar8 + 0xc) = uVar2;
      pcVar8[0xd] = 'k';
      pcVar8[0xe] = 'I';
      pcVar8[0xf] = 'n';
      pcVar8[0x10] = 'd';
      pcVar8[0x11] = 'i';
      pcVar8[0x12] = 'c';
      pcVar8[0x13] = 'e';
      pcVar8[0x14] = 's';
      local_88 = 0x15;
      uStack_78 = 0x15;
      local_80 = pcVar8;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<usize>>(&local_1a0,lVar10);
      pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_1a0 == -1) {
        local_128 = uStack_198;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_128,
                   &PTR_s_src_tools_rs_00787d78);
        goto LAB_003bae89;
      }
      local_118 = (undefined4)local_190;
      uStack_114 = local_190._4_4_;
      uStack_110 = (undefined4)uStack_188;
      uStack_10c = uStack_188._4_4_;
      local_128 = CONCAT44(uStack_19c,local_1a0);
      uStack_120 = (undefined4)uStack_198;
      uStack_11c = uStack_198._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1a0,&local_140,&local_88,&local_128);
      if ((char)local_1a0 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1a0);
      }
      local_38 = local_130;
      uStack_4b._3_1_ = (undefined1)local_140;
      uStack_47 = (undefined4)((ulonglong)local_140 >> 8);
      uStack_43._0_3_ = (undefined3)((ulonglong)local_140 >> 0x28);
      uStack_43._3_1_ = (undefined1)uStack_138;
      uStack_3f = (undefined7)((ulonglong)uStack_138 >> 8);
      *(undefined1 *)(uVar4 + local_180) = 5;
      puVar5 = (undefined4 *)(uVar4 + 1 + local_180);
      *puVar5 = uStack_4f;
      puVar5[1] = uStack_4b;
      puVar5[2] = uStack_47;
      puVar5[3] = uStack_43;
      puVar6 = (undefined8 *)(uVar4 + 0x10 + local_180);
      *puVar6 = uStack_138;
      puVar6[1] = local_130;
      lVar7 = local_a0 + lVar11;
      lVar11 = lVar11 + 1;
      local_180 = local_180 + 0x20;
      lVar10 = lVar10 + 0x40;
    } while (lVar7 != 0);
    uVar12 = local_b8;
  }
  *local_b0 = local_b8;
  local_b0[1] = uVar4;
  local_b0[2] = uVar12;
  return local_b0;
}


