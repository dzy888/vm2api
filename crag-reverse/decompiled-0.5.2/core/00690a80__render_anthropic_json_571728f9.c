// 00690a80 render_anthropic_json

/* craggemini_core[66f3c71560d70857]::multiprotocol::render_anthropic_json */

void __rustcall
craggemini_core[66f3c71560d70857]::multiprotocol::render_anthropic_json
          (undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 ****param_4,
          undefined4 param_5,undefined4 param_6,longlong param_7,undefined8 ****param_8)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  longlong *plVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar14;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 ****local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 ****local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong *local_110;
  undefined8 ****local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 ****local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_7c;
  undefined8 ****local_78;
  longlong local_70;
  undefined8 ****local_68;
  longlong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 ****local_38;
  
  local_e8 = 0;
  local_e0 = 8;
  local_d8 = 0;
  local_60 = param_2;
  local_48 = param_3;
  local_40 = param_1;
  local_38 = param_4;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    local_98 = CONCAT44(local_98._4_4_,param_5);
    local_110 = *(longlong **)(param_2 + 8);
    local_90 = (longlong *)(*(longlong *)(param_2 + 0x10) * 0x68);
    local_50 = local_110 + 4;
    local_58 = local_110 + 1;
    lVar10 = *local_110;
    if (-1 < lVar10) {
      lVar10 = 3;
    }
    local_118 = 0;
    local_7c = param_6;
                    /* WARNING: Could not recover jumptable at 0x00690b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_001a43b8 + *(int *)(&DAT_001a43b8 + lVar10 * 4)))();
    return;
  }
  local_110 = *(longlong **)(param_2 + 0x18);
  plVar1 = *(longlong **)(param_2 + 0x20);
  local_118 = *(longlong *)(param_2 + 0x28);
  plVar13 = (longlong *)0x0;
  if (local_110 != (longlong *)0xffffffffffffffff) {
    plVar13 = plVar1;
  }
  cVar5 = is_safety_finish_reason(plVar13);
  if (cVar5 == '\0') {
    local_108 = (undefined8 ****)0x0;
    local_f8 = (undefined8 ****)0x0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar6 != (char *)0x0) {
      builtin_strncpy(pcVar6,"type",4);
      local_138 = (undefined8 ****)0x4;
      local_128 = 4;
      uStack_130 = pcVar6;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00692b71;
      }
      *(undefined4 *)puVar7 = 0x74786574;
      local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
      uStack_170 = (code *)&DAT_00000004;
      uStack_160 = (undefined8 ****)&DAT_00000004;
      uStack_168 = puVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_158,&local_108,&local_138,&local_178);
      if ((char)local_158 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_158);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 != (char *)0x0) {
        builtin_strncpy(pcVar6,"text",4);
        local_138 = (undefined8 ****)0x4;
        local_128 = 4;
        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
        uStack_170 = (code *)0x0;
        uStack_168 = (undefined8 *)0x1;
        uStack_160 = (undefined8 ****)0x0;
        uStack_130 = pcVar6;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_158,&local_108,&local_138,&local_178);
        if ((char)local_158 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_158);
        }
        lVar10 = local_d8;
        uStack_170 = (code *)local_108;
        uStack_168 = (undefined8 *)CONCAT44(uStack_fc,uStack_100);
        uStack_160 = local_f8;
        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,5);
        if (local_d8 == local_e8) {
          (*(code *)PTR_grow_one_00799310)();
        }
        lVar11 = lVar10 * 0x20;
        puVar7 = (undefined8 *)(local_e0 + 0x10 + lVar11);
        *puVar7 = uStack_168;
        puVar7[1] = uStack_160;
        puVar9 = (undefined4 *)(local_e0 + lVar11);
        *puVar9 = (undefined4)local_178;
        puVar9[1] = local_178._4_4_;
        puVar9[2] = (undefined4)uStack_170;
        puVar9[3] = uStack_170._4_4_;
        local_d8 = lVar10 + 1;
        goto LAB_00691d3a;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00692b71;
  }
LAB_00691d3a:
  local_d0 = 0;
  puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0xd0) + *(longlong *)(param_2 + 200));
  if (param_7 == 0) {
    local_90 = plVar1;
    uVar14 = (*(code *)PTR_new_v4_00799350)();
    uStack_170 = <uuid[ef5bff2cf415df3d]::fmt::Simple_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_178 = &local_158;
    (*(code *)PTR_format_inner_00799048)(uVar14,&local_178);
  }
  else {
    if ((longlong)param_8 < 0) {
LAB_00691d6f:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00692b71;
    }
    if (param_8 == (undefined8 ****)0x0) {
      lVar10 = 1;
      local_90 = plVar1;
    }
    else {
      local_90 = plVar1;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar10 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar10 == 0) goto LAB_00691d6f;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_8);
    }
    local_78 = param_8;
    local_68 = param_8;
    local_70 = lVar10;
  }
  local_b0 = 0;
  local_a0 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
  ppppuVar12 = local_68;
  if (pcVar6 != (char *)0x0) {
    pcVar6[0] = 'i';
    pcVar6[1] = 'd';
    local_138 = (undefined8 ****)0x2;
    local_128 = 2;
    uStack_130 = pcVar6;
    if ((longlong)local_68 < 0) {
LAB_00691eee:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00692b71;
    }
    local_98 = local_70;
    if (local_68 == (undefined8 ****)0x0) {
      puVar8 = (undefined8 *)0x1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 == (undefined8 *)0x0) goto LAB_00691eee;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,ppppuVar12);
    }
    local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
    uStack_170 = (code *)ppppuVar12;
    uStack_160 = ppppuVar12;
    uStack_168 = puVar8;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_158,&local_b0,&local_138,&local_178);
    if ((char)local_158 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_158);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    if (pcVar6 != (char *)0x0) {
      builtin_strncpy(pcVar6,"type",4);
      local_138 = (undefined8 ****)0x4;
      local_128 = 4;
      uStack_130 = pcVar6;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar8 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_00692b71;
      }
      *(undefined4 *)((longlong)puVar8 + 3) = 0x65676173;
      *(undefined4 *)puVar8 = 0x7373656d;
      local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
      uStack_170 = (code *)&DAT_00000007;
      uStack_160 = (undefined8 ****)&DAT_00000007;
      uStack_168 = puVar8;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_158,&local_b0,&local_138,&local_178);
      if ((char)local_158 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_158);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      if (pcVar6 != (char *)0x0) {
        builtin_strncpy(pcVar6,"role",4);
        local_138 = (undefined8 ****)0x4;
        local_128 = 4;
        uStack_130 = pcVar6;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar8 == (undefined8 *)0x0) {
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_00692b71;
        }
        *puVar8 = 0x6e61747369737361;
        *(undefined1 *)(puVar8 + 1) = 0x74;
        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
        uStack_170 = (code *)&DAT_00000009;
        uStack_160 = (undefined8 ****)&DAT_00000009;
        uStack_168 = puVar8;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_158,&local_b0,&local_138,&local_178);
        if ((char)local_158 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_158);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        ppppuVar12 = local_38;
        if (pcVar6 != (char *)0x0) {
          builtin_strncpy(pcVar6,"model",5);
          local_138 = (undefined8 ****)0x5;
          local_128 = 5;
          uStack_130 = pcVar6;
          if ((longlong)local_38 < 0) {
LAB_00692154:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_00692b71;
          }
          if (local_38 == (undefined8 ****)0x0) {
            puVar8 = (undefined8 *)0x1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar8 == (undefined8 *)0x0) goto LAB_00692154;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,ppppuVar12);
          }
          local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
          uStack_170 = (code *)ppppuVar12;
          uStack_160 = ppppuVar12;
          uStack_168 = puVar8;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_158,&local_b0,&local_138,&local_178);
          if ((char)local_158 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_158);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar6 != (char *)0x0) {
            builtin_strncpy(pcVar6,"content",7);
            local_138 = (undefined8 ****)0x7;
            local_128 = 7;
            uStack_130 = pcVar6;
            <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
            ::collect_seq::
            <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                      (&local_178,&local_e8);
            if ((char)local_178 == -1) {
              local_158 = (undefined8 ****)uStack_170;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_158,
                         &PTR_s_src_multiprotocol_rs_00791580);
              goto LAB_00692b71;
            }
            local_148 = (undefined4)uStack_168;
            uStack_144 = uStack_168._4_4_;
            uStack_140 = (undefined4)uStack_160;
            uStack_13c = uStack_160._4_4_;
            local_158 = local_178;
            uStack_150 = (undefined4)uStack_170;
            uStack_14c = uStack_170._4_4_;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_178,&local_b0,&local_138,&local_158);
            if ((char)local_178 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_178);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            lVar10 = local_118;
            if (pcVar6 != (char *)0x0) {
              builtin_strncpy(pcVar6,"stop_reason",0xb);
              local_138 = (undefined8 ****)0xb;
              local_128 = 0xb;
              ppppuVar12 = (undefined8 ****)&DAT_00000008;
              uStack_130 = pcVar6;
              if ((local_d0 & 1) == 0) {
                cVar5 = is_safety_finish_reason(plVar13,local_118);
                if (cVar5 == '\0') {
                  if (lVar10 == 10 && local_110 != (longlong *)0xffffffffffffffff) {
                    ppppuVar12 = (undefined8 ****)
                                 ((ulonglong)
                                  ((short)local_90[1] == 0x534e && *local_90 == 0x454b4f545f58414d)
                                  * 2 + 8);
                  }
                }
                else {
                  ppppuVar12 = (undefined8 ****)&DAT_00000007;
                }
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar8 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar8 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_00692b71;
              }
              (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,ppppuVar12);
              local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,3);
              uStack_170 = (code *)ppppuVar12;
              uStack_168 = puVar8;
              uStack_160 = ppppuVar12;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_158,&local_b0,&local_138,&local_178);
              if ((char)local_158 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_158);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              if (pcVar6 != (char *)0x0) {
                builtin_strncpy(pcVar6,"stop_sequence",0xd);
                local_138 = (undefined8 ****)0xd;
                local_128 = 0xd;
                uStack_130 = pcVar6;
                <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_178,"");
                if ((char)local_178 == -1) {
                  local_158 = (undefined8 ****)uStack_170;
                  (*(code *)PTR_unwrap_failed_00799028)
                            (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_158,
                             &PTR_s_src_multiprotocol_rs_00791580);
                  goto LAB_00692b71;
                }
                local_148 = (undefined4)uStack_168;
                uStack_144 = uStack_168._4_4_;
                uStack_140 = (undefined4)uStack_160;
                uStack_13c = uStack_160._4_4_;
                local_158 = local_178;
                uStack_150 = (undefined4)uStack_170;
                uStack_14c = uStack_170._4_4_;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_178,&local_b0,&local_138,&local_158);
                if ((char)local_178 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_178);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar9 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                lVar10 = local_60;
                if (puVar9 != (undefined4 *)0x0) {
                  *(undefined1 *)(puVar9 + 1) = 0x65;
                  *puVar9 = 0x67617375;
                  local_c8 = 5;
                  local_b8 = 5;
                  lVar11 = *(longlong *)(local_60 + 0xe0);
                  local_c0 = puVar9;
                  if (lVar11 == 0) {
                    local_108 = (undefined8 ****)0x0;
                    local_f8 = (undefined8 ****)0x0;
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar6 != (char *)0x0) {
                      builtin_strncpy(pcVar6,"input_tokens",0xc);
                      local_138 = (undefined8 ****)0xc;
                      local_128 = 0xc;
                      uStack_168 = *(undefined8 **)(lVar10 + 0xc0);
                      local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,2);
                      uStack_170 = (code *)0x0;
                      uStack_130 = pcVar6;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_158,&local_108,&local_138,&local_178);
                      if ((char)local_158 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_158);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar6 != (char *)0x0) {
                        builtin_strncpy(pcVar6,"output_tokens",0xd);
                        local_138 = (undefined8 ****)0xd;
                        local_128 = 0xd;
                        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,2);
                        uStack_170 = (code *)0x0;
                        uStack_168 = puVar7;
                        uStack_130 = pcVar6;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_158,&local_108,&local_138,&local_178);
                        if ((char)local_158 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_158);
                        }
LAB_00692815:
                        uStack_170 = (code *)local_108;
                        uStack_168 = (undefined8 *)CONCAT44(uStack_fc,uStack_100);
                        uStack_160 = local_f8;
                        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,5);
                        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                                  (&local_158,&local_178);
                        if ((char)local_158 != -1) {
                          local_128 = CONCAT44(uStack_144,local_148);
                          uStack_120 = uStack_140;
                          uStack_11c = uStack_13c;
                          local_138 = local_158;
                          uStack_130 = (char *)CONCAT44(uStack_14c,uStack_150);
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_158,&local_b0,&local_c8,&local_138);
                          if ((char)local_158 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_158);
                          }
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_178);
                          *(undefined8 *)(local_40 + 0x18) = local_a0;
                          *(undefined4 *)(local_40 + 8) = (undefined4)local_b0;
                          *(undefined4 *)(local_40 + 0xc) = local_b0._4_4_;
                          *(undefined4 *)(local_40 + 0x10) = uStack_a8;
                          *(undefined4 *)(local_40 + 0x14) = uStack_a4;
                          *local_40 = 5;
                          uVar14 = (undefined4)local_b0;
                          if (local_78 != (undefined8 ****)0x0) {
                            uVar14 = (*(code *)PTR___rust_dealloc_00798fc8)(local_40,1);
                          }
                          lVar10 = local_e0;
                          for (lVar11 = local_d8 + 1; lVar11 != 1; lVar11 = lVar11 + -1) {
                            uVar14 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                                     <serde_json[dc3825464c436029]::value::Value>(lVar10);
                            lVar10 = lVar10 + 0x20;
                          }
                          if (local_e8 != 0) {
                            (*(code *)PTR___rust_dealloc_00798fc8)(uVar14,8);
                          }
                          return;
                        }
                        local_138 = (undefined8 ****)CONCAT44(uStack_14c,uStack_150);
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,
                                   &local_138,&PTR_s_src_multiprotocol_rs_00791580);
                        goto LAB_00692b71;
                      }
                    }
                    (*(code *)PTR_handle_error_00798ff0)();
                  }
                  else {
                    local_108 = (undefined8 ****)0x0;
                    local_f8 = (undefined8 ****)0x0;
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar6 != (char *)0x0) {
                      builtin_strncpy(pcVar6,"input_tokens",0xc);
                      local_138 = (undefined8 ****)0xc;
                      local_128 = 0xc;
                      uStack_168 = *(undefined8 **)(lVar10 + 0xc0);
                      local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,2);
                      uStack_170 = (code *)0x0;
                      uStack_130 = pcVar6;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_158,&local_108,&local_138,&local_178);
                      if ((char)local_158 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_158);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar6 != (char *)0x0) {
                        builtin_strncpy(pcVar6,"output_tokens",0xd);
                        local_138 = (undefined8 ****)0xd;
                        local_128 = 0xd;
                        local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,2);
                        uStack_170 = (code *)0x0;
                        uStack_168 = puVar7;
                        uStack_130 = pcVar6;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_158,&local_108,&local_138,&local_178);
                        if ((char)local_158 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_158);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar6 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        uVar4 = s_cache_read_input_tokens_001a4fbd._12_4_;
                        uVar3 = s_cache_read_input_tokens_001a4fbd._8_4_;
                        uVar14 = s_cache_read_input_tokens_001a4fbd._4_4_;
                        if (pcVar6 != (char *)0x0) {
                          *(undefined4 *)pcVar6 = s_cache_read_input_tokens_001a4fbd._0_4_;
                          *(undefined4 *)(pcVar6 + 4) = uVar14;
                          *(undefined4 *)(pcVar6 + 8) = uVar3;
                          *(undefined4 *)(pcVar6 + 0xc) = uVar4;
                          pcVar6[0xf] = 't';
                          pcVar6[0x10] = '_';
                          pcVar6[0x11] = 't';
                          pcVar6[0x12] = 'o';
                          pcVar6[0x13] = 'k';
                          pcVar6[0x14] = 'e';
                          pcVar6[0x15] = 'n';
                          pcVar6[0x16] = 's';
                          local_138 = (undefined8 ****)0x17;
                          local_128 = 0x17;
                          local_178 = (undefined8 ****)CONCAT71(local_178._1_7_,2);
                          uStack_170 = (code *)0x0;
                          uStack_168 = (undefined8 *)lVar11;
                          uStack_130 = pcVar6;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_158,&local_108,&local_138,&local_178);
                          if ((char)local_158 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_158);
                          }
                          goto LAB_00692815;
                        }
                      }
                    }
                    (*(code *)PTR_handle_error_00798ff0)();
                  }
                  goto LAB_00692b71;
                }
              }
            }
          }
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_00692b71:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


