// 00673ca0 ensure_started

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::ensure_started */

void __rustcall
<craggemini_core[66f3c71560d70857]::multiprotocol::StreamTranscoder>::ensure_started
          (longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  char *pcVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined8 local_188;
  uint uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  uint uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  uint uStack_154;
  undefined8 uStack_150;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined4 *local_98;
  undefined1 local_78 [72];
  
  if (*(char *)(param_1 + 0x128) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x128) = 1;
  cVar2 = *(char *)(param_1 + 0xa8);
  local_f0 = param_2;
  if (cVar2 != '\x02') {
    if (cVar2 == '\x03') {
      local_120 = (undefined8 *)0x0;
      local_110 = 0;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined2 *)puVar7 = 0x6469;
        local_140 = 2;
        puStack_130 = (undefined8 *)0x2;
        lVar12 = *(longlong *)(param_1 + 0x28);
        local_138 = puVar7;
        if (lVar12 < 0) {
LAB_00673f1d:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_006758f4;
        }
        if (lVar12 == 0) {
          lVar9 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar9 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar9 == 0) goto LAB_00673f1d;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar12);
        }
        local_188._0_4_ = CONCAT31(local_188._1_3_,3);
        uStack_180 = (uint)lVar12;
        uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
        uStack_178._0_4_ = (undefined4)lVar9;
        uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
        uStack_170 = uStack_180;
        uStack_16c = uStack_17c;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_168,&local_120,&local_140,&local_188);
        if ((char)local_168 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_168);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined2 *)((longlong)puVar7 + 4) = 0x7463;
          *(undefined4 *)puVar7 = 0x656a626f;
          local_140 = 6;
          puStack_130 = (undefined8 *)&DAT_00000006;
          local_138 = puVar7;
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 == (undefined8 *)0x0) {
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_006758f4;
          }
          *puVar7 = 0x65736e6f70736572;
          local_188._0_4_ = CONCAT31(local_188._1_3_,3);
          uStack_180 = 8;
          uStack_17c = 0;
          uStack_178._0_4_ = SUB84(puVar7,0);
          uStack_178._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
          uStack_170 = 8;
          uStack_16c = 0;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_168,&local_120,&local_140,&local_188);
          if ((char)local_168 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_168);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0x5f64657461657263;
            *(undefined2 *)(puVar7 + 1) = 0x7461;
            local_140 = 10;
            puStack_130 = (undefined8 *)0xa;
            local_188._0_4_ = CONCAT31(local_188._1_3_,2);
            uStack_178._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x110) >> 0x20);
            uStack_180 = uStack_178._4_4_ >> 0x1f;
            uStack_17c = 0;
            uStack_178._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x110);
            local_138 = puVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_168,&local_120,&local_140,&local_188);
            if ((char)local_168 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_168);
            }
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined2 *)((longlong)puVar7 + 4) = 0x7375;
              *(undefined4 *)puVar7 = 0x74617473;
              local_140 = 6;
              puStack_130 = (undefined8 *)&DAT_00000006;
              local_138 = puVar7;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar7 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_006758f4;
              }
              *puVar7 = 0x72676f72705f6e69;
              *(undefined4 *)((longlong)puVar7 + 7) = 0x73736572;
              local_188._0_4_ = CONCAT31(local_188._1_3_,3);
              uStack_180 = 0xb;
              uStack_17c = 0;
              uStack_178._0_4_ = SUB84(puVar7,0);
              uStack_178._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
              uStack_170 = 0xb;
              uStack_16c = 0;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_168,&local_120,&local_140,&local_188);
              if ((char)local_168 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_168);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar7 + 4) = 0x6c;
                *(undefined4 *)puVar7 = 0x65646f6d;
                local_140 = 5;
                puStack_130 = (undefined8 *)&DAT_00000005;
                lVar12 = *(longlong *)(param_1 + 0xc0);
                local_138 = puVar7;
                if (lVar12 < 0) {
LAB_0067431a:
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_006758f4;
                }
                if (lVar12 == 0) {
                  lVar9 = 1;
                }
                else {
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  lVar9 = (*(code *)PTR___rust_alloc_00799000)();
                  if (lVar9 == 0) goto LAB_0067431a;
                  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar12);
                }
                local_188._0_4_ = CONCAT31(local_188._1_3_,3);
                uStack_180 = (uint)lVar12;
                uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
                uStack_178._0_4_ = (undefined4)lVar9;
                uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
                uStack_170 = uStack_180;
                uStack_16c = uStack_17c;
                <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_168,&local_120,&local_140,&local_188);
                if ((char)local_168 != -1) {
                  core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_168);
                }
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar7 != (undefined8 *)0x0) {
                  *(undefined2 *)((longlong)puVar7 + 4) = 0x7475;
                  *(undefined4 *)puVar7 = 0x7074756f;
                  local_140 = 6;
                  puStack_130 = (undefined8 *)&DAT_00000006;
                  uStack_180 = 0;
                  uStack_17c = 0;
                  uStack_178._0_4_ = 8;
                  uStack_178._4_4_ = 0;
                  uStack_170 = 0;
                  uStack_16c = 0;
                  local_188._0_4_ = CONCAT31(local_188._1_3_,4);
                  local_138 = puVar7;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_168,&local_120,&local_140,&local_188);
                  if ((char)local_168 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_168);
                  }
                  uStack_c8 = (undefined4)local_120;
                  uStack_c4 = local_120._4_4_;
                  local_c0 = puStack_118;
                  local_b8 = local_110;
                  local_d0 = CONCAT71(local_d0._1_7_,5);
                  local_120 = (undefined8 *)0x0;
                  local_110 = 0;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar7 != (undefined8 *)0x0) {
                    *(undefined4 *)puVar7 = 0x65707974;
                    local_140 = 4;
                    puStack_130 = (undefined8 *)&DAT_00000004;
                    local_138 = puVar7;
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                    uVar6 = _UNK_001848bc;
                    uVar5 = _UNK_001848b8;
                    uVar4 = _UNK_001848b4;
                    if (puVar8 == (undefined4 *)0x0) {
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_006758f4;
                    }
                    *puVar8 = _DAT_001848b0;
                    puVar8[1] = uVar4;
                    puVar8[2] = uVar5;
                    puVar8[3] = uVar6;
                    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
                    uStack_180 = 0x10;
                    uStack_17c = 0;
                    uStack_178._0_4_ = SUB84(puVar8,0);
                    uStack_178._4_4_ = (uint)((ulonglong)puVar8 >> 0x20);
                    uStack_170 = 0x10;
                    uStack_16c = 0;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_168,&local_120,&local_140,&local_188);
                    if ((char)local_168 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_168);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                    if (puVar7 != (undefined8 *)0x0) {
                      *puVar7 = 0x65736e6f70736572;
                      local_140 = 8;
                      puStack_130 = (undefined8 *)&DAT_00000008;
                      local_138 = puVar7;
                      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                                (&local_188,&local_d0);
                      if ((char)local_188 == -1) {
                        local_168 = CONCAT44(uStack_17c,uStack_180);
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,
                                   &local_168,&PTR_s_src_multiprotocol_rs_00790e40);
                        goto LAB_006758f4;
                      }
                      local_158 = (undefined4)uStack_178;
                      uStack_154 = uStack_178._4_4_;
                      uStack_150 = CONCAT44(uStack_16c,uStack_170);
                      local_168 = CONCAT44(local_188._4_4_,(undefined4)local_188);
                      uStack_160 = uStack_180;
                      uStack_15c = uStack_17c;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_188,&local_120,&local_140,&local_168);
                      if ((char)local_188 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_188);
                      }
                      local_138 = local_120;
                      puStack_130 = puStack_118;
                      local_128 = local_110;
                      local_140 = CONCAT71(local_140._1_7_,5);
                      local_108 = 0;
                      local_f8 = 0;
                      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                      if (puVar7 != (undefined8 *)0x0) {
                        *(undefined4 *)puVar7 = 0x65707974;
                        local_120 = (undefined8 *)&DAT_00000004;
                        local_110 = 4;
                        puStack_118 = puVar7;
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        pcVar11 = (char *)(*(code *)PTR___rust_alloc_00799000)();
                        uVar6 = s_response_in_progress_001a4ca5._12_4_;
                        uVar5 = s_response_in_progress_001a4ca5._8_4_;
                        uVar4 = s_response_in_progress_001a4ca5._4_4_;
                        if (pcVar11 == (char *)0x0) {
                          (*(code *)PTR_handle_error_00798ff0)();
                          goto LAB_006758f4;
                        }
                        *(undefined4 *)pcVar11 = s_response_in_progress_001a4ca5._0_4_;
                        *(undefined4 *)(pcVar11 + 4) = uVar4;
                        *(undefined4 *)(pcVar11 + 8) = uVar5;
                        *(undefined4 *)(pcVar11 + 0xc) = uVar6;
                        pcVar11[0x10] = 'r';
                        pcVar11[0x11] = 'e';
                        pcVar11[0x12] = 's';
                        pcVar11[0x13] = 's';
                        local_188._0_4_ = CONCAT31(local_188._1_3_,3);
                        uStack_180 = 0x14;
                        uStack_17c = 0;
                        uStack_178._0_4_ = SUB84(pcVar11,0);
                        uStack_178._4_4_ = (uint)((ulonglong)pcVar11 >> 0x20);
                        uStack_170 = 0x14;
                        uStack_16c = 0;
                        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                        ::insert(&local_168,&local_108,&local_120,&local_188);
                        if ((char)local_168 != -1) {
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_168);
                        }
                        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                        if (puVar7 != (undefined8 *)0x0) {
                          *puVar7 = 0x65736e6f70736572;
                          local_120 = (undefined8 *)&DAT_00000008;
                          local_110 = 8;
                          puStack_118 = puVar7;
                          <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                          ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                                    (&local_188,&local_d0);
                          if ((char)local_188 == -1) {
                            local_168 = CONCAT44(uStack_17c,uStack_180);
                            (*(code *)PTR_unwrap_failed_00799028)
                                      (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,
                                       &local_168,&PTR_s_src_multiprotocol_rs_00790e58);
                            goto LAB_006758f4;
                          }
                          local_158 = (undefined4)uStack_178;
                          uStack_154 = uStack_178._4_4_;
                          uStack_150 = CONCAT44(uStack_16c,uStack_170);
                          local_168 = CONCAT44(local_188._4_4_,(undefined4)local_188);
                          uStack_160 = uStack_180;
                          uStack_15c = uStack_17c;
                          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                          ::insert(&local_188,&local_108,&local_120,&local_168);
                          if ((char)local_188 != -1) {
                            core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                            <serde_json[dc3825464c436029]::value::Value>(&local_188);
                          }
                          uStack_160 = (undefined4)local_108;
                          uStack_15c = local_108._4_4_;
                          local_158 = uStack_100;
                          uStack_154 = uStack_fc;
                          uStack_150 = local_f8;
                          local_168 = CONCAT71(local_168._1_7_,5);
                          uStack_180 = (uint)PTR_fmt_00799758;
                          uStack_17c = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
                          uStack_170 = uStack_180;
                          uStack_16c = uStack_17c;
                          local_188 = &local_140;
                          uStack_178 = &local_168;
                          (*(code *)PTR_format_inner_00799048)((undefined4)local_108,&local_188);
                          (*(code *)PTR_from_00799298)();
                          plVar13 = local_f0;
                          lVar12 = local_f0[2];
                          if (lVar12 == *local_f0) {
                            (*(code *)PTR_grow_one_0079a3a0)();
                          }
                          lVar9 = plVar13[1];
                          plVar1 = (longlong *)(lVar9 + 0x10 + lVar12 * 0x20);
                          *plVar1 = (longlong)uStack_178;
                          *(uint *)(plVar1 + 1) = uStack_170;
                          *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_16c;
                          plVar1 = (longlong *)(lVar9 + lVar12 * 0x20);
                          *plVar1 = (longlong)local_188;
                          *(uint *)(plVar1 + 1) = uStack_180;
                          *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_17c;
                          plVar13[2] = lVar12 + 1;
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_168,local_78);
                          core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                          <serde_json[dc3825464c436029]::value::Value>(&local_140);
                          puVar7 = &local_d0;
                          goto LAB_00675683;
                        }
                      }
                      (*(code *)PTR_handle_error_00798ff0)();
                      goto LAB_006758f4;
                    }
                  }
                  (*(code *)PTR_handle_error_00798ff0)();
                  goto LAB_006758f4;
                }
              }
            }
          }
        }
      }
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    if (cVar2 != '\x04') {
      return;
    }
    local_e8 = 0;
    local_d8 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) {
LAB_006757df:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    *(undefined4 *)puVar7 = 0x65707974;
    local_140 = 4;
    puStack_130 = (undefined8 *)&DAT_00000004;
    local_138 = puVar7;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    *(undefined8 *)((longlong)puVar7 + 5) = 0x74726174735f6567;
    *puVar7 = 0x5f6567617373656d;
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = 0xd;
    uStack_17c = 0;
    uStack_178._0_4_ = SUB84(puVar7,0);
    uStack_178._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
    uStack_170 = 0xd;
    uStack_16c = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_e8,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 == (undefined4 *)0x0) goto LAB_006757df;
    *(undefined4 *)((longlong)puVar8 + 3) = 0x65676173;
    *puVar8 = 0x7373656d;
    local_b0 = 7;
    local_a0 = 7;
    local_108 = 0;
    local_f8 = 0;
    local_a8 = puVar8;
    local_98 = puVar8;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
    *(undefined2 *)puVar7 = 0x6469;
    local_140 = 2;
    puStack_130 = (undefined8 *)0x2;
    lVar12 = *(longlong *)(param_1 + 0x28);
    local_138 = puVar7;
    if (lVar12 < 0) {
LAB_00673e9f:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    if (lVar12 == 0) {
      lVar9 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar9 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar9 == 0) goto LAB_00673e9f;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar12);
    }
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = (uint)lVar12;
    uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
    uStack_178._0_4_ = (undefined4)lVar9;
    uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_108,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
    *(undefined4 *)puVar7 = 0x65707974;
    local_140 = 4;
    puStack_130 = (undefined8 *)&DAT_00000004;
    local_138 = puVar7;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar8 == (undefined4 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    *(undefined4 *)((longlong)puVar8 + 3) = 0x65676173;
    *puVar8 = 0x7373656d;
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = 7;
    uStack_17c = 0;
    uStack_178._0_4_ = SUB84(puVar8,0);
    uStack_178._4_4_ = (uint)((ulonglong)puVar8 >> 0x20);
    uStack_170 = 7;
    uStack_16c = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_108,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
    *(undefined4 *)puVar7 = 0x656c6f72;
    local_140 = 4;
    puStack_130 = (undefined8 *)&DAT_00000004;
    local_138 = puVar7;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    *puVar7 = 0x6e61747369737361;
    *(undefined1 *)(puVar7 + 1) = 0x74;
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = 9;
    uStack_17c = 0;
    uStack_178._0_4_ = SUB84(puVar7,0);
    uStack_178._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
    uStack_170 = 9;
    uStack_16c = 0;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_108,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
    *(undefined1 *)((longlong)puVar7 + 4) = 0x6c;
    *(undefined4 *)puVar7 = 0x65646f6d;
    local_140 = 5;
    puStack_130 = (undefined8 *)&DAT_00000005;
    lVar12 = *(longlong *)(param_1 + 0xc0);
    local_138 = puVar7;
    if (lVar12 < 0) {
LAB_006747c0:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    if (lVar12 == 0) {
      lVar9 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar9 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar9 == 0) goto LAB_006747c0;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_04,lVar12);
    }
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = (uint)lVar12;
    uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
    uStack_178._0_4_ = (undefined4)lVar9;
    uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_108,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined4 *)((longlong)puVar7 + 3) = 0x746e6574;
      *(undefined4 *)puVar7 = 0x746e6f63;
      local_140 = 7;
      puStack_130 = (undefined8 *)&DAT_00000007;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178._0_4_ = 8;
      uStack_178._4_4_ = 0;
      uStack_170 = 0;
      uStack_16c = 0;
      local_188._0_4_ = CONCAT31(local_188._1_3_,4);
      local_138 = puVar7;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_108,&local_140,&local_188);
      if ((char)local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = 0x6165725f706f7473;
        *(undefined4 *)((longlong)puVar7 + 7) = 0x6e6f7361;
        local_140 = 0xb;
        puStack_130 = (undefined8 *)0xb;
        local_138 = puVar7;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_188,"");
        if ((char)local_188 == -1) {
          local_168 = CONCAT44(uStack_17c,uStack_180);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_168,
                     &PTR_s_src_multiprotocol_rs_00790e70);
          goto LAB_006758f4;
        }
        local_158 = (undefined4)uStack_178;
        uStack_154 = uStack_178._4_4_;
        uStack_150 = CONCAT44(uStack_16c,uStack_170);
        local_168 = CONCAT44(local_188._4_4_,(undefined4)local_188);
        uStack_160 = uStack_180;
        uStack_15c = uStack_17c;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_188,&local_108,&local_140,&local_168);
        if ((char)local_188 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_188);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
        *(undefined8 *)((longlong)puVar7 + 5) = 0x65636e6575716573;
        *puVar7 = 0x7165735f706f7473;
        local_140 = 0xd;
        puStack_130 = (undefined8 *)&DAT_0000000d;
        local_138 = puVar7;
        <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
        ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_188,"");
        if ((char)local_188 == -1) {
          local_168 = CONCAT44(uStack_17c,uStack_180);
          (*(code *)PTR_unwrap_failed_00799028)
                    (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,&local_168,
                     &PTR_s_src_multiprotocol_rs_00790e70);
          goto LAB_006758f4;
        }
        local_158 = (undefined4)uStack_178;
        uStack_154 = uStack_178._4_4_;
        uStack_150 = CONCAT44(uStack_16c,uStack_170);
        local_168 = CONCAT44(local_188._4_4_,(undefined4)local_188);
        uStack_160 = uStack_180;
        uStack_15c = uStack_17c;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_188,&local_108,&local_140,&local_168);
        if ((char)local_188 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_188);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 == (undefined8 *)0x0) goto LAB_006757a6;
        *(undefined1 *)((longlong)puVar7 + 4) = 0x65;
        *(undefined4 *)puVar7 = 0x67617375;
        local_120 = (undefined8 *)&DAT_00000005;
        local_110 = 5;
        local_d0 = 0;
        local_c0 = (undefined8 *)0x0;
        puStack_118 = puVar7;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0x6f745f7475706e69;
          *(undefined4 *)(puVar7 + 1) = 0x736e656b;
          local_140 = 0xc;
          puStack_130 = (undefined8 *)0xc;
          local_188._0_4_ = CONCAT31(local_188._1_3_,2);
          uStack_180 = 0;
          uStack_17c = 0;
          uStack_178._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0xe8);
          uStack_178._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_1 + 0xe8) >> 0x20);
          local_138 = puVar7;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_168,&local_d0,&local_140,&local_188);
          if ((char)local_168 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_168);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined8 *)((longlong)puVar7 + 5) = 0x736e656b6f745f74;
            *puVar7 = 0x745f74757074756f;
            local_140 = 0xd;
            puStack_130 = (undefined8 *)&DAT_0000000d;
            local_188._0_4_ = CONCAT31(local_188._1_3_,2);
            uStack_180 = 0;
            uStack_17c = 0;
            uStack_178._0_4_ = 0;
            uStack_178._4_4_ = 0;
            local_138 = puVar7;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_168,&local_d0,&local_140,&local_188);
            if ((char)local_168 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_168);
            }
            uStack_180 = (uint)local_d0;
            uStack_17c = local_d0._4_4_;
            uStack_178._0_4_ = uStack_c8;
            uStack_178._4_4_ = uStack_c4;
            uStack_170 = (uint)local_c0;
            uStack_16c = (undefined4)((ulonglong)local_c0 >> 0x20);
            local_188._0_4_ = CONCAT31(local_188._1_3_,5);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_168,&local_108,&local_120,&local_188);
            if ((char)local_168 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_168);
            }
            uStack_180 = (undefined4)local_108;
            uStack_17c = local_108._4_4_;
            uStack_178._0_4_ = uStack_100;
            uStack_178._4_4_ = uStack_fc;
            uStack_170 = (uint)local_f8;
            uStack_16c = (undefined4)((ulonglong)local_f8 >> 0x20);
            local_188._0_4_ = CONCAT31(local_188._1_3_,5);
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_168,&local_e8,&local_b0,&local_188);
            if ((char)local_168 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_168);
            }
            uStack_160 = (undefined4)local_e8;
            uStack_15c = local_e8._4_4_;
            local_158 = uStack_e0;
            uStack_154 = uStack_dc;
            uStack_150 = local_d8;
            local_168 = CONCAT71(local_168._1_7_,5);
            uStack_180 = (uint)PTR_fmt_00799758;
            uStack_17c = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
            local_188 = &local_168;
            (*(code *)PTR_format_inner_00799048)((undefined4)local_e8,&local_188);
            (*(code *)PTR_from_00799298)();
            plVar13 = local_f0;
            lVar12 = local_f0[2];
            if (lVar12 == *local_f0) {
              (*(code *)PTR_grow_one_0079a3a0)();
            }
            goto LAB_0067565a;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006758f4;
      }
    }
LAB_006757a6:
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_006758f4;
  }
  local_e8 = 0;
  local_d8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined2 *)puVar7 = 0x6469;
    local_140 = 2;
    puStack_130 = (undefined8 *)0x2;
    lVar12 = *(longlong *)(param_1 + 0x28);
    local_138 = puVar7;
    if (lVar12 < 0) {
LAB_00673f9d:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_006758f4;
    }
    if (lVar12 == 0) {
      lVar9 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar9 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar9 == 0) goto LAB_00673f9d;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_00,lVar12);
    }
    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
    uStack_180 = (uint)lVar12;
    uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
    uStack_178._0_4_ = (undefined4)lVar9;
    uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
    uStack_170 = uStack_180;
    uStack_16c = uStack_17c;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(&local_168,&local_e8,&local_140,&local_188);
    if ((char)local_168 != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                (&local_168);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar7 != (undefined8 *)0x0) {
      *(undefined2 *)((longlong)puVar7 + 4) = 0x7463;
      *(undefined4 *)puVar7 = 0x656a626f;
      local_140 = 6;
      puStack_130 = (undefined8 *)&DAT_00000006;
      local_138 = puVar7;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pcVar11 = (char *)(*(code *)PTR___rust_alloc_00799000)();
      uVar6 = s_chat_completion_chunk_001a4c76._12_4_;
      uVar5 = s_chat_completion_chunk_001a4c76._8_4_;
      uVar4 = s_chat_completion_chunk_001a4c76._4_4_;
      if (pcVar11 == (char *)0x0) {
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_006758f4;
      }
      *(undefined4 *)pcVar11 = s_chat_completion_chunk_001a4c76._0_4_;
      *(undefined4 *)(pcVar11 + 4) = uVar4;
      *(undefined4 *)(pcVar11 + 8) = uVar5;
      *(undefined4 *)(pcVar11 + 0xc) = uVar6;
      pcVar11[0xd] = 'o';
      pcVar11[0xe] = 'n';
      pcVar11[0xf] = '.';
      pcVar11[0x10] = 'c';
      pcVar11[0x11] = 'h';
      pcVar11[0x12] = 'u';
      pcVar11[0x13] = 'n';
      pcVar11[0x14] = 'k';
      local_188._0_4_ = CONCAT31(local_188._1_3_,3);
      uStack_180 = 0x15;
      uStack_17c = 0;
      uStack_178._0_4_ = SUB84(pcVar11,0);
      uStack_178._4_4_ = (uint)((ulonglong)pcVar11 >> 0x20);
      uStack_170 = 0x15;
      uStack_16c = 0;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_168,&local_e8,&local_140,&local_188);
      if ((char)local_168 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_168);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar7 + 3) = 0x64657461;
        *(undefined4 *)puVar7 = 0x61657263;
        local_140 = 7;
        puStack_130 = (undefined8 *)&DAT_00000007;
        local_188._0_4_ = CONCAT31(local_188._1_3_,2);
        uStack_178._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x110) >> 0x20);
        uStack_180 = uStack_178._4_4_ >> 0x1f;
        uStack_17c = 0;
        uStack_178._0_4_ = (undefined4)*(undefined8 *)(param_1 + 0x110);
        local_138 = puVar7;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_168,&local_e8,&local_140,&local_188);
        if ((char)local_168 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_168);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar7 != (undefined8 *)0x0) {
          *(undefined1 *)((longlong)puVar7 + 4) = 0x6c;
          *(undefined4 *)puVar7 = 0x65646f6d;
          local_140 = 5;
          puStack_130 = (undefined8 *)&DAT_00000005;
          lVar12 = *(longlong *)(param_1 + 0xc0);
          local_138 = puVar7;
          if (lVar12 < 0) {
LAB_00674560:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_006758f4;
          }
          if (lVar12 == 0) {
            lVar9 = 1;
          }
          else {
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            lVar9 = (*(code *)PTR___rust_alloc_00799000)();
            if (lVar9 == 0) goto LAB_00674560;
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar12);
          }
          local_188._0_4_ = CONCAT31(local_188._1_3_,3);
          uStack_180 = (uint)lVar12;
          uStack_17c = (undefined4)((ulonglong)lVar12 >> 0x20);
          uStack_178._0_4_ = (undefined4)lVar9;
          uStack_178._4_4_ = (uint)((ulonglong)lVar9 >> 0x20);
          uStack_170 = uStack_180;
          uStack_16c = uStack_17c;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_168,&local_e8,&local_140,&local_188);
          if ((char)local_168 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_168);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar8 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar8 != (undefined4 *)0x0) {
            *(undefined4 *)((longlong)puVar8 + 3) = 0x73656369;
            *puVar8 = 0x696f6863;
            local_b0 = 7;
            local_a0 = 7;
            local_a8 = puVar8;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar10 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar10 == (undefined1 *)0x0) {
              (*(code *)PTR_handle_alloc_error_007991d8)();
              goto LAB_006758f4;
            }
            local_108 = 0;
            local_f8 = 0;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar7 != (undefined8 *)0x0) {
              *(undefined1 *)((longlong)puVar7 + 4) = 0x78;
              *(undefined4 *)puVar7 = 0x65646e69;
              local_140 = 5;
              puStack_130 = (undefined8 *)&DAT_00000005;
              local_188._0_4_ = CONCAT31(local_188._1_3_,2);
              uStack_180 = 0;
              uStack_17c = 0;
              uStack_178._0_4_ = 0;
              uStack_178._4_4_ = 0;
              local_138 = puVar7;
              <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              ::insert(&local_168,&local_108,&local_140,&local_188);
              if ((char)local_168 != -1) {
                core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                          (&local_168);
              }
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar7 != (undefined8 *)0x0) {
                *(undefined1 *)((longlong)puVar7 + 4) = 0x61;
                *(undefined4 *)puVar7 = 0x746c6564;
                local_120 = (undefined8 *)&DAT_00000005;
                local_110 = 5;
                local_d0 = 0;
                local_c0 = (undefined8 *)0x0;
                puStack_118 = puVar7;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar7 != (undefined8 *)0x0) {
                  *(undefined4 *)puVar7 = 0x656c6f72;
                  local_140 = 4;
                  puStack_130 = (undefined8 *)&DAT_00000004;
                  local_138 = puVar7;
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar7 == (undefined8 *)0x0) {
                    (*(code *)PTR_handle_error_00798ff0)();
                    goto LAB_006758f4;
                  }
                  *puVar7 = 0x6e61747369737361;
                  *(undefined1 *)(puVar7 + 1) = 0x74;
                  local_188._0_4_ = CONCAT31(local_188._1_3_,3);
                  uStack_180 = 9;
                  uStack_17c = 0;
                  uStack_178._0_4_ = SUB84(puVar7,0);
                  uStack_178._4_4_ = (uint)((ulonglong)puVar7 >> 0x20);
                  uStack_170 = 9;
                  uStack_16c = 0;
                  <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                  ::insert(&local_168,&local_d0,&local_140,&local_188);
                  if ((char)local_168 != -1) {
                    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <serde_json[dc3825464c436029]::value::Value>(&local_168);
                  }
                  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                  puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                  if (puVar7 != (undefined8 *)0x0) {
                    *(undefined4 *)((longlong)puVar7 + 3) = 0x746e6574;
                    *(undefined4 *)puVar7 = 0x746e6f63;
                    local_140 = 7;
                    puStack_130 = (undefined8 *)&DAT_00000007;
                    local_188._0_4_ = CONCAT31(local_188._1_3_,3);
                    uStack_180 = 0;
                    uStack_17c = 0;
                    uStack_178._0_4_ = 1;
                    uStack_178._4_4_ = 0;
                    uStack_170 = 0;
                    uStack_16c = 0;
                    local_138 = puVar7;
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_168,&local_d0,&local_140,&local_188);
                    if ((char)local_168 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_168);
                    }
                    uStack_180 = (uint)local_d0;
                    uStack_17c = local_d0._4_4_;
                    uStack_178._0_4_ = uStack_c8;
                    uStack_178._4_4_ = uStack_c4;
                    uStack_170 = (uint)local_c0;
                    uStack_16c = (undefined4)((ulonglong)local_c0 >> 0x20);
                    local_188._0_4_ = CONCAT31(local_188._1_3_,5);
                    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                    ::insert(&local_168,&local_108,&local_120,&local_188);
                    if ((char)local_168 != -1) {
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(&local_168);
                    }
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
                    if (puVar7 != (undefined8 *)0x0) {
                      *(undefined8 *)((longlong)puVar7 + 5) = 0x6e6f736165725f68;
                      *puVar7 = 0x725f6873696e6966;
                      local_140 = 0xd;
                      puStack_130 = (undefined8 *)&DAT_0000000d;
                      local_138 = puVar7;
                      <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
                      ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>
                                (&local_188,"");
                      if ((char)local_188 == -1) {
                        local_168 = CONCAT44(uStack_17c,uStack_180);
                        (*(code *)PTR_unwrap_failed_00799028)
                                  (&PTR_<serde_json[dc3825464c436029]::error::Error>_00791358,
                                   &local_168,&PTR_s_src_multiprotocol_rs_00790df8);
                        goto LAB_006758f4;
                      }
                      local_158 = (undefined4)uStack_178;
                      uStack_154 = uStack_178._4_4_;
                      uStack_150 = CONCAT44(uStack_16c,uStack_170);
                      local_168 = CONCAT44(local_188._4_4_,(undefined4)local_188);
                      uStack_160 = uStack_180;
                      uStack_15c = uStack_17c;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_188,&local_108,&local_140,&local_168);
                      if ((char)local_188 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_188);
                      }
                      local_188._7_1_ = (undefined1)local_108;
                      uStack_180 = (uint)((ulonglong)local_108 >> 8);
                      uStack_17c._0_3_ = (undefined3)((ulonglong)local_108 >> 0x28);
                      uStack_17c._3_1_ = (undefined1)uStack_100;
                      uStack_178._0_4_ = (undefined4)(CONCAT44(uStack_fc,uStack_100) >> 8);
                      *puVar10 = 5;
                      *(ulonglong *)(puVar10 + 0x10) =
                           CONCAT35((int3)((uint)uStack_fc >> 8),
                                    CONCAT41((undefined4)uStack_178,uStack_17c._3_1_));
                      *(undefined8 *)(puVar10 + 0x18) = local_f8;
                      *(undefined4 *)(puVar10 + 1) = (undefined4)local_188;
                      *(undefined4 *)(puVar10 + 5) = local_188._4_4_;
                      *(uint *)(puVar10 + 9) = uStack_180;
                      *(undefined4 *)(puVar10 + 0xd) = uStack_17c;
                      uStack_180 = 1;
                      uStack_17c = 0;
                      uStack_178._0_4_ = SUB84(puVar10,0);
                      uStack_178._4_4_ = (uint)((ulonglong)puVar10 >> 0x20);
                      uStack_170 = 1;
                      uStack_16c = 0;
                      local_188._0_4_ = CONCAT31(local_188._1_3_,4);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_168,&local_e8,&local_b0,&local_188);
                      if ((char)local_168 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_168);
                      }
                      uStack_160 = (undefined4)local_e8;
                      uStack_15c = local_e8._4_4_;
                      local_158 = uStack_e0;
                      uStack_154 = uStack_dc;
                      uStack_150 = local_d8;
                      local_168 = CONCAT71(local_168._1_7_,5);
                      uStack_180 = (uint)PTR_fmt_00799758;
                      uStack_17c = (undefined4)((ulonglong)PTR_fmt_00799758 >> 0x20);
                      local_188 = &local_168;
                      (*(code *)PTR_format_inner_00799048)((undefined4)local_e8,&local_188);
                      plVar13 = local_f0;
                      (*(code *)PTR_from_00799298)();
                      lVar12 = plVar13[2];
                      if (lVar12 == *plVar13) {
                        (*(code *)PTR_grow_one_0079a3a0)();
                      }
LAB_0067565a:
                      lVar9 = plVar13[1];
                      plVar1 = (longlong *)(lVar9 + 0x10 + lVar12 * 0x20);
                      *plVar1 = (longlong)uStack_178;
                      plVar1[1] = CONCAT44(uStack_16c,uStack_170);
                      plVar1 = (longlong *)(lVar9 + lVar12 * 0x20);
                      *plVar1 = (longlong)local_188;
                      *(uint *)(plVar1 + 1) = uStack_180;
                      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_17c;
                      plVar13[2] = lVar12 + 1;
                      puVar7 = &local_168;
LAB_00675683:
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(puVar7);
                      return;
                    }
                    goto LAB_00675807;
                  }
                }
                (*(code *)PTR_handle_error_00798ff0)();
                goto LAB_006758f4;
              }
            }
LAB_00675807:
            (*(code *)PTR_handle_error_00798ff0)();
            goto LAB_006758f4;
          }
        }
      }
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_006758f4:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


