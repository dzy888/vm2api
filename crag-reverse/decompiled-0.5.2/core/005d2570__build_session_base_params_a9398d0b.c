// 005d2570 build_session_base_params

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::build_session_base_params */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::build_session_base_params
          (undefined1 *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined1 auVar8 [16];
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined4 local_120;
  undefined1 uStack_11c;
  undefined2 uStack_11b;
  undefined1 uStack_119;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  local_d0 = 0;
  local_c8 = 8;
  local_c0 = 0;
  local_a0 = param_3;
  local_80 = param_1;
  if (*(longlong *)(param_3 + 0xc0) != -1) {
    param_3 = param_3 + 0xc0;
LAB_005d25e3:
    <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>,<craggemini_core[66f3c71560d70857]::acp_backend::AcpMcpServerSpec>::to_acp_json::{closure#0}>>>
    ::from_iter(&local_b8,*(longlong *)(param_3 + 0x50),
                *(longlong *)(param_3 + 0x58) * 0x30 + *(longlong *)(param_3 + 0x50));
    local_e8 = 0;
    local_d8 = 0;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x656d616e;
      local_128 = 4;
      uStack_127 = 0;
      local_120 = SUB84(puVar2,0);
      uStack_11c = (undefined1)((ulonglong)puVar2 >> 0x20);
      uStack_11b = (undefined2)((ulonglong)puVar2 >> 0x28);
      uStack_119 = (undefined1)((ulonglong)puVar2 >> 0x38);
      uStack_118 = 4;
      lVar6 = *(longlong *)(param_3 + 0x10);
      if (lVar6 < 0) {
LAB_005d266b:
        (*(code *)PTR_handle_error_00798ff0)();
        goto LAB_005d30ed;
      }
      if (lVar6 == 0) {
        lVar3 = 1;
      }
      else {
        local_130 = param_2;
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar3 = (*(code *)PTR___rust_alloc_00799000)();
        if (lVar3 == 0) goto LAB_005d266b;
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar6);
        param_2 = local_130;
      }
      local_150 = CONCAT31(local_150._1_3_,3);
      uStack_148 = lVar6;
      local_140 = lVar3;
      uStack_138 = lVar6;
      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
      ::insert(&local_108,&local_e8,&local_128,&local_150);
      if ((char)local_108 != -1) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                  (&local_108);
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar2 != (undefined4 *)0x0) {
        *(undefined4 *)((longlong)puVar2 + 3) = 0x646e616d;
        *puVar2 = 0x6d6d6f63;
        local_98 = 7;
        local_88 = 7;
        local_90 = puVar2;
        (*(code *)PTR_from_utf8_lossy_00799b68)(extraout_XMM0_Da_00,*(undefined8 *)(param_3 + 0x28))
        ;
        lVar6 = uStack_118;
        local_130 = CONCAT17(uStack_119,CONCAT25(uStack_11b,CONCAT14(uStack_11c,local_120)));
        if (uStack_118 < 0) {
LAB_005d2783:
          (*(code *)PTR_handle_error_00798ff0)();
          goto LAB_005d30ed;
        }
        if (uStack_118 == 0) {
          lVar3 = 1;
        }
        else {
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar3 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar3 == 0) goto LAB_005d2783;
          (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_01,lVar6);
        }
        local_150 = CONCAT31(local_150._1_3_,3);
        uStack_148 = lVar6;
        uStack_138 = lVar6;
        local_140 = lVar3;
        uVar7 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                ::insert(&local_108,&local_e8,&local_98,&local_150);
        if ((char)local_108 != -1) {
          uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_108);
        }
        if (0 < CONCAT71(uStack_127,local_128)) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0x73677261;
          local_128 = 4;
          uStack_127 = 0;
          local_120 = SUB84(puVar2,0);
          uStack_11c = (undefined1)((ulonglong)puVar2 >> 0x20);
          uStack_11b = (undefined2)((ulonglong)puVar2 >> 0x28);
          uStack_119 = (undefined1)((ulonglong)puVar2 >> 0x38);
          uStack_118 = 4;
          <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
          ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                    (&local_150,param_3 + 0x30);
          if ((char)local_150 == -1) {
            local_108 = uStack_148;
            (*(code *)PTR_unwrap_failed_00799028)
                      (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                       &local_108,&PTR_s_src_acp_backend_rs_0078e2f0);
            goto LAB_005d30ed;
          }
          local_f8 = (undefined4)local_140;
          uStack_f4 = local_140._4_4_;
          uStack_f0 = (undefined4)uStack_138;
          uStack_ec = uStack_138._4_4_;
          local_108 = CONCAT44(uStack_14c,local_150);
          uStack_100 = (undefined4)uStack_148;
          uStack_fc = uStack_148._4_4_;
          <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::insert(&local_150,&local_e8,&local_128,&local_108);
          if ((char)local_150 != -1) {
            core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                      (&local_150);
          }
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          puVar4 = (undefined2 *)(*(code *)PTR___rust_alloc_00799000)();
          if (puVar4 != (undefined2 *)0x0) {
            *(undefined1 *)(puVar4 + 1) = 0x76;
            *puVar4 = 0x6e65;
            local_128 = 3;
            uStack_127 = 0;
            local_120 = SUB84(puVar4,0);
            uStack_11c = (undefined1)((ulonglong)puVar4 >> 0x20);
            uStack_11b = (undefined2)((ulonglong)puVar4 >> 0x28);
            uStack_119 = (undefined1)((ulonglong)puVar4 >> 0x38);
            uStack_118 = 3;
            <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
            ::collect_seq::
            <&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                      (&local_150,&local_b8);
            if ((char)local_150 == -1) {
              local_108 = uStack_148;
              (*(code *)PTR_unwrap_failed_00799028)
                        (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,
                         &local_108,&PTR_s_src_acp_backend_rs_0078e2f0);
              goto LAB_005d30ed;
            }
            local_f8 = (undefined4)local_140;
            uStack_f4 = local_140._4_4_;
            uStack_f0 = (undefined4)uStack_138;
            uStack_ec = uStack_138._4_4_;
            local_108 = CONCAT44(uStack_14c,local_150);
            uStack_100 = (undefined4)uStack_148;
            uStack_fc = uStack_148._4_4_;
            <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_150,&local_e8,&local_128,&local_108);
            if ((char)local_150 != -1) {
              core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_150);
            }
            param_1 = local_80;
            uStack_148 = local_e8;
            local_140 = CONCAT44(uStack_dc,uStack_e0);
            uStack_138 = local_d8;
            local_150 = CONCAT31(local_150._1_3_,5);
            puVar5 = local_b0;
            uVar7 = (undefined4)local_e8;
            for (lVar6 = local_a8 + 1; lVar6 != 1; lVar6 = lVar6 + -1) {
              uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(puVar5);
              puVar5 = puVar5 + 4;
            }
            if (local_b8 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
            }
            lVar6 = local_c0;
            if (local_c0 == local_d0) {
              (*(code *)PTR_grow_one_00799310)();
            }
            lVar3 = lVar6 * 0x20;
            puVar2 = (undefined4 *)(local_c8 + 0x10 + lVar3);
            *puVar2 = (undefined4)local_140;
            puVar2[1] = local_140._4_4_;
            puVar2[2] = (undefined4)uStack_138;
            puVar2[3] = uStack_138._4_4_;
            puVar2 = (undefined4 *)(local_c8 + lVar3);
            *puVar2 = local_150;
            puVar2[1] = uStack_14c;
            puVar2[2] = (undefined4)uStack_148;
            puVar2[3] = uStack_148._4_4_;
            local_c0 = lVar6 + 1;
            goto LAB_005d2a38;
          }
        }
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_005d30ed;
  }
  if (*(longlong *)(param_2 + 0xe8) != -1) {
    param_3 = param_2 + 0xe8;
    goto LAB_005d25e3;
  }
LAB_005d2a38:
  local_e8 = 0;
  local_d8 = 0;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)puVar2 + 2) = 100;
    *(undefined2 *)puVar2 = 0x7763;
    local_98 = 3;
    local_88 = 3;
    local_90 = puVar2;
    (*(code *)PTR_from_utf8_lossy_00799b68)(extraout_XMM0_Da_02,*(undefined8 *)(param_2 + 0x80));
    lVar6 = uStack_118;
    local_130 = CONCAT17(uStack_119,CONCAT25(uStack_11b,CONCAT14(uStack_11c,local_120)));
    if (uStack_118 < 0) {
LAB_005d2aca:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_005d30ed;
    }
    if (uStack_118 == 0) {
      lVar3 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar3 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar3 == 0) goto LAB_005d2aca;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_03,lVar6);
    }
    local_150 = CONCAT31(local_150._1_3_,3);
    uStack_148 = lVar6;
    uStack_138 = lVar6;
    local_140 = lVar3;
    uVar7 = <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
            ::insert(&local_108,&local_e8,&local_98,&local_150);
    if ((char)local_108 != -1) {
      uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                        (&local_108);
    }
    if (0 < CONCAT71(uStack_127,local_128)) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0x657672655370636d;
      *(undefined2 *)(puVar5 + 1) = 0x7372;
      local_128 = 10;
      uStack_127 = 0;
      local_120 = SUB84(puVar5,0);
      uStack_11c = (undefined1)((ulonglong)puVar5 >> 0x20);
      uStack_11b = (undefined2)((ulonglong)puVar5 >> 0x28);
      uStack_119 = (undefined1)((ulonglong)puVar5 >> 0x38);
      uStack_118 = 10;
      <serde_json[dc3825464c436029]::value::ser::Serializer_as_serde_core[48776c27239fa21f]::ser::Serializer>
      ::collect_seq::<&alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>
                (&local_150,&local_d0);
      if ((char)local_150 != -1) {
        local_f8 = (undefined4)local_140;
        uStack_f4 = local_140._4_4_;
        uStack_f0 = (undefined4)uStack_138;
        uStack_ec = uStack_138._4_4_;
        local_108 = CONCAT44(uStack_14c,local_150);
        uStack_100 = (undefined4)uStack_148;
        uStack_fc = uStack_148._4_4_;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(&local_150,&local_e8,&local_128,&local_108);
        if ((char)local_150 != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (&local_150);
        }
        local_120 = (undefined4)local_e8;
        uStack_11c = (undefined1)((ulonglong)local_e8 >> 0x20);
        uStack_11b = (undefined2)((ulonglong)local_e8 >> 0x28);
        uStack_119 = (undefined1)((ulonglong)local_e8 >> 0x38);
        uStack_118 = CONCAT44(uStack_dc,uStack_e0);
        local_110 = local_d8;
        local_128 = 5;
        uVar7 = (undefined4)local_e8;
        if ((*(char *)(param_2 + 0x1fa) == '\x01') && (*(longlong *)(local_a0 + 0x60) != -1)) {
          auVar8 = ::<str>::trim_matches::<<char>::is_whitespace>
                             (*(undefined8 *)(local_a0 + 0x68),*(undefined8 *)(local_a0 + 0x70));
          lVar6 = auVar8._8_8_;
          uVar7 = extraout_XMM0_Da_04;
          if ((auVar8._0_8_ != 0) && (lVar6 != 0)) {
            local_78 = 0;
            local_68 = 0;
            local_a0 = auVar8._0_8_;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
            if (puVar5 == (undefined8 *)0x0) {
              (*(code *)PTR_handle_error_00798ff0)();
            }
            else {
              *puVar5 = 0x7661726769746e61;
              *(undefined4 *)((longlong)puVar5 + 7) = 0x79746976;
              local_48 = 0xb;
              local_38 = 0xb;
              local_60[0] = 0;
              local_50 = 0;
              local_40 = puVar5;
              (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
              puVar5 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
              if (puVar5 == (undefined8 *)0x0) {
                (*(code *)PTR_handle_error_00798ff0)();
              }
              else {
                *puVar5 = 0x72506d6574737973;
                *(undefined4 *)(puVar5 + 1) = 0x74706d6f;
                local_b8 = 0xc;
                local_a8 = 0xc;
                local_e8 = 0;
                local_d8 = 0;
                local_b0 = puVar5;
                (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                puVar2 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
                if (puVar2 == (undefined4 *)0x0) {
                  (*(code *)PTR_handle_error_00798ff0)();
                }
                else {
                  *(undefined2 *)(puVar2 + 1) = 0x646e;
                  *puVar2 = 0x65707061;
                  local_98 = 6;
                  local_88 = 6;
                  local_90 = puVar2;
                  if (-1 < lVar6) {
                    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
                    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
                    if (lVar3 != 0) {
                      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_05,lVar6);
                      local_150 = CONCAT31(local_150._1_3_,3);
                      uStack_148 = lVar6;
                      local_140 = lVar3;
                      uStack_138 = lVar6;
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_108,&local_e8,&local_98,&local_150);
                      param_1 = local_80;
                      if ((char)local_108 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_108);
                      }
                      uStack_148 = local_e8;
                      uStack_138 = local_d8;
                      local_150 = CONCAT31(local_150._1_3_,5);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_108,local_60,&local_b8,&local_150);
                      if ((char)local_108 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_108);
                      }
                      uStack_148 = local_60[0];
                      uStack_138 = local_50;
                      local_150 = CONCAT31(local_150._1_3_,5);
                      <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
                      ::insert(&local_108,&local_78,&local_48,&local_150);
                      if ((char)local_108 != -1) {
                        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                        <serde_json[dc3825464c436029]::value::Value>(&local_108);
                      }
                      uStack_148 = local_78;
                      local_140 = CONCAT44(uStack_6c,uStack_70);
                      uStack_138 = local_68;
                      local_150 = CONCAT31(local_150._1_3_,5);
                      puVar2 = (undefined4 *)
                               (*(code *)PTR_index_or_insert_007992f8)
                                         ((undefined4)local_78,&local_128);
                      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                      <serde_json[dc3825464c436029]::value::Value>(puVar2,5);
                      *(longlong *)(puVar2 + 4) = local_140;
                      *(longlong *)(puVar2 + 6) = uStack_138;
                      *puVar2 = local_150;
                      puVar2[1] = uStack_14c;
                      puVar2[2] = (undefined4)uStack_148;
                      puVar2[3] = uStack_148._4_4_;
                      uVar7 = local_150;
                      goto LAB_005d2f55;
                    }
                  }
                  (*(code *)PTR_handle_error_00798ff0)();
                }
              }
            }
            goto LAB_005d30ed;
          }
        }
LAB_005d2f55:
        *(longlong *)(param_1 + 0x10) = uStack_118;
        *(longlong *)(param_1 + 0x18) = local_110;
        *param_1 = local_128;
        *(ulonglong *)(param_1 + 1) = CONCAT17((undefined1)local_120,uStack_127);
        *(uint *)(param_1 + 9) = CONCAT13(uStack_11c,local_120._1_3_);
        *(undefined2 *)(param_1 + 0xd) = uStack_11b;
        param_1[0xf] = uStack_119;
        lVar6 = local_c8;
        for (lVar3 = local_c0 + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
          uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(lVar6);
          lVar6 = lVar6 + 0x20;
        }
        if (local_d0 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
        }
        return param_1;
      }
      local_108 = uStack_148;
      (*(code *)PTR_unwrap_failed_00799028)
                (&anon_30b5cef53457a6ea696e8d7e9f6273d6_200_llvm_8436237269785592069,&local_108,
                 &PTR_s_src_acp_backend_rs_0078e4c0);
      goto LAB_005d30ed;
    }
  }
  (*(code *)PTR_handle_error_00798ff0)();
LAB_005d30ed:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


