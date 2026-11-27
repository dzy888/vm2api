// 005f1720 synthesize_grounding_sse

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::tools::synthesize_grounding_sse */

undefined8 __rustcall
craggemini_core[66f3c71560d70857]::tools::synthesize_grounding_sse
          (undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined1 *local_108;
  undefined *puStack_100;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 *puStack_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
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
  
  local_90 = 0;
  local_80 = 0;
  local_98 = param_1;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar6 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar6 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005f1c65;
  }
  *puVar6 = 0x74616469646e6163;
  *(undefined2 *)(puVar6 + 1) = 0x7365;
  local_78 = 10;
  local_68 = 10;
  local_70 = puVar6;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 == (undefined1 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    goto LAB_005f1c65;
  }
  local_b0 = 0;
  local_a0 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar8 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar8 + 1) = 0x78;
    *puVar8 = 0x65646e69;
    local_e8 = 5;
    local_d8 = 5;
    local_128 = CONCAT31(local_128._1_3_,2);
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    puStack_e0 = puVar8;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_108,&local_b0,&local_e8,&local_128);
    if ((char)local_108 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_108);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined4 *)((longlong)puVar8 + 3) = 0x746e6574;
      *puVar8 = 0x746e6f63;
      local_60 = 7;
      local_50 = 7;
      local_c8 = 0;
      local_b8 = 0;
      local_58 = puVar8;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0x656c6f72;
        local_e8 = 4;
        local_d8 = 4;
        puStack_e0 = puVar8;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 == (undefined4 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005f1c65;
        }
        *(undefined1 *)(puVar8 + 1) = 0x6c;
        *puVar8 = 0x65646f6d;
        local_128 = CONCAT31(local_128._1_3_,3);
        uStack_120 = 5;
        uStack_11c = 0;
        uStack_118 = SUB84(puVar8,0);
        uStack_114 = (undefined4)((ulonglong)puVar8 >> 0x20);
        uStack_110 = 5;
        uStack_109 = 0;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_108,&local_c8,&local_e8,&local_128);
        if ((char)local_108 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_108);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 != (undefined4 *)0x0) {
          *(undefined1 *)(puVar8 + 1) = 0x73;
          *puVar8 = 0x74726170;
          local_e8 = 5;
          local_d8 = 5;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_118 = 8;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_109 = 0;
          local_128 = CONCAT31(local_128._1_3_,4);
          puStack_e0 = puVar8;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_108,&local_c8,&local_e8,&local_128);
          if ((char)local_108 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_108);
          }
          uStack_120 = (undefined4)local_c8;
          uStack_11c = local_c8._4_4_;
          uStack_118 = (undefined4)uStack_c0;
          uStack_114 = uStack_c0._4_4_;
          uStack_110 = (undefined7)local_b8;
          uStack_109 = (undefined1)((ulonglong)local_b8 >> 0x38);
          local_128 = CONCAT31(local_128._1_3_,5);
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_108,&local_b0,&local_60,&local_128);
          if ((char)local_108 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_108);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          uVar4 = _UNK_0019ed67;
          uVar3 = _UNK_0019ed63;
          uVar2 = _UNK_0019ed5f;
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = _DAT_0019ed5b;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            *(undefined1 *)(puVar8 + 4) = 0x61;
            local_c8 = 0x11;
            local_b8 = 0x11;
            uStack_c0 = puVar8;
            <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>::to_gemini_json
                      (&local_128,param_2);
            <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
            ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                      (&local_108,&local_128);
            if ((char)local_108 != -1) {
              uStack_d0 = uStack_f0;
              uStack_cc = uStack_ec;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_108,&local_b0,&local_c8,&local_e8);
              if ((char)local_108 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_108);
              }
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_128);
              uStack_124._3_1_ = (undefined1)local_b0;
              uStack_120 = (undefined4)((ulonglong)local_b0 >> 8);
              uStack_11c._0_3_ = (undefined3)((ulonglong)local_b0 >> 0x28);
              uStack_11c._3_1_ = (undefined1)uStack_a8;
              *puVar7 = 5;
              *(undefined8 *)(puVar7 + 0x10) = uStack_a8;
              *(undefined8 *)(puVar7 + 0x18) = local_a0;
              *(undefined4 *)(puVar7 + 1) = local_128;
              *(undefined4 *)(puVar7 + 5) = uStack_124;
              *(undefined4 *)(puVar7 + 9) = uStack_120;
              *(undefined4 *)(puVar7 + 0xd) = uStack_11c;
              uStack_120 = 1;
              uStack_11c = 0;
              uStack_118 = SUB84(puVar7,0);
              uStack_114 = (undefined4)((ulonglong)puVar7 >> 0x20);
              uStack_110 = 1;
              uStack_109 = 0;
              local_128 = CONCAT31(local_128._1_3_,4);
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_108,&local_90,&local_78,&local_128);
              if ((char)local_108 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_108);
              }
              uVar5 = local_98;
              uStack_120 = (undefined4)local_90;
              uStack_11c = local_90._4_4_;
              uStack_118 = uStack_88;
              uStack_114 = uStack_84;
              uStack_110 = (undefined7)local_80;
              uStack_109 = (undefined1)((ulonglong)local_80 >> 0x38);
              local_128 = CONCAT31(local_128._1_3_,5);
              puStack_100 = PTR_fmt_00799758;
              local_108 = (undefined1 *)&local_128;
              (*(code *)PTR_format_inner_00799048)((undefined4)local_90,&local_108);
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_128,&DAT_00186728);
              return uVar5;
            }
            local_e8 = puStack_100;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,&local_e8
                       ,&PTR_s_src_tools_rs_0078e918);
            goto LAB_005f1c65;
          }
          goto LAB_005f1c23;
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005f1c65;
    }
  }
LAB_005f1c23:
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005f1c65:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


