// 003b9cd0 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,
   craggemini_core[66f3c71560d70857]::tools::synthesize_image_sse::{closure#0}>>>::from_iter */

ulonglong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::tools::synthesize_image_sse::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong param_2,longlong param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RBP;
  longlong lVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar11;
  char local_188 [8];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong *local_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 local_120;
  ulonglong local_118 [3];
  undefined8 local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  ulonglong *local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined8 *local_b0;
  char local_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 uStack_6f;
  undefined4 uStack_6b;
  undefined4 uStack_67;
  undefined4 uStack_63;
  undefined7 uStack_5f;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar8 = (ulonglong)(param_3 - param_2) / 0x48;
  local_c8 = param_1;
  if (param_3 == param_2) {
    local_d0 = 0;
    uVar3 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar3 = (*(code *)PTR___rust_alloc_00799000)();
    if (uVar3 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      if (local_148 != 0) {
        local_118[1] = 0;
        local_118[2] = local_148;
        local_100 = uStack_140;
        local_f0 = 0;
        local_e8 = local_148;
        local_e0 = uStack_140;
      }
      else {
        local_138 = 0;
      }
      local_118[0] = (ulonglong)(local_148 != 0);
      local_f8 = local_118[0];
      local_d8 = local_138;
      uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
               <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                         (local_118,uVar8 << 5);
      for (; unaff_RBP != 1; unaff_RBP = unaff_RBP + -1) {
        uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,8);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_c0 = -uVar8;
    local_b8 = (undefined4 *)(uVar3 + 1);
    plVar10 = (longlong *)(param_2 + 0x28);
    lVar7 = 1;
    pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    local_d0 = uVar8;
    do {
      puVar1 = PTR___rust_alloc_00799000;
      local_148 = 0;
      local_138 = 0;
      (*pcVar9)();
      puVar4 = (undefined8 *)(*(code *)puVar1)();
      if (puVar4 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003ba0fe;
      }
      *puVar4 = 0x6144656e696c6e69;
      *(undefined2 *)(puVar4 + 1) = 0x6174;
      local_88 = 10;
      local_78 = 10;
      local_160 = 0;
      local_150 = 0;
      local_b0 = puVar4;
      local_80 = puVar4;
      (*pcVar9)();
      puVar4 = (undefined8 *)(*(code *)puVar1)();
      if (puVar4 == (undefined8 *)0x0) {
LAB_003ba0de:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003ba0fe:
                    /* WARNING: Does not return */
        pcVar9 = (code *)invalidInstructionException();
        (*pcVar9)();
      }
      *puVar4 = 0x65707954656d696d;
      local_130 = 8;
      local_120 = 8;
      lVar6 = plVar10[-3];
      local_128 = puVar4;
      if (lVar6 < 0) {
LAB_003ba097:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003ba0fe;
      }
      local_168 = plVar10;
      if (lVar6 == 0) {
        lVar5 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_003ba097;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar6);
      }
      plVar10 = local_168;
      local_188[0] = '\x03';
      local_180 = lVar6;
      local_178 = lVar5;
      local_170 = lVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_a8,&local_160,&local_130,local_188);
      puVar1 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if (local_a8[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_a8);
      }
      (*(code *)puVar1)();
      puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar4 == (undefined8 *)0x0) goto LAB_003ba0de;
      *(undefined4 *)puVar4 = 0x61746164;
      local_130 = 4;
      local_120 = 4;
      lVar6 = *plVar10;
      local_128 = puVar4;
      if (lVar6 < 0) {
LAB_003ba0d0:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003ba0fe;
      }
      if (lVar6 == 0) {
        lVar5 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar5 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar5 == 0) goto LAB_003ba0d0;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar6);
        plVar10 = local_168;
      }
      local_188[0] = '\x03';
      local_180 = lVar6;
      local_178 = lVar5;
      local_170 = lVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_a8,&local_160,&local_130,local_188);
      pcVar9 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if (local_a8[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_a8);
      }
      local_38 = local_150;
      local_48 = (undefined4)local_160;
      uStack_44 = local_160._4_4_;
      uStack_40 = uStack_158;
      uStack_3c = uStack_154;
      local_50[0] = 5;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_188,&local_148,&local_88,local_50);
      puVar2 = local_b8;
      if (local_188[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_188);
      }
      local_58 = local_138;
      uStack_6b._3_1_ = (undefined1)local_148;
      uStack_67 = (undefined4)((ulonglong)local_148 >> 8);
      uStack_63._0_3_ = (undefined3)((ulonglong)local_148 >> 0x28);
      uStack_63._3_1_ = (undefined1)uStack_140;
      uStack_5f = (undefined7)((ulonglong)uStack_140 >> 8);
      *(undefined1 *)((longlong)puVar2 + -1) = 5;
      *puVar2 = uStack_6f;
      puVar2[1] = uStack_6b;
      puVar2[2] = uStack_67;
      puVar2[3] = uStack_63;
      *(undefined8 *)((longlong)puVar2 + 0xf) = uStack_140;
      *(undefined8 *)((longlong)puVar2 + 0x17) = local_138;
      lVar6 = local_c0 + lVar7;
      lVar7 = lVar7 + 1;
      local_b8 = puVar2 + 8;
      plVar10 = plVar10 + 9;
    } while (lVar6 != 0);
    uVar8 = local_d0;
  }
  *local_c8 = local_d0;
  local_c8[1] = uVar3;
  local_c8[2] = uVar8;
  return local_c8;
}


