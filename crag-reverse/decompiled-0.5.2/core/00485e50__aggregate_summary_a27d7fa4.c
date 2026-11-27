// 00485e50 aggregate_summary

/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::aggregate_summary */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::aggregate_summary
          (undefined1 *param_1,longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong in_FS_OFFSET;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong local_128;
  ulonglong local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined8 local_100;
  char local_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
    local_68 = *(longlong *)(in_FS_OFFSET + -0x38);
    uVar7 = *(ulonglong *)(in_FS_OFFSET + -0x30);
  }
  else {
    uVar7 = param_3;
    local_68 = (*(code *)PTR_hashmap_random_keys_00799248)();
    *(longlong *)(in_FS_OFFSET + -0x38) = local_68;
    *(ulonglong *)(in_FS_OFFSET + -0x30) = uVar7;
    *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
  }
  *(longlong *)(in_FS_OFFSET + -0x38) = local_68 + 1;
  <hashbrown[b5c94476ffc33875]::raw::RawTableInner>::fallible_with_capacity::
  <alloc[12e961f32105355]::alloc::Global>(&local_50,0x10,param_3);
  local_78 = local_40;
  uStack_70 = uStack_38;
  local_88 = local_50;
  lStack_80 = lStack_48;
  local_60 = uVar7;
  if (param_3 == 0) {
    local_128 = 0;
    lVar5 = 8;
    lVar11 = 0;
    lVar4 = 8;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar4 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_0048646d;
    }
    local_118 = 0;
    lVar11 = param_3 * -200;
    lVar5 = param_3 * 200 + param_2;
    do {
      cVar3 = <hashbrown[b5c94476ffc33875]::map::HashMap<&str,(),std[6c98fd8553dbae28]::hash::random::RandomState>>
              ::insert(&local_88,*(undefined8 *)(lVar5 + -0xc0),*(undefined8 *)(lVar5 + -0xb8));
      if (cVar3 == '\0') {
        if (local_118 == param_3) {
          <alloc[12e961f32105355]::raw_vec::RawVec<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>>
          ::grow_one();
        }
        *(longlong *)(lVar4 + local_118 * 8) = lVar5 + -200;
        local_118 = local_118 + 1;
      }
      lVar11 = lVar11 + 200;
      lVar5 = lVar5 + -200;
    } while (lVar11 != 0);
    uVar7 = local_118 >> 1;
    if (uVar7 != 0) {
      if (local_118 < 8) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar7 & 0x7ffffffffffffffc;
        pauVar10 = (undefined1 (*) [16])(lVar4 + 0x10);
        lVar5 = lVar4 + local_118 * 8;
        lVar11 = 0;
        do {
          auVar14 = pauVar10[-1];
          auVar1 = *pauVar10;
          auVar13 = *(undefined1 (*) [16])(lVar5 + -0x20 + lVar11 * 8);
          auVar15 = *(undefined1 (*) [16])(lVar5 + -0x10 + lVar11 * 8);
          auVar16._8_4_ = auVar15._0_4_;
          auVar16._0_8_ = auVar15._8_8_;
          auVar16._12_4_ = auVar15._4_4_;
          auVar15._8_4_ = auVar13._0_4_;
          auVar15._0_8_ = auVar13._8_8_;
          auVar15._12_4_ = auVar13._4_4_;
          pauVar10[-1] = auVar16;
          *pauVar10 = auVar15;
          auVar13._8_4_ = auVar14._0_4_;
          auVar13._0_8_ = auVar14._8_8_;
          auVar13._12_4_ = auVar14._4_4_;
          auVar14._8_4_ = auVar1._0_4_;
          auVar14._0_8_ = auVar1._8_8_;
          auVar14._12_4_ = auVar1._4_4_;
          *(undefined1 (*) [16])(lVar5 + -0x10 + lVar11 * 8) = auVar13;
          *(undefined1 (*) [16])(lVar5 + -0x20 + lVar11 * 8) = auVar14;
          lVar11 = lVar11 + -4;
          pauVar10 = pauVar10 + 2;
        } while (-lVar11 != (uVar7 & 0xfffffffffffffffc));
        if (uVar7 == uVar8) goto LAB_004860a4;
      }
      puVar6 = (undefined8 *)(lVar4 + uVar8 * 8);
      lVar11 = -uVar8;
      lVar5 = lVar4 + local_118 * 8 + -8;
      do {
        uVar12 = *puVar6;
        *puVar6 = *(undefined8 *)(lVar5 + lVar11 * 8);
        *(undefined8 *)(lVar5 + lVar11 * 8) = uVar12;
        lVar11 = lVar11 + -1;
        puVar6 = puVar6 + 1;
      } while (-lVar11 != uVar7);
    }
LAB_004860a4:
    lVar5 = lVar4 + local_118 * 8;
    local_128 = param_3;
    if (local_118 == 0) {
      lVar11 = 0;
    }
    else {
      uVar7 = (ulonglong)((uint)local_118 & 3);
      if (local_118 < 4) {
        uVar8 = 0;
        lVar11 = 0;
      }
      else {
        uVar8 = 0;
        lVar11 = 0;
        do {
          lVar11 = (ulonglong)(*(char *)(*(longlong *)(lVar4 + 0x10 + uVar8 * 8) + 0xc0) == '\0') +
                   (ulonglong)(*(char *)(*(longlong *)(lVar4 + uVar8 * 8) + 0xc0) == '\0') + lVar11
                   + (ulonglong)(*(char *)(*(longlong *)(lVar4 + 8 + uVar8 * 8) + 0xc0) == '\0') +
                   (ulonglong)(*(char *)(*(longlong *)(lVar4 + 0x18 + uVar8 * 8) + 0xc0) == '\0');
          uVar8 = uVar8 + 4;
        } while ((local_118 & 0xfffffffffffffffc) != uVar8);
        if (uVar7 == 0) goto LAB_00486148;
      }
      uVar9 = 0;
      do {
        lVar11 = lVar11 + (ulonglong)
                          (*(char *)(*(longlong *)(lVar4 + uVar8 * 8 + uVar9 * 8) + 0xc0) == '\0');
        uVar9 = uVar9 + 1;
      } while (uVar7 != uVar9);
    }
  }
LAB_00486148:
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<&craggemini_core[66f3c71560d70857]::subagents::SubagentRecord>,<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::aggregate_summary::{closure#1}>>>
  ::from_iter(&local_b8,lVar4,lVar5);
  local_a0 = 0;
  local_90 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar6 + 4) = 0x6576;
    *(undefined4 *)puVar6 = 0x69746361;
    local_110 = 6;
    local_100 = 6;
    local_f8 = '\x02';
    uStack_f0 = 0;
    local_108 = puVar6;
    local_e8 = lVar11;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_d8,&local_a0,&local_110,&local_f8);
    if ((char)local_d8 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_d8);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined1 *)((longlong)puVar6 + 4) = 0x6c;
      *(undefined4 *)puVar6 = 0x61746f74;
      local_110 = 5;
      local_100 = 5;
      local_f8 = '\x02';
      uStack_f0 = 0;
      local_e8 = local_a8;
      local_108 = puVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_d8,&local_a0,&local_110,&local_f8);
      if ((char)local_d8 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_d8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0x746e656761627573;
        *(undefined1 *)(puVar6 + 1) = 0x73;
        local_110 = 9;
        local_100 = 9;
        local_108 = puVar6;
        <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
        ::collect_seq::
        <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                  (&local_f8,&local_b8);
        if (local_f8 != -1) {
          local_d8 = CONCAT71(uStack_f7,local_f8);
          local_c8 = local_e8;
          uStack_c0 = uStack_e0;
          uStack_d0 = uStack_f0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_f8,&local_a0,&local_110,&local_d8);
          if (local_f8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_f8);
          }
          *(undefined8 *)(param_1 + 0x18) = local_90;
          *(undefined8 *)(param_1 + 8) = local_a0;
          *(undefined8 *)(param_1 + 0x10) = uStack_98;
          *param_1 = 5;
          lVar5 = local_b0;
          uVar12 = local_a0;
          for (lVar4 = local_a8 + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
            uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <serde_json[dc3825464c436029]::value::Value>(lVar5);
            lVar5 = lVar5 + 0x20;
          }
          if (local_b8 != 0) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
          }
          if (local_128 != 0) {
            uVar12 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
          }
          if ((lStack_80 != 0) && (lStack_80 * 0x11 != -0x21)) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,0x10);
          }
          return param_1;
        }
        local_d8 = uStack_f0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078acd0,&local_d8,
                   &PTR_s_src_subagents_rs_0078ad28);
        goto LAB_0048646d;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_0048646d:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


