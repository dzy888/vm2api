// 005e5b50 synthesize_image_sse

/* craggemini_core[66f3c71560d70857]::tools::synthesize_image_sse */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::tools::synthesize_image_sse
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  
  <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<craggemini_core[66f3c71560d70857]::tools::GeneratedImage>,craggemini_core[66f3c71560d70857]::tools::synthesize_image_sse::{closure#0}>>>
  ::from_iter(&local_d8,param_2,param_2 + param_3 * 0x48);
  local_90 = 0;
  local_80 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
  }
  else {
    *puVar2 = 0x74616469646e6163;
    *(undefined2 *)(puVar2 + 1) = 0x7365;
    local_78 = 10;
    local_68 = 10;
    local_70 = puVar2;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar3 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar3 == (undefined1 *)0x0) {
      (*(code *)PTR_handle_alloc_error_007991d8)();
    }
    else {
      local_c0 = 0;
      local_b0 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar4 != (undefined4 *)0x0) {
        *(undefined1 *)(puVar4 + 1) = 0x78;
        *puVar4 = 0x65646e69;
        local_f0 = 5;
        local_e0 = 5;
        local_138 = CONCAT31(local_138._1_3_,2);
        uStack_130 = 0;
        uStack_12c = 0;
        uStack_128 = 0;
        uStack_124 = 0;
        local_e8 = puVar4;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_118,&local_c0,&local_f0,&local_138);
        if ((char)local_118 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_118);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar4 != (undefined4 *)0x0) {
          *(undefined4 *)((longlong)puVar4 + 3) = 0x746e6574;
          *puVar4 = 0x746e6f63;
          local_60 = 7;
          local_50 = 7;
          local_a8 = 0;
          local_98 = 0;
          local_58 = puVar4;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = 0x656c6f72;
            local_f0 = 4;
            local_e0 = 4;
            local_e8 = puVar4;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar4 == (undefined4 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_005e604f;
            }
            *(undefined1 *)(puVar4 + 1) = 0x6c;
            *puVar4 = 0x65646f6d;
            local_138 = CONCAT31(local_138._1_3_,3);
            uStack_130 = 5;
            uStack_12c = 0;
            uStack_128 = SUB84(puVar4,0);
            uStack_124 = (undefined4)((ulonglong)puVar4 >> 0x20);
            uStack_120 = 5;
            uStack_11c = 0;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_118,&local_a8,&local_f0,&local_138);
            if ((char)local_118 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_118);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar4 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar4 != (undefined4 *)0x0) {
              *(undefined1 *)(puVar4 + 1) = 0x73;
              *puVar4 = 0x74726170;
              local_f0 = 5;
              local_e0 = 5;
              local_e8 = puVar4;
              <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
              ::collect_seq::
              <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                        (&local_138,&local_d8);
              if ((char)local_138 != -1) {
                local_108 = uStack_128;
                uStack_104 = uStack_124;
                uStack_100 = uStack_120;
                uStack_fc = uStack_11c;
                local_118 = (undefined4 *)CONCAT44(uStack_134,local_138);
                uStack_110 = (undefined *)CONCAT44(uStack_12c,uStack_130);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_138,&local_a8,&local_f0,&local_118);
                if ((char)local_138 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_138);
                }
                uStack_130 = (undefined4)local_a8;
                uStack_12c = local_a8._4_4_;
                uStack_128 = uStack_a0;
                uStack_124 = uStack_9c;
                uStack_120 = (undefined4)local_98;
                uStack_11c = (undefined4)((ulonglong)local_98 >> 0x20);
                local_138 = CONCAT31(local_138._1_3_,5);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_118,&local_c0,&local_60,&local_138);
                if ((char)local_118 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_118);
                }
                uStack_134._3_1_ = (undefined1)local_c0;
                uStack_130 = (undefined4)((ulonglong)local_c0 >> 8);
                uStack_12c._0_3_ = (undefined3)((ulonglong)local_c0 >> 0x28);
                uStack_12c._3_1_ = (undefined1)uStack_b8;
                *puVar3 = 5;
                *(undefined8 *)(puVar3 + 0x10) = uStack_b8;
                *(undefined8 *)(puVar3 + 0x18) = local_b0;
                *(undefined4 *)(puVar3 + 1) = local_138;
                *(undefined4 *)(puVar3 + 5) = uStack_134;
                *(undefined4 *)(puVar3 + 9) = uStack_130;
                *(undefined4 *)(puVar3 + 0xd) = uStack_12c;
                uStack_130 = 1;
                uStack_12c = 0;
                uStack_128 = SUB84(puVar3,0);
                uStack_124 = (undefined4)((ulonglong)puVar3 >> 0x20);
                uStack_120 = 1;
                uStack_11c = 0;
                local_138 = CONCAT31(local_138._1_3_,4);
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_118,&local_90,&local_78,&local_138);
                if ((char)local_118 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_118);
                }
                uStack_130 = (undefined4)local_90;
                uStack_12c = local_90._4_4_;
                uStack_128 = uStack_88;
                uStack_124 = uStack_84;
                uStack_120 = (undefined4)local_80;
                uStack_11c = (undefined4)((ulonglong)local_80 >> 0x20);
                local_138 = CONCAT31(local_138._1_3_,5);
                uStack_110 = PTR_fmt_00799758;
                local_118 = &local_138;
                (*(code *)PTR_format_inner_00799048)((undefined4)local_90,&local_118);
                uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_138,&DAT_00186728);
                lVar5 = local_d0;
                for (lVar6 = local_c8 + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
                  uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(lVar5);
                  lVar5 = lVar5 + 0x20;
                }
                if (local_d8 != 0) {
                  (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
                }
                return param_1;
              }
              local_118 = (undefined4 *)CONCAT44(uStack_12c,uStack_130);
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_118,&PTR_s_src_tools_rs_0078e8a8);
              goto LAB_005e604f;
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005e604f;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
    }
  }
LAB_005e604f:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


