// 003b8a80 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::enumerate::Enumerate<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value)>>,
   craggemini_core[66f3c71560d70857]::tools::synthesize_function_call_sse_with_signatures::{closure#0}>>>::from_iter
    */

longlong * __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::iter::adapters::enumerate::Enumerate<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value)>>,craggemini_core[66f3c71560d70857]::tools::synthesize_function_call_sse_with_signatures::{closure#0}>>>
::from_iter(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar17;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined **local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_f0 = *param_2;
  uVar10 = (ulonglong)(param_2[1] - local_f0) >> 4;
  lVar13 = uVar10 * -0x3333333333333333;
  local_b8 = param_1;
  if (param_2[1] == local_f0) {
    lVar8 = 0;
    lVar5 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_1c0 = uVar10 * -0x6666666666666660;
    lVar5 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar5 == 0) {
      uVar17 = (*(code *)PTR_handle_error_00798ff0)();
LAB_003b91d8:
      local_100 = &PTR_s_src_tools_rs_00787df0;
LAB_003b918e:
      (*(code *)PTR_panic_bounds_check_00799520)(uVar17,local_100);
LAB_003b91c6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    local_1d0 = (undefined8 *)param_2[2];
    local_f8 = param_2[3];
    puVar12 = (undefined8 *)param_2[4];
    local_1b0 = param_2[5];
    local_98 = (longlong)puVar12 * 0x30;
    local_100 = &PTR_s_src_tools_rs_00787d48;
    local_a8 = 0;
    uVar17 = extraout_XMM0_Da;
    local_1d8 = puVar12;
    local_b0 = lVar13;
    do {
      local_a0 = local_a8 * 0x50;
      local_1b8 = local_f0 + local_a0;
      puVar6 = *(undefined8 **)(local_1b0 + 0x10);
      local_1c8 = puVar6;
      if (puVar12 != (undefined8 *)0x0) {
        local_90 = *(undefined8 *)(local_1b8 + 0x20);
        lVar13 = *(longlong *)(local_1b8 + 0x28);
        puVar14 = (undefined8 *)0x0;
        lVar8 = local_1b0;
        lVar9 = local_98;
        lVar15 = local_f8;
        do {
          if (puVar6 == puVar14) goto LAB_003b918e;
          lVar11 = *(longlong *)(lVar8 + 8);
          if (((*(char *)(lVar11 + (longlong)puVar14) == '\0') &&
              (*(longlong *)(lVar15 + 0x10) == lVar13)) &&
             (iVar4 = (*(code *)PTR_bcmp_00799020)(lVar8,lVar13), lVar8 = local_1b0,
             puVar6 = local_1c8, uVar17 = extraout_XMM0_Da_00, iVar4 == 0)) {
            goto LAB_003b8c6e;
          }
          lVar15 = lVar15 + 0x30;
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
          lVar9 = lVar9 + -0x30;
        } while (lVar9 != 0);
      }
      if ((local_1d0 < puVar6 && local_1d0 < local_1d8) &&
         (lVar11 = *(longlong *)(local_1b0 + 8), *(char *)(lVar11 + (longlong)local_1d0) == '\0')) {
        puVar14 = local_1d0;
LAB_003b8c6e:
        puVar16 = local_1d0;
        puVar12 = local_1d8;
        if (puVar6 <= puVar14) goto LAB_003b91d8;
        *(undefined1 *)(lVar11 + (longlong)puVar14) = 1;
        (*(code *)PTR_clone_00798fd0)();
      }
      else {
        local_d0 = -1;
        puVar12 = local_1d8;
        puVar16 = local_1d0;
      }
      puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      local_e8 = 0;
      local_d8 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = PTR___rust_alloc_00799000;
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b91c6;
      }
      *puVar6 = 0x6e6f6974636e7566;
      *(undefined4 *)(puVar6 + 1) = 0x6c6c6143;
      local_68 = 0xc;
      local_58 = 0xc;
      local_190 = 0;
      local_180 = 0;
      local_1c8 = puVar6;
      local_60 = puVar6;
      (*(code *)puVar2)();
      puVar7 = (undefined4 *)(*(code *)puVar3)();
      if (puVar7 == (undefined4 *)0x0) {
LAB_003b91a6:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b91c6;
      }
      *(undefined2 *)puVar7 = 0x6469;
      local_1a8 = 2;
      local_198 = 2;
      lVar13 = *(longlong *)(local_1b8 + 0x10);
      local_1a0 = puVar7;
      if (lVar13 < 0) {
LAB_003b910c:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b91c6;
      }
      if (lVar13 == 0) {
        lVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar8 == 0) goto LAB_003b910c;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar13);
        puVar12 = local_1d8;
        puVar16 = local_1d0;
      }
      local_1f8 = CONCAT31(local_1f8._1_3_,3);
      uStack_1f0 = lVar13;
      local_1e8 = lVar8;
      uStack_1e0 = lVar13;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_190,&local_1a8,&local_1f8);
      puVar3 = PTR___rust_alloc_00799000;
      puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)puVar2)();
      puVar7 = (undefined4 *)(*(code *)puVar3)();
      if (puVar7 == (undefined4 *)0x0) goto LAB_003b91a6;
      *puVar7 = 0x656d616e;
      local_1a8 = 4;
      local_198 = 4;
      lVar13 = *(longlong *)(local_1b8 + 0x28);
      local_1a0 = puVar7;
      if (lVar13 < 0) {
LAB_003b9146:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003b91c6;
      }
      if (lVar13 == 0) {
        lVar8 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar8 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar8 == 0) goto LAB_003b9146;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar13);
        puVar12 = local_1d8;
        puVar16 = local_1d0;
      }
      local_1f8 = CONCAT31(local_1f8._1_3_,3);
      uStack_1f0 = lVar13;
      local_1e8 = lVar8;
      uStack_1e0 = lVar13;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_128,&local_190,&local_1a8,&local_1f8);
      puVar3 = PTR___rust_alloc_00799000;
      puVar2 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if ((char)local_128 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_128);
      }
      (*(code *)puVar2)();
      puVar7 = (undefined4 *)(*(code *)puVar3)();
      if (puVar7 == (undefined4 *)0x0) goto LAB_003b91a6;
      *puVar7 = 0x73677261;
      local_1a8 = 4;
      local_198 = 4;
      local_1a0 = puVar7;
      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                (&local_1f8,local_f0 + local_a0 + 0x30);
      if ((char)local_1f8 == -1) {
        local_128 = uStack_1f0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00787e20,&local_128,
                   &PTR_s_src_tools_rs_00787e08);
        goto LAB_003b91c6;
      }
      local_118 = (undefined4)local_1e8;
      uStack_114 = local_1e8._4_4_;
      uStack_110 = (undefined4)uStack_1e0;
      uStack_10c = uStack_1e0._4_4_;
      local_128 = CONCAT44(uStack_1f4,local_1f8);
      uStack_120 = (undefined4)uStack_1f0;
      uStack_11c = uStack_1f0._4_4_;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1f8,&local_190,&local_1a8,&local_128);
      if ((char)local_1f8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1f8);
      }
      local_38 = local_180;
      local_48 = (undefined4)local_190;
      uStack_44 = local_190._4_4_;
      uStack_40 = uStack_188;
      uStack_3c = uStack_184;
      local_50[0] = 5;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_1f8,&local_e8,&local_68,local_50);
      lVar13 = local_a8;
      lVar8 = local_b0;
      if ((char)local_1f8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_1f8);
      }
      uStack_70 = local_d8;
      uStack_80 = local_e8;
      uStack_78 = uStack_e0;
      local_88 = CONCAT31(local_88._1_3_,5);
      if (local_d0 != -1) {
        uStack_160 = local_c0;
        uStack_170 = (undefined4)local_d0;
        uStack_16c = local_d0._4_4_;
        uStack_168 = CONCAT44(uStack_c4,uStack_c8);
        local_178 = CONCAT31(local_178._1_3_,3);
        puVar6 = (undefined8 *)(*(code *)PTR_index_or_insert_007992f8)(&uStack_170,&local_88);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (puVar6,0x10);
        puVar6[2] = uStack_168;
        puVar6[3] = uStack_160;
        *puVar6 = CONCAT44(uStack_174,local_178);
        puVar6[1] = CONCAT44(uStack_16c,uStack_170);
      }
      uStack_168 = uStack_78;
      uStack_160 = uStack_70;
      local_178 = local_88;
      uStack_174 = uStack_84;
      uStack_170 = (undefined4)uStack_80;
      uStack_16c = uStack_80._4_4_;
      lVar9 = lVar13 * 0x20;
      puVar6 = (undefined8 *)(lVar5 + 0x10 + lVar9);
      *puVar6 = uStack_78;
      puVar6[1] = uStack_70;
      puVar7 = (undefined4 *)(lVar5 + lVar9);
      *puVar7 = local_88;
      puVar7[1] = uStack_84;
      puVar7[2] = (undefined4)uStack_80;
      puVar7[3] = uStack_80._4_4_;
      local_a8 = lVar13 + 1;
      local_1d0 = (undefined8 *)((longlong)puVar16 + 1);
      uVar17 = local_88;
    } while (local_a8 != lVar8);
    lVar13 = lVar8;
  }
  *local_b8 = lVar8;
  local_b8[1] = lVar5;
  local_b8[2] = lVar13;
  return local_b8;
}


