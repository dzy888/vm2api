// 005cbe30 to_gemini_json

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json */

void __rustcall
<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json
          (undefined1 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  char local_c8 [8];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>,<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#0}>>>
  ::from_iter(&local_68,*(longlong *)(param_2 + 0x20),
              *(longlong *)(param_2 + 0x28) * 0x30 + *(longlong *)(param_2 + 0x20));
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GroundingSupport>,<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json::{closure#1}>>>
  ::from_iter(&local_50,*(longlong *)(param_2 + 0x38),
              *(longlong *)(param_2 + 0x40) * 0x40 + *(longlong *)(param_2 + 0x38));
  local_38 = 0;
  local_28 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = _UNK_00182e3c;
  uVar2 = _UNK_00182e38;
  uVar7 = _UNK_00182e34;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)puVar4 = _DAT_00182e30;
    *(undefined4 *)((longlong)puVar4 + 4) = uVar7;
    *(undefined4 *)(puVar4 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
    local_80 = 0x10;
    local_70 = 0x10;
    local_78 = puVar4;
    <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
    ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
              (local_c8,param_2);
    if (local_c8[0] == -1) {
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,local_a8,
                 &PTR_s_src_tools_rs_0078e3d8);
      goto LAB_005cc1e5;
    }
    local_98 = local_b8;
    uStack_94 = uStack_b4;
    uStack_90 = uStack_b0;
    uStack_8c = uStack_ac;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_c8,&local_38,&local_80,local_a8);
    if (local_c8[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_c8)
      ;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)((longlong)puVar4 + 7) = 0x736b6e756843676e;
      *puVar4 = 0x6e69646e756f7267;
      local_80 = 0xf;
      local_70 = 0xf;
      local_78 = puVar4;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                (local_c8,&local_68);
      if (local_c8[0] == -1) {
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,local_a8,
                   &PTR_s_src_tools_rs_0078e3d8);
        goto LAB_005cc1e5;
      }
      local_98 = local_b8;
      uStack_94 = uStack_b4;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      uStack_a0 = uStack_c0;
      uStack_9c = uStack_bc;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_c8,&local_38,&local_80,local_a8);
      if (local_c8[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_c8);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = _UNK_0019e2c3;
      uVar2 = _UNK_0019e2bf;
      uVar7 = _UNK_0019e2bb;
      if (puVar4 != (undefined8 *)0x0) {
        *(undefined4 *)puVar4 = _DAT_0019e2b7;
        *(undefined4 *)((longlong)puVar4 + 4) = uVar7;
        *(undefined4 *)(puVar4 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
        *(undefined1 *)(puVar4 + 2) = 0x73;
        local_80 = 0x11;
        local_70 = 0x11;
        local_78 = puVar4;
        <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
        ::collect_seq::
        <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                  (local_c8,&local_50);
        if (local_c8[0] != -1) {
          local_98 = local_b8;
          uStack_94 = uStack_b4;
          uStack_90 = uStack_b0;
          uStack_8c = uStack_ac;
          uStack_a0 = uStack_c0;
          uStack_9c = uStack_bc;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_c8,&local_38,&local_80,local_a8);
          if (local_c8[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_c8);
          }
          *(undefined8 *)(param_1 + 0x18) = local_28;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_38;
          *(undefined4 *)(param_1 + 0xc) = local_38._4_4_;
          *(undefined4 *)(param_1 + 0x10) = uStack_30;
          *(undefined4 *)(param_1 + 0x14) = uStack_2c;
          *param_1 = 5;
          lVar5 = local_48;
          uVar7 = (undefined4)local_38;
          for (lVar6 = local_40 + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
            uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(lVar5);
            lVar5 = lVar5 + 0x20;
          }
          if (local_50 != 0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
          }
          lVar5 = local_60;
          for (lVar6 = local_58 + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
            uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(lVar5);
            lVar5 = lVar5 + 0x20;
          }
          if (local_68 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
          }
          return;
        }
        (*(code *)PTR_unwrap_failed_00799028)
                  (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,local_a8,
                   &PTR_s_src_tools_rs_0078e3d8);
        goto LAB_005cc1e5;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005cc1e5:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


