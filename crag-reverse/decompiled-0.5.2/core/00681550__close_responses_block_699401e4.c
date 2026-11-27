// 00681550 close_responses_block

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::close_responses_block */

void __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::close_responses_block
          (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  char local_100 [8];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  
  if (*(char *)(param_1 + 0x12d) == '\0') {
    return;
  }
  local_80 = param_2;
  if (*(char *)(param_1 + 0x12d) != '\x01') {
    local_118 = (undefined8 *)0x0;
    local_108 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)puVar9 = 0x65707974;
      local_e0 = 4;
      puStack_d0 = (undefined8 *)&DAT_00000004;
      local_d8 = puVar9;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar2 = s_ontent_part_donechatcmpl_resp__001a4ee2._8_8_;
      if (pcVar10 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006827c4;
      }
      *(ulonglong *)(pcVar10 + 10) =
           CONCAT26(s_ontent_part_donechatcmpl_resp__001a4ee2._6_2_,
                    CONCAT42(s_ontent_part_donechatcmpl_resp__001a4ee2._2_4_,
                             s_ontent_part_donechatcmpl_resp__001a4ee2._0_2_));
      *(undefined8 *)(pcVar10 + 0x12) = uVar2;
      uVar7 = s_ontent_part_donechatcmpl_resp__001a4ee2._2_4_;
      uVar6 = s_response_c_001a4ed8._4_4_;
      uVar5 = CONCAT22(s_ontent_part_donechatcmpl_resp__001a4ee2._0_2_,s_response_c_001a4ed8._8_2_);
      *(undefined4 *)pcVar10 = s_response_c_001a4ed8._0_4_;
      *(undefined4 *)(pcVar10 + 4) = uVar6;
      *(undefined4 *)(pcVar10 + 8) = uVar5;
      *(undefined4 *)(pcVar10 + 0xc) = uVar7;
      local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
      uStack_130 = (undefined *)0x1a;
      uStack_120 = (undefined *)0x1a;
      uStack_128 = pcVar10;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_100,&local_118,&local_e0,&local_138);
      if (local_100[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_100);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar9 + 3) = 0x64695f6d;
        *(undefined4 *)puVar9 = 0x6d657469;
        local_e0 = 7;
        puStack_d0 = (undefined8 *)&DAT_00000007;
        lVar1 = *(longlong *)(param_1 + 0x70);
        local_d8 = puVar9;
        if (lVar1 < 0) {
LAB_006817ea:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_006827c4;
        }
        local_88 = *(undefined8 *)(param_1 + 0x68);
        if (lVar1 == 0) {
          pcVar10 = (char *)0x1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
          if (pcVar10 == (char *)0x0) goto LAB_006817ea;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar1);
        }
        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
        uStack_130 = (undefined *)lVar1;
        uStack_128 = pcVar10;
        uStack_120 = (undefined *)lVar1;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_100,&local_118,&local_e0,&local_138);
        if (local_100[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_100);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = 0x695f74757074756f;
          *(undefined4 *)(puVar9 + 1) = 0x7865646e;
          local_e0 = 0xc;
          puStack_d0 = (undefined8 *)0xc;
          uStack_128 = *(char **)(param_1 + 0x118);
          local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
          uStack_130 = (undefined *)0x0;
          local_d8 = puVar9;
          local_c0 = uStack_128;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_100,&local_118,&local_e0,&local_138);
          if (local_100[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_100);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)puVar9 + 5) = 0x7865646e695f746e;
            *puVar9 = 0x5f746e65746e6f63;
            local_e0 = 0xd;
            puStack_d0 = (undefined8 *)0xd;
            local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
            uStack_130 = (undefined *)0x0;
            uStack_128 = (char *)0x0;
            local_d8 = puVar9;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(local_100,&local_118,&local_e0,&local_138);
            if (local_100[0] != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (local_100);
            }
            local_d8 = local_118;
            puStack_d0 = puStack_110;
            local_c8 = local_108;
            local_e0 = CONCAT71(local_e0._1_7_,5);
            local_a0 = 0;
            local_90 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar9 != (undefined8 *)0x0) {
              *(undefined4 *)puVar9 = 0x65707974;
              local_118 = (undefined8 *)&DAT_00000004;
              local_108 = 4;
              puStack_110 = puVar9;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
              uVar2 = s_output_item_done_001a4d8c._8_8_;
              if (pcVar10 == (char *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_006827c4;
              }
              *(ulonglong *)(pcVar10 + 9) =
                   CONCAT17(s_output_item_done_001a4d8c[7],
                            CONCAT43(s_output_item_done_001a4d8c._3_4_,
                                     s_output_item_done_001a4d8c._0_3_));
              *(undefined8 *)(pcVar10 + 0x11) = uVar2;
              uVar7 = s_output_item_done_001a4d8c._3_4_;
              uVar6 = ram0x001a4d8b;
              uVar5 = s_response__001a4d83._4_4_;
              *(undefined4 *)pcVar10 = s_response__001a4d83._0_4_;
              *(undefined4 *)(pcVar10 + 4) = uVar5;
              *(undefined4 *)(pcVar10 + 8) = uVar6;
              *(undefined4 *)(pcVar10 + 0xc) = uVar7;
              local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
              uStack_130 = (undefined *)0x19;
              uStack_120 = (undefined *)0x19;
              uStack_128 = pcVar10;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(local_100,&local_a0,&local_118,&local_138);
              if (local_100[0] != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (local_100);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = 0x695f74757074756f;
                *(undefined4 *)(puVar9 + 1) = 0x7865646e;
                local_118 = (undefined8 *)0xc;
                local_108 = 0xc;
                local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
                uStack_130 = (undefined *)0x0;
                uStack_128 = local_c0;
                puStack_110 = puVar9;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(local_100,&local_a0,&local_118,&local_138);
                if (local_100[0] != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(local_100);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar11 != (undefined4 *)0x0) {
                  *puVar11 = 0x6d657469;
                  local_78 = 4;
                  local_68 = 4;
                  local_b8[0] = 0;
                  local_a8 = 0;
                  local_70 = puVar11;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  pcVar10 = (char *)0x1;
                  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar9 != (undefined8 *)0x0) {
                    *(undefined2 *)puVar9 = 0x6469;
                    local_118 = (undefined8 *)0x2;
                    local_108 = 2;
                    puStack_110 = puVar9;
                    if (lVar1 != 0) {
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar10 == (char *)0x0) {
                        (*(code *)PTR_handle_error_00798ff0)();
                        goto LAB_006827c4;
                      }
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar1);
                    }
                    local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                    uStack_130 = (undefined *)lVar1;
                    uStack_128 = pcVar10;
                    uStack_120 = (undefined *)lVar1;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(local_100,local_b8,&local_118,&local_138);
                    if (local_100[0] != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(local_100);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                    if (puVar9 != (undefined8 *)0x0) {
                      *(undefined4 *)puVar9 = 0x65707974;
                      local_118 = (undefined8 *)&DAT_00000004;
                      local_108 = 4;
                      puStack_110 = puVar9;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                      if (pcVar10 == (char *)0x0) {
                        (*(code *)PTR_handle_error_00798ff0)();
                        goto LAB_006827c4;
                      }
                      builtin_strncpy(pcVar10,"message",7);
                      local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                      uStack_130 = (undefined *)0x7;
                      uStack_120 = (undefined *)0x7;
                      uStack_128 = pcVar10;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(local_100,local_b8,&local_118,&local_138);
                      if (local_100[0] != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(local_100);
                      }
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                      if (puVar9 != (undefined8 *)0x0) {
                        *(undefined4 *)puVar9 = 0x656c6f72;
                        local_118 = (undefined8 *)&DAT_00000004;
                        local_108 = 4;
                        puStack_110 = puVar9;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        if (pcVar10 == (char *)0x0) {
                          (*(code *)PTR_handle_error_00798ff0)();
                          goto LAB_006827c4;
                        }
                        builtin_strncpy(pcVar10,"assistant",9);
                        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                        uStack_130 = (undefined *)0x9;
                        uStack_120 = (undefined *)0x9;
                        uStack_128 = pcVar10;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(local_100,local_b8,&local_118,&local_138);
                        if (local_100[0] != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(local_100);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                        if (puVar9 != (undefined8 *)0x0) {
                          *(undefined2 *)((longlong)puVar9 + 4) = 0x7375;
                          *(undefined4 *)puVar9 = 0x74617473;
                          local_118 = (undefined8 *)&DAT_00000006;
                          local_108 = 6;
                          puStack_110 = puVar9;
                          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                          puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                          if (puVar9 == (undefined8 *)0x0) {
                            (*(code *)PTR_handle_error_00798ff0)();
                            goto LAB_006827c4;
                          }
                          *puVar9 = 0x6574656c706d6f63;
                          *(undefined1 *)(puVar9 + 1) = 100;
                          local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                          uStack_130 = (undefined *)0x9;
                          uStack_120 = (undefined *)0x9;
                          uStack_128 = (char *)puVar9;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(local_100,local_b8,&local_118,&local_138);
                          if (local_100[0] != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(local_100);
                          }
                          uStack_130 = (undefined *)local_b8[0];
                          uStack_120 = (undefined *)local_a8;
                          local_138 = (undefined8 *)CONCAT71(local_138._1_7_,5);
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(local_100,&local_a0,&local_78,&local_138);
                          plVar8 = local_80;
                          if (local_100[0] != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(local_100);
                          }
                          local_f8 = (undefined4)local_a0;
                          uStack_f4 = local_a0._4_4_;
                          uStack_f0 = uStack_98;
                          uStack_ec = uStack_94;
                          local_e8 = local_90;
                          local_100[0] = '\x05';
                          local_138 = &local_e0;
                          uStack_130 = PTR_fmt_00799758;
                          uStack_120 = PTR_fmt_00799758;
                          uStack_128 = local_100;
                          (*(code *)PTR_format_inner_00799048)((undefined4)local_a0,&local_138);
                          (*(code *)PTR_from_00799298)();
                          lVar1 = plVar8[2];
                          if (lVar1 == *plVar8) {
                            (*(code *)PTR_grow_one_0079a3a0)();
                          }
                          lVar3 = plVar8[1];
                          puVar11 = (undefined4 *)(lVar3 + 0x10 + lVar1 * 0x20);
                          *puVar11 = (undefined4)uStack_128;
                          puVar11[1] = uStack_128._4_4_;
                          puVar11[2] = (undefined4)uStack_120;
                          puVar11[3] = uStack_120._4_4_;
                          puVar11 = (undefined4 *)(lVar3 + lVar1 * 0x20);
                          *puVar11 = (undefined4)local_138;
                          puVar11[1] = local_138._4_4_;
                          puVar11[2] = (undefined4)uStack_130;
                          puVar11[3] = uStack_130._4_4_;
                          plVar8[2] = lVar1 + 1;
                          *(char **)(param_1 + 0x118) = local_c0 + 1;
                          *(undefined1 *)(param_1 + 0x12d) = 0;
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(local_100,local_48);
                          goto LAB_0068266d;
                        }
                      }
                    }
                  }
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_006827c4;
                }
              }
            }
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_006827c4;
          }
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_006827c4;
  }
  local_118 = (undefined8 *)0x0;
  local_108 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar9 != (undefined8 *)0x0) {
    *(undefined4 *)puVar9 = 0x65707974;
    local_e0 = 4;
    puStack_d0 = (undefined8 *)&DAT_00000004;
    local_d8 = puVar9;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
    uVar2 = s_ng_summary_part_done_001a4ec4._8_8_;
    if (pcVar10 == (char *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006827c4;
    }
    *(undefined8 *)(pcVar10 + 0x10) = s_ng_summary_part_done_001a4ec4._0_8_;
    *(undefined8 *)(pcVar10 + 0x18) = uVar2;
    uVar7 = s_response_reasoni_001a4eb4._12_4_;
    uVar6 = s_response_reasoni_001a4eb4._8_4_;
    uVar5 = s_response_reasoni_001a4eb4._4_4_;
    *(undefined4 *)pcVar10 = s_response_reasoni_001a4eb4._0_4_;
    *(undefined4 *)(pcVar10 + 4) = uVar5;
    *(undefined4 *)(pcVar10 + 8) = uVar6;
    *(undefined4 *)(pcVar10 + 0xc) = uVar7;
    pcVar10[0x20] = 'd';
    pcVar10[0x21] = 'o';
    pcVar10[0x22] = 'n';
    pcVar10[0x23] = 'e';
    local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
    uStack_130 = (undefined *)0x24;
    uStack_120 = (undefined *)0x24;
    uStack_128 = pcVar10;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_100,&local_118,&local_e0,&local_138);
    if (local_100[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (local_100);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar9 + 3) = 0x64695f6d;
      *(undefined4 *)puVar9 = 0x6d657469;
      local_e0 = 7;
      puStack_d0 = (undefined8 *)&DAT_00000007;
      lVar1 = *(longlong *)(param_1 + 0x70);
      local_d8 = puVar9;
      if (lVar1 < 0) {
LAB_006816b3:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006827c4;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      if (lVar1 == 0) {
        pcVar10 = (char *)0x1;
      }
      else {
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
        if (pcVar10 == (char *)0x0) goto LAB_006816b3;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar1);
      }
      local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
      uStack_130 = (undefined *)lVar1;
      uStack_128 = pcVar10;
      uStack_120 = (undefined *)lVar1;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(local_100,&local_118,&local_e0,&local_138);
      local_88 = uVar2;
      if (local_100[0] != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (local_100);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = 0x695f74757074756f;
        *(undefined4 *)(puVar9 + 1) = 0x7865646e;
        local_e0 = 0xc;
        puStack_d0 = (undefined8 *)0xc;
        uStack_128 = *(char **)(param_1 + 0x118);
        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
        uStack_130 = (undefined *)0x0;
        local_d8 = puVar9;
        local_c0 = uStack_128;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_100,&local_118,&local_e0,&local_138);
        if (local_100[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_100);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar9 != (undefined8 *)0x0) {
          *(undefined8 *)((longlong)puVar9 + 5) = 0x7865646e695f7972;
          *puVar9 = 0x5f7972616d6d7573;
          local_e0 = 0xd;
          puStack_d0 = (undefined8 *)0xd;
          local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
          uStack_130 = (undefined *)0x0;
          uStack_128 = (char *)0x0;
          local_d8 = puVar9;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(local_100,&local_118,&local_e0,&local_138);
          if (local_100[0] != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (local_100);
          }
          local_d8 = local_118;
          puStack_d0 = puStack_110;
          local_c8 = local_108;
          local_e0 = CONCAT71(local_e0._1_7_,5);
          local_a0 = 0;
          local_90 = 0;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined4 *)puVar9 = 0x65707974;
            local_118 = (undefined8 *)&DAT_00000004;
            local_108 = 4;
            puStack_110 = puVar9;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
            uVar2 = s_output_item_done_001a4d8c._8_8_;
            if (pcVar10 == (char *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
              goto LAB_006827c4;
            }
            *(ulonglong *)(pcVar10 + 9) =
                 CONCAT17(s_output_item_done_001a4d8c[7],
                          CONCAT43(s_output_item_done_001a4d8c._3_4_,
                                   s_output_item_done_001a4d8c._0_3_));
            *(undefined8 *)(pcVar10 + 0x11) = uVar2;
            uVar7 = s_output_item_done_001a4d8c._3_4_;
            uVar6 = ram0x001a4d8b;
            uVar5 = s_response__001a4d83._4_4_;
            *(undefined4 *)pcVar10 = s_response__001a4d83._0_4_;
            *(undefined4 *)(pcVar10 + 4) = uVar5;
            *(undefined4 *)(pcVar10 + 8) = uVar6;
            *(undefined4 *)(pcVar10 + 0xc) = uVar7;
            local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
            uStack_130 = (undefined *)0x19;
            uStack_120 = (undefined *)0x19;
            uStack_128 = pcVar10;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(local_100,&local_a0,&local_118,&local_138);
            if (local_100[0] != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (local_100);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = 0x695f74757074756f;
              *(undefined4 *)(puVar9 + 1) = 0x7865646e;
              local_118 = (undefined8 *)0xc;
              local_108 = 0xc;
              local_138 = (undefined8 *)CONCAT71(local_138._1_7_,2);
              uStack_130 = (undefined *)0x0;
              uStack_128 = local_c0;
              puStack_110 = puVar9;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(local_100,&local_a0,&local_118,&local_138);
              if (local_100[0] != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (local_100);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar11 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar11 != (undefined4 *)0x0) {
                *puVar11 = 0x6d657469;
                local_78 = 4;
                local_68 = 4;
                local_b8[0] = 0;
                local_a8 = 0;
                local_70 = puVar11;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                pcVar10 = (char *)0x1;
                puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar9 != (undefined8 *)0x0) {
                  *(undefined2 *)puVar9 = 0x6469;
                  local_118 = (undefined8 *)0x2;
                  local_108 = 2;
                  puStack_110 = puVar9;
                  if (lVar1 != 0) {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar10 == (char *)0x0) {
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_006827c4;
                    }
                    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar1);
                  }
                  local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                  uStack_130 = (undefined *)lVar1;
                  uStack_128 = pcVar10;
                  uStack_120 = (undefined *)lVar1;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(local_100,local_b8,&local_118,&local_138);
                  if (local_100[0] != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(local_100);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar9 != (undefined8 *)0x0) {
                    *(undefined4 *)puVar9 = 0x65707974;
                    local_118 = (undefined8 *)&DAT_00000004;
                    local_108 = 4;
                    puStack_110 = puVar9;
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    pcVar10 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                    if (pcVar10 == (char *)0x0) {
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_006827c4;
                    }
                    builtin_strncpy(pcVar10,"reasoning",9);
                    local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                    uStack_130 = (undefined *)0x9;
                    uStack_120 = (undefined *)0x9;
                    uStack_128 = pcVar10;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(local_100,local_b8,&local_118,&local_138);
                    if (local_100[0] != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(local_100);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                    if (puVar9 != (undefined8 *)0x0) {
                      *(undefined2 *)((longlong)puVar9 + 4) = 0x7375;
                      *(undefined4 *)puVar9 = 0x74617473;
                      local_118 = (undefined8 *)&DAT_00000006;
                      local_108 = 6;
                      puStack_110 = puVar9;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      puVar9 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                      if (puVar9 != (undefined8 *)0x0) {
                        *puVar9 = 0x6574656c706d6f63;
                        *(undefined1 *)(puVar9 + 1) = 100;
                        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,3);
                        uStack_130 = (undefined *)0x9;
                        uStack_120 = (undefined *)0x9;
                        uStack_128 = (char *)puVar9;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(local_100,local_b8,&local_118,&local_138);
                        if (local_100[0] != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(local_100);
                        }
                        uStack_130 = (undefined *)local_b8[0];
                        uStack_120 = (undefined *)local_a8;
                        local_138 = (undefined8 *)CONCAT71(local_138._1_7_,5);
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(local_100,&local_a0,&local_78,&local_138);
                        plVar8 = local_80;
                        if (local_100[0] != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(local_100);
                        }
                        local_f8 = (undefined4)local_a0;
                        uStack_f4 = local_a0._4_4_;
                        uStack_f0 = uStack_98;
                        uStack_ec = uStack_94;
                        local_e8 = local_90;
                        local_100[0] = '\x05';
                        local_138 = &local_e0;
                        uStack_130 = PTR_fmt_00799758;
                        uStack_120 = PTR_fmt_00799758;
                        uStack_128 = local_100;
                        (*(code *)PTR_format_inner_00799048)((undefined4)local_a0,&local_138);
                        (*(code *)PTR_from_00799298)();
                        lVar1 = plVar8[2];
                        if (lVar1 == *plVar8) {
                          (*(code *)PTR_grow_one_0079a3a0)();
                        }
                        lVar3 = plVar8[1];
                        puVar11 = (undefined4 *)(lVar3 + 0x10 + lVar1 * 0x20);
                        *puVar11 = (undefined4)uStack_128;
                        puVar11[1] = uStack_128._4_4_;
                        puVar11[2] = (undefined4)uStack_120;
                        puVar11[3] = uStack_120._4_4_;
                        puVar11 = (undefined4 *)(lVar3 + lVar1 * 0x20);
                        *puVar11 = (undefined4)local_138;
                        puVar11[1] = local_138._4_4_;
                        puVar11[2] = (undefined4)uStack_130;
                        puVar11[3] = uStack_130._4_4_;
                        plVar8[2] = lVar1 + 1;
                        *(char **)(param_1 + 0x118) = local_c0 + 1;
                        *(undefined1 *)(param_1 + 0x12d) = 0;
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(local_100,local_60);
LAB_0068266d:
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_e0);
                        return;
                      }
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_006827c4;
                    }
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_006827c4;
              }
            }
          }
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_006827c4;
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_006827c4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


