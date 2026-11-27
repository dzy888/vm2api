// 003af4c0 <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<serde_json[dc3825464c436029]::value::Value>::{closure#0},core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,!>>

/* <core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,
   craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}::{closure#4}> as
   core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>::try_fold::<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,
   alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<serde_json[dc3825464c436029]::value::Value>::{closure#0},
   core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,
   !>> */

undefined8 __rustcall
<core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<alloc[12e961f32105355]::vec::into_iter::IntoIter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::server::submit_image::{closure#0}::{closure#4}>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
::try_fold::
<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,alloc[12e961f32105355]::vec::in_place_collect::write_in_place_with_drop<serde_json[dc3825464c436029]::value::Value>::_closure_0_,core[c0acaeba6ab4c2e0]::result::Result<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDrop<serde_json[dc3825464c436029]::value::Value>,_>>
          (longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong *plVar18;
  code *pcVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined7 local_af;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined2 uStack_a3;
  undefined1 uStack_a1;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined1 local_90 [8];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  undefined4 *local_58;
  char local_50 [32];
  
  plVar18 = *(longlong **)(param_1 + 8);
  local_70 = *(longlong **)(param_1 + 0x18);
  if (plVar18 != local_70) {
    pcVar19 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
    local_68 = param_1;
    do {
      puVar5 = PTR___rust_alloc_00799000;
      lVar1 = *plVar18;
      lVar15 = plVar18[1];
      lVar16 = plVar18[2];
      lVar2 = plVar18[3];
      lVar22 = plVar18[4];
      lVar3 = plVar18[5];
      lVar4 = plVar18[6];
      local_60 = plVar18[8];
      plVar18 = plVar18 + 9;
      *(longlong **)(local_68 + 8) = plVar18;
      local_e0 = 0;
      local_d0 = 0;
      local_58 = param_3;
      (*pcVar19)();
      puVar13 = (undefined8 *)(*(code *)puVar5)();
      if (puVar13 == (undefined8 *)0x0) {
LAB_003af98d:
        (*(code *)PTR_handle_error_00798ff0)();
LAB_003af99b:
                    /* WARNING: Does not return */
        pcVar19 = (code *)invalidInstructionException();
        (*pcVar19)();
      }
      *puVar13 = 0x6e6f736a5f343662;
      local_c8 = 8;
      local_b8 = 8;
      local_c0 = puVar13;
      if (lVar3 < 0) {
LAB_003af964:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003af99b;
      }
      if (lVar3 == 0) {
        lVar14 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar14 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar14 == 0) goto LAB_003af964;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar3,param_5,param_6,lVar15,lVar22);
      }
      local_90[0] = 3;
      local_88 = lVar3;
      local_80 = lVar14;
      local_78 = lVar3;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_50,&local_e0,&local_c8,local_90);
      puVar5 = PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if (local_50[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_50);
      }
      (*(code *)puVar5)();
      puVar13 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar13 == (undefined8 *)0x0) goto LAB_003af98d;
      *puVar13 = 0x7079745f656d696d;
      *(undefined1 *)(puVar13 + 1) = 0x65;
      local_c8 = 9;
      local_b8 = 9;
      local_c0 = puVar13;
      if (lVar16 < 0) {
LAB_003af971:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_003af99b;
      }
      if (lVar16 == 0) {
        lVar15 = 1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar15 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar15 == 0) goto LAB_003af971;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar16);
      }
      local_90[0] = 3;
      local_88 = lVar16;
      local_80 = lVar15;
      local_78 = lVar16;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_50,&local_e0,&local_c8,local_90);
      pcVar19 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
      if (local_50[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_50);
      }
      lVar15 = local_60;
      puVar5 = PTR___rust_alloc_00799000;
      uStack_98 = local_d0;
      uStack_a8 = (undefined4)local_e0;
      uStack_a4 = (undefined1)((ulonglong)local_e0 >> 0x20);
      uStack_a3 = (undefined2)((ulonglong)local_e0 >> 0x28);
      uStack_a1 = (undefined1)((ulonglong)local_e0 >> 0x38);
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      local_b0 = 5;
      if (lVar4 != -1) {
        if (local_60 < 0) {
LAB_003af97f:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_003af99b;
        }
        if (local_60 == 0) {
          lVar16 = 1;
          uVar20 = (undefined4)local_e0;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar16 = (*(code *)puVar5)();
          if (lVar16 == 0) goto LAB_003af97f;
          uVar20 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar15);
        }
        local_138 = CONCAT31(local_138._1_3_,3);
        uStack_130 = (undefined4)lVar15;
        puVar17 = (undefined4 *)(*(code *)PTR_index_or_insert_007992f8)(uVar20,&local_b0);
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (puVar17,0xe);
        uVar20 = (undefined4)((ulonglong)lVar15 >> 0x20);
        local_128 = (undefined4)lVar16;
        uStack_124 = (undefined4)((ulonglong)lVar16 >> 0x20);
        puVar17[4] = local_128;
        puVar17[5] = uStack_124;
        puVar17[6] = uStack_130;
        puVar17[7] = uVar20;
        *puVar17 = local_138;
        puVar17[1] = uStack_134;
        puVar17[2] = uStack_130;
        puVar17[3] = uVar20;
        pcVar19 = (code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8;
        if (lVar4 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(local_138,1);
        }
      }
      uVar11 = uStack_9c;
      uVar10 = uStack_a0;
      uVar9 = uStack_a1;
      uVar8 = uStack_a3;
      uVar7 = uStack_a4;
      uVar6 = uStack_a8;
      uVar12 = uStack_98._4_4_;
      uVar20 = (undefined4)uStack_98;
      local_138._1_3_ = (undefined3)local_af;
      local_138 = CONCAT31(local_138._1_3_,local_b0);
      uStack_134 = (undefined4)((uint7)local_af >> 0x18);
      uVar21 = uStack_a0;
      if (lVar1 != 0) {
        uVar21 = (*(code *)PTR___rust_dealloc_00798fc8)(CONCAT17((undefined1)uStack_a8,local_af),1);
      }
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar21,1);
      }
      local_58[4] = uVar10;
      local_58[5] = uVar11;
      local_58[6] = uVar20;
      local_58[7] = uVar12;
      *local_58 = local_138;
      local_58[1] = uStack_134;
      local_58[2] = uVar6;
      local_58[3] = CONCAT13(uVar9,CONCAT21(uVar8,uVar7));
      param_3 = local_58 + 8;
    } while (plVar18 != local_70);
  }
  return param_2;
}


