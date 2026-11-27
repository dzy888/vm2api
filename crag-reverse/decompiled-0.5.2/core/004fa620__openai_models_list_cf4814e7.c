// 004fa620 openai_models_list

/* craggemini_core[66f3c71560d70857]::models::openai_models_list */

undefined1 * __rustcall
craggemini_core[66f3c71560d70857]::models::openai_models_list
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong extraout_RDX;
  longlong extraout_RDX_00;
  longlong lVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  undefined4 *local_48;
  longlong local_40;
  undefined1 *local_38;
  
  local_38 = param_1;
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(&str,&str)>,craggemini_core[66f3c71560d70857]::models::openai_models_list::{closure#0}>>>
  ::from_iter(&local_50,&PTR_s_g_0078c908,&PTR_s_src_models_rs_0078cb88);
  ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  if (extraout_RDX != 0) {
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)((longlong)&PTR_s_g_0078c908 + lVar11);
      uVar4 = *(ulonglong *)((longlong)&DAT_0078c910 + lVar11);
      auVar13 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
      if (uVar4 == auVar13._8_8_) {
        if (uVar4 < 0x10) {
          uVar10 = 0;
          do {
            if (uVar4 == uVar10) goto LAB_004faa76;
            bVar1 = *(byte *)(lVar3 + uVar10);
            bVar2 = *(byte *)(auVar13._0_8_ + uVar10);
            uVar10 = uVar10 + 1;
          } while ((byte)(((byte)(bVar1 + 0xbf) < 0x1a) << 5 | bVar1) ==
                   (byte)(((byte)(bVar2 + 0xbf) < 0x1a) << 5 | bVar2));
        }
        else {
          cVar7 = <[u8]>::eq_ignore_ascii_case_chunks::<16:usize>(lVar3,uVar4,auVar13._0_8_);
          if (cVar7 != '\0') goto LAB_004faa76;
        }
      }
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != 0x280);
    local_90 = 0;
    local_80 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined2 *)puVar8 = 0x6469;
      local_a8 = 2;
      local_98 = 2;
      local_a0 = puVar8;
      ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
      if (extraout_RDX_00 < 0) {
LAB_004fa77b:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_004facd2;
      }
      if (extraout_RDX_00 == 0) {
        puVar9 = (undefined4 *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar9 == (undefined4 *)0x0) goto LAB_004fa77b;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,extraout_RDX_00);
      }
      local_c8 = CONCAT31(local_c8._1_3_,3);
      uStack_c0 = extraout_RDX_00;
      uStack_b8 = (undefined8 *)puVar9;
      uStack_b0 = extraout_RDX_00;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_78,&local_90,&local_a8,&local_c8);
      if ((char)local_78 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_78);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 != (undefined8 *)0x0) {
        *(undefined2 *)((longlong)puVar8 + 4) = 0x7463;
        *(undefined4 *)puVar8 = 0x656a626f;
        local_a8 = 6;
        local_98 = 6;
        local_a0 = puVar8;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar9 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_004facd2;
        }
        *(undefined1 *)(puVar9 + 1) = 0x6c;
        *puVar9 = 0x65646f6d;
        local_c8 = CONCAT31(local_c8._1_3_,3);
        uStack_c0 = 5;
        uStack_b0 = 5;
        uStack_b8 = (undefined8 *)puVar9;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_78,&local_90,&local_a8,&local_c8);
        if ((char)local_78 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_78);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined4 *)((longlong)puVar8 + 3) = 0x64657461;
          *(undefined4 *)puVar8 = 0x61657263;
          local_a8 = 7;
          local_98 = 7;
          local_c8 = CONCAT31(local_c8._1_3_,2);
          uStack_c0 = 0;
          uStack_b8 = (undefined8 *)0x67b64b00;
          local_a0 = puVar8;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_78,&local_90,&local_a8,&local_c8);
          if ((char)local_78 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_78);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = 0x79625f64656e776f;
            local_a8 = 8;
            local_98 = 8;
            local_a0 = puVar8;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar8 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_004facd2;
            }
            *puVar8 = 0x696d656767617263;
            *(undefined2 *)(puVar8 + 1) = 0x696e;
            local_c8 = CONCAT31(local_c8._1_3_,3);
            uStack_c0 = 10;
            uStack_b0 = 10;
            uStack_b8 = puVar8;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_78,&local_90,&local_a8,&local_c8);
            if ((char)local_78 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_78);
            }
            uStack_c0 = local_90;
            uStack_b8 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
            uStack_b0 = local_80;
            local_c8 = CONCAT31(local_c8._1_3_,5);
            uVar12 = (undefined4)local_90;
            if (local_40 == local_50) {
              uVar12 = (*(code *)PTR_grow_one_00799310)();
            }
            puVar9 = local_48;
            if (local_40 != 0) {
              (*(code *)PTR_memmove_00799258)(uVar12,local_40 << 5);
            }
            *(undefined8 **)(puVar9 + 4) = uStack_b8;
            *(longlong *)(puVar9 + 6) = uStack_b0;
            *puVar9 = local_c8;
            puVar9[1] = uStack_c4;
            puVar9[2] = (undefined4)uStack_c0;
            puVar9[3] = uStack_c0._4_4_;
            local_40 = local_40 + 1;
            goto LAB_004faa76;
          }
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_004facd2;
  }
LAB_004faa76:
  local_90 = 0;
  local_80 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  puVar6 = local_38;
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined2 *)((longlong)puVar8 + 4) = 0x7463;
    *(undefined4 *)puVar8 = 0x656a626f;
    local_a8 = 6;
    local_98 = 6;
    local_a0 = puVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar9 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_004facd2;
    }
    *puVar9 = 0x7473696c;
    local_c8 = CONCAT31(local_c8._1_3_,3);
    uStack_c0 = 4;
    uStack_b0 = 4;
    uStack_b8 = (undefined8 *)puVar9;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_78,&local_90,&local_a8,&local_c8);
    if ((char)local_78 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_78);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined8 *)0x0) {
      *(undefined4 *)puVar8 = 0x61746164;
      local_a8 = 4;
      local_98 = 4;
      local_a0 = puVar8;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                (&local_c8,&local_50);
      if ((char)local_c8 != -1) {
        local_68 = (undefined4)uStack_b8;
        uStack_64 = uStack_b8._4_4_;
        uStack_60 = (undefined4)uStack_b0;
        uStack_5c = uStack_b0._4_4_;
        local_78 = CONCAT44(uStack_c4,local_c8);
        uStack_70 = (undefined4)uStack_c0;
        uStack_6c = uStack_c0._4_4_;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_c8,&local_90,&local_a8,&local_78);
        if ((char)local_c8 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_c8);
        }
        *(longlong *)(puVar6 + 0x18) = local_80;
        *(undefined4 *)(puVar6 + 8) = (undefined4)local_90;
        *(undefined4 *)(puVar6 + 0xc) = local_90._4_4_;
        *(undefined4 *)(puVar6 + 0x10) = uStack_88;
        *(undefined4 *)(puVar6 + 0x14) = uStack_84;
        *puVar6 = 5;
        puVar9 = local_48;
        uVar12 = (undefined4)local_90;
        for (lVar11 = local_40 + 1; lVar11 != 1; lVar11 = lVar11 + -1) {
          uVar12 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                   <serde_json[dc3825464c436029]::value::Value>(puVar9);
          puVar9 = puVar9 + 8;
        }
        if (local_50 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar12,8);
        }
        return puVar6;
      }
      local_78 = uStack_c0;
      (*(code *)PTR_unwrap_failed_00799028)
                (&PTR_<serde_json[dc3825464c436029]::error::Error>_0078c878,&local_78,
                 &PTR_s_src_models_rs_0078cba0);
      goto LAB_004facd2;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_004facd2:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}


