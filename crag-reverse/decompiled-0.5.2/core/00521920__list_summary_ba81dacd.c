// 00521920 list_summary

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::resume::SessionStore>::list_summary */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::resume::SessionStore>::list_summary
          (undefined1 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong unaff_R13;
  longlong lVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar9;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  
  local_c8 = *(longlong *)(param_2 + 0x38);
  uStack_c0 = *(longlong *)(param_2 + 0x40) * 0x280 + local_c8;
  local_b8 = param_2;
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::resume::ConversationRecordV2>,<craggemini_core[66f3c71560d70857]::resume::SessionStore>::list_summary::{closure#0}>>>
  ::from_iter(&local_68,&local_c8);
  local_50 = 0;
  local_40 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  lVar7 = 0x16;
  puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  uVar3 = anon_ec7f14c74815bf4c93b295cfd0665412_79_llvm_7806621557641746444._12_4_;
  uVar2 = anon_ec7f14c74815bf4c93b295cfd0665412_79_llvm_7806621557641746444._8_4_;
  uVar9 = anon_ec7f14c74815bf4c93b295cfd0665412_79_llvm_7806621557641746444._4_4_;
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)puVar5 = anon_ec7f14c74815bf4c93b295cfd0665412_79_llvm_7806621557641746444._0_4_;
    *(undefined4 *)((longlong)puVar5 + 4) = uVar9;
    *(undefined4 *)(puVar5 + 1) = uVar2;
    *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
    *(undefined8 *)((longlong)puVar5 + 0xe) = 0x64695f6e6f697461;
    local_a0 = 0x16;
    local_90 = 0x16;
    local_98 = puVar5;
    if (*(longlong *)(param_2 + 0x78) == -1) {
      uVar6 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x88);
      if (lVar7 < 0) {
LAB_005219e6:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00521cf9;
      }
      uVar6 = 3;
      if (lVar7 == 0) {
        unaff_R13 = 1;
        lVar7 = 0;
      }
      else {
        local_38 = *(undefined8 *)(param_2 + 0x80);
        local_a8 = param_1;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        unaff_R13 = (*(code *)PTR___rust_alloc_00799000)();
        if (unaff_R13 == 0) goto LAB_005219e6;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar7);
        param_1 = local_a8;
      }
    }
    local_c8 = CONCAT71(local_c8._1_7_,uVar6);
    uStack_c0 = lVar7;
    local_b8 = unaff_R13;
    uStack_b0 = lVar7;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_88,&local_50,&local_a0,&local_c8);
    if ((char)local_88 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_88);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar7 = 0x1d;
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    uVar4 = _UNK_0019b65b;
    if (puVar5 != (undefined8 *)0x0) {
      *(ulonglong *)((longlong)puVar5 + 0xd) = CONCAT53(_UNK_0019b656,_DAT_0019b653);
      *(undefined8 *)((longlong)puVar5 + 0x15) = uVar4;
      uVar3 = _UNK_0019b652;
      uVar2 = _UNK_0019b64e;
      uVar9 = _UNK_0019b64a;
      *(undefined4 *)puVar5 = _DAT_0019b646;
      *(undefined4 *)((longlong)puVar5 + 4) = uVar9;
      *(undefined4 *)(puVar5 + 1) = uVar2;
      *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
      local_a0 = 0x1d;
      local_90 = 0x1d;
      local_98 = puVar5;
      if (*(longlong *)(param_2 + 0x90) == -1) {
        uVar6 = 0;
      }
      else {
        lVar7 = *(longlong *)(param_2 + 0xa0);
        if (lVar7 < 0) {
LAB_00521b00:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00521cf9;
        }
        uVar6 = 3;
        if (lVar7 == 0) {
          param_2 = 1;
          lVar7 = 0;
        }
        else {
          local_a8 = param_1;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          param_2 = (*(code *)PTR___rust_alloc_00799000)();
          if (param_2 == 0) goto LAB_00521b00;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar7);
          param_1 = local_a8;
        }
      }
      local_c8 = CONCAT71(local_c8._1_7_,uVar6);
      uStack_c0 = lVar7;
      local_b8 = param_2;
      uStack_b0 = lVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_88,&local_50,&local_a0,&local_c8);
      if ((char)local_88 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_88);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)puVar5 + 5) = 0x736e6f6974617372;
        *puVar5 = 0x61737265766e6f63;
        local_a0 = 0xd;
        local_90 = 0xd;
        local_98 = puVar5;
        <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
        ::collect_seq::
        <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                  (&local_c8,&local_68);
        if ((char)local_c8 != -1) {
          local_78 = (undefined4)local_b8;
          uStack_74 = local_b8._4_4_;
          uStack_70 = (undefined4)uStack_b0;
          uStack_6c = uStack_b0._4_4_;
          local_88 = local_c8;
          uStack_80 = (undefined4)uStack_c0;
          uStack_7c = uStack_c0._4_4_;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_c8,&local_50,&local_a0,&local_88);
          if ((char)local_c8 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_c8);
          }
          *(undefined8 *)(param_1 + 0x18) = local_40;
          *(undefined4 *)(param_1 + 8) = (undefined4)local_50;
          *(undefined4 *)(param_1 + 0xc) = local_50._4_4_;
          *(undefined4 *)(param_1 + 0x10) = uStack_48;
          *(undefined4 *)(param_1 + 0x14) = uStack_44;
          *param_1 = 5;
          lVar7 = local_60;
          uVar9 = (undefined4)local_50;
          for (lVar8 = local_58 + 1; lVar8 != 1; lVar8 = lVar8 + -1) {
            uVar9 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(lVar7);
            lVar7 = lVar7 + 0x20;
          }
          if (local_68 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar9,8);
          }
          return param_1;
        }
        local_88 = uStack_c0;
        (*(code *)PTR_unwrap_failed_00799028)
                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078d6f8,&local_88,
                   &PTR_s_src_resume_rs_0078d768);
        goto LAB_00521cf9;
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00521cf9:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


